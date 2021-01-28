include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

file(GLOB_RECURSE  vehicle_config_proto_lib *.cc *.h)

add_library(vehicle_config_proto
  vehicle_config_proto_lib)
target_link_libraries(vehicle_config_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/common_proto
  ${PROJECT_SOURCE_DIR}/modules/common/proto/header_proto
  protobuf)