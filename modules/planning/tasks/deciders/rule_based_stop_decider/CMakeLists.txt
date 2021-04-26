include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(rule_based_stop_decider
  rule_based_stop_decider.cc
  rule_based_stop_decider.h)
target_link_libraries(rule_based_stop_decider
  /modules/common/status
  /modules/planning/common:frame
  /modules/planning/common:planning_gflags
  /modules/planning/common/util:common_lib
  /modules/planning/tasks:task
  /modules/planning/tasks/deciders:decider_base
  /modules/planning/tasks/deciders/lane_change_decider)


