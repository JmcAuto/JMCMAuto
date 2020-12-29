#ifndef  _CAN_ALL_GW_H
#define  _CAN_ALL_GW_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000321
//801 BCM_reverse_gear 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined"
#define  CAN_ALL_GW_ce2BCM_reverse_gear_Reserved 3
#define  CAN_ALL_GW_ce2BCM_reverse_gear_InReverseGear?  2 
#define  CAN_ALL_GW_ce2BCM_reverse_gear_NotinReverseGear  1 
#define  CAN_ALL_GW_ce2BCM_reverse_gear_Undefined  0 
//801 BCM_OutsideTempDig 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault"
#define  CAN_ALL_GW_ce2BCM_OutsideTempDig_Opencircuit 2
#define  CAN_ALL_GW_ce2BCM_OutsideTempDig_shortcircuit  1 
#define  CAN_ALL_GW_ce2BCM_OutsideTempDig_NoFault  0 
//801 BCM_PowerMode 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined"
#define  CAN_ALL_GW_ce3BCM_PowerMode_START 4
#define  CAN_ALL_GW_ce3BCM_PowerMode_ON  3 
#define  CAN_ALL_GW_ce3BCM_PowerMode_ACC  2 
#define  CAN_ALL_GW_ce3BCM_PowerMode_OFF  1 
#define  CAN_ALL_GW_ce3BCM_PowerMode_Undefined  0 
//801 BCM_Driving_mode_req_BCM 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal"
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_invalid 15
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_ATSFaultBCM  14 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Manual_ForN330L  13 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Ghat_ForN330L  9 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Sand  8 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_WetMud  7 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Rock  6 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_4L  5 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_ECO  4 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Sport  3 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Noused  2 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Snow  1 
#define  CAN_ALL_GW_ce4BCM_Driving_mode_req_BCM_Normal  0 
//801 BCM_HighBeamSts 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_HighBeamSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_HighBeamSts_ON  2 
#define  CAN_ALL_GW_ce2BCM_HighBeamSts_OFF  1 
#define  CAN_ALL_GW_ce2BCM_HighBeamSts_Invalid  0 
//801 BCM_LowBeamSts 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_LowBeamSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_LowBeamSts_ON  2 
#define  CAN_ALL_GW_ce2BCM_LowBeamSts_OFF  1 
#define  CAN_ALL_GW_ce2BCM_LowBeamSts_Invalid  0 
//801 BCM_FrntFogLmpSts 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_FrntFogLmpSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_FrntFogLmpSts_ON  2 
#define  CAN_ALL_GW_ce2BCM_FrntFogLmpSts_OFF  1 
#define  CAN_ALL_GW_ce2BCM_FrntFogLmpSts_Invalid  0 
//801 BCM_AutolampSts 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_AutolampSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_AutolampSts_Active  2 
#define  CAN_ALL_GW_ce2BCM_AutolampSts_Inactive  1 
#define  CAN_ALL_GW_ce2BCM_AutolampSts_Invalid  0 
//801 BCM_BrakeFluidSts 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_BrakeFluidSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_BrakeFluidSts_low  2 
#define  CAN_ALL_GW_ce2BCM_BrakeFluidSts_Normal  1 
#define  CAN_ALL_GW_ce2BCM_BrakeFluidSts_Invalid  0 
//801 BCM_RearDef_Status 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_RearDef_Status_Reserved 3
#define  CAN_ALL_GW_ce2BCM_RearDef_Status_RearDefActive  2 
#define  CAN_ALL_GW_ce2BCM_RearDef_Status_RearDefInactive  1 
#define  CAN_ALL_GW_ce2BCM_RearDef_Status_Invalid  0 
//801 BCM_SS_EnableSts 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid"
#define  CAN_ALL_GW_ce2BCM_SS_EnableSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_SS_EnableSts_StartStopisForbid  2 
#define  CAN_ALL_GW_ce2BCM_SS_EnableSts_StartStopisAllow  1 
#define  CAN_ALL_GW_ce2BCM_SS_EnableSts_Invalid  0 
//801 BCM_PosLmpSts 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd"
#define  CAN_ALL_GW_ce2BCM_PosLmpSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_PosLmpSts_ON  2 
#define  CAN_ALL_GW_ce2BCM_PosLmpSts_OFF  1 
#define  CAN_ALL_GW_ce2BCM_PosLmpSts_Nouesd  0 
//--Can_NR=2frame id is 0xFFFFFFFF80000310
//784 BCM_DoorStsFrntLe 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntLe_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntLe_Open  2 
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntLe_Closed  1 
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntLe_No_Used  0 
//784 BCM_DoorStsFrntRi 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntRi_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntRi_Open  2 
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntRi_Closed  1 
#define  CAN_ALL_GW_ce2BCM_DoorStsFrntRi_No_Used  0 
//784 BCM_DoorStsRearLe 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorStsRearLe_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorStsRearLe_Open  2 
#define  CAN_ALL_GW_ce2BCM_DoorStsRearLe_Closed  1 
#define  CAN_ALL_GW_ce2BCM_DoorStsRearLe_No_Used  0 
//784 BCM_DoorStsRearRi 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorStsRearRi_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorStsRearRi_Open  2 
#define  CAN_ALL_GW_ce2BCM_DoorStsRearRi_Closed  1 
#define  CAN_ALL_GW_ce2BCM_DoorStsRearRi_No_Used  0 
//784 BCM_DoorLockStsFrntLe 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntLe_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntLe_Unlocked  2 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntLe_Locked  1 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntLe_No_Used  0 
//784 BCM_DoorLockStsFrntRi 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntRi_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntRi_Unlocked  2 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntRi_Locked  1 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsFrntRi_No_Used  0 
//784 BCM_DoorLockStsRearLe 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearLe_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearLe_Unlocked  2 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearLe_Locked  1 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearLe_No_Used  0 
//784 BCM_DoorLockStsRearRi 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearRi_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearRi_Unlocked  2 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearRi_Locked  1 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsRearRi_No_Used  0 
//784 BCM_LockUnlockFeedback 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action"
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Any_other_Unlock 31
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Key_forgotten_to_unlock_the_car  27 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Diagnostic_Unlock  26 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Tbox_Unlcok  25 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_EngOFFUnlock  24 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_KeyRemovalUnlock  23 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_CrashUnlock  22 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Finger_Unlock  21 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Master_Unlock  20 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Near_to_vehicle_Unlock  19 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_RKE_Unlock  18 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_PE_Unlock  17 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Any_other_Lock  15 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Tbox_30s_autoLock  12 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Diagnostic_Lock  11 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_SpeedLock  10 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Tbox_Lock  9 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Near_to_vehicle_30s_autoLock  8 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_PE_30s_autoLock  7 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_RKE_30s_autoLock  6 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Finger_Lock  5 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Master_Lock  4 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_Leave_Vehicle_Lock  3 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_RKE_Lock  2 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_PE_Lock  1 
#define  CAN_ALL_GW_ce5BCM_LockUnlockFeedback_No_Lock_Unlock_action  0 
//784 BCM_LoadSensitivity 1 "Active" 0 "Inacitve"
#define  CAN_ALL_GW_cb1BCM_LoadSensitivity_Active 1
#define  CAN_ALL_GW_cb1BCM_LoadSensitivity_Inacitve  0 
//784 BCM_AntiTheftSts 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify"
#define  CAN_ALL_GW_ce2BCM_AntiTheftSts_Abnormal_fortification 3
#define  CAN_ALL_GW_ce2BCM_AntiTheftSts_warning  2 
#define  CAN_ALL_GW_ce2BCM_AntiTheftSts_Lift_The_Fortification  1 
#define  CAN_ALL_GW_ce2BCM_AntiTheftSts_Fortify  0 
//784 BCM_TrunkDoorPreUnlockSts 1 "PreUnlocked" 0 "No used_No action"
#define  CAN_ALL_GW_cb1BCM_TrunkDoorPreUnlockSts_PreUnlocked 1
#define  CAN_ALL_GW_cb1BCM_TrunkDoorPreUnlockSts_No_used_No_action  0 
//784 BCM_DoorStsTrunk 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorStsTrunk_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorStsTrunk_Open  2 
#define  CAN_ALL_GW_ce2BCM_DoorStsTrunk_Closed  1 
#define  CAN_ALL_GW_ce2BCM_DoorStsTrunk_No_Used  0 
//784 BCM_DoorLockStsTrunk 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used"
#define  CAN_ALL_GW_ce2BCM_DoorLockStsTrunk_Fault 3
#define  CAN_ALL_GW_ce2BCM_DoorLockStsTrunk_Unlocked  2 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsTrunk_Locked  1 
#define  CAN_ALL_GW_ce2BCM_DoorLockStsTrunk_No_Used  0 
//784 BCM_EnginehoodSts 3 "Fault" 2 "Open" 1 "Closed" 0 "No used"
#define  CAN_ALL_GW_ce2BCM_EnginehoodSts_Fault 3
#define  CAN_ALL_GW_ce2BCM_EnginehoodSts_Open  2 
#define  CAN_ALL_GW_ce2BCM_EnginehoodSts_Closed  1 
#define  CAN_ALL_GW_ce2BCM_EnginehoodSts_No_used  0 
//784 BCM_FrontWiperSts 3 "High" 2 "Low" 1 "Off" 0 "No used"
#define  CAN_ALL_GW_ce2BCM_FrontWiperSts_High 3
#define  CAN_ALL_GW_ce2BCM_FrontWiperSts_Low  2 
#define  CAN_ALL_GW_ce2BCM_FrontWiperSts_Off  1 
#define  CAN_ALL_GW_ce2BCM_FrontWiperSts_No_used  0 
//784 BCM_RearWiperSts 3 "Reserved" 2 "On" 1 "Off" 0 "No used"
#define  CAN_ALL_GW_ce2BCM_RearWiperSts_Reserved 3
#define  CAN_ALL_GW_ce2BCM_RearWiperSts_On  2 
#define  CAN_ALL_GW_ce2BCM_RearWiperSts_Off  1 
#define  CAN_ALL_GW_ce2BCM_RearWiperSts_No_used  0 
//784 BCM_WindowsCMD 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid"
#define  CAN_ALL_GW_ce3BCM_WindowsCMD_Windows_stop 4
#define  CAN_ALL_GW_ce3BCM_WindowsCMD_Windows_vent  3 
#define  CAN_ALL_GW_ce3BCM_WindowsCMD_Windows_down  2 
#define  CAN_ALL_GW_ce3BCM_WindowsCMD_Windows_up  1 
#define  CAN_ALL_GW_ce3BCM_WindowsCMD_Invalid  0 
//784 BCM_PLG_DriverSW 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release"
#define  CAN_ALL_GW_ce2BCM_PLG_DriverSW_Reserved 3
#define  CAN_ALL_GW_ce2BCM_PLG_DriverSW_Stuck  2 
#define  CAN_ALL_GW_ce2BCM_PLG_DriverSW_Press  1 
#define  CAN_ALL_GW_ce2BCM_PLG_DriverSW_release  0 
//784 BCM_TurnIndicatorSts 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off"
#define  CAN_ALL_GW_ce2BCM_TurnIndicatorSts_LeAndRiOn 3
#define  CAN_ALL_GW_ce2BCM_TurnIndicatorSts_RiOn  2 
#define  CAN_ALL_GW_ce2BCM_TurnIndicatorSts_LeOn  1 
#define  CAN_ALL_GW_ce2BCM_TurnIndicatorSts_Off  0 
//--Can_NR=3frame id is 0xFFFFFFFF80000510
//1296 IC_QDashACCFail 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error"
#define  CAN_ALL_GW_ce2IC_QDashACCFail_not_defined 3
#define  CAN_ALL_GW_ce2IC_QDashACCFail_irreversible_error  2 
#define  CAN_ALL_GW_ce2IC_QDashACCFail_reversible_error  1 
#define  CAN_ALL_GW_ce2IC_QDashACCFail_no_error  0 
//1296 IC_DISFail 1 "error" 0 "no error"
#define  CAN_ALL_GW_cb1IC_DISFail_error 1
#define  CAN_ALL_GW_cb1IC_DISFail_no_error  0 
//1296 IC_VehBrkPump_ERR_IC 1 "Error" 0 "Normal"
#define  CAN_ALL_GW_cb1IC_VehBrkPump_ERR_IC_Error 1
#define  CAN_ALL_GW_cb1IC_VehBrkPump_ERR_IC_Normal  0 
//1296 IC_AirbagTelltaleBehavior 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off"
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_Invalid 7
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_Invalid  6 
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_Invalid  5 
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_AirBagFailSts_signal_not_received  4 
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_no_failure_in_the_lamp_Lamp_is_blinking  3 
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_no_failure_in_the_lamp_Lamp_is_on  2 
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_failure_in_lamp  1 
#define  CAN_ALL_GW_ce3IC_AirbagTelltaleBehavior_no_failure_in_lamp_and_lamp_is_off  0 
//--Can_NR=4frame id is 0xFFFFFFFF80000580
//1408 TBOX_LocationSts 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude"
#define  CAN_ALL_GW_ce3TBOX_LocationSts_Invalid 7
#define  CAN_ALL_GW_ce3TBOX_LocationSts_south_Latitude_west_longitude  3 
#define  CAN_ALL_GW_ce3TBOX_LocationSts_south_Latitude_east_longitude  2 
#define  CAN_ALL_GW_ce3TBOX_LocationSts_North_Latitude_west_longitude  1 
#define  CAN_ALL_GW_ce3TBOX_LocationSts_North_Latitude_east_longitude  0 
//--Can_NR=5frame id is 0xFFFFFFFF80000530
//1328 MP5_AVM_Button 3 "Faulture" 2 "shut down" 1 "start up" 0 "init"
#define  CAN_ALL_GW_ce2MP5_AVM_Button_Faulture 3
#define  CAN_ALL_GW_ce2MP5_AVM_Button_shut_down  2 
#define  CAN_ALL_GW_ce2MP5_AVM_Button_start_up  1 
#define  CAN_ALL_GW_ce2MP5_AVM_Button_init  0 
//1328 MP5_AVM_Angle 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key"
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Invalid 15
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Reserved  14 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Reserved  13 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Reserved  12 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_No_Video_Signal_Reserved  11 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_2D_Key  10 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_3D_Key  9 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Left_Front_3D  8 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Left_3D_Left_AVM_2D  7 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Left_Rear_3D  6 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Rear_3D_Rear_AVM_2D  5 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Rear_Right_3D  4 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Right_3D_Right_AVM_2D  3 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Front_Right_3D  2 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Front_3D_Front_AVM_2D  1 
#define  CAN_ALL_GW_ce4MP5_AVM_Angle_Center_Key  0 
//1328 MP5_FCW_Sensitive 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable"
#define  CAN_ALL_GW_ce2MP5_FCW_Sensitive_level3_High_sensitive 3
#define  CAN_ALL_GW_ce2MP5_FCW_Sensitive_level2_Normal  2 
#define  CAN_ALL_GW_ce2MP5_FCW_Sensitive_level1_Low_sensitive  1 
#define  CAN_ALL_GW_ce2MP5_FCW_Sensitive_Unavailable  0 
//1328 MP5_BSDSwitchSts 1 "OFF" 0 "ON"
#define  CAN_ALL_GW_cb1MP5_BSDSwitchSts_OFF 1
#define  CAN_ALL_GW_cb1MP5_BSDSwitchSts_ON  0 
//1328 MP5_FCW_ON_OFF 1 "switch off" 0 "switch on"
#define  CAN_ALL_GW_cb1MP5_FCW_ON_OFF_switch_off 1
#define  CAN_ALL_GW_cb1MP5_FCW_ON_OFF_switch_on  0 
//1328 MP5_AEB_ON_OFF 1 "switch off" 0 "switch on"
#define  CAN_ALL_GW_cb1MP5_AEB_ON_OFF_switch_off 1
#define  CAN_ALL_GW_cb1MP5_AEB_ON_OFF_switch_on  0 
//1328 MP5_ICMenuShift_Button 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event"
#define  CAN_ALL_GW_ce2MP5_ICMenuShift_Button_Invalid 3
#define  CAN_ALL_GW_ce2MP5_ICMenuShift_Button_Page_down  2 
#define  CAN_ALL_GW_ce2MP5_ICMenuShift_Button_Page_up  1 
#define  CAN_ALL_GW_ce2MP5_ICMenuShift_Button_No_event  0 
//1328 MP5_View_Choice 1 "ADAS" 0 "AVM"
#define  CAN_ALL_GW_cb1MP5_View_Choice_ADAS 1
#define  CAN_ALL_GW_cb1MP5_View_Choice_AVM  0 
//1328 MP5_AlarmOrNot 1 "Alarm" 0 "No Alarm"
#define  CAN_ALL_GW_cb1MP5_AlarmOrNot_Alarm 1
#define  CAN_ALL_GW_cb1MP5_AlarmOrNot_No_Alarm  0 
//1328 MP5_AlarmStatus 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive"
#define  CAN_ALL_GW_ce2MP5_AlarmStatus_Reserved 3
#define  CAN_ALL_GW_ce2MP5_AlarmStatus_Failed  2 
#define  CAN_ALL_GW_ce2MP5_AlarmStatus_Active  1 
#define  CAN_ALL_GW_ce2MP5_AlarmStatus_Inactive  0 
//1328 MP5_ICMenuActive_Button 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off"
#define  CAN_ALL_GW_ce2MP5_ICMenuActive_Button_Invalid 3
#define  CAN_ALL_GW_ce2MP5_ICMenuActive_Button_silence  2 
#define  CAN_ALL_GW_ce2MP5_ICMenuActive_Button_menu_switch_active  1 
#define  CAN_ALL_GW_ce2MP5_ICMenuActive_Button_off  0 
//1328 MP5_LaneAssitTypeReq 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection"
#define  CAN_ALL_GW_ce2MP5_LaneAssitTypeReq_LDW+LKA 3
#define  CAN_ALL_GW_ce2MP5_LaneAssitTypeReq_LKA  2 
#define  CAN_ALL_GW_ce2MP5_LaneAssitTypeReq_LDW  1 
#define  CAN_ALL_GW_ce2MP5_LaneAssitTypeReq_no_selection  0 
//1328 MP5_AFS_SwtichSts 1 "Press" 0 "no press"
#define  CAN_ALL_GW_cb1MP5_AFS_SwtichSts_Press 1
#define  CAN_ALL_GW_cb1MP5_AFS_SwtichSts_no_press  0 
//1328 MP5_PaakReset_Req 1 "Request" 0 "No Request"
#define  CAN_ALL_GW_cb1MP5_PaakReset_Req_Request 1
#define  CAN_ALL_GW_cb1MP5_PaakReset_Req_No_Request  0 
//1328 MP5_LDWSensitvity 2 "Reserved" 1 "Low" 0 "High"
#define  CAN_ALL_GW_ce2MP5_LDWSensitvity_Reserved 2
#define  CAN_ALL_GW_ce2MP5_LDWSensitvity_Low  1 
#define  CAN_ALL_GW_ce2MP5_LDWSensitvity_High  0 
//1328 MP5_LDWWarning 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake"
#define  CAN_ALL_GW_ce2MP5_LDWWarning_Reserved 3
#define  CAN_ALL_GW_ce2MP5_LDWWarning_wheelsteer_shake  2 
#define  CAN_ALL_GW_ce2MP5_LDWWarning_audible_warning  1 
#define  CAN_ALL_GW_ce2MP5_LDWWarning_audible_warning_and_wheelsteer_shake  0 
//1328 MP5_TSRMenuReq 1 "OFF" 0 "ON"
#define  CAN_ALL_GW_cb1MP5_TSRMenuReq_OFF 1
#define  CAN_ALL_GW_cb1MP5_TSRMenuReq_ON  0 
//1328 MP5_BSDLCA_Active 1 "OFF" 0 "ON"
#define  CAN_ALL_GW_cb1MP5_BSDLCA_Active_OFF 1
#define  CAN_ALL_GW_cb1MP5_BSDLCA_Active_ON  0 
//1328 MP5_CTA_Active 1 "OFF" 0 "ON"
#define  CAN_ALL_GW_cb1MP5_CTA_Active_OFF 1
#define  CAN_ALL_GW_cb1MP5_CTA_Active_ON  0 
//1328 MP5_DOA_Active 1 "OFF" 0 "ON"
#define  CAN_ALL_GW_cb1MP5_DOA_Active_OFF 1
#define  CAN_ALL_GW_cb1MP5_DOA_Active_ON  0 
//1328 MP5_IHCMenuReq 1 "OFF" 0 "ON"
#define  CAN_ALL_GW_cb1MP5_IHCMenuReq_OFF 1
#define  CAN_ALL_GW_cb1MP5_IHCMenuReq_ON  0 
//1328 MP5_AVM_RotationDirection 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial"
#define  CAN_ALL_GW_ce2MP5_AVM_RotationDirection_Reserved 3
#define  CAN_ALL_GW_ce2MP5_AVM_RotationDirection_Anticlockwise  2 
#define  CAN_ALL_GW_ce2MP5_AVM_RotationDirection_Clockwise  1 
#define  CAN_ALL_GW_ce2MP5_AVM_RotationDirection_Initial  0 
//1328 MP5_TPMSAutoLocationSetting 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF"
#define  CAN_ALL_GW_cb1MP5_TPMSAutoLocationSetting_AutoLocationSettingON 1
#define  CAN_ALL_GW_cb1MP5_TPMSAutoLocationSetting_AutoLocationSettingOFF  0 
//--Can_NR=6frame id is 0xFFFFFFFF80000533
//1331 Nav_CurrRoadType 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow"
#define  CAN_ALL_GW_ce4Nav_CurrRoadType_Country_road 4
#define  CAN_ALL_GW_ce4Nav_CurrRoadType_Downtown_road  3 
#define  CAN_ALL_GW_ce4Nav_CurrRoadType_City_express_way  2 
#define  CAN_ALL_GW_ce4Nav_CurrRoadType_High_speed_road  1 
#define  CAN_ALL_GW_ce4Nav_CurrRoadType_Unknow  0 
//1331 Nav_SpeedLimitUnits 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown"
#define  CAN_ALL_GW_ce2Nav_SpeedLimitUnits_Reserved 3
#define  CAN_ALL_GW_ce2Nav_SpeedLimitUnits_KMH  2 
#define  CAN_ALL_GW_ce2Nav_SpeedLimitUnits_MPH  1 
#define  CAN_ALL_GW_ce2Nav_SpeedLimitUnits_Unknown  0 
//1331 Nav_SpeedLimitStatus 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN"
#define  CAN_ALL_GW_ce2Nav_SpeedLimitStatus_SL_PLURAL 3
#define  CAN_ALL_GW_ce2Nav_SpeedLimitStatus_SL_NOLIMIT  2 
#define  CAN_ALL_GW_ce2Nav_SpeedLimitStatus_SL_EXISTS  1 
#define  CAN_ALL_GW_ce2Nav_SpeedLimitStatus_SL_UNKNOWN  0 
//1331 Nav_SpeedLimit 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display"
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_SPL_130 26
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_SPL_25  5 
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_SPL_20  4 
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_SPL_15  3 
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_SPL_10  2 
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_SPL_5  1 
#define  CAN_ALL_GW_ce6Nav_SpeedLimit_No_Display  0 
//1331 Nav_Sts 1 "Active" 0 "Inactive"
#define  CAN_ALL_GW_cb1Nav_Sts_Active 1
#define  CAN_ALL_GW_cb1Nav_Sts_Inactive  0 
//1331 MP5_APA_Function_Select 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press"
#define  CAN_ALL_GW_ce2MP5_APA_Function_Select_POC_Button_Press 3
#define  CAN_ALL_GW_ce2MP5_APA_Function_Select_cPSC_Button_Press  2 
#define  CAN_ALL_GW_ce2MP5_APA_Function_Select_pPSC_Button_Press  1 
#define  CAN_ALL_GW_ce2MP5_APA_Function_Select_No_Button_Press  0 
//1331 MP5_APA_ConfirmButton 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press"
#define  CAN_ALL_GW_ce2MP5_APA_ConfirmButton_Reserved 3
#define  CAN_ALL_GW_ce2MP5_APA_ConfirmButton_Terminated_Button_Press  2 
#define  CAN_ALL_GW_ce2MP5_APA_ConfirmButton_Comfirm_Button_Press  1 
#define  CAN_ALL_GW_ce2MP5_APA_ConfirmButton_No_Button_Press  0 
//--Can_NR=7frame id is 0xFFFFFFFF8000031B
//795 SWM_ACCResume_Qt 1 "Invalid" 0 "valid"
#define  CAN_ALL_GW_cb1SWM_ACCResume_Qt_Invalid 1
#define  CAN_ALL_GW_cb1SWM_ACCResume_Qt_valid  0 
//795 SWM_ACCEnableSwitch 1 "enable ACC control" 0 "prevent ACC control"
#define  CAN_ALL_GW_cb1SWM_ACCEnableSwitch_enable_ACC_control 1
#define  CAN_ALL_GW_cb1SWM_ACCEnableSwitch_prevent_ACC_control  0 
//795 SWM_ACCSet 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCSet_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCSet_no_press  0 
//795 SWM_ACCResume 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCResume_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCResume_no_press  0 
//795 SWM_ACCDeactivate 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCDeactivate_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCDeactivate_no_press  0 
//795 SWM_ACCvSetPlus 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCvSetPlus_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCvSetPlus_no_press  0 
//795 SWM_ACCvSetMinus 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCvSetMinus_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCvSetMinus_no_press  0 
//795 SWM_ACCtauGapSetPlus 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCtauGapSetPlus_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCtauGapSetPlus_no_press  0 
//795 SWM_ACCtauGapSetMinus 1 "pressed" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ACCtauGapSetMinus_pressed 1
#define  CAN_ALL_GW_cb1SWM_ACCtauGapSetMinus_no_press  0 
//795 SWM_LaneAssistSwitch 1 "enable LaneAssist control" 0 "prevent LaneAssist control"
#define  CAN_ALL_GW_cb1SWM_LaneAssistSwitch_enable_LaneAssist_control 1
#define  CAN_ALL_GW_cb1SWM_LaneAssistSwitch_prevent_LaneAssist_control  0 
//795 SWM_ACCLimpHomeSts 1 "LimpHome" 0 "Normal"
#define  CAN_ALL_GW_cb1SWM_ACCLimpHomeSts_LimpHome 1
#define  CAN_ALL_GW_cb1SWM_ACCLimpHomeSts_Normal  0 
//795 SWM_ShiftPadReqUp 1 "press" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ShiftPadReqUp_press 1
#define  CAN_ALL_GW_cb1SWM_ShiftPadReqUp_no_press  0 
//795 SWM_ShiftPadReqDown 1 "press" 0 "no press"
#define  CAN_ALL_GW_cb1SWM_ShiftPadReqDown_press 1
#define  CAN_ALL_GW_cb1SWM_ShiftPadReqDown_no_press  0 
//795 SWM_TJASwitch 1 "enable TJA control" 0 "prevent TJA control"
#define  CAN_ALL_GW_cb1SWM_TJASwitch_enable_TJA_control 1
#define  CAN_ALL_GW_cb1SWM_TJASwitch_prevent_TJA_control  0 
//795 SWM_ShiftPadFlt 1 "Fault" 0 "No Fault"
#define  CAN_ALL_GW_cb1SWM_ShiftPadFlt_Fault 1
#define  CAN_ALL_GW_cb1SWM_ShiftPadFlt_No_Fault  0 
//--Can_NR=8frame id is 0xFFFFFFFF8000031A
//794 SWM_RWasherSts 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_RWasherSts_Invalid 3
#define  CAN_ALL_GW_ce2SWM_RWasherSts_reserved  2 
#define  CAN_ALL_GW_ce2SWM_RWasherSts_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_RWasherSts_Released  0 
//794 SWM_FWasherSts 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_FWasherSts_Invalid 3
#define  CAN_ALL_GW_ce2SWM_FWasherSts_reserved  2 
#define  CAN_ALL_GW_ce2SWM_FWasherSts_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_FWasherSts_Released  0 
//794 SWM_LampLimpHomeSts 1 "LimpHome" 0 "Normal"
#define  CAN_ALL_GW_cb1SWM_LampLimpHomeSts_LimpHome 1
#define  CAN_ALL_GW_cb1SWM_LampLimpHomeSts_Normal  0 
//794 SWM_WasherLimpHomeSts 1 "LimpHome" 0 "Normal"
#define  CAN_ALL_GW_cb1SWM_WasherLimpHomeSts_LimpHome 1
#define  CAN_ALL_GW_cb1SWM_WasherLimpHomeSts_Normal  0 
//794 SWM_HighBeam 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_HighBeam_Invalid 3
#define  CAN_ALL_GW_ce2SWM_HighBeam_reserved  2 
#define  CAN_ALL_GW_ce2SWM_HighBeam_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_HighBeam_Released  0 
//794 SWM_WipingInterval_Sensitvity 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0"
#define  CAN_ALL_GW_ce3SWM_WipingInterval_Sensitvity_Invalid 7
#define  CAN_ALL_GW_ce3SWM_WipingInterval_Sensitvity_Sensitivity_3  3 
#define  CAN_ALL_GW_ce3SWM_WipingInterval_Sensitvity_Sensitivity_2  2 
#define  CAN_ALL_GW_ce3SWM_WipingInterval_Sensitvity_Sensitivity_1  1 
#define  CAN_ALL_GW_ce3SWM_WipingInterval_Sensitvity_Sensitivity_0  0 
//794 SWM_FrontWipingMode 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off"
#define  CAN_ALL_GW_ce3SWM_FrontWipingMode_Invalid 7
#define  CAN_ALL_GW_ce3SWM_FrontWipingMode_Front_Auto_Interval_wiping_activation  4 
#define  CAN_ALL_GW_ce3SWM_FrontWipingMode_Front_Mist_wiping_activation  3 
#define  CAN_ALL_GW_ce3SWM_FrontWipingMode_Front_Wiper_speed_high_activation  2 
#define  CAN_ALL_GW_ce3SWM_FrontWipingMode_Front_Wiper_speed_low_activation  1 
#define  CAN_ALL_GW_ce3SWM_FrontWipingMode_Front_Wiping_off  0 
//794 SWM_FlashLightSts 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_FlashLightSts_Invalid 3
#define  CAN_ALL_GW_ce2SWM_FlashLightSts_reserved  2 
#define  CAN_ALL_GW_ce2SWM_FlashLightSts_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_FlashLightSts_Released  0 
//794 SWM_TurnIndicationAct 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default"
#define  CAN_ALL_GW_ce2SWM_TurnIndicationAct_Invalid 3
#define  CAN_ALL_GW_ce2SWM_TurnIndicationAct_Turn_Right  2 
#define  CAN_ALL_GW_ce2SWM_TurnIndicationAct_Turn_Left  1 
#define  CAN_ALL_GW_ce2SWM_TurnIndicationAct_Default  0 
//794 SWM_RearWipingMode 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off"
#define  CAN_ALL_GW_ce2SWM_RearWipingMode_Invalid 3
#define  CAN_ALL_GW_ce2SWM_RearWipingMode_reserved  2 
#define  CAN_ALL_GW_ce2SWM_RearWipingMode_Rear_Wiper_uniformity_speed  1 
#define  CAN_ALL_GW_ce2SWM_RearWipingMode_RearWiping_off  0 
//794 SWM_FrontFogLight 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF"
#define  CAN_ALL_GW_ce2SWM_FrontFogLight_Invalid 3
#define  CAN_ALL_GW_ce2SWM_FrontFogLight_reserved  2 
#define  CAN_ALL_GW_ce2SWM_FrontFogLight_ON  1 
#define  CAN_ALL_GW_ce2SWM_FrontFogLight_OFF  0 
//794 SWM_RearFogLight 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_RearFogLight_Invalid 3
#define  CAN_ALL_GW_ce2SWM_RearFogLight_reserved  2 
#define  CAN_ALL_GW_ce2SWM_RearFogLight_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_RearFogLight_Released  0 
//794 SWM_HeadLamp 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF"
#define  CAN_ALL_GW_ce3SWM_HeadLamp_Invalid 4
#define  CAN_ALL_GW_ce3SWM_HeadLamp_LowBeam  3 
#define  CAN_ALL_GW_ce3SWM_HeadLamp_PositionLight  2 
#define  CAN_ALL_GW_ce3SWM_HeadLamp_AutoLight  1 
#define  CAN_ALL_GW_ce3SWM_HeadLamp_OFF  0 
//794 SWM_Wechat 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_cb1SWM_Wechat_Pressed 1
#define  CAN_ALL_GW_cb1SWM_Wechat_Released  0 
//794 SWM_VOL_Minus 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_VOL_Minus_Invalid 3
#define  CAN_ALL_GW_ce2SWM_VOL_Minus_reserved  2 
#define  CAN_ALL_GW_ce2SWM_VOL_Minus_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_VOL_Minus_Released  0 
//794 SWM_VOL_Plus 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_VOL_Plus_Invalid 3
#define  CAN_ALL_GW_ce2SWM_VOL_Plus_reserved  2 
#define  CAN_ALL_GW_ce2SWM_VOL_Plus_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_VOL_Plus_Released  0 
//794 SWM_Mute 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Mute_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Mute_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Mute_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Mute_Released  0 
//794 SWM_Phone 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Phone_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Phone_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Phone_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Phone_Released  0 
//794 SWM_Previous_Song 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Previous_Song_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Previous_Song_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Previous_Song_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Previous_Song_Released  0 
//794 SWM_Next_Song 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Next_Song_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Next_Song_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Next_Song_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Next_Song_Released  0 
//794 SWM_Menu_Up 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Menu_Up_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Menu_Up_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Menu_Up_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Menu_Up_Released  0 
//794 SWM_Menu_Down 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Menu_Down_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Menu_Down_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Menu_Down_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Menu_Down_Released  0 
//794 SWM_Menu_Left 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Menu_Left_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Menu_Left_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Menu_Left_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Menu_Left_Released  0 
//794 SWM_Menu_Right 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Menu_Right_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Menu_Right_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Menu_Right_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Menu_Right_Released  0 
//794 SWM_Menu_Confirm 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Menu_Confirm_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Menu_Confirm_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Menu_Confirm_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Menu_Confirm_Released  0 
//794 SWM_Menu_Return 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released"
#define  CAN_ALL_GW_ce2SWM_Menu_Return_Invalid 3
#define  CAN_ALL_GW_ce2SWM_Menu_Return_reserved  2 
#define  CAN_ALL_GW_ce2SWM_Menu_Return_Pressed  1 
#define  CAN_ALL_GW_ce2SWM_Menu_Return_Released  0 
//--Can_NR=9frame id is 0xFFFFFFFF80000123
//291 TCU_CurrentGearPosition 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN"
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_Invalid 15
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_Reversegear  14 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_8thgear  8 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_7thgear  7 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_6thgear  6 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_5thgear  5 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_4thgear  4 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_3rdgear  3 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_2ndgear  2 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_1stgear  1 
#define  CAN_ALL_GW_ce4TCU_CurrentGearPosition_Drivetrainopen_GearN  0 
//291 TCU_TargetGearReq 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN"
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_Invalid 15
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_Reversegear  14 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_8thgear  8 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_7thgear  7 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_6thgear  6 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_5thgear  5 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_4thgear  4 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_3rdgear  3 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_2ndgear  2 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_1stgear  1 
#define  CAN_ALL_GW_ce4TCU_TargetGearReq_Drivetrainopen_GearN  0 
//291 TCU_GearSelectorReq 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P"
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_Invalid 15
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_M  8 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_R  7 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_N  6 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_D  5 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_3_Reserved  3 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_2_Reserved  2 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_L_Reserved  1 
#define  CAN_ALL_GW_ce4TCU_GearSelectorReq_P  0 
//291 TCU_DisplayGear 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N"
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Invalid 15
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Reserved  14 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Current_gear_P  13 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Reserved  12 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Current_gear_R  11 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Current_Gear_L  10 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Current_Gear_D  9 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_8  8 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_7  7 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_6  6 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_5  5 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_4  4 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_3  3 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_2  2 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_gear_1  1 
#define  CAN_ALL_GW_ce4TCU_DisplayGear_Current_gear_N  0 
//291 TCU_ShiftLeverPos_SBWM 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P"
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_Invalid 7
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_Reserved  6 
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_Blank  5 
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_M  4 
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_R  3 
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_N  2 
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_D  1 
#define  CAN_ALL_GW_ce3TCU_ShiftLeverPos_SBWM_P  0 
//291 TCU_GearShiftInProgress 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress"
#define  CAN_ALL_GW_cb1TCU_GearShiftInProgress_Gearshiftinprogress 1
#define  CAN_ALL_GW_cb1TCU_GearShiftInProgress_Nogearshiftinprogress  0 
//291 TCU_TransPmotoparkReqInvalid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_GW_cb1TCU_TransPmotoparkReqInvalid_Invalid 1
#define  CAN_ALL_GW_cb1TCU_TransPmotoparkReqInvalid_Valid  0 
//291 TCU_StGearMode 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard"
#define  CAN_ALL_GW_ce4TCU_StGearMode_invalid 15
#define  CAN_ALL_GW_ce4TCU_StGearMode_ATSFaultTCU  14 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Manual  13 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Ghat  9 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Sand  8 
#define  CAN_ALL_GW_ce4TCU_StGearMode_WetMud  7 
#define  CAN_ALL_GW_ce4TCU_StGearMode_4L  5 
#define  CAN_ALL_GW_ce4TCU_StGearMode_ECO  4 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Sport  3 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Manual_reserved  2 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Snow  1 
#define  CAN_ALL_GW_ce4TCU_StGearMode_Standard  0 
//291 TCU_TrsmFaultFlag 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal"
#define  CAN_ALL_GW_ce2TCU_TrsmFaultFlag_reserved 3
#define  CAN_ALL_GW_ce2TCU_TrsmFaultFlag_fail_limp_homeactivated  2 
#define  CAN_ALL_GW_ce2TCU_TrsmFaultFlag_failure_nolimp_home  1 
#define  CAN_ALL_GW_ce2TCU_TrsmFaultFlag_Normal  0 
//291 TCU_DriverIntervention 1 "Driverintervention" 0 "nointervention"
#define  CAN_ALL_GW_cb1TCU_DriverIntervention_Driverintervention 1
#define  CAN_ALL_GW_cb1TCU_DriverIntervention_nointervention  0 
//291 TCU_available 1 "available" 0 "notavailable"
#define  CAN_ALL_GW_cb1TCU_available_available 1
#define  CAN_ALL_GW_cb1TCU_available_notavailable  0 
//291 TCU_ShiftLevertoPReqInvalid 1 "Invalid" 0 "Valid"
#define  CAN_ALL_GW_cb1TCU_ShiftLevertoPReqInvalid_Invalid 1
#define  CAN_ALL_GW_cb1TCU_ShiftLevertoPReqInvalid_Valid  0 
//291 TCU_DrivingModeChange_Fault_flag 1 "Fault" 0 "Nofault"
#define  CAN_ALL_GW_cb1TCU_DrivingModeChange_Fault_flag_Fault 1
#define  CAN_ALL_GW_cb1TCU_DrivingModeChange_Fault_flag_Nofault  0 
//291 TCU_highresistance 1 "highresistance" 0 "no highresistance"
#define  CAN_ALL_GW_cb1TCU_highresistance_highresistance 1
#define  CAN_ALL_GW_cb1TCU_highresistance_no_highresistance  0 
//291 TCU_EPBLockReq 1 "Request Park Brake Engage" 0 "No request"
#define  CAN_ALL_GW_cb1TCU_EPBLockReq_Request_Park_Brake_Engage 1
#define  CAN_ALL_GW_cb1TCU_EPBLockReq_No_request  0 
//291 TCU_Driving_mode_req 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal"
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Invalid 15
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_SwitchFault  14 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Sand  8 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_WetMud  7 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Rock  6 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_4L  5 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_ECO  4 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Sport  3 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Noused  2 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Snow  1 
#define  CAN_ALL_GW_ce4TCU_Driving_mode_req_Normal  0 
//291 TCU_ShiftLevertoPReq 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest"
#define  CAN_ALL_GW_ce2TCU_ShiftLevertoPReq_reserved 3
#define  CAN_ALL_GW_ce2TCU_ShiftLevertoPReq_Reserved  2 
#define  CAN_ALL_GW_ce2TCU_ShiftLevertoPReq_ParkRequest  1 
#define  CAN_ALL_GW_ce2TCU_ShiftLevertoPReq_NoRequest  0 
//291 TCU_transPmotorparkReq 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest"
#define  CAN_ALL_GW_ce2TCU_transPmotorparkReq_reserved 3
#define  CAN_ALL_GW_ce2TCU_transPmotorparkReq_ParkRequest  2 
#define  CAN_ALL_GW_ce2TCU_transPmotorparkReq_UnparkRequest  1 
#define  CAN_ALL_GW_ce2TCU_transPmotorparkReq_NoRequest  0 
//--Can_NR=10frame id is 0xFFFFFFFF80000101
//257 EMS_EngSpeedError 1 "Error" 0 "NoError"
#define  CAN_ALL_GW_cb1EMS_EngSpeedError_Error 1
#define  CAN_ALL_GW_cb1EMS_EngSpeedError_NoError  0 
//--Can_NR=11frame id is 0xFFFFFFFF80000151
//337 EMS_EngineStopStartStatus 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode"
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_Reserved 7
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_EngineAuto_stopping  6 
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_EngineOperation  5 
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_EngineRestart  4 
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_StarterRestart  3 
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_EngineStopped  2 
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_EngineStandby  1 
#define  CAN_ALL_GW_ce3EMS_EngineStopStartStatus_Non_start_Stopmode  0 
//337 EMS_ATSDrivingModeStatus 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard"
#define  CAN_ALL_GW_ce2EMS_ATSDrivingModeStatus_Invalid 3
#define  CAN_ALL_GW_ce2EMS_ATSDrivingModeStatus_ECO  2 
#define  CAN_ALL_GW_ce2EMS_ATSDrivingModeStatus_Sport  1 
#define  CAN_ALL_GW_ce2EMS_ATSDrivingModeStatus_Standard  0 
//337 EMS_DrivingModeChange_Fault_flag 1 "Fault" 0 "Normal"
#define  CAN_ALL_GW_cb1EMS_DrivingModeChange_Fault_flag_Fault 1
#define  CAN_ALL_GW_cb1EMS_DrivingModeChange_Fault_flag_Normal  0 
//337 EMS_CruiseControlStatus 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff"
#define  CAN_ALL_GW_ce2EMS_CruiseControlStatus_Error 3
#define  CAN_ALL_GW_ce2EMS_CruiseControlStatus_Standby  2 
#define  CAN_ALL_GW_ce2EMS_CruiseControlStatus_Active  1 
#define  CAN_ALL_GW_ce2EMS_CruiseControlStatus_CruiseControlOoff  0 
//--Can_NR=12frame id is 0xFFFFFFFF80000107
//263 EMS_BrkPedalStasus 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed"
#define  CAN_ALL_GW_ce2EMS_BrkPedalStasus_Error 3
#define  CAN_ALL_GW_ce2EMS_BrkPedalStasus_Reserved  2 
#define  CAN_ALL_GW_ce2EMS_BrkPedalStasus_Pressed  1 
#define  CAN_ALL_GW_ce2EMS_BrkPedalStasus_NotPressed  0 
//263 EMS_ACCPedalRatioError 1 "Error" 0 "NoError"
#define  CAN_ALL_GW_cb1EMS_ACCPedalRatioError_Error 1
#define  CAN_ALL_GW_cb1EMS_ACCPedalRatioError_NoError  0 
//263 EMS_KickDown 1 "Active" 0 "NotActive"
#define  CAN_ALL_GW_cb1EMS_KickDown_Active 1
#define  CAN_ALL_GW_cb1EMS_KickDown_NotActive  0 
//--Can_NR=13frame id is 0xFFFFFFFF80000111
//273 EMS_IndicatedDriverOverride 1 "DriverOverride" 0 "NoOverride"
#define  CAN_ALL_GW_cb1EMS_IndicatedDriverOverride_DriverOverride 1
#define  CAN_ALL_GW_cb1EMS_IndicatedDriverOverride_NoOverride  0 
//273 EMS_IndicatedACCMesgError 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror"
#define  CAN_ALL_GW_ce2EMS_IndicatedACCMesgError_NotDefined 3
#define  CAN_ALL_GW_ce2EMS_IndicatedACCMesgError_Irreversible不可挽回error  2 
#define  CAN_ALL_GW_ce2EMS_IndicatedACCMesgError_Reversible可挽回error  1 
#define  CAN_ALL_GW_ce2EMS_IndicatedACCMesgError_NoEerror  0 
//--Can_NR=14frame id is 0xFFFFFFFF80000142
//322 EMS_EngOperationStatus 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped"
#define  CAN_ALL_GW_ce3EMS_EngOperationStatus_Stalling 5
#define  CAN_ALL_GW_ce3EMS_EngOperationStatus_Cranking  4 
#define  CAN_ALL_GW_ce3EMS_EngOperationStatus_DFCO_Reserved  3 
#define  CAN_ALL_GW_ce3EMS_EngOperationStatus_Idle  2 
#define  CAN_ALL_GW_ce3EMS_EngOperationStatus_Running  1 
#define  CAN_ALL_GW_ce3EMS_EngOperationStatus_Stopped  0 
//322 EMS_ThrottlePlatePositionError 1 "Error" 0 "NoError"
#define  CAN_ALL_GW_cb1EMS_ThrottlePlatePositionError_Error 1
#define  CAN_ALL_GW_cb1EMS_ThrottlePlatePositionError_NoError  0 
//322 EMS_AirCompressorStatus 1 "On" 0 "Off"
#define  CAN_ALL_GW_cb1EMS_AirCompressorStatus_On 1
#define  CAN_ALL_GW_cb1EMS_AirCompressorStatus_Off  0 
//322 EMS_StartStopMessage 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage"
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_Reserved 15
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_Manuallyrestart  14 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_startstopfailure  13 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_steeringangelhigh  12 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_drviedooropne  11 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_Hoodopen  10 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_startprotect  9 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_TCUinhibit  8 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_ACCinhibit  7 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_APAinhibit  6 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_ECTlow  5 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_Batterylow  4 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_Start&Stopoff  3 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_brakelow  2 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_Climaterequest  1 
#define  CAN_ALL_GW_ce4EMS_StartStopMessage_nowarningmessage  0 
//322 EMS_IgnSwtSts 1 "Ignitionon" 0 "Ignitionoff"
#define  CAN_ALL_GW_cb1EMS_IgnSwtSts_Ignitionon 1
#define  CAN_ALL_GW_cb1EMS_IgnSwtSts_Ignitionoff  0 

//CAN有符号变量：该变量是正负整数
#define  CAN_ALL_GW_s8BCM_OutsideTemp_offset 64
#define  CAN_ALL_GW_s8BCM_OutsideTemp_Nmax 64
#define  CAN_ALL_GW_s8BCM_OutsideTemp_Pmax 190
#define  CAN_ALL_GW_s12EMS_RngModTorqCrSLeadMax_offset 2000
#define  CAN_ALL_GW_s12EMS_RngModTorqCrSLeadMax_Nmax 2000
#define  CAN_ALL_GW_s12EMS_RngModTorqCrSLeadMax_Pmax 2000
#define  CAN_ALL_GW_s12EMS_IndicatedRealEngTorq_offset 2000
#define  CAN_ALL_GW_s12EMS_IndicatedRealEngTorq_Nmax 2000
#define  CAN_ALL_GW_s12EMS_IndicatedRealEngTorq_Pmax 2000
#define  CAN_ALL_GW_s12EMS_RngModTorqCrSLeadMin_offset 2000
#define  CAN_ALL_GW_s12EMS_RngModTorqCrSLeadMin_Nmax 2000
#define  CAN_ALL_GW_s12EMS_RngModTorqCrSLeadMin_Pmax 2000
#define  CAN_ALL_GW_s10EMS_VacuumPressure_offset 927
#define  CAN_ALL_GW_s10EMS_VacuumPressure_Nmax 927
#define  CAN_ALL_GW_s10EMS_VacuumPressure_Pmax 50
#define  CAN_ALL_GW_s16MaxIndicatedTorqWhl_offset 30000
#define  CAN_ALL_GW_s16MaxIndicatedTorqWhl_Nmax 30000
#define  CAN_ALL_GW_s16MaxIndicatedTorqWhl_Pmax 30000
#define  CAN_ALL_GW_s16MinIndicatedTorqWhl_offset 30000
#define  CAN_ALL_GW_s16MinIndicatedTorqWhl_Nmax 30000
#define  CAN_ALL_GW_s16MinIndicatedTorqWhl_Pmax 30000
#define  CAN_ALL_GW_s16EMS_IndicatedDriverReqTorqWhl_offset 30000
#define  CAN_ALL_GW_s16EMS_IndicatedDriverReqTorqWhl_Nmax 30000
#define  CAN_ALL_GW_s16EMS_IndicatedDriverReqTorqWhl_Pmax 30000
#define  CAN_ALL_GW_s16EMS_IndicatedRealEngTorqWhl_offset 30000
#define  CAN_ALL_GW_s16EMS_IndicatedRealEngTorqWhl_Nmax 30000
#define  CAN_ALL_GW_s16EMS_IndicatedRealEngTorqWhl_Pmax 30000
#define  CAN_ALL_GW_s12EMS_IndicatedDriverReqTorq_offset 2000
#define  CAN_ALL_GW_s12EMS_IndicatedDriverReqTorq_Nmax 2000
#define  CAN_ALL_GW_s12EMS_IndicatedDriverReqTorq_Pmax 2000
#define  CAN_ALL_GW_s8EMS_IgnitionTiming_offset 60
#define  CAN_ALL_GW_s8EMS_IgnitionTiming_Nmax 60
#define  CAN_ALL_GW_s8EMS_IgnitionTiming_Pmax 60

//CAN无符号变量：define该变量的physical min-max
#define  CAN_ALL_GW_u2BCM_reverse_gear_min 0
#define  CAN_ALL_GW_u2BCM_reverse_gear_max 0x3
#define  CAN_ALL_GW_u2BCM_OutsideTempDig_min 0
#define  CAN_ALL_GW_u2BCM_OutsideTempDig_max 0x3
#define  CAN_ALL_GW_c4Reserve_1_2_5_min 0
#define  CAN_ALL_GW_c4Reserve_1_2_5_max 0xF
#define  CAN_ALL_GW_u8BCM_OutsideTemp_min 0
#define  CAN_ALL_GW_u8BCM_OutsideTemp_max 0xFE
#define  CAN_ALL_GW_u3BCM_PowerMode_min 0
#define  CAN_ALL_GW_u3BCM_PowerMode_max 0x7
#define  CAN_ALL_GW_u4BCM_Driving_mode_req_BCM_min 0
#define  CAN_ALL_GW_u4BCM_Driving_mode_req_BCM_max 0xF
#define  CAN_ALL_GW_c1Reserve_1_20_20_min 0
#define  CAN_ALL_GW_c1Reserve_1_20_20_max 0x1
#define  CAN_ALL_GW_u2BCM_HighBeamSts_min 0
#define  CAN_ALL_GW_u2BCM_HighBeamSts_max 0x3
#define  CAN_ALL_GW_c2Reserve_1_30_31_min 0
#define  CAN_ALL_GW_c2Reserve_1_30_31_max 0x3
#define  CAN_ALL_GW_u2BCM_LowBeamSts_min 0
#define  CAN_ALL_GW_u2BCM_LowBeamSts_max 0x3
#define  CAN_ALL_GW_u2BCM_FrntFogLmpSts_min 0
#define  CAN_ALL_GW_u2BCM_FrntFogLmpSts_max 0x3
#define  CAN_ALL_GW_u2BCM_AutolampSts_min 0
#define  CAN_ALL_GW_u2BCM_AutolampSts_max 0x3
#define  CAN_ALL_GW_u2BCM_BrakeFluidSts_min 0
#define  CAN_ALL_GW_u2BCM_BrakeFluidSts_max 0x3
#define  CAN_ALL_GW_u2BCM_RearDef_Status_min 0
#define  CAN_ALL_GW_u2BCM_RearDef_Status_max 0x3
#define  CAN_ALL_GW_u2BCM_SS_EnableSts_min 0
#define  CAN_ALL_GW_u2BCM_SS_EnableSts_max 0x3
#define  CAN_ALL_GW_u2BCM_PosLmpSts_min 0
#define  CAN_ALL_GW_u2BCM_PosLmpSts_max 0x3
#define  CAN_ALL_GW_u8BCM_BGLLumLvlSetting_min 0
#define  CAN_ALL_GW_u8BCM_BGLLumLvlSetting_max 0xFF
#define  CAN_ALL_GW_c8Reserve_1_56_63_min 0
#define  CAN_ALL_GW_c8Reserve_1_56_63_max 0xFF
#define  CAN_ALL_GW_u2BCM_DoorStsFrntLe_min 0
#define  CAN_ALL_GW_u2BCM_DoorStsFrntLe_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorStsFrntRi_min 0
#define  CAN_ALL_GW_u2BCM_DoorStsFrntRi_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorStsRearLe_min 0
#define  CAN_ALL_GW_u2BCM_DoorStsRearLe_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorStsRearRi_min 0
#define  CAN_ALL_GW_u2BCM_DoorStsRearRi_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorLockStsFrntLe_min 0
#define  CAN_ALL_GW_u2BCM_DoorLockStsFrntLe_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorLockStsFrntRi_min 0
#define  CAN_ALL_GW_u2BCM_DoorLockStsFrntRi_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorLockStsRearLe_min 0
#define  CAN_ALL_GW_u2BCM_DoorLockStsRearLe_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorLockStsRearRi_min 0
#define  CAN_ALL_GW_u2BCM_DoorLockStsRearRi_max 0x3
#define  CAN_ALL_GW_u5BCM_LockUnlockFeedback_min 0
#define  CAN_ALL_GW_u5BCM_LockUnlockFeedback_max 0x1F
#define  CAN_ALL_GW_u1BCM_LoadSensitivity_min 0
#define  CAN_ALL_GW_u1BCM_LoadSensitivity_max 0x1
#define  CAN_ALL_GW_u2BCM_AntiTheftSts_min 0
#define  CAN_ALL_GW_u2BCM_AntiTheftSts_max 0x3
#define  CAN_ALL_GW_u1BCM_TrunkDoorPreUnlockSts_min 0
#define  CAN_ALL_GW_u1BCM_TrunkDoorPreUnlockSts_max 0x1
#define  CAN_ALL_GW_c2Reserve_2_30_31_min 0
#define  CAN_ALL_GW_c2Reserve_2_30_31_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorStsTrunk_min 0
#define  CAN_ALL_GW_u2BCM_DoorStsTrunk_max 0x3
#define  CAN_ALL_GW_u2BCM_DoorLockStsTrunk_min 0
#define  CAN_ALL_GW_u2BCM_DoorLockStsTrunk_max 0x3
#define  CAN_ALL_GW_u2BCM_EnginehoodSts_min 0
#define  CAN_ALL_GW_u2BCM_EnginehoodSts_max 0x3
#define  CAN_ALL_GW_c1Reserve_2_24_24_min 0
#define  CAN_ALL_GW_c1Reserve_2_24_24_max 0x1
#define  CAN_ALL_GW_u2BCM_FrontWiperSts_min 0
#define  CAN_ALL_GW_u2BCM_FrontWiperSts_max 0x3
#define  CAN_ALL_GW_c4Reserve_2_34_37_min 0
#define  CAN_ALL_GW_c4Reserve_2_34_37_max 0xF
#define  CAN_ALL_GW_u2BCM_RearWiperSts_min 0
#define  CAN_ALL_GW_u2BCM_RearWiperSts_max 0x3
#define  CAN_ALL_GW_u3BCM_WindowsCMD_min 0
#define  CAN_ALL_GW_u3BCM_WindowsCMD_max 0x4
#define  CAN_ALL_GW_u2BCM_PLG_DriverSW_min 0
#define  CAN_ALL_GW_u2BCM_PLG_DriverSW_max 0x3
#define  CAN_ALL_GW_u2BCM_TurnIndicatorSts_min 0
#define  CAN_ALL_GW_u2BCM_TurnIndicatorSts_max 0x3
#define  CAN_ALL_GW_c1Reserve_2_40_40_min 0
#define  CAN_ALL_GW_c1Reserve_2_40_40_max 0x1
#define  CAN_ALL_GW_u4BCM_Rolling_counter_0x310_min 0
#define  CAN_ALL_GW_u4BCM_Rolling_counter_0x310_max 0xF
#define  CAN_ALL_GW_u8BCM_Checksum_0x310_min 0
#define  CAN_ALL_GW_u8BCM_Checksum_0x310_max 0xFF
#define  CAN_ALL_GW_u24IC_OdometerMasterValue_min 0
#define  CAN_ALL_GW_u24IC_OdometerMasterValue_max 0x989676
#define  CAN_ALL_GW_u2IC_QDashACCFail_min 0
#define  CAN_ALL_GW_u2IC_QDashACCFail_max 0x3
#define  CAN_ALL_GW_u1IC_DISFail_min 0
#define  CAN_ALL_GW_u1IC_DISFail_max 0x1
#define  CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC_min 0
#define  CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC_max 0x1
#define  CAN_ALL_GW_u3IC_AirbagTelltaleBehavior_min 0
#define  CAN_ALL_GW_u3IC_AirbagTelltaleBehavior_max 0x7
#define  CAN_ALL_GW_c3Reserve_3_25_27_min 0
#define  CAN_ALL_GW_c3Reserve_3_25_27_max 0x7
#define  CAN_ALL_GW_u9IC_VehSpd_HMI_min 0
#define  CAN_ALL_GW_u9IC_VehSpd_HMI_max 0x1F4
#define  CAN_ALL_GW_u4IC_Rolling_counter_0x510_min 0
#define  CAN_ALL_GW_u4IC_Rolling_counter_0x510_max 0xF
#define  CAN_ALL_GW_u8IC_Checksum_0x510_min 0
#define  CAN_ALL_GW_u8IC_Checksum_0x510_max 0xFF
#define  CAN_ALL_GW_u3TBOX_LocationSts_min 0
#define  CAN_ALL_GW_u3TBOX_LocationSts_max 0x6
#define  CAN_ALL_GW_u28TBOX_Latidude_min 0
#define  CAN_ALL_GW_u28TBOX_Latidude_max 0x55D4A80
#define  CAN_ALL_GW_u28TBOX_Longitude_min 0
#define  CAN_ALL_GW_u28TBOX_Longitude_max 0xABA9500
#define  CAN_ALL_GW_u1TBOX_GPS_UB_min 0
#define  CAN_ALL_GW_u1TBOX_GPS_UB_max 0x1
#define  CAN_ALL_GW_c3Reserve_4_56_58_min 0
#define  CAN_ALL_GW_c3Reserve_4_56_58_max 0x7
#define  CAN_ALL_GW_u2MP5_AVM_Button_min 0
#define  CAN_ALL_GW_u2MP5_AVM_Button_max 0x3
#define  CAN_ALL_GW_u4MP5_AVM_Angle_min 0
#define  CAN_ALL_GW_u4MP5_AVM_Angle_max 0xF
#define  CAN_ALL_GW_u2MP5_FCW_Sensitive_min 0
#define  CAN_ALL_GW_u2MP5_FCW_Sensitive_max 0x3
#define  CAN_ALL_GW_u1MP5_BSDSwitchSts_min 0
#define  CAN_ALL_GW_u1MP5_BSDSwitchSts_max 0x1
#define  CAN_ALL_GW_u1MP5_FCW_ON_OFF_min 0
#define  CAN_ALL_GW_u1MP5_FCW_ON_OFF_max 0x1
#define  CAN_ALL_GW_c1Reserve_5_14_14_min 0
#define  CAN_ALL_GW_c1Reserve_5_14_14_max 0x1
#define  CAN_ALL_GW_u1MP5_AEB_ON_OFF_min 0
#define  CAN_ALL_GW_u1MP5_AEB_ON_OFF_max 0x1
#define  CAN_ALL_GW_u2MP5_ICMenuShift_Button_min 0
#define  CAN_ALL_GW_u2MP5_ICMenuShift_Button_max 0x3
#define  CAN_ALL_GW_u1MP5_View_Choice_min 0
#define  CAN_ALL_GW_u1MP5_View_Choice_max 0x1
#define  CAN_ALL_GW_u1MP5_AlarmOrNot_min 0
#define  CAN_ALL_GW_u1MP5_AlarmOrNot_max 0x1
#define  CAN_ALL_GW_c1Reserve_5_8_8_min 0
#define  CAN_ALL_GW_c1Reserve_5_8_8_max 0x1
#define  CAN_ALL_GW_u2MP5_AlarmStatus_min 0
#define  CAN_ALL_GW_u2MP5_AlarmStatus_max 0x3
#define  CAN_ALL_GW_u2MP5_ICMenuActive_Button_min 0
#define  CAN_ALL_GW_u2MP5_ICMenuActive_Button_max 0x3
#define  CAN_ALL_GW_u2MP5_LaneAssitTypeReq_min 0
#define  CAN_ALL_GW_u2MP5_LaneAssitTypeReq_max 0x3
#define  CAN_ALL_GW_u1MP5_AFS_SwtichSts_min 0
#define  CAN_ALL_GW_u1MP5_AFS_SwtichSts_max 0x1
#define  CAN_ALL_GW_u1MP5_PaakReset_Req_min 0
#define  CAN_ALL_GW_u1MP5_PaakReset_Req_max 0x1
#define  CAN_ALL_GW_u2MP5_LDWSensitvity_min 0
#define  CAN_ALL_GW_u2MP5_LDWSensitvity_max 0x3
#define  CAN_ALL_GW_c7Reserve_5_24_30_min 0
#define  CAN_ALL_GW_c7Reserve_5_24_30_max 0x7F
#define  CAN_ALL_GW_c8Reserve_5_32_39_min 0
#define  CAN_ALL_GW_c8Reserve_5_32_39_max 0xFF
#define  CAN_ALL_GW_u2MP5_LDWWarning_min 0
#define  CAN_ALL_GW_u2MP5_LDWWarning_max 0x3
#define  CAN_ALL_GW_u1MP5_TSRMenuReq_min 0
#define  CAN_ALL_GW_u1MP5_TSRMenuReq_max 0x1
#define  CAN_ALL_GW_u1MP5_BSDLCA_Active_min 0
#define  CAN_ALL_GW_u1MP5_BSDLCA_Active_max 0x1
#define  CAN_ALL_GW_c1Reserve_5_42_42_min 0
#define  CAN_ALL_GW_c1Reserve_5_42_42_max 0x1
#define  CAN_ALL_GW_u1MP5_CTA_Active_min 0
#define  CAN_ALL_GW_u1MP5_CTA_Active_max 0x1
#define  CAN_ALL_GW_u1MP5_DOA_Active_min 0
#define  CAN_ALL_GW_u1MP5_DOA_Active_max 0x1
#define  CAN_ALL_GW_u1MP5_IHCMenuReq_min 0
#define  CAN_ALL_GW_u1MP5_IHCMenuReq_max 0x1
#define  CAN_ALL_GW_c1Reserve_5_54_54_min 0
#define  CAN_ALL_GW_c1Reserve_5_54_54_max 0x1
#define  CAN_ALL_GW_u6MP5_AVM_RotationChange_min 0
#define  CAN_ALL_GW_u6MP5_AVM_RotationChange_max 0x3F
#define  CAN_ALL_GW_u2MP5_AVM_RotationDirection_min 0
#define  CAN_ALL_GW_u2MP5_AVM_RotationDirection_max 0x3
#define  CAN_ALL_GW_u1MP5_TPMSAutoLocationSetting_min 0
#define  CAN_ALL_GW_u1MP5_TPMSAutoLocationSetting_max 0x1
#define  CAN_ALL_GW_u2MP5_APA_Available_Sts_min 0
#define  CAN_ALL_GW_u2MP5_APA_Available_Sts_max 0x1
#define  CAN_ALL_GW_u8Nav_CountryCode_min 0
#define  CAN_ALL_GW_u8Nav_CountryCode_max 0xFF
#define  CAN_ALL_GW_u4Nav_CurrRoadType_min 0
#define  CAN_ALL_GW_u4Nav_CurrRoadType_max 0xF
#define  CAN_ALL_GW_u2Nav_SpeedLimitUnits_min 0
#define  CAN_ALL_GW_u2Nav_SpeedLimitUnits_max 0x3
#define  CAN_ALL_GW_u2Nav_SpeedLimitStatus_min 0
#define  CAN_ALL_GW_u2Nav_SpeedLimitStatus_max 0x3
#define  CAN_ALL_GW_u6Nav_SpeedLimit_min 0
#define  CAN_ALL_GW_u6Nav_SpeedLimit_max 0x3F
#define  CAN_ALL_GW_u1Nav_Sts_min 0
#define  CAN_ALL_GW_u1Nav_Sts_max 0x1
#define  CAN_ALL_GW_c2Reserve_6_16_17_min 0
#define  CAN_ALL_GW_c2Reserve_6_16_17_max 0x3
#define  CAN_ALL_GW_u2MP5_APA_Function_Select_min 0
#define  CAN_ALL_GW_u2MP5_APA_Function_Select_max 0x3
#define  CAN_ALL_GW_u2MP5_APA_ConfirmButton_min 0
#define  CAN_ALL_GW_u2MP5_APA_ConfirmButton_max 0x3
#define  CAN_ALL_GW_u1MP5_APAActive_Cmd_min 0
#define  CAN_ALL_GW_u1MP5_APAActive_Cmd_max 0x1
#define  CAN_ALL_GW_c2Reserve_6_24_25_min 0
#define  CAN_ALL_GW_c2Reserve_6_24_25_max 0x3
#define  CAN_ALL_GW_c32Reserve_6_56_39_min 0
#define  CAN_ALL_GW_c32Reserve_6_56_39_max 0xFFFFFFFF
#define  CAN_ALL_GW_u1SWM_ACCResume_Qt_min 0
#define  CAN_ALL_GW_u1SWM_ACCResume_Qt_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCEnableSwitch_min 0
#define  CAN_ALL_GW_u1SWM_ACCEnableSwitch_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCSet_min 0
#define  CAN_ALL_GW_u1SWM_ACCSet_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCResume_min 0
#define  CAN_ALL_GW_u1SWM_ACCResume_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCDeactivate_min 0
#define  CAN_ALL_GW_u1SWM_ACCDeactivate_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCvSetPlus_min 0
#define  CAN_ALL_GW_u1SWM_ACCvSetPlus_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCvSetMinus_min 0
#define  CAN_ALL_GW_u1SWM_ACCvSetMinus_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCtauGapSetPlus_min 0
#define  CAN_ALL_GW_u1SWM_ACCtauGapSetPlus_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCtauGapSetMinus_min 0
#define  CAN_ALL_GW_u1SWM_ACCtauGapSetMinus_max 0x1
#define  CAN_ALL_GW_u1SWM_LaneAssistSwitch_min 0
#define  CAN_ALL_GW_u1SWM_LaneAssistSwitch_max 0x1
#define  CAN_ALL_GW_u1SWM_ACCLimpHomeSts_min 0
#define  CAN_ALL_GW_u1SWM_ACCLimpHomeSts_max 0x1
#define  CAN_ALL_GW_c2Reserve_7_12_13_min 0
#define  CAN_ALL_GW_c2Reserve_7_12_13_max 0x3
#define  CAN_ALL_GW_u1SWM_ShiftPadReqUp_min 0
#define  CAN_ALL_GW_u1SWM_ShiftPadReqUp_max 0x1
#define  CAN_ALL_GW_u1SWM_ShiftPadReqDown_min 0
#define  CAN_ALL_GW_u1SWM_ShiftPadReqDown_max 0x1
#define  CAN_ALL_GW_u1SWM_TJASwitch_min 0
#define  CAN_ALL_GW_u1SWM_TJASwitch_max 0x1
#define  CAN_ALL_GW_u1SWM_ShiftPadFlt_min 0
#define  CAN_ALL_GW_u1SWM_ShiftPadFlt_max 0x1
#define  CAN_ALL_GW_u4Rolling_counter_0x31B_min 0
#define  CAN_ALL_GW_u4Rolling_counter_0x31B_max 0xF
#define  CAN_ALL_GW_u8Checksum_0x31B_min 0
#define  CAN_ALL_GW_u8Checksum_0x31B_max 0xFF
#define  CAN_ALL_GW_u2SWM_RWasherSts_min 0
#define  CAN_ALL_GW_u2SWM_RWasherSts_max 0x3
#define  CAN_ALL_GW_u2SWM_FWasherSts_min 0
#define  CAN_ALL_GW_u2SWM_FWasherSts_max 0x3
#define  CAN_ALL_GW_u1SWM_LampLimpHomeSts_min 0
#define  CAN_ALL_GW_u1SWM_LampLimpHomeSts_max 0x1
#define  CAN_ALL_GW_u1SWM_WasherLimpHomeSts_min 0
#define  CAN_ALL_GW_u1SWM_WasherLimpHomeSts_max 0x1
#define  CAN_ALL_GW_u2SWM_HighBeam_min 0
#define  CAN_ALL_GW_u2SWM_HighBeam_max 0x3
#define  CAN_ALL_GW_u3SWM_WipingInterval_Sensitvity_min 0
#define  CAN_ALL_GW_u3SWM_WipingInterval_Sensitvity_max 0x7
#define  CAN_ALL_GW_u3SWM_FrontWipingMode_min 0
#define  CAN_ALL_GW_u3SWM_FrontWipingMode_max 0x7
#define  CAN_ALL_GW_u2SWM_FlashLightSts_min 0
#define  CAN_ALL_GW_u2SWM_FlashLightSts_max 0x3
#define  CAN_ALL_GW_u2SWM_TurnIndicationAct_min 0
#define  CAN_ALL_GW_u2SWM_TurnIndicationAct_max 0x3
#define  CAN_ALL_GW_u2SWM_RearWipingMode_min 0
#define  CAN_ALL_GW_u2SWM_RearWipingMode_max 0x3
#define  CAN_ALL_GW_u2SWM_FrontFogLight_min 0
#define  CAN_ALL_GW_u2SWM_FrontFogLight_max 0x3
#define  CAN_ALL_GW_u2SWM_RearFogLight_min 0
#define  CAN_ALL_GW_u2SWM_RearFogLight_max 0x3
#define  CAN_ALL_GW_u3SWM_HeadLamp_min 0
#define  CAN_ALL_GW_u3SWM_HeadLamp_max 0x3
#define  CAN_ALL_GW_u1SWM_Wechat_min 0
#define  CAN_ALL_GW_u1SWM_Wechat_max 0x1
#define  CAN_ALL_GW_u2SWM_VOL_Minus_min 0
#define  CAN_ALL_GW_u2SWM_VOL_Minus_max 0x3
#define  CAN_ALL_GW_u2SWM_VOL_Plus_min 0
#define  CAN_ALL_GW_u2SWM_VOL_Plus_max 0x3
#define  CAN_ALL_GW_u2SWM_Mute_min 0
#define  CAN_ALL_GW_u2SWM_Mute_max 0x3
#define  CAN_ALL_GW_u2SWM_Phone_min 0
#define  CAN_ALL_GW_u2SWM_Phone_max 0x3
#define  CAN_ALL_GW_u2SWM_Previous_Song_min 0
#define  CAN_ALL_GW_u2SWM_Previous_Song_max 0x3
#define  CAN_ALL_GW_u2SWM_Next_Song_min 0
#define  CAN_ALL_GW_u2SWM_Next_Song_max 0x3
#define  CAN_ALL_GW_u2SWM_Menu_Up_min 0
#define  CAN_ALL_GW_u2SWM_Menu_Up_max 0x3
#define  CAN_ALL_GW_u2SWM_Menu_Down_min 0
#define  CAN_ALL_GW_u2SWM_Menu_Down_max 0x3
#define  CAN_ALL_GW_u2SWM_Menu_Left_min 0
#define  CAN_ALL_GW_u2SWM_Menu_Left_max 0x3
#define  CAN_ALL_GW_u2SWM_Menu_Right_min 0
#define  CAN_ALL_GW_u2SWM_Menu_Right_max 0x3
#define  CAN_ALL_GW_u2SWM_Menu_Confirm_min 0
#define  CAN_ALL_GW_u2SWM_Menu_Confirm_max 0x3
#define  CAN_ALL_GW_u2SWM_Menu_Return_min 0
#define  CAN_ALL_GW_u2SWM_Menu_Return_max 0x3
#define  CAN_ALL_GW_u4Rolling_counter_0x31A_min 0
#define  CAN_ALL_GW_u4Rolling_counter_0x31A_max 0xF
#define  CAN_ALL_GW_u8Checksum_0x31A_min 0
#define  CAN_ALL_GW_u8Checksum_0x31A_max 0xFF
#define  CAN_ALL_GW_u4TCU_CurrentGearPosition_min 0
#define  CAN_ALL_GW_u4TCU_CurrentGearPosition_max 0xF
#define  CAN_ALL_GW_u4TCU_TargetGearReq_min 0
#define  CAN_ALL_GW_u4TCU_TargetGearReq_max 0xF
#define  CAN_ALL_GW_u4TCU_GearSelectorReq_min 0
#define  CAN_ALL_GW_u4TCU_GearSelectorReq_max 0xF
#define  CAN_ALL_GW_u4TCU_DisplayGear_min 0
#define  CAN_ALL_GW_u4TCU_DisplayGear_max 0xF
#define  CAN_ALL_GW_u3TCU_ShiftLeverPos_SBWM_min 0
#define  CAN_ALL_GW_u3TCU_ShiftLeverPos_SBWM_max 0x7
#define  CAN_ALL_GW_u1TCU_GearShiftInProgress_min 0
#define  CAN_ALL_GW_u1TCU_GearShiftInProgress_max 0x1
#define  CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid_min 0
#define  CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid_max 0x1
#define  CAN_ALL_GW_u4TCU_StGearMode_min 0
#define  CAN_ALL_GW_u4TCU_StGearMode_max 0xF
#define  CAN_ALL_GW_c11Reserve_9_24_18_min 0
#define  CAN_ALL_GW_c11Reserve_9_24_18_max 0x7FF
#define  CAN_ALL_GW_u2TCU_TrsmFaultFlag_min 0
#define  CAN_ALL_GW_u2TCU_TrsmFaultFlag_max 0x3
#define  CAN_ALL_GW_u1TCU_DriverIntervention_min 0
#define  CAN_ALL_GW_u1TCU_DriverIntervention_max 0x1
#define  CAN_ALL_GW_u1TCU_available_min 0
#define  CAN_ALL_GW_u1TCU_available_max 0x1
#define  CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid_min 0
#define  CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid_max 0x1
#define  CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag_min 0
#define  CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag_max 0x1
#define  CAN_ALL_GW_u1TCU_highresistance_min 0
#define  CAN_ALL_GW_u1TCU_highresistance_max 0x1
#define  CAN_ALL_GW_u1TCU_EPBLockReq_min 0
#define  CAN_ALL_GW_u1TCU_EPBLockReq_max 0x1
#define  CAN_ALL_GW_u4TCU_Driving_mode_req_min 0
#define  CAN_ALL_GW_u4TCU_Driving_mode_req_max 0xF
#define  CAN_ALL_GW_u2TCU_ShiftLevertoPReq_min 0
#define  CAN_ALL_GW_u2TCU_ShiftLevertoPReq_max 0x3
#define  CAN_ALL_GW_u2TCU_transPmotorparkReq_min 0
#define  CAN_ALL_GW_u2TCU_transPmotorparkReq_max 0x3
#define  CAN_ALL_GW_u4TCU_Status_AliveCounter0x123_min 0
#define  CAN_ALL_GW_u4TCU_Status_AliveCounter0x123_max 0xF
#define  CAN_ALL_GW_u8TCU_Status_Checksum0x123_min 0
#define  CAN_ALL_GW_u8TCU_Status_Checksum0x123_max 0xFF
#define  CAN_ALL_GW_u12EMS_RngModTorqCrSLeadMax_min 0
#define  CAN_ALL_GW_u12EMS_RngModTorqCrSLeadMax_max 0xFA0
#define  CAN_ALL_GW_u12EMS_IndicatedRealEngTorq_min 0
#define  CAN_ALL_GW_u12EMS_IndicatedRealEngTorq_max 0xFA0
#define  CAN_ALL_GW_u15EMS_EngSpeed_min 0
#define  CAN_ALL_GW_u15EMS_EngSpeed_max 0x7FFE
#define  CAN_ALL_GW_u1EMS_EngSpeedError_min 0
#define  CAN_ALL_GW_u1EMS_EngSpeedError_max 0x1
#define  CAN_ALL_GW_u12EMS_RngModTorqCrSLeadMin_min 0
#define  CAN_ALL_GW_u12EMS_RngModTorqCrSLeadMin_max 0xFA0
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x101_min 0
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x101_max 0xF
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x101_min 0
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x101_max 0xFF
#define  CAN_ALL_GW_u16EMS_EngOffTime_min 0
#define  CAN_ALL_GW_u16EMS_EngOffTime_max 0xFFFE
#define  CAN_ALL_GW_u8EMS_EngBarometricPressure_min 0
#define  CAN_ALL_GW_u8EMS_EngBarometricPressure_max 0xFE
#define  CAN_ALL_GW_u10EMS_VacuumPressure_min 0
#define  CAN_ALL_GW_u10EMS_VacuumPressure_max 0x3D1
#define  CAN_ALL_GW_u3EMS_EngineStopStartStatus_min 0
#define  CAN_ALL_GW_u3EMS_EngineStopStartStatus_max 0x7
#define  CAN_ALL_GW_u2EMS_ATSDrivingModeStatus_min 0
#define  CAN_ALL_GW_u2EMS_ATSDrivingModeStatus_max 0x3
#define  CAN_ALL_GW_u9EMS_TargCruiseSpeed_min 0
#define  CAN_ALL_GW_u9EMS_TargCruiseSpeed_max 0x1FE
#define  CAN_ALL_GW_u1EMS_DrivingModeChange_Fault_flag_min 0
#define  CAN_ALL_GW_u1EMS_DrivingModeChange_Fault_flag_max 0x1
#define  CAN_ALL_GW_c1Reserve_11_55_55_min 0
#define  CAN_ALL_GW_c1Reserve_11_55_55_max 0x1
#define  CAN_ALL_GW_u2EMS_CruiseControlStatus_min 0
#define  CAN_ALL_GW_u2EMS_CruiseControlStatus_max 0x3
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x151_min 0
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x151_max 0xF
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x151_min 0
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x151_max 0xFF
#define  CAN_ALL_GW_u16MaxIndicatedTorqWhl_min 0
#define  CAN_ALL_GW_u16MaxIndicatedTorqWhl_max 0xEA60
#define  CAN_ALL_GW_u16MinIndicatedTorqWhl_min 0
#define  CAN_ALL_GW_u16MinIndicatedTorqWhl_max 0xEA60
#define  CAN_ALL_GW_u8EMS_AccRAWPedalRatio_min 0
#define  CAN_ALL_GW_u8EMS_AccRAWPedalRatio_max 0xFE
#define  CAN_ALL_GW_u8EMS_AccPedalRatio_min 0
#define  CAN_ALL_GW_u8EMS_AccPedalRatio_max 0xFE
#define  CAN_ALL_GW_u2EMS_BrkPedalStasus_min 0
#define  CAN_ALL_GW_u2EMS_BrkPedalStasus_max 0x3
#define  CAN_ALL_GW_u1EMS_ACCPedalRatioError_min 0
#define  CAN_ALL_GW_u1EMS_ACCPedalRatioError_max 0x1
#define  CAN_ALL_GW_u1EMS_KickDown_min 0
#define  CAN_ALL_GW_u1EMS_KickDown_max 0x1
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x107_min 0
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x107_max 0xF
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x107_min 0
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x107_max 0xFF
#define  CAN_ALL_GW_u16EMS_IndicatedDriverReqTorqWhl_min 0
#define  CAN_ALL_GW_u16EMS_IndicatedDriverReqTorqWhl_max 0xEA60
#define  CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl_min 0
#define  CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl_max 0xEA60
#define  CAN_ALL_GW_u1EMS_IndicatedDriverOverride_min 0
#define  CAN_ALL_GW_u1EMS_IndicatedDriverOverride_max 0x1
#define  CAN_ALL_GW_u2EMS_IndicatedACCMesgError_min 0
#define  CAN_ALL_GW_u2EMS_IndicatedACCMesgError_max 0x3
#define  CAN_ALL_GW_c3Reserve_13_36_38_min 0
#define  CAN_ALL_GW_c3Reserve_13_36_38_max 0x7
#define  CAN_ALL_GW_u12EMS_IndicatedDriverReqTorq_min 0
#define  CAN_ALL_GW_u12EMS_IndicatedDriverReqTorq_max 0xFA0
#define  CAN_ALL_GW_c2Reserve_13_32_33_min 0
#define  CAN_ALL_GW_c2Reserve_13_32_33_max 0x3
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x111_min 0
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x111_max 0xF
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x111_min 0
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x111_max 0xFF
#define  CAN_ALL_GW_u8EMS_EngThrottlePosition_min 0
#define  CAN_ALL_GW_u8EMS_EngThrottlePosition_max 0xFE
#define  CAN_ALL_GW_u8EMS_IgnitionTiming_min 0
#define  CAN_ALL_GW_u8EMS_IgnitionTiming_max 0x78
#define  CAN_ALL_GW_u13EMS_SetlEngIdleSpeed_min 0
#define  CAN_ALL_GW_u13EMS_SetlEngIdleSpeed_max 0x1FFE
#define  CAN_ALL_GW_u3EMS_EngOperationStatus_min 0
#define  CAN_ALL_GW_u3EMS_EngOperationStatus_max 0x5
#define  CAN_ALL_GW_u1EMS_ThrottlePlatePositionError_min 0
#define  CAN_ALL_GW_u1EMS_ThrottlePlatePositionError_max 0x1
#define  CAN_ALL_GW_u1EMS_AirCompressorStatus_min 0
#define  CAN_ALL_GW_u1EMS_AirCompressorStatus_max 0x1
#define  CAN_ALL_GW_u4EMS_StartStopMessage_min 0
#define  CAN_ALL_GW_u4EMS_StartStopMessage_max 0xF
#define  CAN_ALL_GW_c6Reserve_14_32_37_min 0
#define  CAN_ALL_GW_c6Reserve_14_32_37_max 0x3F
#define  CAN_ALL_GW_u1EMS_IgnSwtSts_min 0
#define  CAN_ALL_GW_u1EMS_IgnSwtSts_max 0x1
#define  CAN_ALL_GW_c5Reserve_14_55_43_min 0
#define  CAN_ALL_GW_c5Reserve_14_55_43_max 0x1F
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x142_min 0
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x142_max 0xF
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x142_min 0
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x142_max 0xFF

//CANfactor分子分母定义
#define  CAN_ALL_GW_u2BCM_OutsideTempDig_factor 1
#define  CAN_ALL_GW_sm8BCM_OutsideTemp_factor 3
#define  CAN_ALL_GW_sd8BCM_OutsideTemp_factor 4
#define  CAN_ALL_GW_u4BCM_Driving_mode_req_BCM_factor 1
#define  CAN_ALL_GW_u3BCM_PowerMode_factor 1
#define  CAN_ALL_GW_u2BCM_FrntFogLmpSts_factor 1
#define  CAN_ALL_GW_u2BCM_LowBeamSts_factor 1
#define  CAN_ALL_GW_u2BCM_HighBeamSts_factor 1
#define  CAN_ALL_GW_u2BCM_SS_EnableSts_factor 1
#define  CAN_ALL_GW_u2BCM_RearDef_Status_factor 1
#define  CAN_ALL_GW_u2BCM_BrakeFluidSts_factor 1
#define  CAN_ALL_GW_u2BCM_AutolampSts_factor 1
#define  CAN_ALL_GW_u2BCM_PosLmpSts_factor 1
#define  CAN_ALL_GW_u8BCM_BGLLumLvlSetting_factor 1
#define  CAN_ALL_GW_u2BCM_reverse_gear_factor 1
#define  CAN_ALL_GW_u2BCM_DoorStsRearRi_factor 1
#define  CAN_ALL_GW_u2BCM_DoorLockStsRearLe_factor 1
#define  CAN_ALL_GW_u2BCM_DoorLockStsFrntRi_factor 1
#define  CAN_ALL_GW_u2BCM_DoorLockStsFrntLe_factor 1
#define  CAN_ALL_GW_u2BCM_AntiTheftSts_factor 1
#define  CAN_ALL_GW_u1BCM_LoadSensitivity_factor 1
#define  CAN_ALL_GW_u5BCM_LockUnlockFeedback_factor 1
#define  CAN_ALL_GW_u2BCM_DoorLockStsTrunk_factor 1
#define  CAN_ALL_GW_u2BCM_DoorStsTrunk_factor 1
#define  CAN_ALL_GW_u1BCM_TrunkDoorPreUnlockSts_factor 1
#define  CAN_ALL_GW_u2BCM_DoorStsRearLe_factor 1
#define  CAN_ALL_GW_u2BCM_FrontWiperSts_factor 1
#define  CAN_ALL_GW_u2BCM_EnginehoodSts_factor 1
#define  CAN_ALL_GW_u2BCM_PLG_DriverSW_factor 1
#define  CAN_ALL_GW_u3BCM_WindowsCMD_factor 1
#define  CAN_ALL_GW_u2BCM_RearWiperSts_factor 1
#define  CAN_ALL_GW_u2BCM_DoorStsFrntRi_factor 1
#define  CAN_ALL_GW_u4BCM_Rolling_counter_0x310_factor 1
#define  CAN_ALL_GW_u2BCM_TurnIndicatorSts_factor 1
#define  CAN_ALL_GW_u8BCM_Checksum_0x310_factor 1
#define  CAN_ALL_GW_u2BCM_DoorStsFrntLe_factor 1
#define  CAN_ALL_GW_u2BCM_DoorLockStsRearRi_factor 1
#define  CAN_ALL_GW_u3IC_AirbagTelltaleBehavior_factor 1
#define  CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC_factor 1
#define  CAN_ALL_GW_u1IC_DISFail_factor 1
#define  CAN_ALL_GW_u2IC_QDashACCFail_factor 1
#define  CAN_ALL_GW_u9IC_VehSpd_HMI_factor 1
#define  CAN_ALL_GW_u4IC_Rolling_counter_0x510_factor 1
#define  CAN_ALL_GW_u8IC_Checksum_0x510_factor 1
#define  CAN_ALL_GW_um24IC_OdometerMasterValue_factor 1
#define  CAN_ALL_GW_ud24IC_OdometerMasterValue_factor 10
#define  CAN_ALL_GW_um28TBOX_Longitude_factor 1E-06
#define  CAN_ALL_GW_ud28TBOX_Longitude_factor 1
#define  CAN_ALL_GW_um28TBOX_Latidude_factor 1E-06
#define  CAN_ALL_GW_ud28TBOX_Latidude_factor 1
#define  CAN_ALL_GW_u1TBOX_GPS_UB_factor 1
#define  CAN_ALL_GW_u3TBOX_LocationSts_factor 1
#define  CAN_ALL_GW_u2MP5_FCW_Sensitive_factor 1
#define  CAN_ALL_GW_u2MP5_ICMenuShift_Button_factor 1
#define  CAN_ALL_GW_u1MP5_AEB_ON_OFF_factor 1
#define  CAN_ALL_GW_u1MP5_FCW_ON_OFF_factor 1
#define  CAN_ALL_GW_u1MP5_BSDSwitchSts_factor 1
#define  CAN_ALL_GW_u1MP5_AFS_SwtichSts_factor 1
#define  CAN_ALL_GW_u2MP5_LaneAssitTypeReq_factor 1
#define  CAN_ALL_GW_u2MP5_ICMenuActive_Button_factor 1
#define  CAN_ALL_GW_u2MP5_AlarmStatus_factor 1
#define  CAN_ALL_GW_u1MP5_AlarmOrNot_factor 1
#define  CAN_ALL_GW_u1MP5_PaakReset_Req_factor 1
#define  CAN_ALL_GW_u1MP5_CTA_Active_factor 1
#define  CAN_ALL_GW_u1MP5_BSDLCA_Active_factor 1
#define  CAN_ALL_GW_u1MP5_TSRMenuReq_factor 1
#define  CAN_ALL_GW_u2MP5_LDWWarning_factor 1
#define  CAN_ALL_GW_u2MP5_LDWSensitvity_factor 1
#define  CAN_ALL_GW_u4MP5_AVM_Angle_factor 1
#define  CAN_ALL_GW_u6MP5_AVM_RotationChange_factor 1
#define  CAN_ALL_GW_u1MP5_IHCMenuReq_factor 1
#define  CAN_ALL_GW_u1MP5_DOA_Active_factor 1
#define  CAN_ALL_GW_u2MP5_APA_Available_Sts_factor 1
#define  CAN_ALL_GW_u1MP5_TPMSAutoLocationSetting_factor 1
#define  CAN_ALL_GW_u2MP5_AVM_RotationDirection_factor 1
#define  CAN_ALL_GW_u2MP5_AVM_Button_factor 1
#define  CAN_ALL_GW_u1MP5_View_Choice_factor 1
#define  CAN_ALL_GW_u2Nav_SpeedLimitUnits_factor 1
#define  CAN_ALL_GW_u4Nav_CurrRoadType_factor 1
#define  CAN_ALL_GW_u6Nav_SpeedLimit_factor 1
#define  CAN_ALL_GW_u1MP5_APAActive_Cmd_factor 1
#define  CAN_ALL_GW_u2MP5_APA_ConfirmButton_factor 1
#define  CAN_ALL_GW_u2MP5_APA_Function_Select_factor 1
#define  CAN_ALL_GW_u1Nav_Sts_factor 1
#define  CAN_ALL_GW_u8Nav_CountryCode_factor 1
#define  CAN_ALL_GW_u2Nav_SpeedLimitStatus_factor 1
#define  CAN_ALL_GW_u1SWM_ACCtauGapSetPlus_factor 1
#define  CAN_ALL_GW_u1SWM_ACCvSetMinus_factor 1
#define  CAN_ALL_GW_u1SWM_ShiftPadReqUp_factor 1
#define  CAN_ALL_GW_u1SWM_ACCLimpHomeSts_factor 1
#define  CAN_ALL_GW_u1SWM_LaneAssistSwitch_factor 1
#define  CAN_ALL_GW_u1SWM_ACCtauGapSetMinus_factor 1
#define  CAN_ALL_GW_u1SWM_ACCvSetPlus_factor 1
#define  CAN_ALL_GW_u1SWM_ShiftPadFlt_factor 1
#define  CAN_ALL_GW_u1SWM_ACCDeactivate_factor 1
#define  CAN_ALL_GW_u1SWM_ACCResume_factor 1
#define  CAN_ALL_GW_u1SWM_ACCSet_factor 1
#define  CAN_ALL_GW_u4Rolling_counter_0x31B_factor 1
#define  CAN_ALL_GW_u1SWM_ACCEnableSwitch_factor 1
#define  CAN_ALL_GW_u8Checksum_0x31B_factor 1
#define  CAN_ALL_GW_u1SWM_ACCResume_Qt_factor 1
#define  CAN_ALL_GW_u1SWM_TJASwitch_factor 1
#define  CAN_ALL_GW_u1SWM_ShiftPadReqDown_factor 1
#define  CAN_ALL_GW_u2SWM_HighBeam_factor 1
#define  CAN_ALL_GW_u3SWM_FrontWipingMode_factor 1
#define  CAN_ALL_GW_u3SWM_WipingInterval_Sensitvity_factor 1
#define  CAN_ALL_GW_u2SWM_RearFogLight_factor 1
#define  CAN_ALL_GW_u2SWM_FrontFogLight_factor 1
#define  CAN_ALL_GW_u1SWM_WasherLimpHomeSts_factor 1
#define  CAN_ALL_GW_u2SWM_RearWipingMode_factor 1
#define  CAN_ALL_GW_u2SWM_TurnIndicationAct_factor 1
#define  CAN_ALL_GW_u2SWM_VOL_Plus_factor 1
#define  CAN_ALL_GW_u2SWM_VOL_Minus_factor 1
#define  CAN_ALL_GW_u1SWM_Wechat_factor 1
#define  CAN_ALL_GW_u1SWM_LampLimpHomeSts_factor 1
#define  CAN_ALL_GW_u3SWM_HeadLamp_factor 1
#define  CAN_ALL_GW_u2SWM_Next_Song_factor 1
#define  CAN_ALL_GW_u2SWM_Previous_Song_factor 1
#define  CAN_ALL_GW_u2SWM_Phone_factor 1
#define  CAN_ALL_GW_u2SWM_Mute_factor 1
#define  CAN_ALL_GW_u2SWM_Menu_Right_factor 1
#define  CAN_ALL_GW_u2SWM_Menu_Left_factor 1
#define  CAN_ALL_GW_u2SWM_Menu_Down_factor 1
#define  CAN_ALL_GW_u2SWM_Menu_Up_factor 1
#define  CAN_ALL_GW_u2SWM_FWasherSts_factor 1
#define  CAN_ALL_GW_u4Rolling_counter_0x31A_factor 1
#define  CAN_ALL_GW_u2SWM_Menu_Return_factor 1
#define  CAN_ALL_GW_u2SWM_Menu_Confirm_factor 1
#define  CAN_ALL_GW_u8Checksum_0x31A_factor 1
#define  CAN_ALL_GW_u2SWM_RWasherSts_factor 1
#define  CAN_ALL_GW_u2SWM_FlashLightSts_factor 1
#define  CAN_ALL_GW_u4TCU_DisplayGear_factor 1
#define  CAN_ALL_GW_u4TCU_GearSelectorReq_factor 1
#define  CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid_factor 1
#define  CAN_ALL_GW_u1TCU_GearShiftInProgress_factor 1
#define  CAN_ALL_GW_u3TCU_ShiftLeverPos_SBWM_factor 1
#define  CAN_ALL_GW_u4TCU_TargetGearReq_factor 1
#define  CAN_ALL_GW_u1TCU_available_factor 1
#define  CAN_ALL_GW_u1TCU_DriverIntervention_factor 1
#define  CAN_ALL_GW_u2TCU_TrsmFaultFlag_factor 1
#define  CAN_ALL_GW_u4TCU_StGearMode_factor 1
#define  CAN_ALL_GW_u4TCU_Driving_mode_req_factor 1
#define  CAN_ALL_GW_u1TCU_EPBLockReq_factor 1
#define  CAN_ALL_GW_u1TCU_highresistance_factor 1
#define  CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag_factor 1
#define  CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid_factor 1
#define  CAN_ALL_GW_u4TCU_Status_AliveCounter0x123_factor 1
#define  CAN_ALL_GW_u2TCU_transPmotorparkReq_factor 1
#define  CAN_ALL_GW_u2TCU_ShiftLevertoPReq_factor 1
#define  CAN_ALL_GW_u8TCU_Status_Checksum0x123_factor 1
#define  CAN_ALL_GW_u4TCU_CurrentGearPosition_factor 1
#define  CAN_ALL_GW_sm12EMS_IndicatedRealEngTorq_factor 1
#define  CAN_ALL_GW_sd12EMS_IndicatedRealEngTorq_factor 2
#define  CAN_ALL_GW_um15EMS_EngSpeed_factor 1
#define  CAN_ALL_GW_ud15EMS_EngSpeed_factor 2
#define  CAN_ALL_GW_u1EMS_EngSpeedError_factor 1
#define  CAN_ALL_GW_sm12EMS_RngModTorqCrSLeadMin_factor 1
#define  CAN_ALL_GW_sd12EMS_RngModTorqCrSLeadMin_factor 2
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x101_factor 1
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x101_factor 1
#define  CAN_ALL_GW_sm12EMS_RngModTorqCrSLeadMax_factor 1
#define  CAN_ALL_GW_sd12EMS_RngModTorqCrSLeadMax_factor 2
#define  CAN_ALL_GW_u8EMS_EngBarometricPressure_factor 1
#define  CAN_ALL_GW_sm10EMS_VacuumPressure_factor 1
#define  CAN_ALL_GW_sd10EMS_VacuumPressure_factor 10
#define  CAN_ALL_GW_um9EMS_TargCruiseSpeed_factor 1
#define  CAN_ALL_GW_ud9EMS_TargCruiseSpeed_factor 2
#define  CAN_ALL_GW_u2EMS_ATSDrivingModeStatus_factor 1
#define  CAN_ALL_GW_u3EMS_EngineStopStartStatus_factor 1
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x151_factor 1
#define  CAN_ALL_GW_u2EMS_CruiseControlStatus_factor 1
#define  CAN_ALL_GW_u1EMS_DrivingModeChange_Fault_flag_factor 1
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x151_factor 1
#define  CAN_ALL_GW_u16EMS_EngOffTime_factor 1
#define  CAN_ALL_GW_s16MinIndicatedTorqWhl_factor 1
#define  CAN_ALL_GW_um8EMS_AccRAWPedalRatio_factor 3937
#define  CAN_ALL_GW_ud8EMS_AccRAWPedalRatio_factor 10000
#define  CAN_ALL_GW_um8EMS_AccPedalRatio_factor 3937
#define  CAN_ALL_GW_ud8EMS_AccPedalRatio_factor 10000
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x107_factor 1
#define  CAN_ALL_GW_u1EMS_KickDown_factor 1
#define  CAN_ALL_GW_u1EMS_ACCPedalRatioError_factor 1
#define  CAN_ALL_GW_u2EMS_BrkPedalStasus_factor 1
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x107_factor 1
#define  CAN_ALL_GW_s16MaxIndicatedTorqWhl_factor 1
#define  CAN_ALL_GW_s16EMS_IndicatedRealEngTorqWhl_factor 1
#define  CAN_ALL_GW_u2EMS_IndicatedACCMesgError_factor 1
#define  CAN_ALL_GW_u1EMS_IndicatedDriverOverride_factor 1
#define  CAN_ALL_GW_sm12EMS_IndicatedDriverReqTorq_factor 1
#define  CAN_ALL_GW_sd12EMS_IndicatedDriverReqTorq_factor 2
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x111_factor 1
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x111_factor 1
#define  CAN_ALL_GW_s16EMS_IndicatedDriverReqTorqWhl_factor 1
#define  CAN_ALL_GW_s8EMS_IgnitionTiming_factor 1
#define  CAN_ALL_GW_um13EMS_SetlEngIdleSpeed_factor 1
#define  CAN_ALL_GW_ud13EMS_SetlEngIdleSpeed_factor 2
#define  CAN_ALL_GW_u3EMS_EngOperationStatus_factor 1
#define  CAN_ALL_GW_u1EMS_AirCompressorStatus_factor 1
#define  CAN_ALL_GW_u1EMS_ThrottlePlatePositionError_factor 1
#define  CAN_ALL_GW_u4EMS_StartStopMessage_factor 1
#define  CAN_ALL_GW_u4DCM_EMS_RollingCounter_0x142_factor 1
#define  CAN_ALL_GW_u1EMS_IgnSwtSts_factor 1
#define  CAN_ALL_GW_u8DCM_EMS_Checksum_0x142_factor 1
#define  CAN_ALL_GW_um8EMS_EngThrottlePosition_factor 49
#define  CAN_ALL_GW_ud8EMS_EngThrottlePosition_factor 125

//#define  报文名称_CH（CAN报文通道号）    报文序号+10；#define  结构体名称_CH（结构体通道号）  报文序号；#define 报文名称_ID （CAN报文ID）  报文CAN ID；#define 报文名称_DT  (CAN报文周期)  报文时间周倜【MS】/10； #define 报文名称_TorR(CAN报文发送或接收)    发送1，接收0

//--Can_NR=1----GW 1 th Data Frame 名称：GW_Body_0x321  ID：0X801  周期：20ms  DLC：8字节GW-->ABSESP
#define ALL_GW_GW_Body_0x321_CH 1
#define ALL_GW_GW_Body_0x321_FR 1
#define ALL_GW_GW_Body_0x321_ID 0XFFFFFFFF80000321
#define ALL_GW_GW_Body_0x321_DT 2 //xxMS/10
#define ALL_GW_GW_Body_0x321_TorR 0
#define ALL_GW_GW_Body_0x321_Ay 0
#define ALL_GW_GW_Body_0x321_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_Body_0x321_LH 8//LENGTH <=8


//--Can_NR=2----GW 2 th Data Frame 名称：GW_BCM_Door_0x310  ID：0X784  周期：20ms  DLC：8字节GW-->MRR
#define ALL_GW_GW_BCM_Door_0x310_CH 2
#define ALL_GW_GW_BCM_Door_0x310_FR 2
#define ALL_GW_GW_BCM_Door_0x310_ID 0XFFFFFFFF80000310
#define ALL_GW_GW_BCM_Door_0x310_DT 2 //xxMS/10
#define ALL_GW_GW_BCM_Door_0x310_TorR 0
#define ALL_GW_GW_BCM_Door_0x310_Ay 0
#define ALL_GW_GW_BCM_Door_0x310_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_BCM_Door_0x310_LH 8//LENGTH <=8


//--Can_NR=3----GW 3 th Data Frame 名称：GW_IC_0x510  ID：0X1296  周期：100ms  DLC：8字节GW-->SRS
#define ALL_GW_GW_IC_0x510_CH 3
#define ALL_GW_GW_IC_0x510_FR 3
#define ALL_GW_GW_IC_0x510_ID 0XFFFFFFFF80000510
#define ALL_GW_GW_IC_0x510_DT 10 //xxMS/10
#define ALL_GW_GW_IC_0x510_TorR 0
#define ALL_GW_GW_IC_0x510_Ay 0
#define ALL_GW_GW_IC_0x510_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_IC_0x510_LH 8//LENGTH <=8


//--Can_NR=4----GW 4 th Data Frame 名称：GW_TBOX_Location_0x580  ID：0X1408  周期：500ms  DLC：8字节GW-->MRR
#define ALL_GW_GW_TBOX_Location_0x580_CH 4
#define ALL_GW_GW_TBOX_Location_0x580_FR 4
#define ALL_GW_GW_TBOX_Location_0x580_ID 0XFFFFFFFF80000580
#define ALL_GW_GW_TBOX_Location_0x580_DT 50 //xxMS/10
#define ALL_GW_GW_TBOX_Location_0x580_TorR 0
#define ALL_GW_GW_TBOX_Location_0x580_Ay 0
#define ALL_GW_GW_TBOX_Location_0x580_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_TBOX_Location_0x580_LH 8//LENGTH <=8


//--Can_NR=5----GW 5 th Data Frame 名称：GW_MP5_0x530  ID：0X1328  周期：100ms  DLC：8字节GW-->MRR
#define ALL_GW_GW_MP5_0x530_CH 5
#define ALL_GW_GW_MP5_0x530_FR 5
#define ALL_GW_GW_MP5_0x530_ID 0XFFFFFFFF80000530
#define ALL_GW_GW_MP5_0x530_DT 10 //xxMS/10
#define ALL_GW_GW_MP5_0x530_TorR 0
#define ALL_GW_GW_MP5_0x530_Ay 0
#define ALL_GW_GW_MP5_0x530_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_MP5_0x530_LH 8//LENGTH <=8


//--Can_NR=6----GW 6 th Data Frame 名称：GW_MP5_NAV_0x533  ID：0X1331  周期：100ms  DLC：8字节GW-->IPM
#define ALL_GW_GW_MP5_NAV_0x533_CH 6
#define ALL_GW_GW_MP5_NAV_0x533_FR 6
#define ALL_GW_GW_MP5_NAV_0x533_ID 0XFFFFFFFF80000533
#define ALL_GW_GW_MP5_NAV_0x533_DT 10 //xxMS/10
#define ALL_GW_GW_MP5_NAV_0x533_TorR 0
#define ALL_GW_GW_MP5_NAV_0x533_Ay 0
#define ALL_GW_GW_MP5_NAV_0x533_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_MP5_NAV_0x533_LH 8//LENGTH <=8


//--Can_NR=7----GW 7 th Data Frame 名称：GW_SWM_MRR_0x31B  ID：0X795  周期：100ms  DLC：8字节GW-->MRR
#define ALL_GW_GW_SWM_MRR_0x31B_CH 7
#define ALL_GW_GW_SWM_MRR_0x31B_FR 7
#define ALL_GW_GW_SWM_MRR_0x31B_ID 0XFFFFFFFF8000031B
#define ALL_GW_GW_SWM_MRR_0x31B_DT 10 //xxMS/10
#define ALL_GW_GW_SWM_MRR_0x31B_TorR 0
#define ALL_GW_GW_SWM_MRR_0x31B_Ay 0
#define ALL_GW_GW_SWM_MRR_0x31B_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_SWM_MRR_0x31B_LH 8//LENGTH <=8


//--Can_NR=8----GW 8 th Data Frame 名称：GW_SWM_Body_0x31A  ID：0X794  周期：100ms  DLC：8字节GW-->IPM
#define ALL_GW_GW_SWM_Body_0x31A_CH 8
#define ALL_GW_GW_SWM_Body_0x31A_FR 8
#define ALL_GW_GW_SWM_Body_0x31A_ID 0XFFFFFFFF8000031A
#define ALL_GW_GW_SWM_Body_0x31A_DT 10 //xxMS/10
#define ALL_GW_GW_SWM_Body_0x31A_TorR 0
#define ALL_GW_GW_SWM_Body_0x31A_Ay 0
#define ALL_GW_GW_SWM_Body_0x31A_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_SWM_Body_0x31A_LH 8//LENGTH <=8


//--Can_NR=9----GW 9 th Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0X291  周期：20ms  DLC：8字节GW-->Vector__XXX
#define ALL_GW_GW_TCU_GearInfo_0x123_CH 9
#define ALL_GW_GW_TCU_GearInfo_0x123_FR 9
#define ALL_GW_GW_TCU_GearInfo_0x123_ID 0XFFFFFFFF80000123
#define ALL_GW_GW_TCU_GearInfo_0x123_DT 2 //xxMS/10
#define ALL_GW_GW_TCU_GearInfo_0x123_TorR 0
#define ALL_GW_GW_TCU_GearInfo_0x123_Ay 0
#define ALL_GW_GW_TCU_GearInfo_0x123_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_TCU_GearInfo_0x123_LH 8//LENGTH <=8


//--Can_NR=10----GW 10 th Data Frame 名称：GW_EMS_Tq_0x101  ID：0X257  周期：10ms  DLC：8字节GW-->ABSESP
#define ALL_GW_GW_EMS_Tq_0x101_CH 10
#define ALL_GW_GW_EMS_Tq_0x101_FR 10
#define ALL_GW_GW_EMS_Tq_0x101_ID 0XFFFFFFFF80000101
#define ALL_GW_GW_EMS_Tq_0x101_DT 1 //xxMS/10
#define ALL_GW_GW_EMS_Tq_0x101_TorR 0
#define ALL_GW_GW_EMS_Tq_0x101_Ay 0
#define ALL_GW_GW_EMS_Tq_0x101_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_EMS_Tq_0x101_LH 8//LENGTH <=8


//--Can_NR=11----GW 11 th Data Frame 名称：GW_EMS_Sts_0x151  ID：0X337  周期：20ms  DLC：8字节GW-->ABSESP
#define ALL_GW_GW_EMS_Sts_0x151_CH 11
#define ALL_GW_GW_EMS_Sts_0x151_FR 11
#define ALL_GW_GW_EMS_Sts_0x151_ID 0XFFFFFFFF80000151
#define ALL_GW_GW_EMS_Sts_0x151_DT 2 //xxMS/10
#define ALL_GW_GW_EMS_Sts_0x151_TorR 0
#define ALL_GW_GW_EMS_Sts_0x151_Ay 0
#define ALL_GW_GW_EMS_Sts_0x151_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_EMS_Sts_0x151_LH 8//LENGTH <=8


//--Can_NR=12----GW 12 th Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0X263  周期：10ms  DLC：8字节GW-->ABSESP
#define ALL_GW_GW_EMS_WhlTq_0x107_CH 12
#define ALL_GW_GW_EMS_WhlTq_0x107_FR 12
#define ALL_GW_GW_EMS_WhlTq_0x107_ID 0XFFFFFFFF80000107
#define ALL_GW_GW_EMS_WhlTq_0x107_DT 1 //xxMS/10
#define ALL_GW_GW_EMS_WhlTq_0x107_TorR 0
#define ALL_GW_GW_EMS_WhlTq_0x107_Ay 0
#define ALL_GW_GW_EMS_WhlTq_0x107_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_EMS_WhlTq_0x107_LH 8//LENGTH <=8


//--Can_NR=13----GW 13 th Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0X273  周期：10ms  DLC：8字节GW-->ABSESP
#define ALL_GW_GW_EMS_TqWhl_0x111_CH 13
#define ALL_GW_GW_EMS_TqWhl_0x111_FR 13
#define ALL_GW_GW_EMS_TqWhl_0x111_ID 0XFFFFFFFF80000111
#define ALL_GW_GW_EMS_TqWhl_0x111_DT 1 //xxMS/10
#define ALL_GW_GW_EMS_TqWhl_0x111_TorR 0
#define ALL_GW_GW_EMS_TqWhl_0x111_Ay 0
#define ALL_GW_GW_EMS_TqWhl_0x111_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_EMS_TqWhl_0x111_LH 8//LENGTH <=8


//--Can_NR=14----GW 14 th Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0X322  周期：10ms  DLC：8字节GW-->deg
#define ALL_GW_GW_EMS_Engstatus_0x142_CH 14
#define ALL_GW_GW_EMS_Engstatus_0x142_FR 14
#define ALL_GW_GW_EMS_Engstatus_0x142_ID 0XFFFFFFFF80000142
#define ALL_GW_GW_EMS_Engstatus_0x142_DT 1 //xxMS/10
#define ALL_GW_GW_EMS_Engstatus_0x142_TorR 0
#define ALL_GW_GW_EMS_Engstatus_0x142_Ay 0
#define ALL_GW_GW_EMS_Engstatus_0x142_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_GW_GW_EMS_Engstatus_0x142_LH 8//LENGTH <=8


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
//-----------------------14 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[120];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[60];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[30];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[30];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[15];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uBCM_reverse_gear:2;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c4Reserve_1_2_5:4;//0.5-->0.2
  vuint32_t  CAN_ALL_GW_u2BCM_OutsideTempDig:2;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_OutsideTemp:8;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
  vuint32_t  CAN_ALL_GW_u8BCM_PowerMode:3;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_1_20_20:1;//2.4-->2.4
  vuint32_t  CAN_ALL_GW_u3BCM_Driving_mode_req_BCM:4;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_1_30_31:2;//3.7-->3.6
  vuint32_t  CAN_ALL_GW_u4BCM_HighBeamSts:2;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_LowBeamSts:2;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_FrntFogLmpSts:2;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u2BCM_AutolampSts:2;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_BrakeFluidSts:2;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_RearDef_Status:2;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_SS_EnableSts:2;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_PosLmpSts:2;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_BGLLumLvlSetting:8;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
  vuint32_t c8Reserve_1_56_63:8;//7.7-->7.0

//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uBCM_DoorStsFrntLe:2;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorStsFrntRi:2;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorStsRearLe:2;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorStsRearRi:2;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorLockStsFrntLe:2;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorLockStsFrntRi:2;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorLockStsRearLe:2;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorLockStsRearRi:2;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_LockUnlockFeedback:5;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u5BCM_LoadSensitivity:1;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1BCM_AntiTheftSts:2;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_2_30_31:2;//3.7-->3.6
  vuint32_t  CAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts:1;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1BCM_DoorStsTrunk:2;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_DoorLockStsTrunk:2;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_2_24_24:1;//3.0-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u2BCM_EnginehoodSts:2;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c4Reserve_2_34_37:4;//4.5-->4.2
  vuint32_t  CAN_ALL_GW_u2BCM_FrontWiperSts:2;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_RearWiperSts:2;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_WindowsCMD:3;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3BCM_PLG_DriverSW:2;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_2_40_40:1;//5.0-->5.0
  vuint32_t  CAN_ALL_GW_u2BCM_TurnIndicatorSts:2;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2BCM_Rolling_counter_0x310:4;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4BCM_Checksum_0x310:8;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uIC_OdometerMasterValue:24;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
  vuint32_t  CAN_ALL_GW_u24IC_QDashACCFail:2;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2IC_DISFail:1;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC:1;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c3Reserve_3_25_27:3;//3.3-->3.1
  vuint32_t exIC_AirbagTelltaleBehavior3High2:1;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t exIC_AirbagTelltaleBehavior3Low1:2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3IC_VehSpd_HMI:9;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_GW_u9IC_Rolling_counter_0x510:4;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4IC_Checksum_0x510:8;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uTBOX_LocationSts:3;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3TBOX_Latidude:28;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
  vuint32_t exTBOX_Longitude28High27:1;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t exTBOX_Longitude28Low1:27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u28TBOX_GPS_UB:1;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c3Reserve_4_56_58:3;//7.2-->7.0

//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uMP5_AVM_Button:2;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_AVM_Angle:4;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4MP5_FCW_Sensitive:2;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_BSDSwitchSts:1;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_5_14_14:1;//1.6-->1.6
  vuint32_t  CAN_ALL_GW_u1MP5_FCW_ON_OFF:1;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_AEB_ON_OFF:1;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_ICMenuShift_Button:2;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_View_Choice:1;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_5_8_8:1;//1.0-->1.0
  vuint32_t  CAN_ALL_GW_u1MP5_AlarmOrNot:1;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_AlarmStatus:2;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_ICMenuActive_Button:2;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_LaneAssitTypeReq:2;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_AFS_SwtichSts:1;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_PaakReset_Req:1;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c7Reserve_5_24_30:7;//3.6-->3.0
//*****************32 bits split line
  vuint32_t c8Reserve_5_32_39:8;//4.7-->4.0
  vuint32_t  CAN_ALL_GW_u1MP5_LDWSensitvity:2;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_LDWWarning:2;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_TSRMenuReq:1;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_5_42_42:1;//5.2-->5.2
  vuint32_t  CAN_ALL_GW_u1MP5_BSDLCA_Active:1;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_CTA_Active:1;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_DOA_Active:1;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_5_54_54:1;//6.6-->6.6
  vuint32_t  CAN_ALL_GW_u1MP5_IHCMenuReq:1;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_AVM_RotationChange:6;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
  vuint32_t  CAN_ALL_GW_u6MP5_AVM_RotationDirection:2;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_TPMSAutoLocationSetting:1;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_APA_Available_Sts:2;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 

//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uNav_CountryCode:8;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u8Nav_CurrRoadType:4;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4Nav_SpeedLimitUnits:2;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2Nav_SpeedLimitStatus:2;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2Nav_SpeedLimit:6;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_6_16_17:2;//2.1-->2.0
  vuint32_t  CAN_ALL_GW_u6Nav_Sts:1;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1MP5_APA_Function_Select:2;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_APA_ConfirmButton:2;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2MP5_APAActive_Cmd:1;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_6_24_25:2;//3.1-->3.0
//*****************32 bits split line
  vuint32_t c32Reserve_6_56_39:32;//4.7-->7.0

//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uSWM_ACCResume_Qt:1;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCEnableSwitch:1;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCSet:1;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCResume:1;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCDeactivate:1;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCvSetPlus:1;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCvSetMinus:1;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCtauGapSetPlus:1;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ACCtauGapSetMinus:1;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_LaneAssistSwitch:1;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_7_12_13:2;//1.5-->1.4
  vuint32_t  CAN_ALL_GW_u1SWM_ACCLimpHomeSts:1;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ShiftPadReqUp:1;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ShiftPadReqDown:1;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_TJASwitch:1;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_ShiftPadFlt:1;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1Rolling_counter_0x31B:4;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4Checksum_0x31B:8;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uSWM_RWasherSts:2;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_FWasherSts:2;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_LampLimpHomeSts:1;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_WasherLimpHomeSts:1;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_HighBeam:2;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_WipingInterval_Sensitvity:3;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3SWM_FrontWipingMode:3;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3SWM_FlashLightSts:2;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_TurnIndicationAct:2;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_RearWipingMode:2;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_FrontFogLight:2;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_RearFogLight:2;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_HeadLamp:3;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3SWM_Wechat:1;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1SWM_VOL_Minus:2;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_VOL_Plus:2;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u2SWM_Mute:2;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Phone:2;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Previous_Song:2;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Next_Song:2;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Menu_Up:2;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Menu_Down:2;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Menu_Left:2;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Menu_Right:2;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Menu_Confirm:2;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2SWM_Menu_Return:2;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2Rolling_counter_0x31A:4;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4Checksum_0x31A:8;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uTCU_CurrentGearPosition:4;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_TargetGearReq:4;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_GearSelectorReq:4;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_DisplayGear:4;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM:3;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
  vuint32_t  CAN_ALL_GW_u3TCU_GearShiftInProgress:1;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid:1;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c11Reserve_9_24_18:11;//2.2-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u1TCU_StGearMode:4;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_TrsmFaultFlag:2;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2TCU_DriverIntervention:1;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_available:1;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid:1;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag:1;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_highresistance:1;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_EPBLockReq:1;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1TCU_Driving_mode_req:4;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_ShiftLevertoPReq:2;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2TCU_transPmotorparkReq:2;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2TCU_Status_AliveCounter0x123:4;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4TCU_Status_Checksum0x123:8;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uEMS_RngModTorqCrSLeadMax:12;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint32_t  CAN_ALL_GW_u12EMS_IndicatedRealEngTorq:12;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint32_t exEMS_EngSpeed15High7:8;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
//*****************32 bits split line
  vuint32_t exEMS_EngSpeed15Low8:7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
  vuint32_t  CAN_ALL_GW_u15EMS_EngSpeedError:1;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin:12;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint32_t  CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x101:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uEMS_EngOffTime:16;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
  vuint32_t  CAN_ALL_GW_u16EMS_EngBarometricPressure:8;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
  vuint32_t exEMS_VacuumPressure10High2:8;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
//*****************32 bits split line
  vuint32_t exEMS_VacuumPressure10Low8:2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
  vuint32_t  CAN_ALL_GW_u10EMS_EngineStopStartStatus:3;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u3EMS_ATSDrivingModeStatus:2;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2EMS_TargCruiseSpeed:9;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
  vuint32_t c1Reserve_11_55_55:1;//6.7-->6.7
  vuint32_t  CAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag:1;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1EMS_CruiseControlStatus:2;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x151:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uMaxIndicatedTorqWhl:16;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
  vuint32_t  CAN_ALL_GW_u16MinIndicatedTorqWhl:16;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u16EMS_AccRAWPedalRatio:8;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u8EMS_AccPedalRatio:8;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
  vuint32_t  CAN_ALL_GW_u8EMS_BrkPedalStasus:2;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u2EMS_ACCPedalRatioError:1;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1EMS_KickDown:1;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x107:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl:16;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
  vuint32_t  CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl:16;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u16EMS_IndicatedDriverOverride:1;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c3Reserve_13_36_38:3;//4.6-->4.4
  vuint32_t  CAN_ALL_GW_u1EMS_IndicatedACCMesgError:2;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_13_32_33:2;//4.1-->4.0
  vuint32_t  CAN_ALL_GW_u2EMS_IndicatedDriverReqTorq:12;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint32_t  CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x111:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->
  vuint32_t  CAN_ALL_GW_uEMS_EngThrottlePosition:8;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
  vuint32_t  CAN_ALL_GW_u8EMS_IgnitionTiming:8;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
  vuint32_t  CAN_ALL_GW_u8EMS_SetlEngIdleSpeed:13;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
  vuint32_t  CAN_ALL_GW_u13EMS_EngOperationStatus:3;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_GW_u3EMS_ThrottlePlatePositionError:1;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1EMS_AirCompressorStatus:1;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t c6Reserve_14_32_37:6;//4.5-->4.0
  vuint32_t  CAN_ALL_GW_u1EMS_StartStopMessage:4;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t c5Reserve_14_55_43:5;//5.3-->6.7
  vuint32_t  CAN_ALL_GW_u4EMS_IgnSwtSts:1;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x142:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
    } B;
} CAN_ALL_FRAMES_GW_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[120];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[60];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[30];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[30];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[15];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uBCM_reverse_gear:2;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c4Reserve_1_2_5:4;//0.5-->0.2
  vuint64_t  CAN_ALL_GW_u2BCM_OutsideTempDig:2;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_OutsideTemp:8;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
  vuint64_t  CAN_ALL_GW_u8BCM_PowerMode:3;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_1_20_20:1;//2.4-->2.4
  vuint64_t  CAN_ALL_GW_u3BCM_Driving_mode_req_BCM:4;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_1_30_31:2;//3.7-->3.6
  vuint64_t  CAN_ALL_GW_u4BCM_HighBeamSts:2;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_LowBeamSts:2;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_FrntFogLmpSts:2;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u2BCM_AutolampSts:2;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_BrakeFluidSts:2;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_RearDef_Status:2;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_SS_EnableSts:2;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_PosLmpSts:2;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_BGLLumLvlSetting:8;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
  vuint64_t c8Reserve_1_56_63:8;//7.7-->7.0

//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uBCM_DoorStsFrntLe:2;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorStsFrntRi:2;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorStsRearLe:2;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorStsRearRi:2;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorLockStsFrntLe:2;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorLockStsFrntRi:2;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorLockStsRearLe:2;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorLockStsRearRi:2;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_LockUnlockFeedback:5;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u5BCM_LoadSensitivity:1;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1BCM_AntiTheftSts:2;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_2_30_31:2;//3.7-->3.6
  vuint64_t  CAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts:1;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1BCM_DoorStsTrunk:2;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_DoorLockStsTrunk:2;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_2_24_24:1;//3.0-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u2BCM_EnginehoodSts:2;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c4Reserve_2_34_37:4;//4.5-->4.2
  vuint64_t  CAN_ALL_GW_u2BCM_FrontWiperSts:2;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_RearWiperSts:2;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_WindowsCMD:3;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3BCM_PLG_DriverSW:2;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_2_40_40:1;//5.0-->5.0
  vuint64_t  CAN_ALL_GW_u2BCM_TurnIndicatorSts:2;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2BCM_Rolling_counter_0x310:4;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4BCM_Checksum_0x310:8;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uIC_OdometerMasterValue:24;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
  vuint64_t  CAN_ALL_GW_u24IC_QDashACCFail:2;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2IC_DISFail:1;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC:1;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c3Reserve_3_25_27:3;//3.3-->3.1
  vuint64_t exIC_AirbagTelltaleBehavior3:3;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  //vuint64_t exIC_AirbagTelltaleBehavior3Low1:2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3IC_VehSpd_HMI:9;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_GW_u9IC_Rolling_counter_0x510:4;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4IC_Checksum_0x510:8;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uTBOX_LocationSts:3;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3TBOX_Latidude:28;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
  vuint64_t exTBOX_Longitude28:28;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
//*****************32 bits split line
  //vuint64_t exTBOX_Longitude28Low1:27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u28TBOX_GPS_UB:1;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c3Reserve_4_56_58:3;//7.2-->7.0

//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uMP5_AVM_Button:2;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_AVM_Angle:4;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4MP5_FCW_Sensitive:2;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_BSDSwitchSts:1;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_5_14_14:1;//1.6-->1.6
  vuint64_t  CAN_ALL_GW_u1MP5_FCW_ON_OFF:1;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_AEB_ON_OFF:1;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_ICMenuShift_Button:2;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_View_Choice:1;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_5_8_8:1;//1.0-->1.0
  vuint64_t  CAN_ALL_GW_u1MP5_AlarmOrNot:1;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_AlarmStatus:2;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_ICMenuActive_Button:2;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_LaneAssitTypeReq:2;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_AFS_SwtichSts:1;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_PaakReset_Req:1;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c7Reserve_5_24_30:7;//3.6-->3.0
//*****************32 bits split line
  vuint64_t c8Reserve_5_32_39:8;//4.7-->4.0
  vuint64_t  CAN_ALL_GW_u1MP5_LDWSensitvity:2;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_LDWWarning:2;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_TSRMenuReq:1;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_5_42_42:1;//5.2-->5.2
  vuint64_t  CAN_ALL_GW_u1MP5_BSDLCA_Active:1;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_CTA_Active:1;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_DOA_Active:1;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_5_54_54:1;//6.6-->6.6
  vuint64_t  CAN_ALL_GW_u1MP5_IHCMenuReq:1;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_AVM_RotationChange:6;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
  vuint64_t  CAN_ALL_GW_u6MP5_AVM_RotationDirection:2;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_TPMSAutoLocationSetting:1;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_APA_Available_Sts:2;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 

//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uNav_CountryCode:8;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u8Nav_CurrRoadType:4;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4Nav_SpeedLimitUnits:2;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2Nav_SpeedLimitStatus:2;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2Nav_SpeedLimit:6;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_6_16_17:2;//2.1-->2.0
  vuint64_t  CAN_ALL_GW_u6Nav_Sts:1;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1MP5_APA_Function_Select:2;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_APA_ConfirmButton:2;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2MP5_APAActive_Cmd:1;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_6_24_25:2;//3.1-->3.0
//*****************32 bits split line
  vuint64_t c32Reserve_6_56_39:32;//4.7-->7.0

//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uSWM_ACCResume_Qt:1;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCEnableSwitch:1;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCSet:1;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCResume:1;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCDeactivate:1;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCvSetPlus:1;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCvSetMinus:1;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCtauGapSetPlus:1;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ACCtauGapSetMinus:1;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_LaneAssistSwitch:1;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_7_12_13:2;//1.5-->1.4
  vuint64_t  CAN_ALL_GW_u1SWM_ACCLimpHomeSts:1;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ShiftPadReqUp:1;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ShiftPadReqDown:1;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_TJASwitch:1;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_ShiftPadFlt:1;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1Rolling_counter_0x31B:4;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4Checksum_0x31B:8;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uSWM_RWasherSts:2;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_FWasherSts:2;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_LampLimpHomeSts:1;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_WasherLimpHomeSts:1;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_HighBeam:2;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_WipingInterval_Sensitvity:3;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3SWM_FrontWipingMode:3;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3SWM_FlashLightSts:2;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_TurnIndicationAct:2;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_RearWipingMode:2;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_FrontFogLight:2;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_RearFogLight:2;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_HeadLamp:3;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3SWM_Wechat:1;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1SWM_VOL_Minus:2;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_VOL_Plus:2;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u2SWM_Mute:2;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Phone:2;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Previous_Song:2;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Next_Song:2;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Menu_Up:2;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Menu_Down:2;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Menu_Left:2;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Menu_Right:2;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Menu_Confirm:2;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2SWM_Menu_Return:2;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2Rolling_counter_0x31A:4;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4Checksum_0x31A:8;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uTCU_CurrentGearPosition:4;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_TargetGearReq:4;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_GearSelectorReq:4;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_DisplayGear:4;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM:3;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
  vuint64_t  CAN_ALL_GW_u3TCU_GearShiftInProgress:1;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid:1;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c11Reserve_9_24_18:11;//2.2-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u1TCU_StGearMode:4;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_TrsmFaultFlag:2;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2TCU_DriverIntervention:1;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_available:1;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid:1;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag:1;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_highresistance:1;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_EPBLockReq:1;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1TCU_Driving_mode_req:4;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_ShiftLevertoPReq:2;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2TCU_transPmotorparkReq:2;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2TCU_Status_AliveCounter0x123:4;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4TCU_Status_Checksum0x123:8;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uEMS_RngModTorqCrSLeadMax:12;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint64_t  CAN_ALL_GW_u12EMS_IndicatedRealEngTorq:12;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint64_t exEMS_EngSpeed15:15;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
//*****************32 bits split line
  //vuint64_t exEMS_EngSpeed15Low8:7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
  vuint64_t  CAN_ALL_GW_u15EMS_EngSpeedError:1;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin:12;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint64_t  CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x101:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uEMS_EngOffTime:16;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
  vuint64_t  CAN_ALL_GW_u16EMS_EngBarometricPressure:8;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
  vuint64_t exEMS_VacuumPressure10:10;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
//*****************32 bits split line
  //vuint64_t exEMS_VacuumPressure10Low8:2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
  vuint64_t  CAN_ALL_GW_u10EMS_EngineStopStartStatus:3;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u3EMS_ATSDrivingModeStatus:2;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2EMS_TargCruiseSpeed:9;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
  vuint64_t c1Reserve_11_55_55:1;//6.7-->6.7
  vuint64_t  CAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag:1;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1EMS_CruiseControlStatus:2;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x151:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uMaxIndicatedTorqWhl:16;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
  vuint64_t  CAN_ALL_GW_u16MinIndicatedTorqWhl:16;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u16EMS_AccRAWPedalRatio:8;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u8EMS_AccPedalRatio:8;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
  vuint64_t  CAN_ALL_GW_u8EMS_BrkPedalStasus:2;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u2EMS_ACCPedalRatioError:1;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1EMS_KickDown:1;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x107:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl:16;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
  vuint64_t  CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl:16;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u16EMS_IndicatedDriverOverride:1;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c3Reserve_13_36_38:3;//4.6-->4.4
  vuint64_t  CAN_ALL_GW_u1EMS_IndicatedACCMesgError:2;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_13_32_33:2;//4.1-->4.0
  vuint64_t  CAN_ALL_GW_u2EMS_IndicatedDriverReqTorq:12;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
  vuint64_t  CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x111:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->
  vuint64_t  CAN_ALL_GW_uEMS_EngThrottlePosition:8;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
  vuint64_t  CAN_ALL_GW_u8EMS_IgnitionTiming:8;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
  vuint64_t  CAN_ALL_GW_u8EMS_SetlEngIdleSpeed:13;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
  vuint64_t  CAN_ALL_GW_u13EMS_EngOperationStatus:3;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_GW_u3EMS_ThrottlePlatePositionError:1;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1EMS_AirCompressorStatus:1;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t c6Reserve_14_32_37:6;//4.5-->4.0
  vuint64_t  CAN_ALL_GW_u1EMS_StartStopMessage:4;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t c5Reserve_14_55_43:5;//5.3-->6.7
  vuint64_t  CAN_ALL_GW_u4EMS_IgnSwtSts:1;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142:4;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_GW_u4DCM_EMS_Checksum_0x142:8;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

    } B;
} CAN_ALL_FRAMES_GW_tag;
extern CAN_ALL_FRAMES_GW_tag CAN_ALL_FRAMES_GW;
extern CAN_ALL_FRAMES_GW_tag CAN_ALL_FRMes_GW;
extern CAN_ALL_FRAMES_GW_tag CAN_ALL_FRVar_GW;
extern CAN_ALL_FRAMES_GW_tag CAN_ALL_FRVarOld_GW;


               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exIC_AirbagTelltaleBehavior3High2:2;
                                    vuint16_t exIC_AirbagTelltaleBehavior3Low1:1;
                               } B;
                            } exIC_AirbagTelltaleBehavior_tag;
                            extern exIC_AirbagTelltaleBehavior_tag exIC_AirbagTelltaleBehavior;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exTBOX_Longitude28High27:7;
                                    vuint16_t exTBOX_Longitude28Low1:1;
                               } B;
                            } exTBOX_Longitude_tag;
                            extern exTBOX_Longitude_tag exTBOX_Longitude;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exEMS_EngSpeed15High7:7;
                                    vuint16_t exEMS_EngSpeed15Low8:8;
                               } B;
                            } exEMS_EngSpeed_tag;
                            extern exEMS_EngSpeed_tag exEMS_EngSpeed;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exEMS_VacuumPressure10High2:2;
                                    vuint16_t exEMS_VacuumPressure10Low8:8;
                               } B;
                            } exEMS_VacuumPressure_tag;
                            extern exEMS_VacuumPressure_tag exEMS_VacuumPressure;
//--1 th CAN 报文数据处理子程序------------
                CAN1_noReceivedMessageTime[ALL_GW_GW_Body_0x321_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_GW_GW_BCM_Door_0x310_CH]++;//Can_NR=2
                CAN1_noReceivedMessageTime[ALL_GW_GW_IC_0x510_CH]++;//Can_NR=3
                CAN1_noReceivedMessageTime[ALL_GW_GW_TBOX_Location_0x580_CH]++;//Can_NR=4
                CAN1_noReceivedMessageTime[ALL_GW_GW_MP5_0x530_CH]++;//Can_NR=5
                CAN1_noReceivedMessageTime[ALL_GW_GW_MP5_NAV_0x533_CH]++;//Can_NR=6
                CAN1_noReceivedMessageTime[ALL_GW_GW_SWM_MRR_0x31B_CH]++;//Can_NR=7
                CAN1_noReceivedMessageTime[ALL_GW_GW_SWM_Body_0x31A_CH]++;//Can_NR=8
                CAN1_noReceivedMessageTime[ALL_GW_GW_TCU_GearInfo_0x123_CH]++;//Can_NR=9
                CAN1_noReceivedMessageTime[ALL_GW_GW_EMS_Tq_0x101_CH]++;//Can_NR=10
                CAN1_noReceivedMessageTime[ALL_GW_GW_EMS_Sts_0x151_CH]++;//Can_NR=11
                CAN1_noReceivedMessageTime[ALL_GW_GW_EMS_WhlTq_0x107_CH]++;//Can_NR=12
                CAN1_noReceivedMessageTime[ALL_GW_GW_EMS_TqWhl_0x111_CH]++;//Can_NR=13
                CAN1_noReceivedMessageTime[ALL_GW_GW_EMS_Engstatus_0x142_CH]++;//Can_NR=14
typedef union {
    vuint8_t R;
    struct { //ALL_GW 接收报文故障
        vuint8_t ALL_GW_GW_Body_0x321: 1; //Can_NR=1
        vuint8_t ALL_GW_GW_BCM_Door_0x310: 1; //Can_NR=2
        vuint8_t ALL_GW_GW_IC_0x510: 1; //Can_NR=3
        vuint8_t ALL_GW_GW_TBOX_Location_0x580: 1; //Can_NR=4
        vuint8_t ALL_GW_GW_MP5_0x530: 1; //Can_NR=5
        vuint8_t ALL_GW_GW_MP5_NAV_0x533: 1; //Can_NR=6
        vuint8_t ALL_GW_GW_SWM_MRR_0x31B: 1; //Can_NR=7
        vuint8_t ALL_GW_GW_SWM_Body_0x31A: 1; //Can_NR=8
        vuint8_t ALL_GW_GW_TCU_GearInfo_0x123: 1; //Can_NR=9
        vuint8_t ALL_GW_GW_EMS_Tq_0x101: 1; //Can_NR=10
        vuint8_t ALL_GW_GW_EMS_Sts_0x151: 1; //Can_NR=11
        vuint8_t ALL_GW_GW_EMS_WhlTq_0x107: 1; //Can_NR=12
        vuint8_t ALL_GW_GW_EMS_TqWhl_0x111: 1; //Can_NR=13
        vuint8_t ALL_GW_GW_EMS_Engstatus_0x142: 1; //Can_NR=14
    } B;
} Error_CAN1_ALL_GW_tag ;
extern Error_CAN1_ALL_GW_tag Error_CAN1_ALL_GW ;
typedef union {
    vuint8_t R;
    struct { //ALL_GW 接收报文故障
        vuint8_t ALL_GW_GW_Body_0x321T: 1; //Can_NR=1
        vuint8_t ALL_GW_GW_BCM_Door_0x310T: 1; //Can_NR=2
        vuint8_t ALL_GW_GW_IC_0x510T: 1; //Can_NR=3
        vuint8_t ALL_GW_GW_TBOX_Location_0x580T: 1; //Can_NR=4
        vuint8_t ALL_GW_GW_MP5_0x530T: 1; //Can_NR=5
        vuint8_t ALL_GW_GW_MP5_NAV_0x533T: 1; //Can_NR=6
        vuint8_t ALL_GW_GW_SWM_MRR_0x31BT: 1; //Can_NR=7
        vuint8_t ALL_GW_GW_SWM_Body_0x31AT: 1; //Can_NR=8
        vuint8_t ALL_GW_GW_TCU_GearInfo_0x123T: 1; //Can_NR=9
        vuint8_t ALL_GW_GW_EMS_Tq_0x101T: 1; //Can_NR=10
        vuint8_t ALL_GW_GW_EMS_Sts_0x151T: 1; //Can_NR=11
        vuint8_t ALL_GW_GW_EMS_WhlTq_0x107T: 1; //Can_NR=12
        vuint8_t ALL_GW_GW_EMS_TqWhl_0x111T: 1; //Can_NR=13
        vuint8_t ALL_GW_GW_EMS_Engstatus_0x142T: 1; //Can_NR=14
    } B;
}  D00CTR_def_CAN1_ALL_GW_tag ;
extern  D00CTR_def_CAN1_ALL_GW_tag D00CTR_def_CAN1_ALL_GW ;


//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_1_2_5;//0.5-->0.2
 vuint8_t VCAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
 vuint8_t VCAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_1_20_20;//2.4-->2.4
 vuint8_t VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_1_30_31;//3.7-->3.6
 vuint8_t VCAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
 vuint8_t Vc8Reserve_1_56_63;//7.7-->7.0


//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_2_30_31;//3.7-->3.6
 vuint8_t VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_2_24_24;//3.0-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_2_34_37;//4.5-->4.2
 vuint8_t VCAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_2_40_40;//5.0-->5.0
 vuint8_t VCAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

 vuint32_t VCAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
 vuint8_t VCAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_3_25_27;//3.3-->3.1
 vuint8_t VexIC_AirbagTelltaleBehavior3High2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VexIC_AirbagTelltaleBehavior3Low1;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
 vuint32_t VCAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
 vuint8_t VexTBOX_Longitude28High27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
//*****************32 bits split line
 vuint32_t VexTBOX_Longitude28Low1;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_4_56_58;//7.2-->7.0


//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_14_14;//1.6-->1.6
 vuint8_t VCAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_8_8;//1.0-->1.0
 vuint8_t VCAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc7Reserve_5_24_30;//3.6-->3.0
//*****************32 bits split line
 vuint8_t Vc8Reserve_5_32_39;//4.7-->4.0
 vuint8_t VCAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_42_42;//5.2-->5.2
 vuint8_t VCAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_54_54;//6.6-->6.6
 vuint8_t VCAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
 vuint8_t VCAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 


//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_6_16_17;//2.1-->2.0
 vuint8_t VCAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_6_24_25;//3.1-->3.0
//*****************32 bits split line
 vuint32_t Vc32Reserve_6_56_39;//4.7-->7.0


//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_7_12_13;//1.5-->1.4
 vuint8_t VCAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
 vuint8_t VCAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t Vc11Reserve_9_24_18;//2.2-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint16_t VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint8_t VexEMS_EngSpeed15High7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
//*****************32 bits split line
 vuint8_t VexEMS_EngSpeed15Low8;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
 vuint8_t VCAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
 vuint8_t VCAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
 vuint8_t VexEMS_VacuumPressure10High2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
//*****************32 bits split line
 vuint8_t VexEMS_VacuumPressure10Low8;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
 vuint8_t VCAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
 vuint8_t Vc1Reserve_11_55_55;//6.7-->6.7
 vuint8_t VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 vuint16_t VCAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
 vuint8_t VCAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 vuint16_t VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_13_36_38;//4.6-->4.4
 vuint8_t VCAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_13_32_33;//4.1-->4.0
 vuint16_t VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
 vuint8_t VCAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
 vuint16_t VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
 vuint8_t VCAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc6Reserve_14_32_37;//4.5-->4.0
 vuint8_t VCAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t Vc5Reserve_14_55_43;//5.3-->6.7
 vuint8_t VCAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================================================(分隔行)



//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_1_2_5;//0.5-->0.2
 extern  vuint8_t VCAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
 extern  vuint8_t VCAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_1_20_20;//2.4-->2.4
 extern  vuint8_t VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_1_30_31;//3.7-->3.6
 extern  vuint8_t VCAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
 extern  vuint8_t Vc8Reserve_1_56_63;//7.7-->7.0


//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_2_30_31;//3.7-->3.6
 extern  vuint8_t VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_2_24_24;//3.0-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_2_34_37;//4.5-->4.2
 extern  vuint8_t VCAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_2_40_40;//5.0-->5.0
 extern  vuint8_t VCAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

 extern  vuint32_t VCAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
 extern  vuint8_t VCAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_3_25_27;//3.3-->3.1
 extern  vuint8_t VexIC_AirbagTelltaleBehavior3High2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VexIC_AirbagTelltaleBehavior3Low1;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
 extern  vuint32_t VCAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
 extern  vuint8_t VexTBOX_Longitude28High27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint32_t VexTBOX_Longitude28Low1;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_4_56_58;//7.2-->7.0


//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_14_14;//1.6-->1.6
 extern  vuint8_t VCAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_8_8;//1.0-->1.0
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc7Reserve_5_24_30;//3.6-->3.0
//*****************32 bits split line
 extern  vuint8_t Vc8Reserve_5_32_39;//4.7-->4.0
 extern  vuint8_t VCAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_42_42;//5.2-->5.2
 extern  vuint8_t VCAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_54_54;//6.6-->6.6
 extern  vuint8_t VCAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
 extern  vuint8_t VCAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 


//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_6_16_17;//2.1-->2.0
 extern  vuint8_t VCAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_6_24_25;//3.1-->3.0
//*****************32 bits split line
 extern  vuint32_t Vc32Reserve_6_56_39;//4.7-->7.0


//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_7_12_13;//1.5-->1.4
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
 extern  vuint8_t VCAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t Vc11Reserve_9_24_18;//2.2-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint16_t VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint8_t VexEMS_EngSpeed15High7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
//*****************32 bits split line
 extern  vuint8_t VexEMS_EngSpeed15Low8;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
 extern  vuint8_t VCAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
 extern  vuint8_t VCAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
 extern  vuint8_t VexEMS_VacuumPressure10High2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
//*****************32 bits split line
 extern  vuint8_t VexEMS_VacuumPressure10Low8;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
 extern  vuint8_t VCAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
 extern  vuint8_t Vc1Reserve_11_55_55;//6.7-->6.7
 extern  vuint8_t VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 extern  vuint16_t VCAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
 extern  vuint8_t VCAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 extern  vuint16_t VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_13_36_38;//4.6-->4.4
 extern  vuint8_t VCAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_13_32_33;//4.1-->4.0
 extern  vuint16_t VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
 extern  vuint8_t VCAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
 extern  vuint16_t VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
 extern  vuint8_t VCAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc6Reserve_14_32_37;//4.5-->4.0
 extern  vuint8_t VCAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc5Reserve_14_55_43;//5.3-->6.7
 extern  vuint8_t VCAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_1_2_5;//0.5-->0.2
 vuint8_t VCAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
 vuint8_t VCAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_1_20_20;//2.4-->2.4
 vuint8_t VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_1_30_31;//3.7-->3.6
 vuint8_t VCAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
 vuint8_t Vc8Reserve_1_56_63;//7.7-->7.0


//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_2_30_31;//3.7-->3.6
 vuint8_t VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_2_24_24;//3.0-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc4Reserve_2_34_37;//4.5-->4.2
 vuint8_t VCAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_2_40_40;//5.0-->5.0
 vuint8_t VCAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

 vuint32_t VCAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
 vuint8_t VCAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_3_25_27;//3.3-->3.1
 vuint8_t VexIC_AirbagTelltaleBehavior3;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 //vuint8_t VexIC_AirbagTelltaleBehavior3Low1:2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
 vuint8_t VCAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
 vuint32_t VCAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
 vuint32_t VexTBOX_Longitude28;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
//*****************32 bits split line
 //vuint32_t VexTBOX_Longitude28Low1:27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_4_56_58;//7.2-->7.0


//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_14_14;//1.6-->1.6
 vuint8_t VCAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_8_8;//1.0-->1.0
 vuint8_t VCAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc7Reserve_5_24_30;//3.6-->3.0
//*****************32 bits split line
 vuint8_t Vc8Reserve_5_32_39;//4.7-->4.0
 vuint8_t VCAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_42_42;//5.2-->5.2
 vuint8_t VCAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_5_54_54;//6.6-->6.6
 vuint8_t VCAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
 vuint8_t VCAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 


//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_6_16_17;//2.1-->2.0
 vuint8_t VCAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_6_24_25;//3.1-->3.0
//*****************32 bits split line
 vuint32_t Vc32Reserve_6_56_39;//4.7-->7.0


//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_7_12_13;//1.5-->1.4
 vuint8_t VCAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
 vuint8_t VCAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t Vc11Reserve_9_24_18;//2.2-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint16_t VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint16_t VexEMS_EngSpeed15;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
//*****************32 bits split line
 //vuint8_t VexEMS_EngSpeed15Low8:7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
 vuint8_t VCAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
 vuint8_t VCAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
 vuint16_t VexEMS_VacuumPressure10;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
//*****************32 bits split line
 //vuint8_t VexEMS_VacuumPressure10Low8:2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
 vuint8_t VCAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint16_t VCAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
 vuint8_t Vc1Reserve_11_55_55;//6.7-->6.7
 vuint8_t VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 vuint16_t VCAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
 vuint8_t VCAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

 vuint16_t VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 vuint16_t VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_13_36_38;//4.6-->4.4
 vuint8_t VCAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_13_32_33;//4.1-->4.0
 vuint16_t VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

 vuint8_t VCAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
 vuint8_t VCAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
 vuint16_t VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
 vuint8_t VCAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t Vc6Reserve_14_32_37;//4.5-->4.0
 vuint8_t VCAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t Vc5Reserve_14_55_43;//5.3-->6.7
 vuint8_t VCAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_1_2_5;//0.5-->0.2
 extern  vuint8_t VCAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
 extern  vuint8_t VCAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_1_20_20;//2.4-->2.4
 extern  vuint8_t VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_1_30_31;//3.7-->3.6
 extern  vuint8_t VCAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
 extern  vuint8_t Vc8Reserve_1_56_63;//7.7-->7.0


//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_2_30_31;//3.7-->3.6
 extern  vuint8_t VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_2_24_24;//3.0-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc4Reserve_2_34_37;//4.5-->4.2
 extern  vuint8_t VCAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_2_40_40;//5.0-->5.0
 extern  vuint8_t VCAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

 extern  vuint32_t VCAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
 extern  vuint8_t VCAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_3_25_27;//3.3-->3.1
 extern  vuint8_t VexIC_AirbagTelltaleBehavior3;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 //extern  vuint8_t VexIC_AirbagTelltaleBehavior3Low1:2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
 extern  vuint8_t VCAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
 extern  vuint32_t VCAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
 extern  vuint32_t VexTBOX_Longitude28;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
//*****************32 bits split line
 //extern  vuint32_t VexTBOX_Longitude28Low1:27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_4_56_58;//7.2-->7.0


//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_14_14;//1.6-->1.6
 extern  vuint8_t VCAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_8_8;//1.0-->1.0
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc7Reserve_5_24_30;//3.6-->3.0
//*****************32 bits split line
 extern  vuint8_t Vc8Reserve_5_32_39;//4.7-->4.0
 extern  vuint8_t VCAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_42_42;//5.2-->5.2
 extern  vuint8_t VCAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_5_54_54;//6.6-->6.6
 extern  vuint8_t VCAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
 extern  vuint8_t VCAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 


//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_6_16_17;//2.1-->2.0
 extern  vuint8_t VCAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_6_24_25;//3.1-->3.0
//*****************32 bits split line
 extern  vuint32_t Vc32Reserve_6_56_39;//4.7-->7.0


//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_7_12_13;//1.5-->1.4
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
 extern  vuint8_t VCAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t Vc11Reserve_9_24_18;//2.2-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint16_t VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint16_t VexEMS_EngSpeed15;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
//*****************32 bits split line
 //extern  vuint8_t VexEMS_EngSpeed15Low8:7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
 extern  vuint8_t VCAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
 extern  vuint8_t VCAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
 extern  vuint16_t VexEMS_VacuumPressure10;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
//*****************32 bits split line
 //extern  vuint8_t VexEMS_VacuumPressure10Low8:2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
 extern  vuint8_t VCAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint16_t VCAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
 extern  vuint8_t Vc1Reserve_11_55_55;//6.7-->6.7
 extern  vuint8_t VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 extern  vuint16_t VCAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
 extern  vuint8_t VCAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

 extern  vuint16_t VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
 extern  vuint16_t VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_13_36_38;//4.6-->4.4
 extern  vuint8_t VCAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_13_32_33;//4.1-->4.0
 extern  vuint16_t VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
 extern  vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

 extern  vuint8_t VCAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
 extern  vuint8_t VCAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
 extern  vuint16_t VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
 extern  vuint8_t VCAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc6Reserve_14_32_37;//4.5-->4.0
 extern  vuint8_t VCAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc5Reserve_14_55_43;//5.3-->6.7
 extern  vuint8_t VCAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc4Reserve_1_2_5;//0.5-->0.2
        vuint8_t VCAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
        vuint8_t VCAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_1_20_20;//2.4-->2.4
        vuint8_t VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_1_30_31;//3.7-->3.6
        vuint8_t VCAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
         //vuint8_t Vc8Reserve_1_56_63;//7.7-->7.0

     } B;
}  Vu8_GW_1_GW_Body_0x321_DataBit_tag;
extern Vu8_GW_1_GW_Body_0x321_DataBit_tag Vu8_GW_1_GW_Body_0x321_DataBit;


//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_2_30_31;//3.7-->3.6
        vuint8_t VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_2_24_24;//3.0-->3.0
        //*****************32 bits split line
        vuint8_t VCAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc4Reserve_2_34_37;//4.5-->4.2
        vuint8_t VCAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_2_40_40;//5.0-->5.0
        vuint8_t VCAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_2_GW_BCM_Door_0x310_DataBit_tag;
extern Vu8_GW_2_GW_BCM_Door_0x310_DataBit_tag Vu8_GW_2_GW_BCM_Door_0x310_DataBit;


//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint32_t VCAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
        vuint8_t VCAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc3Reserve_3_25_27;//3.3-->3.1
        vuint8_t VexIC_AirbagTelltaleBehavior3High2;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VexIC_AirbagTelltaleBehavior3Low1;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
         //vuint16_t VCAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
        vuint8_t VCAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_3_GW_IC_0x510_DataBit_tag;
extern Vu8_GW_3_GW_IC_0x510_DataBit_tag Vu8_GW_3_GW_IC_0x510_DataBit;


//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
         //vuint32_t VCAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
        vuint8_t VexTBOX_Longitude28High27;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint32_t VexTBOX_Longitude28Low1;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc3Reserve_4_56_58;//7.2-->7.0

     } B;
}  Vu8_GW_4_GW_TBOX_Location_0x580_DataBit_tag;
extern Vu8_GW_4_GW_TBOX_Location_0x580_DataBit_tag Vu8_GW_4_GW_TBOX_Location_0x580_DataBit;


//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_5_14_14;//1.6-->1.6
        vuint8_t VCAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_5_8_8;//1.0-->1.0
        vuint8_t VCAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc7Reserve_5_24_30;//3.6-->3.0
        //*****************32 bits split line
         //vuint8_t Vc8Reserve_5_32_39;//4.7-->4.0
        vuint8_t VCAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_5_42_42;//5.2-->5.2
        vuint8_t VCAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_5_54_54;//6.6-->6.6
        vuint8_t VCAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
        vuint8_t VCAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_5_GW_MP5_0x530_DataBit_tag;
extern Vu8_GW_5_GW_MP5_0x530_DataBit_tag Vu8_GW_5_GW_MP5_0x530_DataBit;


//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint8_t VCAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_6_16_17;//2.1-->2.0
        vuint8_t VCAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_6_24_25;//3.1-->3.0
        //*****************32 bits split line
         //vuint32_t Vc32Reserve_6_56_39;//4.7-->7.0

     } B;
}  Vu8_GW_6_GW_MP5_NAV_0x533_DataBit_tag;
extern Vu8_GW_6_GW_MP5_NAV_0x533_DataBit_tag Vu8_GW_6_GW_MP5_NAV_0x533_DataBit;


//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_7_12_13;//1.5-->1.4
        vuint8_t VCAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_7_GW_SWM_MRR_0x31B_DataBit_tag;
extern Vu8_GW_7_GW_SWM_MRR_0x31B_DataBit_tag Vu8_GW_7_GW_SWM_MRR_0x31B_DataBit;


//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_8_GW_SWM_Body_0x31A_DataBit_tag;
extern Vu8_GW_8_GW_SWM_Body_0x31A_DataBit_tag Vu8_GW_8_GW_SWM_Body_0x31A_DataBit;


//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
        vuint8_t VCAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
         //vuint16_t Vc11Reserve_9_24_18;//2.2-->3.0
        //*****************32 bits split line
        vuint8_t VCAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_9_GW_TCU_GearInfo_0x123_DataBit_tag;
extern Vu8_GW_9_GW_TCU_GearInfo_0x123_DataBit_tag Vu8_GW_9_GW_TCU_GearInfo_0x123_DataBit;


//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
         //vuint16_t VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
         //vuint8_t VexEMS_EngSpeed15High7;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
        //*****************32 bits split line
        vuint8_t VexEMS_EngSpeed15Low8;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
        vuint8_t VCAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
         //vuint16_t VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
        vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_10_GW_EMS_Tq_0x101_DataBit_tag;
extern Vu8_GW_10_GW_EMS_Tq_0x101_DataBit_tag Vu8_GW_10_GW_EMS_Tq_0x101_DataBit;


//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
         //vuint8_t VCAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
         //vuint8_t VexEMS_VacuumPressure10High2;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
        //*****************32 bits split line
        vuint8_t VexEMS_VacuumPressure10Low8;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
        vuint8_t VCAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
         //vuint16_t VCAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
        vuint8_t Vc1Reserve_11_55_55;//6.7-->6.7
        vuint8_t VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_11_GW_EMS_Sts_0x151_DataBit_tag;
extern Vu8_GW_11_GW_EMS_Sts_0x151_DataBit_tag Vu8_GW_11_GW_EMS_Sts_0x151_DataBit;


//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
         //vuint16_t VCAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
        //*****************32 bits split line
         //vuint8_t VCAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
        vuint8_t VCAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_12_GW_EMS_WhlTq_0x107_DataBit_tag;
extern Vu8_GW_12_GW_EMS_WhlTq_0x107_DataBit_tag Vu8_GW_12_GW_EMS_WhlTq_0x107_DataBit;


//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
         //vuint16_t VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc3Reserve_13_36_38;//4.6-->4.4
        vuint8_t VCAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_13_32_33;//4.1-->4.0
         //vuint16_t VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
        vuint8_t VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_13_GW_EMS_TqWhl_0x111_DataBit_tag;
extern Vu8_GW_13_GW_EMS_TqWhl_0x111_DataBit_tag Vu8_GW_13_GW_EMS_TqWhl_0x111_DataBit;


//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint8_t VCAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
         //vuint8_t VCAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
         //vuint16_t VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
        vuint8_t VCAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t Vc6Reserve_14_32_37;//4.5-->4.0
        vuint8_t VCAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t Vc5Reserve_14_55_43;//5.3-->6.7
        vuint8_t VCAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_GW_14_GW_EMS_Engstatus_0x142_DataBit_tag;
extern Vu8_GW_14_GW_EMS_Engstatus_0x142_DataBit_tag Vu8_GW_14_GW_EMS_Engstatus_0x142_DataBit;

//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_Body_0x321_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_Body_0x321_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_Body_0x321_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_Body_0x321_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_Body_0x321_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_Body_0x321_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_Body_0x321 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_Body_0x321_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_Body_0x321_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_Body_0x321_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_Body_0x321_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_Body_0x321_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uBCM_reverse_gear= CAN_ALL_GW_uBCM_reverse_gear_min;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c4Reserve_1_2_5= CAN_ALL_GW_c4Reserve_1_2_5_min;//0.5-->0.2
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_OutsideTempDig= CAN_ALL_GW_u2BCM_OutsideTempDig_min;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_OutsideTemp= CAN_ALL_GW_u2BCM_OutsideTemp_min;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u8BCM_PowerMode= CAN_ALL_GW_u8BCM_PowerMode_min;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_1_20_20= CAN_ALL_GW_c1Reserve_1_20_20_min;//2.4-->2.4
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3BCM_Driving_mode_req_BCM= CAN_ALL_GW_u3BCM_Driving_mode_req_BCM_min;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c2Reserve_1_30_31= CAN_ALL_GW_c2Reserve_1_30_31_min;//3.7-->3.6
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4BCM_HighBeamSts= CAN_ALL_GW_u4BCM_HighBeamSts_min;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_LowBeamSts= CAN_ALL_GW_u2BCM_LowBeamSts_min;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_FrntFogLmpSts= CAN_ALL_GW_u2BCM_FrntFogLmpSts_min;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_AutolampSts= CAN_ALL_GW_u2BCM_AutolampSts_min;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_BrakeFluidSts= CAN_ALL_GW_u2BCM_BrakeFluidSts_min;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_RearDef_Status= CAN_ALL_GW_u2BCM_RearDef_Status_min;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_SS_EnableSts= CAN_ALL_GW_u2BCM_SS_EnableSts_min;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_PosLmpSts= CAN_ALL_GW_u2BCM_PosLmpSts_min;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_BGLLumLvlSetting= CAN_ALL_GW_u2BCM_BGLLumLvlSetting_min;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
                CAN_ALL_FRAMES_GW.B.c8Reserve_1_56_63= CAN_ALL_GW_c8Reserve_1_56_63_min;//7.7-->7.0

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uBCM_reverse_gear=VCAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c4Reserve_1_2_5=Vc4Reserve_1_2_5;//0.5-->0.2
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_OutsideTempDig=VCAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_OutsideTemp=VCAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8BCM_PowerMode=VCAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_1_20_20=Vc1Reserve_1_20_20;//2.4-->2.4
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3BCM_Driving_mode_req_BCM=VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c2Reserve_1_30_31=Vc2Reserve_1_30_31;//3.7-->3.6
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4BCM_HighBeamSts=VCAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_LowBeamSts=VCAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_FrntFogLmpSts=VCAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_AutolampSts=VCAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_BrakeFluidSts=VCAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_RearDef_Status=VCAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_SS_EnableSts=VCAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_PosLmpSts=VCAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_BGLLumLvlSetting=VCAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
                CAN_ALL_FRVar_GW.B.c8Reserve_1_56_63=Vc8Reserve_1_56_63;//7.7-->7.0

                VCAN_ALL_GW_uBCM_reverse_gear=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uBCM_reverse_gear;//0.7-->0.6 3 "Reserved" 2 "InReverseGear?" 1 "NotinReverseGear" 0 "Undefined" 名称：BCM_reverse_gear 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc4Reserve_1_2_5=CAN_ALL_FRVar_GW.B.c4Reserve_1_2_5;//0.5-->0.2
                VCAN_ALL_GW_u2BCM_OutsideTempDig=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_OutsideTempDig;//0.1-->0.0 2 "Opencircuit" 1 "shortcircuit" 0 "NoFault" 名称：BCM_OutsideTempDig 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_OutsideTemp=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_OutsideTemp;//1.7-->1.0 名称：BCM_OutsideTemp 位数：8bit, logical min-max：-48~142.5 physical min-max：0x000~0xFE 精度：0.75 偏移量：-64 单位：degC 
                VCAN_ALL_GW_u8BCM_PowerMode=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8BCM_PowerMode;//2.7-->2.5 4 "START" 3 "ON" 2 "ACC" 1 "OFF" 0 "Undefined" 名称：BCM_PowerMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                Vc1Reserve_1_20_20=CAN_ALL_FRVar_GW.B.c1Reserve_1_20_20;//2.4-->2.4
                VCAN_ALL_GW_u3BCM_Driving_mode_req_BCM=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3BCM_Driving_mode_req_BCM;//2.3-->2.0 15 "invalid" 14 "ATSFaultBCM" 13 "Manual_ForN330L" 9 "Ghat_ForN330L" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：BCM_Driving_mode_req_BCM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                Vc2Reserve_1_30_31=CAN_ALL_FRVar_GW.B.c2Reserve_1_30_31;//3.7-->3.6
                VCAN_ALL_GW_u4BCM_HighBeamSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4BCM_HighBeamSts;//3.5-->3.4 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_HighBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_LowBeamSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_LowBeamSts;//3.3-->3.2 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_LowBeamSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_FrntFogLmpSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_FrntFogLmpSts;//3.1-->3.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Invalid" 名称：BCM_FrntFogLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_AutolampSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_AutolampSts;//4.7-->4.6 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Invalid" 名称：BCM_AutolampSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_BrakeFluidSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_BrakeFluidSts;//4.5-->4.4 3 "Reserved" 2 "low" 1 "Normal" 0 "Invalid" 名称：BCM_BrakeFluidSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_RearDef_Status=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_RearDef_Status;//4.3-->4.2 3 "Reserved" 2 "RearDefActive" 1 "RearDefInactive" 0 "Invalid" 名称：BCM_RearDef_Status 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_SS_EnableSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_SS_EnableSts;//4.1-->4.0 3 "Reserved" 2 "StartStopisForbid" 1 "StartStopisAllow" 0 "Invalid" 名称：BCM_SS_EnableSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_PosLmpSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_PosLmpSts;//5.1-->5.0 3 "Reserved" 2 "ON" 1 "OFF" 0 "Nouesd" 名称：BCM_PosLmpSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_BGLLumLvlSetting=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_BGLLumLvlSetting;//6.7-->6.0 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：BCM_BGLLumLvlSetting 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位：% 
                Vc8Reserve_1_56_63=CAN_ALL_FRVar_GW.B.c8Reserve_1_56_63;//7.7-->7.0

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+7] =Vu8_GW_1_GW_Body_0x321_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+6] =Vu8_GW_1_GW_Body_0x321_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+5] =Vu8_GW_1_GW_Body_0x321_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+4] =Vu8_GW_1_GW_Body_0x321_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+3] =Vu8_GW_1_GW_Body_0x321_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+2] =Vu8_GW_1_GW_Body_0x321_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+1] =Vu8_GW_1_GW_Body_0x321_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_Body_0x321_FR+0] =Vu8_GW_1_GW_Body_0x321_Data0Bit.R;

                Vu8_GW_1_GW_Body_0x321_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 7];
                Vu8_GW_1_GW_Body_0x321_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 6];
                Vu8_GW_1_GW_Body_0x321_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 5];
                Vu8_GW_1_GW_Body_0x321_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 4];
                Vu8_GW_1_GW_Body_0x321_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 3];
                Vu8_GW_1_GW_Body_0x321_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 2];
                Vu8_GW_1_GW_Body_0x321_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 1];
                Vu8_GW_1_GW_Body_0x321_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_Body_0x321_FR + 0];



//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_BCM_Door_0x310_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_BCM_Door_0x310_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_BCM_Door_0x310_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_BCM_Door_0x310_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_BCM_Door_0x310_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_BCM_Door_0x310_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_BCM_Door_0x310 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_BCM_Door_0x310_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_BCM_Door_0x310_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_BCM_Door_0x310_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_BCM_Door_0x310_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_BCM_Door_0x310_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uBCM_DoorStsFrntLe= CAN_ALL_GW_uBCM_DoorStsFrntLe_min;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorStsFrntRi= CAN_ALL_GW_u2BCM_DoorStsFrntRi_min;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorStsRearLe= CAN_ALL_GW_u2BCM_DoorStsRearLe_min;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorStsRearRi= CAN_ALL_GW_u2BCM_DoorStsRearRi_min;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsFrntLe= CAN_ALL_GW_u2BCM_DoorLockStsFrntLe_min;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsFrntRi= CAN_ALL_GW_u2BCM_DoorLockStsFrntRi_min;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsRearLe= CAN_ALL_GW_u2BCM_DoorLockStsRearLe_min;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsRearRi= CAN_ALL_GW_u2BCM_DoorLockStsRearRi_min;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_LockUnlockFeedback= CAN_ALL_GW_u2BCM_LockUnlockFeedback_min;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u5BCM_LoadSensitivity= CAN_ALL_GW_u5BCM_LoadSensitivity_min;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1BCM_AntiTheftSts= CAN_ALL_GW_u1BCM_AntiTheftSts_min;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c2Reserve_2_30_31= CAN_ALL_GW_c2Reserve_2_30_31_min;//3.7-->3.6
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts= CAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts_min;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1BCM_DoorStsTrunk= CAN_ALL_GW_u1BCM_DoorStsTrunk_min;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsTrunk= CAN_ALL_GW_u2BCM_DoorLockStsTrunk_min;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_2_24_24= CAN_ALL_GW_c1Reserve_2_24_24_min;//3.0-->3.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_EnginehoodSts= CAN_ALL_GW_u2BCM_EnginehoodSts_min;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c4Reserve_2_34_37= CAN_ALL_GW_c4Reserve_2_34_37_min;//4.5-->4.2
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_FrontWiperSts= CAN_ALL_GW_u2BCM_FrontWiperSts_min;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_RearWiperSts= CAN_ALL_GW_u2BCM_RearWiperSts_min;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_WindowsCMD= CAN_ALL_GW_u2BCM_WindowsCMD_min;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3BCM_PLG_DriverSW= CAN_ALL_GW_u3BCM_PLG_DriverSW_min;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_2_40_40= CAN_ALL_GW_c1Reserve_2_40_40_min;//5.0-->5.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_TurnIndicatorSts= CAN_ALL_GW_u2BCM_TurnIndicatorSts_min;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2BCM_Rolling_counter_0x310= CAN_ALL_GW_u2BCM_Rolling_counter_0x310_min;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4BCM_Checksum_0x310= CAN_ALL_GW_u4BCM_Checksum_0x310_min;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uBCM_DoorStsFrntLe=VCAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorStsFrntRi=VCAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorStsRearLe=VCAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorStsRearRi=VCAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsFrntLe=VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsFrntRi=VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsRearLe=VCAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsRearRi=VCAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_LockUnlockFeedback=VCAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u5BCM_LoadSensitivity=VCAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1BCM_AntiTheftSts=VCAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c2Reserve_2_30_31=Vc2Reserve_2_30_31;//3.7-->3.6
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts=VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1BCM_DoorStsTrunk=VCAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsTrunk=VCAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_2_24_24=Vc1Reserve_2_24_24;//3.0-->3.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_EnginehoodSts=VCAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c4Reserve_2_34_37=Vc4Reserve_2_34_37;//4.5-->4.2
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_FrontWiperSts=VCAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_RearWiperSts=VCAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_WindowsCMD=VCAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3BCM_PLG_DriverSW=VCAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_2_40_40=Vc1Reserve_2_40_40;//5.0-->5.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_TurnIndicatorSts=VCAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_Rolling_counter_0x310=VCAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4BCM_Checksum_0x310=VCAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uBCM_DoorStsFrntLe=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uBCM_DoorStsFrntLe;//0.7-->0.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorStsFrntRi=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorStsFrntRi;//0.5-->0.4 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorStsRearLe=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorStsRearLe;//0.3-->0.2 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorStsRearRi=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorStsRearRi;//0.1-->0.0 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorLockStsFrntLe=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsFrntLe;//1.7-->1.6 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorLockStsFrntRi=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsFrntRi;//1.5-->1.4 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsFrntRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorLockStsRearLe=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsRearLe;//1.3-->1.2 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearLe 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorLockStsRearRi=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsRearRi;//1.1-->1.0 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsRearRi 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_LockUnlockFeedback=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_LockUnlockFeedback;//2.7-->2.3 31 "Any other Unlock" 27 "Key forgotten to unlock the car" 26 "Diagnostic Unlock" 25 "Tbox Unlcok" 24 "EngOFFUnlock" 23 "KeyRemovalUnlock" 22 "CrashUnlock" 21 "Finger Unlock" 20 "Master Unlock" 19 "Near to vehicle Unlock" 18 "RKE Unlock" 17 "PE Unlock" 15 "Any other Lock" 12 "Tbox 30s autoLock" 11 "Diagnostic Lock" 10 "SpeedLock" 9 "Tbox Lock" 8 "Near to vehicle 30s autoLock" 7 "PE 30s autoLock" 6 "RKE 30s autoLock" 5 "Finger Lock" 4 "Master Lock" 3 "Leave Vehicle Lock" 2 "RKE Lock" 1 "PE Lock" 0 "No Lock_Unlock action" 名称：BCM_LockUnlockFeedback 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u5BCM_LoadSensitivity=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u5BCM_LoadSensitivity;//2.2-->2.2 1 "Active" 0 "Inacitve" 名称：BCM_LoadSensitivity 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1BCM_AntiTheftSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1BCM_AntiTheftSts;//2.1-->2.0 3 "Abnormal fortification" 2 "warning" 1 "Lift The Fortification" 0 "Fortify" 名称：BCM_AntiTheftSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc2Reserve_2_30_31=CAN_ALL_FRVar_GW.B.c2Reserve_2_30_31;//3.7-->3.6
                VCAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_TrunkDoorPreUnlockSts;//3.5-->3.5 1 "PreUnlocked" 0 "No used_No action" 名称：BCM_TrunkDoorPreUnlockSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1BCM_DoorStsTrunk=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1BCM_DoorStsTrunk;//3.4-->3.3 3 "Fault" 2 "Open" 1 "Closed" 0 "No Used" 名称：BCM_DoorStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_DoorLockStsTrunk=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_DoorLockStsTrunk;//3.2-->3.1 3 "Fault" 2 "Unlocked" 1 "Locked" 0 "No Used" 名称：BCM_DoorLockStsTrunk 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc1Reserve_2_24_24=CAN_ALL_FRVar_GW.B.c1Reserve_2_24_24;//3.0-->3.0
                VCAN_ALL_GW_u2BCM_EnginehoodSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_EnginehoodSts;//4.7-->4.6 3 "Fault" 2 "Open" 1 "Closed" 0 "No used" 名称：BCM_EnginehoodSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc4Reserve_2_34_37=CAN_ALL_FRVar_GW.B.c4Reserve_2_34_37;//4.5-->4.2
                VCAN_ALL_GW_u2BCM_FrontWiperSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_FrontWiperSts;//4.1-->4.0 3 "High" 2 "Low" 1 "Off" 0 "No used" 名称：BCM_FrontWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_RearWiperSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_RearWiperSts;//5.7-->5.6 3 "Reserved" 2 "On" 1 "Off" 0 "No used" 名称：BCM_RearWiperSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_WindowsCMD=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_WindowsCMD;//5.5-->5.3 4 "Windows stop" 3 "Windows vent" 2 "Windows down" 1 "Windows up" 0 "Invalid" 名称：BCM_WindowsCMD 位数：3bit, logical min-max：0~4 physical min-max：0x000~0x4 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3BCM_PLG_DriverSW=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3BCM_PLG_DriverSW;//5.2-->5.1 3 "Reserved" 2 "Stuck" 1 "Press" 0 "release" 名称：BCM_PLG_DriverSW 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc1Reserve_2_40_40=CAN_ALL_FRVar_GW.B.c1Reserve_2_40_40;//5.0-->5.0
                VCAN_ALL_GW_u2BCM_TurnIndicatorSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_TurnIndicatorSts;//6.7-->6.6 3 "LeAndRiOn" 2 "RiOn" 1 "LeOn" 0 "Off" 名称：BCM_TurnIndicatorSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2BCM_Rolling_counter_0x310=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2BCM_Rolling_counter_0x310;//6.3-->6.0 名称：BCM_Rolling_counter_0x310 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4BCM_Checksum_0x310=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4BCM_Checksum_0x310;//7.7-->7.0 名称：BCM_Checksum_0x310 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+7] =Vu8_GW_2_GW_BCM_Door_0x310_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+6] =Vu8_GW_2_GW_BCM_Door_0x310_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+5] =Vu8_GW_2_GW_BCM_Door_0x310_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+4] =Vu8_GW_2_GW_BCM_Door_0x310_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+3] =Vu8_GW_2_GW_BCM_Door_0x310_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+2] =Vu8_GW_2_GW_BCM_Door_0x310_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+1] =Vu8_GW_2_GW_BCM_Door_0x310_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_BCM_Door_0x310_FR+0] =Vu8_GW_2_GW_BCM_Door_0x310_Data0Bit.R;

                Vu8_GW_2_GW_BCM_Door_0x310_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 7];
                Vu8_GW_2_GW_BCM_Door_0x310_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 6];
                Vu8_GW_2_GW_BCM_Door_0x310_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 5];
                Vu8_GW_2_GW_BCM_Door_0x310_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 4];
                Vu8_GW_2_GW_BCM_Door_0x310_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 3];
                Vu8_GW_2_GW_BCM_Door_0x310_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 2];
                Vu8_GW_2_GW_BCM_Door_0x310_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 1];
                Vu8_GW_2_GW_BCM_Door_0x310_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_BCM_Door_0x310_FR + 0];



//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_IC_0x510_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_IC_0x510_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_IC_0x510_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_IC_0x510_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_IC_0x510_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_IC_0x510_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_IC_0x510 = 1 ;  //部件具体报文CAN接收无信号
                exIC_AirbagTelltaleBehavior.R= CAN_ALL_GW_u1IC_AirbagTelltaleBehavior_min;//3.0-->4.6 7 "Invalid" 6 "Invalid" 5 "Invalid" 4 "AirBagFailSts signal not received" 3 "no failure in the lamp Lamp is blinking" 2 "no failure in the lamp Lamp is on" 1 "failure in lamp" 0 "no failure in lamp and lamp is off" 名称：IC_AirbagTelltaleBehavior 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.exIC_AirbagTelltaleBehavior3High2=exIC_AirbagTelltaleBehavior.B.exIC_AirbagTelltaleBehavior3High2;
                CAN_ALL_FRVar_GW.B.exIC_AirbagTelltaleBehavior3Low1=exIC_AirbagTelltaleBehavior.B.exIC_AirbagTelltaleBehavior3Low1;
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_IC_0x510_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_IC_0x510_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_IC_0x510_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_IC_0x510_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_IC_0x510_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uIC_OdometerMasterValue= CAN_ALL_GW_uIC_OdometerMasterValue_min;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u24IC_QDashACCFail= CAN_ALL_GW_u24IC_QDashACCFail_min;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2IC_DISFail= CAN_ALL_GW_u2IC_DISFail_min;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC= CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC_min;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c3Reserve_3_25_27= CAN_ALL_GW_c3Reserve_3_25_27_min;//3.3-->3.1
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3IC_VehSpd_HMI= CAN_ALL_GW_u3IC_VehSpd_HMI_min;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u9IC_Rolling_counter_0x510= CAN_ALL_GW_u9IC_Rolling_counter_0x510_min;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4IC_Checksum_0x510= CAN_ALL_GW_u4IC_Checksum_0x510_min;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uIC_OdometerMasterValue=VCAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u24IC_QDashACCFail=VCAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2IC_DISFail=VCAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC=VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c3Reserve_3_25_27=Vc3Reserve_3_25_27;//3.3-->3.1
                CAN_ALL_FRVar_GW.B.exIC_AirbagTelltaleBehavior3High2=VexexIC_AirbagTelltaleBehavior3High2;
                CAN_ALL_FRVar_GW.B.exIC_AirbagTelltaleBehavior3Low1=VexexIC_AirbagTelltaleBehavior3Low1;
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3IC_VehSpd_HMI=VCAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u9IC_Rolling_counter_0x510=VCAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4IC_Checksum_0x510=VCAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uIC_OdometerMasterValue=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uIC_OdometerMasterValue;//0.7-->2.0 名称：IC_OdometerMasterValue 位数：24bit, logical min-max：0~999999 physical min-max：0x000~0x989676 精度：0.1 偏移量：0 单位：km 
                VCAN_ALL_GW_u24IC_QDashACCFail=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u24IC_QDashACCFail;//3.7-->3.6 3 "not defined" 2 "irreversible error" 1 "reversible error" 0 "no error" 名称：IC_QDashACCFail 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2IC_DISFail=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2IC_DISFail;//3.5-->3.5 1 "error" 0 "no error" 名称：IC_DISFail 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1IC_VehBrkPump_ERR_IC=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1IC_VehBrkPump_ERR_IC;//3.4-->3.4 1 "Error" 0 "Normal" 名称：IC_VehBrkPump_ERR_IC 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc3Reserve_3_25_27=CAN_ALL_FRVar_GW.B.c3Reserve_3_25_27;//3.3-->3.1
                VexexIC_AirbagTelltaleBehavior3High2 = CAN_ALL_FRVar_GW.B.exIC_AirbagTelltaleBehavior3High2;
                VexexIC_AirbagTelltaleBehavior3Low1= CAN_ALL_FRVar_GW.B.exIC_AirbagTelltaleBehavior3Low1;
                VCAN_ALL_GW_u3IC_VehSpd_HMI=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3IC_VehSpd_HMI;//4.5-->5.5 名称：IC_VehSpd_HMI 位数：9bit, logical min-max：0~500 physical min-max：0x000~0x1F4 精度：1 偏移量：0 单位：kph 
                VCAN_ALL_GW_u9IC_Rolling_counter_0x510=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u9IC_Rolling_counter_0x510;//6.3-->6.0 名称：IC_Rolling_counter_0x510 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4IC_Checksum_0x510=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4IC_Checksum_0x510;//7.7-->7.0 名称：IC_Checksum_0x510 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+7] =Vu8_GW_3_GW_IC_0x510_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+6] =Vu8_GW_3_GW_IC_0x510_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+5] =Vu8_GW_3_GW_IC_0x510_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+4] =Vu8_GW_3_GW_IC_0x510_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+3] =Vu8_GW_3_GW_IC_0x510_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+2] =Vu8_GW_3_GW_IC_0x510_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+1] =Vu8_GW_3_GW_IC_0x510_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_IC_0x510_FR+0] =Vu8_GW_3_GW_IC_0x510_Data0Bit.R;

                Vu8_GW_3_GW_IC_0x510_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 7];
                Vu8_GW_3_GW_IC_0x510_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 6];
                Vu8_GW_3_GW_IC_0x510_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 5];
                Vu8_GW_3_GW_IC_0x510_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 4];
                Vu8_GW_3_GW_IC_0x510_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 3];
                Vu8_GW_3_GW_IC_0x510_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 2];
                Vu8_GW_3_GW_IC_0x510_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 1];
                Vu8_GW_3_GW_IC_0x510_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_IC_0x510_FR + 0];



//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_TBOX_Location_0x580_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_TBOX_Location_0x580_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_TBOX_Location_0x580_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_TBOX_Location_0x580_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_TBOX_Location_0x580_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_TBOX_Location_0x580_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_TBOX_Location_0x580 = 1 ;  //部件具体报文CAN接收无信号
                exTBOX_Longitude.R= CAN_ALL_GW_u28TBOX_Longitude_min;//4.7-->7.4 名称：TBOX_Longitude 位数：28bit, logical min-max：0~180 physical min-max：0x000~0xABA9500 精度：1E-06 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.exTBOX_Longitude28High27=exTBOX_Longitude.B.exTBOX_Longitude28High27;
                CAN_ALL_FRVar_GW.B.exTBOX_Longitude28Low1=exTBOX_Longitude.B.exTBOX_Longitude28Low1;
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_TBOX_Location_0x580_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_TBOX_Location_0x580_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_TBOX_Location_0x580_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_TBOX_Location_0x580_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_TBOX_Location_0x580_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uTBOX_LocationSts= CAN_ALL_GW_uTBOX_LocationSts_min;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3TBOX_Latidude= CAN_ALL_GW_u3TBOX_Latidude_min;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u28TBOX_GPS_UB= CAN_ALL_GW_u28TBOX_GPS_UB_min;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c3Reserve_4_56_58= CAN_ALL_GW_c3Reserve_4_56_58_min;//7.2-->7.0

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uTBOX_LocationSts=VCAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3TBOX_Latidude=VCAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.exTBOX_Longitude28High27=VexexTBOX_Longitude28High27;
                CAN_ALL_FRVar_GW.B.exTBOX_Longitude28Low1=VexexTBOX_Longitude28Low1;
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u28TBOX_GPS_UB=VCAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c3Reserve_4_56_58=Vc3Reserve_4_56_58;//7.2-->7.0

                VCAN_ALL_GW_uTBOX_LocationSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uTBOX_LocationSts;//0.7-->0.5 7 "Invalid" 3 "south Latitude_west longitude" 2 "south Latitude_east longitude" 1 "North Latitude_west longitude" 0 "North Latitude_east longitude" 名称：TBOX_LocationSts 位数：3bit, logical min-max：0~6 physical min-max：0x000~0x6 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3TBOX_Latidude=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3TBOX_Latidude;//0.4-->3.1 名称：TBOX_Latidude 位数：28bit, logical min-max：0~90 physical min-max：0x000~0x55D4A80 精度：1E-06 偏移量：0 单位： 
                VexexTBOX_Longitude28High27 = CAN_ALL_FRVar_GW.B.exTBOX_Longitude28High27;
                VexexTBOX_Longitude28Low1= CAN_ALL_FRVar_GW.B.exTBOX_Longitude28Low1;
                VCAN_ALL_GW_u28TBOX_GPS_UB=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u28TBOX_GPS_UB;//7.3-->7.3 1 "Update GPS" 0 "Not Update GPS" 名称：TBOX_GPS_UB 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc3Reserve_4_56_58=CAN_ALL_FRVar_GW.B.c3Reserve_4_56_58;//7.2-->7.0

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+7] =Vu8_GW_4_GW_TBOX_Location_0x580_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+6] =Vu8_GW_4_GW_TBOX_Location_0x580_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+5] =Vu8_GW_4_GW_TBOX_Location_0x580_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+4] =Vu8_GW_4_GW_TBOX_Location_0x580_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+3] =Vu8_GW_4_GW_TBOX_Location_0x580_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+2] =Vu8_GW_4_GW_TBOX_Location_0x580_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+1] =Vu8_GW_4_GW_TBOX_Location_0x580_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TBOX_Location_0x580_FR+0] =Vu8_GW_4_GW_TBOX_Location_0x580_Data0Bit.R;

                Vu8_GW_4_GW_TBOX_Location_0x580_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 7];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 6];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 5];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 4];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 3];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 2];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 1];
                Vu8_GW_4_GW_TBOX_Location_0x580_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TBOX_Location_0x580_FR + 0];



//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_MP5_0x530_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_MP5_0x530_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_MP5_0x530_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_MP5_0x530_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_0x530_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_0x530_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_MP5_0x530 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_MP5_0x530_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_MP5_0x530_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_MP5_0x530_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_MP5_0x530_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_0x530_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uMP5_AVM_Button= CAN_ALL_GW_uMP5_AVM_Button_min;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_AVM_Angle= CAN_ALL_GW_u2MP5_AVM_Angle_min;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4MP5_FCW_Sensitive= CAN_ALL_GW_u4MP5_FCW_Sensitive_min;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_BSDSwitchSts= CAN_ALL_GW_u2MP5_BSDSwitchSts_min;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_5_14_14= CAN_ALL_GW_c1Reserve_5_14_14_min;//1.6-->1.6
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_FCW_ON_OFF= CAN_ALL_GW_u1MP5_FCW_ON_OFF_min;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_AEB_ON_OFF= CAN_ALL_GW_u1MP5_AEB_ON_OFF_min;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_ICMenuShift_Button= CAN_ALL_GW_u1MP5_ICMenuShift_Button_min;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_View_Choice= CAN_ALL_GW_u2MP5_View_Choice_min;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_5_8_8= CAN_ALL_GW_c1Reserve_5_8_8_min;//1.0-->1.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_AlarmOrNot= CAN_ALL_GW_u1MP5_AlarmOrNot_min;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_AlarmStatus= CAN_ALL_GW_u1MP5_AlarmStatus_min;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_ICMenuActive_Button= CAN_ALL_GW_u2MP5_ICMenuActive_Button_min;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_LaneAssitTypeReq= CAN_ALL_GW_u2MP5_LaneAssitTypeReq_min;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_AFS_SwtichSts= CAN_ALL_GW_u2MP5_AFS_SwtichSts_min;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_PaakReset_Req= CAN_ALL_GW_u1MP5_PaakReset_Req_min;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c7Reserve_5_24_30= CAN_ALL_GW_c7Reserve_5_24_30_min;//3.6-->3.0
                CAN_ALL_FRAMES_GW.B.c8Reserve_5_32_39= CAN_ALL_GW_c8Reserve_5_32_39_min;//4.7-->4.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_LDWSensitvity= CAN_ALL_GW_u1MP5_LDWSensitvity_min;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_LDWWarning= CAN_ALL_GW_u2MP5_LDWWarning_min;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_TSRMenuReq= CAN_ALL_GW_u2MP5_TSRMenuReq_min;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_5_42_42= CAN_ALL_GW_c1Reserve_5_42_42_min;//5.2-->5.2
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_BSDLCA_Active= CAN_ALL_GW_u1MP5_BSDLCA_Active_min;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_CTA_Active= CAN_ALL_GW_u1MP5_CTA_Active_min;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_DOA_Active= CAN_ALL_GW_u1MP5_DOA_Active_min;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c1Reserve_5_54_54= CAN_ALL_GW_c1Reserve_5_54_54_min;//6.6-->6.6
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_IHCMenuReq= CAN_ALL_GW_u1MP5_IHCMenuReq_min;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_AVM_RotationChange= CAN_ALL_GW_u1MP5_AVM_RotationChange_min;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u6MP5_AVM_RotationDirection= CAN_ALL_GW_u6MP5_AVM_RotationDirection_min;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_TPMSAutoLocationSetting= CAN_ALL_GW_u2MP5_TPMSAutoLocationSetting_min;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_APA_Available_Sts= CAN_ALL_GW_u1MP5_APA_Available_Sts_min;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uMP5_AVM_Button=VCAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_AVM_Angle=VCAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4MP5_FCW_Sensitive=VCAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_BSDSwitchSts=VCAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_5_14_14=Vc1Reserve_5_14_14;//1.6-->1.6
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_FCW_ON_OFF=VCAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AEB_ON_OFF=VCAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_ICMenuShift_Button=VCAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_View_Choice=VCAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_5_8_8=Vc1Reserve_5_8_8;//1.0-->1.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AlarmOrNot=VCAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AlarmStatus=VCAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_ICMenuActive_Button=VCAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_LaneAssitTypeReq=VCAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_AFS_SwtichSts=VCAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_PaakReset_Req=VCAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c7Reserve_5_24_30=Vc7Reserve_5_24_30;//3.6-->3.0
                CAN_ALL_FRVar_GW.B.c8Reserve_5_32_39=Vc8Reserve_5_32_39;//4.7-->4.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_LDWSensitvity=VCAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_LDWWarning=VCAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_TSRMenuReq=VCAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_5_42_42=Vc1Reserve_5_42_42;//5.2-->5.2
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_BSDLCA_Active=VCAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_CTA_Active=VCAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_DOA_Active=VCAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c1Reserve_5_54_54=Vc1Reserve_5_54_54;//6.6-->6.6
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_IHCMenuReq=VCAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AVM_RotationChange=VCAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u6MP5_AVM_RotationDirection=VCAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_TPMSAutoLocationSetting=VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_APA_Available_Sts=VCAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uMP5_AVM_Button=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uMP5_AVM_Button;//0.7-->0.6 3 "Faulture" 2 "shut down" 1 "start up" 0 "init" 名称：MP5_AVM_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_AVM_Angle=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_AVM_Angle;//0.5-->0.2 15 "Invalid" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "No_Video_Signal_Reserved" 10 "2D Key" 9 "3D Key" 8 "Left_Front_3D" 7 "Left_3D_Left_AVM_2D" 6 "Left_Rear_3D" 5 "Rear_3D_Rear_AVM_2D" 4 "Rear_Right_3D" 3 "Right_3D_Right_AVM_2D" 2 "Front_Right_3D" 1 "Front_3D_Front_AVM_2D" 0 "Center Key" 名称：MP5_AVM_Angle 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4MP5_FCW_Sensitive=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4MP5_FCW_Sensitive;//0.1-->0.0 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" 名称：MP5_FCW_Sensitive 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_BSDSwitchSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_BSDSwitchSts;//1.7-->1.7 1 "OFF" 0 "ON" 名称：MP5_BSDSwitchSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc1Reserve_5_14_14=CAN_ALL_FRVar_GW.B.c1Reserve_5_14_14;//1.6-->1.6
                VCAN_ALL_GW_u1MP5_FCW_ON_OFF=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_FCW_ON_OFF;//1.5-->1.5 1 "switch off" 0 "switch on" 名称：MP5_FCW_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_AEB_ON_OFF=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AEB_ON_OFF;//1.4-->1.4 1 "switch off" 0 "switch on" 名称：MP5_AEB_ON_OFF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_ICMenuShift_Button=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_ICMenuShift_Button;//1.3-->1.2 3 "Invalid" 2 "Page down" 1 "Page up" 0 "No event" 名称：MP5_ICMenuShift_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_View_Choice=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_View_Choice;//1.1-->1.1 1 "ADAS" 0 "AVM" 名称：MP5_View_Choice 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc1Reserve_5_8_8=CAN_ALL_FRVar_GW.B.c1Reserve_5_8_8;//1.0-->1.0
                VCAN_ALL_GW_u1MP5_AlarmOrNot=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AlarmOrNot;//2.7-->2.7 1 "Alarm" 0 "No Alarm" 名称：MP5_AlarmOrNot 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_AlarmStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AlarmStatus;//2.6-->2.5 3 "Reserved" 2 "Failed" 1 "Active" 0 "Inactive" 名称：MP5_AlarmStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_ICMenuActive_Button=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_ICMenuActive_Button;//2.4-->2.3 3 "Invalid" 2 "silence" 1 "menu switch active" 0 "off" 名称：MP5_ICMenuActive_Button 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_LaneAssitTypeReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_LaneAssitTypeReq;//2.2-->2.1 3 "LDW+LKA" 2 "LKA" 1 "LDW" 0 "no selection" 名称：MP5_LaneAssitTypeReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_AFS_SwtichSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_AFS_SwtichSts;//2.0-->2.0 1 "Press" 0 "no press" 名称：MP5_AFS_SwtichSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_PaakReset_Req=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_PaakReset_Req;//3.7-->3.7 1 "Request" 0 "No Request" 名称：MP5_PaakReset_Req 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc7Reserve_5_24_30=CAN_ALL_FRVar_GW.B.c7Reserve_5_24_30;//3.6-->3.0
                Vc8Reserve_5_32_39=CAN_ALL_FRVar_GW.B.c8Reserve_5_32_39;//4.7-->4.0
                VCAN_ALL_GW_u1MP5_LDWSensitvity=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_LDWSensitvity;//5.7-->5.6 2 "Reserved" 1 "Low" 0 "High" 名称：MP5_LDWSensitvity 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_LDWWarning=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_LDWWarning;//5.5-->5.4 3 "Reserved" 2 "wheelsteer shake" 1 "audible warning" 0 "audible warning and wheelsteer shake" 名称：MP5_LDWWarning 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_TSRMenuReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_TSRMenuReq;//5.3-->5.3 1 "OFF" 0 "ON" 名称：MP5_TSRMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc1Reserve_5_42_42=CAN_ALL_FRVar_GW.B.c1Reserve_5_42_42;//5.2-->5.2
                VCAN_ALL_GW_u1MP5_BSDLCA_Active=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_BSDLCA_Active;//5.1-->5.1 1 "OFF" 0 "ON" 名称：MP5_BSDLCA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_CTA_Active=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_CTA_Active;//5.0-->5.0 1 "OFF" 0 "ON" 名称：MP5_CTA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_DOA_Active=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_DOA_Active;//6.7-->6.7 1 "OFF" 0 "ON" 名称：MP5_DOA_Active 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc1Reserve_5_54_54=CAN_ALL_FRVar_GW.B.c1Reserve_5_54_54;//6.6-->6.6
                VCAN_ALL_GW_u1MP5_IHCMenuReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_IHCMenuReq;//6.5-->6.5 1 "OFF" 0 "ON" 名称：MP5_IHCMenuReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_AVM_RotationChange=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_AVM_RotationChange;//6.4-->7.7 名称：MP5_AVM_RotationChange 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位：deg 
                VCAN_ALL_GW_u6MP5_AVM_RotationDirection=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u6MP5_AVM_RotationDirection;//7.6-->7.5 3 "Reserved" 2 "Anticlockwise" 1 "Clockwise" 0 "Initial" 名称：MP5_AVM_RotationDirection 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_TPMSAutoLocationSetting=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_TPMSAutoLocationSetting;//7.2-->7.2 1 "AutoLocationSettingON" 0 "AutoLocationSettingOFF" 名称：MP5_TPMSAutoLocationSetting 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_APA_Available_Sts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_APA_Available_Sts;//7.1-->7.0 2 "Not avalible" 1 "Avalible" 0 "initial" 名称：MP5_APA_Available_Sts 位数：2bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+7] =Vu8_GW_5_GW_MP5_0x530_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+6] =Vu8_GW_5_GW_MP5_0x530_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+5] =Vu8_GW_5_GW_MP5_0x530_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+4] =Vu8_GW_5_GW_MP5_0x530_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+3] =Vu8_GW_5_GW_MP5_0x530_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+2] =Vu8_GW_5_GW_MP5_0x530_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+1] =Vu8_GW_5_GW_MP5_0x530_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_0x530_FR+0] =Vu8_GW_5_GW_MP5_0x530_Data0Bit.R;

                Vu8_GW_5_GW_MP5_0x530_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 7];
                Vu8_GW_5_GW_MP5_0x530_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 6];
                Vu8_GW_5_GW_MP5_0x530_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 5];
                Vu8_GW_5_GW_MP5_0x530_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 4];
                Vu8_GW_5_GW_MP5_0x530_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 3];
                Vu8_GW_5_GW_MP5_0x530_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 2];
                Vu8_GW_5_GW_MP5_0x530_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 1];
                Vu8_GW_5_GW_MP5_0x530_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_0x530_FR + 0];



//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_MP5_NAV_0x533_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_MP5_NAV_0x533_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_MP5_NAV_0x533_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_MP5_NAV_0x533_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_NAV_0x533_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_NAV_0x533_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_MP5_NAV_0x533 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_MP5_NAV_0x533_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_MP5_NAV_0x533_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_MP5_NAV_0x533_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_MP5_NAV_0x533_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_NAV_0x533_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uNav_CountryCode= CAN_ALL_GW_uNav_CountryCode_min;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u8Nav_CurrRoadType= CAN_ALL_GW_u8Nav_CurrRoadType_min;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4Nav_SpeedLimitUnits= CAN_ALL_GW_u4Nav_SpeedLimitUnits_min;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2Nav_SpeedLimitStatus= CAN_ALL_GW_u2Nav_SpeedLimitStatus_min;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2Nav_SpeedLimit= CAN_ALL_GW_u2Nav_SpeedLimit_min;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c2Reserve_6_16_17= CAN_ALL_GW_c2Reserve_6_16_17_min;//2.1-->2.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u6Nav_Sts= CAN_ALL_GW_u6Nav_Sts_min;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1MP5_APA_Function_Select= CAN_ALL_GW_u1MP5_APA_Function_Select_min;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_APA_ConfirmButton= CAN_ALL_GW_u2MP5_APA_ConfirmButton_min;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2MP5_APAActive_Cmd= CAN_ALL_GW_u2MP5_APAActive_Cmd_min;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c2Reserve_6_24_25= CAN_ALL_GW_c2Reserve_6_24_25_min;//3.1-->3.0
                CAN_ALL_FRAMES_GW.B.c32Reserve_6_56_39= CAN_ALL_GW_c32Reserve_6_56_39_min;//4.7-->7.0

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uNav_CountryCode=VCAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8Nav_CurrRoadType=VCAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4Nav_SpeedLimitUnits=VCAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2Nav_SpeedLimitStatus=VCAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2Nav_SpeedLimit=VCAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c2Reserve_6_16_17=Vc2Reserve_6_16_17;//2.1-->2.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u6Nav_Sts=VCAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_APA_Function_Select=VCAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_APA_ConfirmButton=VCAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_APAActive_Cmd=VCAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c2Reserve_6_24_25=Vc2Reserve_6_24_25;//3.1-->3.0
                CAN_ALL_FRVar_GW.B.c32Reserve_6_56_39=Vc32Reserve_6_56_39;//4.7-->7.0

                VCAN_ALL_GW_uNav_CountryCode=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uNav_CountryCode;//0.7-->0.0 名称：Nav_CountryCode 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u8Nav_CurrRoadType=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8Nav_CurrRoadType;//1.7-->1.4 4 "Country road" 3 "Downtown road" 2 "City express way" 1 "High speed road" 0 "Unknow" 名称：Nav_CurrRoadType 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4Nav_SpeedLimitUnits=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4Nav_SpeedLimitUnits;//1.3-->1.2 3 "Reserved" 2 "KMH" 1 "MPH" 0 "Unknown" 名称：Nav_SpeedLimitUnits 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2Nav_SpeedLimitStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2Nav_SpeedLimitStatus;//1.1-->1.0 3 "SL_PLURAL" 2 "SL_NOLIMIT" 1 "SL_EXISTS" 0 "SL_UNKNOWN" 名称：Nav_SpeedLimitStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2Nav_SpeedLimit=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2Nav_SpeedLimit;//2.7-->2.2 26 "SPL 130" 5 "SPL 25" 4 "SPL 20" 3 "SPL 15" 2 "SPL 10" 1 "SPL 5" 0 "No Display" 名称：Nav_SpeedLimit 位数：6bit, logical min-max：0~63 physical min-max：0x000~0x3F 精度：1 偏移量：0 单位： 
                Vc2Reserve_6_16_17=CAN_ALL_FRVar_GW.B.c2Reserve_6_16_17;//2.1-->2.0
                VCAN_ALL_GW_u6Nav_Sts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u6Nav_Sts;//3.7-->3.7 1 "Active" 0 "Inactive" 名称：Nav_Sts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1MP5_APA_Function_Select=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1MP5_APA_Function_Select;//3.6-->3.5 3 "POC Button Press" 2 "cPSC Button Press" 1 "pPSC Button Press" 0 "No Button Press" 名称：MP5_APA_Function_Select 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_APA_ConfirmButton=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_APA_ConfirmButton;//3.4-->3.3 3 "Reserved" 2 "Terminated Button Press" 1 "Comfirm Button Press" 0 "No Button Press" 名称：MP5_APA_ConfirmButton 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2MP5_APAActive_Cmd=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2MP5_APAActive_Cmd;//3.2-->3.2 1 "Request" 0 "No Request" 名称：MP5_APAActive_Cmd 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc2Reserve_6_24_25=CAN_ALL_FRVar_GW.B.c2Reserve_6_24_25;//3.1-->3.0
                Vc32Reserve_6_56_39=CAN_ALL_FRVar_GW.B.c32Reserve_6_56_39;//4.7-->7.0

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+7] =Vu8_GW_6_GW_MP5_NAV_0x533_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+6] =Vu8_GW_6_GW_MP5_NAV_0x533_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+5] =Vu8_GW_6_GW_MP5_NAV_0x533_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+4] =Vu8_GW_6_GW_MP5_NAV_0x533_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+3] =Vu8_GW_6_GW_MP5_NAV_0x533_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+2] =Vu8_GW_6_GW_MP5_NAV_0x533_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+1] =Vu8_GW_6_GW_MP5_NAV_0x533_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_MP5_NAV_0x533_FR+0] =Vu8_GW_6_GW_MP5_NAV_0x533_Data0Bit.R;

                Vu8_GW_6_GW_MP5_NAV_0x533_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 7];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 6];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 5];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 4];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 3];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 2];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 1];
                Vu8_GW_6_GW_MP5_NAV_0x533_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_MP5_NAV_0x533_FR + 0];



//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_SWM_MRR_0x31B_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_SWM_MRR_0x31B_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_SWM_MRR_0x31B_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_SWM_MRR_0x31B_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_MRR_0x31B_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_MRR_0x31B_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_SWM_MRR_0x31B = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_SWM_MRR_0x31B_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_SWM_MRR_0x31B_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_SWM_MRR_0x31B_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_SWM_MRR_0x31B_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_MRR_0x31B_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uSWM_ACCResume_Qt= CAN_ALL_GW_uSWM_ACCResume_Qt_min;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCEnableSwitch= CAN_ALL_GW_u1SWM_ACCEnableSwitch_min;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCSet= CAN_ALL_GW_u1SWM_ACCSet_min;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCResume= CAN_ALL_GW_u1SWM_ACCResume_min;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCDeactivate= CAN_ALL_GW_u1SWM_ACCDeactivate_min;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCvSetPlus= CAN_ALL_GW_u1SWM_ACCvSetPlus_min;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCvSetMinus= CAN_ALL_GW_u1SWM_ACCvSetMinus_min;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCtauGapSetPlus= CAN_ALL_GW_u1SWM_ACCtauGapSetPlus_min;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCtauGapSetMinus= CAN_ALL_GW_u1SWM_ACCtauGapSetMinus_min;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_LaneAssistSwitch= CAN_ALL_GW_u1SWM_LaneAssistSwitch_min;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c2Reserve_7_12_13= CAN_ALL_GW_c2Reserve_7_12_13_min;//1.5-->1.4
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ACCLimpHomeSts= CAN_ALL_GW_u1SWM_ACCLimpHomeSts_min;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ShiftPadReqUp= CAN_ALL_GW_u1SWM_ShiftPadReqUp_min;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ShiftPadReqDown= CAN_ALL_GW_u1SWM_ShiftPadReqDown_min;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_TJASwitch= CAN_ALL_GW_u1SWM_TJASwitch_min;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_ShiftPadFlt= CAN_ALL_GW_u1SWM_ShiftPadFlt_min;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1Rolling_counter_0x31B= CAN_ALL_GW_u1Rolling_counter_0x31B_min;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4Checksum_0x31B= CAN_ALL_GW_u4Checksum_0x31B_min;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uSWM_ACCResume_Qt=VCAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCEnableSwitch=VCAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCSet=VCAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCResume=VCAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCDeactivate=VCAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCvSetPlus=VCAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCvSetMinus=VCAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCtauGapSetPlus=VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCtauGapSetMinus=VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_LaneAssistSwitch=VCAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c2Reserve_7_12_13=Vc2Reserve_7_12_13;//1.5-->1.4
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCLimpHomeSts=VCAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ShiftPadReqUp=VCAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ShiftPadReqDown=VCAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_TJASwitch=VCAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ShiftPadFlt=VCAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1Rolling_counter_0x31B=VCAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4Checksum_0x31B=VCAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uSWM_ACCResume_Qt=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uSWM_ACCResume_Qt;//0.7-->0.7 1 "Invalid" 0 "valid" 名称：SWM_ACCResume_Qt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCEnableSwitch=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCEnableSwitch;//0.6-->0.6 1 "enable ACC control" 0 "prevent ACC control" 名称：SWM_ACCEnableSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCSet=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCSet;//0.5-->0.5 1 "pressed" 0 "no press" 名称：SWM_ACCSet 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCResume=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCResume;//0.4-->0.4 1 "pressed" 0 "no press" 名称：SWM_ACCResume 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCDeactivate=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCDeactivate;//0.3-->0.3 1 "pressed" 0 "no press" 名称：SWM_ACCDeactivate 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCvSetPlus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCvSetPlus;//0.2-->0.2 1 "pressed" 0 "no press" 名称：SWM_ACCvSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCvSetMinus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCvSetMinus;//0.1-->0.1 1 "pressed" 0 "no press" 名称：SWM_ACCvSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCtauGapSetPlus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCtauGapSetPlus;//0.0-->0.0 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetPlus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ACCtauGapSetMinus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCtauGapSetMinus;//1.7-->1.7 1 "pressed" 0 "no press" 名称：SWM_ACCtauGapSetMinus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_LaneAssistSwitch=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_LaneAssistSwitch;//1.6-->1.6 1 "enable LaneAssist control" 0 "prevent LaneAssist control" 名称：SWM_LaneAssistSwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc2Reserve_7_12_13=CAN_ALL_FRVar_GW.B.c2Reserve_7_12_13;//1.5-->1.4
                VCAN_ALL_GW_u1SWM_ACCLimpHomeSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ACCLimpHomeSts;//1.3-->1.3 1 "LimpHome" 0 "Normal" 名称：SWM_ACCLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ShiftPadReqUp=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ShiftPadReqUp;//1.2-->1.2 1 "press" 0 "no press" 名称：SWM_ShiftPadReqUp 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ShiftPadReqDown=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ShiftPadReqDown;//1.1-->1.1 1 "press" 0 "no press" 名称：SWM_ShiftPadReqDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_TJASwitch=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_TJASwitch;//1.0-->1.0 1 "enable TJA control" 0 "prevent TJA control" 名称：SWM_TJASwitch 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_ShiftPadFlt=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_ShiftPadFlt;//2.7-->2.7 1 "Fault" 0 "No Fault" 名称：SWM_ShiftPadFlt 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1Rolling_counter_0x31B=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1Rolling_counter_0x31B;//6.3-->6.0 名称：Rolling_counter_0x31B 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4Checksum_0x31B=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4Checksum_0x31B;//7.7-->7.0 名称：Checksum_0x31B 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+7] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+6] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+5] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+4] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+3] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+2] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+1] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_MRR_0x31B_FR+0] =Vu8_GW_7_GW_SWM_MRR_0x31B_Data0Bit.R;

                Vu8_GW_7_GW_SWM_MRR_0x31B_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 7];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 6];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 5];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 4];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 3];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 2];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 1];
                Vu8_GW_7_GW_SWM_MRR_0x31B_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_MRR_0x31B_FR + 0];



//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_SWM_Body_0x31A_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_SWM_Body_0x31A_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_SWM_Body_0x31A_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_SWM_Body_0x31A_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_Body_0x31A_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_Body_0x31A_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_SWM_Body_0x31A = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_SWM_Body_0x31A_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_SWM_Body_0x31A_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_SWM_Body_0x31A_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_SWM_Body_0x31A_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_Body_0x31A_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uSWM_RWasherSts= CAN_ALL_GW_uSWM_RWasherSts_min;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_FWasherSts= CAN_ALL_GW_u2SWM_FWasherSts_min;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_LampLimpHomeSts= CAN_ALL_GW_u2SWM_LampLimpHomeSts_min;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_WasherLimpHomeSts= CAN_ALL_GW_u1SWM_WasherLimpHomeSts_min;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_HighBeam= CAN_ALL_GW_u1SWM_HighBeam_min;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_WipingInterval_Sensitvity= CAN_ALL_GW_u2SWM_WipingInterval_Sensitvity_min;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3SWM_FrontWipingMode= CAN_ALL_GW_u3SWM_FrontWipingMode_min;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3SWM_FlashLightSts= CAN_ALL_GW_u3SWM_FlashLightSts_min;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_TurnIndicationAct= CAN_ALL_GW_u2SWM_TurnIndicationAct_min;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_RearWipingMode= CAN_ALL_GW_u2SWM_RearWipingMode_min;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_FrontFogLight= CAN_ALL_GW_u2SWM_FrontFogLight_min;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_RearFogLight= CAN_ALL_GW_u2SWM_RearFogLight_min;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_HeadLamp= CAN_ALL_GW_u2SWM_HeadLamp_min;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3SWM_Wechat= CAN_ALL_GW_u3SWM_Wechat_min;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1SWM_VOL_Minus= CAN_ALL_GW_u1SWM_VOL_Minus_min;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_VOL_Plus= CAN_ALL_GW_u2SWM_VOL_Plus_min;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Mute= CAN_ALL_GW_u2SWM_Mute_min;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Phone= CAN_ALL_GW_u2SWM_Phone_min;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Previous_Song= CAN_ALL_GW_u2SWM_Previous_Song_min;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Next_Song= CAN_ALL_GW_u2SWM_Next_Song_min;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Menu_Up= CAN_ALL_GW_u2SWM_Menu_Up_min;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Menu_Down= CAN_ALL_GW_u2SWM_Menu_Down_min;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Menu_Left= CAN_ALL_GW_u2SWM_Menu_Left_min;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Menu_Right= CAN_ALL_GW_u2SWM_Menu_Right_min;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Menu_Confirm= CAN_ALL_GW_u2SWM_Menu_Confirm_min;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2SWM_Menu_Return= CAN_ALL_GW_u2SWM_Menu_Return_min;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2Rolling_counter_0x31A= CAN_ALL_GW_u2Rolling_counter_0x31A_min;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4Checksum_0x31A= CAN_ALL_GW_u4Checksum_0x31A_min;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uSWM_RWasherSts=VCAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_FWasherSts=VCAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_LampLimpHomeSts=VCAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_WasherLimpHomeSts=VCAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_HighBeam=VCAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_WipingInterval_Sensitvity=VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3SWM_FrontWipingMode=VCAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3SWM_FlashLightSts=VCAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_TurnIndicationAct=VCAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_RearWipingMode=VCAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_FrontFogLight=VCAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_RearFogLight=VCAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_HeadLamp=VCAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3SWM_Wechat=VCAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_VOL_Minus=VCAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_VOL_Plus=VCAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Mute=VCAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Phone=VCAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Previous_Song=VCAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Next_Song=VCAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Up=VCAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Down=VCAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Left=VCAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Right=VCAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Confirm=VCAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Return=VCAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2Rolling_counter_0x31A=VCAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4Checksum_0x31A=VCAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uSWM_RWasherSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uSWM_RWasherSts;//0.7-->0.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_FWasherSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_FWasherSts;//0.5-->0.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FWasherSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_LampLimpHomeSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_LampLimpHomeSts;//0.3-->0.3 1 "LimpHome" 0 "Normal" 名称：SWM_LampLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_WasherLimpHomeSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_WasherLimpHomeSts;//0.2-->0.2 1 "LimpHome" 0 "Normal" 名称：SWM_WasherLimpHomeSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_HighBeam=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_HighBeam;//0.1-->0.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_HighBeam 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_WipingInterval_Sensitvity=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_WipingInterval_Sensitvity;//1.7-->1.5 7 "Invalid" 3 "Sensitivity 3" 2 "Sensitivity 2" 1 "Sensitivity 1" 0 "Sensitivity 0" 名称：SWM_WipingInterval_Sensitvity 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3SWM_FrontWipingMode=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3SWM_FrontWipingMode;//1.4-->1.2 7 "Invalid" 4 "Front Auto_Interval wiping activation" 3 "Front Mist wiping activation" 2 "Front Wiper speed high activation" 1 "Front Wiper speed low activation" 0 "Front Wiping off" 名称：SWM_FrontWipingMode 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3SWM_FlashLightSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3SWM_FlashLightSts;//1.1-->1.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_FlashLightSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_TurnIndicationAct=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_TurnIndicationAct;//2.7-->2.6 3 "Invalid" 2 "Turn Right" 1 "Turn Left" 0 "Default" 名称：SWM_TurnIndicationAct 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_RearWipingMode=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_RearWipingMode;//2.5-->2.4 3 "Invalid" 2 "reserved" 1 "Rear Wiper uniformity speed" 0 "RearWiping off" 名称：SWM_RearWipingMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_FrontFogLight=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_FrontFogLight;//2.3-->2.2 3 "Invalid" 2 "reserved" 1 "ON" 0 "OFF" 名称：SWM_FrontFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_RearFogLight=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_RearFogLight;//2.1-->2.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_RearFogLight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_HeadLamp=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_HeadLamp;//3.7-->3.5 4 "Invalid" 3 "LowBeam" 2 "PositionLight" 1 "AutoLight" 0 "OFF" 名称：SWM_HeadLamp 位数：3bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3SWM_Wechat=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3SWM_Wechat;//3.4-->3.4 1 "Pressed" 0 "Released" 名称：SWM_Wechat 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1SWM_VOL_Minus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1SWM_VOL_Minus;//3.3-->3.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Minus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_VOL_Plus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_VOL_Plus;//3.1-->3.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_VOL_Plus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Mute=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Mute;//4.7-->4.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Mute 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Phone=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Phone;//4.5-->4.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Phone 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Previous_Song=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Previous_Song;//4.3-->4.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Previous_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Next_Song=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Next_Song;//4.1-->4.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Next_Song 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Menu_Up=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Up;//5.7-->5.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Up 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Menu_Down=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Down;//5.5-->5.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Down 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Menu_Left=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Left;//5.3-->5.2 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Left 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Menu_Right=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Right;//5.1-->5.0 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Right 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Menu_Confirm=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Confirm;//6.7-->6.6 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Confirm 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2SWM_Menu_Return=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2SWM_Menu_Return;//6.5-->6.4 3 "Invalid" 2 "reserved" 1 "Pressed" 0 "Released" 名称：SWM_Menu_Return 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2Rolling_counter_0x31A=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2Rolling_counter_0x31A;//6.3-->6.0 名称：Rolling_counter_0x31A 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4Checksum_0x31A=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4Checksum_0x31A;//7.7-->7.0 名称：Checksum_0x31A 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+7] =Vu8_GW_8_GW_SWM_Body_0x31A_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+6] =Vu8_GW_8_GW_SWM_Body_0x31A_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+5] =Vu8_GW_8_GW_SWM_Body_0x31A_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+4] =Vu8_GW_8_GW_SWM_Body_0x31A_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+3] =Vu8_GW_8_GW_SWM_Body_0x31A_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+2] =Vu8_GW_8_GW_SWM_Body_0x31A_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+1] =Vu8_GW_8_GW_SWM_Body_0x31A_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_SWM_Body_0x31A_FR+0] =Vu8_GW_8_GW_SWM_Body_0x31A_Data0Bit.R;

                Vu8_GW_8_GW_SWM_Body_0x31A_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 7];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 6];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 5];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 4];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 3];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 2];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 1];
                Vu8_GW_8_GW_SWM_Body_0x31A_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_SWM_Body_0x31A_FR + 0];



//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_TCU_GearInfo_0x123_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_TCU_GearInfo_0x123_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_TCU_GearInfo_0x123_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_TCU_GearInfo_0x123_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_TCU_GearInfo_0x123_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_TCU_GearInfo_0x123_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_TCU_GearInfo_0x123 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_TCU_GearInfo_0x123_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_TCU_GearInfo_0x123_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_TCU_GearInfo_0x123_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_TCU_GearInfo_0x123_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_TCU_GearInfo_0x123_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uTCU_CurrentGearPosition= CAN_ALL_GW_uTCU_CurrentGearPosition_min;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_TargetGearReq= CAN_ALL_GW_u4TCU_TargetGearReq_min;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_GearSelectorReq= CAN_ALL_GW_u4TCU_GearSelectorReq_min;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_DisplayGear= CAN_ALL_GW_u4TCU_DisplayGear_min;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM= CAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM_min;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3TCU_GearShiftInProgress= CAN_ALL_GW_u3TCU_GearShiftInProgress_min;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid= CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid_min;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c11Reserve_9_24_18= CAN_ALL_GW_c11Reserve_9_24_18_min;//2.2-->3.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_StGearMode= CAN_ALL_GW_u1TCU_StGearMode_min;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_TrsmFaultFlag= CAN_ALL_GW_u4TCU_TrsmFaultFlag_min;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2TCU_DriverIntervention= CAN_ALL_GW_u2TCU_DriverIntervention_min;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_available= CAN_ALL_GW_u1TCU_available_min;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid= CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid_min;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag= CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag_min;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_highresistance= CAN_ALL_GW_u1TCU_highresistance_min;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_EPBLockReq= CAN_ALL_GW_u1TCU_EPBLockReq_min;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1TCU_Driving_mode_req= CAN_ALL_GW_u1TCU_Driving_mode_req_min;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_ShiftLevertoPReq= CAN_ALL_GW_u4TCU_ShiftLevertoPReq_min;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2TCU_transPmotorparkReq= CAN_ALL_GW_u2TCU_transPmotorparkReq_min;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2TCU_Status_AliveCounter0x123= CAN_ALL_GW_u2TCU_Status_AliveCounter0x123_min;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4TCU_Status_Checksum0x123= CAN_ALL_GW_u4TCU_Status_Checksum0x123_min;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uTCU_CurrentGearPosition=VCAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_TargetGearReq=VCAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_GearSelectorReq=VCAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_DisplayGear=VCAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM=VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3TCU_GearShiftInProgress=VCAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid=VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c11Reserve_9_24_18=Vc11Reserve_9_24_18;//2.2-->3.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_StGearMode=VCAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_TrsmFaultFlag=VCAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2TCU_DriverIntervention=VCAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_available=VCAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid=VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag=VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_highresistance=VCAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_EPBLockReq=VCAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_Driving_mode_req=VCAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_ShiftLevertoPReq=VCAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2TCU_transPmotorparkReq=VCAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2TCU_Status_AliveCounter0x123=VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_Status_Checksum0x123=VCAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uTCU_CurrentGearPosition=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uTCU_CurrentGearPosition;//0.7-->0.4 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_CurrentGearPosition 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_TargetGearReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_TargetGearReq;//0.3-->0.0 15 "Invalid" 14 "Reversegear" 8 "8thgear" 7 "7thgear" 6 "6thgear" 5 "5thgear" 4 "4thgear" 3 "3rdgear" 2 "2ndgear" 1 "1stgear" 0 "Drivetrainopen_GearN" 名称：TCU_TargetGearReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_GearSelectorReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_GearSelectorReq;//1.7-->1.4 15 "Invalid" 8 "M" 7 "R" 6 "N" 5 "D" 3 "3_Reserved" 2 "2_Reserved" 1 "L_Reserved" 0 "P" 名称：TCU_GearSelectorReq 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_DisplayGear=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_DisplayGear;//1.3-->1.0 15 "Invalid" 14 "Reserved" 13 "Current_gear_P" 12 "Reserved" 11 "Current_gear_R" 10 "Current_Gear_L" 9 "Current_Gear_D" 8 "gear_8" 7 "gear_7" 6 "gear_6" 5 "gear_5" 4 "gear_4" 3 "gear_3" 2 "gear_2" 1 "gear_1" 0 "Current_gear_N" 名称：TCU_DisplayGear 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_ShiftLeverPos_SBWM;//2.7-->2.5 7 "Invalid" 6 "Reserved" 5 "Blank" 4 "M" 3 "R" 2 "N" 1 "D" 0 "P" 名称：TCU_ShiftLeverPos_SBWM 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位：_ 
                VCAN_ALL_GW_u3TCU_GearShiftInProgress=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3TCU_GearShiftInProgress;//2.4-->2.4 1 "Gearshiftinprogress" 0 "Nogearshiftinprogress" 名称：TCU_GearShiftInProgress 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_TransPmotoparkReqInvalid;//2.3-->2.3 1 "Invalid" 0 "Valid" 名称：TCU_TransPmotoparkReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc11Reserve_9_24_18=CAN_ALL_FRVar_GW.B.c11Reserve_9_24_18;//2.2-->3.0
                VCAN_ALL_GW_u1TCU_StGearMode=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_StGearMode;//4.7-->4.4 15 "invalid" 14 "ATSFaultTCU" 13 "Manual" 9 "Ghat" 8 "Sand" 7 "WetMud" 5 "4L" 4 "ECO" 3 "Sport" 2 "Manual_reserved" 1 "Snow" 0 "Standard" 名称：TCU_StGearMode 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_TrsmFaultFlag=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_TrsmFaultFlag;//4.3-->4.2 3 "reserved" 2 "fail_limp_homeactivated" 1 "failure_nolimp_home" 0 "Normal" 名称：TCU_TrsmFaultFlag 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2TCU_DriverIntervention=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2TCU_DriverIntervention;//4.1-->4.1 1 "Driverintervention" 0 "nointervention" 名称：TCU_DriverIntervention 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_available=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_available;//4.0-->4.0 1 "available" 0 "notavailable" 名称：TCU_available 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_ShiftLevertoPReqInvalid;//5.7-->5.7 1 "Invalid" 0 "Valid" 名称：TCU_ShiftLevertoPReqInvalid 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_DrivingModeChange_Fault_flag;//5.6-->5.6 1 "Fault" 0 "Nofault" 名称：TCU_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_highresistance=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_highresistance;//5.5-->5.5 1 "highresistance" 0 "no highresistance" 名称：TCU_highresistance 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_EPBLockReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_EPBLockReq;//5.4-->5.4 1 "Request Park Brake Engage" 0 "No request" 名称：TCU_EPBLockReq 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1TCU_Driving_mode_req=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1TCU_Driving_mode_req;//5.3-->5.0 15 "Invalid" 14 "SwitchFault" 8 "Sand" 7 "WetMud" 6 "Rock" 5 "4L" 4 "ECO" 3 "Sport" 2 "Noused" 1 "Snow" 0 "Normal" 名称：TCU_Driving_mode_req 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_ShiftLevertoPReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_ShiftLevertoPReq;//6.7-->6.6 3 "reserved" 2 "Reserved" 1 "ParkRequest" 0 "NoRequest" 名称：TCU_ShiftLevertoPReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2TCU_transPmotorparkReq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2TCU_transPmotorparkReq;//6.5-->6.4 3 "reserved" 2 "ParkRequest" 1 "UnparkRequest" 0 "NoRequest" 名称：TCU_transPmotorparkReq 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2TCU_Status_AliveCounter0x123=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2TCU_Status_AliveCounter0x123;//6.3-->6.0 名称：TCU_Status_AliveCounter0x123 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4TCU_Status_Checksum0x123=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4TCU_Status_Checksum0x123;//7.7-->7.0 名称：TCU_Status_Checksum0x123 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+7] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+6] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+5] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+4] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+3] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+2] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+1] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_TCU_GearInfo_0x123_FR+0] =Vu8_GW_9_GW_TCU_GearInfo_0x123_Data0Bit.R;

                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 7];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 6];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 5];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 4];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 3];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 2];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 1];
                Vu8_GW_9_GW_TCU_GearInfo_0x123_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_TCU_GearInfo_0x123_FR + 0];



//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_Tq_0x101_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_Tq_0x101_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_Tq_0x101_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_Tq_0x101_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Tq_0x101_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Tq_0x101_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Tq_0x101 = 1 ;  //部件具体报文CAN接收无信号
                exEMS_EngSpeed.R= CAN_ALL_GW_u12EMS_EngSpeed_min;//3.7-->4.1 名称：EMS_EngSpeed 位数：15bit, logical min-max：0~16383 physical min-max：0x000~0x7FFE 精度：0.5 偏移量：0 单位：rpm 
                CAN_ALL_FRVar_GW.B.exEMS_EngSpeed15High7=exEMS_EngSpeed.B.exEMS_EngSpeed15High7;
                CAN_ALL_FRVar_GW.B.exEMS_EngSpeed15Low8=exEMS_EngSpeed.B.exEMS_EngSpeed15Low8;
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_Tq_0x101_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_Tq_0x101_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_Tq_0x101_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_Tq_0x101_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Tq_0x101_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uEMS_RngModTorqCrSLeadMax= CAN_ALL_GW_uEMS_RngModTorqCrSLeadMax_min;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u12EMS_IndicatedRealEngTorq= CAN_ALL_GW_u12EMS_IndicatedRealEngTorq_min;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u15EMS_EngSpeedError= CAN_ALL_GW_u15EMS_EngSpeedError_min;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin= CAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin_min;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101= CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101_min;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x101= CAN_ALL_GW_u4DCM_EMS_Checksum_0x101_min;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_RngModTorqCrSLeadMax=VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u12EMS_IndicatedRealEngTorq=VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRVar_GW.B.exEMS_EngSpeed15High7=VexexEMS_EngSpeed15High7;
                CAN_ALL_FRVar_GW.B.exEMS_EngSpeed15Low8=VexexEMS_EngSpeed15Low8;
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u15EMS_EngSpeedError=VCAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin=VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101=VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x101=VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uEMS_RngModTorqCrSLeadMax=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_RngModTorqCrSLeadMax;//0.7-->1.4 名称：EMS_RngModTorqCrSLeadMax 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                VCAN_ALL_GW_u12EMS_IndicatedRealEngTorq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u12EMS_IndicatedRealEngTorq;//1.3-->2.0 名称：EMS_IndicatedRealEngTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                VexexEMS_EngSpeed15High7 = CAN_ALL_FRVar_GW.B.exEMS_EngSpeed15High7;
                VexexEMS_EngSpeed15Low8= CAN_ALL_FRVar_GW.B.exEMS_EngSpeed15Low8;
                VCAN_ALL_GW_u15EMS_EngSpeedError=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u15EMS_EngSpeedError;//4.0-->4.0 1 "Error" 0 "NoError" 名称：EMS_EngSpeedError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_RngModTorqCrSLeadMin;//5.7-->6.4 名称：EMS_RngModTorqCrSLeadMin 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x101;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x101 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4DCM_EMS_Checksum_0x101=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x101;//7.7-->7.0 名称：DCM_EMS_Checksum_0x101 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+7] =Vu8_GW_10_GW_EMS_Tq_0x101_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+6] =Vu8_GW_10_GW_EMS_Tq_0x101_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+5] =Vu8_GW_10_GW_EMS_Tq_0x101_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+4] =Vu8_GW_10_GW_EMS_Tq_0x101_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+3] =Vu8_GW_10_GW_EMS_Tq_0x101_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+2] =Vu8_GW_10_GW_EMS_Tq_0x101_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+1] =Vu8_GW_10_GW_EMS_Tq_0x101_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Tq_0x101_FR+0] =Vu8_GW_10_GW_EMS_Tq_0x101_Data0Bit.R;

                Vu8_GW_10_GW_EMS_Tq_0x101_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 7];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 6];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 5];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 4];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 3];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 2];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 1];
                Vu8_GW_10_GW_EMS_Tq_0x101_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Tq_0x101_FR + 0];



//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_Sts_0x151_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_Sts_0x151_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_Sts_0x151_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_Sts_0x151_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Sts_0x151_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Sts_0x151_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Sts_0x151 = 1 ;  //部件具体报文CAN接收无信号
                exEMS_VacuumPressure.R= CAN_ALL_GW_u8EMS_VacuumPressure_min;//3.7-->4.6 名称：EMS_VacuumPressure 位数：10bit, logical min-max：-92.7~5 physical min-max：0x000~0x3D1 精度：0.1 偏移量：-927 单位：Kpa 
                CAN_ALL_FRVar_GW.B.exEMS_VacuumPressure10High2=exEMS_VacuumPressure.B.exEMS_VacuumPressure10High2;
                CAN_ALL_FRVar_GW.B.exEMS_VacuumPressure10Low8=exEMS_VacuumPressure.B.exEMS_VacuumPressure10Low8;
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_Sts_0x151_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_Sts_0x151_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_Sts_0x151_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_Sts_0x151_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Sts_0x151_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uEMS_EngOffTime= CAN_ALL_GW_uEMS_EngOffTime_min;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u16EMS_EngBarometricPressure= CAN_ALL_GW_u16EMS_EngBarometricPressure_min;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u10EMS_EngineStopStartStatus= CAN_ALL_GW_u10EMS_EngineStopStartStatus_min;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3EMS_ATSDrivingModeStatus= CAN_ALL_GW_u3EMS_ATSDrivingModeStatus_min;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2EMS_TargCruiseSpeed= CAN_ALL_GW_u2EMS_TargCruiseSpeed_min;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
                CAN_ALL_FRAMES_GW.B.c1Reserve_11_55_55= CAN_ALL_GW_c1Reserve_11_55_55_min;//6.7-->6.7
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag= CAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag_min;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1EMS_CruiseControlStatus= CAN_ALL_GW_u1EMS_CruiseControlStatus_min;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151= CAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151_min;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x151= CAN_ALL_GW_u4DCM_EMS_Checksum_0x151_min;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_EngOffTime=VCAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_EngBarometricPressure=VCAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
                CAN_ALL_FRVar_GW.B.exEMS_VacuumPressure10High2=VexexEMS_VacuumPressure10High2;
                CAN_ALL_FRVar_GW.B.exEMS_VacuumPressure10Low8=VexexEMS_VacuumPressure10Low8;
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u10EMS_EngineStopStartStatus=VCAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3EMS_ATSDrivingModeStatus=VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2EMS_TargCruiseSpeed=VCAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
                CAN_ALL_FRVar_GW.B.c1Reserve_11_55_55=Vc1Reserve_11_55_55;//6.7-->6.7
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag=VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_CruiseControlStatus=VCAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151=VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x151=VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uEMS_EngOffTime=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_EngOffTime;//0.7-->1.0 名称：EMS_EngOffTime 位数：16bit, logical min-max：0~65534 physical min-max：0x000~0xFFFE 精度：1 偏移量：0 单位：s 
                VCAN_ALL_GW_u16EMS_EngBarometricPressure=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_EngBarometricPressure;//2.7-->2.0 名称：EMS_EngBarometricPressure 位数：8bit, logical min-max：0~254 physical min-max：0x000~0xFE 精度：1 偏移量：0 单位：KPa 
                VexexEMS_VacuumPressure10High2 = CAN_ALL_FRVar_GW.B.exEMS_VacuumPressure10High2;
                VexexEMS_VacuumPressure10Low8= CAN_ALL_FRVar_GW.B.exEMS_VacuumPressure10Low8;
                VCAN_ALL_GW_u10EMS_EngineStopStartStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u10EMS_EngineStopStartStatus;//4.5-->4.3 7 "Reserved" 6 "EngineAuto_stopping" 5 "EngineOperation" 4 "EngineRestart" 3 "StarterRestart" 2 "EngineStopped" 1 "EngineStandby" 0 "Non_start_Stopmode" 名称：EMS_EngineStopStartStatus 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3EMS_ATSDrivingModeStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3EMS_ATSDrivingModeStatus;//4.2-->4.1 3 "Invalid" 2 "ECO" 1 "Sport" 0 "Standard" 名称：EMS_ATSDrivingModeStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2EMS_TargCruiseSpeed=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2EMS_TargCruiseSpeed;//4.0-->5.0 名称：EMS_TargCruiseSpeed 位数：9bit, logical min-max：0~255 physical min-max：0x000~0x1FE 精度：0.5 偏移量：0 单位：Km_h 
                Vc1Reserve_11_55_55=CAN_ALL_FRVar_GW.B.c1Reserve_11_55_55;//6.7-->6.7
                VCAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u9EMS_DrivingModeChange_Fault_flag;//6.6-->6.6 1 "Fault" 0 "Normal" 名称：EMS_DrivingModeChange_Fault_flag 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1EMS_CruiseControlStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_CruiseControlStatus;//6.5-->6.4 3 "Error" 2 "Standby" 1 "Active" 0 "CruiseControlOoff" 名称：EMS_CruiseControlStatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2DCM_EMS_RollingCounter_0x151;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x151 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4DCM_EMS_Checksum_0x151=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x151;//7.7-->7.0 名称：DCM_EMS_Checksum_0x151 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+7] =Vu8_GW_11_GW_EMS_Sts_0x151_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+6] =Vu8_GW_11_GW_EMS_Sts_0x151_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+5] =Vu8_GW_11_GW_EMS_Sts_0x151_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+4] =Vu8_GW_11_GW_EMS_Sts_0x151_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+3] =Vu8_GW_11_GW_EMS_Sts_0x151_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+2] =Vu8_GW_11_GW_EMS_Sts_0x151_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+1] =Vu8_GW_11_GW_EMS_Sts_0x151_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Sts_0x151_FR+0] =Vu8_GW_11_GW_EMS_Sts_0x151_Data0Bit.R;

                Vu8_GW_11_GW_EMS_Sts_0x151_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 7];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 6];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 5];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 4];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 3];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 2];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 1];
                Vu8_GW_11_GW_EMS_Sts_0x151_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Sts_0x151_FR + 0];



//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_WhlTq_0x107_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_WhlTq_0x107_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_WhlTq_0x107_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_WhlTq_0x107_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_WhlTq_0x107_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_WhlTq_0x107_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_WhlTq_0x107 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_WhlTq_0x107_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_WhlTq_0x107_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_WhlTq_0x107_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_WhlTq_0x107_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_WhlTq_0x107_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uMaxIndicatedTorqWhl= CAN_ALL_GW_uMaxIndicatedTorqWhl_min;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u16MinIndicatedTorqWhl= CAN_ALL_GW_u16MinIndicatedTorqWhl_min;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u16EMS_AccRAWPedalRatio= CAN_ALL_GW_u16EMS_AccRAWPedalRatio_min;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u8EMS_AccPedalRatio= CAN_ALL_GW_u8EMS_AccPedalRatio_min;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u8EMS_BrkPedalStasus= CAN_ALL_GW_u8EMS_BrkPedalStasus_min;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2EMS_ACCPedalRatioError= CAN_ALL_GW_u2EMS_ACCPedalRatioError_min;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1EMS_KickDown= CAN_ALL_GW_u1EMS_KickDown_min;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107= CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107_min;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x107= CAN_ALL_GW_u4DCM_EMS_Checksum_0x107_min;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uMaxIndicatedTorqWhl=VCAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16MinIndicatedTorqWhl=VCAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_AccRAWPedalRatio=VCAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_AccPedalRatio=VCAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_BrkPedalStasus=VCAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2EMS_ACCPedalRatioError=VCAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_KickDown=VCAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107=VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x107=VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uMaxIndicatedTorqWhl=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uMaxIndicatedTorqWhl;//0.7-->1.0 名称：MaxIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                VCAN_ALL_GW_u16MinIndicatedTorqWhl=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16MinIndicatedTorqWhl;//2.7-->3.0 名称：MinIndicatedTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                VCAN_ALL_GW_u16EMS_AccRAWPedalRatio=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_AccRAWPedalRatio;//4.7-->4.0 名称：EMS_AccRAWPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位： 
                VCAN_ALL_GW_u8EMS_AccPedalRatio=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_AccPedalRatio;//5.7-->5.0 名称：EMS_AccPedalRatio 位数：8bit, logical min-max：0~99.9998 physical min-max：0x000~0xFE 精度：0.3937 偏移量：0 单位：% 
                VCAN_ALL_GW_u8EMS_BrkPedalStasus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_BrkPedalStasus;//6.7-->6.6 3 "Error" 2 "Reserved" 1 "Pressed" 0 "NotPressed" 名称：EMS_BrkPedalStasus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u2EMS_ACCPedalRatioError=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2EMS_ACCPedalRatioError;//6.5-->6.5 1 "Error" 0 "NoError" 名称：EMS_ACCPedalRatioError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1EMS_KickDown=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_KickDown;//6.4-->6.4 1 "Active" 0 "NotActive" 名称：EMS_KickDown 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x107;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x107 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4DCM_EMS_Checksum_0x107=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x107;//7.7-->7.0 名称：DCM_EMS_Checksum_0x107 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+7] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+6] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+5] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+4] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+3] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+2] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+1] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_WhlTq_0x107_FR+0] =Vu8_GW_12_GW_EMS_WhlTq_0x107_Data0Bit.R;

                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 7];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 6];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 5];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 4];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 3];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 2];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 1];
                Vu8_GW_12_GW_EMS_WhlTq_0x107_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_WhlTq_0x107_FR + 0];



//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_TqWhl_0x111_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_TqWhl_0x111_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_TqWhl_0x111_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_TqWhl_0x111_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_TqWhl_0x111_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_TqWhl_0x111_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_TqWhl_0x111 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_TqWhl_0x111_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_TqWhl_0x111_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_TqWhl_0x111_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_TqWhl_0x111_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_TqWhl_0x111_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl= CAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl_min;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl= CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl_min;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u16EMS_IndicatedDriverOverride= CAN_ALL_GW_u16EMS_IndicatedDriverOverride_min;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c3Reserve_13_36_38= CAN_ALL_GW_c3Reserve_13_36_38_min;//4.6-->4.4
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1EMS_IndicatedACCMesgError= CAN_ALL_GW_u1EMS_IndicatedACCMesgError_min;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c2Reserve_13_32_33= CAN_ALL_GW_c2Reserve_13_32_33_min;//4.1-->4.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u2EMS_IndicatedDriverReqTorq= CAN_ALL_GW_u2EMS_IndicatedDriverReqTorq_min;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111= CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111_min;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x111= CAN_ALL_GW_u4DCM_EMS_Checksum_0x111_min;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl=VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl=VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_IndicatedDriverOverride=VCAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c3Reserve_13_36_38=Vc3Reserve_13_36_38;//4.6-->4.4
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_IndicatedACCMesgError=VCAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c2Reserve_13_32_33=Vc2Reserve_13_32_33;//4.1-->4.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2EMS_IndicatedDriverReqTorq=VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111=VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x111=VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_IndicatedDriverReqTorqWhl;//0.7-->1.0 名称：EMS_IndicatedDriverReqTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                VCAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_IndicatedRealEngTorqWhl;//2.7-->3.0 名称：EMS_IndicatedRealEngTorqWhl 位数：16bit, logical min-max：-30000~30000 physical min-max：0x000~0xEA60 精度：1 偏移量：-30000 单位：Nm 
                VCAN_ALL_GW_u16EMS_IndicatedDriverOverride=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u16EMS_IndicatedDriverOverride;//4.7-->4.7 1 "DriverOverride" 0 "NoOverride" 名称：EMS_IndicatedDriverOverride 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc3Reserve_13_36_38=CAN_ALL_FRVar_GW.B.c3Reserve_13_36_38;//4.6-->4.4
                VCAN_ALL_GW_u1EMS_IndicatedACCMesgError=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_IndicatedACCMesgError;//4.3-->4.2 3 "NotDefined" 2 "Irreversible不可挽回error" 1 "Reversible可挽回error" 0 "NoEerror" 名称：EMS_IndicatedACCMesgError 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc2Reserve_13_32_33=CAN_ALL_FRVar_GW.B.c2Reserve_13_32_33;//4.1-->4.0
                VCAN_ALL_GW_u2EMS_IndicatedDriverReqTorq=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u2EMS_IndicatedDriverReqTorq;//5.7-->6.4 名称：EMS_IndicatedDriverReqTorq 位数：12bit, logical min-max：-1000~1000 physical min-max：0x000~0xFA0 精度：0.5 偏移量：-2000 单位：Nm 
                VCAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u12DCM_EMS_RollingCounter_0x111;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x111 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4DCM_EMS_Checksum_0x111=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x111;//7.7-->7.0 名称：DCM_EMS_Checksum_0x111 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+7] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+6] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+5] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+4] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+3] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+2] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+1] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_TqWhl_0x111_FR+0] =Vu8_GW_13_GW_EMS_TqWhl_0x111_Data0Bit.R;

                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 7];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 6];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 5];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 4];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 3];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 2];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 1];
                Vu8_GW_13_GW_EMS_TqWhl_0x111_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_TqWhl_0x111_FR + 0];



//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_Engstatus_0x142_FR+0] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_Engstatus_0x142_FR+0]  ; 
                CAN_ALL_FRVar_GW.R[ 2*ALL_GW_GW_EMS_Engstatus_0x142_FR+1] = CAN_ALL_FRMes_GW.R[ 2*ALL_GW_GW_EMS_Engstatus_0x142_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Engstatus_0x142_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Engstatus_0x142_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_GW = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Engstatus_0x142 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_Engstatus_0x142_FR+0]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_Engstatus_0x142_FR+0];
                CAN_ALL_FRVar_GW.R[2*ALL_GW_GW_EMS_Engstatus_0x142_FR+1]=CAN_ALL_FRAMES_GW.R[2*ALL_GW_GW_EMS_Engstatus_0x142_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Engstatus_0x142_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH]  == 1 ) {


                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_uEMS_EngThrottlePosition= CAN_ALL_GW_uEMS_EngThrottlePosition_min;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u8EMS_IgnitionTiming= CAN_ALL_GW_u8EMS_IgnitionTiming_min;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u8EMS_SetlEngIdleSpeed= CAN_ALL_GW_u8EMS_SetlEngIdleSpeed_min;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u13EMS_EngOperationStatus= CAN_ALL_GW_u13EMS_EngOperationStatus_min;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u3EMS_ThrottlePlatePositionError= CAN_ALL_GW_u3EMS_ThrottlePlatePositionError_min;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1EMS_AirCompressorStatus= CAN_ALL_GW_u1EMS_AirCompressorStatus_min;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c6Reserve_14_32_37= CAN_ALL_GW_c6Reserve_14_32_37_min;//4.5-->4.0
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1EMS_StartStopMessage= CAN_ALL_GW_u1EMS_StartStopMessage_min;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B.c5Reserve_14_55_43= CAN_ALL_GW_c5Reserve_14_55_43_min;//5.3-->6.7
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4EMS_IgnSwtSts= CAN_ALL_GW_u4EMS_IgnSwtSts_min;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142= CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142_min;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x142= CAN_ALL_GW_u4DCM_EMS_Checksum_0x142_min;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_EngThrottlePosition=VCAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_IgnitionTiming=VCAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_SetlEngIdleSpeed=VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u13EMS_EngOperationStatus=VCAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3EMS_ThrottlePlatePositionError=VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_AirCompressorStatus=VCAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c6Reserve_14_32_37=Vc6Reserve_14_32_37;//4.5-->4.0
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_StartStopMessage=VCAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B.c5Reserve_14_55_43=Vc5Reserve_14_55_43;//5.3-->6.7
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4EMS_IgnSwtSts=VCAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142=VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x142=VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_GW_uEMS_EngThrottlePosition=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_uEMS_EngThrottlePosition;//0.7-->0.0 名称：EMS_EngThrottlePosition 位数：8bit, logical min-max：0~99.568 physical min-max：0x000~0xFE 精度：0.392 偏移量：0 单位：% 
                VCAN_ALL_GW_u8EMS_IgnitionTiming=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_IgnitionTiming;//1.7-->1.0 名称：EMS_IgnitionTiming 位数：8bit, logical min-max：-60~60 physical min-max：0x000~0x78 精度：1 偏移量：-60 单位：° 
                VCAN_ALL_GW_u8EMS_SetlEngIdleSpeed=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u8EMS_SetlEngIdleSpeed;//2.7-->3.3 名称：EMS_SetlEngIdleSpeed 位数：13bit, logical min-max：0~4095 physical min-max：0x000~0x1FFE 精度：0.5 偏移量：0 单位：rpm 
                VCAN_ALL_GW_u13EMS_EngOperationStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u13EMS_EngOperationStatus;//3.2-->3.0 5 "Stalling" 4 "Cranking" 3 "DFCO(Reserved)" 2 "Idle" 1 "Running" 0 "Stopped" 名称：EMS_EngOperationStatus 位数：3bit, logical min-max：0~5 physical min-max：0x000~0x5 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u3EMS_ThrottlePlatePositionError=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u3EMS_ThrottlePlatePositionError;//4.7-->4.7 1 "Error" 0 "NoError" 名称：EMS_ThrottlePlatePositionError 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1EMS_AirCompressorStatus=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_AirCompressorStatus;//4.6-->4.6 1 "On" 0 "Off" 名称：EMS_AirCompressorStatus 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                Vc6Reserve_14_32_37=CAN_ALL_FRVar_GW.B.c6Reserve_14_32_37;//4.5-->4.0
                VCAN_ALL_GW_u1EMS_StartStopMessage=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1EMS_StartStopMessage;//5.7-->5.4 15 "Reserved" 14 "Manuallyrestart" 13 "startstopfailure" 12 "steeringangelhigh" 11 "drviedooropne" 10 "Hoodopen" 9 "startprotect" 8 "TCUinhibit" 7 "ACCinhibit" 6 "APAinhibit" 5 "ECTlow" 4 "Batterylow" 3 "Start&Stopoff" 2 "brakelow" 1 "Climaterequest" 0 "nowarningmessage" 名称：EMS_StartStopMessage 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                Vc5Reserve_14_55_43=CAN_ALL_FRVar_GW.B.c5Reserve_14_55_43;//5.3-->6.7
                VCAN_ALL_GW_u4EMS_IgnSwtSts=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4EMS_IgnSwtSts;//6.6-->6.6 1 "Ignitionon" 0 "Ignitionoff" 名称：EMS_IgnSwtSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u1DCM_EMS_RollingCounter_0x142;//6.3-->6.0 名称：DCM_EMS_RollingCounter_0x142 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_GW_u4DCM_EMS_Checksum_0x142=CAN_ALL_FRVar_GW.B. CAN_ALL_GW_u4DCM_EMS_Checksum_0x142;//7.7-->7.0 名称：DCM_EMS_Checksum_0x142 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+7] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data7Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+6] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data6Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+5] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data5Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+4] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data4Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+3] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data3Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+2] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data2Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+1] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data1Bit.R;
                CAN_ALL_FRVar_GW.By[ 8*ALL_GW_GW_EMS_Engstatus_0x142_FR+0] =Vu8_GW_14_GW_EMS_Engstatus_0x142_Data0Bit.R;

                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data7Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 7];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data6Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 6];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data5Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 5];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data4Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 4];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data3Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 3];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data2Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 2];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data1Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 1];
                Vu8_GW_14_GW_EMS_Engstatus_0x142_Data0Bit.R=CAN_ALL_FRVar_GW.By[8 * ALL_GW_GW_EMS_Engstatus_0x142_FR + 0];


//--2 th CAN 报文初始化子程序------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_Body_0x321_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_BCM_Door_0x310_CH];//Can_NR=2
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_IC_0x510_CH];//Can_NR=3
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_TBOX_Location_0x580_CH];//Can_NR=4
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_MP5_0x530_CH];//Can_NR=5
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_MP5_NAV_0x533_CH];//Can_NR=6
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_SWM_MRR_0x31B_CH];//Can_NR=7
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_SWM_Body_0x31A_CH];//Can_NR=8
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_TCU_GearInfo_0x123_CH];//Can_NR=9
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_EMS_Tq_0x101_CH];//Can_NR=10
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_EMS_Sts_0x151_CH];//Can_NR=11
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_EMS_WhlTq_0x107_CH];//Can_NR=12
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_EMS_TqWhl_0x111_CH];//Can_NR=13
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_GW_GW_EMS_Engstatus_0x142_CH];//Can_NR=14

//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_Body_0x321_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].ID.R= ALL_GW_GW_Body_0x321_ID;
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].CS.B.IDE = ALL_GW_GW_Body_0x321_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].CS.B.DLC =ALL_GW_GW_Body_0x321_LH; 

//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH]ID.B.ID_STD= ALL_GW_GW_BCM_Door_0x310_ID;
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].CS.B.IDE = ALL_GW_GW_BCM_Door_0x310_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].CS.B.DLC =ALL_GW_GW_BCM_Door_0x310_LH; 

//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_IC_0x510_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].ID.R= ALL_GW_GW_IC_0x510_ID;
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].CS.B.IDE = ALL_GW_GW_IC_0x510_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].CS.B.DLC =ALL_GW_GW_IC_0x510_LH; 

//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].ID.R= ALL_GW_GW_TBOX_Location_0x580_ID;
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].CS.B.IDE = ALL_GW_GW_TBOX_Location_0x580_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].CS.B.DLC =ALL_GW_GW_TBOX_Location_0x580_LH; 

//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].ID.R= ALL_GW_GW_MP5_0x530_ID;
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].CS.B.IDE = ALL_GW_GW_MP5_0x530_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].CS.B.DLC =ALL_GW_GW_MP5_0x530_LH; 

//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].ID.R= ALL_GW_GW_MP5_NAV_0x533_ID;
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].CS.B.IDE = ALL_GW_GW_MP5_NAV_0x533_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].CS.B.DLC =ALL_GW_GW_MP5_NAV_0x533_LH; 

//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH]ID.B.ID_STD= ALL_GW_GW_SWM_MRR_0x31B_ID;
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].CS.B.IDE = ALL_GW_GW_SWM_MRR_0x31B_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].CS.B.DLC =ALL_GW_GW_SWM_MRR_0x31B_LH; 

//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH]ID.B.ID_STD= ALL_GW_GW_SWM_Body_0x31A_ID;
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].CS.B.IDE = ALL_GW_GW_SWM_Body_0x31A_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].CS.B.DLC =ALL_GW_GW_SWM_Body_0x31A_LH; 

//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH]ID.B.ID_STD= ALL_GW_GW_TCU_GearInfo_0x123_ID;
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].CS.B.IDE = ALL_GW_GW_TCU_GearInfo_0x123_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].CS.B.DLC =ALL_GW_GW_TCU_GearInfo_0x123_LH; 

//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH]ID.B.ID_STD= ALL_GW_GW_EMS_Tq_0x101_ID;
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].CS.B.IDE = ALL_GW_GW_EMS_Tq_0x101_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].CS.B.DLC =ALL_GW_GW_EMS_Tq_0x101_LH; 

//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH]ID.B.ID_STD= ALL_GW_GW_EMS_Sts_0x151_ID;
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].CS.B.IDE = ALL_GW_GW_EMS_Sts_0x151_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].CS.B.DLC =ALL_GW_GW_EMS_Sts_0x151_LH; 

//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH]ID.B.ID_STD= ALL_GW_GW_EMS_WhlTq_0x107_ID;
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].CS.B.IDE = ALL_GW_GW_EMS_WhlTq_0x107_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].CS.B.DLC =ALL_GW_GW_EMS_WhlTq_0x107_LH; 

//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH]ID.B.ID_STD= ALL_GW_GW_EMS_TqWhl_0x111_ID;
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].CS.B.IDE = ALL_GW_GW_EMS_TqWhl_0x111_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].CS.B.DLC =ALL_GW_GW_EMS_TqWhl_0x111_LH; 

//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH]ID.B.ID_STD= ALL_GW_GW_EMS_Engstatus_0x142_ID;
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].CS.B.IDE = ALL_GW_GW_EMS_Engstatus_0x142_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].CS.B.DLC =ALL_GW_GW_EMS_Engstatus_0x142_LH; 
//--3 th CAN 报文接收中断子程序------------

//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+0] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+1] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+2] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+3] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+4] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+5] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+6] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_Body_0x321_FR+7] = CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_Body_0x321 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_Body_0x321_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_Body_0x321_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+0] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+1] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+2] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+3] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+4] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+5] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+6] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+7] = CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_BCM_Door_0x310 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_BCM_Door_0x310_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_BCM_Door_0x310_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+0] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+1] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+2] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+3] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+4] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+5] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+6] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_IC_0x510_FR+7] = CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_IC_0x510 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_IC_0x510_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_IC_0x510_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+0] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+1] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+2] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+3] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+4] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+5] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+6] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+7] = CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_TBOX_Location_0x580 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_TBOX_Location_0x580_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_TBOX_Location_0x580_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+0] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+1] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+2] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+3] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+4] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+5] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+6] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_0x530_FR+7] = CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_MP5_0x530 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_MP5_0x530_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_0x530_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+0] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+1] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+2] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+3] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+4] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+5] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+6] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+7] = CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_MP5_NAV_0x533 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_MP5_NAV_0x533_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_MP5_NAV_0x533_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+0] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+1] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+2] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+3] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+4] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+5] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+6] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+7] = CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_SWM_MRR_0x31B = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_SWM_MRR_0x31B_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_MRR_0x31B_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+0] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+1] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+2] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+3] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+4] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+5] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+6] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+7] = CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_SWM_Body_0x31A = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_SWM_Body_0x31A_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_SWM_Body_0x31A_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+0] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+1] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+2] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+3] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+4] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+5] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+6] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+7] = CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_TCU_GearInfo_0x123 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_TCU_GearInfo_0x123_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_TCU_GearInfo_0x123_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+0] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+1] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+2] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+3] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+4] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+5] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+6] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+7] = CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Tq_0x101 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Tq_0x101_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Tq_0x101_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+0] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+1] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+2] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+3] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+4] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+5] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+6] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+7] = CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Sts_0x151 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Sts_0x151_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Sts_0x151_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+0] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+1] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+2] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+3] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+4] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+5] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+6] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+7] = CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_WhlTq_0x107 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_WhlTq_0x107_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_WhlTq_0x107_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+0] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+1] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+2] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+3] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+4] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+5] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+6] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+7] = CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_TqWhl_0x111 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_TqWhl_0x111_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_TqWhl_0x111_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH]  == 0) {
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+0] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[0]; 
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+1] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[1];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+2] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[2];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+3] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[3];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+4] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[4];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+5] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[5];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+6] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[6];
                CAN_ALL_FRMes_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+7] = CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[7];
               Error_CAN1.B.ALL_GW = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Engstatus_0x142 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_GW_GW_EMS_Engstatus_0x142_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_GW_GW_EMS_Engstatus_0x142_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_GW_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN 报文发送子程序------------                    

//--Can_NR=1----GW 1 the Data Frame 名称：GW_Body_0x321  ID：0x801  周期：20ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_Body_0x321_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_Body_0x321_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_Body_0x321T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+0];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+1];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+2];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+3];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+4];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+5];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+6];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_Body_0x321_FR+7];
                CAN1.MB[ALL_GW_GW_Body_0x321_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_Body_0x321_Ay] = ALL_GW_GW_Body_0x321_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_Body_0x321T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_Body_0x321_DT ) == 0 ) {


//--Can_NR=2----GW 2 the Data Frame 名称：GW_BCM_Door_0x310  ID：0x784  周期：20ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_BCM_Door_0x310_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_BCM_Door_0x310_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_BCM_Door_0x310T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+0];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+1];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+2];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+3];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+4];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+5];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+6];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_BCM_Door_0x310_FR+7];
                CAN1.MB[ALL_GW_GW_BCM_Door_0x310_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_BCM_Door_0x310_Ay] = ALL_GW_GW_BCM_Door_0x310_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_BCM_Door_0x310T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_BCM_Door_0x310_DT ) == 0 ) {


//--Can_NR=3----GW 3 the Data Frame 名称：GW_IC_0x510  ID：0x1296  周期：100ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_IC_0x510_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_IC_0x510_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_IC_0x510T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+0];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+1];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+2];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+3];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+4];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+5];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+6];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_IC_0x510_FR+7];
                CAN1.MB[ALL_GW_GW_IC_0x510_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_IC_0x510_Ay] = ALL_GW_GW_IC_0x510_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_IC_0x510T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_IC_0x510_DT ) == 0 ) {


//--Can_NR=4----GW 4 the Data Frame 名称：GW_TBOX_Location_0x580  ID：0x1408  周期：500ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_TBOX_Location_0x580_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_TBOX_Location_0x580_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_TBOX_Location_0x580T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+0];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+1];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+2];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+3];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+4];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+5];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+6];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TBOX_Location_0x580_FR+7];
                CAN1.MB[ALL_GW_GW_TBOX_Location_0x580_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_TBOX_Location_0x580_Ay] = ALL_GW_GW_TBOX_Location_0x580_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_TBOX_Location_0x580T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_TBOX_Location_0x580_DT ) == 0 ) {


//--Can_NR=5----GW 5 the Data Frame 名称：GW_MP5_0x530  ID：0x1328  周期：100ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_MP5_0x530_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_MP5_0x530_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_MP5_0x530T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+0];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+1];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+2];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+3];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+4];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+5];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+6];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_0x530_FR+7];
                CAN1.MB[ALL_GW_GW_MP5_0x530_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_MP5_0x530_Ay] = ALL_GW_GW_MP5_0x530_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_MP5_0x530T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_MP5_0x530_DT ) == 0 ) {


//--Can_NR=6----GW 6 the Data Frame 名称：GW_MP5_NAV_0x533  ID：0x1331  周期：100ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_MP5_NAV_0x533_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_MP5_NAV_0x533_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_MP5_NAV_0x533T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+0];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+1];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+2];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+3];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+4];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+5];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+6];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_MP5_NAV_0x533_FR+7];
                CAN1.MB[ALL_GW_GW_MP5_NAV_0x533_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_MP5_NAV_0x533_Ay] = ALL_GW_GW_MP5_NAV_0x533_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_MP5_NAV_0x533T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_MP5_NAV_0x533_DT ) == 0 ) {


//--Can_NR=7----GW 7 the Data Frame 名称：GW_SWM_MRR_0x31B  ID：0x795  周期：100ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_SWM_MRR_0x31B_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_SWM_MRR_0x31B_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_SWM_MRR_0x31BT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+0];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+1];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+2];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+3];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+4];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+5];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+6];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_MRR_0x31B_FR+7];
                CAN1.MB[ALL_GW_GW_SWM_MRR_0x31B_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_SWM_MRR_0x31B_Ay] = ALL_GW_GW_SWM_MRR_0x31B_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_SWM_MRR_0x31BT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_SWM_MRR_0x31B_DT ) == 0 ) {


//--Can_NR=8----GW 8 the Data Frame 名称：GW_SWM_Body_0x31A  ID：0x794  周期：100ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_SWM_Body_0x31A_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_SWM_Body_0x31A_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_SWM_Body_0x31AT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+0];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+1];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+2];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+3];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+4];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+5];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+6];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_SWM_Body_0x31A_FR+7];
                CAN1.MB[ALL_GW_GW_SWM_Body_0x31A_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_SWM_Body_0x31A_Ay] = ALL_GW_GW_SWM_Body_0x31A_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_SWM_Body_0x31AT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_SWM_Body_0x31A_DT ) == 0 ) {


//--Can_NR=9----GW 9 the Data Frame 名称：GW_TCU_GearInfo_0x123  ID：0x291  周期：20ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_TCU_GearInfo_0x123_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_TCU_GearInfo_0x123_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_TCU_GearInfo_0x123T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+0];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+1];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+2];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+3];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+4];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+5];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+6];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_TCU_GearInfo_0x123_FR+7];
                CAN1.MB[ALL_GW_GW_TCU_GearInfo_0x123_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_TCU_GearInfo_0x123_Ay] = ALL_GW_GW_TCU_GearInfo_0x123_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_TCU_GearInfo_0x123T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_TCU_GearInfo_0x123_DT ) == 0 ) {


//--Can_NR=10----GW 10 the Data Frame 名称：GW_EMS_Tq_0x101  ID：0x257  周期：10ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_Tq_0x101_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_EMS_Tq_0x101_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Tq_0x101T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+0];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+1];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+2];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+3];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+4];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+5];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+6];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Tq_0x101_FR+7];
                CAN1.MB[ALL_GW_GW_EMS_Tq_0x101_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_EMS_Tq_0x101_Ay] = ALL_GW_GW_EMS_Tq_0x101_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Tq_0x101T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_Tq_0x101_DT ) == 0 ) {


//--Can_NR=11----GW 11 the Data Frame 名称：GW_EMS_Sts_0x151  ID：0x337  周期：20ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_Sts_0x151_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_EMS_Sts_0x151_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Sts_0x151T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+0];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+1];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+2];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+3];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+4];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+5];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+6];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Sts_0x151_FR+7];
                CAN1.MB[ALL_GW_GW_EMS_Sts_0x151_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_EMS_Sts_0x151_Ay] = ALL_GW_GW_EMS_Sts_0x151_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Sts_0x151T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_Sts_0x151_DT ) == 0 ) {


//--Can_NR=12----GW 12 the Data Frame 名称：GW_EMS_WhlTq_0x107  ID：0x263  周期：10ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_WhlTq_0x107_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_EMS_WhlTq_0x107_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_WhlTq_0x107T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+0];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+1];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+2];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+3];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+4];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+5];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+6];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_WhlTq_0x107_FR+7];
                CAN1.MB[ALL_GW_GW_EMS_WhlTq_0x107_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_EMS_WhlTq_0x107_Ay] = ALL_GW_GW_EMS_WhlTq_0x107_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_WhlTq_0x107T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_WhlTq_0x107_DT ) == 0 ) {


//--Can_NR=13----GW 13 the Data Frame 名称：GW_EMS_TqWhl_0x111  ID：0x273  周期：10ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_TqWhl_0x111_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_EMS_TqWhl_0x111_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_TqWhl_0x111T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+0];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+1];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+2];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+3];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+4];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+5];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+6];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_TqWhl_0x111_FR+7];
                CAN1.MB[ALL_GW_GW_EMS_TqWhl_0x111_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_EMS_TqWhl_0x111_Ay] = ALL_GW_GW_EMS_TqWhl_0x111_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_TqWhl_0x111T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_TqWhl_0x111_DT ) == 0 ) {


//--Can_NR=14----GW 14 the Data Frame 名称：GW_EMS_Engstatus_0x142  ID：0x322  周期：10ms  位数：8字节GW-->
                 if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_Engstatus_0x142_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_GW_GW_EMS_Engstatus_0x142_CH] ;
                if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Engstatus_0x142T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[0] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+0];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[1] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+1];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[2] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+2];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[3] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+3];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[4] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+4];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[5] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+5];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[6] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+6];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].DATA.B[7] = CAN_ALL_FRVar_GW.By[8*ALL_GW_GW_EMS_Engstatus_0x142_FR+7];
                CAN1.MB[ALL_GW_GW_EMS_Engstatus_0x142_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_GW_GW_EMS_Engstatus_0x142_Ay] = ALL_GW_GW_EMS_Engstatus_0x142_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_GW.B.ALL_GW_GW_EMS_Engstatus_0x142T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_GW_GW_EMS_Engstatus_0x142_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_GW_H 