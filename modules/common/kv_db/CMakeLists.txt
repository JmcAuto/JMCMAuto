include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(kv_db
  kv_db.cc
  kv_db.h)
target_link_libraries(kv_db
  gflags
  ${PROJECT_SOURCE_DIR}/modules/common/log
  ${PROJECT_SOURCE_DIR}/modules/common/util)