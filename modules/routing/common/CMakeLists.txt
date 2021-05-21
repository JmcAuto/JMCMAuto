include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(routing_gflags
  routing_gflags.cc
  routing_gflags.h)
target_link_libraries(routing_gflags
  gflags)