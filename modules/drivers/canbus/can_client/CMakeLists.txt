include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(can_client_factory
  can_client_factory.cc
  can_client_factory.h)
target_link_libraries(can_client_factory
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_client
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/common/canbus_common
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/proto/canbus_proto
  ${PROJECT_SOURCE_DIR}/modules/common/util/factory
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_client/fake/fake_can_client
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_client/socket/socket_can_client_raw
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/can_client/hermes_can/hermes_can_client)
add_library(can_client can_client.h)
target_link_libraries(can_client
  ${PROJECT_SOURCE_DIR}/modules/common/util
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/common/canbus_common
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/proto/canbus_proto)