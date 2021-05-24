/******************************************************************************
 * Copyright 2018 The jmc_auto Authors. All Rights Reserved.
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
#include "modules/planning/planning.h"

//#include "cyber/common/file.h"
#include "modules/common/util/file.h"
#include "modules/common/adapters/adapter_gflags.h"
#include "modules/common/configs/config_gflags.h"
//#include "modules/common/util/threadpool.h"
#include "modules/common/util/message_util.h"
#include "modules/common/util/util.h"
#include "modules/map/hdmap/hdmap_util.h"
#include "modules/map/pnc_map/pnc_map.h"
#include "modules/planning/common/history.h"
#include "modules/planning/common/planning_context.h"
//#include "modules/planning/navi_planning.h"
#include "modules/planning/on_lane_planning.h"

#include "modules/common/time/jmcauto_time.h"
#include "modules/common/adapters/adapter_manager.h"

namespace jmc_auto {
namespace planning {

using jmc_auto::hdmap::HDMapUtil;
using jmc_auto::hdmap::ParkingSpaceInfoConstPtr;
using jmc_auto::common::math::Vec2d;
//using jmc_auto::perception::TrafficLightDetection;
//using jmc_auto::relative_map::MapMsg;
using jmc_auto::routing::RoutingRequest;
using jmc_auto::routing::RoutingResponse;

using jmc_auto::common::adapter::AdapterManager;
using jmc_auto::common::Status;
using jmc_auto::common::ErrorCode;

Planning::~Planning() { Stop(); }

std::string Planning::Name() const { return "planning"; }

#define CHECK_ADAPTER(NAME)                                               \
  if (AdapterManager::Get##NAME() == nullptr) {                           \
    AERROR << #NAME << " is not registered";                              \
    return Status(ErrorCode::PLANNING_ERROR, #NAME " is not registered"); \
  }


Status Planning::Init() {
  //if (FLAGS_use_navigation_mode) {
    //planning_base_ = std::make_unique<NaviPlanning>();
  //} else {
    planning_base_ = std::make_unique<OnLanePlanning>();
  //}

  CHECK(jmc_auto::common::util::GetProtoFromFile(FLAGS_planning_config_file,
                                                 &config_))
      << "failed to load planning config file " << FLAGS_planning_config_file;
  // CHECK(jmc_auto::common::util::GetProtoFromFile(FLAGS_planning_mode_config_file,
  //                                                &mode_config_))
  //     << "failed to load planning mode config file " << FLAGS_planning_mode_config_file;

  planning_base_->Init(config_);

  //判断需要启动的模式
  // if(mode_config_.calldriving().enabled()){
  //     routing_request_ = mode_config_.calldriving().routingrequest();
  //     AdapterManager::FillRoutingRequestHeader(Name(), &routing_request_);
  //     AdapterManager::PublishRoutingRequest(routing_request_);
  //     AINFO << "planning mode is call driving";
  // }else if(mode_config_.parking().enabled()){
  //   if(mode_config_.parking().ownparking().enabled()){
  //     routing_request_ = mode_config_.parking().ownparking().routingrequest();
  //     AdapterManager::FillRoutingRequestHeader(Name(), &routing_request_);
  //     AdapterManager::PublishRoutingRequest(routing_request_);
  //     AINFO << "planning mode is own parking";
  //   }else if(mode_config_.parking().flowparking().enabled()){
  //     routing_request_ = mode_config_.parking().ownparking().routingrequest();
  //     AdapterManager::FillRoutingRequestHeader(Name(), &routing_request_);
  //     AdapterManager::PublishRoutingRequest(routing_request_);
  //     AINFO << "planning mode is flow parking";
  //   }else{
  //     AERROR << "parking mode is error";
  //     return Status(ErrorCode::PLANNING_ERROR, "parking mode is error");
  //   }
  // }else{
  //   AERROR << "mode is not set";
  //   return Status(ErrorCode::PLANNING_ERROR, "mode is not set");
  // }


  // routing_reader_ = node_->CreateReader<RoutingResponse>(
  //     FLAGS_routing_response_topic,
  //     [this](const std::shared_ptr<RoutingResponse>& routing) {
  //       AINFO << "Received routing data: run routing callback."
  //             << routing->header().DebugString();
  //       std::lock_guard<std::mutex> lock(mutex_);
  //       routing_.CopyFrom(*routing);
  //     });
  // traffic_light_reader_ = node_->CreateReader<TrafficLightDetection>(
  //     FLAGS_traffic_light_detection_topic,
  //     [this](const std::shared_ptr<TrafficLightDetection>& traffic_light) {
  //       ADEBUG << "Received traffic light data: run traffic light callback.";
  //       std::lock_guard<std::mutex> lock(mutex_);
  //       traffic_light_.CopyFrom(*traffic_light);
  //     });

  // pad_msg_reader_ = node_->CreateReader<PadMessage>(
  //     FLAGS_planning_pad_topic,
  //     [this](const std::shared_ptr<PadMessage>& pad_msg) {
  //       ADEBUG << "Received pad data: run pad callback.";
  //       std::lock_guard<std::mutex> lock(mutex_);
  //       pad_msg_.CopyFrom(*pad_msg);
  //     });

  // initialize planning thread pool
  // PlanningThreadPool::instance()->Init();

  if (!AdapterManager::Initialized()) {
    AdapterManager::Init(FLAGS_planning_adapter_config_filename);
  }
  CHECK_ADAPTER(Localization);
  CHECK_ADAPTER(Chassis);
  CHECK_ADAPTER(RoutingResponse);
  CHECK_ADAPTER(RoutingRequest);
  //CHECK_ADAPTER(Prediction);
  //CHECK_ADAPTER(ParkingSpaceDetection);

  AdapterManager::AddRoutingResponseCallback(&Planning::RoutingCallback, this);

  // if (FLAGS_use_navigation_mode) {
  //   relative_map_reader_ = node_->CreateReader<MapMsg>(
  //       FLAGS_relative_map_topic,
  //       [this](const std::shared_ptr<MapMsg>& map_message) {
  //         ADEBUG << "Received relative map data: run relative map callback.";
  //         std::lock_guard<std::mutex> lock(mutex_);
  //         relative_map_.CopyFrom(*map_message);
  //       });
  // }
  // planning_writer_ =
  //     node_->CreateWriter<ADCTrajectory>(FLAGS_planning_trajectory_topic);

  // rerouting_writer_ =
  //     node_->CreateWriter<RoutingRequest>(FLAGS_routing_request_topic);

  return Status::OK();
}

void Planning::RoutingCallback(const routing::RoutingResponse &routing){
  routing_.CopyFrom(routing);
}

Status Planning::Start() {
  //timer_ = AdapterManager::CreateTimer(
  //    ros::Duration(1.0 / FLAGS_planning_loop_rate), &Planning::OnTimer, this);
  // The "reference_line_provider_" may not be created yet in navigation mode.
  // It is necessary to check its existence.
  // if (reference_line_provider_) {
  //   reference_line_provider_->Start();
  // }
  //start_time_ = Clock::NowInSeconds();
  while (1) {
    Planning::OnTimer();
    sleep(1.0/FLAGS_planning_loop_rate);
  }
  AINFO << "Planning started";
  return Status::OK();
}

void Planning::OnTimer() {
  AdapterManager::Observe();
  auto chassis_adapter = AdapterManager::GetChassis();
  if (chassis_adapter->Empty()){
    AINFO<< "not chassis msg";
    return;
  }
  //ACHECK(prediction_obstacles != nullptr);

  // check and process possible rerouting request
  //CheckRerouting();

  //流动车位模式获取空闲车位信息
  // if(mode_config_.parking().flowparking().enabled()){
  //   local_view_.parkingspace = AdapterManager::GetParkingSpaceDetection()->GetLatestObserved();
  //   CheckRerouting();
  // }
  // process fused input data
  //local_view_.prediction_obstacles = prediction_obstacles;
  chassis_ = chassis_adapter->GetLatestObserved();
  auto localization_adapter = AdapterManager::GetLocalization();
  if (localization_adapter->Empty()){
    AINFO<< "not localization msg";
    return;
  }
  localization_ = localization_adapter->GetLatestObserved();
  local_view_.chassis = std::make_shared<canbus::Chassis>(chassis_);
  local_view_.localization_estimate = std::make_shared<localization::LocalizationEstimate>(localization_);
  //routing_ = AdapterManager::GetRoutingResponse()->GetLatestObservedStdPtr();
  auto prediction_adapter = AdapterManager::GetPrediction();
  if (!prediction_adapter->Empty()){
    prediction_obstacles_ = prediction_adapter->GetLatestObserved();
    local_view_.prediction_obstacles = std::make_shared<prediction::PredictionObstacles>(prediction_obstacles_);
//    ADEBUG << "Prediction obstacles nums: " << local_view_.prediction_obstacles->prediction_obstacle().size();
  }

  
  {
    std::lock_guard<std::mutex> lock(mutex_);
    if (!local_view_.routing ||
        hdmap::PncMap::IsNewRouting(*local_view_.routing, routing_)) {
      local_view_.routing = std::make_shared<routing::RoutingResponse>(routing_);
          //std::make_shared<routing::RoutingResponse>(routing_);
    }
  }
  // {
  //   std::lock_guard<std::mutex> lock(mutex_);
  //   local_view_.traffic_light =
  //       std::make_shared<TrafficLightDetection>(traffic_light_);
  //   local_view_.relative_map = std::make_shared<MapMsg>(relative_map_);
  // }
  // {
  //   std::lock_guard<std::mutex> lock(mutex_);
  //   local_view_.pad_msg = std::make_shared<PadMessage>(pad_msg_);
  // }


  // if(local_view_.routing->waypoint().pose() == local_view_.localization_estimate->position() && 
  //    local_view_.chassis->speed() <= 1e-2){
  //   if(mode_config_.parking().enabled()){
  //     //切换泊车系统

  //   }else if(mode_config_.calldriving().enabled()){
  //     //上报召唤结果

  //   }
  // }
  // else{
  if (!CheckInput()) {
    AERROR << "Input check failed";
    return;
  }
  
   count_++;
   ADEBUG << "COUNT:" << count_;
  if(count_ > 30){
    CheckParkingSpace();
  }

  ADCTrajectory adc_trajectory_pb;
  planning_base_->RunOnce(local_view_, &adc_trajectory_pb);
  auto start_time = adc_trajectory_pb.header().timestamp_sec();
  AdapterManager::FillPlanningHeader(Name(), &adc_trajectory_pb);

  // modify trajectory relative time due to the timestamp change in header
  const double dt = start_time - adc_trajectory_pb.header().timestamp_sec();
  for (auto& p : *adc_trajectory_pb.mutable_trajectory_point()) {
    p.set_relative_time(p.relative_time() + dt);
  }
  AdapterManager::PublishPlanning(adc_trajectory_pb);

  // record in history
  auto* history = History::Instance();
  history->Add(adc_trajectory_pb);
//  }
}

void Planning::CheckParkingSpace(){
//  ParkingSpaceInfoConstPtr target_parking_spot_ptr;
  const hdmap::HDMap* hdmap = hdmap::HDMapUtil::BaseMapPtr();
      // TODO(Jinyun) parking overlap s are wrong on map, not usable
      // target_area_center_s =
      //     (parking_overlap.start_s + parking_overlap.end_s) / 2.0;
      hdmap::Id id;
      std::string park_id = FLAGS_test_parkingspace_id;
      //std::string park_id = "1262";
      id.set_id(park_id);
      //金融厂区地图
      //Vec2d right_top_point = (hdmap->GetParkingSpaceById(id))->polygon().points().at(1);
      //晶众厂区地图
      Vec2d right_top_point = (hdmap->GetParkingSpaceById(id))->polygon().points().at(3);
      AERROR << "Find ParkingSpace";
      // Vec2d left_bottom_point =
      //     target_parking_spot_ptr->polygon().points().at(0);
      double distance = ((right_top_point.x() - localization_.pose().position().x())*(right_top_point.x() - localization_.pose().position().x()))
                       + ((right_top_point.y() - localization_.pose().position().y())*(right_top_point.y() - localization_.pose().position().y()));
      if(distance < 1000){
        local_view_.parkingspace_id = park_id;
      }else{
        AERROR << "ParkingSpace too far";
      }
}


//检查是否需要再routing
void Planning::CheckRerouting() {
  // if(!local_view_.parkingspace){
  //   if(!common::util::IsProtoEqual(local_view_.parkingspace, parkingspace_)){
  //     local_parkingspace = local_view_.parkingspace;
  //     //不能发布车位，还需要修改
  //     AdapterManager::FillPlanningHeader(Name(), &parkingspace_);
  //     AdapterManager::PublishRoutingRequest(parkingspace_);
  //   }
  // }

  // auto* rerouting = PlanningContext::Instance()
  //                       ->mutable_planning_status()
  //                       ->mutable_rerouting();
  // if (!routing->need_rerouting()) {
  //   return;
  // }
  //common::util::FillHeader(Name(), routing->mutable_routing_request());
  // rerouting->set_need_rerouting(false);
  // rerouting_writer_->Write(rerouting->routing_request());
}

bool Planning::CheckInput() {
  ADCTrajectory trajectory_pb;
  auto* not_ready = trajectory_pb.mutable_decision()
                        ->mutable_main_decision()
                        ->mutable_not_ready();

  if (local_view_.localization_estimate == nullptr) {
    not_ready->set_reason("localization not ready");
  } else if (local_view_.chassis == nullptr) {
    not_ready->set_reason("chassis not ready");
  } else if (HDMapUtil::BaseMapPtr() == nullptr) {
    not_ready->set_reason("map not ready");
  } else {
    // nothing
  }

  if (FLAGS_use_navigation_mode) {
    // if (!local_view_.relative_map->has_header()) {
    //   not_ready->set_reason("relative map not ready");
    // }
  } else {
    if (!local_view_.routing->has_header()) {
      not_ready->set_reason("routing not ready");
    }
  }

  if (not_ready->has_reason()) {
    AERROR << not_ready->reason() << "; skip the planning cycle.";
    AdapterManager::FillPlanningHeader(Name(), &trajectory_pb);
    AdapterManager::PublishPlanning(trajectory_pb);
    return false;
  }
  return true;
}

void Planning::Stop() {
  AERROR << "Planning Stop is called";
  // PlanningThreadPool::instance()->Stop();
  // if (reference_line_provider_) {
  //   reference_line_provider_->Stop();
  // }
  // last_publishable_trajectory_.reset(nullptr);
  // frame_.reset(nullptr);
  //planner_base_.reset(nullptr);
 // FrameHistory::instance()->Clear();
}

}  // namespace planning
}  // namespace jmc_auto
