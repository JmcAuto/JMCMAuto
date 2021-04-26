include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(open_space_trajectory_provider
  open_space_trajectory_provider.cc
  open_space_trajectory_provider.h)
target_link_libraries(open_space_trajectory_provider
  open_space_trajectory_optimizer
  /modules/common/status
  planning_common
  planning_gflags
  trajectory_stitcher
  discretized_trajectory
  /modules/planning/tasks:task
  /modules/planning/tasks/optimizers:trajectory_optimizer)
add_library(open_space_trajectory_optimizer
  open_space_trajectory_optimizer.cc
  open_space_trajectory_optimizer.h)
target_link_libraries(open_space_trajectory_optimizer
  log
  pnc_point_proto
  /modules/common/status
  /modules/common/util
  vehicle_state_provider
  frame
  /modules/planning/open_space/coarse_trajectory_generator:hybrid_a_star
  /modules/planning/open_space/trajectory_smoother:distance_approach_problem
  /modules/planning/open_space/trajectory_smoother:dual_variable_warm_start_problem
  /modules/planning/open_space/trajectory_smoother:iterative_anchoring_smoother
  planning_config_proto
  /external:gflags
  eigen)


