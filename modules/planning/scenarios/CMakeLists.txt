include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(scenario
  scenario.cc
  scenario.h)
target_link_libraries(scenario
  stage
  util
  planning_common
  util_lib
  /modules/planning/tasks:task)
add_library(stage
  stage.cc
  stage.h)
target_link_libraries(stage
  planning_common
  util_lib
  /modules/planning/tasks:task
  /modules/planning/tasks:task_factory)
add_library(scenario_manager
  scenario_manager.cc
  scenario_manager.h)
target_link_libraries(scenario_manager
  vehicle_config_helper
  vehicle_state_provider
  planning_common
  planning_context
  util_lib
  /modules/planning/scenarios/lane_follow
  /modules/planning/scenarios/park/valet_parking)


