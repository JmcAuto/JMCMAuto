include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(strategy INTERFACE)
target_link_libraries(strategy INTERFACE
  routing_a_star_strategy)
add_library(routing_a_star_strategy
  a_star_strategy.cc
  a_star_strategy.h
  strategy.h)
target_link_libraries(routing_a_star_strategy
  common
  common_proto
  map_proto
  routing_gflags
  graph
  routing_proto)


