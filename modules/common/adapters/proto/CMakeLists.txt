include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(adapter_config_proto
  adapter_config.pb.cc
  adapter_config.pb.h)
target_link_libraries(adapter_config_proto
${COMMON_LIB}
  protobuf)