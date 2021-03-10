include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_model_config_proto
  vehicle_model_config.pb.cc
  vehicle_model_config.pb.h)
target_link_libraries(vehicle_model_config_proto
  common_proto
  header_proto
  protobuf)