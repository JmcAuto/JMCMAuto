include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(. vehicle_config_proto_lib)

add_library(vehicle_config_proto
  vehicle_config_proto_lib)
target_link_libraries(vehicle_config_proto
  modules/common/proto:common_proto
  modules/common/proto:header_proto
  protobuf)