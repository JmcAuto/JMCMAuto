include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(curve1d INTERFACE)
add_library(polynomial_curve1d INTERFACE)
target_link_libraries(polynomial_curve1d INTERFACE
  curve1d)
add_library(quartic_polynomial_curve1d
  quartic_polynomial_curve1d.cc
  quartic_polynomial_curve1d.h)
target_link_libraries(quartic_polynomial_curve1d
  polynomial_curve1d
  /modules/common:log
  /modules/common/util:string_util
  com_google_absl//absl/strings)
add_library(quintic_polynomial_curve1d
  quintic_polynomial_curve1d.cc
  quintic_polynomial_curve1d.h)
target_link_libraries(quintic_polynomial_curve1d
  polynomial_curve1d
  /modules/common:log
  /modules/common/util:string_util
  com_google_absl//absl/strings)
add_library(cubic_polynomial_curve1d
  cubic_polynomial_curve1d.cc
  cubic_polynomial_curve1d.h)
target_link_libraries(cubic_polynomial_curve1d
  polynomial_curve1d
  quartic_polynomial_curve1d
  /modules/common:log
  com_google_absl//absl/strings)
add_library(quintic_spiral_path
  quintic_spiral_path.cc
  quintic_spiral_path.h
  quintic_spiral_path_with_derivation.h)
target_link_libraries(quintic_spiral_path
  quintic_polynomial_curve1d
  /modules/common:log
  /modules/common/math
  com_google_absl//absl/strings)
add_library(piecewise_quintic_spiral_path
  piecewise_quintic_spiral_path.cc
  piecewise_quintic_spiral_path.h)
target_link_libraries(piecewise_quintic_spiral_path
  quintic_spiral_path
  /modules/common:log
  /modules/common/math
  com_google_absl//absl/strings)


