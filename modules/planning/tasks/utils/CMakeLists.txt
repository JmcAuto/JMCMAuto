include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(st_gap_estimator
  st_gap_estimator.cc
  st_gap_estimator.h)
target_link_libraries(st_gap_estimator
  planning_gflags)


