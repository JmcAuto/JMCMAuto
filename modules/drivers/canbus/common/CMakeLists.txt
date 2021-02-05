include_directories(PROJECT_SOURCE_DIR)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(drivers_canbus_common
  byte.cc
  byte.h
  canbus_consts.h)
target_link_libraries(drivers_canbus_common
  ${COMMON_LIB}
  )