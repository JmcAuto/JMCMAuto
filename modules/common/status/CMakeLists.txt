include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(status INTERFACE
  status.h)
target_link_libraries(status INTERFACE
  modules/common/proto:error_code_proto
  protobuf)