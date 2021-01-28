include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(can_receiver can_receiver.h)
target_link_libraries(can_receiver
  modules/common
  modules/common/proto/error_code_proto
  modules/drivers/canbus/can_client
  modules/drivers/canbus/can_comm/message_manager_base)
add_library(can_sender can_sender.h)
target_link_libraries(can_sender
  modules/common
  modules/common/proto/error_code_proto
  modules/drivers/canbus/can_client
  modules/drivers/canbus/can_comm/message_manager_base)
add_library(message_manager_base
  message_manager.h
  protocol_data.h)
target_link_libraries(message_manager_base
  modules/common/proto/error_code_proto
  modules/common/time
  modules/drivers/canbus/common/canbus_common)