include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(path_decider_obstacle_utils
  path_decider_obstacle_utils.cc
  path_decider_obstacle_utils.h)
target_link_libraries(path_decider_obstacle_utils
  frame)


