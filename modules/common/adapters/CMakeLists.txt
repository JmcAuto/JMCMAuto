include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
file(GLOB_RECURSE  GENERATED_SOURCE ${PROJECT_SOURCE_DIR}/generated/*.cpp)

add_subdirectory(proto)

add_library(adapter_gflags
  adapter_gflags.cc
  adapter_gflags.h)
target_link_libraries(adapter_gflags
  gflags)
add_library(adapter_manager
  adapter_manager.cc
  adapter_manager.h
  ${GENERATED_SOURCE}
  )
target_link_libraries(adapter_manager
  adapter_gflags
  message_adapters
  common
  adapter_config_proto
  #monitor_log_proto
  #transform_listener
  util
  glog
  pb_convertor)
add_library(adapter INTERFACE)
target_link_libraries(adapter INTERFACE
  adapter_gflags
  common_proto
  time
  util
  protobuf
  glog)
add_library(message_adapters INTERFACE)
target_link_libraries(message_adapters INTERFACE
  adapter
  #relative_odometry_proto
  canbus_proto
  #monitor_log_proto
  drive_event_proto
  control_proto
  static_info_proto
  gnss_best_pose_proto
  gnss_raw_observation_proto
  gnss_status_proto
  gnss_imu_proto
  ins_proto
  #sensor_proto
  gps_proto
  imu_proto
  heading_proto
  gnss_proto
  localization_proto
  sins_pva_proto
  navigation_proto
  #system_status_proto
  perception_proto
  planning_proto
  prediction_proto
  routing_proto
  glog)


