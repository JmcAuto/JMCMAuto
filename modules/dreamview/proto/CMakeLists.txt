include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_library(simulation_world_proto
  simulation_world.pb.cc
  simulation_world.pb.h)
target_link_libraries(simulation_world_proto
  #monitor_log_proto
  pnc_point_proto
  perception_proto
  planning_internal_proto
  routing_proto
  protobuf)

add_library(point_cloud_proto
  point_cloud.pb.cc
  point_cloud.pb.h)
target_link_libraries(point_cloud_proto
  protobuf)

add_library(hmi_config_proto
  hmi_config.pb.cc
  hmi_config.pb.h)
target_link_libraries(hmi_config_proto
  protobuf)

add_library(hmi_status_proto
  hmi_status.pb.cc
  hmi_status.pb.h)
target_link_libraries(hmi_status_proto
  #system_status_proto
  protobuf)

add_library(voice_detection_proto
  voice_detection.pb.cc
  voice_detection.pb.h)
target_link_libraries(voice_detection_proto
  hmi_config_proto
  protobuf)

add_library(chart_proto
  chart.pb.cc
  chart.pb.h)
target_link_libraries(chart_proto
  common_proto
  protobuf)