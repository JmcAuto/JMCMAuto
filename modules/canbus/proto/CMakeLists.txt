include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(canbus_proto_lib PROTO_HDRS
  canbus_conf.proto
  ch.proto
  chassis.proto
  chassis_detail.proto
  cx75.proto
  teshun.proto
  vehicle_chassis.proto
  vehicle_parameter.proto)
add_library(canbus_proto
  ${canbus_proto_lib})
target_link_libraries(canbus_proto
  ${COMMON_LIB}
  common_proto
  drive_state_proto
  header_proto
  vehicle_signal_proto
  protobuf)
