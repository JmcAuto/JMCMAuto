include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(qp_solver)

add_library(math INTERFACE)
target_link_libraries(math INTERFACE
${COMMON_LIB}
  angle
  cartesian_frenet_conversion
  euler_angles_zxy
  factorial
  geometry
  integral
  kalman_filter
  linear_interpolation
  lqr
  mpc
  quaternion
  search
  sin_table)
add_library(geometry
  aabox2d.cc
  box2d.cc
  line_segment2d.cc
  math_utils.cc
  math_utils.h
  polygon2d.cc
  vec2d.cc
  aabox2d.h
  aaboxkdtree2d.h
  box2d.h
  line_segment2d.h
  polygon2d.h
  vec2d.h)
target_link_libraries(geometry
${COMMON_LIB}
jmcauto_log
  string_util)
add_library(sin_table
  sin_table.cc
  sin_table.h)
add_library(angle
  angle.cc
  angle.h)
target_link_libraries(angle
${COMMON_LIB}
  sin_table)
add_library(euler_angles_zxy INTERFACE)
target_link_libraries(euler_angles_zxy INTERFACE
${COMMON_LIB}
  geometry
  )
add_library(quaternion INTERFACE)
target_link_libraries(quaternion INTERFACE
${COMMON_LIB}
  euler_angles_zxy
  geometry
  common_proto
  )
add_library(matrix_operations
  matrix_operations.cc
  matrix_operations.h)
target_link_libraries(matrix_operations
${COMMON_LIB}
jmcauto_log)
add_library(kalman_filter INTERFACE)
target_link_libraries(kalman_filter INTERFACE
${COMMON_LIB}
jmcauto_log
  matrix_operations
  )
add_library(extended_kalman_filter INTERFACE)
target_link_libraries(extended_kalman_filter INTERFACE
${COMMON_LIB}
jmcauto_log
  matrix_operations
  )
add_library(factorial INTERFACE)
target_link_libraries(factorial
${COMMON_LIB}
  )
add_library(path_matcher
  path_matcher.cc
  path_matcher.h)
target_link_libraries(path_matcher
${COMMON_LIB}
  linear_interpolation
  pnc_point_proto)
add_library(search
  search.cc
  search.h)
target_link_libraries(search
${COMMON_LIB}
  )
add_library(linear_interpolation
  linear_interpolation.cc
  linear_interpolation.h)
target_link_libraries(linear_interpolation
${COMMON_LIB}
  geometry
  pnc_point_proto)
add_library(nonlinear_interpolation
  nonlinear_interpolation.cc
  nonlinear_interpolation.h)
target_link_libraries(nonlinear_interpolation
${COMMON_LIB}
  geometry
  hermite_spline
  integral
  pnc_point_proto)
add_library(integral
  integral.cc
  integral.h)
target_link_libraries(integral
${COMMON_LIB}
jmcauto_log)
add_library(lqr
  linear_quadratic_regulator.cc
  linear_quadratic_regulator.h)
target_link_libraries(lqr
${COMMON_LIB}
jmcauto_log
  )
add_library(mpc
  mpc_solver.cc
  mpc_solver.h)
target_link_libraries(mpc
${COMMON_LIB}
jmcauto_log
  qp_solver
  active_set_qp_solver
  )
add_library(cartesian_frenet_conversion
  cartesian_frenet_conversion.cc
  cartesian_frenet_conversion.h)
target_link_libraries(cartesian_frenet_conversion
${COMMON_LIB}
  geometry
  jmcauto_log
  )
add_library(hermite_spline INTERFACE)
target_link_libraries(hermite_spline INTERFACE
${COMMON_LIB}
jmcauto_log)