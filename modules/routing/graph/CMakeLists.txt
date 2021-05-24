include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(graph INTERFACE)
target_link_libraries(graph INTERFACE
  routing_node_with_range
  routing_sub_topo_graph
  routing_topo_graph
  routing_topo_node
  routing_topo_range_manager)
add_library(routing_topo_range
  topo_range.cc
  topo_range.h)
target_link_libraries(routing_topo_range
  routing_gflags)
add_library(routing_topo_range_manager
  topo_range_manager.cc
  topo_range_manager.h)
target_link_libraries(routing_topo_range_manager
  routing_topo_node
  routing_topo_range
  map_util)
add_library(routing_range_utils INTERFACE)
target_link_libraries(routing_range_utils INTERFACE
  )
add_library(routing_node_with_range
  node_with_range.cc
  node_with_range.h)
target_link_libraries(routing_node_with_range
  routing_topo_node
  routing_topo_range)
add_library(routing_topo_node
  topo_node.cc
  topo_node.h)
target_link_libraries(routing_topo_node
  routing_range_utils
  routing_topo_range
  jmcauto_log
  common_proto
  map_util
  map_proto
  routing_proto)
add_library(routing_topo_graph
  topo_graph.cc
  topo_graph.h)
target_link_libraries(routing_topo_graph
  routing_topo_node
  common
  common_proto
  util
  map_proto
  routing_gflags
  routing_proto)
add_library(routing_sub_topo_graph
  sub_topo_graph.cc
  sub_topo_graph.h)
target_link_libraries(routing_sub_topo_graph
  routing_node_with_range
  routing_topo_node
  common
  common_proto
  util
  map_proto
  routing_gflags
  routing_proto)
add_library(routing_topo_test_utils
  topo_test_utils.cc
  topo_test_utils.h)
target_link_libraries(routing_topo_test_utils
  routing_topo_graph
  routing_topo_node)


