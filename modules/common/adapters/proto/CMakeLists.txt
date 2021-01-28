include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

aux_source_directory(. adapter_config_proto_lib)

add_library(adapter_config_proto
  adapter_config_proto_lib)
target_link_libraries(adapter_config_proto
  protobuf)