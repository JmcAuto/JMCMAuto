include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(scenario
  scenario.cc
  scenario.h)
target_link_libraries(scenario
  stage
  /modules/common/util:util
  /modules/planning/common:planning_common
  /modules/planning/common/util:util_lib
  /modules/planning/tasks:task)
add_library(stage
  stage.cc
  stage.h)
target_link_libraries(stage
  /modules/planning/common:planning_common
  /modules/planning/common/util:util_lib
  /modules/planning/tasks:task
  /modules/planning/tasks:task_factory)
add_library(scenario_manager
  scenario_manager.cc
  scenario_manager.h)
target_link_libraries(scenario_manager
  /modules/common/configs:vehicle_config_helper
  /modules/common/vehicle_state:vehicle_state_provider
  /modules/planning/common:planning_common
  /modules/planning/common:planning_context
  /modules/planning/common/util:util_lib
  /modules/planning/scenarios/lane_follow
  /modules/planning/scenarios/park/valet_parking)


