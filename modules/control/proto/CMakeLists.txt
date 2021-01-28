include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  control_proto_lib *.cc *.h)

add_library(control_proto
  control_proto_lib)
target_link_libraries(control_proto
  ${PROJECT_SOURCE_DIR}/modules/canbus/proto/canbus_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/common_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/drive_state_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/header_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/vehicle_signal_proto
  protobuf)
