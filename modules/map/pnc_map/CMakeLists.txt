include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path
  path.cc
  path.h)
target_link_libraries(path
  math
  hdmap
  hdmap_util
  map_proto
  routing_proto)
add_library(route_segments
  route_segments.cc
  route_segments.h)
target_link_libraries(route_segments
  vehicle_state_proto
  hdmap
  path
  routing_gflags)
add_library(pnc_map
  pnc_map.cc
  pnc_map.h)
target_link_libraries(pnc_map
  path
  route_segments
  vehicle_state_proto
  hdmap
  planning_gflags
  routing_gflags)


