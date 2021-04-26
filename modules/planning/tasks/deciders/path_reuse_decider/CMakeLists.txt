include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_reuse_decider
  path_reuse_decider.cc
  path_reuse_decider.h)
target_link_libraries(path_reuse_decider
  history
  obstacle_blocking_analyzer
  planning_context
  planning_gflags
  reference_line_info
  planning_proto
  /modules/planning/tasks/deciders:decider_base)


