include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(digital_filter
  digital_filter.cc
  digital_filter.h)
target_link_libraries(digital_filter
  digital_filter_coefficients
  modules/common:log)
add_library(mean_filter
  mean_filter.cc
  mean_filter.h)
target_link_libraries(mean_filter
  modules/common:log)
add_library(digital_filter_coefficients
  digital_filter_coefficients.cc
  digital_filter_coefficients.h)
add_library(filters INTERFACE)
target_link_libraries(filters INTERFACE
  digital_filter
  digital_filter_coefficients
  mean_filter)