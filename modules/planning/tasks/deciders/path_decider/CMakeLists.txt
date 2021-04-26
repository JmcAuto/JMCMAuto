include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_decider
  path_decider.cc
  path_decider.h)
target_link_libraries(path_decider
  vehicle_config_helper
  /modules/common/math
  /modules/common/status
  /modules/map/proto:map_proto
  frame
  path_decision
  planning_gflags
  reference_line_info
  planning_config_proto
  planning_proto
  /modules/planning/tasks:task)


