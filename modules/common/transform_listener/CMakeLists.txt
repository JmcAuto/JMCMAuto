include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(transform_listener
  transform_listener.cc
  transform_listener.h)
target_link_libraries(transform_listener
${COMMON_LIB}
jmcauto_log
  time)


