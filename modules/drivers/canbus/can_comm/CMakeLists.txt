include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(can_receiver INTERFACE)
target_link_libraries(can_receiver INTERFACE
  /modules/common
  /modules/common/proto:error_code_proto
  /modules/drivers/canbus/can_client
  /modules/drivers/canbus/can_comm:message_manager_base)
add_library(can_sender INTERFACE)
target_link_libraries(can_sender INTERFACE
  /modules/common
  /modules/common/proto:error_code_proto
  /modules/drivers/canbus/can_client
  /modules/drivers/canbus/can_comm:message_manager_base)
add_library(message_manager_base INTERFACE)
target_link_libraries(message_manager_base INTERFACE
  /modules/common/proto:error_code_proto
  /modules/common/time
  /modules/drivers/canbus/common:canbus_common)