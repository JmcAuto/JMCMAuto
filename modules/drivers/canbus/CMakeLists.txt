include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(can_client)
add_subdirectory(can_comm)
add_subdirectory(common)
add_subdirectory(proto)

add_library(sensor_gflags
  sensor_gflags.cc
  sensor_gflags.h)
target_link_libraries(sensor_gflags
  ${COMMON_LIB}
  gflags)