include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(status INTERFACE)
target_link_libraries(status INTERFACE
  error_code_proto
  protobuf)