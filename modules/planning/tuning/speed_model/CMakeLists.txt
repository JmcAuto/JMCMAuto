include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(autotuning_speed_feature_builder
  autotuning_speed_feature_builder.cc
  autotuning_speed_feature_builder.h)
target_link_libraries(autotuning_speed_feature_builder
  /modules/common:log
  /modules/common/proto:error_code_proto
  /modules/planning/tuning:autotuning_feature_builder)
add_library(autotuning_speed_mlp_model
  autotuning_speed_mlp_model.cc
  autotuning_speed_mlp_model.h)
target_link_libraries(autotuning_speed_mlp_model
  autotuning_speed_feature_builder
  /modules/planning/tuning:autotuning_base_model)


