include_directories(PROJECT_SOURCE_DIR)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(proto)

add_library(config_gflags
  config_gflags.cc
  config_gflags.h)
target_link_libraries(config_gflags
  ${COMMON_LIB}
  gflags)
add_library(vehicle_config_helper
  vehicle_config_helper.cc
  vehicle_config_helper.h)
target_link_libraries(vehicle_config_helper
  ${COMMON_LIB}
  config_gflags
  common
  vehicle_config_proto
  util
  pnc_point_proto
  math
  glog)