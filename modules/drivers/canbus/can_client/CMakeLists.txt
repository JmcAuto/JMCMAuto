include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(can_client_factory
  can_client_factory.cc
  can_client_factory.h)
target_link_libraries(can_client_factory
  ${COMMON_LIB}
  can_client
  canbus_common
  canbus_proto
  factory
  #fake_can_client
  #socket_can_client_raw
  #hermes_can_client
  )
add_library(can_client INTERFACE)
target_link_libraries(can_client INTERFACE
  ${COMMON_LIB}
  util
  canbus_common
  canbus_proto)