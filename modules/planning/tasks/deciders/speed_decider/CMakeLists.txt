include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(speed_decider
  speed_decider.cc
  speed_decider.h)
target_link_libraries(speed_decider
  vehicle_config_helper
  /modules/common/math
  /modules/common/status
  /modules/map/proto:map_proto
  frame
  path_decision
  planning_gflags
  reference_line_info
  planning_proto
  /modules/planning/tasks:task
  /modules/planning/tasks/utils:st_gap_estimator)


