include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(vehicle_config_proto_lib PROTO_HDRS
  vehicle_config.proto)
add_library(vehicle_config_proto
  ${vehicle_config_proto_lib})
target_link_libraries(vehicle_config_proto
  ${COMMON_LIB}
  common_proto
  header_proto
  protobuf)