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

#include "modules/common/adapters/adapter_manager.h"

#include "modules/common/adapters/adapter_gflags.h"
#include "modules/common/util/util.h"

namespace jmc_auto {
namespace common {
namespace adapter {

AdapterManager::AdapterManager() {}

void AdapterManager::Observe() {
  for (const auto observe : instance()->observers_) {
    observe();
  }
}

bool AdapterManager::Initialized() { return instance()->initialized_; }

void AdapterManager::Reset() {
  instance()->initialized_ = false;
  instance()->observers_.clear();
}

//读取config配置，待修改
void AdapterManager::Init(const std::string &adapter_config_filename) {
  // Parse config file
  AdapterManagerConfig configs;
  CHECK(util::GetProtoFromFile(adapter_config_filename, &configs))
      << "Unable to parse adapter config file " << adapter_config_filename;
  AINFO << "Init AdapterManger config:" << configs.DebugString();
  Init(configs);
}

void AdapterManager::Init(const AdapterManagerConfig &configs) {
  if (Initialized()) {
    return;
  }

  instance()->initialized_ = true;
  //ROS_node_handle重置，MDC中暂未有相关代码
  //if (configs.is_ros()) {
  //  instance()->node_handle_.reset(new ros::NodeHandle());
  //}

  for (const auto &config : configs.config()) {
    switch (config.type()) {
      /*
      case AdapterConfig::GPS:
        EnableGps(FLAGS_gps_instance_id, config);
        break;
      case AdapterConfig::IMU:
        EnableImu(FLAGS_imu_instance_id, config);
        break;
      */
      case AdapterConfig::CHASSIS:
        EnableChassis(FLAGS_chassis_instance_id, config);
        break;
      case AdapterConfig::CHASSIS_DETAIL:
        EnableChassisDetail(FLAGS_chassis_detail_instance_id, config);
        break;
      /*
      case AdapterConfig::REMOTE_CONTROL:
        EnableRemoteControl(FLAGS_remote_control_instance_id, config);
        break;
      */
      default:
        AERROR << "Unknown adapter config type!";
        break;
    }
  }
}

}  // namespace adapter
}  // namespace common
}  // namespace jmc_auto
