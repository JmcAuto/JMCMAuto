include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(edge_creator
  edge_creator.cc
  edge_creator.h)
target_link_libraries(edge_creator
  common
  map_proto
  routing_gflags
  routing_proto)
add_library(graph_creator
  graph_creator.cc
  graph_creator.h)
target_link_libraries(graph_creator
  edge_creator
  node_creator
  common
  util
  opendrive_adapter
  map_proto
  routing_proto)
add_library(node_creator
  node_creator.cc
  node_creator.h)
target_link_libraries(node_creator
  common
  map_proto
  routing_gflags
  routing_proto)


