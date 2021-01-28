include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(common INTERFACE)
target_link_libraries(common INTERFACE
  log
  macro
  macros)
add_library(macro
  macro.h)
add_library(macros
  macros.h)
add_library(log
  log.h)
target_link_libraries(log
  glog)
add_library(jmc_auto_app
  jmc_auto_app.cc
  jmc_auto_app.h)
target_link_libraries(jmc_auto_app
  log
  ${PROJECT_SOURCE_DIR}/modules/common/status
  ${PROJECT_SOURCE_DIR}/modules/common/util/string_util)