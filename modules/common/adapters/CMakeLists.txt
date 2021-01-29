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
  modules/common
  modules/common/adapters/proto/adapter_config_proto
  modules/common/monitor_log/proto/monitor_log_proto
  modules/common/transform_listener
  modules/common/util
  glog)
add_library(adapter INTERFACE)
target_link_libraries(adapter INTERFACE
  adapter_gflags
  modules/common/proto/common_proto
  modules/common/time
  modules/common/util
  protobuf
  glog)
add_library(message_adapters INTERFACE)
target_link_libraries(message_adapters INTERFACE
  adapter
  modules/canbus/proto/canbus_proto
  modules/common/monitor_log/proto/monitor_log_proto
  modules/common/proto/drive_event_proto
  modules/control/proto/control_proto
  glog)


