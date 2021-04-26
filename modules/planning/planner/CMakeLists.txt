include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(planner INTERFACE)
target_link_libraries(planner INTERFACE
  pnc_point_proto
  /modules/common/status
  frame
  reference_line_info
  planning_proto
  /modules/planning/scenarios:scenario
  /modules/planning/scenarios:scenario_manager)
add_library(planner_dispatcher
  on_lane_planner_dispatcher.cc
  planner_dispatcher.cc
  on_lane_planner_dispatcher.h
  planner_dispatcher.h)
target_link_libraries(planner_dispatcher
  /modules/common/status
  /modules/common/util
  /modules/planning/planner/public_road:public_road_planner
  planning_proto)


