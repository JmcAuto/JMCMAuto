include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(planning_proto
  planning.pb.cc
  planning.pb.h
  )
target_link_libraries(planning_proto
  decision_proto
  planning_mode_config_proto
  canbus_proto
  drive_state_proto
  common_proto
  error_code_proto
  header_proto
  pnc_point_proto
  vehicle_signal_proto
  localization_proto
  pose_proto
  map_proto
  perception_proto
  prediction_proto
  routing_proto
  protobuf)

add_library(creep_decider_config_proto
  creep_decider_config.pb.cc
  creep_decider_config.pb.h)
target_link_libraries(creep_decider_config_proto
  protobuf)

add_library(decision_proto
  decision.pb.cc
  decision.pb.h)
target_link_libraries(decision_proto
  common_proto
  vehicle_signal_proto
  routing_proto
  protobuf)

add_library(dp_st_speed_config_proto
  dp_st_speed_config.pb.cc
  dp_st_speed_config.pb.h)
target_link_libraries(dp_st_speed_config_proto
  protobuf)

add_library(navi_path_decider_config_proto
  navi_path_decider_config.pb.cc
  navi_path_decider_config.pb.h)
target_link_libraries(navi_path_decider_config_proto
  protobuf)

add_library(navi_speed_decider_config_proto
  navi_speed_decider_config.pb.cc
  navi_speed_decider_config.pb.h)
target_link_libraries(navi_speed_decider_config_proto
  protobuf)

add_library(navi_obstacle_decider_config_proto
  navi_obstacle_decider_config.pb.cc
  navi_obstacle_decider_config.pb.h)
target_link_libraries(navi_obstacle_decider_config_proto
  protobuf)

add_library(planning_config_proto
  planning_config.pb.cc
  planning_config.pb.h)
target_link_libraries(planning_config_proto
  creep_decider_config_proto
  dp_st_speed_config_proto
  lane_change_decider_config_proto
  navi_obstacle_decider_config_proto
  navi_path_decider_config_proto
  navi_speed_decider_config_proto
  open_space_fallback_decider_config_proto
  open_space_pre_stop_decider_config_proto
  open_space_roi_decider_config_proto
  open_space_trajectory_partition_config_proto
  open_space_trajectory_provider_config_proto
  path_assessment_decider_config_proto
  path_bounds_decider_config_proto
  path_decider_config_proto
  path_lane_borrow_decider_config_proto
  path_reuse_decider_config_proto
  piecewise_jerk_nonlinear_speed_config_proto
  piecewise_jerk_path_config_proto
  piecewise_jerk_speed_config_proto
  planner_open_space_config_proto
  reference_line_smoother_config_proto
  rule_based_stop_decider_config_proto
  speed_bounds_decider_config_proto
  st_bounds_decider_config_proto
  protobuf)

add_library(planning_internal_proto
  planning_internal.pb.cc
  planning_internal.pb.h)
target_link_libraries(planning_internal_proto
  decision_proto
  planning_config_proto
  sl_boundary_proto
  st_drivable_boundary_proto
  canbus_proto
  common_proto
  header_proto
  pnc_point_proto
  chart_proto
  localization_proto
  navigation_proto
  perception_proto
  prediction_proto
  routing_proto
  protobuf)

add_library(planning_stats_proto
  planning_stats.pb.cc
  planning_stats.pb.h)
target_link_libraries(planning_stats_proto
  protobuf)

add_library(reference_line_smoother_config_proto
  reference_line_smoother_config.pb.cc
  reference_line_smoother_config.pb.h)
target_link_libraries(reference_line_smoother_config_proto
  cos_theta_smoother_config_proto
  fem_pos_deviation_smoother_config_proto
  protobuf)

add_library(sl_boundary_proto
  sl_boundary.pb.cc
  sl_boundary.pb.h)
target_link_libraries(sl_boundary_proto
  pnc_point_proto
  protobuf)

add_library(st_drivable_boundary_proto
  st_drivable_boundary.pb.cc
  st_drivable_boundary.pb.h)
target_link_libraries(st_drivable_boundary_proto
  pnc_point_proto
  protobuf)

add_library(traffic_rule_config_proto
  traffic_rule_config.pb.cc
  traffic_rule_config.pb.h)
target_link_libraries(traffic_rule_config_proto
  protobuf)

add_library(planning_mode_config_proto
  planning_mode_config.pb.cc
  planning_mode_config.pb.h)
target_link_libraries(planning_mode_config_proto
  routing_proto
  protobuf)

add_library(piecewise_jerk_path_config_proto
  piecewise_jerk_path_config.pb.cc
  piecewise_jerk_path_config.pb.h)
target_link_libraries(piecewise_jerk_path_config_proto
  pnc_point_proto
  protobuf)

add_library(piecewise_jerk_speed_config_proto
  piecewise_jerk_speed_config.pb.cc
  piecewise_jerk_speed_config.pb.h)
target_link_libraries(piecewise_jerk_speed_config_proto
  protobuf)


add_library(piecewise_jerk_nonlinear_speed_config_proto
  piecewise_jerk_nonlinear_speed_config.pb.cc
  piecewise_jerk_nonlinear_speed_config.pb.h)
target_link_libraries(piecewise_jerk_nonlinear_speed_config_proto
  protobuf)

add_library(path_bounds_decider_config_proto
  path_bounds_decider_config.pb.cc
  path_bounds_decider_config.pb.h)
target_link_libraries(path_bounds_decider_config_proto
  protobuf)

add_library(path_decider_config_proto
  path_decider_config.pb.cc
  path_decider_config.pb.h)
target_link_libraries(path_decider_config
  protobuf)

add_library(path_assessment_decider_config_proto
  path_assessment_decider_config.pb.cc
  path_assessment_decider_config.pb.h)
target_link_libraries(path_assessment_decider_config_proto
  protobuf)

add_library(path_lane_borrow_decider_config_proto
  path_lane_borrow_decider_config.pb.cc
  path_lane_borrow_decider_config.pb.h)
target_link_libraries(path_lane_borrow_decider_config_proto
  protobuf)

add_library(path_reuse_decider_config_proto
  path_reuse_decider_config.pb.cc
  path_reuse_decider_config.pb.h)
target_link_libraries(path_reuse_decider_config_proto
  routing_proto
  protobuf)

add_library(lane_change_decider_config_proto
  lane_change_decider_config.pb.cc
  lane_change_decider_config.pb.h)
target_link_libraries(lane_change_decider_config_proto
  protobuf)

add_library(spiral_curve_config_proto
  spiral_curve_config.pb.cc
  spiral_curve_config.pb.h)
target_link_libraries(spiral_curve_config_proto
  protobuf)

