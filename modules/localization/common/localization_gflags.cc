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

#include "modules/localization/common/localization_gflags.h"

DEFINE_string(localization_module_name, "localization",
              "localization module name");

DEFINE_double(localization_publish_freq, 100,
              "localization publishing frequency.");
DEFINE_string(proj4_text,
              "+proj=utm +zone=50 +ellps=WGS84 +towgs84=0,0,0,0,0,0,0 +units=m +no_defs",
              "proj4 params");

DEFINE_string(localization_config_file,
              "modules/localization/conf/localization_config.pb.txt",
              "localization config file");

 DEFINE_string(msf_adapter_config_file,
               "modules/localization/conf/msf_adapter.conf",
               "msf adapter configuration");
DEFINE_string(rtk_adapter_config_file,
              "modules/localization/conf/rtk_adapter.conf",
              "rtk adapter configuration");
DEFINE_string(vins_adapter_config_file,
              "modules/localization/conf/vins_adapter.conf",
              "vins adapter configuration");

 DEFINE_string(msf_visual_adapter_config_file,
               "modules/localization/conf/msf_visual_adapter.conf",
               "msf visualization adapter configuration");  //融合可视化适配器配置
 DEFINE_string(localization_msf_gnss_filename,
               "data/localization/msf_gnss",
                "save localizaton msf gnss data");
 DEFINE_string(localization_msf_lidar_filename,
               "data/localization/msf_lidar",
               "save localizaton msf lidar data");
 DEFINE_string(localization_pose_filename,
               "data/localization/pose",
               "save localizaton pose data");
 DEFINE_string(localization_heading_filename,
               "data/localization/heading",
               "save localizaton heading data");
// // features
 DEFINE_bool(enable_csv_log, true, "True to write out csv debug file.");
 DEFINE_bool(enable_gps_imu_interprolate, true, "enable GPU/IMU interprolate");
 DEFINE_bool(enable_map_reference_unify, true,
             "enable IMU data convert to map reference");  //将imu数据转换成地图参考
DEFINE_bool(enable_watchdog, true, "enable watchdog");

 DEFINE_bool(enable_gps_heading, true, "enable gps heading");
 DEFINE_bool(enable_heading_filter, true, "enable heading filter");

DEFINE_double(gps_time_delay_tolerance, 1.0,
              "gps message time delay tolerance (sec)");

DEFINE_double(gps_imu_timestamp_sec_diff_tolerance, 20e-3,
               "gps/imu timestamp diff tolerance (sec)");

 DEFINE_double(timestamp_sec_tolerance, 10e-7, "timestamp second tolerance");
// // map offset
 DEFINE_double(map_offset_x, 0.0, "map_offsite: x");
 DEFINE_double(map_offset_y, 0.0, "map_offsite: y");
 DEFINE_double(map_offset_z, 0.0, "map_offsite: z");

DEFINE_int32(report_threshold_err_num, 10, "report threshold error num");
 DEFINE_double(report_gps_imu_time_diff_threshold, 0.02,
               "report threshold of timestamp diff between gps and imu(sec)");

DEFINE_bool(enable_gps_timestamp, false,
            "True to set gps timestamp as localization header timestamp");

// // msf parame
 DEFINE_string(local_map_name, "local_map", "The path of localization map.");  //定位地图的路径
 DEFINE_string(lidar_extrinsics_file,
               "modules/localization/msf/params/velodyne_params/"
               "velodyne64_novatel_extrinsics_example.yaml",
               "Lidar extrinsics parameter file.");
 DEFINE_string(lidar_height_file,
               "modules/localization/msf/params/velodyne_params/"
               "velodyne64_height.yaml",
               "Velodyne extrinsic path for the vehicle in use, "
               "where <ros> is the placeholder of ROS root.");
 DEFINE_double(lidar_height_default, 1.80,
               "The height from the center of velodyne to ground.");
 DEFINE_int32(
     lidar_localization_mode, 2,
     "Localization mode, 0 for intensity, 1 for altitude, 2 for fusion.");
 DEFINE_int32(lidar_yaw_align_mode, 2,
              "image yaw align mode, 0 for align off, "
              "1 for fusion, 2 for fusion with multithread.");
 DEFINE_int32(lidar_filter_size, 11, "Lidar filter size");  //激光雷达过滤器尺寸
 DEFINE_double(lidar_imu_max_delay_time, 0.4,
               "Lidar msg and imu msg max delay time");
 DEFINE_double(lidar_map_coverage_theshold, 0.9,
               "Threshold to detect wether vehicle is out of map");  //检测车辆是否超出地图的阈值
 DEFINE_bool(lidar_debug_log_flag, false, "Lidar Debug switch.");
 DEFINE_int32(point_cloud_step, 2, "Point cloud step");

// // integ module
 DEFINE_bool(integ_ins_can_self_align, false, "");  //ins能自我校准
 DEFINE_bool(integ_sins_align_with_vel, true, "");
 DEFINE_bool(integ_sins_state_check, false, "");
 DEFINE_double(integ_sins_state_span_time, 60.0, "");
 DEFINE_double(integ_sins_state_pos_std, 1.0, "");
 DEFINE_double(vel_threshold_get_yaw, 5.0, "");
 DEFINE_bool(integ_debug_log_flag, false, "");

// // gnss module
 DEFINE_bool(enable_ins_aid_rtk, false, "");  //ins是否启用RTK
 DEFINE_string(eph_buffer_path, "", "");
 DEFINE_string(
     ant_imu_leverarm_file,
     "modules/localization/msf/params/gnss_params/ant_imu_leverarm.yaml",
     "Ant to imu leferarm.");
 DEFINE_bool(gnss_debug_log_flag, false, "Gnss Debug switch.");
 DEFINE_bool(heading_debug_log_flag, false, "heading Debug switch.");
 DEFINE_bool(if_imuant_from_file, true, "Use imu ant from gnss configure file.");
 DEFINE_double(imu_to_ant_offset_x, 0.0, "Imu ant offset x");
 DEFINE_double(imu_to_ant_offset_y, 0.0, "Imu ant offset y");
 DEFINE_double(imu_to_ant_offset_z, 0.0, "Imu ant offset z");
 DEFINE_double(imu_to_ant_offset_ux, 0.0, "Imu ant offset x uncertainty");
 DEFINE_double(imu_to_ant_offset_uy, 0.0, "Imu ant offset y uncertainty");
 DEFINE_double(imu_to_ant_offset_uz, 0.0, "Imu ant offset z uncertainty");

// // common
 DEFINE_double(imu_rate, 1.0, "");
 DEFINE_bool(if_utm_zone_id_from_folder, true,
             "load utm zone id from local map folder");  //从定位地图加载utm区域ID
 DEFINE_bool(trans_gpstime_to_utctime, true, "");
 DEFINE_int32(gnss_mode, 0, "GNSS Mode, 0 for bestgnss pose, 1 for self gnss.");
 DEFINE_bool(imu_coord_rfu, true, "Right/forward/up"); //imu坐标根据右前上
 DEFINE_bool(gnss_only_init, false,
             "Whether use bestgnsspose as measure after initializaiton."); //在初始化之后是否用bestgnsspose作为测量值
 DEFINE_bool(enable_lidar_localization, true,
             "Enable lidar-based localization.");

// // imu vehicle extrinsic
 DEFINE_string(vehicle_imu_file,
               "modules/localization/msf/params"
               "/vehicle_params/vehicle_imu_extrinsics.yaml",
               "Vehicle coord to imu coord.");
 DEFINE_bool(if_vehicle_imu_from_file, true,
             "Whether load vehicle imu extrinsic from yaml file");
 DEFINE_double(imu_vehicle_qx, 0.0, "Vehicle imu quaternion qx");
 DEFINE_double(imu_vehicle_qy, 0.0, "Vehicle imu quaternion qy");
 DEFINE_double(imu_vehicle_qz, 0.0, "Vehicle imu quaternion qz");
 DEFINE_double(imu_vehicle_qw, 1.0, "Vehicle imu quaternion qw");

// // visualization
 DEFINE_string(map_visual_dir, "data/map_visual",
               "The path of map_visual folder.");

//apriltag 参数
DEFINE_double(decimate, 2.0, "Decimate input image by this factor");
DEFINE_double(blur, 0.0, "Apply low-pass blur to input");
DEFINE_int32(threads, 1, "Use this many CPU threads");
DEFINE_bool(debug, false, "Enable debugging output (slow)");
DEFINE_bool(refine_edges, true, "Spend more time trying to align edges of tags");
