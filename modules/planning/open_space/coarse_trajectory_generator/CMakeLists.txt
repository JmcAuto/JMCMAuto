include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(node3d
  node3d.cc
  node3d.h)
target_link_libraries(node3d
  log
  /modules/common/math
  obstacle
  /modules/planning/constraint_checker:collision_checker
  planner_open_space_config_proto)
add_library(reeds_shepp_path
  reeds_shepp_path.cc
  reeds_shepp_path.h)
target_link_libraries(reeds_shepp_path
  log
  vehicle_config_helper
  /modules/common/math
  planning_gflags
  /modules/planning/open_space/coarse_trajectory_generator:node3d
  planner_open_space_config_proto
  adolc)
add_library(grid_search
  grid_search.cc
  grid_search.h)
target_link_libraries(grid_search
  log
  /modules/common/math
  planner_open_space_config_proto
  com_google_absl//absl/strings)
add_library(open_space_utils INTERFACE)
target_link_libraries(open_space_utils INTERFACE
  /modules/planning/open_space/coarse_trajectory_generator:grid_search
  /modules/planning/open_space/coarse_trajectory_generator:node3d
  /modules/planning/open_space/coarse_trajectory_generator:reeds_shepp_path)
add_library(hybrid_a_star
  hybrid_a_star.cc
  hybrid_a_star.h)
target_link_libraries(hybrid_a_star
  open_space_utils
  log
  vehicle_config_helper
  obstacle
  planning_gflags
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  planner_open_space_config_proto
  discrete_points_math)


