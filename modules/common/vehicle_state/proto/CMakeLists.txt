include_directories(PROJECT_SOURCE_DIR)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(vehicle_state_proto_lib PROTO_HDRS
  vehicle_state.proto)
add_library(vehicle_state_proto
  ${vehicle_state_proto_lib})
target_link_libraries(vehicle_state_proto
  ${COMMON_LIB}
  common_proto
  header_proto
  protobuf)