include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(util_lib
  util.cc
  util.h)
target_link_libraries(util_lib
  log
  /modules/common/util
  vehicle_state_provider
  /modules/common/vehicle_state/proto:vehicle_state_proto
  planning_gflags
  reference_line_info
  planning_proto
  /modules/routing:routing_lib)
add_library(common_lib
  common.cc
  common.h)
target_link_libraries(common_lib
  log
  /modules/common/util
  frame
  reference_line_info)
add_library(math_util_lib INTERFACE)
target_link_libraries(math_util_lib INTERFACE
  log
  map_util)


