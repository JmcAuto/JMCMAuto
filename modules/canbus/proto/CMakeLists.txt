include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  canbus_proto_lib *.cc *.h)

add_library(canbus_proto
  ${canbus_proto_lib})
target_link_libraries(canbus_proto
  modules/common/proto/common_proto
  modules/common/proto/drive_state_proto
  modules/common/proto/header_proto
  modules/common/proto/vehicle_signal_proto
  modules/drivers/canbus/proto/canbus_proto
  protobuf)