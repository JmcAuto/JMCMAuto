include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  canbus_cx75_protocol_lib *.cc *.h)

add_library(canbus_cx75_protocol
  ${canbus_cx75_protocol_lib})
target_link_libraries(canbus_cx75_protocol
  canbus_common
  canbus_proto
  message_manager_base)