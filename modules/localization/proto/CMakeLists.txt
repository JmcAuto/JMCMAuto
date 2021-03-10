include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(localization_config_proto
  localization_config.pb.cc
  localization_config.pb.h)
target_link_libraries(localization_config_proto
  common_proto
  protobuf)

add_library(pose_proto
  pose.pb.cc
  pose.pb.h)
target_link_libraries(pose_proto
  common_proto
  protobuf)

add_library(gps_proto
  gps.pb.cc
  gps.pb.h)
target_link_libraries(gps_proto
  pose_proto
  common_proto
  header_proto
  protobuf)

add_library(imu_proto
  imu.pb.cc
  imu.pb.h)
target_link_libraries(imu_proto
  pose_proto
  common_proto
  header_proto
  protobuf)

add_library(localization_proto
  localization.pb.cc
  localization.pb.h)
target_link_libraries(localization_proto
  pose_proto
  common_proto
  header_proto
  pnc_point_proto
  protobuf)

add_library(measure_proto
  measure.pb.cc
  measure.pb.h)
target_link_libraries(measure_proto
  common_proto
  header_proto
  protobuf)

add_library(sins_pva_proto
  sins_pva.pb.cc
  sins_pva.pb.h)
target_link_libraries(sins_pva_proto
  common_proto
  header_proto
  protobuf)

add_library(gnss_pnt_result_proto
  gnss_pnt_result.pb.cc
  gnss_pnt_result.pb.h)
target_link_libraries(gnss_pnt_result_proto
  gnss_raw_observation
  protobuf)