include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_lane_borrow_decider
  path_lane_borrow_decider.cc
  path_lane_borrow_decider.h)
target_link_libraries(path_lane_borrow_decider
  /modules/planning/common:obstacle_blocking_analyzer
  /modules/planning/common:planning_context
  /modules/planning/common:planning_gflags
  /modules/planning/common:reference_line_info
  /modules/planning/tasks/deciders:decider_base)


