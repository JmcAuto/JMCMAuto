include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(can_client_factory
  can_client_factory.cc
  can_client_factory.h)
target_link_libraries(can_client_factory
  modules/drivers/canbus/can_client
  modules/drivers/canbus/common/canbus_common
  modules/drivers/canbus/proto/canbus_proto
  modules/common/util/factory
  modules/drivers/canbus/can_client/fake/fake_can_client
  modules/drivers/canbus/can_client/socket/socket_can_client_raw
  modules/drivers/canbus/can_client/hermes_can/hermes_can_client)
add_library(can_client INTERFACE)
target_link_libraries(can_client INTERFACE
  modules/common/util
  modules/drivers/canbus/common/canbus_common
  modules/drivers/canbus/proto/canbus_proto)