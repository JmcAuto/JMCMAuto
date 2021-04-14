/******************************************************************************
 * Copyright 2017 The jmc_auto Authors. All Rights Reserved.
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

#include "modules/localization/rtk/rtk_localization.h"

#include "modules/common/adapters/adapter_manager.h"
#include "modules/common/math/quaternion.h"
#include "modules/common/time/jmcauto_time.h"
#include "modules/common/time/time_util.h"
#include "modules/localization/common/localization_gflags.h"

namespace jmc_auto {
namespace localization {

using jmc_auto::common::Status;
using jmc_auto::common::adapter::AdapterManager;
//using jmc_auto::common::adapter::ImuAdapter;
//using jmc_auto::common::monitor::MonitorMessageItem;
using jmc_auto::common::time::Clock;
using ::Eigen::Vector3d;

// constexpr double DEG_TO_RAD_LOCAL = M_PI / 180.0;
// const char *WGS84_TEXT = "+proj=latlong +ellps=WGS84";

// RTKLocalization::RTKLocalization()
//     : monitor_logger_(MonitorMessageItem::LOCALIZATION),
//       map_offset_{FLAGS_map_offset_x, FLAGS_map_offset_y, FLAGS_map_offset_z} {}
//RTKLocalization::RTKLocalization()
//    : monitor_logger_(MonitorMessageItem::LOCALIZATION){}

RTKLocalization::~RTKLocalization() {}

Status RTKLocalization::Start() {
  AdapterManager::Init(FLAGS_rtk_adapter_config_file);

  // start ROS timer, one-shot = false, auto-start = true
  const double duration = 1.0 / FLAGS_localization_publish_freq;
  //timer_ = AdapterManager::CreateTimer(ros::Duration(duration),
  //                                     &RTKLocalization::OnTimer, this);
  while (1) {
	  RTKLocalization::Ontimer();
	  sleep(duration);
  }
  //common::monitor::MonitorLogBuffer buffer(&monitor_logger_);
  if (!AdapterManager::GetChassis()) {
    AERROR() << "chassis input not initialized. Check file "
                   << FLAGS_rtk_adapter_config_file;
    return Status(common::LOCALIZATION_ERROR, "no chassis_ins adapter");
  }

  wgs84pj_source_ = pj_init_plus(WGS84_TEXT);
  utm_target_ = pj_init_plus(FLAGS_proj4_text.c_str());

  //tf2_broadcaster_.reset(new tf2_ros::TransformBroadcaster);

  return Status::OK();
}

Status RTKLocalization::Stop() {
  //timer_.stop();
  return Status::OK();
}

void RTKLocalization::OnTimer() {
  LocalizationEstimate localization;
  AdapterManager::Observe();
  //  chassis_ = AdapterManager::GetChassis()->GetLatestObserved();
  if (AdapterManager::GetChassis()->Empty()) {
    AERROR << "No Chassis msg yet. ";
    return;
  }
  chassis_ = AdapterManager::GetChassis()->GetLatestObserved();
  double time_delay =
      common::time::ToSecond(Clock::Now()) - last_received_timestamp_sec_;
  //common::monitor::MonitorLogBuffer buffer(&monitor_logger_);

  if (FLAGS_enable_gps_timestamp &&
      time_delay > FLAGS_gps_time_delay_tolerance) {
    AERROR() << "GPS message time delay: " << time_delay;
  }
   //PrepareLocalizationMsg(&localization);
 
  // publish localization messages
  PublishLocalization();
  // service_started_ = true;
  // watch dog
 
  last_received_timestamp_sec_ = common::time::ToSecond(Clock::Now());
}



void RTKLocalization::PublishLocalization() {
   LocalizationEstimate localization;
   PrepareLocalizationMsg(&localization);

     
   // publish localization messages
   AdapterManager::PublishLocalization(localization);
   PublishPoseBroadcastTF(localization);
   ADEBUG << "[OnTimer]: Localization message publish success!";
  // RunWatchDog(&localization);

}

void RTKLocalization::PrepareLocalizationMsg(LocalizationEstimate *localization_dy)
{
     
         double x = chassis_.ins_longitude();
         double y = chassis_.ins_latitude();
         x *= DEG_TO_RAD_LOCAL;
         y *= DEG_TO_RAD_LOCAL;
         pj_transform(wgs84pj_source_, utm_target_, 1, 1, &x, &y, NULL);



           // 2. orientation 欧拉角以正北为0，航向角以正东为0
         //double CarHeadingAngle=chassis_.ins_headingangle()<-90?-(270+chassis_.ins_headingangle()):-(chassis_.ins_headingangle()-90);
		//  double CarHeadingAngle=-(chassis_.ins_headingangle()-90);
        //  Eigen::Quaterniond q =
        //  Eigen::AngleAxisd(CarHeadingAngle* DEG_TO_RAD_LOCAL,
        //                    Eigen::Vector3d::UnitZ()) *
        //  Eigen::AngleAxisd(chassis_.ins_rollangle()* DEG_TO_RAD_LOCAL, Eigen::Vector3d::UnitX()) *
        //  Eigen::AngleAxisd(chassis_.ins_pitchangle()* DEG_TO_RAD_LOCAL, Eigen::Vector3d::UnitY());//欧拉角

         Eigen::Quaterniond q =
         Eigen::AngleAxisd(-chassis_.ins_headingangle()* DEG_TO_RAD_LOCAL,
                           Eigen::Vector3d::UnitZ()) *
         Eigen::AngleAxisd(-chassis_.ins_rollangle()* DEG_TO_RAD_LOCAL, Eigen::Vector3d::UnitX()) *
         Eigen::AngleAxisd(-chassis_.ins_pitchangle()* DEG_TO_RAD_LOCAL, Eigen::Vector3d::UnitY());//欧拉角
         localization_dy->mutable_pose()->mutable_orientation()->set_qx(q.x());
         localization_dy->mutable_pose()->mutable_orientation()->set_qy(q.y());
         localization_dy->mutable_pose()->mutable_orientation()->set_qz(q.z());
         localization_dy->mutable_pose()->mutable_orientation()->set_qw(q.w());


          //坐标偏移
        //  Eigen::Vector3d v(0.0, 1.4, 0.0);
        //  Eigen::Vector3d orig_pos(x, y,chassis_.ins_locatheight());
        //     // Initialize the COM position without rotation
        //  Eigen::Vector3d pose_ves = common::math::QuaternionRotate(
        //          localization_dy->pose().orientation(), v);
        //  Eigen::Vector3d com_pos_3d=pose_ves+orig_pos;

        //  localization_dy->mutable_pose()->mutable_position()->set_x(com_pos_3d[0]);
        //  localization_dy->mutable_pose()->mutable_position()->set_y(com_pos_3d[1]);
        //  localization_dy->mutable_pose()->mutable_position()->set_z(com_pos_3d[2]);

         localization_dy->mutable_pose()->mutable_position()->set_x(x);
         localization_dy->mutable_pose()->mutable_position()->set_y(y);
         localization_dy->mutable_pose()->mutable_position()->set_z(chassis_.ins_locatheight());


         localization_dy->mutable_pose()->mutable_linear_velocity()->set_x(chassis_.ins_northspd());
         localization_dy->mutable_pose()->mutable_linear_velocity()->set_y(chassis_.ins_eastspd());
         localization_dy->mutable_pose()->mutable_linear_velocity()->set_z(-chassis_.ins_togroundspd());
          if (localization_dy->pose().has_orientation()) {
           Vector3d orig(chassis_.acc_y(),
                           chassis_.acc_x(),
                           -chassis_.acc_z());
             Vector3d vec = common::math::QuaternionRotate(
                 localization_dy->pose().orientation(), orig);
             localization_dy->mutable_pose()->mutable_linear_acceleration()->set_x(vec[0]);
             localization_dy->mutable_pose()->mutable_linear_acceleration()->set_y(vec[1]);
             localization_dy->mutable_pose()->mutable_linear_acceleration()->set_z(vec[2]);

          }
         double g=9.8;
         localization_dy->mutable_pose()->mutable_linear_acceleration_vrf()->set_x(chassis_.acc_y()*g);
         localization_dy->mutable_pose()->mutable_linear_acceleration_vrf()->set_y(chassis_.acc_x()*g);
         localization_dy->mutable_pose()->mutable_linear_acceleration_vrf()->set_z(-chassis_.acc_z()*g);

         if (localization_dy->pose().has_orientation()) {
               Vector3d orig(chassis_.gyro_y(), chassis_.gyro_x(),
                                 chassis_.gyro_z());
                   Vector3d vec = common::math::QuaternionRotate(
                       localization_dy->pose().orientation(), orig);
                   localization_dy->mutable_pose()->mutable_angular_velocity()->set_x(vec[0]);
                   localization_dy->mutable_pose()->mutable_angular_velocity()->set_y(vec[1]);
                   localization_dy->mutable_pose()->mutable_angular_velocity()->set_z(vec[2]);
         }
         localization_dy->mutable_pose()->mutable_angular_velocity_vrf()->set_x(chassis_.gyro_y()* DEG_TO_RAD_LOCAL);
         localization_dy->mutable_pose()->mutable_angular_velocity_vrf()->set_y(chassis_.gyro_x()* DEG_TO_RAD_LOCAL);
         localization_dy->mutable_pose()->mutable_angular_velocity_vrf()->set_z(chassis_.gyro_z()* DEG_TO_RAD_LOCAL);

          //double heading = common::math::QuaternionToHeading(
          //localization_dy->pose().orientation().qw(), localization_dy->pose().orientation().qx(),
          //localization_dy->pose().orientation().qy(), localization_dy->pose().orientation().qz());
          double heading=chassis_.ins_headingangle()<-90?-(270+chassis_.ins_headingangle()):-(chassis_.ins_headingangle()-90);

         localization_dy->mutable_pose()->set_heading(heading* DEG_TO_RAD_LOCAL);

         localization_dy->mutable_pose()->mutable_euler_angles()->set_x(chassis_.ins_rollangle()* DEG_TO_RAD_LOCAL);
         localization_dy->mutable_pose()->mutable_euler_angles()->set_y(chassis_.ins_pitchangle()* DEG_TO_RAD_LOCAL);
         localization_dy->mutable_pose()->mutable_euler_angles()->set_z(-chassis_.ins_headingangle()* DEG_TO_RAD_LOCAL);

         //localization_dy->mutable_pose()->mutable_uncertainty()->mutable_position_std_dev()->set_x(ins_std_lat);
         AdapterManager::FillLocalizationHeader("localization_dy",
                                            localization_dy);
         localization_dy->set_measurement_time(common::time::TimeUtil::Gps2unix(chassis_.ins_time()));
}

 /*void VINSLocalization::PrepareLocalizationMsg()
    {

      double x = chassis_.ins_longitude();
      double y = chassis_.ins_latitude();
      x *= DEG_TO_RAD_LOCAL;
      y *= DEG_TO_RAD_LOCAL;
      pj_transform(wgs84pj_source_, utm_target_, 1, 1, &x, &y, NULL);

      localization->mutable_pose()->mutable_position()->set_x(x);
      localization->mutable_pose()->mutable_position()->set_y(y);
      localization->mutable_pose()->mutable_position()->set_z(chassis_.ins_locatheight());
      // 2. orientation 欧拉角以正北为0，航向角以正东为0
      double CarHeadingAngle = chassis_.ins_headingangle() < -90 ? -(270 + chassis_.ins_headingangle()) : -(chassis_.ins_headingangle() - 90);
      Eigen::Quaterniond q =
          Eigen::AngleAxisd(CarHeadingAngle * DEG_TO_RAD_LOCAL,
                            Eigen::Vector3d::UnitZ()) *
          Eigen::AngleAxisd(chassis_.ins_rollangle() * DEG_TO_RAD_LOCAL, Eigen::Vector3d::UnitX()) *
          Eigen::AngleAxisd(chassis_.ins_pitchangle() * DEG_TO_RAD_LOCAL, Eigen::Vector3d::UnitY()); //欧拉角
      localization->mutable_pose()->mutable_orientation()->set_qx(q.x());
      localization->mutable_pose()->mutable_orientation()->set_qy(q.y());
      localization->mutable_pose()->mutable_orientation()->set_qz(q.z());
      localization->mutable_pose()->mutable_orientation()->set_qw(q.w());

      localization->mutable_pose()->mutable_linear_velocity()->set_x(chassis_.ins_eastspd());
      localization->mutable_pose()->mutable_linear_velocity()->set_y(chassis_.ins_northspd());
      localization->mutable_pose()->mutable_linear_velocity()->set_z(-chassis_.ins_togroundspd());
      if (localization->pose().has_orientation())
      {
        // Vector3d orig(chassis_.acc_y(),
        //               chassis_.acc_x(),
        //               -chassis_.acc_z());
        Vector3d orig(chassis_.acc_x(),
                      chassis_.acc_y(),
                      -chassis_.acc_z());
        Vector3d vec = common::math::QuaternionRotate(
            localization->pose().orientation(), orig);
        localization->mutable_pose()->mutable_linear_acceleration()->set_x(vec[0]);
        localization->mutable_pose()->mutable_linear_acceleration()->set_y(vec[1]);
        localization->mutable_pose()->mutable_linear_acceleration()->set_z(vec[2]);
      }
      // localization->mutable_pose()->mutable_linear_acceleration_vrf()->set_x(chassis_.acc_y());
      // localization->mutable_pose()->mutable_linear_acceleration_vrf()->set_y(chassis_.acc_x());
      // localization->mutable_pose()->mutable_linear_acceleration_vrf()->set_z(-chassis_.acc_z());
      localization->mutable_pose()->mutable_linear_acceleration_vrf()->set_x(chassis_.acc_x());
      localization->mutable_pose()->mutable_linear_acceleration_vrf()->set_y(chassis_.acc_y());
      localization->mutable_pose()->mutable_linear_acceleration_vrf()->set_z(-chassis_.acc_z());


      if (localization->pose().has_orientation())
      {
        Vector3d orig(chassis_.gyro_x(), chassis_.gyro_y(),
                      chassis_.gyro_z());
        Vector3d vec = common::math::QuaternionRotate(
            localization->pose().orientation(), orig);
        localization->mutable_pose()->mutable_angular_velocity()->set_x(vec[0]);
        localization->mutable_pose()->mutable_angular_velocity()->set_y(vec[1]);
        localization->mutable_pose()->mutable_angular_velocity()->set_z(vec[2]);
      }
      localization->mutable_pose()->mutable_angular_velocity_vrf()->set_x(chassis_.gyro_x());
      localization->mutable_pose()->mutable_angular_velocity_vrf()->set_y(chassis_.gyro_y());
      localization->mutable_pose()->mutable_angular_velocity_vrf()->set_z(chassis_.gyro_z());

      localization->mutable_pose()->set_heading(CarHeadingAngle * DEG_TO_RAD_LOCAL);

      localization->mutable_pose()->mutable_euler_angles()->set_x(chassis_.ins_rollangle() * DEG_TO_RAD_LOCAL);
      localization->mutable_pose()->mutable_euler_angles()->set_y(chassis_.ins_pitchangle() * DEG_TO_RAD_LOCAL);
      localization->mutable_pose()->mutable_euler_angles()->set_z(CarHeadingAngle * DEG_TO_RAD_LOCAL);

      //localization->mutable_pose()->mutable_uncertainty()->mutable_position_std_dev()->set_x(ins_std_lat);
      AdapterManager::FillLocalizationHeader("localization",
                                             localization);
      localization->set_measurement_time(common::time::TimeUtil::Gps2unix(chassis_.ins_time()));
    }*/


void RTKLocalization::RunWatchDog(LocalizationEstimate *localization) {
  // if (!FLAGS_enable_watchdog) {
  //   return;
  // }

  // common::monitor::MonitorLogBuffer buffer(&monitor_logger_);

  // // check ins time stamp against ROS timer
  // double ins_delay_sec =
  //     common::time::ToSecond(Clock::Now()) -
  //     localization->measurement_time();
  // int64_t ins_delay_cycle_cnt =
  //     static_cast<int64_t>(ins_delay_sec * FLAGS_localization_publish_freq);

  // bool msg_lost = false;
  // if (FLAGS_enable_gps_timestamp &&
  //     (ins_delay_cycle_cnt > FLAGS_report_threshold_err_num)) {
  //   msg_lost = true;

  //   buffer.ERROR() << "Raw GPS Message Lost. GPS message is "
  //                  << ins_delay_cycle_cnt << " cycle " << ins_delay_sec
  //                  << " sec behind current time.";
  //   buffer.PrintLog();
  // }


  // // to prevent it from beeping continuously
  // if (msg_lost && (last_reported_timestamp_sec_ < 1. ||
  //                  common::time::ToSecond(Clock::Now()) >
  //                      last_reported_timestamp_sec_ + 1.)) {
  //   AERROR << "gps/imu frame lost!";
  //   last_reported_timestamp_sec_ = common::time::ToSecond(Clock::Now());
  // }
}

}  // namespace localization
}  // namespace jmc_auto
