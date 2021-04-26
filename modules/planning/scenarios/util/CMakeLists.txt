include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(scenario_util_lib
  util.cc
  util.h)
target_link_libraries(scenario_util_lib
  log
  map_util
  planning_common)


