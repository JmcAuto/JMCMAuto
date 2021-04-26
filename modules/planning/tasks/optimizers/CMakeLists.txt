include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_optimizer
  path_optimizer.cc
  path_optimizer.h)
target_link_libraries(path_optimizer
  /modules/common/status
  /modules/planning/common:path_decision
  /modules/planning/common:reference_line_info
  /modules/planning/common/path:path_data
  /modules/planning/common/speed:speed_data
  /modules/planning/tasks:task
  eigen)
add_library(speed_optimizer
  speed_optimizer.cc
  speed_optimizer.h)
target_link_libraries(speed_optimizer
  /modules/common/status
  /modules/planning/common:path_decision
  /modules/planning/common:planning_gflags
  /modules/planning/common:reference_line_info
  /modules/planning/common:speed_limit
  /modules/planning/common:st_graph_data
  /modules/planning/common/path:path_data
  /modules/planning/common/speed:speed_data
  /modules/planning/tasks:task
  eigen)
add_library(trajectory_optimizer
  trajectory_optimizer.cc
  trajectory_optimizer.h)
target_link_libraries(trajectory_optimizer
  /modules/common/status
  /modules/planning/common:planning_gflags
  /modules/planning/common/trajectory:discretized_trajectory
  /modules/planning/tasks:task)


