include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(drivers_canbus_proto_lib PROTO_HDRS
  sensor_canbus_conf.proto)
add_library(drivers_canbus_proto
  ${drivers_canbus_proto_lib})
target_link_libraries(drivers_canbus_proto
  ${COMMON_LIB}
  common_proto
  header_proto
  protobuf)
