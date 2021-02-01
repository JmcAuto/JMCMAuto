include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(proto)

add_library(monitor_log
  monitor_log_buffer.cc
  monitor_logger.cc
  monitor_log_buffer.h
  monitor_logger.h)
target_link_libraries(monitor_log
  modules/common/log
  modules/common/adapters/adapter_manager
  modules/common/monitor_log/proto/monitor_log_proto
  modules/common/proto/common_proto
  modules/common/time)