include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(proto)

add_library(monitor_log
  monitor_log_buffer.cc
  monitor_logger.cc
  monitor_log_buffer.h
  monitor_logger.h)
target_link_libraries(monitor_log
  ${COMMON_LIB}
jmcauto_log
  adapter_manager
  monitor_log_proto
  common_proto
  time)