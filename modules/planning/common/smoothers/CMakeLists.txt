include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(smoother
  smoother.cc
  smoother.h)
target_link_libraries(smoother
  /modules/common/status
  /modules/planning/common:frame
  /modules/planning/common:planning_gflags
  /modules/planning/proto:planning_proto)


