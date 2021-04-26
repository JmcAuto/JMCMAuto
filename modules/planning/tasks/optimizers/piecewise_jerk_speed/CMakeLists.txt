include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(piecewise_jerk_speed_optimizer
  piecewise_jerk_speed_optimizer.cc
  piecewise_jerk_speed_optimizer.h)
target_link_libraries(piecewise_jerk_speed_optimizer
  /modules/common/proto:error_code_proto
  /modules/common/proto:pnc_point_proto
  /modules/planning/common:speed_profile_generator
  /modules/planning/common:st_graph_data
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  /modules/planning/tasks/optimizers:speed_optimizer)
add_library(piecewise_jerk_speed_nonlinear_optimizer
  piecewise_jerk_speed_nonlinear_optimizer.cc
  piecewise_jerk_speed_nonlinear_optimizer.h)
target_link_libraries(piecewise_jerk_speed_nonlinear_optimizer
  piecewise_jerk_speed_nonlinear_ipopt_interface
  /modules/common/proto:error_code_proto
  /modules/common/proto:pnc_point_proto
  /modules/planning/common:speed_profile_generator
  /modules/planning/common:st_graph_data
  /modules/planning/common/path:path_data
  /modules/planning/common/trajectory1d:piecewise_jerk_trajectory1d
  /modules/planning/math/piecewise_jerk:piecewise_jerk_path_problem
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  /modules/planning/proto:ipopt_return_status_proto
  /modules/planning/tasks/optimizers:speed_optimizer)
add_library(piecewise_jerk_speed_nonlinear_ipopt_interface
  piecewise_jerk_speed_nonlinear_ipopt_interface.cc
  piecewise_jerk_speed_nonlinear_ipopt_interface.h)
target_link_libraries(piecewise_jerk_speed_nonlinear_ipopt_interface
  /modules/common/proto:pnc_point_proto
  /modules/planning/common/path:path_data
  /modules/planning/common/trajectory1d:piecewise_jerk_trajectory1d
  ipopt)


