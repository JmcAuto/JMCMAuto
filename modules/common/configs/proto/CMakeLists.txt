include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(vehicle_config_proto
  vehicle_config.pb.cc
  vehicle_config.pb.h)
target_link_libraries(vehicle_config_proto
  ${COMMON_LIB}
  common_proto
  header_proto
  protobuf)