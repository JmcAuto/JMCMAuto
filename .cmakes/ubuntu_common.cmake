#############################################################################
# 注意：CMAKE_XXX 参数留空
#############################################################################

#此处可以为c和c++配置不同的编译选项
set(CMAKE_C_FLAGS "")
set(CMAKE_CXX_FLAGS "")
set(CMAKE_CXX_LINK_FLAGS "")

#把Debug和Release状态下默认的编译选项设置为空，避免和用户的设置重复
set(CMAKE_C_FLAGS_DEBUG "")
set(CMAKE_C_FLAGS_RELEASE "")
set(CMAKE_CXX_FLAGS_DEBUG "")
set(CMAKE_CXX_FLAGS_RELEASE  "")

#############################################################################
# 注意：DEFAULT_XXXX 为默认内容
#############################################################################
include(${CMAKE_CURRENT_SOURCE_DIR}/.cmakes/ubuntu_sdk.cmake)

#根据不同的工程类型，添加默认的编译，链接选项
IF (CMAKE_BUILD_TYPE MATCHES Debug)
    set(DEFAULT_DEFINITIONS -DHAS_VSOMEIP_BINDING)
    set(DEFAULT_COMPILE -std=c++14 -O0 -g3 -Wall -c -fmessage-length=0 -fPIC -fPIE -pie -fstack-protector-all -Wtrampolines)
    set(DEFAULT_LIB ${SDK_LIB})
    
ELSEIF (CMAKE_BUILD_TYPE MATCHES Release)
    set(DEFAULT_DEFINITIONS -DHAS_VSOMEIP_BINDING)
    set(DEFAULT_COMPILE -std=c++14 -O1 -Wall -c -fmessage-length=0 -fPIC -fPIE -pie -fstack-protector-all -Wtrampolines)
    set(DEFAULT_LIB ${SDK_LIB})

ELSEIF (CMAKE_BUILD_TYPE MATCHES UnitTest)
    #当为UnitTest工程时，把teestcode下的源码也加入到要编译的变量中
    list(APPEND C_SOURCE ${TEST_C_SOURCE})
    list(APPEND CXX_SOURCE ${TEST_CXX_SOURCE})
    #当为UnitTest工程类型时，把testcode文件夹下的所有目录include
    INCLUDE_DIRECTORIES(${TESTCODEDIRS})
    set(DEFAULT_DEFINITIONS -DHAS_VSOMEIP_BINDING -DMDC_TEST)
    set(DEFAULT_COMPILE -std=c++14 -O0 -g -Wall -c -fmessage-length=0 -fPIC -fPIE -pie -fstack-protector-all -Wtrampolines)
    set(DEFAULT_LIB gtest gtest_main ${SDK_LIB})
    
ENDIF()

set(DEFAULT_LINK_FLAG "-Wl,--as-needed -fPIE -pie -Wl,-z,relro -Wl,-z,noexecstack -Wl,-z,now")
set(DEFAULT_INCLUDE ${SDK_INCLUDE})
set(DEFAULT_LINK_DIR ${SDK_LINK_DIR})

##########################################################################
# 注意：REFRESH_XXXX 为读取刷新内容
##########################################################################
set(REFRESH_LINK_FLAG "")
list(APPEND COMMON_LINK_FLAG ${DEFAULT_LINK_FLAG} ${REFRESH_LINK_FLAG})

set(REFRESH_INCLUDE "")
list(APPEND COMMON_INCLUDE ${DEFAULT_INCLUDE} ${REFRESH_INCLUDE})

set(REFRESH_INCLUDE "")
list(APPEND COMMON_LINK_DIR ${DEFAULT_LINK_DIR} ${REFRESH_INCLUDE})

set(REFRESH_DEFINITIONS "")
list(APPEND COMMON_DEFINITIONS ${DEFAULT_DEFINITIONS} ${REFRESH_DEFINITIONS})

set(REFRESH_COMPILE "")
list(APPEND COMMON_COMPILE ${DEFAULT_COMPILE} ${REFRESH_COMPILE})

set(REFRESH_LIB "")
list(APPEND COMMON_LIB ${DEFAULT_LIB} ${REFRESH_LIB})
#############################################################################
