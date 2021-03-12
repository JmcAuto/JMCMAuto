include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_subdirectory(common)
add_subdirectory(proto)
add_subdirectory(vehicle)
add_subdirectory(tools)

add_executable(canbus main.cc)
target_link_libraries(canbus
  ${COMMON_LIB}
  canbus_lib
  can_client
  drivers_canbus_common
  -lpthread)

add_library(canbus_lib
  canbus.cc
  canbus.h)
target_link_libraries(canbus_lib
  canbus_common
  vehicle_factory
  common
  jmc_auto_app
  adapter_manager
  #monitor_log
  can_client_factory
  can_receiver
  can_sender
  #remotecontrol_proto
  )