include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  canbus_proto_lib *.cc *.h)

add_library(canbus_proto
  canbus_proto_lib)
target_link_libraries(canbus_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/common_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/drive_state_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/header_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/vehicle_signal_proto
  ${PROJECT_SOURCE_DIR}/modules/drivers/canbus/proto/canbus_proto
  protobuf)