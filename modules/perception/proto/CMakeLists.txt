include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_library(perception_proto
  perception_obstacle.pb.cc
  perception_obstacle.pb.h
  traffic_light_detection.pb.cc
  traffic_light_detection.pb.h
  )
target_link_libraries(perception_proto
  common_proto
  error_code_proto
  header_proto
  map_proto
  protobuf)

add_library(lane_post_process_config_proto
  lane_post_process_config.pb.cc
  lane_post_process_config.pb.h)
target_link_libraries(lane_post_process_config_proto
  protobuf)

add_library(probabilistic_fusion_config_proto
  probabilistic_fusion_config.pb.cc
  probabilistic_fusion_config.pb.h)
target_link_libraries(probabilistic_fusion_config_proto
  protobuf)

add_library(yolo_camera_detector_config_proto
  yolo_camera_detector_config.pb.cc
  yolo_camera_detector_config.pb.h)
target_link_libraries(yolo_camera_detector_config_proto
  protobuf)

add_library(modest_radar_detector_config_proto
  modest_radar_detector_config.pb.cc
  modest_radar_detector_config.pb.h)
target_link_libraries(modest_radar_detector_config_proto
  protobuf)

add_library(tracker_config_proto
  tracker_config.pb.cc
  tracker_config.pb.h)
target_link_libraries(tracker_config_proto
  protobuf)

add_library(sequence_type_fuser_config_proto
  sequence_type_fuser_config.pb.cc
  sequence_type_fuser_config.pb.h)
target_link_libraries(sequence_type_fuser_config_proto
  protobuf)

add_library(async_fusion_config_proto
  async_fusion_config.pb.cc
  async_fusion_config.pb.h)
target_link_libraries(async_fusion_config_proto
  protobuf)

add_library(geometry_camera_converter_config_proto
  geometry_camera_converter_config.pb.cc
  geometry_camera_converter_config.pb.h)
target_link_libraries(geometry_camera_converter_config_proto
  protobuf)

add_library(cnn_segmentation_config_proto
  cnn_segmentation_config.pb.cc
  cnn_segmentation_config.pb.h)
target_link_libraries(cnn_segmentation_config_proto
  protobuf)

add_library(hdmap_roi_filter_config_proto
  hdmap_roi_filter_config.pb.cc
  hdmap_roi_filter_config.pb.h)
target_link_libraries(hdmap_roi_filter_config_proto
  protobuf)

add_library(low_object_filter_config_proto
  low_object_filter_config.pb.cc
  low_object_filter_config.pb.h)
target_link_libraries(low_object_filter_config_proto
  protobuf)

add_library(perception_ultrasonic_proto
  perception_ultrasonic.pb.cc
  perception_ultrasonic.pb.h)
target_link_libraries(perception_ultrasonic_proto
  common_proto
  error_code_proto
  header_proto
  protobuf)