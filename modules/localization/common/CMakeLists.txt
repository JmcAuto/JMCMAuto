include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(localization_common
  localization_gflags.cc
  localization_gflags.h)
target_link_libraries(localization_common
  gflags)