include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(routing_core INTERFACE)
target_link_libraries(routing_core INTERFACE
  routing_navigator)
add_library(routing_navigator
  navigator.cc
  navigator.h)
target_link_libraries(routing_navigator
  routing_black_list_range_generator
  routing_result_generator
  adapter_manager
  common_proto
  jmcauto_time
  util
  routing_gflags
  graph
  routing_proto
  strategy)
add_library(routing_black_list_range_generator
  black_list_range_generator.cc
  black_list_range_generator.h)
target_link_libraries(routing_black_list_range_generator
  graph)
add_library(routing_result_generator
  result_generator.cc
  result_generator.h)
target_link_libraries(routing_result_generator
  adapter_manager
  jmcauto_time
  map_util
  graph
  routing_proto)