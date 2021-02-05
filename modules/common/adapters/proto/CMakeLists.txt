include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
find_package(Protobuf REQUIRED)

PROTOBUF_GENERATE_CPP(adapter_config_proto_lib PROTO_HDRS
  adapter_config.proto)
add_library(adapter_config_proto
  ${adapter_config_proto_lib})
target_link_libraries(adapter_config_proto
  ${COMMON_LIB}
  protobuf)
