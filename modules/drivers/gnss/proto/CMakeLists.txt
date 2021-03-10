include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(gnss_proto
  gnss.pb.cc
  gnss.pb.h)
target_link_libraries(gnss_proto
  ins_proto
  gnss_raw_observation_proto
  gnss_best_pose_proto
  gnss_config_proto
  imu_proto
  gnss_status_proto
  protobuf)

add_library(ins_proto
  ins.pb.cc
  ins.pb.h)
target_link_libraries(ins_proto
imu
  protobuf)

add_library(gnss_raw_observation_proto
  gnss_raw_observation.pb.cc
  gnss_raw_observation.pb.h)
target_link_libraries(gnss_raw_observation_proto
  common_proto
  error_code_proto
  header_proto
  protobuf)

add_library(gnss_best_pose_proto
  gnss_best_pose.pb.cc
  gnss_best_pose.pb.h)
target_link_libraries(gnss_best_pose_proto
  common_proto
  error_code_proto
  header_proto
  protobuf)

add_library(gnss_config_proto
  config.pb.cc
  config.pb.h)
target_link_libraries(gnss_config_proto
  protobuf)

add_library(imu_proto
  imu.pb.cc
  imu.pb.h)
target_link_libraries(imu_proto
  common_proto
  error_code_proto
  header_proto
  protobuf)

add_library(gnss_status_proto
  gnss_status.pb.cc
  gnss_status.pb.h)
target_link_libraries(gnss_status_proto
  common_proto
  error_code_proto
  header_proto
  protobuf)

add_library(heading_proto
  heading.pb.cc
  heading.pb.h)
target_link_libraries(heading_proto
  common_proto
  error_code_proto
  header_proto
  protobuf)