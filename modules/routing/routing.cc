/******************************************************************************
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

#include "modules/routing/routing.h"

#include "modules/common/adapters/adapter_manager.h"
#include "modules/map/hdmap/hdmap_util.h"
#include "modules/routing/common/routing_gflags.h"
#include "modules/routing/core/navigator.h"

namespace jmc_auto {
namespace routing {

using jmc_auto::common::adapter::AdapterManager;
using jmc_auto::common::monitor::MonitorMessageItem;
using jmc_auto::common::ErrorCode;

std::string Routing::Name() const { return FLAGS_routing_node_name; }

//Routing::Routing()
//    : monitor_logger_(jmc_auto::common::monitor::MonitorMessageItem::ROUTING) {}

jmc_auto::common::Status Routing::Init() {
  const auto routing_map_file = jmc_auto::hdmap::RoutingMapFile();
  AINFO << "Use routing topology graph path: " << routing_map_file;
  navigator_ptr_.reset(new Navigator(routing_map_file));
  CHECK(common::util::GetProtoFromFile(FLAGS_routing_conf_file, &routing_conf_))
      << "Unable to load routing conf file: " + FLAGS_routing_conf_file;

  AINFO << "Conf file: " << FLAGS_routing_conf_file << " is loaded.";

  hdmap_ = jmc_auto::hdmap::HDMapUtil::BaseMapPtr();
  CHECK(hdmap_) << "Failed to load map file:" << jmc_auto::hdmap::BaseMapFile();

  AdapterManager::Init(FLAGS_routing_adapter_config_filename);
  AdapterManager::AddRoutingRequestCallback(&Routing::OnRoutingRequest, this);
  return jmc_auto::common::Status::OK();
}

jmc_auto::common::Status Routing::Start() {
  if (!navigator_ptr_->IsReady()) {
    AERROR << "Navigator is not ready!";
    return jmc_auto::common::Status(ErrorCode::ROUTING_ERROR,
                                  "Navigator not ready");
  }
  AINFO << "Routing service is ready.";

  return jmc_auto::common::Status::OK();
}

RoutingRequest Routing::FillLaneInfoIfMissing(
    const RoutingRequest& routing_request) {
  RoutingRequest fixed_request(routing_request);
  for (int i = 0; i < routing_request.waypoint_size(); ++i) {
    const auto& lane_waypoint = routing_request.waypoint(i);
    if (lane_waypoint.has_id()) {
	ADEBUG << "point has id.";
      continue;
    }
    ADEBUG << "search point.";
    auto point = common::util::MakePointENU(lane_waypoint.pose().x(),
                                            lane_waypoint.pose().y(),
                                            lane_waypoint.pose().z());

    double s = 0.0;
    double l = 0.0;
    hdmap::LaneInfoConstPtr lane;
    // FIXME(all): select one reasonable lane candidate for point=>lane
    // is one to many relationship.
    if (hdmap_->GetNearestLane(point, &lane, &s, &l) != 0) {
	    ADEBUG << "getnearestlane error.";
      AERROR << "Failed to find nearest lane from map at position: "
             << point.DebugString();
      return routing_request;
    }    auto waypoint_info = fixed_request.mutable_waypoint(i);
    waypoint_info->set_id(lane->id().id());
    waypoint_info->set_s(s);
  }
  AINFO << "Fixed routing request:" << fixed_request.DebugString();
  return fixed_request;
}

void Routing::OnRoutingRequest(const RoutingRequest& routing_request) {
  AINFO << "Get new routing request:" << routing_request.DebugString();
  RoutingResponse routing_response;
  AERROR<< "routing 1.";
  jmc_auto::common::monitor::MonitorLogBuffer buffer(&monitor_logger_);
  AERROR<< "routing 2.";
  const auto& fixed_request = FillLaneInfoIfMissing(routing_request);
  if (!navigator_ptr_->SearchRoute(fixed_request, &routing_response)) {
    AERROR << "Failed to search route with navigator.";

    //buffer.WARN("Routing failed! " + routing_response.status().msg());
    return;
  }
  //buffer.INFO("Routing success!");
  AINFO << "routing_response:" << routing_response.DebugString();
  AdapterManager::PublishRoutingResponse(routing_response);
  return;
}

void Routing::Stop() {}

}  // namespace routing
}  // namespace jmc_auto
