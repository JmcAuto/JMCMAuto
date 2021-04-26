include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(node3d
  node3d.cc
  node3d.h)
target_link_libraries(node3d
  /modules/common:log
  /modules/common/math
  /modules/planning/common:obstacle
  /modules/planning/constraint_checker:collision_checker
  /modules/planning/proto:planner_open_space_config_proto)
add_library(reeds_shepp_path
  reeds_shepp_path.cc
  reeds_shepp_path.h)
target_link_libraries(reeds_shepp_path
  /modules/common:log
  /modules/common/configs:vehicle_config_helper
  /modules/common/math
  /modules/planning/common:planning_gflags
  /modules/planning/open_space/coarse_trajectory_generator:node3d
  /modules/planning/proto:planner_open_space_config_proto
  adolc)
add_library(grid_search
  grid_search.cc
  grid_search.h)
target_link_libraries(grid_search
  /modules/common:log
  /modules/common/math
  /modules/planning/proto:planner_open_space_config_proto
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
  /modules/common:log
  /modules/common/configs:vehicle_config_helper
  /modules/planning/common:obstacle
  /modules/planning/common:planning_gflags
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  /modules/planning/proto:planner_open_space_config_proto
  /modules/planning/math:discrete_points_math)


