include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  canbus_teshun_protocol_lib *.cc *.h)

add_library(canbus_teshun_protocol
  canbus_teshun_protocol_lib)
target_link_libraries(canbus_teshun_protocol
  modules/drivers/canbus/common/canbus_common
  modules/canbus/proto/canbus_proto
  modules/drivers/canbus/can_comm/message_manager_base)