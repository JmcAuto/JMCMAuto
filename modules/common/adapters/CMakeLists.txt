include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(proto)

add_library(adapter_gflags
  adapter_gflags.cc
  adapter_gflags.h)
target_link_libraries(adapter_gflags
  gflags)
add_library(adapter_manager
  adapter_manager.cc
  adapter_manager.h)
target_link_libraries(adapter_manager
  adapter_gflags
  message_adapters
  common
  adapter_config_proto
  monitor_log_proto
  transform_listener
  util
  glog)
add_library(adapter INTERFACE)
target_link_libraries(adapter INTERFACE
  adapter_gflags
  common_proto
  time
  common/util
  protobuf
  glog)
add_library(message_adapters INTERFACE)
target_link_libraries(message_adapters INTERFACE
  adapter
  canbus_proto
  monitor_log_proto
  drive_event_proto
  control_proto
  glog)


