include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(decider_base
  decider.cc
  decider.h)
target_link_libraries(decider_base
  /modules/common/status
  /modules/planning/common:frame
  /modules/planning/tasks:task)


