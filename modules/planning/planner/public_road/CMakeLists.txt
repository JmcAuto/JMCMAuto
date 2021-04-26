include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(public_road_planner
  public_road_planner.cc
  public_road_planner.h)
target_link_libraries(public_road_planner
  /modules/common:log
  /modules/common/proto:pnc_point_proto
  /modules/common/status
  /modules/common/time
  /modules/common/util
  /modules/common/util:factory
  /modules/common/vehicle_state:vehicle_state_provider
  /modules/map/hdmap
  /modules/planning/common:planning_common
  /modules/planning/common:planning_gflags
  /modules/planning/constraint_checker
  /modules/planning/math/curve1d:quartic_polynomial_curve1d
  /modules/planning/planner
  /modules/planning/proto:planning_proto
  /modules/planning/reference_line
  /modules/planning/reference_line:qp_spline_reference_line_smoother
  /modules/planning/tasks:task
  /modules/planning/tasks/deciders/path_decider
  /modules/planning/tasks/deciders/speed_decider
  /modules/planning/tasks/optimizers:path_optimizer
  /modules/planning/tasks/optimizers:speed_optimizer
  /modules/planning/tasks/optimizers/path_time_heuristic:path_time_heuristic_optimizer
  /external:gflags
  eigen)


