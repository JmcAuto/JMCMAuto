include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(. canbus_cx75_protocol_lib)

add_library(canbus_cx75_protocol
  canbus_cx75_protocol_lib)
target_link_libraries(canbus_cx75_protocol
  modules/drivers/canbus/common:canbus_common
  modules/canbus/proto:canbus_proto
  modules/drivers/canbus/can_comm:message_manager_base)