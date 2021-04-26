include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(piecewise_jerk_problem
  piecewise_jerk_problem.cc
  piecewise_jerk_problem.h)
target_link_libraries(piecewise_jerk_problem
  log
  planning_gflags
  osqp)
add_library(piecewise_jerk_path_problem
  piecewise_jerk_path_problem.cc
  piecewise_jerk_path_problem.h)
target_link_libraries(piecewise_jerk_path_problem
  piecewise_jerk_problem)
add_library(piecewise_jerk_speed_problem
  piecewise_jerk_speed_problem.cc
  piecewise_jerk_speed_problem.h)
target_link_libraries(piecewise_jerk_speed_problem
  piecewise_jerk_problem)


