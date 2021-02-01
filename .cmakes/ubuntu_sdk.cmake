#############################################################################
# 此文件仅包含mdc sdk相关内容
#############################################################################

set(SDK_INCLUDE 
    "${TOOL_CHAIN_SYSROOT}/usr/local/include"
	"${TOOL_CHAIN_SYSROOT}/usr/local/include/RT-DDS"
	"${TOOL_CHAIN_SYSROOT}/usr/local/include/someip"
	"${TOOL_CHAIN_SYSROOT}/usr/local/include/vrtf")

set(SDK_LINK_DIR 
    "${TOOL_CHAIN_SYSROOT}/usr/local/lib64"
	"${TOOL_CHAIN_SYSROOT}/usr/local/lib"
	"${TOOL_CHAIN_SYSROOT}/usr/lib"
	"${TOOL_CHAIN_SYSROOT}/usr/lib/aarch64-linux-gnu")

set(SDK_LIB
    ara_com
	ara_per
	ara_exec
	ara_log
	crypto
	ddscpp
	ddscore
	dlt
	gmock
	gmock_main
	iccshm
	JsonParser
	jsoncpp
	KeyValueStorage
	logging
	MdioDrvAdapter
	pthread
	pci_dev_info
	protobuf-c
	rng
	someip
	securec
	ssl
	vrtf_vcc
	vcc_ddsdriver
	vcc_someipdriver
	yaml-cpp
	ara_visual)



