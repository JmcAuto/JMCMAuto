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

#ifndef MODULES_PERCEPTION_OBSTACLE_COMMON_POSE_UTIL_H_
#define MODULES_PERCEPTION_OBSTACLE_COMMON_POSE_UTIL_H_

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "Eigen/Dense"

namespace jmc_auto {
namespace perception {

bool ReadPoseFile(const std::string& filename, Eigen::Matrix4d* pose,
                  int* frame_id, double* time_stamp);

bool ReadPoseFileMat12(const std::string& filename, Eigen::Matrix4d* pose,
                       int* frame_id, double* time_stamp);

// @brief: Load the velodyne extrinsic from a YAML file.
// @param [in]: path to yaml file
// @param [out]: extrinsic transform
bool LoadExtrinsic(const std::string& file_path, Eigen::Affine3d* extrinsic);

}  // namespace perception
}  // namespace jmc_auto

#endif  // MODULES_PERCEPTION_OBSTACLE_COMMON_POSE_UTIL_H_