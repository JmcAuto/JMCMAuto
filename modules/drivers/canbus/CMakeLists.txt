include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(can_client)
add_subdirectory(can_comm)
add_subdirectory(common)
add_subdirectory(proto)

add_library(sensor_gflags
  sensor_gflags.cc
  sensor_gflags.h)
target_link_libraries(sensor_gflags
  gflags)
add_library(sensor_canbus_lib INTERFACE)
target_link_libraries(sensor_canbus_lib INTERFACE
  sensor_gflags
  common
  jmc_auto_app
  adapter_manager
  #modules/common/monitor_log
  can_client_factory
  can_receiver
  message_manager_base)