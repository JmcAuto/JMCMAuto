include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(canbus_lib
  canbus.cc
  canbus.h)
target_link_libraries(canbus_lib
  ${PROJECT_SOURCE_DIR}/modules/canbus/common/canbus_common
  ${PROJECT_SOURCE_DIR}/modules/canbus/vehicle/vehicle_factory
  ${PROJECT_SOURCE_DIR}/modules/common
  ${PROJECT_SOURCE_DIR}/modules/common/jmc_auto_app
  ${PROJECT_SOURCE_DIR}/modules/common/adapters/adapter_manager
  ${PROJECT_SOURCE_DIR}/modules/common/monitor_log
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_client/can_client_factory
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_comm/can_receiver
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_comm/can_sender
  ${PROJECT_SOURCE_DIR}/modules/remotecontrol/proto/remotecontrol_proto)