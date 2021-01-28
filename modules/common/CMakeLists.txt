include_directories(.)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(common INTERFACE)
target_link_libraries(common INTERFACE
  log
  macro)
add_library(macro INTERFACE)
add_library(macros INTERFACE)
add_library(log INTERFACE)
target_link_libraries(log INTERFACE
  glog)
add_library(jmc_auto_app
  jmc_auto_app.cc
  jmc_auto_app.h)
target_link_libraries(jmc_auto_app
  log
  modules/common/status
  modules/common/util:string_util)