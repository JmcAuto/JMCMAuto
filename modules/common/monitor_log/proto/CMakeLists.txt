include_directories(PROJECT_SOURCE_DIR)
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(monitor_log_proto_lib PROTO_HDRS
 monitor_log.proto)
add_library(monitor_log_proto
  ${monitor_log_proto_lib})
target_link_libraries(monitor_log_proto
  ${COMMON_LIB}
  common_proto
  header_proto
  protobuf)
