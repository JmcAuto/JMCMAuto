include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(open_space_trajectory_partition
  open_space_trajectory_partition.cc
  open_space_trajectory_partition.h)
target_link_libraries(open_space_trajectory_partition
  /modules/common/status
  /modules/planning/proto:planning_config_proto
  /modules/planning/tasks:task
  /modules/planning/tasks/optimizers:trajectory_optimizer
  /modules/common/time:time
  com_google_absl//absl/strings)


