include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(mdc_can_client
  mdc_can_client.cc
  mdc_can_client.h
  ${PROJECT_SOURCE_DIR}/generated/canrxserviceinterface_common.cpp
  ${PROJECT_SOURCE_DIR}/generated/cantxserviceinterface_common.cpp
  )
target_link_libraries(mdc_can_client
  can_client)