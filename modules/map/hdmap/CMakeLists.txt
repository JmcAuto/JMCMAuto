include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(hdmap
  hdmap.cc
  hdmap_common.cc
  hdmap_impl.cc
  hdmap.h
  hdmap_common.h
  hdmap_impl.h
  hdmap_util.h)
target_link_libraries(hdmap
  macro
  config_gflags
  math
  linear_interpolation
  util
  opendrive_adapter
  navigation_proto
  map_proto
  glog)
add_library(hdmap_util
  hdmap_util.cc
  hdmap_util.h)
target_link_libraries(hdmap_util
  hdmap
  jmcauto_log
  macro
  adapter_manager
  config_gflags
  util
  string_util
  navigation_proto)


