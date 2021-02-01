include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  drivers_canbus_proto_lib *.cc *.h)

add_library(drivers_canbus_proto
  ${drivers_canbus_proto_lib})
target_link_libraries(drivers_canbus_proto
  common_proto
  header_proto
  protobuf)