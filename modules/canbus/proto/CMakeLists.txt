include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  canbus_proto_lib *.cc *.h)

add_library(canbus_proto
  ${canbus_proto_lib})
target_link_libraries(canbus_proto
  common_proto
  drive_state_proto
  header_proto
  vehicle_signal_proto
  canbus_proto
  protobuf)