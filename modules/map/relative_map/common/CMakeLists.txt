include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(relative_map_gflags
  relative_map_gflags.cc
  relative_map_gflags.h)
target_link_libraries(relative_map_gflags
  gflags)


