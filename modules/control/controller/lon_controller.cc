/****************************************************************************
 * Copyright 2017 The JmcAuto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#include "modules/control/controller/lon_controller.h"

#include <cstdio>
#include <utility>

#include "modules/common/configs/vehicle_config_helper.h"
#include "modules/common/log.h"
#include "modules/common/math/math_utils.h"
#include "modules/common/time/jmcauto_time.h"
#include "modules/common/util/string_util.h"
#include "modules/control/common/control_gflags.h"
#include "modules/localization/common/localization_gflags.h"

namespace jmc_auto {
namespace control {

using jmc_auto::common::ErrorCode;
using jmc_auto::common::Status;
using jmc_auto::common::TrajectoryPoint;
using jmc_auto::common::VehicleStateProvider;
using jmc_auto::common::time::Clock;

constexpr double GRA_ACC = 9.8;

LonController::LonController()
    : name_(ControlConf_ControllerType_Name(ControlConf::LON_CONTROLLER)) {
  if (FLAGS_enable_csv_debug) {
    time_t rawtime;
    char name_buffer[80];
    std::time(&rawtime);
    strftime(name_buffer, 80, "/tmp/speed_log__%F_%H%M%S.csv",
             localtime(&rawtime));
    speed_log_file_ = fopen(name_buffer, "w");
    if (speed_log_file_ == nullptr) {
      AERROR << "Fail to open file:" << name_buffer;
      FLAGS_enable_csv_debug = false;
    }
    if (speed_log_file_ != nullptr) {
      fprintf(speed_log_file_,
              "station_reference,"
              "station_error,"
              "station_error_limited,"
              "preview_station_error,"
              "speed_reference,"
              "speed_error,"
              "speed_error_limited,"
              "preview_speed_reference,"
              "preview_speed_error,"
              "preview_acceleration_reference,"
              "acceleration_cmd_closeloop,"
              "acceleration_cmd,"
              "acceleration_lookup,"
              "speed_real,"
              "is_full_stop,"
              "\r\n");
      fflush(speed_log_file_);
    }
    AINFO << name_ << " used.";
  }
}

void LonController::CloseLogFile() 
{
  if (FLAGS_enable_csv_debug) 
  {
    if (speed_log_file_ != nullptr) 
    {
      fclose(speed_log_file_);
      speed_log_file_ = nullptr;
    }
  }
}
void LonController::Stop() { CloseLogFile(); }

LonController::~LonController() { CloseLogFile(); }

Status LonController::Init(const ControlConf *control_conf) 
{
  control_conf_ = control_conf;
  if (control_conf_ == nullptr) 
  {
    controller_initialized_ = false;
    AERROR << "get_longitudinal_param() nullptr";
    return Status(ErrorCode::CONTROL_INIT_ERROR,
                  "Failed to load LonController conf");
  }
  const LonControllerConf &lon_controller_conf =
      control_conf_->lon_controller_conf();

  station_pid_controller_.Init(lon_controller_conf.station_pid_conf());
  speed_pid_controller_.Init(lon_controller_conf.low_speed_pid_conf());

  vehicle_param_.CopyFrom(
      common::VehicleConfigHelper::instance()->GetConfig().vehicle_param());

  SetDigitalFilterPitchAngle(lon_controller_conf);
  lon_acc_filter_ = common::MeanFilter(
	lon_controller_conf.mean_filter_window_size()) ;
  LoadControlCalibrationTable(lon_controller_conf);
  controller_initialized_ = true;
  return Status::OK();
}

void LonController::SetDigitalFilterPitchAngle(
    const LonControllerConf &lon_controller_conf) 
{
  double cutoff_freq =
      lon_controller_conf.pitch_angle_filter_conf().cutoff_freq();
  double ts = lon_controller_conf.ts();
  SetDigitalFilter(ts, cutoff_freq, &digital_filter_pitch_angle_);
}

void LonController::LoadControlCalibrationTable(
    const LonControllerConf &lon_controller_conf) 
{
  const auto &control_table = lon_controller_conf.calibration_table();
  AINFO << "Control calibration table loaded";
  AINFO << "Control calibration table size is "
        << control_table.calibration_size();
  Interpolation2D::DataType xyz;
  for (const auto &calibration : control_table.calibration()) {
    xyz.push_back(std::make_tuple(calibration.speed(),
                                  calibration.acceleration(),
                                  calibration.command()));
  }
  control_interpolation_.reset(new Interpolation2D);
  CHECK(control_interpolation_->Init(xyz))
      << "Fail to load control calibration table";
}

Status LonController::ComputeControlCommand(
    const localization::LocalizationEstimate *localization,
    const canbus::Chassis *chassis,
    const planning::ADCTrajectory *planning_published_trajectory,
    control::ControlCommand *cmd) {
  localization_ = localization;
  chassis_ = chassis;
  trajectory_message_ = planning_published_trajectory;

  if (trajectory_analyzer_ == nullptr ||
      trajectory_analyzer_->seq_num() !=
          trajectory_message_->header().sequence_num()) {
    trajectory_analyzer_.reset(new TrajectoryAnalyzer(trajectory_message_));
  }
  const LonControllerConf &lon_controller_conf =
      control_conf_->lon_controller_conf();

  auto debug = cmd->mutable_debug()->mutable_simple_lon_debug();
  debug->Clear();

  double ts = lon_controller_conf.ts();
  double preview_time = lon_controller_conf.preview_window() * ts;

  if (preview_time < 0.0) {
    const auto error_msg = common::util::StrCat(
        "Preview time set as: ", preview_time, " less than 0");
    AERROR << error_msg;
    return Status(ErrorCode::CONTROL_COMPUTE_ERROR, error_msg);
  }
    
  // 计算纵向误差
  ComputeLongitudinalErrors(trajectory_analyzer_.get(), preview_time, debug);

  double station_error_limit = lon_controller_conf.station_error_limit();
  double station_error_limited = 0.0;
  if (FLAGS_enable_speed_station_preview) {
    station_error_limited =
        common::math::Clamp(debug->preview_station_error(),
                            -station_error_limit, station_error_limit);
  } else {
    station_error_limited = common::math::Clamp(
        debug->station_error(), -station_error_limit, station_error_limit);
  }
if (trajectory_message_->gear() == canbus::Chassis::GEAR_REVERSE) {
    station_pid_controller_.SetPID(lon_controller_conf.reverse_station_pid_conf());
    speed_pid_controller_.SetPID(lon_controller_conf.reverse_speed_pid_conf());
}
  double speed_offset =
      station_pid_controller_.Control(station_error_limited, ts);
  ADEBUG << "Station PID speed_offset = " << speed_offset ;

   double speed_controller_input = 0.0;
   double speed_controller_input_limit =
       lon_controller_conf.speed_controller_input_limit();
   double speed_controller_input_limited = 0.0;
   if (FLAGS_enable_speed_station_preview) {
     speed_controller_input = speed_offset + debug->preview_speed_error();
   } else {
     speed_controller_input = speed_offset + debug->speed_error();
   }
   speed_controller_input_limited =
       common::math::Clamp(speed_controller_input, -speed_controller_input_limit,
                           speed_controller_input_limit);
   ADEBUG << "speed_controller_input_limited: "<< speed_controller_input_limited;
   double speed_controller_offset = 0.0 ;
   speed_controller_offset = speed_pid_controller_.Control(speed_controller_input_limited, ts);
   AINFO << "speed_controller_offset = "<< speed_controller_offset ;
    double speed_cmd =speed_controller_offset + debug->preview_speed_reference();
    if (trajectory_message_->gear() == canbus::Chassis::GEAR_REVERSE) {
    speed_cmd = common::math::Clamp(speed_cmd,0.0,2.0);
}
  //double acceleration_cmd_closeloop = 0.0;
  //   AINFO << "Vehicle speed:" << VehicleStateProvider::instance()->linear_velocity() ; 
  //   speed_pid_controller_.SetPID(lon_controller_conf.low_speed_pid_conf());
  //   acceleration_cmd_closeloop =
  //       speed_pid_controller_.Control(speed_controller_input_limited, ts);
  //   AINFO << "acceleration_cmd_closeloop = "<< acceleration_cmd_closeloop ;
  
  // acceleration_cmd_closeloop = common::math::Clamp(acceleration_cmd_closeloop,-1.0,2.0);
  // double slope_offset_compenstaion = digital_filter_pitch_angle_.Filter(
  //     GRA_ACC * std::sin(VehicleStateProvider::instance()->pitch()));
  // if (isnan(slope_offset_compenstaion)) {
  //     slope_offset_compenstaion = 0;
  // }
  // debug->set_slope_offset_compensation(slope_offset_compenstaion);

  // double acceleration_cmd =
  //     acceleration_cmd_closeloop + debug->preview_acceleration_reference() +
  //     FLAGS_enable_slope_offset * debug->slope_offset_compensation();
  // AINFO << "acceleration_cmd_closeloop = " << acceleration_cmd_closeloop ;
  // AINFO << "match_acceleration_reference = " << debug->match_acceleration_reference();
  debug->set_is_full_stop(false);
  GetPathRemain(debug);
  ADEBUG << "path remain " << debug->path_remain() ;
//??
  ADEBUG << "preview speed "<< debug->preview_speed_reference();
  if (std::fabs(debug->preview_speed_reference()) <=
           FLAGS_max_abs_speed_when_stopped ||
      debug->path_remain() < FLAGS_stop_path_remain) {
    speed_cmd = 0.0 ;
    debug->set_path_remain(0);
    AINFO << "Stop location reached";
    debug->set_is_full_stop(true);
  } else {
    AINFO << "NOT reached Stop location" ;
    debug->set_path_remain(1000);
    speed_cmd =speed_controller_offset + debug->preview_speed_reference();
       //TODO
    if (speed_cmd < 3 && (debug->preview_kappa() > 0.03 || debug->preview_kappa() < -0.02) ){
    //acceleration_cmd = 0.25 * acceleration_cmd ;
    AINFO << "Turnning ,speed_cmd = " << speed_cmd ;
   }
  }
  if (trajectory_message_->gear() == canbus::Chassis::GEAR_REVERSE) {
    speed_cmd = common::math::Clamp(speed_cmd,0.0,1.0);
 } else
 {
   speed_cmd = common::math::Clamp(speed_cmd,0.0,2.0);
 }
 
//  if(FLAGS_enable_csv_debug && speed_log_file_ != nullptr) {
//    fprintf(speed_log_file_,
//            "%.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f, %.6f,"
//            "%.6f, %.6f, %.6f, %.6f, %d,\r\n",
//            debug->station_reference(), debug->station_error(),
//            station_error_limited, debug->preview_station_error(),
//            debug->speed_reference(), debug->speed_error(),
//            speed_controller_input_limited, debug->preview_speed_reference(),
//            debug->preview_speed_error(),
//            debug->preview_acceleration_reference(), acceleration_cmd_closeloop,
//            acceleration_cmd, debug->acceleration_lookup(),
//            debug->speed_real(), debug->is_full_stop());
//  }
//  speed_cmd = lon_acc_filter_.Update(speed_cmd) ;
//LJXCU3CB4LTP71792
//档位控制，只有停车状态或者空档状态下才能换档
if (chassis->gear_location() != trajectory_message_->gear()){
  ADEBUG << "Planning change gear,send stop command!";
  speed_cmd = 0;
  debug->set_path_remain(0);
}
  ADEBUG << "car speed"<<VehicleStateProvider::instance()->linear_velocity();
  if (std::fabs(VehicleStateProvider::instance()->linear_velocity()) <=FLAGS_max_abs_speed_when_stopped ||
      chassis->gear_location() == trajectory_message_->gear() ||
      chassis->gear_location() == canbus::Chassis::GEAR_NEUTRAL) {
    cmd->set_gear_location(trajectory_message_->gear());
    ADEBUG <<"gear change";
  } else {
    cmd->set_gear_location(chassis->gear_location());
    ADEBUG << "keep gear" ;
  }
  ADEBUG << "planning gear " << trajectory_message_->gear() ;
  ADEBUG << "chassis gear " << chassis->gear_location();
  ADEBUG << "control gear " <<cmd->gear_location() ; 
  previous_speed_cmd = speed_cmd ;
  cmd->set_speed(speed_cmd*3.6);
  cmd->set_pam_esp_stop_distance(debug->path_remain());
  AINFO << "PPPPlanning speed is :" << debug->preview_speed_reference() ;
 // AINFO << "PPPPlanning acceleration is :" << debug->preview_acceleration_reference();
  AINFO << "speed command is :" << speed_cmd ;
  AINFO << "Distance command" << cmd->pam_esp_stop_distance();
  debug->set_speed_offset(speed_offset);
  debug->set_speed_real(chassis_->speed_mps());
  return Status::OK();
}

Status LonController::Reset() {
  speed_pid_controller_.Reset();
  station_pid_controller_.Reset();//
  return Status::OK();
}

std::string LonController::Name() const { return name_; }

void LonController::ComputeLongitudinalErrors(
    const TrajectoryAnalyzer *trajectory_analyzer, const double preview_time,
    SimpleLongitudinalDebug *debug) {
  // the decomposed vehicle motion onto Frenet frame
  // s: longitudinal accumulated distance along reference trajectory
  // s_dot: longitudinal velocity along reference trajectory
  // d: lateral distance w.r.t. reference trajectory
  // d_dot: lateral distance change rate, i.e. dd/dt
  double s_matched = 0.0;
  double s_dot_matched = 0.0;
  double d_matched = 0.0;
  double d_dot_matched = 0.0;

  auto matched_point = trajectory_analyzer->QueryMatchedPathPoint(
      VehicleStateProvider::instance()->x(),
      VehicleStateProvider::instance()->y());

  trajectory_analyzer->ToTrajectoryFrame(
      VehicleStateProvider::instance()->x(),
      VehicleStateProvider::instance()->y(),
      VehicleStateProvider::instance()->heading(),
      VehicleStateProvider::instance()->linear_velocity(), matched_point,
      &s_matched, &s_dot_matched, &d_matched, &d_dot_matched);

  double current_control_time = Clock::NowInSeconds();
  double preview_control_time = current_control_time + preview_time;

  TrajectoryPoint reference_point =
      trajectory_analyzer->QueryNearestPointByAbsoluteTime(
          current_control_time);
  TrajectoryPoint preview_point =
      trajectory_analyzer->QueryNearestPointByAbsoluteTime(
          preview_control_time);

  ADEBUG << "matched point:" << matched_point.DebugString();
  ADEBUG << "reference point:" << reference_point.DebugString();
  ADEBUG << "preview point:" << preview_point.DebugString();
  debug->set_station_error(reference_point.path_point().s() - s_matched);
  debug->set_speed_error(reference_point.v() - s_dot_matched);
  debug->set_station_reference(reference_point.path_point().s());
  debug->set_speed_reference(reference_point.v());
  debug->set_preview_station_error(preview_point.path_point().s() - s_matched);
  debug->set_preview_speed_error(preview_point.v() - s_dot_matched);
  debug->set_preview_speed_reference(preview_point.v());
  debug->set_preview_acceleration_reference(preview_point.a());
  debug->set_current_station(s_matched);
  debug->set_preview_kappa(preview_point.path_point().kappa());
  debug->set_match_acceleration_reference(reference_point.a());
}

void LonController::SetDigitalFilter(double ts, double cutoff_freq,
                                     common::DigitalFilter *digital_filter) {
  std::vector<double> denominators;
  std::vector<double> numerators;
  common::LpfCoefficients(ts, cutoff_freq, &denominators, &numerators);
  digital_filter->set_coefficients(denominators, numerators);
}

void LonController::GetPathRemain(SimpleLongitudinalDebug *debug) {
    int stop_index = 0;
  static constexpr double kSpeedThreshold = 0.001;
  static constexpr double kForwardAccThreshold = -0.01;
  static constexpr double kBackwardAccThreshold = 0.0001;
  static constexpr double kParkingSpeed = 0.1;

  if (trajectory_message_->gear() == canbus::Chassis::GEAR_DRIVE) {
    ADEBUG << "Planning gear location D" ;
    while (stop_index < trajectory_message_->trajectory_point_size()) {
      auto &current_trajectory_point =
          trajectory_message_->trajectory_point(stop_index);
    //  ADEBUG << "current_trajectory_point.v() = " << current_trajectory_point.v() ;
    //  ADEBUG << "current_trajectory_point.a() = " << current_trajectory_point.a() ;
      if (fabs(current_trajectory_point.v()) < kSpeedThreshold &&
          current_trajectory_point.a() > kForwardAccThreshold &&
          current_trajectory_point.a() < 0.0) {
        break;
      }
      ++stop_index;
    }
  } else if(trajectory_message_->gear() == canbus::Chassis::GEAR_REVERSE){
    ADEBUG << "Planning gear location R" ;
   ADEBUG << "trajectory point size" << trajectory_message_->trajectory_point_size() ;
    while (stop_index < trajectory_message_->trajectory_point_size()-1) {
      auto &current_trajectory_point =
          trajectory_message_->trajectory_point(stop_index);
      auto &next_trajectory_point =
          trajectory_message_->trajectory_point(stop_index+1);
    //  ADEBUG << "current_trajectory_point.v() = " << current_trajectory_point.v() ;
    //  ADEBUG << "current_trajectory_point.a() = " << current_trajectory_point.a() ;
      if ((current_trajectory_point.v() < kSpeedThreshold&&
          current_trajectory_point.a() < kBackwardAccThreshold &&
          current_trajectory_point.a() > 0.0 )&&
          (next_trajectory_point.v() < kSpeedThreshold&&
          next_trajectory_point.a() < kBackwardAccThreshold &&
          next_trajectory_point.a() > 0.0)) {
            //0<a<0.0001
               break;
           }
      ++stop_index;
    }
    } else {
      stop_index = 0 ;
    }
  if (stop_index == trajectory_message_->trajectory_point_size()) {
    --stop_index;
    if (fabs(trajectory_message_->trajectory_point(stop_index).v()) <
        kParkingSpeed) {
      ADEBUG << "the last point is selected as parking point";
      debug->set_path_remain(
      trajectory_message_->trajectory_point(stop_index).path_point().s() -
      debug->current_station());
      return ;
    } else {
      ADEBUG << "the last point found in path and speed > speed_deadzone";
      debug->set_path_remain(10000);
      return ;
    }
  } else if (stop_index == 0)
  {
    debug->set_path_remain(0);
    ADEBUG << "Planning start point is stop point" ;
    return ;
  }
  
  debug->set_path_remain(
      trajectory_message_->trajectory_point(stop_index).path_point().s() -
      debug->current_station());
  ADEBUG << "stop index " << stop_index ; 
  ADEBUG << "trajectory station " << trajectory_message_->trajectory_point(stop_index).path_point().s() ;
 ADEBUG << "current station " << debug->current_station() ;
  if(trajectory_message_->gear() == canbus::Chassis::GEAR_REVERSE && stop_index>0){
  debug->set_path_remain(100);
}
}

}  // namespace control
}  // namespace jmc_auto
