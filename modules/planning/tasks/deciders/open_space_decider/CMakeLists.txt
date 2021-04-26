include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(open_space_roi_decider
  open_space_roi_decider.cc
  open_space_roi_decider.h)
target_link_libraries(open_space_roi_decider
  /modules/planning/common:planning_context
  /modules/planning/common:planning_gflags
  /modules/planning/tasks/deciders:decider_base)
add_library(open_space_pre_stop_decider
  open_space_pre_stop_decider.cc
  open_space_pre_stop_decider.h)
target_link_libraries(open_space_pre_stop_decider
  /modules/planning/common:reference_line_info
  /modules/planning/common/util:common_lib
  /modules/planning/tasks/deciders:decider_base)
add_library(open_space_fallback_decider
  open_space_fallback_decider.cc
  open_space_fallback_decider.h)
target_link_libraries(open_space_fallback_decider
  /modules/common/vehicle_state:vehicle_state_provider
  /modules/planning/common:planning_context
  /modules/planning/common:planning_gflags
  /modules/planning/tasks/deciders:decider_base)


