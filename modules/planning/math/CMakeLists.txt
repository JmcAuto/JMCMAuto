include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(curve_math
  curve_math.cc
  curve_math.h)
add_library(discrete_points_math
  discrete_points_math.cc
  discrete_points_math.h)
target_link_libraries(discrete_points_math
  /modules/common:log)
add_library(polynomial_xd
  polynomial_xd.cc
  polynomial_xd.h)
target_link_libraries(polynomial_xd
  /modules/common:log)


