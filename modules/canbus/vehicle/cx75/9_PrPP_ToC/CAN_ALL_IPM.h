#ifndef  _CAN_ALL_IPM_H
#define  _CAN_ALL_IPM_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000245
//581 IPM_LaneAssit_TorqueValidity 1 "Invalid" 0 "Valid"
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_TorqueValidity_Invalid 1
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_TorqueValidity_Valid  0 
//581 IPM_LaneAssit_TorqueReqStatus 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request"
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_TorqueReqStatus_reserved 3
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_TorqueReqStatus_reserved  2 
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_TorqueReqStatus_torque_request  1 
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_TorqueReqStatus_no_request  0 
//581 IPM_LaneAssit_WarningVibration 1 "active." 0 "inactive"
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_WarningVibration_active. 1
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_WarningVibration_inactive  0 
//581 IPM_LaneAssitType 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable"
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_Reserved 6
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_TJA_ICA_LDW  5 
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_TJA_ICA  4 
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_LDW_LKA  3 
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_LKA  2 
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_LDW  1 
#define  CAN_ALL_IPM_ce3IPM_LaneAssitType_Unavailable  0 
//581 IPM_LaneAssit_RightVisualization 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display"
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_RightVisualization_warning. 3
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_RightVisualization_intervention  2 
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_RightVisualization_line_tracking  1 
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_RightVisualization_no_display  0 
//581 IPM_LaneAssit_LeftVisualization 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display"
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_LeftVisualization_warning. 3
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_LeftVisualization_intervention  2 
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_LeftVisualization_line_tracking  1 
#define  CAN_ALL_IPM_ce2IPM_LaneAssit_LeftVisualization_no_display  0 
//581 IPM_LaneAssit_WarningAudio 1 "active." 0 "inactive"
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_WarningAudio_active. 1
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_WarningAudio_inactive  0 
//581 IPM_LaneAssit_Sensitivity 1 "lowSensitivity" 0 "highSensitivity"
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_Sensitivity_lowSensitivity 1
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_Sensitivity_highSensitivity  0 
//581 IPM_LaneAssit_Status 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off"
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_Camera_uncalibrated 7
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_Camera_blocked  6 
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_Fault  5 
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_Active  4 
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_LDW_Standby_LKA_Active  3 
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_LDW_Active_LKA_Standby  2 
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_Standby  1 
#define  CAN_ALL_IPM_ce3IPM_LaneAssit_Status_Off  0 
//581 IPM_SLAState 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off"
#define  CAN_ALL_IPM_ce3IPM_SLAState_Defect 4
#define  CAN_ALL_IPM_ce3IPM_SLAState_Navigation_only_mode  3 
#define  CAN_ALL_IPM_ce3IPM_SLAState_Vision_mode  2 
#define  CAN_ALL_IPM_ce3IPM_SLAState_Fusion_mode  1 
#define  CAN_ALL_IPM_ce3IPM_SLAState_Off  0 
//581 IPM_SLASpdlimitUnits 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown"
#define  CAN_ALL_IPM_ce2IPM_SLASpdlimitUnits_Reserved. 3
#define  CAN_ALL_IPM_ce2IPM_SLASpdlimitUnits_MPH  2 
#define  CAN_ALL_IPM_ce2IPM_SLASpdlimitUnits_KMH  1 
#define  CAN_ALL_IPM_ce2IPM_SLASpdlimitUnits_Unknown  0 
//581 IPM_SLASpdlimit 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display"
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_130 27
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_125  26 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_120  25 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_115  24 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_110  23 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_105  22 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_100  21 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_95  20 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_90  19 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_85  18 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_80  17 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_75  16 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_70  15 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_65  14 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_60  13 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_55  12 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_50  11 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_45  10 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_40  9 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_35  8 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_30  7 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_25  6 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_20  5 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_15  4 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_10  3 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_5  2 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_SPL_Cancelled  1 
#define  CAN_ALL_IPM_ce8IPM_SLASpdlimit_No_Display  0 
//581 IPM_TJAICA_Status 1 "active" 0 "inactive"
#define  CAN_ALL_IPM_cb1IPM_TJAICA_Status_active 1
#define  CAN_ALL_IPM_cb1IPM_TJAICA_Status_inactive  0 
//581 IPM_HMA_Status 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off"
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_reserved 7
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_reserved  6 
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_camera_blocked  5 
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_fault  4 
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_active  3 
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_standby  2 
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_passive  1 
#define  CAN_ALL_IPM_ce3IPM_HMA_Status_off  0 
//581 IPM_HMA_HighbeamReq 1 "high beam request" 0 "no request"
#define  CAN_ALL_IPM_cb1IPM_HMA_HighbeamReq_high_beam_request 1
#define  CAN_ALL_IPM_cb1IPM_HMA_HighbeamReq_no_request  0 
//581 IPM_LaneAssit_HandsonReq 1 "active." 0 "inactive"
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_HandsonReq_active. 1
#define  CAN_ALL_IPM_cb1IPM_LaneAssit_HandsonReq_inactive  0 
//581 IPM_LDWWarningType 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake"
#define  CAN_ALL_IPM_ce2IPM_LDWWarningType_Reserved 3
#define  CAN_ALL_IPM_ce2IPM_LDWWarningType_wheelsteer_shake  2 
#define  CAN_ALL_IPM_ce2IPM_LDWWarningType_audible_warning  1 
#define  CAN_ALL_IPM_ce2IPM_LDWWarningType_audible_warning_and_wheelsteer_shake  0 

//CAN有符号变量：该变量是正负整数
#define  CAN_ALL_IPM_s11IPM_LaneAssit_TorqueReq_offset 1024
#define  CAN_ALL_IPM_s11IPM_LaneAssit_TorqueReq_Nmax 1024
#define  CAN_ALL_IPM_s11IPM_LaneAssit_TorqueReq_Pmax 1022
#define  CAN_ALL_IPM_s12IPM_LeftLine_dy_offset 2048
#define  CAN_ALL_IPM_s12IPM_LeftLine_dy_Nmax 2048
#define  CAN_ALL_IPM_s12IPM_LeftLine_dy_Pmax 2047
#define  CAN_ALL_IPM_s10IPM_LeftLine_hor_curve_offset 150
#define  CAN_ALL_IPM_s10IPM_LeftLine_hor_curve_Nmax 150
#define  CAN_ALL_IPM_s10IPM_LeftLine_hor_curve_Pmax 513
#define  CAN_ALL_IPM_s12IPM_RightLine_dy_offset 2048
#define  CAN_ALL_IPM_s12IPM_RightLine_dy_Nmax 2048
#define  CAN_ALL_IPM_s12IPM_RightLine_dy_Pmax 2047
#define  CAN_ALL_IPM_s10IPM_RightLine_hor_curve_offset 150
#define  CAN_ALL_IPM_s10IPM_RightLine_hor_curve_Nmax 150
#define  CAN_ALL_IPM_s10IPM_RightLine_hor_curve_Pmax 513

//CAN无符号变量：define该变量的physical min-max
#define  CAN_ALL_IPM_u11IPM_LaneAssit_TorqueReq_min 0
#define  CAN_ALL_IPM_u11IPM_LaneAssit_TorqueReq_max 0x7FE
#define  CAN_ALL_IPM_u1IPM_LaneAssit_TorqueValidity_min 0
#define  CAN_ALL_IPM_u1IPM_LaneAssit_TorqueValidity_max 0x1
#define  CAN_ALL_IPM_u2IPM_LaneAssit_TorqueReqStatus_min 0
#define  CAN_ALL_IPM_u2IPM_LaneAssit_TorqueReqStatus_max 0x3
#define  CAN_ALL_IPM_u1IPM_LaneAssit_WarningVibration_min 0
#define  CAN_ALL_IPM_u1IPM_LaneAssit_WarningVibration_max 0x1
#define  CAN_ALL_IPM_u3IPM_LaneAssitType_min 0
#define  CAN_ALL_IPM_u3IPM_LaneAssitType_max 0x7
#define  CAN_ALL_IPM_u2IPM_LaneAssit_RightVisualization_min 0
#define  CAN_ALL_IPM_u2IPM_LaneAssit_RightVisualization_max 0x3
#define  CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization_min 0
#define  CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization_max 0x3
#define  CAN_ALL_IPM_u1IPM_LaneAssit_WarningAudio_min 0
#define  CAN_ALL_IPM_u1IPM_LaneAssit_WarningAudio_max 0x1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity_min 0
#define  CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity_max 0x1
#define  CAN_ALL_IPM_u3IPM_LaneAssit_Status_min 0
#define  CAN_ALL_IPM_u3IPM_LaneAssit_Status_max 0x7
#define  CAN_ALL_IPM_u3IPM_SLAState_min 0
#define  CAN_ALL_IPM_u3IPM_SLAState_max 0x7
#define  CAN_ALL_IPM_u2IPM_SLASpdlimitUnits_min 0
#define  CAN_ALL_IPM_u2IPM_SLASpdlimitUnits_max 0x3
#define  CAN_ALL_IPM_u8IPM_SLASpdlimit_min 0
#define  CAN_ALL_IPM_u8IPM_SLASpdlimit_max 0xFF
#define  CAN_ALL_IPM_u1IPM_TJAICA_Status_min 0
#define  CAN_ALL_IPM_u1IPM_TJAICA_Status_max 0x1
#define  CAN_ALL_IPM_u3IPM_HMA_Status_min 0
#define  CAN_ALL_IPM_u3IPM_HMA_Status_max 0x7
#define  CAN_ALL_IPM_c4Reserve_1_43_46_min 0
#define  CAN_ALL_IPM_c4Reserve_1_43_46_max 0xF
#define  CAN_ALL_IPM_u1IPM_HMA_HighbeamReq_min 0
#define  CAN_ALL_IPM_u1IPM_HMA_HighbeamReq_max 0x1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq_min 0
#define  CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq_max 0x1
#define  CAN_ALL_IPM_u2IPM_LDWWarningType_min 0
#define  CAN_ALL_IPM_u2IPM_LDWWarningType_max 0x3
#define  CAN_ALL_IPM_u4Rolling_counter_0x245_min 0
#define  CAN_ALL_IPM_u4Rolling_counter_0x245_max 0xF
#define  CAN_ALL_IPM_u8Checksum_0x245_min 0
#define  CAN_ALL_IPM_u8Checksum_0x245_max 0xFF
#define  CAN_ALL_IPM_u8IPM_LedtLine_dx_start_min 0
#define  CAN_ALL_IPM_u8IPM_LedtLine_dx_start_max 0xFF
#define  CAN_ALL_IPM_u12IPM_LeftLine_dy_min 0
#define  CAN_ALL_IPM_u12IPM_LeftLine_dy_max 0xFFF
#define  CAN_ALL_IPM_u9IPM_LeftLine_dx_lookhead_min 0
#define  CAN_ALL_IPM_u9IPM_LeftLine_dx_lookhead_max 0x1FF
#define  CAN_ALL_IPM_u10IPM_LeftLine_hor_curve_min 0
#define  CAN_ALL_IPM_u10IPM_LeftLine_hor_curve_max 0x297
#define  CAN_ALL_IPM_u12IPM_LeftLine_yawangle_min 0
#define  CAN_ALL_IPM_u12IPM_LeftLine_yawangle_max 0xFFF
#define  CAN_ALL_IPM_c12Reserve_2_56_51_min 0
#define  CAN_ALL_IPM_c12Reserve_2_56_51_max 0xFFF
#define  CAN_ALL_IPM_u8IPM_RightLine_dx_start_min 0
#define  CAN_ALL_IPM_u8IPM_RightLine_dx_start_max 0xFF
#define  CAN_ALL_IPM_u12IPM_RightLine_dy_min 0
#define  CAN_ALL_IPM_u12IPM_RightLine_dy_max 0xFFF
#define  CAN_ALL_IPM_u9IPM_RightLine_dx_lookhead_min 0
#define  CAN_ALL_IPM_u9IPM_RightLine_dx_lookhead_max 0x1FF
#define  CAN_ALL_IPM_u10IPM_RightLine_hor_curve_min 0
#define  CAN_ALL_IPM_u10IPM_RightLine_hor_curve_max 0x297
#define  CAN_ALL_IPM_u12IPM_RightLine_yawangle_min 0
#define  CAN_ALL_IPM_u12IPM_RightLine_yawangle_max 0xFFF
#define  CAN_ALL_IPM_c12Reserve_3_56_51_min 0
#define  CAN_ALL_IPM_c12Reserve_3_56_51_max 0xFFF
#define  CAN_ALL_IPM_u64DiagRespFromIPM_min 0
#define  CAN_ALL_IPM_u64DiagRespFromIPM_max 0x64

//CANfactor分子分母定义
#define  CAN_ALL_IPM_u2IPM_LaneAssit_TorqueReqStatus_factor 1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_TorqueValidity_factor 1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity_factor 1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_WarningAudio_factor 1
#define  CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization_factor 1
#define  CAN_ALL_IPM_u2IPM_LaneAssit_RightVisualization_factor 1
#define  CAN_ALL_IPM_u2IPM_SLASpdlimitUnits_factor 1
#define  CAN_ALL_IPM_u3IPM_SLAState_factor 1
#define  CAN_ALL_IPM_u3IPM_LaneAssit_Status_factor 1
#define  CAN_ALL_IPM_u8IPM_SLASpdlimit_factor 1
#define  CAN_ALL_IPM_u3IPM_HMA_Status_factor 1
#define  CAN_ALL_IPM_u1IPM_TJAICA_Status_factor 1
#define  CAN_ALL_IPM_u4Rolling_counter_0x245_factor 1
#define  CAN_ALL_IPM_u2IPM_LDWWarningType_factor 1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq_factor 1
#define  CAN_ALL_IPM_u1IPM_HMA_HighbeamReq_factor 1
#define  CAN_ALL_IPM_u8Checksum_0x245_factor 1
#define  CAN_ALL_IPM_sm11IPM_LaneAssit_TorqueReq_factor 1
#define  CAN_ALL_IPM_sd11IPM_LaneAssit_TorqueReq_factor 100
#define  CAN_ALL_IPM_u3IPM_LaneAssitType_factor 1
#define  CAN_ALL_IPM_u1IPM_LaneAssit_WarningVibration_factor 1
#define  CAN_ALL_IPM_sm12IPM_LeftLine_dy_factor 1
#define  CAN_ALL_IPM_sd12IPM_LeftLine_dy_factor 256
#define  CAN_ALL_IPM_um9IPM_LeftLine_dx_lookhead_factor 1
#define  CAN_ALL_IPM_ud9IPM_LeftLine_dx_lookhead_factor 4
#define  CAN_ALL_IPM_sm10IPM_LeftLine_hor_curve_factor 1
#define  CAN_ALL_IPM_sd10IPM_LeftLine_hor_curve_factor 10000
#define  CAN_ALL_IPM_sm12IPM_LeftLine_yawangle_factor 488281
#define  CAN_ALL_IPM_sd12IPM_LeftLine_yawangle_factor 1000000000
#define  CAN_ALL_IPM_um8IPM_LedtLine_dx_start_factor 1
#define  CAN_ALL_IPM_ud8IPM_LedtLine_dx_start_factor 4
#define  CAN_ALL_IPM_sm12IPM_RightLine_dy_factor 1
#define  CAN_ALL_IPM_sd12IPM_RightLine_dy_factor 256
#define  CAN_ALL_IPM_um9IPM_RightLine_dx_lookhead_factor 1
#define  CAN_ALL_IPM_ud9IPM_RightLine_dx_lookhead_factor 4
#define  CAN_ALL_IPM_sm10IPM_RightLine_hor_curve_factor 1
#define  CAN_ALL_IPM_sd10IPM_RightLine_hor_curve_factor 10000
#define  CAN_ALL_IPM_sm12IPM_RightLine_yawangle_factor 488281
#define  CAN_ALL_IPM_sd12IPM_RightLine_yawangle_factor 1000000000
#define  CAN_ALL_IPM_um8IPM_RightLine_dx_start_factor 1
#define  CAN_ALL_IPM_ud8IPM_RightLine_dx_start_factor 4
#define  CAN_ALL_IPM_u64DiagRespFromIPM_factor 1

//#define  报文名称_CH（CAN报文通道号）    报文序号+10；#define  结构体名称_CH（结构体通道号）  报文序号；#define 报文名称_ID （CAN报文ID）  报文CAN ID；#define 报文名称_DT  (CAN报文周期)  报文时间周倜【MS】/10； #define 报文名称_TorR(CAN报文发送或接收)    发送1，接收0

//--Can_NR=1----IPM 1 th Data Frame 名称：IPM_0x245  ID：0X581  周期：20ms  DLC：8字节IPM-->EPS
#define ALL_IPM_IPM_0x245_CH 1
#define ALL_IPM_IPM_0x245_FR 1
#define ALL_IPM_IPM_0x245_ID 0XFFFFFFFF80000245
#define ALL_IPM_IPM_0x245_DT 2 //xxMS/10
#define ALL_IPM_IPM_0x245_TorR 0
#define ALL_IPM_IPM_0x245_Ay 0
#define ALL_IPM_IPM_0x245_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_IPM_IPM_0x245_LH 8//LENGTH <=8


//--Can_NR=2----IPM 2 th Data Frame 名称：IPM_LeftLine_0x278  ID：0X632  周期：100ms  DLC：8字节IPM-->GW
#define ALL_IPM_IPM_LeftLine_0x278_CH 2
#define ALL_IPM_IPM_LeftLine_0x278_FR 2
#define ALL_IPM_IPM_LeftLine_0x278_ID 0XFFFFFFFF80000278
#define ALL_IPM_IPM_LeftLine_0x278_DT 10 //xxMS/10
#define ALL_IPM_IPM_LeftLine_0x278_TorR 0
#define ALL_IPM_IPM_LeftLine_0x278_Ay 0
#define ALL_IPM_IPM_LeftLine_0x278_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_IPM_IPM_LeftLine_0x278_LH 8//LENGTH <=8


//--Can_NR=3----IPM 3 th Data Frame 名称：IPM_RightLine_0x490  ID：0X1168  周期：100ms  DLC：8字节IPM-->GW
#define ALL_IPM_IPM_RightLine_0x490_CH 3
#define ALL_IPM_IPM_RightLine_0x490_FR 3
#define ALL_IPM_IPM_RightLine_0x490_ID 0XFFFFFFFF80000490
#define ALL_IPM_IPM_RightLine_0x490_DT 10 //xxMS/10
#define ALL_IPM_IPM_RightLine_0x490_TorR 0
#define ALL_IPM_IPM_RightLine_0x490_Ay 0
#define ALL_IPM_IPM_RightLine_0x490_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_IPM_IPM_RightLine_0x490_LH 8//LENGTH <=8


//--Can_NR=4----IPM 4 th Data Frame 名称：IPM_DiagResp  ID：0X1870  周期：0ms  DLC：8字节IPM-->Tester
#define ALL_IPM_IPM_DiagResp_CH 4
#define ALL_IPM_IPM_DiagResp_FR 4
#define ALL_IPM_IPM_DiagResp_ID 0XFFFFFFFF8000074E
#define ALL_IPM_IPM_DiagResp_DT 0 //xxMS/10
#define ALL_IPM_IPM_DiagResp_TorR 0
#define ALL_IPM_IPM_DiagResp_Ay 0
#define ALL_IPM_IPM_DiagResp_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_IPM_IPM_DiagResp_LH 8//LENGTH <=8


 //---------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------

//将Intel数据转换成Mot数据的方法：  1）字节排列顺序从DaTA1toDATA8变换成DaTA8toDATA1（见下图）
//                                  2）多Bit变量：先排列终了位，后排起始位
//                                  3）按照变量定义的Bit位置，用Mot数据排列规则把所有的Bit填满
//------Intel转换前字节及控制位顺序-------------||---------转换后字节及控制位顺序-----------=
// DATA Bit 7   6   5   4   3   2   1   0       ||  DATA Bit7   6   5   4   3   2   1   0   =
//------<-----<---------<-----------------<     ||--------->------------------->--------->--=
//  1(定义) 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1     ||  8(转换) 8.8 8.7 8.6 8.5 8.4 8.3 8.2 8.1 =
//  2(定义) 2.8 2.7 2.6 2.5 2.4 2.3 2.2 2.1     ||  7(转换) 7.8 7.7 7.6 7.5 7.4 7.3 7.2 7.1 =
//  3(定义) 3.8 3.7 3.6 3.5 3.4 3.3 3.2 3.1     ||  6(转换) 6.8 6.7 6.6 6.5 6.4 6.3 6.2 6.1 =
//  4(定义) 4.8 4.7 4.6 4.5 4.4 4.3 4.2 4.1     ||  5(转换) 5.8 5.7 5.6 5.5 5.4 5.3 5.2 5.1 =
//---------------------------------------32Bit 分界线---------------------------------------=
//  5(定义) 5.8 5.7 5.6 5.5 5.4 5.3 5.2 5.1     ||  4(转换) 4.8 4.7 4.6 4.5 4.4 4.3 4.2 4.1 =
//  6(定义) 6.8 6.7 6.6 6.5 6.4 6.3 6.2 6.1     ||  3(转换) 3.8 3.7 3.6 3.5 3.4 3.3 3.2 3.1 =
//  7(定义) 7.8 7.7 7.6 7.5 7.4 7.3 7.2 7.1     ||  2(转换) 2.8 2.7 2.6 2.5 2.4 2.3 2.2 2.1 =
//  8(定义) 8.8 8.7 8.6 8.5 8.4 8.3 8.2 8.1     ||  1(转换) 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 =
//===========================================================================================

//---------------------------------------------------------------------------------------------------

//=========================================================================== 
//-----------------------4 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[40];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[20];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[5];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->
  vuint32_t  CAN_ALL_IPM_uIPM_LaneAssit_TorqueReq:11;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
  vuint32_t  CAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity:1;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus:2;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration:1;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u1IPM_LaneAssitType:3;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization:2;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization:2;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio:1;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity:1;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u1IPM_LaneAssit_Status:3;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u3IPM_SLAState:3;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u3IPM_SLASpdlimitUnits:2;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_IPM_u2IPM_SLASpdlimit:8;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u8IPM_TJAICA_Status:1;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c4Reserve_1_43_46:4;//5.6-->5.3
  vuint32_t  CAN_ALL_IPM_u1IPM_HMA_Status:3;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u3IPM_HMA_HighbeamReq:1;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq:1;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u1IPM_LDWWarningType:2;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u2Rolling_counter_0x245:4;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_IPM_u4Checksum_0x245:8;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->
  vuint32_t  CAN_ALL_IPM_uIPM_LedtLine_dx_start:8;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
  vuint32_t  CAN_ALL_IPM_u8IPM_LeftLine_dy:12;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
  vuint32_t  CAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead:9;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
  vuint32_t exIPM_LeftLine_hor_curve10High7:3;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
  vuint32_t exIPM_LeftLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
  vuint32_t  CAN_ALL_IPM_u10IPM_LeftLine_yawangle:12;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
  vuint32_t c12Reserve_2_56_51:12;//6.3-->7.0

//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->
  vuint32_t  CAN_ALL_IPM_uIPM_RightLine_dx_start:8;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
  vuint32_t  CAN_ALL_IPM_u8IPM_RightLine_dy:12;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
  vuint32_t  CAN_ALL_IPM_u12IPM_RightLine_dx_lookhead:9;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
  vuint32_t exIPM_RightLine_hor_curve10High7:3;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
  vuint32_t exIPM_RightLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
  vuint32_t  CAN_ALL_IPM_u10IPM_RightLine_yawangle:12;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
  vuint32_t c12Reserve_3_56_51:12;//6.3-->7.0

//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->
  vuint32_t exDiagRespFromIPM64High32:32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t exDiagRespFromIPM64Low32:32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
    } B;
} CAN_ALL_FRAMES_IPM_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[40];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[20];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[5];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->
  vuint64_t  CAN_ALL_IPM_uIPM_LaneAssit_TorqueReq:11;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
  vuint64_t  CAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity:1;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus:2;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration:1;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u1IPM_LaneAssitType:3;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization:2;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization:2;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio:1;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity:1;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u1IPM_LaneAssit_Status:3;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u3IPM_SLAState:3;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u3IPM_SLASpdlimitUnits:2;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_IPM_u2IPM_SLASpdlimit:8;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u8IPM_TJAICA_Status:1;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c4Reserve_1_43_46:4;//5.6-->5.3
  vuint64_t  CAN_ALL_IPM_u1IPM_HMA_Status:3;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u3IPM_HMA_HighbeamReq:1;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq:1;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u1IPM_LDWWarningType:2;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u2Rolling_counter_0x245:4;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_IPM_u4Checksum_0x245:8;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->
  vuint64_t  CAN_ALL_IPM_uIPM_LedtLine_dx_start:8;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
  vuint64_t  CAN_ALL_IPM_u8IPM_LeftLine_dy:12;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
  vuint64_t  CAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead:9;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
  vuint64_t exIPM_LeftLine_hor_curve10:10;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
  //vuint64_t exIPM_LeftLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
  vuint64_t  CAN_ALL_IPM_u10IPM_LeftLine_yawangle:12;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
  vuint64_t c12Reserve_2_56_51:12;//6.3-->7.0

//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->
  vuint64_t  CAN_ALL_IPM_uIPM_RightLine_dx_start:8;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
  vuint64_t  CAN_ALL_IPM_u8IPM_RightLine_dy:12;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
  vuint64_t  CAN_ALL_IPM_u12IPM_RightLine_dx_lookhead:9;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
  vuint64_t exIPM_RightLine_hor_curve10:10;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
  //vuint64_t exIPM_RightLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
  vuint64_t  CAN_ALL_IPM_u10IPM_RightLine_yawangle:12;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
  vuint64_t c12Reserve_3_56_51:12;//6.3-->7.0

//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->
  vuint64_t exDiagRespFromIPM64:64;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  //vuint64_t exDiagRespFromIPM64Low32:32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 

    } B;
} CAN_ALL_FRAMES_IPM_tag;
extern CAN_ALL_FRAMES_IPM_tag CAN_ALL_FRAMES_IPM;
extern CAN_ALL_FRAMES_IPM_tag CAN_ALL_FRMes_IPM;
extern CAN_ALL_FRAMES_IPM_tag CAN_ALL_FRVar_IPM;
extern CAN_ALL_FRAMES_IPM_tag CAN_ALL_FRVarOld_IPM;


               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exIPM_LeftLine_hor_curve10High7:7;
                                    vuint16_t exIPM_LeftLine_hor_curve10Low3:3;
                               } B;
                            } exIPM_LeftLine_hor_curve_tag;
                            extern exIPM_LeftLine_hor_curve_tag exIPM_LeftLine_hor_curve;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exIPM_RightLine_hor_curve10High7:7;
                                    vuint16_t exIPM_RightLine_hor_curve10Low3:3;
                               } B;
                            } exIPM_RightLine_hor_curve_tag;
                            extern exIPM_RightLine_hor_curve_tag exIPM_RightLine_hor_curve;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagRespFromIPM64High32:2;
                                    vuint16_t exDiagRespFromIPM64Low32:2;
                               } B;
                            } exDiagRespFromIPM_tag;
                            extern exDiagRespFromIPM_tag exDiagRespFromIPM;
//--1 th CAN 报文数据处理子程序------------
                CAN1_noReceivedMessageTime[ALL_IPM_IPM_0x245_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_IPM_IPM_LeftLine_0x278_CH]++;//Can_NR=2
                CAN1_noReceivedMessageTime[ALL_IPM_IPM_RightLine_0x490_CH]++;//Can_NR=3
                CAN1_noReceivedMessageTime[ALL_IPM_IPM_DiagResp_CH]++;//Can_NR=4
typedef union {
    vuint8_t R;
    struct { //ALL_IPM 接收报文故障
        vuint8_t ALL_IPM_IPM_0x245: 1; //Can_NR=1
        vuint8_t ALL_IPM_IPM_LeftLine_0x278: 1; //Can_NR=2
        vuint8_t ALL_IPM_IPM_RightLine_0x490: 1; //Can_NR=3
        vuint8_t ALL_IPM_IPM_DiagResp: 1; //Can_NR=4
    } B;
} Error_CAN1_ALL_IPM_tag ;
extern Error_CAN1_ALL_IPM_tag Error_CAN1_ALL_IPM ;
typedef union {
    vuint8_t R;
    struct { //ALL_IPM 接收报文故障
        vuint8_t ALL_IPM_IPM_0x245T: 1; //Can_NR=1
        vuint8_t ALL_IPM_IPM_LeftLine_0x278T: 1; //Can_NR=2
        vuint8_t ALL_IPM_IPM_RightLine_0x490T: 1; //Can_NR=3
        vuint8_t ALL_IPM_IPM_DiagRespT: 1; //Can_NR=4
    } B;
}  D00CTR_def_CAN1_ALL_IPM_tag ;
extern  D00CTR_def_CAN1_ALL_IPM_tag D00CTR_def_CAN1_ALL_IPM ;


//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

 vuint16_t VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
 vuint8_t VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_1_43_46;//5.6-->5.3
 vuint8_t VCAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

 vuint8_t VCAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 vuint16_t VCAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 vuint16_t VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 vuint8_t VexIPM_LeftLine_hor_curve10High7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 vuint8_t VexIPM_LeftLine_hor_curve10Low3;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 vuint16_t VCAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 vuint16_t Vc12Reserve_2_56_51;//6.3-->7.0


//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

 vuint8_t VCAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 vuint16_t VCAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 vuint16_t VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 vuint8_t VexIPM_RightLine_hor_curve10High7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 vuint8_t VexIPM_RightLine_hor_curve10Low3;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 vuint16_t VCAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 vuint16_t Vc12Reserve_3_56_51;//6.3-->7.0


//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

 vuint32_t VexDiagRespFromIPM64High32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint32_t VexDiagRespFromIPM64Low32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//=======================================================(分隔行)



//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

 extern  vuint16_t VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
 extern  vuint8_t VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_1_43_46;//5.6-->5.3
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

 extern  vuint8_t VCAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 extern  vuint8_t VexIPM_LeftLine_hor_curve10High7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 extern  vuint8_t VexIPM_LeftLine_hor_curve10Low3;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 extern  vuint16_t VCAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 extern  vuint16_t Vc12Reserve_2_56_51;//6.3-->7.0


//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

 extern  vuint8_t VCAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 extern  vuint8_t VexIPM_RightLine_hor_curve10High7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 extern  vuint8_t VexIPM_RightLine_hor_curve10Low3;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 extern  vuint16_t VCAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 extern  vuint16_t Vc12Reserve_3_56_51;//6.3-->7.0


//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

 extern  vuint32_t VexDiagRespFromIPM64High32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint32_t VexDiagRespFromIPM64Low32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

 vuint16_t VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
 vuint8_t VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_1_43_46;//5.6-->5.3
 vuint8_t VCAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

 vuint8_t VCAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 vuint16_t VCAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 vuint16_t VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 vuint16_t VexIPM_LeftLine_hor_curve10;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 //vuint8_t VexIPM_LeftLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 vuint16_t VCAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 vuint16_t Vc12Reserve_2_56_51;//6.3-->7.0


//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

 vuint8_t VCAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 vuint16_t VCAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 vuint16_t VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 vuint16_t VexIPM_RightLine_hor_curve10;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 //vuint8_t VexIPM_RightLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 vuint16_t VCAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 vuint16_t Vc12Reserve_3_56_51;//6.3-->7.0


//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

 vuint32_t VexDiagRespFromIPM64;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 //vuint32_t VexDiagRespFromIPM64Low32:32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

 extern  vuint16_t VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
 extern  vuint8_t VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_1_43_46;//5.6-->5.3
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

 extern  vuint8_t VCAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 extern  vuint16_t VexIPM_LeftLine_hor_curve10;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 //extern  vuint8_t VexIPM_LeftLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 extern  vuint16_t VCAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 extern  vuint16_t Vc12Reserve_2_56_51;//6.3-->7.0


//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

 extern  vuint8_t VCAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
 extern  vuint16_t VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
 extern  vuint16_t VexIPM_RightLine_hor_curve10;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
//*****************32 bits split line
 //extern  vuint8_t VexIPM_RightLine_hor_curve10Low3:7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
 extern  vuint16_t VCAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
 extern  vuint16_t Vc12Reserve_3_56_51;//6.3-->7.0


//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

 extern  vuint32_t VexDiagRespFromIPM64;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 //extern  vuint32_t VexDiagRespFromIPM64Low32:32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
        vuint8_t VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint8_t VCAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc4Reserve_1_43_46;//5.6-->5.3
        vuint8_t VCAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_IPM_1_IPM_0x245_DataBit_tag;
extern Vu8_IPM_1_IPM_0x245_DataBit_tag Vu8_IPM_1_IPM_0x245_DataBit;


//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint8_t VCAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
         //vuint16_t VCAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
         //vuint16_t VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
        vuint8_t VexIPM_LeftLine_hor_curve10High7;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
        //*****************32 bits split line
        vuint8_t VexIPM_LeftLine_hor_curve10Low3;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
         //vuint16_t VCAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
         //vuint16_t Vc12Reserve_2_56_51;//6.3-->7.0

     } B;
}  Vu8_IPM_2_IPM_LeftLine_0x278_DataBit_tag;
extern Vu8_IPM_2_IPM_LeftLine_0x278_DataBit_tag Vu8_IPM_2_IPM_LeftLine_0x278_DataBit;


//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint8_t VCAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
         //vuint16_t VCAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
         //vuint16_t VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
        vuint8_t VexIPM_RightLine_hor_curve10High7;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
        //*****************32 bits split line
        vuint8_t VexIPM_RightLine_hor_curve10Low3;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
         //vuint16_t VCAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
         //vuint16_t Vc12Reserve_3_56_51;//6.3-->7.0

     } B;
}  Vu8_IPM_3_IPM_RightLine_0x490_DataBit_tag;
extern Vu8_IPM_3_IPM_RightLine_0x490_DataBit_tag Vu8_IPM_3_IPM_RightLine_0x490_DataBit;


//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint32_t VexDiagRespFromIPM64High32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint32_t VexDiagRespFromIPM64Low32;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_IPM_4_IPM_DiagResp_DataBit_tag;
extern Vu8_IPM_4_IPM_DiagResp_DataBit_tag Vu8_IPM_4_IPM_DiagResp_DataBit;

//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_0x245_FR+0] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_0x245_FR+0]  ; 
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_0x245_FR+1] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_0x245_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_0x245_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_0x245_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_IPM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_0x245 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_0x245_FR+0]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_0x245_FR+0];
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_0x245_FR+1]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_0x245_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_0x245_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH]  == 1 ) {


                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_uIPM_LaneAssit_TorqueReq= CAN_ALL_IPM_uIPM_LaneAssit_TorqueReq_min;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity= CAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity_min;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus= CAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus_min;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration= CAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration_min;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssitType= CAN_ALL_IPM_u1IPM_LaneAssitType_min;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization= CAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization_min;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization= CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization_min;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio= CAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio_min;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity= CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity_min;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_Status= CAN_ALL_IPM_u1IPM_LaneAssit_Status_min;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u3IPM_SLAState= CAN_ALL_IPM_u3IPM_SLAState_min;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u3IPM_SLASpdlimitUnits= CAN_ALL_IPM_u3IPM_SLASpdlimitUnits_min;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u2IPM_SLASpdlimit= CAN_ALL_IPM_u2IPM_SLASpdlimit_min;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u8IPM_TJAICA_Status= CAN_ALL_IPM_u8IPM_TJAICA_Status_min;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B.c4Reserve_1_43_46= CAN_ALL_IPM_c4Reserve_1_43_46_min;//5.6-->5.3
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_HMA_Status= CAN_ALL_IPM_u1IPM_HMA_Status_min;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u3IPM_HMA_HighbeamReq= CAN_ALL_IPM_u3IPM_HMA_HighbeamReq_min;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq= CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq_min;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u1IPM_LDWWarningType= CAN_ALL_IPM_u1IPM_LDWWarningType_min;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u2Rolling_counter_0x245= CAN_ALL_IPM_u2Rolling_counter_0x245_min;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u4Checksum_0x245= CAN_ALL_IPM_u4Checksum_0x245_min;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_uIPM_LaneAssit_TorqueReq=VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity=VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus=VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration=VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssitType=VCAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization=VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization=VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio=VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity=VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_Status=VCAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_SLAState=VCAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_SLASpdlimitUnits=VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_SLASpdlimit=VCAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u8IPM_TJAICA_Status=VCAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B.c4Reserve_1_43_46=Vc4Reserve_1_43_46;//5.6-->5.3
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_HMA_Status=VCAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_HMA_HighbeamReq=VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq=VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LDWWarningType=VCAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2Rolling_counter_0x245=VCAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u4Checksum_0x245=VCAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_IPM_uIPM_LaneAssit_TorqueReq=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_uIPM_LaneAssit_TorqueReq;//0.7-->1.5 名称：IPM_LaneAssit_TorqueReq 位数：11bit, logical min-max：-10.24~10.22 physical min-max：0x000~0x7FE 精度：0.01 偏移量：-1024 单位：Nm 
                VCAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u11IPM_LaneAssit_TorqueValidity;//1.4-->1.4 1 "Invalid" 0 "Valid" 名称：IPM_LaneAssit_TorqueValidity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_TorqueReqStatus;//1.3-->1.2 3 "reserved" 2 "reserved" 1 "torque request" 0 "no request" 名称：IPM_LaneAssit_TorqueReqStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_WarningVibration;//1.1-->1.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningVibration 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u1IPM_LaneAssitType=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssitType;//1.0-->2.6 6 "Reserved" 5 "TJA_ICA_LDW" 4 "TJA_ICA" 3 "LDW_LKA" 2 "LKA" 1 "LDW" 0 "Unavailable" 名称：IPM_LaneAssitType 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_LaneAssit_RightVisualization;//2.5-->2.4 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_RightVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_LeftVisualization;//2.3-->2.2 3 "warning." 2 "intervention" 1 "line tracking" 0 "no display" 名称：IPM_LaneAssit_LeftVisualization 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_LaneAssit_WarningAudio;//2.1-->2.1 1 "active." 0 "inactive" 名称：IPM_LaneAssit_WarningAudio 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_Sensitivity;//2.0-->2.0 1 "lowSensitivity" 0 "highSensitivity" 名称：IPM_LaneAssit_Sensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u1IPM_LaneAssit_Status=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_Status;//3.7-->3.5 7 "Camera uncalibrated" 6 "Camera blocked" 5 "Fault" 4 "Active" 3 "LDW Standby LKA Active" 2 "LDW Active LKA Standby" 1 "Standby" 0 "Off" 名称：IPM_LaneAssit_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u3IPM_SLAState=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_SLAState;//3.4-->3.2 4 "Defect" 3 "Navigation only mode" 2 "Vision mode" 1 "Fusion mode" 0 "Off" 名称：IPM_SLAState 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u3IPM_SLASpdlimitUnits=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_SLASpdlimitUnits;//3.1-->3.0 3 "Reserved." 2 "MPH" 1 "KMH" 0 "Unknown" 名称：IPM_SLASpdlimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u2IPM_SLASpdlimit=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2IPM_SLASpdlimit;//4.7-->4.0 27 "SPL 130" 26 "SPL 125" 25 "SPL 120" 24 "SPL 115" 23 "SPL 110" 22 "SPL 105" 21 "SPL 100" 20 "SPL 95" 19 "SPL 90" 18 "SPL 85" 17 "SPL 80" 16 "SPL 75" 15 "SPL 70" 14 "SPL 65" 13 "SPL 60" 12 "SPL 55" 11 "SPL 50" 10 "SPL 45" 9 "SPL 40" 8 "SPL 35" 7 "SPL 30" 6 "SPL 25" 5 "SPL 20" 4 "SPL 15" 3 "SPL 10" 2 "SPL 5" 1 "SPL Cancelled" 0 "No Display" 名称：IPM_SLASpdlimit 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u8IPM_TJAICA_Status=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u8IPM_TJAICA_Status;//5.7-->5.7 1 "active" 0 "inactive" 名称：IPM_TJAICA_Status 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc4Reserve_1_43_46=CAN_ALL_FRVar_IPM.B.c4Reserve_1_43_46;//5.6-->5.3
                VCAN_ALL_IPM_u1IPM_HMA_Status=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_HMA_Status;//5.2-->5.0 7 "reserved" 6 "reserved" 5 "camera blocked" 4 "fault" 3 "active" 2 "standby" 1 "passive" 0 "off" 名称：IPM_HMA_Status 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u3IPM_HMA_HighbeamReq=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u3IPM_HMA_HighbeamReq;//6.7-->6.7 1 "high beam request" 0 "no request" 名称：IPM_HMA_HighbeamReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LaneAssit_HandsonReq;//6.6-->6.6 1 "active." 0 "inactive" 名称：IPM_LaneAssit_HandsonReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u1IPM_LDWWarningType=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u1IPM_LDWWarningType;//6.5-->6.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：IPM_LDWWarningType 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u2Rolling_counter_0x245=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u2Rolling_counter_0x245;//6.3-->6.0 名称：Rolling_counter_0x245 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_IPM_u4Checksum_0x245=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u4Checksum_0x245;//7.7-->7.0 名称：Checksum_0x245 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+7] =Vu8_IPM_1_IPM_0x245_Data7Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+6] =Vu8_IPM_1_IPM_0x245_Data6Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+5] =Vu8_IPM_1_IPM_0x245_Data5Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+4] =Vu8_IPM_1_IPM_0x245_Data4Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+3] =Vu8_IPM_1_IPM_0x245_Data3Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+2] =Vu8_IPM_1_IPM_0x245_Data2Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+1] =Vu8_IPM_1_IPM_0x245_Data1Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_0x245_FR+0] =Vu8_IPM_1_IPM_0x245_Data0Bit.R;

                Vu8_IPM_1_IPM_0x245_Data7Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 7];
                Vu8_IPM_1_IPM_0x245_Data6Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 6];
                Vu8_IPM_1_IPM_0x245_Data5Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 5];
                Vu8_IPM_1_IPM_0x245_Data4Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 4];
                Vu8_IPM_1_IPM_0x245_Data3Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 3];
                Vu8_IPM_1_IPM_0x245_Data2Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 2];
                Vu8_IPM_1_IPM_0x245_Data1Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 1];
                Vu8_IPM_1_IPM_0x245_Data0Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_0x245_FR + 0];



//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_LeftLine_0x278_FR+0] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_LeftLine_0x278_FR+0]  ; 
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_LeftLine_0x278_FR+1] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_LeftLine_0x278_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_LeftLine_0x278_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_LeftLine_0x278_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_IPM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_LeftLine_0x278 = 1 ;  //部件具体报文CAN接收无信号
                exIPM_LeftLine_hor_curve.R= CAN_ALL_IPM_u9IPM_LeftLine_hor_curve_min;//3.2-->4.1 名称：IPM_LeftLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
                CAN_ALL_FRVar_IPM.B.exIPM_LeftLine_hor_curve10High7=exIPM_LeftLine_hor_curve.B.exIPM_LeftLine_hor_curve10High7;
                CAN_ALL_FRVar_IPM.B.exIPM_LeftLine_hor_curve10Low3=exIPM_LeftLine_hor_curve.B.exIPM_LeftLine_hor_curve10Low3;
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_LeftLine_0x278_FR+0]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_LeftLine_0x278_FR+0];
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_LeftLine_0x278_FR+1]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_LeftLine_0x278_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_LeftLine_0x278_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH]  == 1 ) {


                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_uIPM_LedtLine_dx_start= CAN_ALL_IPM_uIPM_LedtLine_dx_start_min;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u8IPM_LeftLine_dy= CAN_ALL_IPM_u8IPM_LeftLine_dy_min;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead= CAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead_min;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u10IPM_LeftLine_yawangle= CAN_ALL_IPM_u10IPM_LeftLine_yawangle_min;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
                CAN_ALL_FRAMES_IPM.B.c12Reserve_2_56_51= CAN_ALL_IPM_c12Reserve_2_56_51_min;//6.3-->7.0

                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_uIPM_LedtLine_dx_start=VCAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u8IPM_LeftLine_dy=VCAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead=VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRVar_IPM.B.exIPM_LeftLine_hor_curve10High7=VexexIPM_LeftLine_hor_curve10High7;
                CAN_ALL_FRVar_IPM.B.exIPM_LeftLine_hor_curve10Low3=VexexIPM_LeftLine_hor_curve10Low3;
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u10IPM_LeftLine_yawangle=VCAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
                CAN_ALL_FRVar_IPM.B.c12Reserve_2_56_51=Vc12Reserve_2_56_51;//6.3-->7.0

                VCAN_ALL_IPM_uIPM_LedtLine_dx_start=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_uIPM_LedtLine_dx_start;//0.7-->0.0 名称：IPM_LedtLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
                VCAN_ALL_IPM_u8IPM_LeftLine_dy=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u8IPM_LeftLine_dy;//1.7-->2.4 名称：IPM_LeftLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
                VCAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u12IPM_LeftLine_dx_lookhead;//2.3-->3.3 名称：IPM_LeftLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
                VexexIPM_LeftLine_hor_curve10High7 = CAN_ALL_FRVar_IPM.B.exIPM_LeftLine_hor_curve10High7;
                VexexIPM_LeftLine_hor_curve10Low3= CAN_ALL_FRVar_IPM.B.exIPM_LeftLine_hor_curve10Low3;
                VCAN_ALL_IPM_u10IPM_LeftLine_yawangle=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u10IPM_LeftLine_yawangle;//5.7-->6.4 名称：IPM_LeftLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
                Vc12Reserve_2_56_51=CAN_ALL_FRVar_IPM.B.c12Reserve_2_56_51;//6.3-->7.0

                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+7] =Vu8_IPM_2_IPM_LeftLine_0x278_Data7Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+6] =Vu8_IPM_2_IPM_LeftLine_0x278_Data6Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+5] =Vu8_IPM_2_IPM_LeftLine_0x278_Data5Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+4] =Vu8_IPM_2_IPM_LeftLine_0x278_Data4Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+3] =Vu8_IPM_2_IPM_LeftLine_0x278_Data3Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+2] =Vu8_IPM_2_IPM_LeftLine_0x278_Data2Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+1] =Vu8_IPM_2_IPM_LeftLine_0x278_Data1Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_LeftLine_0x278_FR+0] =Vu8_IPM_2_IPM_LeftLine_0x278_Data0Bit.R;

                Vu8_IPM_2_IPM_LeftLine_0x278_Data7Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 7];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data6Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 6];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data5Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 5];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data4Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 4];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data3Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 3];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data2Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 2];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data1Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 1];
                Vu8_IPM_2_IPM_LeftLine_0x278_Data0Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_LeftLine_0x278_FR + 0];



//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_RightLine_0x490_FR+0] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_RightLine_0x490_FR+0]  ; 
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_RightLine_0x490_FR+1] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_RightLine_0x490_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_RightLine_0x490_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_RightLine_0x490_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_IPM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_RightLine_0x490 = 1 ;  //部件具体报文CAN接收无信号
                exIPM_RightLine_hor_curve.R= CAN_ALL_IPM_u9IPM_RightLine_hor_curve_min;//3.2-->4.1 名称：IPM_RightLine_hor_curve 位数：10bit, logical min-max：-0.015~0.0513 physical min-max：0x000~0x297 精度：0.0001 偏移量：-150 单位： 
                CAN_ALL_FRVar_IPM.B.exIPM_RightLine_hor_curve10High7=exIPM_RightLine_hor_curve.B.exIPM_RightLine_hor_curve10High7;
                CAN_ALL_FRVar_IPM.B.exIPM_RightLine_hor_curve10Low3=exIPM_RightLine_hor_curve.B.exIPM_RightLine_hor_curve10Low3;
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_RightLine_0x490_FR+0]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_RightLine_0x490_FR+0];
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_RightLine_0x490_FR+1]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_RightLine_0x490_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_RightLine_0x490_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH]  == 1 ) {


                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_uIPM_RightLine_dx_start= CAN_ALL_IPM_uIPM_RightLine_dx_start_min;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u8IPM_RightLine_dy= CAN_ALL_IPM_u8IPM_RightLine_dy_min;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u12IPM_RightLine_dx_lookhead= CAN_ALL_IPM_u12IPM_RightLine_dx_lookhead_min;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRAMES_IPM.B. CAN_ALL_IPM_u10IPM_RightLine_yawangle= CAN_ALL_IPM_u10IPM_RightLine_yawangle_min;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
                CAN_ALL_FRAMES_IPM.B.c12Reserve_3_56_51= CAN_ALL_IPM_c12Reserve_3_56_51_min;//6.3-->7.0

                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_uIPM_RightLine_dx_start=VCAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u8IPM_RightLine_dy=VCAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u12IPM_RightLine_dx_lookhead=VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
                CAN_ALL_FRVar_IPM.B.exIPM_RightLine_hor_curve10High7=VexexIPM_RightLine_hor_curve10High7;
                CAN_ALL_FRVar_IPM.B.exIPM_RightLine_hor_curve10Low3=VexexIPM_RightLine_hor_curve10Low3;
                CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u10IPM_RightLine_yawangle=VCAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
                CAN_ALL_FRVar_IPM.B.c12Reserve_3_56_51=Vc12Reserve_3_56_51;//6.3-->7.0

                VCAN_ALL_IPM_uIPM_RightLine_dx_start=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_uIPM_RightLine_dx_start;//0.7-->0.0 名称：IPM_RightLine_dx_start 位数：8bit, logical min-max：0~63.75 physical min-max：0x000~0xFF 精度：0.25 偏移量：0 单位：m 
                VCAN_ALL_IPM_u8IPM_RightLine_dy=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u8IPM_RightLine_dy;//1.7-->2.4 名称：IPM_RightLine_dy 位数：12bit, logical min-max：-8~7.99609375 physical min-max：0x000~0xFFF 精度：0.00390625 偏移量：-2048 单位：m 
                VCAN_ALL_IPM_u12IPM_RightLine_dx_lookhead=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u12IPM_RightLine_dx_lookhead;//2.3-->3.3 名称：IPM_RightLine_dx_lookhead 位数：9bit, logical min-max：0~127.75 physical min-max：0x000~0x1FF 精度：0.25 偏移量：0 单位：m 
                VexexIPM_RightLine_hor_curve10High7 = CAN_ALL_FRVar_IPM.B.exIPM_RightLine_hor_curve10High7;
                VexexIPM_RightLine_hor_curve10Low3= CAN_ALL_FRVar_IPM.B.exIPM_RightLine_hor_curve10Low3;
                VCAN_ALL_IPM_u10IPM_RightLine_yawangle=CAN_ALL_FRVar_IPM.B. CAN_ALL_IPM_u10IPM_RightLine_yawangle;//5.7-->6.4 名称：IPM_RightLine_yawangle 位数：12bit, logical min-max：-1~0.999510695 physical min-max：0x000~0xFFF 精度：0.000488281 偏移量：-2048.00104857654 单位： 
                Vc12Reserve_3_56_51=CAN_ALL_FRVar_IPM.B.c12Reserve_3_56_51;//6.3-->7.0

                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+7] =Vu8_IPM_3_IPM_RightLine_0x490_Data7Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+6] =Vu8_IPM_3_IPM_RightLine_0x490_Data6Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+5] =Vu8_IPM_3_IPM_RightLine_0x490_Data5Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+4] =Vu8_IPM_3_IPM_RightLine_0x490_Data4Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+3] =Vu8_IPM_3_IPM_RightLine_0x490_Data3Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+2] =Vu8_IPM_3_IPM_RightLine_0x490_Data2Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+1] =Vu8_IPM_3_IPM_RightLine_0x490_Data1Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_RightLine_0x490_FR+0] =Vu8_IPM_3_IPM_RightLine_0x490_Data0Bit.R;

                Vu8_IPM_3_IPM_RightLine_0x490_Data7Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 7];
                Vu8_IPM_3_IPM_RightLine_0x490_Data6Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 6];
                Vu8_IPM_3_IPM_RightLine_0x490_Data5Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 5];
                Vu8_IPM_3_IPM_RightLine_0x490_Data4Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 4];
                Vu8_IPM_3_IPM_RightLine_0x490_Data3Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 3];
                Vu8_IPM_3_IPM_RightLine_0x490_Data2Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 2];
                Vu8_IPM_3_IPM_RightLine_0x490_Data1Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 1];
                Vu8_IPM_3_IPM_RightLine_0x490_Data0Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_RightLine_0x490_FR + 0];



//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_DiagResp_FR+0] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_DiagResp_FR+0]  ; 
                CAN_ALL_FRVar_IPM.R[ 2*ALL_IPM_IPM_DiagResp_FR+1] = CAN_ALL_FRMes_IPM.R[ 2*ALL_IPM_IPM_DiagResp_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_DiagResp_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_DiagResp_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_IPM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_DiagResp = 1 ;  //部件具体报文CAN接收无信号
                exDiagRespFromIPM.R= CAN_ALL_IPM_uDiagRespFromIPM_min;//0.7-->7.0 名称：DiagRespFromIPM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_IPM.B.exDiagRespFromIPM64High32=exDiagRespFromIPM.B.exDiagRespFromIPM64High32;
                CAN_ALL_FRVar_IPM.B.exDiagRespFromIPM64Low32=exDiagRespFromIPM.B.exDiagRespFromIPM64Low32;
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_DiagResp_FR+0]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_DiagResp_FR+0];
                CAN_ALL_FRVar_IPM.R[2*ALL_IPM_IPM_DiagResp_FR+1]=CAN_ALL_FRAMES_IPM.R[2*ALL_IPM_IPM_DiagResp_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_IPM_IPM_DiagResp_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH]  == 1 ) {



                CAN_ALL_FRVar_IPM.B.exDiagRespFromIPM64High32=VexexDiagRespFromIPM64High32;
                CAN_ALL_FRVar_IPM.B.exDiagRespFromIPM64Low32=VexexDiagRespFromIPM64Low32;

                VexexDiagRespFromIPM64High32 = CAN_ALL_FRVar_IPM.B.exDiagRespFromIPM64High32;
                VexexDiagRespFromIPM64Low32= CAN_ALL_FRVar_IPM.B.exDiagRespFromIPM64Low32;

                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+7] =Vu8_IPM_4_IPM_DiagResp_Data7Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+6] =Vu8_IPM_4_IPM_DiagResp_Data6Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+5] =Vu8_IPM_4_IPM_DiagResp_Data5Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+4] =Vu8_IPM_4_IPM_DiagResp_Data4Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+3] =Vu8_IPM_4_IPM_DiagResp_Data3Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+2] =Vu8_IPM_4_IPM_DiagResp_Data2Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+1] =Vu8_IPM_4_IPM_DiagResp_Data1Bit.R;
                CAN_ALL_FRVar_IPM.By[ 8*ALL_IPM_IPM_DiagResp_FR+0] =Vu8_IPM_4_IPM_DiagResp_Data0Bit.R;

                Vu8_IPM_4_IPM_DiagResp_Data7Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 7];
                Vu8_IPM_4_IPM_DiagResp_Data6Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 6];
                Vu8_IPM_4_IPM_DiagResp_Data5Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 5];
                Vu8_IPM_4_IPM_DiagResp_Data4Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 4];
                Vu8_IPM_4_IPM_DiagResp_Data3Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 3];
                Vu8_IPM_4_IPM_DiagResp_Data2Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 2];
                Vu8_IPM_4_IPM_DiagResp_Data1Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 1];
                Vu8_IPM_4_IPM_DiagResp_Data0Bit.R=CAN_ALL_FRVar_IPM.By[8 * ALL_IPM_IPM_DiagResp_FR + 0];


//--2 th CAN 报文初始化子程序------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_IPM_IPM_0x245_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_IPM_IPM_LeftLine_0x278_CH];//Can_NR=2
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_IPM_IPM_RightLine_0x490_CH];//Can_NR=3
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_IPM_IPM_DiagResp_CH];//Can_NR=4

//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

                CAN1.MB[ALL_IPM_IPM_0x245_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_IPM_IPM_0x245_CH]ID.B.ID_STD= ALL_IPM_IPM_0x245_ID;
                CAN1.MB[ALL_IPM_IPM_0x245_CH].CS.B.IDE = ALL_IPM_IPM_0x245_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_IPM_IPM_0x245_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_IPM_IPM_0x245_CH].CS.B.DLC =ALL_IPM_IPM_0x245_LH; 

//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH]ID.B.ID_STD= ALL_IPM_IPM_LeftLine_0x278_ID;
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].CS.B.IDE = ALL_IPM_IPM_LeftLine_0x278_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].CS.B.DLC =ALL_IPM_IPM_LeftLine_0x278_LH; 

//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].ID.R= ALL_IPM_IPM_RightLine_0x490_ID;
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].CS.B.IDE = ALL_IPM_IPM_RightLine_0x490_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].CS.B.DLC =ALL_IPM_IPM_RightLine_0x490_LH; 

//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].ID.R= ALL_IPM_IPM_DiagResp_ID;
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].CS.B.IDE = ALL_IPM_IPM_DiagResp_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].CS.B.DLC =ALL_IPM_IPM_DiagResp_LH; 
//--3 th CAN 报文接收中断子程序------------

//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH]  == 0) {
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+0] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[0]; 
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+1] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[1];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+2] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[2];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+3] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[3];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+4] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[4];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+5] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[5];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+6] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[6];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_0x245_FR+7] = CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[7];
               Error_CAN1.B.ALL_IPM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_0x245 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_IPM_IPM_0x245_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_0x245_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_IPM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH]  == 0) {
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+0] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[0]; 
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+1] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[1];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+2] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[2];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+3] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[3];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+4] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[4];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+5] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[5];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+6] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[6];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+7] = CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[7];
               Error_CAN1.B.ALL_IPM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_LeftLine_0x278 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_IPM_IPM_LeftLine_0x278_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_LeftLine_0x278_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_IPM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH]  == 0) {
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+0] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[0]; 
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+1] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[1];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+2] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[2];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+3] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[3];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+4] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[4];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+5] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[5];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+6] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[6];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+7] = CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[7];
               Error_CAN1.B.ALL_IPM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_RightLine_0x490 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_IPM_IPM_RightLine_0x490_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_RightLine_0x490_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_IPM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH]  == 0) {
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+0] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[0]; 
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+1] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[1];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+2] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[2];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+3] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[3];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+4] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[4];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+5] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[5];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+6] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[6];
                CAN_ALL_FRMes_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+7] = CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[7];
               Error_CAN1.B.ALL_IPM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_IPM.B.ALL_IPM_IPM_DiagResp = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_IPM_IPM_DiagResp_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_IPM_IPM_DiagResp_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_IPM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN 报文发送子程序------------                    

//--Can_NR=1----IPM 1 the Data Frame 名称：IPM_0x245  ID：0x581  周期：20ms  位数：8字节IPM-->
                 if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_0x245_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_IPM_IPM_0x245_CH] ;
                if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_0x245T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[0] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+0];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[1] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+1];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[2] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+2];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[3] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+3];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[4] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+4];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[5] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+5];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[6] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+6];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].DATA.B[7] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_0x245_FR+7];
                CAN1.MB[ALL_IPM_IPM_0x245_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_IPM_IPM_0x245_Ay] = ALL_IPM_IPM_0x245_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_0x245T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_0x245_DT ) == 0 ) {


//--Can_NR=2----IPM 2 the Data Frame 名称：IPM_LeftLine_0x278  ID：0x632  周期：100ms  位数：8字节IPM-->
                 if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_LeftLine_0x278_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_IPM_IPM_LeftLine_0x278_CH] ;
                if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_LeftLine_0x278T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[0] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+0];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[1] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+1];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[2] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+2];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[3] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+3];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[4] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+4];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[5] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+5];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[6] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+6];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].DATA.B[7] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_LeftLine_0x278_FR+7];
                CAN1.MB[ALL_IPM_IPM_LeftLine_0x278_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_IPM_IPM_LeftLine_0x278_Ay] = ALL_IPM_IPM_LeftLine_0x278_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_LeftLine_0x278T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_LeftLine_0x278_DT ) == 0 ) {


//--Can_NR=3----IPM 3 the Data Frame 名称：IPM_RightLine_0x490  ID：0x1168  周期：100ms  位数：8字节IPM-->
                 if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_RightLine_0x490_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_IPM_IPM_RightLine_0x490_CH] ;
                if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_RightLine_0x490T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[0] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+0];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[1] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+1];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[2] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+2];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[3] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+3];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[4] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+4];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[5] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+5];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[6] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+6];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].DATA.B[7] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_RightLine_0x490_FR+7];
                CAN1.MB[ALL_IPM_IPM_RightLine_0x490_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_IPM_IPM_RightLine_0x490_Ay] = ALL_IPM_IPM_RightLine_0x490_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_RightLine_0x490T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_RightLine_0x490_DT ) == 0 ) {


//--Can_NR=4----IPM 4 the Data Frame 名称：IPM_DiagResp  ID：0x1870  周期：0ms  位数：8字节IPM-->
                 if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_DiagResp_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_IPM_IPM_DiagResp_CH] ;
                if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_DiagRespT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[0] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+0];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[1] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+1];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[2] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+2];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[3] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+3];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[4] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+4];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[5] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+5];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[6] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+6];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].DATA.B[7] = CAN_ALL_FRVar_IPM.By[8*ALL_IPM_IPM_DiagResp_FR+7];
                CAN1.MB[ALL_IPM_IPM_DiagResp_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_IPM_IPM_DiagResp_Ay] = ALL_IPM_IPM_DiagResp_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_IPM.B.ALL_IPM_IPM_DiagRespT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_IPM_IPM_DiagResp_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_IPM_H 