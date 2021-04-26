include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(creep_decider
  creep_decider.cc
  creep_decider.h)
target_link_libraries(creep_decider
  planning_context
  reference_line_info
  common_lib
  util_lib
  /modules/planning/scenarios/util:scenario_util_lib
  /modules/planning/tasks/deciders:decider_base)


