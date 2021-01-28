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
add_library(sensor_canbus_lib 
  sensor_canbus.h)
target_link_libraries(sensor_canbus_lib
  sensor_gflags
  modules/common
  modules/common/jmc_auto_app
  modules/common/adapters/adapter_manager
  modules/common/monitor_log
  modules/drivers/canbus/can_client/can_client_factory
  modules/drivers/canbus/can_comm/can_receiver
  modules/drivers/canbus/can_comm/message_manager_base)