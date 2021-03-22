include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(fake_can_client
  fake_can_client.cc
  fake_can_client.h)
target_link_libraries(fake_can_client
  can_client)