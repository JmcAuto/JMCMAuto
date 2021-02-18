##########################################################################
# 该文件内容为模板内容，用户可根据注释提示自定义修改
# 注意：COMMON前缀内容为默认添加，用户不可删除
##########################################################################

cmake_minimum_required(VERSION 3.5)
project(jmcauto)

#定义函数，把文件夹下所有子文件夹保存在变量中
macro(LISTSUBDIR result curdir)
file(GLOB_RECURSE children LIST_DIRECTORIES true  ${curdir}/*)
set(dirlist ${curdir})
foreach(child ${children})
    if(IS_DIRECTORY ${child})
        list(APPEND dirlist ${child})
    endif()
endforeach()
set(${result} ${dirlist})
endmacro()

#调用函数，把generat下的子目录保存在变量中
LISTSUBDIR(GENERATEDDIRS generated)

#包含src和generated目录下的头文件路径
INCLUDE_DIRECTORIES(${GENERATEDDIRS})

#把对应目录下的c和c++所有源文件分别保存在变量中
file(GLOB_RECURSE  C_SOURCE src/*.c generated/*.c)
file(GLOB_RECURSE  CXX_SOURCE src/*.cxx src/*.cpp src/*.cc generated/*.cxx generated/*.cpp generated/*.cc)

#默认依赖，用户不可修改
include(${CMAKE_CURRENT_SOURCE_DIR}/.cmakes/ubuntu_common.cmake)

#用户可在此添加头文件路径
include_directories(${COMMON_INCLUDE} include ${PROJECT_SOURCE_DIR})

#用户可在此添加库文件路径
link_directories(${COMMON_LINK_DIR} lib)
add_subdirectory(modules/common)
add_subdirectory(modules/canbus)
add_subdirectory(modules/drivers/canbus)
add_subdirectory(modules/control/proto)

#用户可在此添加宏
add_definitions(${COMMON_DEFINITIONS})

#用户可在此添加编译选项
add_compile_options(${COMMON_COMPILE})
#add_compile_options(-fPIC)

#添加第三方依赖
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")

#默认编译c和c++文件生成可执行文件
add_executable(canbus modules/canbus/main.cc)

#用户可在此添加链接库
target_link_libraries(canbus
  ${COMMON_LIB}
  canbus_lib
  canbus_common
  jmcauto_log
  #monitor_log
  can_client
  drivers_canbus_common
  -lpthread)

#用户可在此添加链接参数
set_target_properties(canbus PROPERTIES LINK_FLAGS ${COMMON_LINK_FLAG})
