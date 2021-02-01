include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  control_proto_lib *.cc *.h)

add_library(control_proto
  control_proto_lib)
target_link_libraries(control_proto
  modules/canbus/proto/canbus_proto
  modules/common/proto/common_proto
  modules/common/proto/drive_state_proto
  modules/common/proto/header_proto
  modules/common/proto/vehicle_signal_proto
  protobuf)
