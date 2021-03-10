include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(teleop
  teleop.cc)
target_link_libraries(teleop
  gflags
  canbus_proto
  common
  adapter_manager
  control_proto
  )