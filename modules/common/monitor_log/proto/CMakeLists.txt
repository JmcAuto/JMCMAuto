include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(monitor_log_proto
  monitor_log.pb.cc
  monitor_log.pb.h)
target_link_libraries(monitor_log_proto
  common_proto
  header_proto
  protobuf)
