include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_optimizer
  path_optimizer.cc
  path_optimizer.h)
target_link_libraries(path_optimizer
  /modules/common/status
  path_decision
  reference_line_info
  path_data
  speed_data
  /modules/planning/tasks:task
  eigen)
add_library(speed_optimizer
  speed_optimizer.cc
  speed_optimizer.h)
target_link_libraries(speed_optimizer
  /modules/common/status
  path_decision
  planning_gflags
  reference_line_info
  speed_limit
  st_graph_data
  path_data
  speed_data
  /modules/planning/tasks:task
  eigen)
add_library(trajectory_optimizer
  trajectory_optimizer.cc
  trajectory_optimizer.h)
target_link_libraries(trajectory_optimizer
  /modules/common/status
  planning_gflags
  discretized_trajectory
  /modules/planning/tasks:task)


