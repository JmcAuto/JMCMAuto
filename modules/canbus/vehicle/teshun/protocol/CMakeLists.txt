include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(. canbus_teshun_protocol_lib)

add_library(canbus_teshun_protocol INTERFACE
  canbus_teshun_protocol_lib)
target_link_libraries(canbus_teshun_protocol INTERFACE
  /modules/drivers/canbus/common:canbus_common
  /modules/canbus/proto:canbus_proto
  /modules/drivers/canbus/can_comm:message_manager_base)