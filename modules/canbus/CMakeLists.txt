include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_subdirectory(common)
add_subdirectory(proto)
add_subdirectory(vehicle)

add_library(canbus_lib
  canbus.cc
  canbus.h)
target_link_libraries(canbus_lib
  ${COMMON_LIB}
  canbus_common
  vehicle_factory
  common
  jmc_auto_app
  adapter_manager
  #monitor_log
  #can_client_factory
  can_receiver
  can_sender
  #remotecontrol_proto
  )