include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(status
  status.h)
target_link_libraries(status
  ${PROJECT_SOURCE_DIR}/modules/common/proto/error_code_proto
  protobuf)