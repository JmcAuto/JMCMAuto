include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(constraint_checker
  constraint_checker.cc
  constraint_checker.h)
target_link_libraries(constraint_checker
  /modules/common:log
  /modules/common/proto:pnc_point_proto
  /modules/common/vehicle_state:vehicle_state_provider
  /modules/planning/common:planning_gflags
  /modules/planning/common/trajectory:discretized_trajectory)
add_library(constraint_checker1d
  constraint_checker1d.cc
  constraint_checker1d.h)
target_link_libraries(constraint_checker1d
  /modules/common:log
  /modules/planning/common:frame
  /modules/planning/common:planning_gflags
  /modules/planning/common/trajectory:discretized_trajectory
  /modules/planning/math/curve1d)
add_library(collision_checker
  collision_checker.cc
  collision_checker.h)
target_link_libraries(collision_checker
  /modules/common:log
  /modules/common/configs:vehicle_config_helper
  /modules/common/math:geometry
  /modules/common/math:path_matcher
  /modules/planning/common:frame
  /modules/planning/common:obstacle
  /modules/planning/common/trajectory:discretized_trajectory
  /modules/planning/lattice/behavior:path_time_graph
  /modules/prediction/proto:prediction_proto)


