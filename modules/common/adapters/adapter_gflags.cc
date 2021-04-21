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

#include "modules/common/adapters/adapter_gflags.h"

DEFINE_bool(enable_adapter_dump, false,
            "Whether enable dumping the messages to "
            "/tmp/adapters/<instance_id_name>/<seq_num>.txt for debugging purposes.");
DEFINE_uint32(gps_instance_id, 102, "GPS instance_id");
DEFINE_uint32(imu_instance_id, 103, "IMU instance_id");
DEFINE_uint32(chassis_instance_id, 104, "chassis instance_id");
DEFINE_uint32(localization_instance_id, 105, "localization instance id");
DEFINE_uint32(control_command_instance_id, 109, "control command instance_id");
DEFINE_uint32(chassis_detail_instance_id, 113,"chassis detail instance_id");

DEFINE_uint32(remote_control_instance_id, 148, "REMOTE CONTROL topic name");
