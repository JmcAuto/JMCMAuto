include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(canbus_lib
  canbus.cc
  canbus.h)
target_link_libraries(canbus_lib
  modules/canbus/common:canbus_common
  modules/canbus/vehicle:vehicle_factory
  modules/common
  modules/common:jmc_auto_app
  modules/common/adapters:adapter_manager
  modules/common/monitor_log
  modules/drivers/canbus/can_client:can_client_factory
  modules/drivers/canbus/can_comm:can_receiver
  modules/drivers/canbus/can_comm:can_sender
  modules/remotecontrol/proto:remotecontrol_proto)