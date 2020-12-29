#ifndef  _CAN_ALL_ABSESP_H
#define  _CAN_ALL_ABSESP_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000211
//529 ABS_WhlSpdFrntLeStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdFrntLeStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdFrntLeStatus_Valid  0 
//529 ABS_WhlSpdFrntRiStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdFrntRiStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdFrntRiStatus_Valid  0 
//529 ABS_WhlSpdReLeStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdReLeStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdReLeStatus_Valid  0 
//529 ABS_WhlSpdReRiStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdReRiStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ABS_WhlSpdReRiStatus_Valid  0 
//--Can_NR=2frame id is 0xFFFFFFFF80000221
//545 ABS_AbsCtrlActv 1 "Active" 0 "Not active"
#define  CAN_ALL_ABSESP_cb1ABS_AbsCtrlActv_Active 1
#define  CAN_ALL_ABSESP_cb1ABS_AbsCtrlActv_Not_active  0 
//545 ABS_AbsFlgFlt 1 "Failure" 0 "No failure"
#define  CAN_ALL_ABSESP_cb1ABS_AbsFlgFlt_Failure 1
#define  CAN_ALL_ABSESP_cb1ABS_AbsFlgFlt_No_failure  0 
//545 ABS_EbdFlgFlt 1 "Failure" 0 "No failure"
#define  CAN_ALL_ABSESP_cb1ABS_EbdFlgFlt_Failure 1
#define  CAN_ALL_ABSESP_cb1ABS_EbdFlgFlt_No_failure  0 
//545 ABS_VehSpdDirection 1 "Backward" 0 "Forward"
#define  CAN_ALL_ABSESP_cb1ABS_VehSpdDirection_Backward 1
#define  CAN_ALL_ABSESP_cb1ABS_VehSpdDirection_Forward  0 
//545 ABS_VehSpdLgtStatus 2 "Init" 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_ce2ABS_VehSpdLgtStatus_Init 2
#define  CAN_ALL_ABSESP_ce2ABS_VehSpdLgtStatus_Invalid  1 
#define  CAN_ALL_ABSESP_ce2ABS_VehSpdLgtStatus_Valid  0 
//545 ABS_WhlMilgFrntRiStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ABS_WhlMilgFrntRiStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ABS_WhlMilgFrntRiStatus_Valid  0 
//545 ABS_WhlMilgFrntLeStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ABS_WhlMilgFrntLeStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ABS_WhlMilgFrntLeStatus_Valid  0 
//--Can_NR=3frame id is 0xFFFFFFFF80000241
//577 ESP_PresOffsetMasterCylinder 31 "Invalid"
#define  CAN_ALL_ABSESP_ce5ESP_PresOffsetMasterCylinder_Invalid 31
//577 ESP_PresOffsetMasterCylinderVali 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_PresOffsetMasterCylinderVali_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_PresOffsetMasterCylinderVali_Valid  0 
//577 ESP_TrfCaseModReqdByEsp 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request"
#define  CAN_ALL_ABSESP_ce2ESP_TrfCaseModReqdByEsp_Failure 3
#define  CAN_ALL_ABSESP_ce2ESP_TrfCaseModReqdByEsp_Torque_upper_limit_request  2 
#define  CAN_ALL_ABSESP_ce2ESP_TrfCaseModReqdByEsp_Fast_open_request  1 
#define  CAN_ALL_ABSESP_ce2ESP_TrfCaseModReqdByEsp_No_request  0 
//577 ESP_Master_Cylinder_Pressure_Sta 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_Master_Cylinder_Pressure_Sta_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_Master_Cylinder_Pressure_Sta_Valid  0 
//--Can_NR=4frame id is 0xFFFFFFFF80000242
//578 ESP_AlgtStatus 1 "Fault" 0 "OK"
#define  CAN_ALL_ABSESP_cb1ESP_AlgtStatus_Fault 1
#define  CAN_ALL_ABSESP_cb1ESP_AlgtStatus_OK  0 
//578 ESP_AlatStatus 1 "Fault" 0 "OK"
#define  CAN_ALL_ABSESP_cb1ESP_AlatStatus_Fault 1
#define  CAN_ALL_ABSESP_cb1ESP_AlatStatus_OK  0 
//578 ESP_YawRateStatus 1 "Fault" 0 "OK"
#define  CAN_ALL_ABSESP_cb1ESP_YawRateStatus_Fault 1
#define  CAN_ALL_ABSESP_cb1ESP_YawRateStatus_OK  0 
//--Can_NR=5frame id is 0xFFFFFFFF80000243
//579 ESP_EPBErrorStatus 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined"
#define  CAN_ALL_ABSESP_ce2ESP_EPBErrorStatus_Diagnosis 3
#define  CAN_ALL_ABSESP_ce2ESP_EPBErrorStatus_error  2 
#define  CAN_ALL_ABSESP_ce2ESP_EPBErrorStatus_no_error  1 
#define  CAN_ALL_ABSESP_ce2ESP_EPBErrorStatus_undefined  0 
//579 ESP_EPBStatus 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released"
#define  CAN_ALL_ABSESP_ce3ESP_EPBStatus_Error 5
#define  CAN_ALL_ABSESP_ce3ESP_EPBStatus_Unknown  4 
#define  CAN_ALL_ABSESP_ce3ESP_EPBStatus_Applying  3 
#define  CAN_ALL_ABSESP_ce3ESP_EPBStatus_Releasingr  2 
#define  CAN_ALL_ABSESP_ce3ESP_EPBStatus_Applied  1 
#define  CAN_ALL_ABSESP_ce3ESP_EPBStatus_Released  0 
//579 ESP_HHCActive 1 "active" 0 "not active"
#define  CAN_ALL_ABSESP_cb1ESP_HHCActive_active 1
#define  CAN_ALL_ABSESP_cb1ESP_HHCActive_not_active  0 
//579 ESP_HHCAvailable 1 "not available" 0 "available"
#define  CAN_ALL_ABSESP_cb1ESP_HHCAvailable_not_available 1
#define  CAN_ALL_ABSESP_cb1ESP_HHCAvailable_available  0 
//579 ESP_CdpActive 1 "active" 0 "not active"
#define  CAN_ALL_ABSESP_cb1ESP_CdpActive_active 1
#define  CAN_ALL_ABSESP_cb1ESP_CdpActive_not_active  0 
//579 ESP_CdpAvailable 1 "not available" 0 "available"
#define  CAN_ALL_ABSESP_cb1ESP_CdpAvailable_not_available 1
#define  CAN_ALL_ABSESP_cb1ESP_CdpAvailable_available  0 
//579 ESP_LdmBLC_BLRequestController 1 "illuminate" 0 "not illuminate"
#define  CAN_ALL_ABSESP_cb1ESP_LdmBLC_BLRequestController_illuminate 1
#define  CAN_ALL_ABSESP_cb1ESP_LdmBLC_BLRequestController_not_illuminate  0 
//579 ESP_HDCActive 2 "On not active braking" 1 "On active braking" 0 "OFF"
#define  CAN_ALL_ABSESP_ce2ESP_HDCActive_On_not_active_braking 2
#define  CAN_ALL_ABSESP_ce2ESP_HDCActive_On_active_braking  1 
#define  CAN_ALL_ABSESP_ce2ESP_HDCActive_OFF  0 
//579 ESP_HDCAvailable 1 "not available" 0 "available"
#define  CAN_ALL_ABSESP_cb1ESP_HDCAvailable_not_available 1
#define  CAN_ALL_ABSESP_cb1ESP_HDCAvailable_available  0 
//579 ESP_CCSwitchOff 1 "switch off cruise control" 0 "Not switch off cruise control"
#define  CAN_ALL_ABSESP_cb1ESP_CCSwitchOff_switch_off_cruise_control 1
#define  CAN_ALL_ABSESP_cb1ESP_CCSwitchOff_Not_switch_off_cruise_control  0 
//579 ESP_AvhAvabliable 1 "not available" 0 "available"
#define  CAN_ALL_ABSESP_cb1ESP_AvhAvabliable_not_available 1
#define  CAN_ALL_ABSESP_cb1ESP_AvhAvabliable_available  0 
//579 ESP_AvhStandby 1 "standby" 0 "not standby"
#define  CAN_ALL_ABSESP_cb1ESP_AvhStandby_standby 1
#define  CAN_ALL_ABSESP_cb1ESP_AvhStandby_not_standby  0 
//579 ESP_AvhActive 1 "Active" 0 "Inactive"
#define  CAN_ALL_ABSESP_cb1ESP_AvhActive_Active 1
#define  CAN_ALL_ABSESP_cb1ESP_AvhActive_Inactive  0 
//579 ESP_AVHWarningMessage 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning"
#define  CAN_ALL_ABSESP_cb1ESP_AVHWarningMessage_Please_close_the_door_or_seatblet_Then_pressure_the_AVH_button 1
#define  CAN_ALL_ABSESP_cb1ESP_AVHWarningMessage_no_warning  0 
//579 ESP_EPBWarningMessage1 1 "no Brake pedal pressed and release the EPB" 0 "no display"
#define  CAN_ALL_ABSESP_cb1ESP_EPBWarningMessage1_no_Brake_pedal_pressed_and_release_the_EPB 1
#define  CAN_ALL_ABSESP_cb1ESP_EPBWarningMessage1_no_display  0 
//579 ESP_EPBWarningMessage2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display"
#define  CAN_ALL_ABSESP_cb1ESP_EPBWarningMessage2_EPB_driverOFF_without_seatblet_or_driver_Door 1
#define  CAN_ALL_ABSESP_cb1ESP_EPBWarningMessage2_no_display  0 
//579 ESP_EPBWarningMessage3 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display"
#define  CAN_ALL_ABSESP_cb1ESP_EPBWarningMessage3_when_Applied_the_EPB_the_slope_of_vehicle_is_more_than_20%_for_PK_30%_for_SUV 1
#define  CAN_ALL_ABSESP_cb1ESP_EPBWarningMessage3_no_display  0 
//579 ESP_Driving_mode_req 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto"
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_Invalid 15
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_ATS_shift_failure  14 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_ATS_shifting  13 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_Sand  8 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_WetMud  7 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_Rock  6 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_4L  5 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_ECO  4 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_Sport  3 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_No_used  2 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_Snow  1 
#define  CAN_ALL_ABSESP_ce4ESP_Driving_mode_req_Auto  0 
//579 ESP_EspCtrlActv 1 "Active" 0 "Not active"
#define  CAN_ALL_ABSESP_cb1ESP_EspCtrlActv_Active 1
#define  CAN_ALL_ABSESP_cb1ESP_EspCtrlActv_Not_active  0 
//579 ESP_TcsCtrlActv 1 "Active" 0 "Not active"
#define  CAN_ALL_ABSESP_cb1ESP_TcsCtrlActv_Active 1
#define  CAN_ALL_ABSESP_cb1ESP_TcsCtrlActv_Not_active  0 
//579 ESP_TcsFlgFlt 1 "Failure" 0 "No failure"
#define  CAN_ALL_ABSESP_cb1ESP_TcsFlgFlt_Failure 1
#define  CAN_ALL_ABSESP_cb1ESP_TcsFlgFlt_No_failure  0 
//579 ESP_VdcFlgFlt 1 "Failure" 0 "No failure"
#define  CAN_ALL_ABSESP_cb1ESP_VdcFlgFlt_Failure 1
#define  CAN_ALL_ABSESP_cb1ESP_VdcFlgFlt_No_failure  0 
//579 ESP_GearShiftPrevn 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request"
#define  CAN_ALL_ABSESP_ce2ESP_GearShiftPrevn_Inhibit_all_shifts 3
#define  CAN_ALL_ABSESP_ce2ESP_GearShiftPrevn_Inhibit_down_shift  2 
#define  CAN_ALL_ABSESP_ce2ESP_GearShiftPrevn_Inhibit_upshift  1 
#define  CAN_ALL_ABSESP_ce2ESP_GearShiftPrevn_No_request  0 
//579 ESP_EspEnableSts 1 "ESP enabled" 0 "ESP disabled"
#define  CAN_ALL_ABSESP_cb1ESP_EspEnableSts_ESP_enabled 1
#define  CAN_ALL_ABSESP_cb1ESP_EspEnableSts_ESP_disabled  0 
//579 ESP_ESPInfoLamp 1 "On" 0 "Off"
#define  CAN_ALL_ABSESP_cb1ESP_ESPInfoLamp_On 1
#define  CAN_ALL_ABSESP_cb1ESP_ESPInfoLamp_Off  0 
//579 RollerBenchModeSts 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive"
#define  CAN_ALL_ABSESP_cb1RollerBenchModeSts_RollerBench_Mode_Active 1
#define  CAN_ALL_ABSESP_cb1RollerBenchModeSts_RollerBench_Mode_Inactive  0 
//--Can_NR=6frame id is 0xFFFFFFFF80000212
//530 ESP_vxwWheelFLValid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelFLValid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelFLValid_Valid  0 
//530 ESP_vxwWheelFRValid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelFRValid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelFRValid_Valid  0 
//530 ESP_vxwWheelRLValid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelRLValid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelRLValid_Valid  0 
//530 ESP_vxwWheelRRValid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelRRValid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_vxwWheelRRValid_Valid  0 
//--Can_NR=7frame id is 0xFFFFFFFF80000235
//565 ESP_RLWheelDriveDirStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_RLWheelDriveDirStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_RLWheelDriveDirStatus_Valid  0 
//565 ESP_RRWheelDriveDirStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_RRWheelDriveDirStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_RRWheelDriveDirStatus_Valid  0 
//565 ESP_FLWheelDriveDirStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_FLWheelDriveDirStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_FLWheelDriveDirStatus_Valid  0 
//565 ESP_FRWheelDriveDirStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_FRWheelDriveDirStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_FRWheelDriveDirStatus_Valid  0 
//565 ESP_FLWheelDriveDirection 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined"
#define  CAN_ALL_ABSESP_ce2ESP_FLWheelDriveDirection_Backward 3
#define  CAN_ALL_ABSESP_ce2ESP_FLWheelDriveDirection_Forward  2 
#define  CAN_ALL_ABSESP_ce2ESP_FLWheelDriveDirection_Standstill  1 
#define  CAN_ALL_ABSESP_ce2ESP_FLWheelDriveDirection_undefined  0 
//565 ESP_FRWheelDriveDirection 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined"
#define  CAN_ALL_ABSESP_ce2ESP_FRWheelDriveDirection_Backward 3
#define  CAN_ALL_ABSESP_ce2ESP_FRWheelDriveDirection_Forward  2 
#define  CAN_ALL_ABSESP_ce2ESP_FRWheelDriveDirection_Standstill  1 
#define  CAN_ALL_ABSESP_ce2ESP_FRWheelDriveDirection_undefined  0 
//565 ESP_RLWheelDriveDirection 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined"
#define  CAN_ALL_ABSESP_ce2ESP_RLWheelDriveDirection_Backward 3
#define  CAN_ALL_ABSESP_ce2ESP_RLWheelDriveDirection_Forward  2 
#define  CAN_ALL_ABSESP_ce2ESP_RLWheelDriveDirection_Standstill  1 
#define  CAN_ALL_ABSESP_ce2ESP_RLWheelDriveDirection_undefined  0 
//565 ESP_RRWheelDriveDirection 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined"
#define  CAN_ALL_ABSESP_ce2ESP_RRWheelDriveDirection_Backward 3
#define  CAN_ALL_ABSESP_ce2ESP_RRWheelDriveDirection_Forward  2 
#define  CAN_ALL_ABSESP_ce2ESP_RRWheelDriveDirection_Standstill  1 
#define  CAN_ALL_ABSESP_ce2ESP_RRWheelDriveDirection_undefined  0 
//565 ESP_VehicleStandstill 2 "Invalid" 1 "standstill" 0 "not standstill"
#define  CAN_ALL_ABSESP_ce2ESP_VehicleStandstill_Invalid 2
#define  CAN_ALL_ABSESP_ce2ESP_VehicleStandstill_standstill  1 
#define  CAN_ALL_ABSESP_ce2ESP_VehicleStandstill_not_standstill  0 
//565 ESP_WhlMilgReaRRiStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_WhlMilgReaRRiStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_WhlMilgReaRRiStatus_Valid  0 
//565 ESP_WhlMilgReaRLeStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_WhlMilgReaRLeStatus_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_WhlMilgReaRLeStatus_Valid  0 
//--Can_NR=8frame id is 0xFFFFFFFF80000236
//566 ESP_WheelPulse_FL_Valid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_FL_Valid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_FL_Valid_Valid  0 
//566 ESP_WheelPulse_FR_Valid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_FR_Valid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_FR_Valid_Valid  0 
//566 ESP_WheelPulse_RL_Valid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_RL_Valid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_RL_Valid_Valid  0 
//566 ESP_WheelPulse_RR_Valid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_RR_Valid_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_WheelPulse_RR_Valid_Valid  0 
//--Can_NR=9frame id is 0xFFFFFFFF80000234
//564 ESP_EBDActive 1 "active" 0 "not active"
#define  CAN_ALL_ABSESP_cb1ESP_EBDActive_active 1
#define  CAN_ALL_ABSESP_cb1ESP_EBDActive_not_active  0 
//564 ESP_VDCActive 1 "active" 0 "not active"
#define  CAN_ALL_ABSESP_cb1ESP_VDCActive_active 1
#define  CAN_ALL_ABSESP_cb1ESP_VDCActive_not_active  0 
//564 ESP_NoBrakeForce 1 "no brk force" 0 "exist brk force"
#define  CAN_ALL_ABSESP_cb1ESP_NoBrakeForce_no_brk_force 1
#define  CAN_ALL_ABSESP_cb1ESP_NoBrakeForce_exist_brk_force  0 
//564 ESP_ECDTempOff 1 "temp too high" 0 "not high"
#define  CAN_ALL_ABSESP_cb1ESP_ECDTempOff_temp_too_high 1
#define  CAN_ALL_ABSESP_cb1ESP_ECDTempOff_not_high  0 
//564 ESP_CDD_APactive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_CDD_APactive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_CDD_APactive_not_activated  0 
//564 ESP_CDDActive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_CDDActive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_CDDActive_not_activated  0 
//564 ESP_CDDAvailable 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_CDDAvailable_available 1
#define  CAN_ALL_ABSESP_cb1ESP_CDDAvailable_not_available  0 
//564 ESP_ABAactive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_ABAactive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_ABAactive_not_activated  0 
//564 ESP_ABAavailable 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_ABAavailable_available 1
#define  CAN_ALL_ABSESP_cb1ESP_ABAavailable_not_available  0 
//564 ESP_PrefillActive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_PrefillActive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_PrefillActive_not_activated  0 
//564 ESP_PrefillAvailable 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_PrefillAvailable_available 1
#define  CAN_ALL_ABSESP_cb1ESP_PrefillAvailable_not_available  0 
//564 ESP_AEBdecActive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_AEBdecActive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_AEBdecActive_not_activated  0 
//564 ESP_AEBdecAvailable 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_AEBdecAvailable_available 1
#define  CAN_ALL_ABSESP_cb1ESP_AEBdecAvailable_not_available  0 
//564 ESP_BrkFricTqTotAtWhlvaild 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_BrkFricTqTotAtWhlvaild_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_BrkFricTqTotAtWhlvaild_Valid  0 
//564 ESP_AWBactive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_AWBactive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_AWBactive_not_activated  0 
//564 ESP_AWBavailable 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_AWBavailable_available 1
#define  CAN_ALL_ABSESP_cb1ESP_AWBavailable_not_available  0 
//564 ESP_DTCactive 1 "activated" 0 "not activated"
#define  CAN_ALL_ABSESP_cb1ESP_DTCactive_activated 1
#define  CAN_ALL_ABSESP_cb1ESP_DTCactive_not_activated  0 
//564 ESP_CDDerror 1 "error" 0 "not error"
#define  CAN_ALL_ABSESP_cb1ESP_CDDerror_error 1
#define  CAN_ALL_ABSESP_cb1ESP_CDDerror_not_error  0 
//564 ESP_VLCerror 1 "error" 0 "not error"
#define  CAN_ALL_ABSESP_cb1ESP_VLCerror_error 1
#define  CAN_ALL_ABSESP_cb1ESP_VLCerror_not_error  0 
//--Can_NR=10frame id is 0xFFFFFFFF80000223
//547 ESP_Target_Gear_Request 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request"
#define  CAN_ALL_ABSESP_ce3ESP_Target_Gear_Request_DRIVE 4
#define  CAN_ALL_ABSESP_ce3ESP_Target_Gear_Request_NEUTRAL  3 
#define  CAN_ALL_ABSESP_ce3ESP_Target_Gear_Request_REVERSE  2 
#define  CAN_ALL_ABSESP_ce3ESP_Target_Gear_Request_PARK  1 
#define  CAN_ALL_ABSESP_ce3ESP_Target_Gear_Request_No_Request  0 
//547 ESP_APA_GearBoxEnable 1 "gear shift request" 0 "no request"
#define  CAN_ALL_ABSESP_ce2ESP_APA_GearBoxEnable_gear_shift_request 1
#define  CAN_ALL_ABSESP_ce2ESP_APA_GearBoxEnable_no_request  0 
//547 ESP_PAM_LC_Status 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF"
#define  CAN_ALL_ABSESP_ce4ESP_PAM_LC_Status_Error 10
#define  CAN_ALL_ABSESP_ce4ESP_PAM_LC_Status_Active_AutomaticPark  4 
#define  CAN_ALL_ABSESP_ce4ESP_PAM_LC_Status_Standby  1 
#define  CAN_ALL_ABSESP_ce4ESP_PAM_LC_Status_OFF  0 
//547 ESP_PAM_LC_FailureSts 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error"
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_Error 7
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_Unexpected_GearIntervention  5 
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_Unexpected_ACCPedalIntervention  4 
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_Unexpected_EPB_Action  3 
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_Unexpected_GearPosition  2 
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_Vehicle_blocked  1 
#define  CAN_ALL_ABSESP_ce3ESP_PAM_LC_FailureSts_No_Error  0 
//547 ESP_VLC_APactive 1 "active" 0 "not active"
#define  CAN_ALL_ABSESP_cb1ESP_VLC_APactive_active 1
#define  CAN_ALL_ABSESP_cb1ESP_VLC_APactive_not_active  0 
//547 ESP_VLCEngTorqReqAct 1 "Invalid" 0 "Valid"
#define  CAN_ALL_ABSESP_cb1ESP_VLCEngTorqReqAct_Invalid 1
#define  CAN_ALL_ABSESP_cb1ESP_VLCEngTorqReqAct_Valid  0 
//547 ESP_VLCAPA_Available 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_VLCAPA_Available_available 1
#define  CAN_ALL_ABSESP_cb1ESP_VLCAPA_Available_not_available  0 
//547 ESP_VLC_Available 1 "available" 0 "not available"
#define  CAN_ALL_ABSESP_cb1ESP_VLC_Available_available 1
#define  CAN_ALL_ABSESP_cb1ESP_VLC_Available_not_available  0 
//547 ESP_VLC_Active 1 "active" 0 "not active"
#define  CAN_ALL_ABSESP_cb1ESP_VLC_Active_active 1
#define  CAN_ALL_ABSESP_cb1ESP_VLC_Active_not_active  0 

//CAN有符号变量：该变量是正负整数
#define  CAN_ALL_ABSESP_s12ESP_Algt_offset 796
#define  CAN_ALL_ABSESP_s12ESP_Algt_Nmax 796
#define  CAN_ALL_ABSESP_s12ESP_Algt_Pmax 796
#define  CAN_ALL_ABSESP_s12ESP_Alat_offset 796
#define  CAN_ALL_ABSESP_s12ESP_Alat_Nmax 796
#define  CAN_ALL_ABSESP_s12ESP_Alat_Pmax 796
#define  CAN_ALL_ABSESP_s12ESP_YawRate_offset 982
#define  CAN_ALL_ABSESP_s12ESP_YawRate_Nmax 982
#define  CAN_ALL_ABSESP_s12ESP_YawRate_Pmax 982
#define  CAN_ALL_ABSESP_s16ESP_VLCEngTorqReq_offset 30000
#define  CAN_ALL_ABSESP_s16ESP_VLCEngTorqReq_Nmax 30000
#define  CAN_ALL_ABSESP_s16ESP_VLCEngTorqReq_Pmax 30000
#define  CAN_ALL_ABSESP_s8ESP_VLC_InternalTargetAcce_offset 140
#define  CAN_ALL_ABSESP_s8ESP_VLC_InternalTargetAcce_Nmax 140
#define  CAN_ALL_ABSESP_s8ESP_VLC_InternalTargetAcce_Pmax 115

//CAN无符号变量：define该变量的physical min-max
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLe_min 0
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLe_max 0xFFE
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi_min 0
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi_max 0xFFE
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdReLe_min 0
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdReLe_max 0xFFE
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdReRi_min 0
#define  CAN_ALL_ABSESP_u12ABS_WhlSpdReRi_max 0xFFE
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntLeStatus_min 0
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntLeStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus_min 0
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus_min 0
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus_min 0
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus_max 0x1
#define  CAN_ALL_ABSESP_u4RollingCounter_0x211_min 0
#define  CAN_ALL_ABSESP_u4RollingCounter_0x211_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x211_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x211_max 0xFF
#define  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntLe_min 0
#define  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntLe_max 0xFFFF
#define  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi_min 0
#define  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi_max 0xFFFF
#define  CAN_ALL_ABSESP_u1ABS_AbsCtrlActv_min 0
#define  CAN_ALL_ABSESP_u1ABS_AbsCtrlActv_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_AbsFlgFlt_min 0
#define  CAN_ALL_ABSESP_u1ABS_AbsFlgFlt_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_EbdFlgFlt_min 0
#define  CAN_ALL_ABSESP_u1ABS_EbdFlgFlt_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_VehSpdDirection_min 0
#define  CAN_ALL_ABSESP_u1ABS_VehSpdDirection_max 0x1
#define  CAN_ALL_ABSESP_u12ABS_VehSpdLgt_min 0
#define  CAN_ALL_ABSESP_u12ABS_VehSpdLgt_max 0xFFF
#define  CAN_ALL_ABSESP_u2ABS_VehSpdLgtStatus_min 0
#define  CAN_ALL_ABSESP_u2ABS_VehSpdLgtStatus_max 0x2
#define  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntRiStatus_min 0
#define  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntRiStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus_min 0
#define  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus_max 0x1
#define  CAN_ALL_ABSESP_u4RollingCounter_0x221_min 0
#define  CAN_ALL_ABSESP_u4RollingCounter_0x221_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x221_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x221_max 0xFF
#define  CAN_ALL_ABSESP_u12ESP_Master_Cylinder_Pressure_min 0
#define  CAN_ALL_ABSESP_u12ESP_Master_Cylinder_Pressure_max 0xFFF
#define  CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp_min 0
#define  CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp_max 0xFFF
#define  CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinder_min 0
#define  CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinder_max 0x1E
#define  CAN_ALL_ABSESP_c8Reserve_3_24_31_min 0
#define  CAN_ALL_ABSESP_c8Reserve_3_24_31_max 0xFF
#define  CAN_ALL_ABSESP_c8Reserve_3_32_39_min 0
#define  CAN_ALL_ABSESP_c8Reserve_3_32_39_max 0xFF
#define  CAN_ALL_ABSESP_u1ESP_PresOffsetMasterCylinderVali_min 0
#define  CAN_ALL_ABSESP_u1ESP_PresOffsetMasterCylinderVali_max 0x1
#define  CAN_ALL_ABSESP_u2ESP_TrfCaseModReqdByEsp_min 0
#define  CAN_ALL_ABSESP_u2ESP_TrfCaseModReqdByEsp_max 0x3
#define  CAN_ALL_ABSESP_u1ESP_Master_Cylinder_Pressure_Sta_min 0
#define  CAN_ALL_ABSESP_u1ESP_Master_Cylinder_Pressure_Sta_max 0x1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x241_min 0
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x241_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x241_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x241_max 0xFF
#define  CAN_ALL_ABSESP_u12ESP_Algt_min 0
#define  CAN_ALL_ABSESP_u12ESP_Algt_max 0x638
#define  CAN_ALL_ABSESP_u12ESP_Alat_min 0
#define  CAN_ALL_ABSESP_u12ESP_Alat_max 0x638
#define  CAN_ALL_ABSESP_u12ESP_YawRate_min 0
#define  CAN_ALL_ABSESP_u12ESP_YawRate_max 0x7AC
#define  CAN_ALL_ABSESP_u1ESP_AlgtStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_AlgtStatus_max 0x1
#define  CAN_ALL_ABSESP_c12Reserve_4_40_35_min 0
#define  CAN_ALL_ABSESP_c12Reserve_4_40_35_max 0xFFF
#define  CAN_ALL_ABSESP_u1ESP_AlatStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_AlatStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_YawRateStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_YawRateStatus_max 0x1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x242_min 0
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x242_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x242_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x242_max 0xFF
#define  CAN_ALL_ABSESP_u2ESP_EPBErrorStatus_min 0
#define  CAN_ALL_ABSESP_u2ESP_EPBErrorStatus_max 0x3
#define  CAN_ALL_ABSESP_u3ESP_EPBStatus_min 0
#define  CAN_ALL_ABSESP_u3ESP_EPBStatus_max 0x7
#define  CAN_ALL_ABSESP_u1ESP_HHCActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_HHCActive_max 0x1
#define  CAN_ALL_ABSESP_c1Reserve_5_2_2_min 0
#define  CAN_ALL_ABSESP_c1Reserve_5_2_2_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_HHCAvailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_HHCAvailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_CdpActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_CdpActive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_CdpAvailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_CdpAvailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController_min 0
#define  CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController_max 0x1
#define  CAN_ALL_ABSESP_u2ESP_HDCActive_min 0
#define  CAN_ALL_ABSESP_u2ESP_HDCActive_max 0x2
#define  CAN_ALL_ABSESP_u1ESP_HDCAvailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_HDCAvailable_max 0x1
#define  CAN_ALL_ABSESP_c1Reserve_5_10_10_min 0
#define  CAN_ALL_ABSESP_c1Reserve_5_10_10_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_CCSwitchOff_min 0
#define  CAN_ALL_ABSESP_u1ESP_CCSwitchOff_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AvhAvabliable_min 0
#define  CAN_ALL_ABSESP_u1ESP_AvhAvabliable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AvhStandby_min 0
#define  CAN_ALL_ABSESP_u1ESP_AvhStandby_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AvhActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_AvhActive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AVHWarningMessage_min 0
#define  CAN_ALL_ABSESP_u1ESP_AVHWarningMessage_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1_min 0
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2_min 0
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3_min 0
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3_max 0x1
#define  CAN_ALL_ABSESP_u4ESP_Driving_mode_req_min 0
#define  CAN_ALL_ABSESP_u4ESP_Driving_mode_req_max 0xF
#define  CAN_ALL_ABSESP_c9Reserve_5_24_16_min 0
#define  CAN_ALL_ABSESP_c9Reserve_5_24_16_max 0x1FF
#define  CAN_ALL_ABSESP_u1ESP_EspCtrlActv_min 0
#define  CAN_ALL_ABSESP_u1ESP_EspCtrlActv_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_TcsCtrlActv_min 0
#define  CAN_ALL_ABSESP_u1ESP_TcsCtrlActv_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_TcsFlgFlt_min 0
#define  CAN_ALL_ABSESP_u1ESP_TcsFlgFlt_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_VdcFlgFlt_min 0
#define  CAN_ALL_ABSESP_u1ESP_VdcFlgFlt_max 0x1
#define  CAN_ALL_ABSESP_u2ESP_GearShiftPrevn_min 0
#define  CAN_ALL_ABSESP_u2ESP_GearShiftPrevn_max 0x3
#define  CAN_ALL_ABSESP_u1ESP_EspEnableSts_min 0
#define  CAN_ALL_ABSESP_u1ESP_EspEnableSts_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_ESPInfoLamp_min 0
#define  CAN_ALL_ABSESP_u1ESP_ESPInfoLamp_max 0x1
#define  CAN_ALL_ABSESP_u1RollerBenchModeSts_min 0
#define  CAN_ALL_ABSESP_u1RollerBenchModeSts_max 0x1
#define  CAN_ALL_ABSESP_c7Reserve_5_53_43_min 0
#define  CAN_ALL_ABSESP_c7Reserve_5_53_43_max 0x7F
#define  CAN_ALL_ABSESP_u4RollingCounter_0x243_min 0
#define  CAN_ALL_ABSESP_u4RollingCounter_0x243_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x243_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x243_max 0xFF
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawFL_min 0
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawFL_max 0xFFE
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR_min 0
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR_max 0xFFE
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawRL_min 0
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawRL_max 0xFFE
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR_min 0
#define  CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR_max 0xFFE
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelFLValid_min 0
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelFLValid_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid_min 0
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid_min 0
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid_min 0
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid_max 0x1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x212_min 0
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x212_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x212_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x212_max 0xFF
#define  CAN_ALL_ABSESP_u16ESP_WhlMilgRearLe_min 0
#define  CAN_ALL_ABSESP_u16ESP_WhlMilgRearLe_max 0xFFFF
#define  CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe_min 0
#define  CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe_max 0xFFFF
#define  CAN_ALL_ABSESP_u1ESP_RLWheelDriveDirStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_RLWheelDriveDirStatus_max 0x1
#define  CAN_ALL_ABSESP_c4Reserve_7_36_39_min 0
#define  CAN_ALL_ABSESP_c4Reserve_7_36_39_max 0xF
#define  CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus_max 0x1
#define  CAN_ALL_ABSESP_u2ESP_FLWheelDriveDirection_min 0
#define  CAN_ALL_ABSESP_u2ESP_FLWheelDriveDirection_max 0x3
#define  CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection_min 0
#define  CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection_max 0x3
#define  CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection_min 0
#define  CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection_max 0x3
#define  CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection_min 0
#define  CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection_max 0x3
#define  CAN_ALL_ABSESP_u2ESP_VehicleStandstill_min 0
#define  CAN_ALL_ABSESP_u2ESP_VehicleStandstill_max 0x3
#define  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRRiStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRRiStatus_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus_min 0
#define  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus_max 0x1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x235_min 0
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x235_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x235_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x235_max 0xFF
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_min 0
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_max 0xFE
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_FR_min 0
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_FR_max 0xFE
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_RL_min 0
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_RL_max 0xFE
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_RR_min 0
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_RR_max 0xFE
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_FL_Valid_min 0
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_FL_Valid_max 0x1
#define  CAN_ALL_ABSESP_c16Reserve_8_40_39_min 0
#define  CAN_ALL_ABSESP_c16Reserve_8_40_39_max 0xFFFF
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid_min 0
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid_min 0
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid_min 0
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid_max 0x1
#define  CAN_ALL_ABSESP_u4RollingCounter_ESP_0x236_min 0
#define  CAN_ALL_ABSESP_u4RollingCounter_ESP_0x236_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_ESP_0x236_min 0
#define  CAN_ALL_ABSESP_u8Checksum_ESP_0x236_max 0xFF
#define  CAN_ALL_ABSESP_u1ESP_EBDActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_EBDActive_max 0x1
#define  CAN_ALL_ABSESP_c6Reserve_9_2_7_min 0
#define  CAN_ALL_ABSESP_c6Reserve_9_2_7_max 0x3F
#define  CAN_ALL_ABSESP_u1ESP_VDCActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_VDCActive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_NoBrakeForce_min 0
#define  CAN_ALL_ABSESP_u1ESP_NoBrakeForce_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_ECDTempOff_min 0
#define  CAN_ALL_ABSESP_u1ESP_ECDTempOff_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_CDD_APactive_min 0
#define  CAN_ALL_ABSESP_u1ESP_CDD_APactive_max 0x1
#define  CAN_ALL_ABSESP_c4Reserve_9_10_13_min 0
#define  CAN_ALL_ABSESP_c4Reserve_9_10_13_max 0xF
#define  CAN_ALL_ABSESP_u1ESP_CDDActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_CDDActive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_CDDAvailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_CDDAvailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_ABAactive_min 0
#define  CAN_ALL_ABSESP_u1ESP_ABAactive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_ABAavailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_ABAavailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_PrefillActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_PrefillActive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_PrefillAvailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_PrefillAvailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AEBdecActive_min 0
#define  CAN_ALL_ABSESP_u1ESP_AEBdecActive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AEBdecAvailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_AEBdecAvailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild_min 0
#define  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_AWBactive_min 0
#define  CAN_ALL_ABSESP_u1ESP_AWBactive_max 0x1
#define  CAN_ALL_ABSESP_c5Reserve_9_27_31_min 0
#define  CAN_ALL_ABSESP_c5Reserve_9_27_31_max 0x1F
#define  CAN_ALL_ABSESP_u1ESP_AWBavailable_min 0
#define  CAN_ALL_ABSESP_u1ESP_AWBavailable_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_DTCactive_min 0
#define  CAN_ALL_ABSESP_u1ESP_DTCactive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_CDDerror_min 0
#define  CAN_ALL_ABSESP_u1ESP_CDDerror_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_VLCerror_min 0
#define  CAN_ALL_ABSESP_u1ESP_VLCerror_max 0x1
#define  CAN_ALL_ABSESP_u14ESP_BrkFricTqTotAtWhl_min 0
#define  CAN_ALL_ABSESP_u14ESP_BrkFricTqTotAtWhl_max 0x27F6
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x234_min 0
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x234_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x234_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x234_max 0xFF
#define  CAN_ALL_ABSESP_u16ESP_VLCEngTorqReq_min 0
#define  CAN_ALL_ABSESP_u16ESP_VLCEngTorqReq_max 0xEA60
#define  CAN_ALL_ABSESP_u8ESP_VLC_InternalTargetAcce_min 0
#define  CAN_ALL_ABSESP_u8ESP_VLC_InternalTargetAcce_max 0xFF
#define  CAN_ALL_ABSESP_u3ESP_Target_Gear_Request_min 0
#define  CAN_ALL_ABSESP_u3ESP_Target_Gear_Request_max 0x7
#define  CAN_ALL_ABSESP_u2ESP_APA_GearBoxEnable_min 0
#define  CAN_ALL_ABSESP_u2ESP_APA_GearBoxEnable_max 0x3
#define  CAN_ALL_ABSESP_u4ESP_PAM_LC_Status_min 0
#define  CAN_ALL_ABSESP_u4ESP_PAM_LC_Status_max 0xF
#define  CAN_ALL_ABSESP_c3Reserve_10_24_26_min 0
#define  CAN_ALL_ABSESP_c3Reserve_10_24_26_max 0x7
#define  CAN_ALL_ABSESP_u3ESP_PAM_LC_FailureSts_min 0
#define  CAN_ALL_ABSESP_u3ESP_PAM_LC_FailureSts_max 0x7
#define  CAN_ALL_ABSESP_u1ESP_VLC_APactive_min 0
#define  CAN_ALL_ABSESP_u1ESP_VLC_APactive_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct_min 0
#define  CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct_max 0x1
#define  CAN_ALL_ABSESP_c8Reserve_10_40_47_min 0
#define  CAN_ALL_ABSESP_c8Reserve_10_40_47_max 0xFF
#define  CAN_ALL_ABSESP_u1ESP_VLCAPA_Available_min 0
#define  CAN_ALL_ABSESP_u1ESP_VLCAPA_Available_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_VLC_Available_min 0
#define  CAN_ALL_ABSESP_u1ESP_VLC_Available_max 0x1
#define  CAN_ALL_ABSESP_u1ESP_VLC_Active_min 0
#define  CAN_ALL_ABSESP_u1ESP_VLC_Active_max 0x1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x223_min 0
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x223_max 0xF
#define  CAN_ALL_ABSESP_u8Checksum_0x223_min 0
#define  CAN_ALL_ABSESP_u8Checksum_0x223_max 0xFF

//CANfactor分子分母定义
#define  CAN_ALL_ABSESP_um12ABS_WhlSpdFrntRi_factor 9
#define  CAN_ALL_ABSESP_ud12ABS_WhlSpdFrntRi_factor 160
#define  CAN_ALL_ABSESP_um12ABS_WhlSpdReLe_factor 9
#define  CAN_ALL_ABSESP_ud12ABS_WhlSpdReLe_factor 160
#define  CAN_ALL_ABSESP_um12ABS_WhlSpdReRi_factor 9
#define  CAN_ALL_ABSESP_ud12ABS_WhlSpdReRi_factor 160
#define  CAN_ALL_ABSESP_u4RollingCounter_0x211_factor 1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus_factor 1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus_factor 1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus_factor 1
#define  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntLeStatus_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x211_factor 1
#define  CAN_ALL_ABSESP_um12ABS_WhlSpdFrntLe_factor 9
#define  CAN_ALL_ABSESP_ud12ABS_WhlSpdFrntLe_factor 160
#define  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi_factor 1
#define  CAN_ALL_ABSESP_um12ABS_VehSpdLgt_factor 9
#define  CAN_ALL_ABSESP_ud12ABS_VehSpdLgt_factor 160
#define  CAN_ALL_ABSESP_u1ABS_VehSpdDirection_factor 1
#define  CAN_ALL_ABSESP_u1ABS_EbdFlgFlt_factor 1
#define  CAN_ALL_ABSESP_u1ABS_AbsFlgFlt_factor 1
#define  CAN_ALL_ABSESP_u1ABS_AbsCtrlActv_factor 1
#define  CAN_ALL_ABSESP_u4RollingCounter_0x221_factor 1
#define  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus_factor 1
#define  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntRiStatus_factor 1
#define  CAN_ALL_ABSESP_u2ABS_VehSpdLgtStatus_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x221_factor 1
#define  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntLe_factor 1
#define  CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp_factor 1
#define  CAN_ALL_ABSESP_u2ESP_TrfCaseModReqdByEsp_factor 1
#define  CAN_ALL_ABSESP_u1ESP_PresOffsetMasterCylinderVali_factor 1
#define  CAN_ALL_ABSESP_s5ESP_PresOffsetMasterCylinder_factor 1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x241_factor 1
#define  CAN_ALL_ABSESP_u1ESP_Master_Cylinder_Pressure_Sta_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x241_factor 1
#define  CAN_ALL_ABSESP_um12ESP_Master_Cylinder_Pressure_factor 1
#define  CAN_ALL_ABSESP_ud12ESP_Master_Cylinder_Pressure_factor 16
#define  CAN_ALL_ABSESP_sm12ESP_Alat_factor 27127
#define  CAN_ALL_ABSESP_sd12ESP_Alat_factor 1000000
#define  CAN_ALL_ABSESP_sm12ESP_YawRate_factor 10663
#define  CAN_ALL_ABSESP_sd12ESP_YawRate_factor 5000000
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x242_factor 1
#define  CAN_ALL_ABSESP_u1ESP_YawRateStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AlatStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AlgtStatus_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x242_factor 1
#define  CAN_ALL_ABSESP_sm12ESP_Algt_factor 27127
#define  CAN_ALL_ABSESP_sd12ESP_Algt_factor 1000000
#define  CAN_ALL_ABSESP_u1ESP_HHCAvailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_HHCActive_factor 1
#define  CAN_ALL_ABSESP_u2ESP_HDCActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CdpAvailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CdpActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3_factor 1
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2_factor 1
#define  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AVHWarningMessage_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AvhActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AvhStandby_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AvhAvabliable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VdcFlgFlt_factor 1
#define  CAN_ALL_ABSESP_u1ESP_TcsFlgFlt_factor 1
#define  CAN_ALL_ABSESP_u1ESP_TcsCtrlActv_factor 1
#define  CAN_ALL_ABSESP_u1ESP_EspCtrlActv_factor 1
#define  CAN_ALL_ABSESP_u4ESP_Driving_mode_req_factor 1
#define  CAN_ALL_ABSESP_u1ESP_ESPInfoLamp_factor 1
#define  CAN_ALL_ABSESP_u1ESP_EspEnableSts_factor 1
#define  CAN_ALL_ABSESP_u2ESP_GearShiftPrevn_factor 1
#define  CAN_ALL_ABSESP_u3ESP_EPBStatus_factor 1
#define  CAN_ALL_ABSESP_u4RollingCounter_0x243_factor 1
#define  CAN_ALL_ABSESP_u1RollerBenchModeSts_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x243_factor 1
#define  CAN_ALL_ABSESP_u2ESP_EPBErrorStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CCSwitchOff_factor 1
#define  CAN_ALL_ABSESP_u1ESP_HDCAvailable_factor 1
#define  CAN_ALL_ABSESP_um12ESP_vxwWheelRawFR_factor 9
#define  CAN_ALL_ABSESP_ud12ESP_vxwWheelRawFR_factor 160
#define  CAN_ALL_ABSESP_um12ESP_vxwWheelRawRL_factor 9
#define  CAN_ALL_ABSESP_ud12ESP_vxwWheelRawRL_factor 160
#define  CAN_ALL_ABSESP_um12ESP_vxwWheelRawRR_factor 9
#define  CAN_ALL_ABSESP_ud12ESP_vxwWheelRawRR_factor 160
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x212_factor 1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid_factor 1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid_factor 1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid_factor 1
#define  CAN_ALL_ABSESP_u1ESP_vxwWheelFLValid_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x212_factor 1
#define  CAN_ALL_ABSESP_um12ESP_vxwWheelRawFL_factor 9
#define  CAN_ALL_ABSESP_ud12ESP_vxwWheelRawFL_factor 160
#define  CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe_factor 1
#define  CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_RLWheelDriveDirStatus_factor 1
#define  CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection_factor 1
#define  CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection_factor 1
#define  CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection_factor 1
#define  CAN_ALL_ABSESP_u2ESP_FLWheelDriveDirection_factor 1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x235_factor 1
#define  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus_factor 1
#define  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRRiStatus_factor 1
#define  CAN_ALL_ABSESP_u2ESP_VehicleStandstill_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x235_factor 1
#define  CAN_ALL_ABSESP_u16ESP_WhlMilgRearLe_factor 1
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_FR_factor 1
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_RL_factor 1
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_RR_factor 1
#define  CAN_ALL_ABSESP_u4RollingCounter_ESP_0x236_factor 1
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid_factor 1
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid_factor 1
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid_factor 1
#define  CAN_ALL_ABSESP_u1ESP_WheelPulse_FL_Valid_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_ESP_0x236_factor 1
#define  CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VDCActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_EBDActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_ECDTempOff_factor 1
#define  CAN_ALL_ABSESP_u1ESP_NoBrakeForce_factor 1
#define  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AEBdecAvailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AEBdecActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_PrefillAvailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_PrefillActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_ABAavailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_ABAactive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CDDAvailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_DTCactive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AWBavailable_factor 1
#define  CAN_ALL_ABSESP_u1ESP_AWBactive_factor 1
#define  CAN_ALL_ABSESP_u14ESP_BrkFricTqTotAtWhl_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VLCerror_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CDDerror_factor 1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x234_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x234_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CDDActive_factor 1
#define  CAN_ALL_ABSESP_u1ESP_CDD_APactive_factor 1
#define  CAN_ALL_ABSESP_sm8ESP_VLC_InternalTargetAcce_factor 1
#define  CAN_ALL_ABSESP_sd8ESP_VLC_InternalTargetAcce_factor 20
#define  CAN_ALL_ABSESP_u2ESP_APA_GearBoxEnable_factor 1
#define  CAN_ALL_ABSESP_u3ESP_Target_Gear_Request_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VLC_APactive_factor 1
#define  CAN_ALL_ABSESP_u3ESP_PAM_LC_FailureSts_factor 1
#define  CAN_ALL_ABSESP_u4ESP_PAM_LC_Status_factor 1
#define  CAN_ALL_ABSESP_u4Rolling_counter_0x223_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VLC_Active_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VLC_Available_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VLCAPA_Available_factor 1
#define  CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct_factor 1
#define  CAN_ALL_ABSESP_u8Checksum_0x223_factor 1
#define  CAN_ALL_ABSESP_s16ESP_VLCEngTorqReq_factor 1

//#define  报文名称_CH（CAN报文通道号）    报文序号+10；#define  结构体名称_CH（结构体通道号）  报文序号；#define 报文名称_ID （CAN报文ID）  报文CAN ID；#define 报文名称_DT  (CAN报文周期)  报文时间周倜【MS】/10； #define 报文名称_TorR(CAN报文发送或接收)    发送1，接收0

//--Can_NR=1----ABSESP 1 th Data Frame 名称：ABS_WhlSpd_0x211  ID：0X529  周期：0ms  DLC：8字节ABSESP-->GW
#define ALL_ABSESP_ABS_WhlSpd_0x211_CH 1
#define ALL_ABSESP_ABS_WhlSpd_0x211_FR 1
#define ALL_ABSESP_ABS_WhlSpd_0x211_ID 0XFFFFFFFF80000211
#define ALL_ABSESP_ABS_WhlSpd_0x211_DT 0 //xxMS/10
#define ALL_ABSESP_ABS_WhlSpd_0x211_TorR 0
#define ALL_ABSESP_ABS_WhlSpd_0x211_Ay 0
#define ALL_ABSESP_ABS_WhlSpd_0x211_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ABS_WhlSpd_0x211_LH 8//LENGTH <=8


//--Can_NR=2----ABSESP 2 th Data Frame 名称：ABS_Sts_0x221  ID：0X545  周期：20ms  DLC：8字节ABSESP-->GW
#define ALL_ABSESP_ABS_Sts_0x221_CH 2
#define ALL_ABSESP_ABS_Sts_0x221_FR 2
#define ALL_ABSESP_ABS_Sts_0x221_ID 0XFFFFFFFF80000221
#define ALL_ABSESP_ABS_Sts_0x221_DT 2 //xxMS/10
#define ALL_ABSESP_ABS_Sts_0x221_TorR 0
#define ALL_ABSESP_ABS_Sts_0x221_Ay 0
#define ALL_ABSESP_ABS_Sts_0x221_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ABS_Sts_0x221_LH 8//LENGTH <=8


//--Can_NR=3----ABSESP 3 th Data Frame 名称：ESP_Pressure_0x241  ID：0X577  周期：20ms  DLC：8字节ABSESP-->GW
#define ALL_ABSESP_ESP_Pressure_0x241_CH 3
#define ALL_ABSESP_ESP_Pressure_0x241_FR 3
#define ALL_ABSESP_ESP_Pressure_0x241_ID 0XFFFFFFFF80000241
#define ALL_ABSESP_ESP_Pressure_0x241_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_Pressure_0x241_TorR 0
#define ALL_ABSESP_ESP_Pressure_0x241_Ay 0
#define ALL_ABSESP_ESP_Pressure_0x241_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_Pressure_0x241_LH 8//LENGTH <=8


//--Can_NR=4----ABSESP 4 th Data Frame 名称：ESP_AxAy_0x242  ID：0X578  周期：20ms  DLC：8字节ABSESP-->GW
#define ALL_ABSESP_ESP_AxAy_0x242_CH 4
#define ALL_ABSESP_ESP_AxAy_0x242_FR 4
#define ALL_ABSESP_ESP_AxAy_0x242_ID 0XFFFFFFFF80000242
#define ALL_ABSESP_ESP_AxAy_0x242_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_AxAy_0x242_TorR 0
#define ALL_ABSESP_ESP_AxAy_0x242_Ay 0
#define ALL_ABSESP_ESP_AxAy_0x242_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_AxAy_0x242_LH 8//LENGTH <=8


//--Can_NR=5----ABSESP 5 th Data Frame 名称：ESP_Status_0x243  ID：0X579  周期：20ms  DLC：8字节ABSESP-->MRR
#define ALL_ABSESP_ESP_Status_0x243_CH 5
#define ALL_ABSESP_ESP_Status_0x243_FR 5
#define ALL_ABSESP_ESP_Status_0x243_ID 0XFFFFFFFF80000243
#define ALL_ABSESP_ESP_Status_0x243_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_Status_0x243_TorR 0
#define ALL_ABSESP_ESP_Status_0x243_Ay 0
#define ALL_ABSESP_ESP_Status_0x243_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_Status_0x243_LH 8//LENGTH <=8


//--Can_NR=6----ABSESP 6 th Data Frame 名称：ESP_RAW_0x212  ID：0X530  周期：20ms  DLC：8字节ABSESP-->GW
#define ALL_ABSESP_ESP_RAW_0x212_CH 6
#define ALL_ABSESP_ESP_RAW_0x212_FR 6
#define ALL_ABSESP_ESP_RAW_0x212_ID 0XFFFFFFFF80000212
#define ALL_ABSESP_ESP_RAW_0x212_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_RAW_0x212_TorR 0
#define ALL_ABSESP_ESP_RAW_0x212_Ay 0
#define ALL_ABSESP_ESP_RAW_0x212_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_RAW_0x212_LH 8//LENGTH <=8


//--Can_NR=7----ABSESP 7 th Data Frame 名称：ESP_Direction_0x235  ID：0X565  周期：20ms  DLC：8字节ABSESP-->GW
#define ALL_ABSESP_ESP_Direction_0x235_CH 7
#define ALL_ABSESP_ESP_Direction_0x235_FR 7
#define ALL_ABSESP_ESP_Direction_0x235_ID 0XFFFFFFFF80000235
#define ALL_ABSESP_ESP_Direction_0x235_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_Direction_0x235_TorR 0
#define ALL_ABSESP_ESP_Direction_0x235_Ay 0
#define ALL_ABSESP_ESP_Direction_0x235_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_Direction_0x235_LH 8//LENGTH <=8


//--Can_NR=8----ABSESP 8 th Data Frame 名称：ESP_WhlPulse_0x236  ID：0X566  周期：20ms  DLC：8字节ABSESP-->MRR
#define ALL_ABSESP_ESP_WhlPulse_0x236_CH 8
#define ALL_ABSESP_ESP_WhlPulse_0x236_FR 8
#define ALL_ABSESP_ESP_WhlPulse_0x236_ID 0XFFFFFFFF80000236
#define ALL_ABSESP_ESP_WhlPulse_0x236_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_WhlPulse_0x236_TorR 0
#define ALL_ABSESP_ESP_WhlPulse_0x236_Ay 0
#define ALL_ABSESP_ESP_WhlPulse_0x236_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_WhlPulse_0x236_LH 8//LENGTH <=8


//--Can_NR=9----ABSESP 9 th Data Frame 名称：ESP_Advanced_0x234  ID：0X564  周期：20ms  DLC：8字节ABSESP-->MRR
#define ALL_ABSESP_ESP_Advanced_0x234_CH 9
#define ALL_ABSESP_ESP_Advanced_0x234_FR 9
#define ALL_ABSESP_ESP_Advanced_0x234_ID 0XFFFFFFFF80000234
#define ALL_ABSESP_ESP_Advanced_0x234_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_Advanced_0x234_TorR 0
#define ALL_ABSESP_ESP_Advanced_0x234_Ay 0
#define ALL_ABSESP_ESP_Advanced_0x234_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_Advanced_0x234_LH 8//LENGTH <=8


//--Can_NR=10----ABSESP 10 th Data Frame 名称：ESP_VLC_0x223  ID：0X547  周期：20ms  DLC：8字节ABSESP-->MRR
#define ALL_ABSESP_ESP_VLC_0x223_CH 10
#define ALL_ABSESP_ESP_VLC_0x223_FR 10
#define ALL_ABSESP_ESP_VLC_0x223_ID 0XFFFFFFFF80000223
#define ALL_ABSESP_ESP_VLC_0x223_DT 2 //xxMS/10
#define ALL_ABSESP_ESP_VLC_0x223_TorR 0
#define ALL_ABSESP_ESP_VLC_0x223_Ay 0
#define ALL_ABSESP_ESP_VLC_0x223_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_ABSESP_ESP_VLC_0x223_LH 8//LENGTH <=8


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
//-----------------------10 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[88];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[44];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[22];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[22];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[11];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uABS_WhlSpdFrntLe:12;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi:12;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t exABS_WhlSpdReLe12High4:8;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
  vuint32_t exABS_WhlSpdReLe12Low8:4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ABS_WhlSpdReRi:12;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus:1;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1RollingCounter_0x211:4;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x211:8;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uABS_WhlMilgFrntLe:16;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi:16;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_ABSESP_u16ABS_AbsCtrlActv:1;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_AbsFlgFlt:1;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_EbdFlgFlt:1;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_VehSpdDirection:1;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_VehSpdLgt:12;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus:2;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1RollingCounter_0x221:4;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x221:8;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure:12;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
  vuint32_t  CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp:12;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
  vuint32_t c8Reserve_3_24_31:8;//3.7-->3.0
//*****************32 bits split line
  vuint32_t c8Reserve_3_32_39:8;//4.7-->4.0
  vuint32_t  CAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder:5;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
  vuint32_t  CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali:1;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp:2;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1Rolling_counter_0x241:4;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x241:8;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_Algt:12;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
  vuint32_t  CAN_ALL_ABSESP_u12ESP_Alat:12;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
  vuint32_t exESP_YawRate12High4:8;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
//*****************32 bits split line
  vuint32_t exESP_YawRate12Low8:4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
  vuint32_t c12Reserve_4_40_35:12;//4.3-->5.0
  vuint32_t  CAN_ALL_ABSESP_u12ESP_AlgtStatus:1;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AlatStatus:1;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_YawRateStatus:1;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1Rolling_counter_0x242:4;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x242:8;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_EPBErrorStatus:2;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_EPBStatus:3;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_5_2_2:1;//0.2-->0.2
  vuint32_t  CAN_ALL_ABSESP_u3ESP_HHCActive:1;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_HHCAvailable:1;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CdpActive:1;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CdpAvailable:1;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController:1;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_HDCActive:2;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_5_10_10:1;//1.2-->1.2
  vuint32_t  CAN_ALL_ABSESP_u2ESP_HDCAvailable:1;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CCSwitchOff:1;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AvhAvabliable:1;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AvhStandby:1;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AvhActive:1;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AVHWarningMessage:1;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1:1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2:1;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3:1;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c9Reserve_5_24_16:9;//2.0-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_ABSESP_u1ESP_Driving_mode_req:4;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4ESP_EspCtrlActv:1;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_TcsCtrlActv:1;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_TcsFlgFlt:1;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VdcFlgFlt:1;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_GearShiftPrevn:2;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_EspEnableSts:1;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_ESPInfoLamp:1;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c7Reserve_5_53_43:7;//5.3-->6.5
  vuint32_t  CAN_ALL_ABSESP_u1RollerBenchModeSts:1;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1RollingCounter_0x243:4;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x243:8;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_vxwWheelRawFL:12;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR:12;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t exESP_vxwWheelRawRL12High4:8;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
  vuint32_t exESP_vxwWheelRawRL12Low8:4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR:12;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_ABSESP_u12ESP_vxwWheelFLValid:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid:1;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1Rolling_counter_0x212:4;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x212:8;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_WhlMilgRearLe:16;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
  vuint32_t  CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe:16;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
//*****************32 bits split line
  vuint32_t c4Reserve_7_36_39:4;//4.7-->4.4
  vuint32_t  CAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus:1;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus:1;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus:1;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus:1;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection:2;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection:2;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection:2;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection:2;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_VehicleStandstill:2;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1Rolling_counter_0x235:4;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x235:8;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_WheelPulse_FL:8;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_FR:8;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_RL:8;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_RR:8;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t c16Reserve_8_40_39:16;//4.7-->5.0
  vuint32_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid:1;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1RollingCounter_ESP_0x236:4;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_ESP_0x236:8;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->
  vuint32_t c6Reserve_9_2_7:6;//0.7-->0.2
  vuint32_t  CAN_ALL_ABSESP_uESP_EBDActive:1;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VDCActive:1;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_NoBrakeForce:1;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_ECDTempOff:1;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c4Reserve_9_10_13:4;//1.5-->1.2
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CDD_APactive:1;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CDDActive:1;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CDDAvailable:1;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_ABAactive:1;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_ABAavailable:1;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_PrefillActive:1;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_PrefillAvailable:1;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AEBdecActive:1;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AEBdecAvailable:1;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild:1;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c5Reserve_9_27_31:5;//3.7-->3.3
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AWBactive:1;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_AWBavailable:1;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_DTCactive:1;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_ABSESP_u1ESP_CDDerror:1;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VLCerror:1;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl:14;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u14Rolling_counter_0x234:4;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x234:8;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->
  vuint32_t  CAN_ALL_ABSESP_uESP_VLCEngTorqReq:16;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
  vuint32_t  CAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce:8;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
  vuint32_t  CAN_ALL_ABSESP_u8ESP_Target_Gear_Request:3;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable:2;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c3Reserve_10_24_26:3;//3.2-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_ABSESP_u2ESP_PAM_LC_Status:4;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts:3;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u3ESP_VLC_APactive:1;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c8Reserve_10_40_47:8;//5.7-->5.0
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VLCAPA_Available:1;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VLC_Available:1;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1ESP_VLC_Active:1;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u1Rolling_counter_0x223:4;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_ABSESP_u4Checksum_0x223:8;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
    } B;
} CAN_ALL_FRAMES_ABSESP_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[88];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[44];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[22];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[22];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[11];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uABS_WhlSpdFrntLe:12;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi:12;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t exABS_WhlSpdReLe12:12;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
  //vuint64_t exABS_WhlSpdReLe12Low8:4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ABS_WhlSpdReRi:12;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus:1;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1RollingCounter_0x211:4;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x211:8;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uABS_WhlMilgFrntLe:16;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi:16;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_ABSESP_u16ABS_AbsCtrlActv:1;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_AbsFlgFlt:1;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_EbdFlgFlt:1;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_VehSpdDirection:1;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_VehSpdLgt:12;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus:2;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1RollingCounter_0x221:4;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x221:8;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure:12;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
  vuint64_t  CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp:12;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
  vuint64_t c8Reserve_3_24_31:8;//3.7-->3.0
//*****************32 bits split line
  vuint64_t c8Reserve_3_32_39:8;//4.7-->4.0
  vuint64_t  CAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder:5;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
  vuint64_t  CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali:1;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp:2;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1Rolling_counter_0x241:4;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x241:8;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_Algt:12;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
  vuint64_t  CAN_ALL_ABSESP_u12ESP_Alat:12;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
  vuint64_t exESP_YawRate12:12;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
//*****************32 bits split line
  //vuint64_t exESP_YawRate12Low8:4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
  vuint64_t c12Reserve_4_40_35:12;//4.3-->5.0
  vuint64_t  CAN_ALL_ABSESP_u12ESP_AlgtStatus:1;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AlatStatus:1;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_YawRateStatus:1;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1Rolling_counter_0x242:4;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x242:8;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_EPBErrorStatus:2;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_EPBStatus:3;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_5_2_2:1;//0.2-->0.2
  vuint64_t  CAN_ALL_ABSESP_u3ESP_HHCActive:1;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_HHCAvailable:1;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CdpActive:1;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CdpAvailable:1;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController:1;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_HDCActive:2;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_5_10_10:1;//1.2-->1.2
  vuint64_t  CAN_ALL_ABSESP_u2ESP_HDCAvailable:1;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CCSwitchOff:1;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AvhAvabliable:1;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AvhStandby:1;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AvhActive:1;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AVHWarningMessage:1;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1:1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2:1;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3:1;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c9Reserve_5_24_16:9;//2.0-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_ABSESP_u1ESP_Driving_mode_req:4;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4ESP_EspCtrlActv:1;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_TcsCtrlActv:1;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_TcsFlgFlt:1;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VdcFlgFlt:1;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_GearShiftPrevn:2;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_EspEnableSts:1;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_ESPInfoLamp:1;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c7Reserve_5_53_43:7;//5.3-->6.5
  vuint64_t  CAN_ALL_ABSESP_u1RollerBenchModeSts:1;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1RollingCounter_0x243:4;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x243:8;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_vxwWheelRawFL:12;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR:12;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t exESP_vxwWheelRawRL12:12;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
  //vuint64_t exESP_vxwWheelRawRL12Low8:4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR:12;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_ABSESP_u12ESP_vxwWheelFLValid:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid:1;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1Rolling_counter_0x212:4;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x212:8;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_WhlMilgRearLe:16;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
  vuint64_t  CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe:16;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
//*****************32 bits split line
  vuint64_t c4Reserve_7_36_39:4;//4.7-->4.4
  vuint64_t  CAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus:1;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus:1;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus:1;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus:1;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection:2;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection:2;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection:2;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection:2;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_VehicleStandstill:2;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1Rolling_counter_0x235:4;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x235:8;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_WheelPulse_FL:8;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_FR:8;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_RL:8;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_RR:8;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t c16Reserve_8_40_39:16;//4.7-->5.0
  vuint64_t  CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid:1;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid:1;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid:1;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1RollingCounter_ESP_0x236:4;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_ESP_0x236:8;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->
  vuint64_t c6Reserve_9_2_7:6;//0.7-->0.2
  vuint64_t  CAN_ALL_ABSESP_uESP_EBDActive:1;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VDCActive:1;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_NoBrakeForce:1;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_ECDTempOff:1;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c4Reserve_9_10_13:4;//1.5-->1.2
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CDD_APactive:1;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CDDActive:1;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CDDAvailable:1;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_ABAactive:1;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_ABAavailable:1;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_PrefillActive:1;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_PrefillAvailable:1;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AEBdecActive:1;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AEBdecAvailable:1;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild:1;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c5Reserve_9_27_31:5;//3.7-->3.3
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AWBactive:1;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_AWBavailable:1;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_DTCactive:1;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_ABSESP_u1ESP_CDDerror:1;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VLCerror:1;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl:14;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u14Rolling_counter_0x234:4;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x234:8;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->
  vuint64_t  CAN_ALL_ABSESP_uESP_VLCEngTorqReq:16;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
  vuint64_t  CAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce:8;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
  vuint64_t  CAN_ALL_ABSESP_u8ESP_Target_Gear_Request:3;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable:2;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c3Reserve_10_24_26:3;//3.2-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_ABSESP_u2ESP_PAM_LC_Status:4;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts:3;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u3ESP_VLC_APactive:1;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c8Reserve_10_40_47:8;//5.7-->5.0
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct:1;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VLCAPA_Available:1;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VLC_Available:1;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1ESP_VLC_Active:1;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u1Rolling_counter_0x223:4;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_ABSESP_u4Checksum_0x223:8;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

    } B;
} CAN_ALL_FRAMES_ABSESP_tag;
extern CAN_ALL_FRAMES_ABSESP_tag CAN_ALL_FRAMES_ABSESP;
extern CAN_ALL_FRAMES_ABSESP_tag CAN_ALL_FRMes_ABSESP;
extern CAN_ALL_FRAMES_ABSESP_tag CAN_ALL_FRVar_ABSESP;
extern CAN_ALL_FRAMES_ABSESP_tag CAN_ALL_FRVarOld_ABSESP;


               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exABS_WhlSpdReLe12High4:4;
                                    vuint16_t exABS_WhlSpdReLe12Low8:8;
                               } B;
                            } exABS_WhlSpdReLe_tag;
                            extern exABS_WhlSpdReLe_tag exABS_WhlSpdReLe;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exESP_YawRate12High4:4;
                                    vuint16_t exESP_YawRate12Low8:8;
                               } B;
                            } exESP_YawRate_tag;
                            extern exESP_YawRate_tag exESP_YawRate;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exESP_vxwWheelRawRL12High4:4;
                                    vuint16_t exESP_vxwWheelRawRL12Low8:8;
                               } B;
                            } exESP_vxwWheelRawRL_tag;
                            extern exESP_vxwWheelRawRL_tag exESP_vxwWheelRawRL;
//--1 th CAN 报文数据处理子程序------------
                CAN1_noReceivedMessageTime[ALL_ABSESP_ABS_WhlSpd_0x211_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_ABSESP_ABS_Sts_0x221_CH]++;//Can_NR=2
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_Pressure_0x241_CH]++;//Can_NR=3
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_AxAy_0x242_CH]++;//Can_NR=4
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_Status_0x243_CH]++;//Can_NR=5
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_RAW_0x212_CH]++;//Can_NR=6
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_Direction_0x235_CH]++;//Can_NR=7
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_WhlPulse_0x236_CH]++;//Can_NR=8
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_Advanced_0x234_CH]++;//Can_NR=9
                CAN1_noReceivedMessageTime[ALL_ABSESP_ESP_VLC_0x223_CH]++;//Can_NR=10
typedef union {
    vuint8_t R;
    struct { //ALL_ABSESP 接收报文故障
        vuint8_t ALL_ABSESP_ABS_WhlSpd_0x211: 1; //Can_NR=1
        vuint8_t ALL_ABSESP_ABS_Sts_0x221: 1; //Can_NR=2
        vuint8_t ALL_ABSESP_ESP_Pressure_0x241: 1; //Can_NR=3
        vuint8_t ALL_ABSESP_ESP_AxAy_0x242: 1; //Can_NR=4
        vuint8_t ALL_ABSESP_ESP_Status_0x243: 1; //Can_NR=5
        vuint8_t ALL_ABSESP_ESP_RAW_0x212: 1; //Can_NR=6
        vuint8_t ALL_ABSESP_ESP_Direction_0x235: 1; //Can_NR=7
        vuint8_t ALL_ABSESP_ESP_WhlPulse_0x236: 1; //Can_NR=8
        vuint8_t ALL_ABSESP_ESP_Advanced_0x234: 1; //Can_NR=9
        vuint8_t ALL_ABSESP_ESP_VLC_0x223: 1; //Can_NR=10
    } B;
} Error_CAN1_ALL_ABSESP_tag ;
extern Error_CAN1_ALL_ABSESP_tag Error_CAN1_ALL_ABSESP ;
typedef union {
    vuint8_t R;
    struct { //ALL_ABSESP 接收报文故障
        vuint8_t ALL_ABSESP_ABS_WhlSpd_0x211T: 1; //Can_NR=1
        vuint8_t ALL_ABSESP_ABS_Sts_0x221T: 1; //Can_NR=2
        vuint8_t ALL_ABSESP_ESP_Pressure_0x241T: 1; //Can_NR=3
        vuint8_t ALL_ABSESP_ESP_AxAy_0x242T: 1; //Can_NR=4
        vuint8_t ALL_ABSESP_ESP_Status_0x243T: 1; //Can_NR=5
        vuint8_t ALL_ABSESP_ESP_RAW_0x212T: 1; //Can_NR=6
        vuint8_t ALL_ABSESP_ESP_Direction_0x235T: 1; //Can_NR=7
        vuint8_t ALL_ABSESP_ESP_WhlPulse_0x236T: 1; //Can_NR=8
        vuint8_t ALL_ABSESP_ESP_Advanced_0x234T: 1; //Can_NR=9
        vuint8_t ALL_ABSESP_ESP_VLC_0x223T: 1; //Can_NR=10
    } B;
}  D00CTR_def_CAN1_ALL_ABSESP_tag ;
extern  D00CTR_def_CAN1_ALL_ABSESP_tag D00CTR_def_CAN1_ALL_ABSESP ;


//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VexABS_WhlSpdReLe12High4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 vuint8_t VexABS_WhlSpdReLe12Low8;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
 vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 vuint8_t Vc8Reserve_3_32_39;//4.7-->4.0
 vuint8_t VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
 vuint8_t VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 vuint8_t VexESP_YawRate12High4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
//*****************32 bits split line
 vuint8_t VexESP_YawRate12Low8;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
 vuint16_t Vc12Reserve_4_40_35;//4.3-->5.0
 vuint8_t VCAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

 vuint8_t VCAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_2_2;//0.2-->0.2
 vuint8_t VCAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_10_10;//1.2-->1.2
 vuint8_t VCAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t Vc9Reserve_5_24_16;//2.0-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc7Reserve_5_53_43;//5.3-->6.5
 vuint8_t VCAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VexESP_vxwWheelRawRL12High4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 vuint8_t VexESP_vxwWheelRawRL12Low8;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
 vuint16_t VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
//*****************32 bits split line
 vuint8_t Vc4Reserve_7_36_39;//4.7-->4.4
 vuint8_t VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

 vuint8_t VCAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint16_t Vc16Reserve_8_40_39;//4.7-->5.0
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

 vuint8_t Vc6Reserve_9_2_7;//0.7-->0.2
 vuint8_t VCAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_9_10_13;//1.5-->1.2
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc5Reserve_9_27_31;//3.7-->3.3
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 vuint8_t VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_10_24_26;//3.2-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc8Reserve_10_40_47;//5.7-->5.0
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================================================(分隔行)



//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VexABS_WhlSpdReLe12High4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 extern  vuint8_t VexABS_WhlSpdReLe12Low8;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
 extern  vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 extern  vuint8_t Vc8Reserve_3_32_39;//4.7-->4.0
 extern  vuint8_t VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
 extern  vuint8_t VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 extern  vuint8_t VexESP_YawRate12High4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
//*****************32 bits split line
 extern  vuint8_t VexESP_YawRate12Low8;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
 extern  vuint16_t Vc12Reserve_4_40_35;//4.3-->5.0
 extern  vuint8_t VCAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

 extern  vuint8_t VCAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_2_2;//0.2-->0.2
 extern  vuint8_t VCAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_10_10;//1.2-->1.2
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t Vc9Reserve_5_24_16;//2.0-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc7Reserve_5_53_43;//5.3-->6.5
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VexESP_vxwWheelRawRL12High4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 extern  vuint8_t VexESP_vxwWheelRawRL12Low8;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
 extern  vuint16_t VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
//*****************32 bits split line
 extern  vuint8_t Vc4Reserve_7_36_39;//4.7-->4.4
 extern  vuint8_t VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

 extern  vuint8_t VCAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint16_t Vc16Reserve_8_40_39;//4.7-->5.0
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

 extern  vuint8_t Vc6Reserve_9_2_7;//0.7-->0.2
 extern  vuint8_t VCAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_9_10_13;//1.5-->1.2
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc5Reserve_9_27_31;//3.7-->3.3
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 extern  vuint8_t VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_10_24_26;//3.2-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc8Reserve_10_40_47;//5.7-->5.0
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VexABS_WhlSpdReLe12;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 //vuint8_t VexABS_WhlSpdReLe12Low8:4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
 vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 vuint8_t Vc8Reserve_3_32_39;//4.7-->4.0
 vuint8_t VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
 vuint8_t VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 vuint16_t VexESP_YawRate12;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
//*****************32 bits split line
 //vuint8_t VexESP_YawRate12Low8:4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
 vuint16_t Vc12Reserve_4_40_35;//4.3-->5.0
 vuint8_t VCAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

 vuint8_t VCAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_2_2;//0.2-->0.2
 vuint8_t VCAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_10_10;//1.2-->1.2
 vuint8_t VCAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t Vc9Reserve_5_24_16;//2.0-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc7Reserve_5_53_43;//5.3-->6.5
 vuint8_t VCAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VexESP_vxwWheelRawRL12;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 //vuint8_t VexESP_vxwWheelRawRL12Low8:4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
 vuint16_t VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
//*****************32 bits split line
 vuint8_t Vc4Reserve_7_36_39;//4.7-->4.4
 vuint8_t VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

 vuint8_t VCAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint16_t Vc16Reserve_8_40_39;//4.7-->5.0
 vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

 vuint8_t Vc6Reserve_9_2_7;//0.7-->0.2
 vuint8_t VCAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_9_10_13;//1.5-->1.2
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc5Reserve_9_27_31;//3.7-->3.3
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

 vuint16_t VCAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 vuint8_t VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
 vuint8_t VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_10_24_26;//3.2-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc8Reserve_10_40_47;//5.7-->5.0
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VexABS_WhlSpdReLe12;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 //extern  vuint8_t VexABS_WhlSpdReLe12Low8:4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
 extern  vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 extern  vuint8_t Vc8Reserve_3_32_39;//4.7-->4.0
 extern  vuint8_t VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
 extern  vuint8_t VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
 extern  vuint16_t VexESP_YawRate12;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
//*****************32 bits split line
 //extern  vuint8_t VexESP_YawRate12Low8:4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
 extern  vuint16_t Vc12Reserve_4_40_35;//4.3-->5.0
 extern  vuint8_t VCAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

 extern  vuint8_t VCAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_2_2;//0.2-->0.2
 extern  vuint8_t VCAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_10_10;//1.2-->1.2
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t Vc9Reserve_5_24_16;//2.0-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc7Reserve_5_53_43;//5.3-->6.5
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VexESP_vxwWheelRawRL12;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
//*****************32 bits split line
 //extern  vuint8_t VexESP_vxwWheelRawRL12Low8:4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
 extern  vuint16_t VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
//*****************32 bits split line
 extern  vuint8_t Vc4Reserve_7_36_39;//4.7-->4.4
 extern  vuint8_t VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

 extern  vuint8_t VCAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint16_t Vc16Reserve_8_40_39;//4.7-->5.0
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

 extern  vuint8_t Vc6Reserve_9_2_7;//0.7-->0.2
 extern  vuint8_t VCAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_9_10_13;//1.5-->1.2
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc5Reserve_9_27_31;//3.7-->3.3
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

 extern  vuint16_t VCAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 extern  vuint8_t VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_10_24_26;//3.2-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc8Reserve_10_40_47;//5.7-->5.0
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
         //vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
         //vuint8_t VexABS_WhlSpdReLe12High4;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
        //*****************32 bits split line
        vuint8_t VexABS_WhlSpdReLe12Low8;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
         //vuint16_t VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
        vuint8_t VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_1_ABS_WhlSpd_0x211_DataBit_tag;
extern Vu8_ABSESP_1_ABS_WhlSpd_0x211_DataBit_tag Vu8_ABSESP_1_ABS_WhlSpd_0x211_DataBit;


//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
         //vuint16_t VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
         //vuint16_t VCAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
        vuint8_t VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_2_ABS_Sts_0x221_DataBit_tag;
extern Vu8_ABSESP_2_ABS_Sts_0x221_DataBit_tag Vu8_ABSESP_2_ABS_Sts_0x221_DataBit;


//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
         //vuint16_t VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
         //vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
        //*****************32 bits split line
         //vuint8_t Vc8Reserve_3_32_39;//4.7-->4.0
        vuint8_t VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
        vuint8_t VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_3_ESP_Pressure_0x241_DataBit_tag;
extern Vu8_ABSESP_3_ESP_Pressure_0x241_DataBit_tag Vu8_ABSESP_3_ESP_Pressure_0x241_DataBit;


//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
         //vuint16_t VCAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
         //vuint8_t VexESP_YawRate12High4;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
        //*****************32 bits split line
        vuint8_t VexESP_YawRate12Low8;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
         //vuint16_t Vc12Reserve_4_40_35;//4.3-->5.0
        vuint8_t VCAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_4_ESP_AxAy_0x242_DataBit_tag;
extern Vu8_ABSESP_4_ESP_AxAy_0x242_DataBit_tag Vu8_ABSESP_4_ESP_AxAy_0x242_DataBit;


//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_5_2_2;//0.2-->0.2
        vuint8_t VCAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_5_10_10;//1.2-->1.2
        vuint8_t VCAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
         //vuint16_t Vc9Reserve_5_24_16;//2.0-->3.0
        //*****************32 bits split line
        vuint8_t VCAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc7Reserve_5_53_43;//5.3-->6.5
        vuint8_t VCAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_5_ESP_Status_0x243_DataBit_tag;
extern Vu8_ABSESP_5_ESP_Status_0x243_DataBit_tag Vu8_ABSESP_5_ESP_Status_0x243_DataBit;


//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
         //vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
         //vuint8_t VexESP_vxwWheelRawRL12High4;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
        //*****************32 bits split line
        vuint8_t VexESP_vxwWheelRawRL12Low8;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
         //vuint16_t VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
        vuint8_t VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_6_ESP_RAW_0x212_DataBit_tag;
extern Vu8_ABSESP_6_ESP_RAW_0x212_DataBit_tag Vu8_ABSESP_6_ESP_RAW_0x212_DataBit;


//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
         //vuint16_t VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
        //*****************32 bits split line
        vuint8_t Vc4Reserve_7_36_39;//4.7-->4.4
        vuint8_t VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_7_ESP_Direction_0x235_DataBit_tag;
extern Vu8_ABSESP_7_ESP_Direction_0x235_DataBit_tag Vu8_ABSESP_7_ESP_Direction_0x235_DataBit;


//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint8_t VCAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint16_t Vc16Reserve_8_40_39;//4.7-->5.0
        vuint8_t VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_8_ESP_WhlPulse_0x236_DataBit_tag;
extern Vu8_ABSESP_8_ESP_WhlPulse_0x236_DataBit_tag Vu8_ABSESP_8_ESP_WhlPulse_0x236_DataBit;


//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t Vc6Reserve_9_2_7;//0.7-->0.2
        vuint8_t VCAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc4Reserve_9_10_13;//1.5-->1.2
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc5Reserve_9_27_31;//3.7-->3.3
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
         //vuint16_t VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_9_ESP_Advanced_0x234_DataBit_tag;
extern Vu8_ABSESP_9_ESP_Advanced_0x234_DataBit_tag Vu8_ABSESP_9_ESP_Advanced_0x234_DataBit;


//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
         //vuint8_t VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
        vuint8_t VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc3Reserve_10_24_26;//3.2-->3.0
        //*****************32 bits split line
        vuint8_t VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
         //vuint8_t Vc8Reserve_10_40_47;//5.7-->5.0
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_ABSESP_10_ESP_VLC_0x223_DataBit_tag;
extern Vu8_ABSESP_10_ESP_VLC_0x223_DataBit_tag Vu8_ABSESP_10_ESP_VLC_0x223_DataBit;

//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_WhlSpd_0x211_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_WhlSpd_0x211_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_WhlSpd_0x211 = 1 ;  //部件具体报文CAN接收无信号
                exABS_WhlSpdReLe.R= CAN_ALL_ABSESP_u12ABS_WhlSpdReLe_min;//3.7-->4.4 名称：ABS_WhlSpdReLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B.exABS_WhlSpdReLe12High4=exABS_WhlSpdReLe.B.exABS_WhlSpdReLe12High4;
                CAN_ALL_FRVar_ABSESP.B.exABS_WhlSpdReLe12Low8=exABS_WhlSpdReLe.B.exABS_WhlSpdReLe12Low8;
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_WhlSpd_0x211_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uABS_WhlSpdFrntLe= CAN_ALL_ABSESP_uABS_WhlSpdFrntLe_min;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi= CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi_min;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdReRi= CAN_ALL_ABSESP_u12ABS_WhlSpdReRi_min;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus= CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus_min;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus= CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus_min;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus= CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus_min;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus= CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus_min;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x211= CAN_ALL_ABSESP_u1RollingCounter_0x211_min;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x211= CAN_ALL_ABSESP_u4Checksum_0x211_min;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uABS_WhlSpdFrntLe=VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi=VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B.exABS_WhlSpdReLe12High4=VexexABS_WhlSpdReLe12High4;
                CAN_ALL_FRVar_ABSESP.B.exABS_WhlSpdReLe12Low8=VexexABS_WhlSpdReLe12Low8;
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdReRi=VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus=VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus=VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus=VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus=VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x211=VCAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x211=VCAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uABS_WhlSpdFrntLe=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uABS_WhlSpdFrntLe;//0.7-->1.4 名称：ABS_WhlSpdFrntLe 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdFrntRi;//1.3-->2.0 名称：ABS_WhlSpdFrntRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                VexexABS_WhlSpdReLe12High4 = CAN_ALL_FRVar_ABSESP.B.exABS_WhlSpdReLe12High4;
                VexexABS_WhlSpdReLe12Low8= CAN_ALL_FRVar_ABSESP.B.exABS_WhlSpdReLe12Low8;
                VCAN_ALL_ABSESP_u12ABS_WhlSpdReRi=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdReRi;//4.3-->5.0 名称：ABS_WhlSpdReRi 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                VCAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_WhlSpdFrntLeStatus;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdFrntRiStatus;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdReLeStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlSpdReRiStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlSpdReRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1RollingCounter_0x211=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x211;//6.3-->6.0 名称：RollingCounter_0x211 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x211=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x211;//7.7-->7.0 名称：Checksum_0x211 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+7] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+6] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+5] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+4] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+3] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+2] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0] =Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data0Bit.R;

                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 7];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 6];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 5];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 4];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 3];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 2];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 1];
                Vu8_ABSESP_1_ABS_WhlSpd_0x211_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_WhlSpd_0x211_FR + 0];



//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ABS_Sts_0x221_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ABS_Sts_0x221_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ABS_Sts_0x221_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ABS_Sts_0x221_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_Sts_0x221_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_Sts_0x221_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_Sts_0x221 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ABS_Sts_0x221_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ABS_Sts_0x221_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ABS_Sts_0x221_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ABS_Sts_0x221_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_Sts_0x221_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uABS_WhlMilgFrntLe= CAN_ALL_ABSESP_uABS_WhlMilgFrntLe_min;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi= CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi_min;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u16ABS_AbsCtrlActv= CAN_ALL_ABSESP_u16ABS_AbsCtrlActv_min;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_AbsFlgFlt= CAN_ALL_ABSESP_u1ABS_AbsFlgFlt_min;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_EbdFlgFlt= CAN_ALL_ABSESP_u1ABS_EbdFlgFlt_min;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_VehSpdDirection= CAN_ALL_ABSESP_u1ABS_VehSpdDirection_min;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_VehSpdLgt= CAN_ALL_ABSESP_u1ABS_VehSpdLgt_min;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus= CAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus_min;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus= CAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus_min;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus= CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus_min;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x221= CAN_ALL_ABSESP_u1RollingCounter_0x221_min;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x221= CAN_ALL_ABSESP_u4Checksum_0x221_min;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uABS_WhlMilgFrntLe=VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi=VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ABS_AbsCtrlActv=VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_AbsFlgFlt=VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_EbdFlgFlt=VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_VehSpdDirection=VCAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_VehSpdLgt=VCAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus=VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus=VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus=VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x221=VCAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x221=VCAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uABS_WhlMilgFrntLe=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uABS_WhlMilgFrntLe;//0.7-->1.0 名称：ABS_WhlMilgFrntLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ABS_WhlMilgFrntRi;//2.7-->3.0 名称：ABS_WhlMilgFrntRi 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u16ABS_AbsCtrlActv=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ABS_AbsCtrlActv;//4.7-->4.7 1 "Active" 0 "Not active" 名称：ABS_AbsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_AbsFlgFlt=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_AbsFlgFlt;//4.6-->4.6 1 "Failure" 0 "No failure" 名称：ABS_AbsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_EbdFlgFlt=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_EbdFlgFlt;//4.5-->4.5 1 "Failure" 0 "No failure" 名称：ABS_EbdFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_VehSpdDirection=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_VehSpdDirection;//4.4-->4.4 1 "Backward" 0 "Forward" 名称：ABS_VehSpdDirection 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_VehSpdLgt=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_VehSpdLgt;//4.3-->5.0 名称：ABS_VehSpdLgt 位数：12bit, logical min-max：0~230.34375 physical min-max：0x000~0xFFF 精度：0.05625 偏移量：0 单位：kph 
                VCAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ABS_VehSpdLgtStatus;//6.7-->6.6 2 "Init" 1 "Invalid" 0 "Valid" 名称：ABS_VehSpdLgtStatus 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ABS_WhlMilgFrntRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ABS_WhlMilgFrntLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ABS_WhlMilgFrntLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1RollingCounter_0x221=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x221;//6.3-->6.0 名称：RollingCounter_0x221 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x221=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x221;//7.7-->7.0 名称：Checksum_0x221 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+7] =Vu8_ABSESP_2_ABS_Sts_0x221_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+6] =Vu8_ABSESP_2_ABS_Sts_0x221_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+5] =Vu8_ABSESP_2_ABS_Sts_0x221_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+4] =Vu8_ABSESP_2_ABS_Sts_0x221_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+3] =Vu8_ABSESP_2_ABS_Sts_0x221_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+2] =Vu8_ABSESP_2_ABS_Sts_0x221_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+1] =Vu8_ABSESP_2_ABS_Sts_0x221_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ABS_Sts_0x221_FR+0] =Vu8_ABSESP_2_ABS_Sts_0x221_Data0Bit.R;

                Vu8_ABSESP_2_ABS_Sts_0x221_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 7];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 6];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 5];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 4];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 3];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 2];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 1];
                Vu8_ABSESP_2_ABS_Sts_0x221_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ABS_Sts_0x221_FR + 0];



//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Pressure_0x241_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Pressure_0x241_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Pressure_0x241_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Pressure_0x241_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Pressure_0x241_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Pressure_0x241_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Pressure_0x241 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Pressure_0x241_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Pressure_0x241_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Pressure_0x241_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Pressure_0x241_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Pressure_0x241_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure= CAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure_min;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp= CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp_min;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
                CAN_ALL_FRAMES_ABSESP.B.c8Reserve_3_24_31= CAN_ALL_ABSESP_c8Reserve_3_24_31_min;//3.7-->3.0
                CAN_ALL_FRAMES_ABSESP.B.c8Reserve_3_32_39= CAN_ALL_ABSESP_c8Reserve_3_32_39_min;//4.7-->4.0
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder= CAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder_min;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali= CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali_min;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp= CAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp_min;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta= CAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta_min;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x241= CAN_ALL_ABSESP_u1Rolling_counter_0x241_min;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x241= CAN_ALL_ABSESP_u4Checksum_0x241_min;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure=VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp=VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
                CAN_ALL_FRVar_ABSESP.B.c8Reserve_3_24_31=Vc8Reserve_3_24_31;//3.7-->3.0
                CAN_ALL_FRVar_ABSESP.B.c8Reserve_3_32_39=Vc8Reserve_3_32_39;//4.7-->4.0
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder=VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali=VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp=VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta=VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x241=VCAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x241=VCAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_Master_Cylinder_Pressure;//0.7-->1.4 名称：ESP_Master_Cylinder_Pressure 位数：12bit, logical min-max：0~255.9375 physical min-max：0x000~0xFFF 精度：0.0625 偏移量：0 单位：bar 
                VCAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_TrfCaseTqLmtdByEsp;//1.3-->2.0 名称：ESP_TrfCaseTqLmtdByEsp 位数：12bit, logical min-max：0~4095 physical min-max：0x000~0xFFF 精度：1 偏移量：0 单位：Nm 
                Vc8Reserve_3_24_31=CAN_ALL_FRVar_ABSESP.B.c8Reserve_3_24_31;//3.7-->3.0
                Vc8Reserve_3_32_39=CAN_ALL_FRVar_ABSESP.B.c8Reserve_3_32_39;//4.7-->4.0
                VCAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_PresOffsetMasterCylinder;//5.7-->5.3 31 "Invalid" 名称：ESP_PresOffsetMasterCylinder 位数：5bit, logical min-max：-15~15 physical min-max：0x000~0x1E 精度：1 偏移量：-15 单位：bar 
                VCAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u5ESP_PresOffsetMasterCylinderVali;//5.2-->5.2 1 "Invalid" 0 "Valid" 名称：ESP_PresOffsetMasterCylinderVali 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TrfCaseModReqdByEsp;//5.1-->5.0 3 "Failure" 2 "Torque upper limit request" 1 "Fast open request" 0 "No request" 名称：ESP_TrfCaseModReqdByEsp 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_Master_Cylinder_Pressure_Sta;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_Master_Cylinder_Pressure_Sta 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1Rolling_counter_0x241=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x241;//6.3-->6.0 名称：Rolling_counter_0x241 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x241=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x241;//7.7-->7.0 名称：Checksum_0x241 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+7] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+6] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+5] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+4] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+3] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+2] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+1] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Pressure_0x241_FR+0] =Vu8_ABSESP_3_ESP_Pressure_0x241_Data0Bit.R;

                Vu8_ABSESP_3_ESP_Pressure_0x241_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 7];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 6];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 5];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 4];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 3];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 2];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 1];
                Vu8_ABSESP_3_ESP_Pressure_0x241_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Pressure_0x241_FR + 0];



//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_AxAy_0x242_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_AxAy_0x242_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_AxAy_0x242_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_AxAy_0x242_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_AxAy_0x242_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_AxAy_0x242_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_AxAy_0x242 = 1 ;  //部件具体报文CAN接收无信号
                exESP_YawRate.R= CAN_ALL_ABSESP_u12ESP_YawRate_min;//3.7-->4.4 名称：ESP_YawRate 位数：12bit, logical min-max：-2.0942132~2.0942132 physical min-max：0x000~0x7AC 精度：0.0021326 偏移量：-982 单位：rad_s 
                CAN_ALL_FRVar_ABSESP.B.exESP_YawRate12High4=exESP_YawRate.B.exESP_YawRate12High4;
                CAN_ALL_FRVar_ABSESP.B.exESP_YawRate12Low8=exESP_YawRate.B.exESP_YawRate12Low8;
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_AxAy_0x242_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_AxAy_0x242_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_AxAy_0x242_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_AxAy_0x242_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_AxAy_0x242_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_Algt= CAN_ALL_ABSESP_uESP_Algt_min;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_Alat= CAN_ALL_ABSESP_u12ESP_Alat_min;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
                CAN_ALL_FRAMES_ABSESP.B.c12Reserve_4_40_35= CAN_ALL_ABSESP_c12Reserve_4_40_35_min;//4.3-->5.0
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_AlgtStatus= CAN_ALL_ABSESP_u12ESP_AlgtStatus_min;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AlatStatus= CAN_ALL_ABSESP_u1ESP_AlatStatus_min;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_YawRateStatus= CAN_ALL_ABSESP_u1ESP_YawRateStatus_min;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x242= CAN_ALL_ABSESP_u1Rolling_counter_0x242_min;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x242= CAN_ALL_ABSESP_u4Checksum_0x242_min;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_Algt=VCAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_Alat=VCAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
                CAN_ALL_FRVar_ABSESP.B.exESP_YawRate12High4=VexexESP_YawRate12High4;
                CAN_ALL_FRVar_ABSESP.B.exESP_YawRate12Low8=VexexESP_YawRate12Low8;
                CAN_ALL_FRVar_ABSESP.B.c12Reserve_4_40_35=Vc12Reserve_4_40_35;//4.3-->5.0
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_AlgtStatus=VCAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AlatStatus=VCAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_YawRateStatus=VCAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x242=VCAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x242=VCAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_Algt=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_Algt;//0.7-->1.4 名称：ESP_Algt 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
                VCAN_ALL_ABSESP_u12ESP_Alat=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_Alat;//1.3-->2.0 名称：ESP_Alat 位数：12bit, logical min-max：-21.593092~21.593092 physical min-max：0x000~0x638 精度：0.027127 偏移量：-796 单位：m_s^2 
                VexexESP_YawRate12High4 = CAN_ALL_FRVar_ABSESP.B.exESP_YawRate12High4;
                VexexESP_YawRate12Low8= CAN_ALL_FRVar_ABSESP.B.exESP_YawRate12Low8;
                Vc12Reserve_4_40_35=CAN_ALL_FRVar_ABSESP.B.c12Reserve_4_40_35;//4.3-->5.0
                VCAN_ALL_ABSESP_u12ESP_AlgtStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_AlgtStatus;//6.7-->6.7 1 "Fault" 0 "OK" 名称：ESP_AlgtStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AlatStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AlatStatus;//6.6-->6.6 1 "Fault" 0 "OK" 名称：ESP_AlatStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_YawRateStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_YawRateStatus;//6.5-->6.5 1 "Fault" 0 "OK" 名称：ESP_YawRateStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1Rolling_counter_0x242=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x242;//6.3-->6.0 名称：Rolling_counter_0x242 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x242=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x242;//7.7-->7.0 名称：Checksum_0x242 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+7] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+6] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+5] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+4] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+3] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+2] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+1] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_AxAy_0x242_FR+0] =Vu8_ABSESP_4_ESP_AxAy_0x242_Data0Bit.R;

                Vu8_ABSESP_4_ESP_AxAy_0x242_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 7];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 6];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 5];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 4];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 3];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 2];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 1];
                Vu8_ABSESP_4_ESP_AxAy_0x242_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_AxAy_0x242_FR + 0];



//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Status_0x243_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Status_0x243_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Status_0x243_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Status_0x243_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Status_0x243_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Status_0x243_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Status_0x243 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Status_0x243_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Status_0x243_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Status_0x243_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Status_0x243_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Status_0x243_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_EPBErrorStatus= CAN_ALL_ABSESP_uESP_EPBErrorStatus_min;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_EPBStatus= CAN_ALL_ABSESP_u2ESP_EPBStatus_min;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c1Reserve_5_2_2= CAN_ALL_ABSESP_c1Reserve_5_2_2_min;//0.2-->0.2
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u3ESP_HHCActive= CAN_ALL_ABSESP_u3ESP_HHCActive_min;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_HHCAvailable= CAN_ALL_ABSESP_u1ESP_HHCAvailable_min;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CdpActive= CAN_ALL_ABSESP_u1ESP_CdpActive_min;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CdpAvailable= CAN_ALL_ABSESP_u1ESP_CdpAvailable_min;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController= CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController_min;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_HDCActive= CAN_ALL_ABSESP_u1ESP_HDCActive_min;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c1Reserve_5_10_10= CAN_ALL_ABSESP_c1Reserve_5_10_10_min;//1.2-->1.2
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_HDCAvailable= CAN_ALL_ABSESP_u2ESP_HDCAvailable_min;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CCSwitchOff= CAN_ALL_ABSESP_u1ESP_CCSwitchOff_min;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhAvabliable= CAN_ALL_ABSESP_u1ESP_AvhAvabliable_min;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhStandby= CAN_ALL_ABSESP_u1ESP_AvhStandby_min;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhActive= CAN_ALL_ABSESP_u1ESP_AvhActive_min;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AVHWarningMessage= CAN_ALL_ABSESP_u1ESP_AVHWarningMessage_min;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1= CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1_min;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2= CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2_min;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3= CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3_min;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c9Reserve_5_24_16= CAN_ALL_ABSESP_c9Reserve_5_24_16_min;//2.0-->3.0
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_Driving_mode_req= CAN_ALL_ABSESP_u1ESP_Driving_mode_req_min;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4ESP_EspCtrlActv= CAN_ALL_ABSESP_u4ESP_EspCtrlActv_min;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TcsCtrlActv= CAN_ALL_ABSESP_u1ESP_TcsCtrlActv_min;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TcsFlgFlt= CAN_ALL_ABSESP_u1ESP_TcsFlgFlt_min;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VdcFlgFlt= CAN_ALL_ABSESP_u1ESP_VdcFlgFlt_min;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_GearShiftPrevn= CAN_ALL_ABSESP_u1ESP_GearShiftPrevn_min;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_EspEnableSts= CAN_ALL_ABSESP_u2ESP_EspEnableSts_min;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ESPInfoLamp= CAN_ALL_ABSESP_u1ESP_ESPInfoLamp_min;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c7Reserve_5_53_43= CAN_ALL_ABSESP_c7Reserve_5_53_43_min;//5.3-->6.5
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1RollerBenchModeSts= CAN_ALL_ABSESP_u1RollerBenchModeSts_min;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x243= CAN_ALL_ABSESP_u1RollingCounter_0x243_min;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x243= CAN_ALL_ABSESP_u4Checksum_0x243_min;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_EPBErrorStatus=VCAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_EPBStatus=VCAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c1Reserve_5_2_2=Vc1Reserve_5_2_2;//0.2-->0.2
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u3ESP_HHCActive=VCAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_HHCAvailable=VCAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CdpActive=VCAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CdpAvailable=VCAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController=VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_HDCActive=VCAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c1Reserve_5_10_10=Vc1Reserve_5_10_10;//1.2-->1.2
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_HDCAvailable=VCAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CCSwitchOff=VCAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhAvabliable=VCAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhStandby=VCAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhActive=VCAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AVHWarningMessage=VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1=VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2=VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3=VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c9Reserve_5_24_16=Vc9Reserve_5_24_16;//2.0-->3.0
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_Driving_mode_req=VCAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4ESP_EspCtrlActv=VCAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TcsCtrlActv=VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TcsFlgFlt=VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VdcFlgFlt=VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_GearShiftPrevn=VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_EspEnableSts=VCAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ESPInfoLamp=VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c7Reserve_5_53_43=Vc7Reserve_5_53_43;//5.3-->6.5
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollerBenchModeSts=VCAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x243=VCAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x243=VCAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_EPBErrorStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_EPBErrorStatus;//0.7-->0.6 3 "Diagnosis" 2 "error" 1 "no error" 0 "undefined" 名称：ESP_EPBErrorStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_EPBStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_EPBStatus;//0.5-->0.3 5 "Error" 4 "Unknown" 3 "Applying" 2 "Releasingr" 1 "Applied" 0 "Released" 名称：ESP_EPBStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                Vc1Reserve_5_2_2=CAN_ALL_FRVar_ABSESP.B.c1Reserve_5_2_2;//0.2-->0.2
                VCAN_ALL_ABSESP_u3ESP_HHCActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u3ESP_HHCActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_HHCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_HHCAvailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_HHCAvailable;//0.0-->0.0 1 "not available" 0 "available" 名称：ESP_HHCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_CdpActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CdpActive;//1.7-->1.7 1 "active" 0 "not active" 名称：ESP_CdpActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_CdpAvailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CdpAvailable;//1.6-->1.6 1 "not available" 0 "available" 名称：ESP_CdpAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_LdmBLC_BLRequestController;//1.5-->1.5 1 "illuminate" 0 "not illuminate" 名称：ESP_LdmBLC_BLRequestController 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_HDCActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_HDCActive;//1.4-->1.3 2 "On not active braking" 1 "On active braking" 0 "OFF" 名称：ESP_HDCActive 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                Vc1Reserve_5_10_10=CAN_ALL_FRVar_ABSESP.B.c1Reserve_5_10_10;//1.2-->1.2
                VCAN_ALL_ABSESP_u2ESP_HDCAvailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_HDCAvailable;//1.1-->1.1 1 "not available" 0 "available" 名称：ESP_HDCAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_CCSwitchOff=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CCSwitchOff;//1.0-->1.0 1 "switch off cruise control" 0 "Not switch off cruise control" 名称：ESP_CCSwitchOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AvhAvabliable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhAvabliable;//2.7-->2.7 1 "not available" 0 "available" 名称：ESP_AvhAvabliable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AvhStandby=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhStandby;//2.6-->2.6 1 "standby" 0 "not standby" 名称：ESP_AvhStandby 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AvhActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AvhActive;//2.5-->2.5 1 "Active" 0 "Inactive" 名称：ESP_AvhActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AVHWarningMessage=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AVHWarningMessage;//2.4-->2.4 1 "Please close the door or seatblet Then pressure the AVH button" 0 "no warning" 名称：ESP_AVHWarningMessage 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage1=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage1;//2.3-->2.3 1 "no Brake pedal pressed and release the EPB" 0 "no display" 名称：ESP_EPBWarningMessage1 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage2=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage2;//2.2-->2.2 1 "EPB driverOFF without seatblet or driver Door" 0 "no display" 名称：ESP_EPBWarningMessage2 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_EPBWarningMessage3=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_EPBWarningMessage3;//2.1-->2.1 1 "when Applied the EPB the slope of vehicle is more than 20% for PK 30% for SUV" 0 "no display" 名称：ESP_EPBWarningMessage3 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc9Reserve_5_24_16=CAN_ALL_FRVar_ABSESP.B.c9Reserve_5_24_16;//2.0-->3.0
                VCAN_ALL_ABSESP_u1ESP_Driving_mode_req=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_Driving_mode_req;//4.7-->4.4 15 "Invalid" 14 "ATS shift failure" 13 "ATS shifting" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "No used" 1 "Snow" 0 "Auto" 名称：ESP_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4ESP_EspCtrlActv=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4ESP_EspCtrlActv;//4.3-->4.3 1 "Active" 0 "Not active" 名称：ESP_EspCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_TcsCtrlActv=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TcsCtrlActv;//4.2-->4.2 1 "Active" 0 "Not active" 名称：ESP_TcsCtrlActv 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_TcsFlgFlt=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_TcsFlgFlt;//4.1-->4.1 1 "Failure" 0 "No failure" 名称：ESP_TcsFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_VdcFlgFlt=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VdcFlgFlt;//4.0-->4.0 1 "Failure" 0 "No failure" 名称：ESP_VdcFlgFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_GearShiftPrevn=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_GearShiftPrevn;//5.7-->5.6 3 "Inhibit all shifts" 2 "Inhibit down shift" 1 "Inhibit upshift" 0 "No request" 名称：ESP_GearShiftPrevn 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_EspEnableSts=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_EspEnableSts;//5.5-->5.5 1 "ESP enabled" 0 "ESP disabled" 名称：ESP_EspEnableSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_ESPInfoLamp=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ESPInfoLamp;//5.4-->5.4 1 "On" 0 "Off" 名称：ESP_ESPInfoLamp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc7Reserve_5_53_43=CAN_ALL_FRVar_ABSESP.B.c7Reserve_5_53_43;//5.3-->6.5
                VCAN_ALL_ABSESP_u1RollerBenchModeSts=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollerBenchModeSts;//6.4-->6.4 1 "RollerBench Mode Active" 0 "RollerBench Mode Inactive" 名称：RollerBenchModeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1RollingCounter_0x243=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_0x243;//6.3-->6.0 名称：RollingCounter_0x243 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x243=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x243;//7.7-->7.0 名称：Checksum_0x243 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+7] =Vu8_ABSESP_5_ESP_Status_0x243_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+6] =Vu8_ABSESP_5_ESP_Status_0x243_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+5] =Vu8_ABSESP_5_ESP_Status_0x243_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+4] =Vu8_ABSESP_5_ESP_Status_0x243_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+3] =Vu8_ABSESP_5_ESP_Status_0x243_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+2] =Vu8_ABSESP_5_ESP_Status_0x243_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+1] =Vu8_ABSESP_5_ESP_Status_0x243_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Status_0x243_FR+0] =Vu8_ABSESP_5_ESP_Status_0x243_Data0Bit.R;

                Vu8_ABSESP_5_ESP_Status_0x243_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 7];
                Vu8_ABSESP_5_ESP_Status_0x243_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 6];
                Vu8_ABSESP_5_ESP_Status_0x243_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 5];
                Vu8_ABSESP_5_ESP_Status_0x243_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 4];
                Vu8_ABSESP_5_ESP_Status_0x243_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 3];
                Vu8_ABSESP_5_ESP_Status_0x243_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 2];
                Vu8_ABSESP_5_ESP_Status_0x243_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 1];
                Vu8_ABSESP_5_ESP_Status_0x243_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Status_0x243_FR + 0];



//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_RAW_0x212_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_RAW_0x212_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_RAW_0x212_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_RAW_0x212_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_RAW_0x212_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_RAW_0x212_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_RAW_0x212 = 1 ;  //部件具体报文CAN接收无信号
                exESP_vxwWheelRawRL.R= CAN_ALL_ABSESP_u12ESP_vxwWheelRawRL_min;//3.7-->4.4 名称：ESP_vxwWheelRawRL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B.exESP_vxwWheelRawRL12High4=exESP_vxwWheelRawRL.B.exESP_vxwWheelRawRL12High4;
                CAN_ALL_FRVar_ABSESP.B.exESP_vxwWheelRawRL12Low8=exESP_vxwWheelRawRL.B.exESP_vxwWheelRawRL12Low8;
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_RAW_0x212_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_RAW_0x212_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_RAW_0x212_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_RAW_0x212_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_RAW_0x212_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_vxwWheelRawFL= CAN_ALL_ABSESP_uESP_vxwWheelRawFL_min;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR= CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR_min;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR= CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR_min;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelFLValid= CAN_ALL_ABSESP_u12ESP_vxwWheelFLValid_min;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid= CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid_min;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid= CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid_min;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid= CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid_min;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x212= CAN_ALL_ABSESP_u1Rolling_counter_0x212_min;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x212= CAN_ALL_ABSESP_u4Checksum_0x212_min;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_vxwWheelRawFL=VCAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR=VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B.exESP_vxwWheelRawRL12High4=VexexESP_vxwWheelRawRL12High4;
                CAN_ALL_FRVar_ABSESP.B.exESP_vxwWheelRawRL12Low8=VexexESP_vxwWheelRawRL12Low8;
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR=VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelFLValid=VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid=VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid=VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid=VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x212=VCAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x212=VCAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_vxwWheelRawFL=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_vxwWheelRawFL;//0.7-->1.4 名称：ESP_vxwWheelRawFL 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                VCAN_ALL_ABSESP_u12ESP_vxwWheelRawFR=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelRawFR;//1.3-->2.0 名称：ESP_vxwWheelRawFR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                VexexESP_vxwWheelRawRL12High4 = CAN_ALL_FRVar_ABSESP.B.exESP_vxwWheelRawRL12High4;
                VexexESP_vxwWheelRawRL12Low8= CAN_ALL_FRVar_ABSESP.B.exESP_vxwWheelRawRL12Low8;
                VCAN_ALL_ABSESP_u12ESP_vxwWheelRawRR=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelRawRR;//4.3-->5.0 名称：ESP_vxwWheelRawRR 位数：12bit, logical min-max：0~230.2875 physical min-max：0x000~0xFFE 精度：0.05625 偏移量：0 单位：kph 
                VCAN_ALL_ABSESP_u12ESP_vxwWheelFLValid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u12ESP_vxwWheelFLValid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_vxwWheelFRValid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelFRValid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelFRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_vxwWheelRLValid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelRLValid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRLValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_vxwWheelRRValid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_vxwWheelRRValid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_vxwWheelRRValid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1Rolling_counter_0x212=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x212;//6.3-->6.0 名称：Rolling_counter_0x212 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x212=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x212;//7.7-->7.0 名称：Checksum_0x212 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+7] =Vu8_ABSESP_6_ESP_RAW_0x212_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+6] =Vu8_ABSESP_6_ESP_RAW_0x212_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+5] =Vu8_ABSESP_6_ESP_RAW_0x212_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+4] =Vu8_ABSESP_6_ESP_RAW_0x212_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+3] =Vu8_ABSESP_6_ESP_RAW_0x212_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+2] =Vu8_ABSESP_6_ESP_RAW_0x212_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+1] =Vu8_ABSESP_6_ESP_RAW_0x212_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_RAW_0x212_FR+0] =Vu8_ABSESP_6_ESP_RAW_0x212_Data0Bit.R;

                Vu8_ABSESP_6_ESP_RAW_0x212_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 7];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 6];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 5];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 4];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 3];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 2];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 1];
                Vu8_ABSESP_6_ESP_RAW_0x212_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_RAW_0x212_FR + 0];



//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Direction_0x235_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Direction_0x235_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Direction_0x235_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Direction_0x235_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Direction_0x235_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Direction_0x235_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Direction_0x235 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Direction_0x235_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Direction_0x235_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Direction_0x235_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Direction_0x235_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Direction_0x235_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_WhlMilgRearLe= CAN_ALL_ABSESP_uESP_WhlMilgRearLe_min;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe= CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe_min;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
                CAN_ALL_FRAMES_ABSESP.B.c4Reserve_7_36_39= CAN_ALL_ABSESP_c4Reserve_7_36_39_min;//4.7-->4.4
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus= CAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus_min;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus= CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus_min;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus= CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus_min;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus= CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus_min;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection= CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection_min;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection= CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection_min;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection= CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection_min;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection= CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection_min;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_VehicleStandstill= CAN_ALL_ABSESP_u2ESP_VehicleStandstill_min;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus= CAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus_min;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus= CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus_min;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x235= CAN_ALL_ABSESP_u1Rolling_counter_0x235_min;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x235= CAN_ALL_ABSESP_u4Checksum_0x235_min;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_WhlMilgRearLe=VCAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe=VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
                CAN_ALL_FRVar_ABSESP.B.c4Reserve_7_36_39=Vc4Reserve_7_36_39;//4.7-->4.4
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus=VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus=VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus=VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus=VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection=VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection=VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection=VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection=VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_VehicleStandstill=VCAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus=VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus=VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x235=VCAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x235=VCAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_WhlMilgRearLe=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_WhlMilgRearLe;//0.7-->1.0 名称：ESP_WhlMilgRearLe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
                VCAN_ALL_ABSESP_u16ESP_WhlMilgRearRe=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ESP_WhlMilgRearRe;//2.7-->3.0 名称：ESP_WhlMilgRearRe 位数：16bit, logical min-max：0~65535 physical min-max：0x000~0xFFFF 精度：1 偏移量：0 单位：edge 
                Vc4Reserve_7_36_39=CAN_ALL_FRVar_ABSESP.B.c4Reserve_7_36_39;//4.7-->4.4
                VCAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ESP_RLWheelDriveDirStatus;//4.3-->4.3 1 "Invalid" 0 "Valid" 名称：ESP_RLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_RRWheelDriveDirStatus;//4.2-->4.2 1 "Invalid" 0 "Valid" 名称：ESP_RRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirStatus;//4.1-->4.1 1 "Invalid" 0 "Valid" 名称：ESP_FLWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FRWheelDriveDirStatus;//4.0-->4.0 1 "Invalid" 0 "Valid" 名称：ESP_FRWheelDriveDirStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_FLWheelDriveDirection;//5.7-->5.6 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_FRWheelDriveDirection;//5.5-->5.4 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_FRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_RLWheelDriveDirection;//5.3-->5.2 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RLWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_RRWheelDriveDirection;//5.1-->5.0 3 "Backward" 2 "Forward" 1 "Standstill" 0 "undefined" 名称：ESP_RRWheelDriveDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_VehicleStandstill=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_VehicleStandstill;//6.7-->6.6 2 "Invalid" 1 "standstill" 0 "not standstill" 名称：ESP_VehicleStandstill 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_WhlMilgReaRRiStatus;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRRiStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WhlMilgReaRLeStatus;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WhlMilgReaRLeStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1Rolling_counter_0x235=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x235;//6.3-->6.0 名称：Rolling_counter_0x235 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x235=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x235;//7.7-->7.0 名称：Checksum_0x235 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+7] =Vu8_ABSESP_7_ESP_Direction_0x235_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+6] =Vu8_ABSESP_7_ESP_Direction_0x235_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+5] =Vu8_ABSESP_7_ESP_Direction_0x235_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+4] =Vu8_ABSESP_7_ESP_Direction_0x235_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+3] =Vu8_ABSESP_7_ESP_Direction_0x235_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+2] =Vu8_ABSESP_7_ESP_Direction_0x235_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+1] =Vu8_ABSESP_7_ESP_Direction_0x235_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Direction_0x235_FR+0] =Vu8_ABSESP_7_ESP_Direction_0x235_Data0Bit.R;

                Vu8_ABSESP_7_ESP_Direction_0x235_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 7];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 6];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 5];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 4];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 3];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 2];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 1];
                Vu8_ABSESP_7_ESP_Direction_0x235_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Direction_0x235_FR + 0];



//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_WhlPulse_0x236_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_WhlPulse_0x236_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_WhlPulse_0x236 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_WhlPulse_0x236_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_WheelPulse_FL= CAN_ALL_ABSESP_uESP_WheelPulse_FL_min;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_FR= CAN_ALL_ABSESP_u8ESP_WheelPulse_FR_min;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_RL= CAN_ALL_ABSESP_u8ESP_WheelPulse_RL_min;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_RR= CAN_ALL_ABSESP_u8ESP_WheelPulse_RR_min;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c16Reserve_8_40_39= CAN_ALL_ABSESP_c16Reserve_8_40_39_min;//4.7-->5.0
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid= CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid_min;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid= CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid_min;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid= CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid_min;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid= CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid_min;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_ESP_0x236= CAN_ALL_ABSESP_u1RollingCounter_ESP_0x236_min;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_ESP_0x236= CAN_ALL_ABSESP_u4Checksum_ESP_0x236_min;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_WheelPulse_FL=VCAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_FR=VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_RL=VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_RR=VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c16Reserve_8_40_39=Vc16Reserve_8_40_39;//4.7-->5.0
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid=VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid=VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid=VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid=VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_ESP_0x236=VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_ESP_0x236=VCAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_WheelPulse_FL=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_WheelPulse_FL;//0.7-->0.0 名称：ESP_WheelPulse_FL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u8ESP_WheelPulse_FR=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_FR;//1.7-->1.0 名称：ESP_WheelPulse_FR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u8ESP_WheelPulse_RL=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_RL;//2.7-->2.0 名称：ESP_WheelPulse_RL 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u8ESP_WheelPulse_RR=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_RR;//3.7-->3.0 名称：ESP_WheelPulse_RR 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位： 
                Vc16Reserve_8_40_39=CAN_ALL_FRVar_ABSESP.B.c16Reserve_8_40_39;//4.7-->5.0
                VCAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_WheelPulse_FL_Valid;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_FR_Valid;//6.6-->6.6 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_FR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_RL_Valid;//6.5-->6.5 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RL_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_WheelPulse_RR_Valid;//6.4-->6.4 1 "Invalid" 0 "Valid" 名称：ESP_WheelPulse_RR_Valid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1RollingCounter_ESP_0x236=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1RollingCounter_ESP_0x236;//6.3-->6.0 名称：RollingCounter_ESP_0x236 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_ESP_0x236=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_ESP_0x236;//7.7-->7.0 名称：Checksum_ESP_0x236 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+7] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+6] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+5] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+4] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+3] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+2] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0] =Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data0Bit.R;

                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 7];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 6];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 5];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 4];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 3];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 2];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 1];
                Vu8_ABSESP_8_ESP_WhlPulse_0x236_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_WhlPulse_0x236_FR + 0];



//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Advanced_0x234_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Advanced_0x234_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_Advanced_0x234_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_Advanced_0x234_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Advanced_0x234_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Advanced_0x234_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Advanced_0x234 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Advanced_0x234_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Advanced_0x234_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_Advanced_0x234_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_Advanced_0x234_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Advanced_0x234_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B.c6Reserve_9_2_7= CAN_ALL_ABSESP_c6Reserve_9_2_7_min;//0.7-->0.2
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_EBDActive= CAN_ALL_ABSESP_uESP_EBDActive_min;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VDCActive= CAN_ALL_ABSESP_u1ESP_VDCActive_min;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_NoBrakeForce= CAN_ALL_ABSESP_u1ESP_NoBrakeForce_min;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ECDTempOff= CAN_ALL_ABSESP_u1ESP_ECDTempOff_min;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c4Reserve_9_10_13= CAN_ALL_ABSESP_c4Reserve_9_10_13_min;//1.5-->1.2
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDD_APactive= CAN_ALL_ABSESP_u1ESP_CDD_APactive_min;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDActive= CAN_ALL_ABSESP_u1ESP_CDDActive_min;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDAvailable= CAN_ALL_ABSESP_u1ESP_CDDAvailable_min;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ABAactive= CAN_ALL_ABSESP_u1ESP_ABAactive_min;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ABAavailable= CAN_ALL_ABSESP_u1ESP_ABAavailable_min;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_PrefillActive= CAN_ALL_ABSESP_u1ESP_PrefillActive_min;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_PrefillAvailable= CAN_ALL_ABSESP_u1ESP_PrefillAvailable_min;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AEBdecActive= CAN_ALL_ABSESP_u1ESP_AEBdecActive_min;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AEBdecAvailable= CAN_ALL_ABSESP_u1ESP_AEBdecAvailable_min;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild= CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild_min;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c5Reserve_9_27_31= CAN_ALL_ABSESP_c5Reserve_9_27_31_min;//3.7-->3.3
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AWBactive= CAN_ALL_ABSESP_u1ESP_AWBactive_min;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AWBavailable= CAN_ALL_ABSESP_u1ESP_AWBavailable_min;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_DTCactive= CAN_ALL_ABSESP_u1ESP_DTCactive_min;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDerror= CAN_ALL_ABSESP_u1ESP_CDDerror_min;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCerror= CAN_ALL_ABSESP_u1ESP_VLCerror_min;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl= CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl_min;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u14Rolling_counter_0x234= CAN_ALL_ABSESP_u14Rolling_counter_0x234_min;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x234= CAN_ALL_ABSESP_u4Checksum_0x234_min;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B.c6Reserve_9_2_7=Vc6Reserve_9_2_7;//0.7-->0.2
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_EBDActive=VCAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VDCActive=VCAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_NoBrakeForce=VCAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ECDTempOff=VCAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c4Reserve_9_10_13=Vc4Reserve_9_10_13;//1.5-->1.2
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDD_APactive=VCAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDActive=VCAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDAvailable=VCAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ABAactive=VCAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ABAavailable=VCAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_PrefillActive=VCAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_PrefillAvailable=VCAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AEBdecActive=VCAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AEBdecAvailable=VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild=VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c5Reserve_9_27_31=Vc5Reserve_9_27_31;//3.7-->3.3
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AWBactive=VCAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AWBavailable=VCAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_DTCactive=VCAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDerror=VCAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCerror=VCAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl=VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u14Rolling_counter_0x234=VCAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x234=VCAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                Vc6Reserve_9_2_7=CAN_ALL_FRVar_ABSESP.B.c6Reserve_9_2_7;//0.7-->0.2
                VCAN_ALL_ABSESP_uESP_EBDActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_EBDActive;//0.1-->0.1 1 "active" 0 "not active" 名称：ESP_EBDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_VDCActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VDCActive;//0.0-->0.0 1 "active" 0 "not active" 名称：ESP_VDCActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_NoBrakeForce=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_NoBrakeForce;//1.7-->1.7 1 "no brk force" 0 "exist brk force" 名称：ESP_NoBrakeForce 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_ECDTempOff=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ECDTempOff;//1.6-->1.6 1 "temp too high" 0 "not high" 名称：ESP_ECDTempOff 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc4Reserve_9_10_13=CAN_ALL_FRVar_ABSESP.B.c4Reserve_9_10_13;//1.5-->1.2
                VCAN_ALL_ABSESP_u1ESP_CDD_APactive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDD_APactive;//1.1-->1.1 1 "activated" 0 "not activated" 名称：ESP_CDD_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_CDDActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDActive;//1.0-->1.0 1 "activated" 0 "not activated" 名称：ESP_CDDActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_CDDAvailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDAvailable;//2.7-->2.7 1 "available" 0 "not available" 名称：ESP_CDDAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_ABAactive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ABAactive;//2.6-->2.6 1 "activated" 0 "not activated" 名称：ESP_ABAactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_ABAavailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_ABAavailable;//2.5-->2.5 1 "available" 0 "not available" 名称：ESP_ABAavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_PrefillActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_PrefillActive;//2.4-->2.4 1 "activated" 0 "not activated" 名称：ESP_PrefillActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_PrefillAvailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_PrefillAvailable;//2.3-->2.3 1 "available" 0 "not available" 名称：ESP_PrefillAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AEBdecActive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AEBdecActive;//2.2-->2.2 1 "activated" 0 "not activated" 名称：ESP_AEBdecActive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AEBdecAvailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AEBdecAvailable;//2.1-->2.1 1 "available" 0 "not available" 名称：ESP_AEBdecAvailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhlvaild;//2.0-->2.0 1 "Invalid" 0 "Valid" 名称：ESP_BrkFricTqTotAtWhlvaild 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc5Reserve_9_27_31=CAN_ALL_FRVar_ABSESP.B.c5Reserve_9_27_31;//3.7-->3.3
                VCAN_ALL_ABSESP_u1ESP_AWBactive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AWBactive;//3.2-->3.2 1 "activated" 0 "not activated" 名称：ESP_AWBactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_AWBavailable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_AWBavailable;//3.1-->3.1 1 "available" 0 "not available" 名称：ESP_AWBavailable 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_DTCactive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_DTCactive;//3.0-->3.0 1 "activated" 0 "not activated" 名称：ESP_DTCactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_CDDerror=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_CDDerror;//4.7-->4.7 1 "error" 0 "not error" 名称：ESP_CDDerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_VLCerror=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCerror;//4.6-->4.6 1 "error" 0 "not error" 名称：ESP_VLCerror 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_BrkFricTqTotAtWhl;//4.5-->5.0 名称：ESP_BrkFricTqTotAtWhl 位数：14bit, logical min-max：0~10230 physical min-max：0x000~0x27F6 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u14Rolling_counter_0x234=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u14Rolling_counter_0x234;//6.3-->6.0 名称：Rolling_counter_0x234 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x234=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x234;//7.7-->7.0 名称：Checksum_0x234 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+7] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+6] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+5] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+4] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+3] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+2] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+1] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_Advanced_0x234_FR+0] =Vu8_ABSESP_9_ESP_Advanced_0x234_Data0Bit.R;

                Vu8_ABSESP_9_ESP_Advanced_0x234_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 7];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 6];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 5];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 4];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 3];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 2];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 1];
                Vu8_ABSESP_9_ESP_Advanced_0x234_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_Advanced_0x234_FR + 0];



//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_VLC_0x223_FR+0] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_VLC_0x223_FR+0]  ; 
                CAN_ALL_FRVar_ABSESP.R[ 2*ALL_ABSESP_ESP_VLC_0x223_FR+1] = CAN_ALL_FRMes_ABSESP.R[ 2*ALL_ABSESP_ESP_VLC_0x223_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_VLC_0x223_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_VLC_0x223_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_ABSESP = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_VLC_0x223 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_VLC_0x223_FR+0]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_VLC_0x223_FR+0];
                CAN_ALL_FRVar_ABSESP.R[2*ALL_ABSESP_ESP_VLC_0x223_FR+1]=CAN_ALL_FRAMES_ABSESP.R[2*ALL_ABSESP_ESP_VLC_0x223_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_VLC_0x223_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH]  == 1 ) {


                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_uESP_VLCEngTorqReq= CAN_ALL_ABSESP_uESP_VLCEngTorqReq_min;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce= CAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce_min;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u8ESP_Target_Gear_Request= CAN_ALL_ABSESP_u8ESP_Target_Gear_Request_min;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable= CAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable_min;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c3Reserve_10_24_26= CAN_ALL_ABSESP_c3Reserve_10_24_26_min;//3.2-->3.0
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u2ESP_PAM_LC_Status= CAN_ALL_ABSESP_u2ESP_PAM_LC_Status_min;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts= CAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts_min;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u3ESP_VLC_APactive= CAN_ALL_ABSESP_u3ESP_VLC_APactive_min;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B.c8Reserve_10_40_47= CAN_ALL_ABSESP_c8Reserve_10_40_47_min;//5.7-->5.0
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct= CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct_min;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCAPA_Available= CAN_ALL_ABSESP_u1ESP_VLCAPA_Available_min;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLC_Available= CAN_ALL_ABSESP_u1ESP_VLC_Available_min;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLC_Active= CAN_ALL_ABSESP_u1ESP_VLC_Active_min;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x223= CAN_ALL_ABSESP_u1Rolling_counter_0x223_min;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x223= CAN_ALL_ABSESP_u4Checksum_0x223_min;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_VLCEngTorqReq=VCAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce=VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_Target_Gear_Request=VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable=VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c3Reserve_10_24_26=Vc3Reserve_10_24_26;//3.2-->3.0
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_PAM_LC_Status=VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts=VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u3ESP_VLC_APactive=VCAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B.c8Reserve_10_40_47=Vc8Reserve_10_40_47;//5.7-->5.0
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct=VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCAPA_Available=VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLC_Available=VCAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLC_Active=VCAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x223=VCAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x223=VCAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_ABSESP_uESP_VLCEngTorqReq=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_uESP_VLCEngTorqReq;//0.7-->1.0 名称：ESP_VLCEngTorqReq 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                VCAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u16ESP_VLC_InternalTargetAcce;//2.7-->2.0 名称：ESP_VLC_InternalTargetAcce 位数：8bit, logical min-max：-7~5.75 physical min-max：0x000~0xFF 精度：0.05 偏移量：-140 单位： 
                VCAN_ALL_ABSESP_u8ESP_Target_Gear_Request=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u8ESP_Target_Gear_Request;//3.7-->3.5 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u3ESP_APA_GearBoxEnable;//3.4-->3.3 1 "gear shift request" 0 "no request" 名称：ESP_APA_GearBoxEnable 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc3Reserve_10_24_26=CAN_ALL_FRVar_ABSESP.B.c3Reserve_10_24_26;//3.2-->3.0
                VCAN_ALL_ABSESP_u2ESP_PAM_LC_Status=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u2ESP_PAM_LC_Status;//4.7-->4.4 10 "Error" 4 "Active AutomaticPark" 1 "Standby" 0 "OFF" 名称：ESP_PAM_LC_Status 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4ESP_PAM_LC_FailureSts;//4.3-->4.1 7 "Error" 5 "Unexpected_GearIntervention" 4 "Unexpected_ACCPedalIntervention" 3 "Unexpected_EPB_Action" 2 "Unexpected_GearPosition" 1 "Vehicle_blocked" 0 "No Error" 名称：ESP_PAM_LC_FailureSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u3ESP_VLC_APactive=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u3ESP_VLC_APactive;//4.0-->4.0 1 "active" 0 "not active" 名称：ESP_VLC_APactive 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc8Reserve_10_40_47=CAN_ALL_FRVar_ABSESP.B.c8Reserve_10_40_47;//5.7-->5.0
                VCAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCEngTorqReqAct;//6.7-->6.7 1 "Invalid" 0 "Valid" 名称：ESP_VLCEngTorqReqAct 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_VLCAPA_Available=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLCAPA_Available;//6.6-->6.6 1 "available" 0 "not available" 名称：ESP_VLCAPA_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_VLC_Available=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLC_Available;//6.5-->6.5 1 "available" 0 "not available" 名称：ESP_VLC_Available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1ESP_VLC_Active=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1ESP_VLC_Active;//6.4-->6.4 1 "active" 0 "not active" 名称：ESP_VLC_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u1Rolling_counter_0x223=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u1Rolling_counter_0x223;//6.3-->6.0 名称：Rolling_counter_0x223 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_ABSESP_u4Checksum_0x223=CAN_ALL_FRVar_ABSESP.B. CAN_ALL_ABSESP_u4Checksum_0x223;//7.7-->7.0 名称：Checksum_0x223 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+7] =Vu8_ABSESP_10_ESP_VLC_0x223_Data7Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+6] =Vu8_ABSESP_10_ESP_VLC_0x223_Data6Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+5] =Vu8_ABSESP_10_ESP_VLC_0x223_Data5Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+4] =Vu8_ABSESP_10_ESP_VLC_0x223_Data4Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+3] =Vu8_ABSESP_10_ESP_VLC_0x223_Data3Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+2] =Vu8_ABSESP_10_ESP_VLC_0x223_Data2Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+1] =Vu8_ABSESP_10_ESP_VLC_0x223_Data1Bit.R;
                CAN_ALL_FRVar_ABSESP.By[ 8*ALL_ABSESP_ESP_VLC_0x223_FR+0] =Vu8_ABSESP_10_ESP_VLC_0x223_Data0Bit.R;

                Vu8_ABSESP_10_ESP_VLC_0x223_Data7Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 7];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data6Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 6];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data5Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 5];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data4Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 4];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data3Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 3];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data2Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 2];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data1Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 1];
                Vu8_ABSESP_10_ESP_VLC_0x223_Data0Bit.R=CAN_ALL_FRVar_ABSESP.By[8 * ALL_ABSESP_ESP_VLC_0x223_FR + 0];


//--2 th CAN 报文初始化子程序------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ABS_WhlSpd_0x211_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ABS_Sts_0x221_CH];//Can_NR=2
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_Pressure_0x241_CH];//Can_NR=3
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_AxAy_0x242_CH];//Can_NR=4
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_Status_0x243_CH];//Can_NR=5
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_RAW_0x212_CH];//Can_NR=6
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_Direction_0x235_CH];//Can_NR=7
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_WhlPulse_0x236_CH];//Can_NR=8
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_Advanced_0x234_CH];//Can_NR=9
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_ABSESP_ESP_VLC_0x223_CH];//Can_NR=10

//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH]ID.B.ID_STD= ALL_ABSESP_ABS_WhlSpd_0x211_ID;
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].CS.B.IDE = ALL_ABSESP_ABS_WhlSpd_0x211_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].CS.B.DLC =ALL_ABSESP_ABS_WhlSpd_0x211_LH; 

//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH]ID.B.ID_STD= ALL_ABSESP_ABS_Sts_0x221_ID;
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].CS.B.IDE = ALL_ABSESP_ABS_Sts_0x221_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].CS.B.DLC =ALL_ABSESP_ABS_Sts_0x221_LH; 

//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH]ID.B.ID_STD= ALL_ABSESP_ESP_Pressure_0x241_ID;
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].CS.B.IDE = ALL_ABSESP_ESP_Pressure_0x241_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].CS.B.DLC =ALL_ABSESP_ESP_Pressure_0x241_LH; 

//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH]ID.B.ID_STD= ALL_ABSESP_ESP_AxAy_0x242_ID;
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].CS.B.IDE = ALL_ABSESP_ESP_AxAy_0x242_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].CS.B.DLC =ALL_ABSESP_ESP_AxAy_0x242_LH; 

//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH]ID.B.ID_STD= ALL_ABSESP_ESP_Status_0x243_ID;
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].CS.B.IDE = ALL_ABSESP_ESP_Status_0x243_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].CS.B.DLC =ALL_ABSESP_ESP_Status_0x243_LH; 

//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH]ID.B.ID_STD= ALL_ABSESP_ESP_RAW_0x212_ID;
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].CS.B.IDE = ALL_ABSESP_ESP_RAW_0x212_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].CS.B.DLC =ALL_ABSESP_ESP_RAW_0x212_LH; 

//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH]ID.B.ID_STD= ALL_ABSESP_ESP_Direction_0x235_ID;
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].CS.B.IDE = ALL_ABSESP_ESP_Direction_0x235_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].CS.B.DLC =ALL_ABSESP_ESP_Direction_0x235_LH; 

//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH]ID.B.ID_STD= ALL_ABSESP_ESP_WhlPulse_0x236_ID;
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].CS.B.IDE = ALL_ABSESP_ESP_WhlPulse_0x236_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].CS.B.DLC =ALL_ABSESP_ESP_WhlPulse_0x236_LH; 

//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH]ID.B.ID_STD= ALL_ABSESP_ESP_Advanced_0x234_ID;
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].CS.B.IDE = ALL_ABSESP_ESP_Advanced_0x234_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].CS.B.DLC =ALL_ABSESP_ESP_Advanced_0x234_LH; 

//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH]ID.B.ID_STD= ALL_ABSESP_ESP_VLC_0x223_ID;
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].CS.B.IDE = ALL_ABSESP_ESP_VLC_0x223_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].CS.B.DLC =ALL_ABSESP_ESP_VLC_0x223_LH; 
//--3 th CAN 报文接收中断子程序------------

//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+2] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+3] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+4] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+5] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+6] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+7] = CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_WhlSpd_0x211 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ABS_WhlSpd_0x211_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_WhlSpd_0x211_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+0] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+1] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+2] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+3] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+4] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+5] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+6] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+7] = CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_Sts_0x221 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ABS_Sts_0x221_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ABS_Sts_0x221_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+0] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+1] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+2] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+3] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+4] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+5] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+6] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+7] = CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Pressure_0x241 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Pressure_0x241_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Pressure_0x241_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+0] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+1] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+2] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+3] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+4] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+5] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+6] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+7] = CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_AxAy_0x242 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_AxAy_0x242_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_AxAy_0x242_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+0] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+1] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+2] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+3] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+4] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+5] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+6] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+7] = CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Status_0x243 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Status_0x243_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Status_0x243_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+0] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+1] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+2] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+3] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+4] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+5] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+6] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+7] = CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_RAW_0x212 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_RAW_0x212_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_RAW_0x212_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+0] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+1] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+2] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+3] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+4] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+5] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+6] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+7] = CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Direction_0x235 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Direction_0x235_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Direction_0x235_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+2] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+3] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+4] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+5] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+6] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+7] = CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_WhlPulse_0x236 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_WhlPulse_0x236_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_WhlPulse_0x236_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+0] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+1] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+2] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+3] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+4] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+5] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+6] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+7] = CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Advanced_0x234 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_Advanced_0x234_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_Advanced_0x234_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH]  == 0) {
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+0] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[0]; 
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+1] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[1];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+2] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[2];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+3] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[3];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+4] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[4];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+5] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[5];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+6] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[6];
                CAN_ALL_FRMes_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+7] = CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[7];
               Error_CAN1.B.ALL_ABSESP = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_VLC_0x223 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_ABSESP_ESP_VLC_0x223_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_ABSESP_ESP_VLC_0x223_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_ABSESP_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN 报文发送子程序------------                    

//--Can_NR=1----ABSESP 1 the Data Frame 名称：ABS_WhlSpd_0x211  ID：0x529  周期：0ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ABS_WhlSpd_0x211_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ABS_WhlSpd_0x211_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_WhlSpd_0x211T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+0];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+1];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+2];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+3];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+4];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+5];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+6];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_WhlSpd_0x211_FR+7];
                CAN1.MB[ALL_ABSESP_ABS_WhlSpd_0x211_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ABS_WhlSpd_0x211_Ay] = ALL_ABSESP_ABS_WhlSpd_0x211_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_WhlSpd_0x211T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ABS_WhlSpd_0x211_DT ) == 0 ) {


//--Can_NR=2----ABSESP 2 the Data Frame 名称：ABS_Sts_0x221  ID：0x545  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ABS_Sts_0x221_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ABS_Sts_0x221_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_Sts_0x221T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+0];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+1];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+2];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+3];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+4];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+5];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+6];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ABS_Sts_0x221_FR+7];
                CAN1.MB[ALL_ABSESP_ABS_Sts_0x221_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ABS_Sts_0x221_Ay] = ALL_ABSESP_ABS_Sts_0x221_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ABS_Sts_0x221T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ABS_Sts_0x221_DT ) == 0 ) {


//--Can_NR=3----ABSESP 3 the Data Frame 名称：ESP_Pressure_0x241  ID：0x577  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Pressure_0x241_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_Pressure_0x241_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Pressure_0x241T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Pressure_0x241_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_Pressure_0x241_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_Pressure_0x241_Ay] = ALL_ABSESP_ESP_Pressure_0x241_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Pressure_0x241T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Pressure_0x241_DT ) == 0 ) {


//--Can_NR=4----ABSESP 4 the Data Frame 名称：ESP_AxAy_0x242  ID：0x578  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_AxAy_0x242_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_AxAy_0x242_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_AxAy_0x242T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_AxAy_0x242_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_AxAy_0x242_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_AxAy_0x242_Ay] = ALL_ABSESP_ESP_AxAy_0x242_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_AxAy_0x242T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_AxAy_0x242_DT ) == 0 ) {


//--Can_NR=5----ABSESP 5 the Data Frame 名称：ESP_Status_0x243  ID：0x579  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Status_0x243_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_Status_0x243_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Status_0x243T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Status_0x243_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_Status_0x243_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_Status_0x243_Ay] = ALL_ABSESP_ESP_Status_0x243_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Status_0x243T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Status_0x243_DT ) == 0 ) {


//--Can_NR=6----ABSESP 6 the Data Frame 名称：ESP_RAW_0x212  ID：0x530  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_RAW_0x212_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_RAW_0x212_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_RAW_0x212T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_RAW_0x212_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_RAW_0x212_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_RAW_0x212_Ay] = ALL_ABSESP_ESP_RAW_0x212_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_RAW_0x212T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_RAW_0x212_DT ) == 0 ) {


//--Can_NR=7----ABSESP 7 the Data Frame 名称：ESP_Direction_0x235  ID：0x565  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Direction_0x235_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_Direction_0x235_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Direction_0x235T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Direction_0x235_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_Direction_0x235_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_Direction_0x235_Ay] = ALL_ABSESP_ESP_Direction_0x235_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Direction_0x235T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Direction_0x235_DT ) == 0 ) {


//--Can_NR=8----ABSESP 8 the Data Frame 名称：ESP_WhlPulse_0x236  ID：0x566  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_WhlPulse_0x236_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_WhlPulse_0x236_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_WhlPulse_0x236T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_WhlPulse_0x236_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_WhlPulse_0x236_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_WhlPulse_0x236_Ay] = ALL_ABSESP_ESP_WhlPulse_0x236_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_WhlPulse_0x236T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_WhlPulse_0x236_DT ) == 0 ) {


//--Can_NR=9----ABSESP 9 the Data Frame 名称：ESP_Advanced_0x234  ID：0x564  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Advanced_0x234_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_Advanced_0x234_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Advanced_0x234T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_Advanced_0x234_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_Advanced_0x234_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_Advanced_0x234_Ay] = ALL_ABSESP_ESP_Advanced_0x234_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_Advanced_0x234T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_Advanced_0x234_DT ) == 0 ) {


//--Can_NR=10----ABSESP 10 the Data Frame 名称：ESP_VLC_0x223  ID：0x547  周期：20ms  位数：8字节ABSESP-->
                 if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_VLC_0x223_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_ABSESP_ESP_VLC_0x223_CH] ;
                if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_VLC_0x223T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[0] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+0];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[1] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+1];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[2] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+2];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[3] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+3];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[4] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+4];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[5] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+5];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[6] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+6];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].DATA.B[7] = CAN_ALL_FRVar_ABSESP.By[8*ALL_ABSESP_ESP_VLC_0x223_FR+7];
                CAN1.MB[ALL_ABSESP_ESP_VLC_0x223_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_ABSESP_ESP_VLC_0x223_Ay] = ALL_ABSESP_ESP_VLC_0x223_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_ABSESP.B.ALL_ABSESP_ESP_VLC_0x223T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_ABSESP_ESP_VLC_0x223_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_ABSESP_H 