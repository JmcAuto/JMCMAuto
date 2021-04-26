include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_decider
  path_decider.cc
  path_decider.h)
target_link_libraries(path_decider
  /modules/common/configs:vehicle_config_helper
  /modules/common/math
  /modules/common/status
  /modules/map/proto:map_proto
  /modules/planning/common:frame
  /modules/planning/common:path_decision
  /modules/planning/common:planning_gflags
  /modules/planning/common:reference_line_info
  /modules/planning/proto:planning_config_proto
  /modules/planning/proto:planning_proto
  /modules/planning/tasks:task)


