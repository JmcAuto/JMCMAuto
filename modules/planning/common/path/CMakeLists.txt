include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(discretized_path
  discretized_path.cc
  discretized_path.h)
target_link_libraries(discretized_path
  linear_interpolation
  pnc_point_proto)
add_library(frenet_frame_path
  frenet_frame_path.cc
  frenet_frame_path.h)
target_link_libraries(frenet_frame_path
  linear_interpolation
  planning_proto)
add_library(path_data
  path_data.cc
  path_data.h)
target_link_libraries(path_data
  discretized_path
  frenet_frame_path
  cartesian_frenet_conversion
  planning_gflags
  /modules/planning/reference_line)


