include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(canbus_common
  canbus_gflags.cc
  canbus_gflags.h)
target_link_libraries(canbus_common
  ${COMMON_LIB}
  gflags)