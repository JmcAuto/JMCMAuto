include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(piecewise_jerk_speed_optimizer
  piecewise_jerk_speed_optimizer.cc
  piecewise_jerk_speed_optimizer.h)
target_link_libraries(piecewise_jerk_speed_optimizer
  error_code_proto
  pnc_point_proto
  speed_profile_generator
  st_graph_data
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  /modules/planning/tasks/optimizers:speed_optimizer)
add_library(piecewise_jerk_speed_nonlinear_optimizer
  piecewise_jerk_speed_nonlinear_optimizer.cc
  piecewise_jerk_speed_nonlinear_optimizer.h)
target_link_libraries(piecewise_jerk_speed_nonlinear_optimizer
  piecewise_jerk_speed_nonlinear_ipopt_interface
  error_code_proto
  pnc_point_proto
  speed_profile_generator
  st_graph_data
  path_data
  piecewise_jerk_trajectory1d
  /modules/planning/math/piecewise_jerk:piecewise_jerk_path_problem
  /modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem
  ipopt_return_status_proto
  /modules/planning/tasks/optimizers:speed_optimizer)
add_library(piecewise_jerk_speed_nonlinear_ipopt_interface
  piecewise_jerk_speed_nonlinear_ipopt_interface.cc
  piecewise_jerk_speed_nonlinear_ipopt_interface.h)
target_link_libraries(piecewise_jerk_speed_nonlinear_ipopt_interface
  pnc_point_proto
  path_data
  piecewise_jerk_trajectory1d
  ipopt)


