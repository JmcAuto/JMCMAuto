include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(canbus_common
  byte.cc
  byte.h
  canbus_consts.h)
target_link_libraries(canbus_common
  )