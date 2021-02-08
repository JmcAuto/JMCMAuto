include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(mdc_can_client
  mdc_can_client.cc
  mdc_can_client.h)
target_link_libraries(mdc_can_client
  can_client)