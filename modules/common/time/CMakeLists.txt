include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(time
  timer.cc
  jmcauto_time.h
  time_util.h
  timer.h)
get_link_libraries(time
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/macro
  ${PROJECT_SOURCE_DIR}/modules/common/configs/config_gflags)