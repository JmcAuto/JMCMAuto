/********************************************************w**********************
 * Copyright 2017 The JmcAuto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0wwwwww
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef MODULES_COMMON_ADAPTERS_ADAPTER_GFLAGS_H_
#define MODULES_COMMON_ADAPTERS_ADAPTER_GFLAGS_H_

#include "gflags/gflags.h"

DECLARE_bool(enable_adapter_dump);
DECLARE_uint32(gps_instance_id);
DECLARE_uint32(imu_instance_id);
DECLARE_uint32(chassis_instance_id);
DECLARE_uint32(localization_instance_id);
DECLARE_uint32(control_command_instance_id);
DECLARE_uint32(chassis_detail_instance_id);


//for remotecontrol
DECLARE_uint32(remote_control_instance_id);

#endif  // MODULES_COMMON_ADAPTERS_ADAPTER_GFLAGS_H_
