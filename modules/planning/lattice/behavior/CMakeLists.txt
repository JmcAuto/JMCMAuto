include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(feasible_region
  feasible_region.cc
  feasible_region.h)
target_link_libraries(feasible_region
  log
  pnc_point_proto
  planning_gflags)
add_library(path_time_graph
  path_time_graph.cc
  path_time_graph.h)
target_link_libraries(path_time_graph
  log
  linear_interpolation
  path_matcher
  pnc_point_proto
  frame
  obstacle
  planning_gflags
  lattice_structure_proto
  /modules/planning/reference_line)
add_library(prediction_querier
  prediction_querier.cc
  prediction_querier.h)
target_link_libraries(prediction_querier
  /modules/common/math
  path_matcher
  obstacle
  lattice_structure_proto
  planning_proto)


