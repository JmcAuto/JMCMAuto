include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(. monitor_log_proto_lib)

add_library(monitor_log_proto
  monitor_log_proto_lib)
target_link_libraries(monitor_log_proto
  /modules/common/proto:common_proto
  /modules/common/proto:header_proto
  protobuf)