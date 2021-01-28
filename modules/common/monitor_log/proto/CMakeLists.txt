include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  monitor_log_proto_lib *.cc *.h)

add_library(monitor_log_proto
  monitor_log_proto_lib)
target_link_libraries(monitor_log_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/common_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/header_proto
  protobuf)