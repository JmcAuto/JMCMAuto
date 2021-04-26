include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_assessment_decider
  path_assessment_decider.cc
  path_assessment_decider.h)
target_link_libraries(path_assessment_decider
  planning_context
  planning_gflags
  reference_line_info
  /modules/planning/tasks/deciders:decider_base
  /modules/planning/tasks/deciders/path_bounds_decider
  /modules/planning/tasks/deciders/utils:path_decider_obstacle_utils)


