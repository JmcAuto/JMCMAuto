include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(can_receiver INTERFACE)
target_link_libraries(can_receiver INTERFACE
  ${COMMON_LIB}
  common
  error_code_proto
  can_client
  message_manager_base)
add_library(can_sender INTERFACE)
target_link_libraries(can_sender INTERFACE
  ${COMMON_LIB}
  common
  error_code_proto
  can_client
  message_manager_base)
add_library(message_manager_base INTERFACE)
target_link_libraries(message_manager_base INTERFACE
  ${COMMON_LIB}
  error_code_proto
  time
  canbus_common)