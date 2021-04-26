include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(discretized_trajectory
  discretized_trajectory.cc
  discretized_trajectory.h)
target_link_libraries(discretized_trajectory
  /modules/common/math:linear_interpolation
  /modules/common/proto:pnc_point_proto
  /modules/common/vehicle_state/proto:vehicle_state_proto
  /modules/planning/common:planning_context
  eigen)
add_library(publishable_trajectory
  publishable_trajectory.cc
  publishable_trajectory.h)
target_link_libraries(publishable_trajectory
  discretized_trajectory
  /modules/planning/proto:planning_proto)


