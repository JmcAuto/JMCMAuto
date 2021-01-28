include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(monitor_log
  monitor_log_buffer.cc
  monitor_logger.cc
  monitor_log_buffer.h
  monitor_logger.h)
target_link_libraries(monitor_log
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/adapters/adapter_manager
  ${PROJECT_SOURCE_DIR}/modules/common/monitor_log/proto/monitor_log_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/common_proto
  ${PROJECT_SOURCE_DIR}/modules/common/time)