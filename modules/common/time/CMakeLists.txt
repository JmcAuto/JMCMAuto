include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(time
  timer.cc
  jmcauto_time.h
  time_util.h
  timer.h)
target_link_libraries(time
  modules/common/log
  modules/common/macro
  modules/common/configs/config_gflags)