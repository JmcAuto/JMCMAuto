include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
add_compile_options(-fPIC)

add_subdirectory(common)
add_subdirectory(proto)
add_subdirectory(controller)

add_executable(control main.cc)
target_link_libraries(control
  ${COMMON_LIB}
  control_lib
  common)

add_library(lib_pad_terminal INTERFACE)
target_link_libraries(lib_pad_terminal INTERFACE
  control_common)
add_library(control_lib
  control.cc
  control.h)
target_link_libraries(control_lib
  canbus_proto
  common
  jmc_auto_app
  adapter_manager
  #monitor_log
  time
  util
  control_common
  controller
  control_proto
  localization_proto
  perception_proto
  planning_proto
  prediction_proto)