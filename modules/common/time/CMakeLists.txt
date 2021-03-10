include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(time
  timer.cc
  jmcauto_time.h
  time_util.h
  timer.h)
target_link_libraries(time
  jmcauto_log
  macro
  config_gflags)