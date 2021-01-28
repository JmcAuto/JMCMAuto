include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(. control_proto_lib)

add_library(control_proto
  control_proto_lib)
target_link_libraries(control_proto
  control_proto_lib
  /modules/canbus/proto:canbus_proto
  /modules/common/proto:common_proto
  /modules/common/proto:drive_state_proto
  /modules/common/proto:header_proto
  /modules/common/proto:vehicle_signal_proto
  protobuf)
