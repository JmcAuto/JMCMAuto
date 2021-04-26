include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(st_point
  st_point.cc
  st_point.h)
target_link_libraries(st_point
  /modules/common/math
  /external:gflags)
add_library(st_boundary
  st_boundary.cc
  st_boundary.h)
target_link_libraries(st_boundary
  st_point
  log
  planning_gflags
  planning_proto)
add_library(speed_data
  speed_data.cc
  speed_data.h)
target_link_libraries(speed_data
  st_point
  /modules/common/math
  pnc_point_proto
  point_factory
  string_util
  planning_context
  planning_gflags
  planning_proto
  /external:gflags)


