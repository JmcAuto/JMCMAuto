include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(constraint_checker
  constraint_checker.cc
  constraint_checker.h)
target_link_libraries(constraint_checker
  log
  pnc_point_proto
  vehicle_state_provider
  planning_gflags
  discretized_trajectory)
add_library(constraint_checker1d
  constraint_checker1d.cc
  constraint_checker1d.h)
target_link_libraries(constraint_checker1d
  log
  frame
  planning_gflags
  discretized_trajectory
  /modules/planning/math/curve1d)
add_library(collision_checker
  collision_checker.cc
  collision_checker.h)
target_link_libraries(collision_checker
  log
  vehicle_config_helper
  geometry
  path_matcher
  frame
  obstacle
  discretized_trajectory
  /modules/planning/lattice/behavior:path_time_graph
  /modules/prediction/proto:prediction_proto)


