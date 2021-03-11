include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_library(routing_proto
  poi.pb.cc
  poi.pb.h
  routing.pb.cc
  routing.pb.h
  routing_config.pb.cc
  routing_config.pb.h
  topo_graph.pb.cc
  topo_graph.pb.h)
target_link_libraries(routing_proto
  common_proto
  error_code_proto
  header_proto
  map_proto
  protobuf)

