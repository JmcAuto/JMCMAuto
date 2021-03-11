include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_library(navigation_proto
  navigation.pb.cc
  navigation.pb.h)
target_link_libraries(navigation_proto
  header_proto
  pnc_point_proto
  localization_proto
  map_proto
  perception_proto
  protobuf)

add_library(relative_map_config_proto
  relative_map_config.pb.cc
  relative_map_config.pb.h)
target_link_libraries(relative_map_config_proto
  protobuf) 