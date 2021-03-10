include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(multi_camera_projection_config_proto
  multi_camera_projection_config.pb.cc
  multi_camera_projection_config.pb.h)
target_link_libraries(multi_camera_projection_config_proto
  protobuf)

add_library(recognizer_config_proto
  recognizer_config.pb.cc
  recognizer_config.pb.h)
target_link_libraries(recognizer_config_proto
  protobuf)

add_library(preprocessor_config_proto
  preprocessor_config.pb.cc
  preprocessor_config.pb.h)
target_link_libraries(preprocessor_config_proto
  protobuf)

add_library(rectifier_config_proto
  rectifier_config.pb.cc
  rectifier_config.pb.h)
target_link_libraries(rectifier_config_proto
  protobuf)

add_library(reviser_config_proto
  reviser_config.pb.cc
  reviser_config.pb.h)
target_link_libraries(reviser_config_proto
  protobuf)

add_library(subnode_config_proto
  subnode_config.pb.cc
  subnode_config.pb.h)
target_link_libraries(subnode_config_proto
  protobuf)