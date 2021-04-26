include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(rtk_planner
  rtk_replay_planner.cc
  rtk_replay_planner.h)
target_link_libraries(rtk_planner
  /cyber/common:log
  pnc_point_proto
  /modules/common/util
  factory
  vehicle_state_provider
  planning_common
  /modules/planning/math/curve1d:quartic_polynomial_curve1d
  /modules/planning/planner
  planning_config_proto
  planning_proto
  com_github_gflags_gflags//:gflags
  com_google_absl//absl/strings
  eigen)


