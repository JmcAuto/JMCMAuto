include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(prediction_conf_proto
  prediction_conf.pb.cc
  prediction_conf.pb.h)
target_link_libraries(prediction_conf_proto
  common_proto
  perception_proto
  protobuf)

add_library(prediction_proto
  prediction_obstacle.pb.cc
  prediction_obstacle.pb.h)
target_link_libraries(prediction_proto
  feature_proto
  common_proto
  error_code_proto
  header_proto
  pnc_point_proto
  perception_proto
  protobuf)

add_library(lane_graph_proto
  lane_graph.pb.cc
  lane_graph.pb.h)
target_link_libraries(lane_graph_proto
  common_proto
  pnc_point_proto
  protobuf)

add_library(feature_proto
  feature.pb.cc
  feature.pb.h)
target_link_libraries(common_proto
  common_proto
  perception_proto
  lane_graph_proto
  protobuf)

add_library(offline_features_proto
  offline_features.pb.cc
  offline_features.pb.h)
target_link_libraries(offline_features_proto
  feature_proto
  protobuf)

add_library(fnn_model_base_proto
  fnn_model_base.pb.cc
  fnn_model_base.pb.h)
target_link_libraries(fnn_model_base_proto
  protobuf)

add_library(fnn_vehicle_model_proto
  fnn_vehicle_model.pb.cc
  fnn_vehicle_model.pb.h)
target_link_libraries(fnn_vehicle_model_proto
  fnn_model_base_proto
  protobuf)

add_library(network_model_proto
  network_layers.pb.cc
  network_layers.pb.h
  network_model.pb.cc
  network_model.pb.h)
target_link_libraries(network_model_proto
  protobuf)