include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(autotuning_raw_feature_generator
  autotuning_raw_feature_generator.cc
  autotuning_raw_feature_generator.h)
target_link_libraries(autotuning_raw_feature_generator
  pnc_point_proto
  /modules/common/status
  frame
  reference_line_info
  speed_limit
  auto_tuning_raw_feature_proto)
add_library(autotuning_feature_builder INTERFACE)
target_link_libraries(autotuning_feature_builder INTERFACE
  /modules/common/status
  auto_tuning_model_input_proto
  auto_tuning_raw_feature_proto)
add_library(autotuning_mlp_net_model
  autotuning_mlp_net_model.cc
  autotuning_mlp_net_model.h)
target_link_libraries(autotuning_mlp_net_model
  /modules/prediction/network:net_model)
add_library(autotuning_base_model INTERFACE)
target_link_libraries(autotuning_base_model INTERFACE
  autotuning_feature_builder
  autotuning_mlp_net_model
  /modules/common/status
  auto_tuning_model_input_proto)


