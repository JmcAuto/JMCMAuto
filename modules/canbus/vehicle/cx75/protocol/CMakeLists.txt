include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  canbus_cx75_protocol_lib *.cc *.h)

add_library(canbus_cx75_protocol
  canbus_cx75_protocol_lib)
target_link_libraries(canbus_cx75_protocol
  modules/drivers/canbus/common/canbus_common
  modules/canbus/proto/canbus_proto
  modules/drivers/canbus/can_comm/message_manager_base)