#####################################################
# File Name: jmc_auto.sh
# Author: Leo
# mail: yli97@jmc.com.cn
# Created Time: 三  4/14 09:22:18 2021
#####################################################

#!/bin/bash

#=================================================
#                   Utils
#=================================================

function source_jmc_auto_base() {
    DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
    cd "${DIR}"

    source "${DIR}/scripts/jmc_auto_base.sh"
}

function jmc_auto_check_system_config() {

    # check operating system
     #需要Ubuntu16.04并且安装了MDS,以及交叉编译环境
    OP_SYSTEM=$(uname -s)
    case $OP_SYSTEM in
        "Linux")
            echo "System check passed. Build continue ..."

            # check system configuration
            DEFAULT_MEM_SIZE="2.0"
            MEM_SIZE=$(free | grep Mem | awk '{printf("%0.2f", $2 / 1024.0 / 1024.0)}')
            if (( $(echo "$MEM_SIZE < $DEFAULT_MEM_SIZE" | bc -l) )); then
                warning "System memory [${MEM_SIZE}G] is lower than minimum required memory size [2.0G]. Build could fail."
            fi
            ;;
        *)
            error "Unsupported system: ${OP_SYSTEM}."
            error "Please use Linux, we recommend Ubuntu 14.04."
            exit 1
        ;;
    esac
}

function generate_build_files() {
    #检查apcm文件夹,并拷贝到各个模块文件夹中
    if [ ! -e apcm ]; then
        fail 'Missing apcm folder. Please check it.'
    fi
    #check_mds 待添加
    cd ${JMC_AUTO_ROOT_DIR}/
    for ( x in $(ls -1 apcm/functional_software) ); do
        cp -r --parents apcm/common modules/${x}/
        cp -r --parents apcm/functional_software/${x} modules/${x}
        java -jar ${MDS_HOME}/plugins/org.eclipse.equinox.launcher_1.5.600.v20191014-2022.jar \
             -nosplash -application com.huawei.mdc.commands.application gen \
             -i modules/${x}/apcm \
             -o modules/${x}/
    done

}

#=================================================
#              Build functions
#=================================================

function build() {
    #编译autosar文件
    generate_build_files
    build_autosar
    if [ $? -ne 0 ]; then
        fail 'Build failed!'
    fi

    #编译各个模块
    mkdir ${JMC_AUTO_ROOT_DIR}/build
    cd ${JMC_AUTO_ROOT_DIR}/build
    cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE:STRING=${BUILD_CMD} \
          -DCMAKE_SYSTEM_NAME=Linux \
          -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=ON \
          -DCMAKE_SYSROOT=/usr/ubuntu_crossbuild_devkit/mdc_crossbuild_sysroot \
          -DTOOL_CHAIN_SYSROOT=/usr/ubuntu_crossbuild_devkit/mdc_crossbuild_sysroot \
          -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/aarch64-linux-gnu-gcc \
          -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/aarch64-linux-gnu-g++ \
          -DCMAKE_MAKE_PROGRAM:FILEPATH=/usr/bin/make \
          ${JMC_AUTO_ROOT_DIR}
    if [ $? -ne 0 ]; then
        fail 'CMAKE failed!'
    fi

    make -j4
    if [ $? -ne 0 ]; then
        fail 'Build failed!'
    fi

    if [ $? -eq 0 ]; then
        success 'Build passed!'
    fi
}

function jmc_auto_build_dbg() {
    BUILD_CMD="Debug"
    build $@
}

function jmc_auto_build_opt() {
    BUILD_CMD="Release"
    build $@
}

function build_autosar() {
    #编译autosar文件并添加配置
    java -jar ${MDS_HOME}/plugins/org.eclipse.equinox.launcher_1.5.600.v20191014-2022.jar \
         -nosplash -application com.huawei.mdc.commands.application gen \
         -i ${JMC_AUTO_ROOT_DIR}/apcm \
         -o ${JMC_AUTO_ROOT_DIR}/
    #添加配置
}

function clean() {
    #删除build文件
}

function print_usage() {
    RED='\033[0;31m'
    BLUE='\033[0;34m'
    BOLD='\033[1m'
    NONE='\033[0m'

    echo -e "\n${RED}Usage${NONE}:
    .${BOLD}/jmc_auto.sh${NONE} [OPTION]"

    echo -e "\n${RED}Options${NONE}:

    "
}

function main() {
    source_jmc_auto_base
    check_machine_arch
    jmc_auto_check_system_config

    DEFINES="--define ARCH=${MACHINE_ARCH} --define CAN_CARD=${CAN_CARD} --cxxopt=-DUSE_ESD_CAN=${USE_ESD_CAN}"

    if [ ${MACHINE_ARCH} == "x86_64" ]; then
        DEFINES="${DEFINES} --copt=-mavx2"
    fi

    local cmd=$1
    shift

    START_TIME=$(get_now)
    case $cmd in
        build)
            DEFINES="${DEFINES} --cxxopt=-DCPU_ONLY"
            jmc_auto_build_dbg $@
            ;;
        help)
            print_usage
            ;;
        *)
            print_usage
            ;;
    esac
}

main $@
