include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(feasible_region
  feasible_region.cc
  feasible_region.h)
target_link_libraries(feasible_region
  /modules/common:log
  /modules/common/proto:pnc_point_proto
  /modules/planning/common:planning_gflags)
add_library(path_time_graph
  path_time_graph.cc
  path_time_graph.h)
target_link_libraries(path_time_graph
  /modules/common:log
  /modules/common/math:linear_interpolation
  /modules/common/math:path_matcher
  /modules/common/proto:pnc_point_proto
  /modules/planning/common:frame
  /modules/planning/common:obstacle
  /modules/planning/common:planning_gflags
  /modules/planning/proto:lattice_structure_proto
  /modules/planning/reference_line)
add_library(prediction_querier
  prediction_querier.cc
  prediction_querier.h)
target_link_libraries(prediction_querier
  /modules/common/math
  /modules/common/math:path_matcher
  /modules/planning/common:obstacle
  /modules/planning/proto:lattice_structure_proto
  /modules/planning/proto:planning_proto)


