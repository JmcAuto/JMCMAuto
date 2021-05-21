include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(routing_lib
  routing.cc
  routing.h)
target_link_libraries(routing_lib
  common
  jmc_auto_app
  adapter_manager
  status
  util
  hdmap_util
  routing_gflags
  routing_core
  graph
  routing_proto)


