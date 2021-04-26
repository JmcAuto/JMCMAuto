include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(lane_change_decider
  lane_change_decider.cc
  lane_change_decider.h)
target_link_libraries(lane_change_decider
  /modules/map/pnc_map:route_segments
  /modules/planning/common:planning_context
  /modules/planning/common:planning_gflags
  /modules/planning/common:reference_line_info
  /modules/planning/proto:planning_proto
  /modules/planning/tasks/deciders:decider_base
  com_google_absl//absl/strings)


