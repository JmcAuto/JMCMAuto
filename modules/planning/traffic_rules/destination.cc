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

/**
 * @file
 **/
#include <vector>

#include "modules/planning/traffic_rules/destination.h"

#include "modules/map/proto/map_lane.pb.h"
#include "modules/planning/common/planning_context.h"
#include "modules/planning/common/planning_gflags.h"
#include "modules/common/vehicle_state/vehicle_state_provider.h"
#include "modules/planning/common/util/common.h"


namespace jmc_auto {
namespace planning {

using jmc_auto::common::Status;
using jmc_auto::common::VehicleConfigHelper;
using jmc_auto::common::math::Vec2d;
using jmc_auto::common::VehicleState;
using jmc_auto::hdmap::ParkingSpaceInfoConstPtr;

Destination::Destination(const TrafficRuleConfig& config)
    : TrafficRule(config) {}

Status Destination::ApplyRule(Frame* frame,
                              ReferenceLineInfo* const reference_line_info) {
  CHECK_NOTNULL(frame);
  CHECK_NOTNULL(reference_line_info);
  if(!frame->local_view().parkingspace_id.empty()){
    MakeParkingDecisions(frame, reference_line_info);
  }else{
    MakeDecisions(frame, reference_line_info);
  }
 // MakeDecisions(frame, reference_line_info);

  return Status::OK();
}


bool Destination::CheckParkingSpotPreStop(
    Frame* const frame, ReferenceLineInfo* const reference_line_info,
    double* target_s) {
  const auto& nearby_path = reference_line_info->reference_line().map_path();

  double target_area_center_s = 0.0;
  bool target_area_found = false;
  //const auto& parking_space_overlaps = nearby_path.parking_space_overlaps();
  ParkingSpaceInfoConstPtr target_parking_spot_ptr;
  const hdmap::HDMap* hdmap = hdmap::HDMapUtil::BaseMapPtr();
  // for (const auto& parking_overlap : parking_space_overlaps) {
  //  if (parking_overlap.object_id == target_parking_spot_id_) {
  //     //TODO(Jinyun) parking overlap s are wrong on map, not usable
  //     target_area_center_s =
  //         (parking_overlap.start_s + parking_overlap.end_s) / 2.0;
      hdmap::Id id;
      //id.set_id(parking_overlap.object_id);
      id.set_id(target_parking_spot_id_);
      target_parking_spot_ptr = hdmap->GetParkingSpaceById(id);
      // 金融厂区地图停车位
      //Vec2d left_bottom_point = target_parking_spot_ptr->polygon().points().at(3);
      //Vec2d right_bottom_point = target_parking_spot_ptr->polygon().points().at(2);


      // 晶众厂区地图停车位
       Vec2d left_bottom_point = target_parking_spot_ptr->polygon().points().at(1);
       Vec2d right_bottom_point = target_parking_spot_ptr->polygon().points().at(2);

      // Vec2d left_bottom_point =
      //     target_parking_spot_ptr->polygon().points().at(1);
      // Vec2d right_bottom_point =
      //     target_parking_spot_ptr->polygon().points().at(0);
      double left_bottom_point_s = 0.0;
      double left_bottom_point_l = 0.0;
      double right_bottom_point_s = 0.0;
      double right_bottom_point_l = 0.0;
      nearby_path.GetNearestPoint(left_bottom_point, &left_bottom_point_s,
                                  &left_bottom_point_l);
      nearby_path.GetNearestPoint(right_bottom_point, &right_bottom_point_s,
                                  &right_bottom_point_l);
      target_area_center_s = (left_bottom_point_s + right_bottom_point_s) / 2.0;
      if(target_area_center_s != 0.0){
        target_area_found = true;
      }
      //target_area_found = true;
  //  }
  // }

  if (!target_area_found) {
    AERROR << "no target parking spot found on reference line";
    return false;
  }
  *target_s = target_area_center_s;
  return true;
}

bool Destination::SetParkingSpotStopFence(
    const double target_s, Frame* const frame,
    ReferenceLineInfo* const reference_line_info) {
  const auto& nearby_path = reference_line_info->reference_line().map_path();
  const double adc_front_edge_s = reference_line_info->AdcSlBoundary().end_s();
  const VehicleState& vehicle_state = frame->vehicle_state();
  double stop_line_s = 0.0;
  double stop_distance_to_target = 9.0;
  double static_linear_velocity_epsilon = 1.0e-2;
  CHECK_GE(stop_distance_to_target, 1.0e-8);
  double target_vehicle_offset = target_s - adc_front_edge_s;
  // if(std::fabs(target_vehicle_offset) > 20){
  //   return false;
  // }
  if (target_vehicle_offset > stop_distance_to_target) {
    stop_line_s = target_s + stop_distance_to_target;
  } else if (std::abs(target_vehicle_offset) < stop_distance_to_target) {
    stop_line_s = target_s + stop_distance_to_target;
    //stop_line_s = adc_front_edge_s;
  } else if (target_vehicle_offset < -stop_distance_to_target) {
    if (!frame->open_space_info().pre_stop_rightaway_flag()) {
      // TODO(Jinyun) Use constant comfortable deacceleration rather than
      // distance by config to set stop fence
      stop_line_s =
          adc_front_edge_s + 0.1;
      if (std::abs(vehicle_state.linear_velocity()) <
          static_linear_velocity_epsilon) {
        stop_line_s = adc_front_edge_s;
      }
      *(frame->mutable_open_space_info()->mutable_pre_stop_rightaway_point()) =
          nearby_path.GetSmoothPoint(stop_line_s);
      frame->mutable_open_space_info()->set_pre_stop_rightaway_flag(true);
    } else {
      double stop_point_s = 0.0;
      double stop_point_l = 0.0;
      nearby_path.GetNearestPoint(
          frame->open_space_info().pre_stop_rightaway_point(), &stop_point_s,
          &stop_point_l);
      stop_line_s = stop_point_s;
    }
  }

  const std::string stop_wall_id = FLAGS_destination_obstacle_id;
  std::vector<std::string> wait_for_obstacles;
  frame->mutable_open_space_info()->set_open_space_pre_stop_fence_s(
      stop_line_s);
  util::BuildStopDecision(stop_wall_id, stop_line_s, 0.0,
                          StopReasonCode::STOP_REASON_DESTINATION,
                          wait_for_obstacles, "ParkingSpaceStopDecider", frame,
                          reference_line_info);

//NEW ADD
  // util::BuildStopDecision(stop_wall_id, "0", stop_line_s, 0.0,
    //                      StopReasonCode::STOP_REASON_DESTINATION,
      //                    wait_for_obstacles, "ParkingSpaceStopDecider", frame,
        //                  reference_line_info); 

  return true;
}


bool Destination::CheckADCStop(const Frame& frame) {
  const auto& reference_line_info = frame.reference_line_info().front();
  const double adc_speed =
      common::VehicleStateProvider::instance()->linear_velocity();
  const double max_adc_stop_speed = common::VehicleConfigHelper::instance()
                                        ->GetConfig()
                                        .vehicle_param()
                                        .max_abs_speed_when_stopped();
  if (adc_speed > max_adc_stop_speed) {
    ADEBUG << "ADC not stopped: speed[" << adc_speed << "]";
    return false;
  }

  // check stop close enough to stop line of the stop_sign
  const double adc_front_edge_s = reference_line_info.AdcSlBoundary().end_s();
  const double stop_fence_start_s =
      frame.open_space_info().open_space_pre_stop_fence_s();
  const double distance_stop_line_to_adc_front_edge =
      stop_fence_start_s - adc_front_edge_s;

  if (distance_stop_line_to_adc_front_edge > 1.0) {
    ADEBUG << "not a valid stop. too far from stop line.";
    return false;
  }
  return true;
}

/**
 * @brief: build parking space stop decision
 */
int Destination::MakeParkingDecisions(Frame* frame,
                               ReferenceLineInfo* const reference_line_info) {
  CHECK_NOTNULL(frame);
  CHECK_NOTNULL(reference_line_info);
  //std::string target_parking_spot_id;
  bool is_new_target_parking_spot_id = false;
  auto* previous_frame = FrameHistory::Instance()->Latest();
  target_parking_spot_id_ = frame->local_view().parkingspace_id;
  *(frame->mutable_open_space_info()->mutable_target_parking_spot_id()) = target_parking_spot_id_;
  if(target_parking_spot_id_ != previous_frame->open_space_info().target_parking_spot_id()){
    //target_parking_spot_id_ = target_parking_spot_id;
    is_new_target_parking_spot_id = true;
    //previous_frame->set_parking_destination(false);
  }
  ADEBUG << "target_parking_spot_id: " << target_parking_spot_id_;
  //ADEBUG << "is_near_parking: " << is_near_parking_;
  if(is_new_target_parking_spot_id || !previous_frame->is_parking_destination()){
    double target_s = 0.0;
    if (!CheckParkingSpotPreStop(frame, reference_line_info, &target_s)) {
      const std::string msg = "Checking parking spot pre stop fails";
      AERROR << "Checking parking spot pre stop fails";
      return 0;
    }
    if(!SetParkingSpotStopFence(target_s, frame, reference_line_info)){
      AERROR << "target parking spot found, but too far";
      return 0;
    }
    if(CheckADCStop(*frame)){
      //is_near_parking_ = true;
      frame->set_parking_destination(true);
    }else{
      frame->set_parking_destination(false);
    }
  //  *(frame->is_parking_destination()) = false;
  }else{
      frame->set_parking_destination(true);
  }
  return 0;
}


/**
 * @brief: build stop decision
 */
int Destination::MakeDecisions(Frame* frame,
                               ReferenceLineInfo* const reference_line_info) {
  CHECK_NOTNULL(frame);
  CHECK_NOTNULL(reference_line_info);

  if (!frame->is_near_destination()) {
    return 0;
  }

  const auto& routing = frame->local_view().routing;
  if (routing->routing_request().waypoint_size() < 2) {
    AERROR << "routing_request has no end";
    return -1;
  }

  common::SLPoint dest_sl;
  const auto& reference_line = reference_line_info->reference_line();
  const auto& routing_end = *(routing->routing_request().waypoint().rbegin());
  reference_line.XYToSL(routing_end.pose(), &dest_sl);
  const auto& adc_sl = reference_line_info->AdcSlBoundary();
  const auto& dest =
      PlanningContext::Instance()->mutable_planning_status()->destination();
  if (adc_sl.start_s() > dest_sl.s() && !dest.has_passed_destination()) {
    ADEBUG << "Destination at back, but we have not reached destination yet";
    return 0;
  }

  const std::string stop_wall_id = FLAGS_destination_obstacle_id;
  const std::vector<std::string> wait_for_obstacle_ids;

  if (FLAGS_enable_scenario_pull_over) {
    const auto& pull_over_status =
        PlanningContext::Instance()->planning_status().pull_over();
    if (pull_over_status.has_position() &&
        pull_over_status.position().has_x() &&
        pull_over_status.position().has_y()) {
      // build stop decision based on pull-over position
      ADEBUG << "BuildStopDecision: pull-over position";
      common::SLPoint pull_over_sl;
      reference_line.XYToSL(pull_over_status.position(), &pull_over_sl);

      const double stop_line_s = pull_over_sl.s() +
                                 VehicleConfigHelper::GetConfig()
                                     .vehicle_param()
                                     .front_edge_to_center() +
                                 config_.destination().stop_distance();
      util::BuildStopDecision(
          stop_wall_id, stop_line_s, config_.destination().stop_distance(),
          StopReasonCode::STOP_REASON_PULL_OVER, wait_for_obstacle_ids,
          TrafficRuleConfig::RuleId_Name(config_.rule_id()), frame,
          reference_line_info);
      return 0;
    }
  }

  // build stop decision
  ADEBUG << "BuildStopDecision: destination";
//  const double dest_lane_s =
//      std::fmax(0.0, routing_end.s() - FLAGS_virtual_stop_wall_length -
//                         config_.destination().stop_distance());
  const double dest_lane_s =
      std::fmax(0.0, routing_end.s() - FLAGS_virtual_stop_wall_length);
  util::BuildStopDecision(stop_wall_id, routing_end.id(), dest_lane_s,
                          config_.destination().stop_distance(),
                          StopReasonCode::STOP_REASON_DESTINATION,
                          wait_for_obstacle_ids,
                          TrafficRuleConfig::RuleId_Name(config_.rule_id()),
                          frame, reference_line_info);

  return 0;
}

}  // namespace planning
}  // namespace jmc_auto
