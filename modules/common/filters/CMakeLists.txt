include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(digital_filter
  digital_filter.cc
  digital_filter.h)
target_link_libraries(digital_filter
  ${COMMON_LIB}
  digital_filter_coefficients
  jmcauto_log)
add_library(mean_filter
  mean_filter.cc
  mean_filter.h)
target_link_libraries(mean_filter
  ${COMMON_LIB}
jmcauto_log)
add_library(digital_filter_coefficients
  digital_filter_coefficients.cc
  digital_filter_coefficients.h)
add_library(filters INTERFACE)
target_link_libraries(filters INTERFACE
  ${COMMON_LIB}
  digital_filter
  digital_filter_coefficients
  mean_filter)