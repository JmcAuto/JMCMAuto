include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(relative_map_lib
  relative_map.cc
  relative_map.h
  relative_map_interface.h)
target_link_libraries(relative_map_lib
  navigation_lane_lib
  common
  jmc_auto_app
  adapter_manager
  geometry
  status
  util
  relative_map_gflags
  navigation_proto
  relative_map_config_proto
  perception_proto)
add_library(navigation_lane_lib
  navigation_lane.cc
  navigation_lane.h)
target_link_libraries(navigation_lane_lib
  jmcauto_log
  pnc_point_proto
  vehicle_state_provider
  localization_proto
  relative_map_gflags
  navigation_proto
  relative_map_config_proto
  perception_proto)


