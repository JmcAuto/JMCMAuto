#ifndef  _CAN_ALL_PAM_H
#define  _CAN_ALL_PAM_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000270
//624 PAM_CmdEPSSts 2 "EPS control" 1 "Control EPS request" 0 "No request"
#define  CAN_ALL_PAM_ce2PAM_CmdEPSSts_EPS_control 2
#define  CAN_ALL_PAM_ce2PAM_CmdEPSSts_Control_EPS_request  1 
#define  CAN_ALL_PAM_ce2PAM_CmdEPSSts_No_request  0 
//624 PAM_APAF 1 "APA Failure" 0 "Normal"
#define  CAN_ALL_PAM_cb1PAM_APAF_APA_Failure 1
#define  CAN_ALL_PAM_cb1PAM_APAF_Normal  0 
//624 StopStartInhibit_APA 1 "True" 0 "False"
#define  CAN_ALL_PAM_cb1StopStartInhibit_APA_True 1
#define  CAN_ALL_PAM_cb1StopStartInhibit_APA_False  0 
//624 PAM_BrakeFunctionMode 1 "AutomaticPark" 0 "No Action"
#define  CAN_ALL_PAM_cb1PAM_BrakeFunctionMode_AutomaticPark 1
#define  CAN_ALL_PAM_cb1PAM_BrakeFunctionMode_No_Action  0 
//624 PAM_ESP_Target_Gear_Request 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request"
#define  CAN_ALL_PAM_ce3PAM_ESP_Target_Gear_Request_DRIVE 4
#define  CAN_ALL_PAM_ce3PAM_ESP_Target_Gear_Request_NEUTRAL  3 
#define  CAN_ALL_PAM_ce3PAM_ESP_Target_Gear_Request_REVERSE  2 
#define  CAN_ALL_PAM_ce3PAM_ESP_Target_Gear_Request_PARK  1 
#define  CAN_ALL_PAM_ce3PAM_ESP_Target_Gear_Request_No_Request  0 
//624 PAM_FailureBrakeMode 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking"
#define  CAN_ALL_PAM_ce2PAM_FailureBrakeMode_Reserved 3
#define  CAN_ALL_PAM_ce2PAM_FailureBrakeMode_Emergency  2 
#define  CAN_ALL_PAM_ce2PAM_FailureBrakeMode_Comfortable_reserved  1 
#define  CAN_ALL_PAM_ce2PAM_FailureBrakeMode_Idle_No_Braking  0 
//624 PAM_BrakeModeSts 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init"
#define  CAN_ALL_PAM_ce3PAM_BrakeModeSts_Abort 5
#define  CAN_ALL_PAM_ce3PAM_BrakeModeSts_Suspend  4 
#define  CAN_ALL_PAM_ce3PAM_BrakeModeSts_ManeuverFinished  3 
#define  CAN_ALL_PAM_ce3PAM_BrakeModeSts_Active  2 
#define  CAN_ALL_PAM_ce3PAM_BrakeModeSts_Standby  1 
#define  CAN_ALL_PAM_ce3PAM_BrakeModeSts_Init  0 
//624 PAM_Sts 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off"
#define  CAN_ALL_PAM_ce3PAM_Sts_Reserved 7
#define  CAN_ALL_PAM_ce3PAM_Sts_Terminated  6 
#define  CAN_ALL_PAM_ce3PAM_Sts_Failure_Disable  5 
#define  CAN_ALL_PAM_ce3PAM_Sts_Completed  4 
#define  CAN_ALL_PAM_ce3PAM_Sts_Guidance_active_Active  3 
#define  CAN_ALL_PAM_ce3PAM_Sts_Searching_Enable  2 
#define  CAN_ALL_PAM_ce3PAM_Sts_Standby_Standby_Enable  1 
#define  CAN_ALL_PAM_ce3PAM_Sts_Off  0 
//624 PAM_ESP_Speed_Target 255 "Invalid"
#define  CAN_ALL_PAM_ce8PAM_ESP_Speed_Target_Invalid 255
//624 PAM_ESP_Stop_Distance 4095 "Invalid"
#define  CAN_ALL_PAM_ce12PAM_ESP_Stop_Distance_Invalid 4095
//--Can_NR=2frame id is 0xFFFFFFFF80000271
//625 PAM_ParkingBarpercent 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent"
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA 127
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  126 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  125 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  124 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  123 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  122 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  121 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  120 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  119 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  118 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  117 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  116 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  115 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  114 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  113 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  112 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  111 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  110 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  109 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  108 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  107 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  106 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  105 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  104 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  103 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  102 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_No_Display_APA  101 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_100percent  100 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_99percent  99 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_98percent  98 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_97percent  97 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_96percent  96 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_95percent  95 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_94percent  94 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_93percent  93 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_92percent  92 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_91percent  91 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_90percent  90 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_89percent  89 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_88percent  88 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_87percent  87 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_86percent  86 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_85percent  85 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_84percent  84 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_83percent  83 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_82percent  82 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_81percent  81 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_80percent  80 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_79percent  79 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_78percent  78 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_77percent  77 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_76percent  76 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_75percent  75 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_74percent  74 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_73percent  73 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_72percent  72 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_71percent  71 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_70percent  70 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_69percent  69 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_68percent  68 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_67percent  67 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_66percent  66 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_65percent  65 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_64percent  64 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_63percent  63 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_62percent  62 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_61percent  61 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_60percent  60 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_59percent  59 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_58percent  58 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_57percent  57 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_56percent  56 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_55percent  55 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_54percent  54 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_53percent  53 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_52percent  52 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_51percent  51 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_50percent  50 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_49percent  49 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_48percent  48 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_47percent  47 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_46percent  46 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_45percent  45 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_44percent  44 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_43percent  43 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_42percent  42 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_41percent  41 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_40percent  40 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_39percent  39 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_38percent  38 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_37percent  37 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_36percent  36 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_35percent  35 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_34percent  34 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_33percent  33 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_32percent  32 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_31percent  31 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_30percent  30 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_29percent  29 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_28percent  28 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_27percent  27 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_26percent  26 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_25percent  25 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_24percent  24 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_23percent  23 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_22percent  22 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_21percent  21 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_20percent  20 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_19percent  19 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_18percent  18 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_17percent  17 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_16percent  16 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_15percent  15 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_14percent  14 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_13percent  13 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_12percent  12 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_11percent  11 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_10percent  10 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_9percent  9 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_8percent  8 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_7percent  7 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_6percent  6 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_5percent  5 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_4percent  4 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_3percent  3 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_2percent  2 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_1percent  1 
#define  CAN_ALL_PAM_ce8PAM_ParkingBarpercent_0percent  0 
//625 PAM_InfoDisplayReq 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request"
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Reserved 31
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Reserved  30 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Reserved  29 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Reserved  28 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Reserved  27 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Reserved  26 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Function_not_available  25 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Function_Complete  24 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Gear_R_and_Brake  23 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Press_Brake_Pedal  22 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Repress_Dead_Man_Switch  21 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Buckle_Seat_Belt  20 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Close_Door  19 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Release_Brake_andsteering_wheel  18 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Slow_Down  17 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Drive_Bw  16 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Gear_D  15 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Gear_R  14 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_pPSC&cPSC_request  13 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_cPSC_request_only  12 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_pPSC_request_only  11 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Process_bar  10 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Function_off  9 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Function_Select  8 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Stop  7 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Drive_Fw  6 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_SearchingProcess  5 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Confirm_Switch  4 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Gear_P  3 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Turn_lever  2 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_Req_Forward_Again  1 
#define  CAN_ALL_PAM_ce8PAM_InfoDisplayReq_No_Request  0 
//625 PAM_ObjectStsFLC 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLC_object_zone_3 3
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLC_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLC_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLC_No_object  0 
//625 PAM_ObjectStsFLM 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLM_object__zone_5 5
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLM_object_zone_4  4 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLM_object_zone_3  3 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLM_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLM_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFLM_No_object  0 
//625 PAM_ObjectStsFRM 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFRM_object__zone_5 5
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFRM_object_zone_4  4 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFRM_object_zone_3  3 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFRM_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFRM_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_ObjectStsFRM_No_object  0 
//625 PAM_objectStsFRC 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_objectStsFRC_object_zone_3 3
#define  CAN_ALL_PAM_ce4PAM_objectStsFRC_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_objectStsFRC_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_objectStsFRC_No_object  0 
//625 PAM_objectStsRLC 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_objectStsRLC_object_zone_3 3
#define  CAN_ALL_PAM_ce4PAM_objectStsRLC_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLC_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLC_No_object  0 
//625 PAM_objectStsRLM 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved 15
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  14 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  13 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  12 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  11 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  10 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  9 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_Reserved  8 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object_zone7  7 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object_zone6  6 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object__zone5  5 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object_zone4  4 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object_zone3  3 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object_zone2  2 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_object_in_zone1  1 
#define  CAN_ALL_PAM_ce4PAM_objectStsRLM_No_object  0 
//625 PAM_objectStsRRM 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object_zone_7 7
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object_zone_6  6 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object__zone_5  5 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object_zone_4  4 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object_zone_3  3 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRM_No_object  0 
//625 PAM_objectStsRRC 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce4PAM_objectStsRRC_object_zone_3 3
#define  CAN_ALL_PAM_ce4PAM_objectStsRRC_object_zone_2  2 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRC_object_in_zone_1  1 
#define  CAN_ALL_PAM_ce4PAM_objectStsRRC_No_object  0 
//625 PAM_ParkingBarSts 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off"
#define  CAN_ALL_PAM_ce2PAM_ParkingBarSts_Display_on_From_bottom_to_top 2
#define  CAN_ALL_PAM_ce2PAM_ParkingBarSts_Display_on_From_top_to_bottom  1 
#define  CAN_ALL_PAM_ce2PAM_ParkingBarSts_Display_off  0 
//625 PAM_FrontSysTemWorkSts 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable"
#define  CAN_ALL_PAM_ce2PAM_FrontSysTemWorkSts_Failed 3
#define  CAN_ALL_PAM_ce2PAM_FrontSysTemWorkSts_Active  2 
#define  CAN_ALL_PAM_ce2PAM_FrontSysTemWorkSts_Enable  1 
#define  CAN_ALL_PAM_ce2PAM_FrontSysTemWorkSts_Disable  0 
//625 PAM_RearSysTemWorkSts 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable"
#define  CAN_ALL_PAM_ce2PAM_RearSysTemWorkSts_Failed 3
#define  CAN_ALL_PAM_ce2PAM_RearSysTemWorkSts_Active  2 
#define  CAN_ALL_PAM_ce2PAM_RearSysTemWorkSts_Enable  1 
#define  CAN_ALL_PAM_ce2PAM_RearSysTemWorkSts_Disable  0 
//625 PAM_ChimeCmdSoundstatus 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning"
#define  CAN_ALL_PAM_ce2PAM_ChimeCmdSoundstatus_APA 3
#define  CAN_ALL_PAM_ce2PAM_ChimeCmdSoundstatus_RearSystemWarning  2 
#define  CAN_ALL_PAM_ce2PAM_ChimeCmdSoundstatus_FrontSystemWarning  1 
#define  CAN_ALL_PAM_ce2PAM_ChimeCmdSoundstatus_NoWarning  0 
//--Can_NR=3frame id is 0xFFFFFFFF80000272
//626 SDG_ObjectStsFLS 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_Object_In_zone_3 3
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_Object_In_zone_2  2 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_Object_in_zone_1  1 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_No_object  0 
//626 SDG_ObjectStsFLS_RLS 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_RLS_Object_In_zone_3 3
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_RLS_Object_In_zone_2  2 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_RLS_Object_in_zone_1  1 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFLS_RLS_No_object  0 
//626 APA_Parkslot_State 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot"
#define  CAN_ALL_PAM_ce2APA_Parkslot_State_Invalid 3
#define  CAN_ALL_PAM_ce2APA_Parkslot_State_Slot_Right  2 
#define  CAN_ALL_PAM_ce2APA_Parkslot_State_Slot_Left  1 
#define  CAN_ALL_PAM_ce2APA_Parkslot_State_No_Slot  0 
//626 SDG_ObjectStsRLS 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRLS_Object_In_zone_3 3
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRLS_Object_In_zone_2  2 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRLS_Object_in_zone_1  1 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRLS_No_object  0 
//626 SDG_ObjectSts_FRS 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce3SDG_ObjectSts_FRS_Object_In_zone_3 3
#define  CAN_ALL_PAM_ce3SDG_ObjectSts_FRS_Object_In_zone_2  2 
#define  CAN_ALL_PAM_ce3SDG_ObjectSts_FRS_Object_in_zone_1  1 
#define  CAN_ALL_PAM_ce3SDG_ObjectSts_FRS_No_object  0 
//626 SDG_ObjectStsFRS_RRS 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFRS_RRS_Object_In_zone_3 3
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFRS_RRS_Object_In_zone_2  2 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFRS_RRS_Object_in_zone_1  1 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsFRS_RRS_No_object  0 
//626 SDG_ObjectStsRRS 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object"
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRRS_Object_In_zone_3 3
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRRS_Object_In_zone_2  2 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRRS_Object_in_zone_1  1 
#define  CAN_ALL_PAM_ce3SDG_ObjectStsRRS_No_object  0 
//626 APA_SelectedSide 3 "Reserved" 2 "Right" 1 "Left" 0 "None"
#define  CAN_ALL_PAM_ce2APA_SelectedSide_Reserved 3
#define  CAN_ALL_PAM_ce2APA_SelectedSide_Right  2 
#define  CAN_ALL_PAM_ce2APA_SelectedSide_Left  1 
#define  CAN_ALL_PAM_ce2APA_SelectedSide_None  0 
//626 APA_Recover_INT_Indication 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request"
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Reserved 7
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Reserved  6 
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Reserved  5 
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Req_Recover_Brake_Pedal_Release  4 
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Req_Recover_Non_Driver_Door_Open  3 
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Req_Recover_Found_Obstacle_In_Trajectory  2 
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_Req_Recover_Dead_Man_Switch_Release  1 
#define  CAN_ALL_PAM_ce3APA_Recover_INT_Indication_No_Request  0 
//626 APA_Quit_Indication 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request"
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved 31
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  30 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  29 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  28 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  27 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  26 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  25 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  24 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  23 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  22 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Reserved  21 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Above_Slope_limt  20 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Steering_Wheel_Hands_On  19 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Gear_Interrupt  18 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Vehicle_Block  17 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_EPB_Apply  16 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Driver_Door  15 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Seat_belt_unbuckle  14 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_No_object_in_front  13 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Space_limit  12 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Trajectory  11 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_ACC  10 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_External_ECU_actvie  9 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Gear_Intervention  8 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Gas_pedal  7 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Recover_Int_Tims_Overflow  6 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Move_times_overflow  5 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Timing_overflow  4 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_Speed_high  3 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_APA_Failure_泊车辅助系统故障，系统退出  2 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_Req_Quit_External_ECU_failure  1 
#define  CAN_ALL_PAM_ce5APA_Quit_Indication_No_Request  0 

//CAN有符号变量：该变量是正负整数
#define  CAN_ALL_PAM_s16PAM_TrgtEPSStrgWhlAng_offset 32773.1092436975
#define  CAN_ALL_PAM_s16PAM_TrgtEPSStrgWhlAng_Nmax 32773.1092436975
#define  CAN_ALL_PAM_s16PAM_TrgtEPSStrgWhlAng_Pmax 32760.8907563025

//CAN无符号变量：define该变量的physical min-max
#define  CAN_ALL_PAM_u16PAM_TrgtEPSStrgWhlAng_min 0
#define  CAN_ALL_PAM_u16PAM_TrgtEPSStrgWhlAng_max 0xFFFE
#define  CAN_ALL_PAM_u2PAM_CmdEPSSts_min 0
#define  CAN_ALL_PAM_u2PAM_CmdEPSSts_max 0x2
#define  CAN_ALL_PAM_u1PAM_APAF_min 0
#define  CAN_ALL_PAM_u1PAM_APAF_max 0x1
#define  CAN_ALL_PAM_u1StopStartInhibit_APA_min 0
#define  CAN_ALL_PAM_u1StopStartInhibit_APA_max 0x1
#define  CAN_ALL_PAM_u1PAM_BrakeFunctionMode_min 0
#define  CAN_ALL_PAM_u1PAM_BrakeFunctionMode_max 0x1
#define  CAN_ALL_PAM_u3PAM_ESP_Target_Gear_Request_min 0
#define  CAN_ALL_PAM_u3PAM_ESP_Target_Gear_Request_max 0x7
#define  CAN_ALL_PAM_u2PAM_FailureBrakeMode_min 0
#define  CAN_ALL_PAM_u2PAM_FailureBrakeMode_max 0x3
#define  CAN_ALL_PAM_u3PAM_BrakeModeSts_min 0
#define  CAN_ALL_PAM_u3PAM_BrakeModeSts_max 0x7
#define  CAN_ALL_PAM_u3PAM_Sts_min 0
#define  CAN_ALL_PAM_u3PAM_Sts_max 0x7
#define  CAN_ALL_PAM_u8PAM_ESP_Speed_Target_min 0
#define  CAN_ALL_PAM_u8PAM_ESP_Speed_Target_max 0xFE
#define  CAN_ALL_PAM_u12PAM_ESP_Stop_Distance_min 0
#define  CAN_ALL_PAM_u12PAM_ESP_Stop_Distance_max 0xFFE
#define  CAN_ALL_PAM_u4Rolling_counter_0x270_min 0
#define  CAN_ALL_PAM_u4Rolling_counter_0x270_max 0xF
#define  CAN_ALL_PAM_u8Checksum_0x270_min 0
#define  CAN_ALL_PAM_u8Checksum_0x270_max 0xFF
#define  CAN_ALL_PAM_u8PAM_ParkingBarpercent_min 0
#define  CAN_ALL_PAM_u8PAM_ParkingBarpercent_max 0x64
#define  CAN_ALL_PAM_u8PAM_InfoDisplayReq_min 0
#define  CAN_ALL_PAM_u8PAM_InfoDisplayReq_max 0xFF
#define  CAN_ALL_PAM_u4PAM_ObjectStsFLC_min 0
#define  CAN_ALL_PAM_u4PAM_ObjectStsFLC_max 0xF
#define  CAN_ALL_PAM_u4PAM_ObjectStsFLM_min 0
#define  CAN_ALL_PAM_u4PAM_ObjectStsFLM_max 0xF
#define  CAN_ALL_PAM_u4PAM_ObjectStsFRM_min 0
#define  CAN_ALL_PAM_u4PAM_ObjectStsFRM_max 0xF
#define  CAN_ALL_PAM_u4PAM_objectStsFRC_min 0
#define  CAN_ALL_PAM_u4PAM_objectStsFRC_max 0xF
#define  CAN_ALL_PAM_u4PAM_objectStsRLC_min 0
#define  CAN_ALL_PAM_u4PAM_objectStsRLC_max 0xF
#define  CAN_ALL_PAM_u4PAM_objectStsRLM_min 0
#define  CAN_ALL_PAM_u4PAM_objectStsRLM_max 0xF
#define  CAN_ALL_PAM_u4PAM_objectStsRRM_min 0
#define  CAN_ALL_PAM_u4PAM_objectStsRRM_max 0xF
#define  CAN_ALL_PAM_u4PAM_objectStsRRC_min 0
#define  CAN_ALL_PAM_u4PAM_objectStsRRC_max 0xF
#define  CAN_ALL_PAM_u2PAM_ParkingBarSts_min 0
#define  CAN_ALL_PAM_u2PAM_ParkingBarSts_max 0x2
#define  CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts_min 0
#define  CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts_max 0x3
#define  CAN_ALL_PAM_u2PAM_RearSysTemWorkSts_min 0
#define  CAN_ALL_PAM_u2PAM_RearSysTemWorkSts_max 0x3
#define  CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus_min 0
#define  CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus_max 0x3
#define  CAN_ALL_PAM_u4PAM_ChimeCmdSoundCadence_min 0
#define  CAN_ALL_PAM_u4PAM_ChimeCmdSoundCadence_max 0xE
#define  CAN_ALL_PAM_u3SDG_ObjectStsFLS_min 0
#define  CAN_ALL_PAM_u3SDG_ObjectStsFLS_max 0x7
#define  CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS_min 0
#define  CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS_max 0x7
#define  CAN_ALL_PAM_u2APA_Parkslot_State_min 0
#define  CAN_ALL_PAM_u2APA_Parkslot_State_max 0x3
#define  CAN_ALL_PAM_u3SDG_ObjectStsRLS_min 0
#define  CAN_ALL_PAM_u3SDG_ObjectStsRLS_max 0x7
#define  CAN_ALL_PAM_u3SDG_ObjectSts_FRS_min 0
#define  CAN_ALL_PAM_u3SDG_ObjectSts_FRS_max 0x7
#define  CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS_min 0
#define  CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS_max 0x7
#define  CAN_ALL_PAM_c2Reserve_3_8_9_min 0
#define  CAN_ALL_PAM_c2Reserve_3_8_9_max 0x3
#define  CAN_ALL_PAM_u3SDG_ObjectStsRRS_min 0
#define  CAN_ALL_PAM_u3SDG_ObjectStsRRS_max 0x7
#define  CAN_ALL_PAM_u2APA_SelectedSide_min 0
#define  CAN_ALL_PAM_u2APA_SelectedSide_max 0x3
#define  CAN_ALL_PAM_u3APA_Recover_INT_Indication_min 0
#define  CAN_ALL_PAM_u3APA_Recover_INT_Indication_max 0x7
#define  CAN_ALL_PAM_c8Reserve_3_24_31_min 0
#define  CAN_ALL_PAM_c8Reserve_3_24_31_max 0xFF
#define  CAN_ALL_PAM_u5APA_Quit_Indication_min 0
#define  CAN_ALL_PAM_u5APA_Quit_Indication_max 0x1F
#define  CAN_ALL_PAM_u3APA_Indication_min 0
#define  CAN_ALL_PAM_u3APA_Indication_max 0x7
#define  CAN_ALL_PAM_c32Reserve_3_56_39_min 0
#define  CAN_ALL_PAM_c32Reserve_3_56_39_max 0xFFFFFFFF
#define  CAN_ALL_PAM_u64DiagRespFromPAM_min 0
#define  CAN_ALL_PAM_u64DiagRespFromPAM_max 0x64

//CANfactor分子分母定义
#define  CAN_ALL_PAM_u3PAM_ESP_Target_Gear_Request_factor 1
#define  CAN_ALL_PAM_u1PAM_BrakeFunctionMode_factor 1
#define  CAN_ALL_PAM_u1StopStartInhibit_APA_factor 1
#define  CAN_ALL_PAM_u1PAM_APAF_factor 1
#define  CAN_ALL_PAM_u2PAM_CmdEPSSts_factor 1
#define  CAN_ALL_PAM_u3PAM_Sts_factor 1
#define  CAN_ALL_PAM_u3PAM_BrakeModeSts_factor 1
#define  CAN_ALL_PAM_u2PAM_FailureBrakeMode_factor 1
#define  CAN_ALL_PAM_um8PAM_ESP_Speed_Target_factor 1
#define  CAN_ALL_PAM_ud8PAM_ESP_Speed_Target_factor 10
#define  CAN_ALL_PAM_u12PAM_ESP_Stop_Distance_factor 1
#define  CAN_ALL_PAM_u4Rolling_counter_0x270_factor 1
#define  CAN_ALL_PAM_u8Checksum_0x270_factor 1
#define  CAN_ALL_PAM_sm16PAM_TrgtEPSStrgWhlAng_factor 119
#define  CAN_ALL_PAM_sd16PAM_TrgtEPSStrgWhlAng_factor 5000
#define  CAN_ALL_PAM_u8PAM_InfoDisplayReq_factor 1
#define  CAN_ALL_PAM_u4PAM_ObjectStsFLM_factor 1
#define  CAN_ALL_PAM_u4PAM_ObjectStsFLC_factor 1
#define  CAN_ALL_PAM_u4PAM_objectStsFRC_factor 1
#define  CAN_ALL_PAM_u4PAM_ObjectStsFRM_factor 1
#define  CAN_ALL_PAM_u4PAM_objectStsRLM_factor 1
#define  CAN_ALL_PAM_u4PAM_objectStsRLC_factor 1
#define  CAN_ALL_PAM_u4PAM_objectStsRRC_factor 1
#define  CAN_ALL_PAM_u4PAM_objectStsRRM_factor 1
#define  CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus_factor 1
#define  CAN_ALL_PAM_u2PAM_RearSysTemWorkSts_factor 1
#define  CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts_factor 1
#define  CAN_ALL_PAM_u2PAM_ParkingBarSts_factor 1
#define  CAN_ALL_PAM_u4PAM_ChimeCmdSoundCadence_factor 1
#define  CAN_ALL_PAM_u8PAM_ParkingBarpercent_factor 1
#define  CAN_ALL_PAM_u2APA_Parkslot_State_factor 1
#define  CAN_ALL_PAM_u3SDG_ObjectSts_FRS_factor 1
#define  CAN_ALL_PAM_u3SDG_ObjectStsRLS_factor 1
#define  CAN_ALL_PAM_u2APA_SelectedSide_factor 1
#define  CAN_ALL_PAM_u3SDG_ObjectStsRRS_factor 1
#define  CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS_factor 1
#define  CAN_ALL_PAM_u5APA_Quit_Indication_factor 1
#define  CAN_ALL_PAM_u3APA_Recover_INT_Indication_factor 1
#define  CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS_factor 1
#define  CAN_ALL_PAM_u3APA_Indication_factor 1
#define  CAN_ALL_PAM_u3SDG_ObjectStsFLS_factor 1
#define  CAN_ALL_PAM_u64DiagRespFromPAM_factor 1

//#define  报文名称_CH（CAN报文通道号）    报文序号+10；#define  结构体名称_CH（结构体通道号）  报文序号；#define 报文名称_ID （CAN报文ID）  报文CAN ID；#define 报文名称_DT  (CAN报文周期)  报文时间周倜【MS】/10； #define 报文名称_TorR(CAN报文发送或接收)    发送1，接收0

//--Can_NR=1----PAM 1 th Data Frame 名称：PAM_0x270  ID：0X624  周期：20ms  DLC：8字节PAM-->ABSESP
#define ALL_PAM_PAM_0x270_CH 1
#define ALL_PAM_PAM_0x270_FR 1
#define ALL_PAM_PAM_0x270_ID 0XFFFFFFFF80000270
#define ALL_PAM_PAM_0x270_DT 2 //xxMS/10
#define ALL_PAM_PAM_0x270_TorR 0
#define ALL_PAM_PAM_0x270_Ay 0
#define ALL_PAM_PAM_0x270_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_PAM_PAM_0x270_LH 8//LENGTH <=8


//--Can_NR=2----PAM 2 th Data Frame 名称：PAM_0x271  ID：0X625  周期：100ms  DLC：8字节PAM-->GW
#define ALL_PAM_PAM_0x271_CH 2
#define ALL_PAM_PAM_0x271_FR 2
#define ALL_PAM_PAM_0x271_ID 0XFFFFFFFF80000271
#define ALL_PAM_PAM_0x271_DT 10 //xxMS/10
#define ALL_PAM_PAM_0x271_TorR 0
#define ALL_PAM_PAM_0x271_Ay 0
#define ALL_PAM_PAM_0x271_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_PAM_PAM_0x271_LH 8//LENGTH <=8


//--Can_NR=3----PAM 3 th Data Frame 名称：PAM_0x272  ID：0X626  周期：100ms  DLC：8字节PAM-->GW
#define ALL_PAM_PAM_0x272_CH 3
#define ALL_PAM_PAM_0x272_FR 3
#define ALL_PAM_PAM_0x272_ID 0XFFFFFFFF80000272
#define ALL_PAM_PAM_0x272_DT 10 //xxMS/10
#define ALL_PAM_PAM_0x272_TorR 0
#define ALL_PAM_PAM_0x272_Ay 0
#define ALL_PAM_PAM_0x272_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_PAM_PAM_0x272_LH 8//LENGTH <=8


//--Can_NR=4----PAM 4 th Data Frame 名称：PAM_DiagResp  ID：0X1864  周期：0ms  DLC：8字节PAM-->Tester
#define ALL_PAM_PAM_DiagResp_CH 4
#define ALL_PAM_PAM_DiagResp_FR 4
#define ALL_PAM_PAM_DiagResp_ID 0XFFFFFFFF80000748
#define ALL_PAM_PAM_DiagResp_DT 0 //xxMS/10
#define ALL_PAM_PAM_DiagResp_TorR 0
#define ALL_PAM_PAM_DiagResp_Ay 0
#define ALL_PAM_PAM_DiagResp_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_PAM_PAM_DiagResp_LH 8//LENGTH <=8


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


//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->
  vuint32_t  CAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng:16;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
  vuint32_t  CAN_ALL_PAM_u16PAM_CmdEPSSts:2;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2PAM_APAF:1;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u1StopStartInhibit_APA:1;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u1PAM_BrakeFunctionMode:1;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request:3;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3PAM_FailureBrakeMode:2;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2PAM_BrakeModeSts:3;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3PAM_Sts:3;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_PAM_u3PAM_ESP_Speed_Target:8;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
  vuint32_t  CAN_ALL_PAM_u8PAM_ESP_Stop_Distance:12;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
  vuint32_t  CAN_ALL_PAM_u12Rolling_counter_0x270:4;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4Checksum_0x270:8;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->
  vuint32_t  CAN_ALL_PAM_uPAM_ParkingBarpercent:8;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
  vuint32_t  CAN_ALL_PAM_u8PAM_InfoDisplayReq:8;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u8PAM_ObjectStsFLC:4;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_ObjectStsFLM:4;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_ObjectStsFRM:4;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_objectStsFRC:4;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t  CAN_ALL_PAM_u4PAM_objectStsRLC:4;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_objectStsRLM:4;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_objectStsRRM:4;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_objectStsRRC:4;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u4PAM_ParkingBarSts:2;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts:2;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2PAM_RearSysTemWorkSts:2;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus:2;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence:4;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 

//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->
  vuint32_t  CAN_ALL_PAM_uSDG_ObjectStsFLS:3;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS:3;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3APA_Parkslot_State:2;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u2SDG_ObjectStsRLS:3;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3SDG_ObjectSts_FRS:3;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t c2Reserve_3_8_9:2;//1.1-->1.0
  vuint32_t  CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS:3;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3SDG_ObjectStsRRS:3;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3APA_SelectedSide:2;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c8Reserve_3_24_31:8;//3.7-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_PAM_u2APA_Recover_INT_Indication:3;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u3APA_Quit_Indication:5;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_PAM_u5APA_Indication:3;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t c21Reserve_3_56_39:21;//4.7-->7.0

//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->
  vuint32_t exDiagRespFromPAM64High32:32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint32_t exDiagRespFromPAM64Low32:32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
    } B;
} CAN_ALL_FRAMES_PAM_tag;

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


//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->
  vuint64_t  CAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng:16;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
  vuint64_t  CAN_ALL_PAM_u16PAM_CmdEPSSts:2;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2PAM_APAF:1;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u1StopStartInhibit_APA:1;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u1PAM_BrakeFunctionMode:1;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request:3;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3PAM_FailureBrakeMode:2;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2PAM_BrakeModeSts:3;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3PAM_Sts:3;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_PAM_u3PAM_ESP_Speed_Target:8;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
  vuint64_t  CAN_ALL_PAM_u8PAM_ESP_Stop_Distance:12;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
  vuint64_t  CAN_ALL_PAM_u12Rolling_counter_0x270:4;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4Checksum_0x270:8;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->
  vuint64_t  CAN_ALL_PAM_uPAM_ParkingBarpercent:8;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
  vuint64_t  CAN_ALL_PAM_u8PAM_InfoDisplayReq:8;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u8PAM_ObjectStsFLC:4;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_ObjectStsFLM:4;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_ObjectStsFRM:4;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_objectStsFRC:4;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t  CAN_ALL_PAM_u4PAM_objectStsRLC:4;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_objectStsRLM:4;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_objectStsRRM:4;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_objectStsRRC:4;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u4PAM_ParkingBarSts:2;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts:2;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2PAM_RearSysTemWorkSts:2;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus:2;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence:4;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 

//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->
  vuint64_t  CAN_ALL_PAM_uSDG_ObjectStsFLS:3;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS:3;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3APA_Parkslot_State:2;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u2SDG_ObjectStsRLS:3;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3SDG_ObjectSts_FRS:3;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t c2Reserve_3_8_9:2;//1.1-->1.0
  vuint64_t  CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS:3;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3SDG_ObjectStsRRS:3;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3APA_SelectedSide:2;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c8Reserve_3_24_31:8;//3.7-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_PAM_u2APA_Recover_INT_Indication:3;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u3APA_Quit_Indication:5;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_PAM_u5APA_Indication:3;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  vuint64_t c21Reserve_3_56_39:21;//4.7-->7.0

//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->
  vuint64_t exDiagRespFromPAM64:64;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
  //vuint64_t exDiagRespFromPAM64Low32:32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 

    } B;
} CAN_ALL_FRAMES_PAM_tag;
extern CAN_ALL_FRAMES_PAM_tag CAN_ALL_FRAMES_PAM;
extern CAN_ALL_FRAMES_PAM_tag CAN_ALL_FRMes_PAM;
extern CAN_ALL_FRAMES_PAM_tag CAN_ALL_FRVar_PAM;
extern CAN_ALL_FRAMES_PAM_tag CAN_ALL_FRVarOld_PAM;


               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagRespFromPAM64High32:2;
                                    vuint16_t exDiagRespFromPAM64Low32:2;
                               } B;
                            } exDiagRespFromPAM_tag;
                            extern exDiagRespFromPAM_tag exDiagRespFromPAM;
//--1 th CAN 报文数据处理子程序------------
                CAN1_noReceivedMessageTime[ALL_PAM_PAM_0x270_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_PAM_PAM_0x271_CH]++;//Can_NR=2
                CAN1_noReceivedMessageTime[ALL_PAM_PAM_0x272_CH]++;//Can_NR=3
                CAN1_noReceivedMessageTime[ALL_PAM_PAM_DiagResp_CH]++;//Can_NR=4
typedef union {
    vuint8_t R;
    struct { //ALL_PAM 接收报文故障
        vuint8_t ALL_PAM_PAM_0x270: 1; //Can_NR=1
        vuint8_t ALL_PAM_PAM_0x271: 1; //Can_NR=2
        vuint8_t ALL_PAM_PAM_0x272: 1; //Can_NR=3
        vuint8_t ALL_PAM_PAM_DiagResp: 1; //Can_NR=4
    } B;
} Error_CAN1_ALL_PAM_tag ;
extern Error_CAN1_ALL_PAM_tag Error_CAN1_ALL_PAM ;
typedef union {
    vuint8_t R;
    struct { //ALL_PAM 接收报文故障
        vuint8_t ALL_PAM_PAM_0x270T: 1; //Can_NR=1
        vuint8_t ALL_PAM_PAM_0x271T: 1; //Can_NR=2
        vuint8_t ALL_PAM_PAM_0x272T: 1; //Can_NR=3
        vuint8_t ALL_PAM_PAM_DiagRespT: 1; //Can_NR=4
    } B;
}  D00CTR_def_CAN1_ALL_PAM_tag ;
extern  D00CTR_def_CAN1_ALL_PAM_tag D00CTR_def_CAN1_ALL_PAM ;


//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

 vuint16_t VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
 vuint8_t VCAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
 vuint8_t VCAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

 vuint8_t VCAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
 vuint8_t VCAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 


//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

 vuint8_t VCAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_3_8_9;//1.1-->1.0
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint32_t Vc21Reserve_3_56_39;//4.7-->7.0


//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

 vuint32_t VexDiagRespFromPAM64High32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint32_t VexDiagRespFromPAM64Low32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//=======================================================(分隔行)



//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

 extern  vuint16_t VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
 extern  vuint8_t VCAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
 extern  vuint8_t VCAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

 extern  vuint8_t VCAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
 extern  vuint8_t VCAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 


//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

 extern  vuint8_t VCAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_3_8_9;//1.1-->1.0
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint32_t Vc21Reserve_3_56_39;//4.7-->7.0


//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

 extern  vuint32_t VexDiagRespFromPAM64High32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint32_t VexDiagRespFromPAM64Low32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

 vuint16_t VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
 vuint8_t VCAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
 vuint16_t VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
 vuint8_t VCAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

 vuint8_t VCAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
 vuint8_t VCAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 


//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

 vuint8_t VCAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t Vc2Reserve_3_8_9;//1.1-->1.0
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 vuint32_t Vc21Reserve_3_56_39;//4.7-->7.0


//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

 vuint32_t VexDiagRespFromPAM64;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 //vuint32_t VexDiagRespFromPAM64Low32:32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

 extern  vuint16_t VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
 extern  vuint8_t VCAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
 extern  vuint16_t VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
 extern  vuint8_t VCAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

 extern  vuint8_t VCAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
 extern  vuint8_t VCAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 


//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

 extern  vuint8_t VCAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc2Reserve_3_8_9;//1.1-->1.0
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 extern  vuint32_t Vc21Reserve_3_56_39;//4.7-->7.0


//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

 extern  vuint32_t VexDiagRespFromPAM64;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
//*****************32 bits split line
 //extern  vuint32_t VexDiagRespFromPAM64Low32:32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 


//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint16_t VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
        vuint8_t VCAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint8_t VCAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
         //vuint16_t VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
        vuint8_t VCAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_PAM_1_PAM_0x270_DataBit_tag;
extern Vu8_PAM_1_PAM_0x270_DataBit_tag Vu8_PAM_1_PAM_0x270_DataBit;


//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint8_t VCAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
         //vuint8_t VCAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
        vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_PAM_2_PAM_0x271_DataBit_tag;
extern Vu8_PAM_2_PAM_0x271_DataBit_tag Vu8_PAM_2_PAM_0x271_DataBit;


//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t Vc2Reserve_3_8_9;//1.1-->1.0
        vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
         //vuint8_t Vc8Reserve_3_24_31;//3.7-->3.0
        //*****************32 bits split line
        vuint8_t VCAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint32_t Vc21Reserve_3_56_39;//4.7-->7.0

     } B;
}  Vu8_PAM_3_PAM_0x272_DataBit_tag;
extern Vu8_PAM_3_PAM_0x272_DataBit_tag Vu8_PAM_3_PAM_0x272_DataBit;


//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
         //vuint32_t VexDiagRespFromPAM64High32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
        //*****************32 bits split line
         //vuint32_t VexDiagRespFromPAM64Low32;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_PAM_4_PAM_DiagResp_DataBit_tag;
extern Vu8_PAM_4_PAM_DiagResp_DataBit_tag Vu8_PAM_4_PAM_DiagResp_DataBit;

//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_0x270_FR+0] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_0x270_FR+0]  ; 
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_0x270_FR+1] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_0x270_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x270_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x270_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_PAM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x270 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_0x270_FR+0]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_0x270_FR+0];
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_0x270_FR+1]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_0x270_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x270_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH]  == 1 ) {


                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng= CAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng_min;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u16PAM_CmdEPSSts= CAN_ALL_PAM_u16PAM_CmdEPSSts_min;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2PAM_APAF= CAN_ALL_PAM_u2PAM_APAF_min;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u1StopStartInhibit_APA= CAN_ALL_PAM_u1StopStartInhibit_APA_min;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u1PAM_BrakeFunctionMode= CAN_ALL_PAM_u1PAM_BrakeFunctionMode_min;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request= CAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request_min;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3PAM_FailureBrakeMode= CAN_ALL_PAM_u3PAM_FailureBrakeMode_min;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2PAM_BrakeModeSts= CAN_ALL_PAM_u2PAM_BrakeModeSts_min;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3PAM_Sts= CAN_ALL_PAM_u3PAM_Sts_min;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3PAM_ESP_Speed_Target= CAN_ALL_PAM_u3PAM_ESP_Speed_Target_min;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u8PAM_ESP_Stop_Distance= CAN_ALL_PAM_u8PAM_ESP_Stop_Distance_min;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u12Rolling_counter_0x270= CAN_ALL_PAM_u12Rolling_counter_0x270_min;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4Checksum_0x270= CAN_ALL_PAM_u4Checksum_0x270_min;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng=VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u16PAM_CmdEPSSts=VCAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_APAF=VCAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u1StopStartInhibit_APA=VCAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u1PAM_BrakeFunctionMode=VCAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request=VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3PAM_FailureBrakeMode=VCAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_BrakeModeSts=VCAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3PAM_Sts=VCAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3PAM_ESP_Speed_Target=VCAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u8PAM_ESP_Stop_Distance=VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u12Rolling_counter_0x270=VCAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4Checksum_0x270=VCAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_uPAM_TrgtEPSStrgWhlAng;//0.7-->1.0 名称：PAM_TrgtEPSStrgWhlAng 位数：16bit, logical min-max：-780~779.7092 physical min-max：0x000~0xFFFE 精度：0.0238 偏移量：-32773.1092436975 单位：deg 
                VCAN_ALL_PAM_u16PAM_CmdEPSSts=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u16PAM_CmdEPSSts;//2.7-->2.6 2 "EPS control" 1 "Control EPS request" 0 "No request" 名称：PAM_CmdEPSSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2PAM_APAF=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_APAF;//2.5-->2.5 1 "APA Failure" 0 "Normal" 名称：PAM_APAF 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u1StopStartInhibit_APA=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u1StopStartInhibit_APA;//2.4-->2.4 1 "True" 0 "False" 名称：StopStartInhibit_APA 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u1PAM_BrakeFunctionMode=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u1PAM_BrakeFunctionMode;//2.3-->2.3 1 "AutomaticPark" 0 "No Action" 名称：PAM_BrakeFunctionMode 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u1PAM_ESP_Target_Gear_Request;//2.2-->2.0 4 "DRIVE" 3 "NEUTRAL" 2 "REVERSE" 1 "PARK" 0 "No Request" 名称：PAM_ESP_Target_Gear_Request 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3PAM_FailureBrakeMode=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3PAM_FailureBrakeMode;//3.7-->3.6 3 "Reserved" 2 "Emergency" 1 "Comfortable_reserved" 0 "Idle_No_Braking" 名称：PAM_FailureBrakeMode 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2PAM_BrakeModeSts=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_BrakeModeSts;//3.5-->3.3 5 "Abort" 4 "Suspend" 3 "ManeuverFinished" 2 "Active" 1 "Standby" 0 "Init" 名称：PAM_BrakeModeSts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3PAM_Sts=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3PAM_Sts;//3.2-->3.0 7 "Reserved" 6 "Terminated" 5 "Failure_Disable" 4 "Completed" 3 "Guidance active_Active" 2 "Searching(Enable)" 1 "Standby(Standby Enable)" 0 "Off" 名称：PAM_Sts 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3PAM_ESP_Speed_Target=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3PAM_ESP_Speed_Target;//4.7-->4.0 255 "Invalid" 名称：PAM_ESP_Speed_Target 位数：8bit, logical min-max：0~25.4 physical min-max：0x000~0xFE 精度：0.1 偏移量：0 单位：kph 
                VCAN_ALL_PAM_u8PAM_ESP_Stop_Distance=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u8PAM_ESP_Stop_Distance;//5.7-->6.4 4095 "Invalid" 名称：PAM_ESP_Stop_Distance 位数：12bit, logical min-max：0~4094 physical min-max：0x000~0xFFE 精度：1 偏移量：0 单位：cm 
                VCAN_ALL_PAM_u12Rolling_counter_0x270=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u12Rolling_counter_0x270;//6.3-->6.0 名称：Rolling_counter_0x270 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4Checksum_0x270=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4Checksum_0x270;//7.7-->7.0 名称：Checksum_0x270 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+7] =Vu8_PAM_1_PAM_0x270_Data7Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+6] =Vu8_PAM_1_PAM_0x270_Data6Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+5] =Vu8_PAM_1_PAM_0x270_Data5Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+4] =Vu8_PAM_1_PAM_0x270_Data4Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+3] =Vu8_PAM_1_PAM_0x270_Data3Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+2] =Vu8_PAM_1_PAM_0x270_Data2Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+1] =Vu8_PAM_1_PAM_0x270_Data1Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x270_FR+0] =Vu8_PAM_1_PAM_0x270_Data0Bit.R;

                Vu8_PAM_1_PAM_0x270_Data7Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 7];
                Vu8_PAM_1_PAM_0x270_Data6Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 6];
                Vu8_PAM_1_PAM_0x270_Data5Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 5];
                Vu8_PAM_1_PAM_0x270_Data4Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 4];
                Vu8_PAM_1_PAM_0x270_Data3Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 3];
                Vu8_PAM_1_PAM_0x270_Data2Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 2];
                Vu8_PAM_1_PAM_0x270_Data1Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 1];
                Vu8_PAM_1_PAM_0x270_Data0Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x270_FR + 0];



//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_0x271_FR+0] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_0x271_FR+0]  ; 
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_0x271_FR+1] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_0x271_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x271_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x271_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_PAM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x271 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_0x271_FR+0]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_0x271_FR+0];
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_0x271_FR+1]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_0x271_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x271_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH]  == 1 ) {


                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_uPAM_ParkingBarpercent= CAN_ALL_PAM_uPAM_ParkingBarpercent_min;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u8PAM_InfoDisplayReq= CAN_ALL_PAM_u8PAM_InfoDisplayReq_min;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u8PAM_ObjectStsFLC= CAN_ALL_PAM_u8PAM_ObjectStsFLC_min;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_ObjectStsFLM= CAN_ALL_PAM_u4PAM_ObjectStsFLM_min;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_ObjectStsFRM= CAN_ALL_PAM_u4PAM_ObjectStsFRM_min;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_objectStsFRC= CAN_ALL_PAM_u4PAM_objectStsFRC_min;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRLC= CAN_ALL_PAM_u4PAM_objectStsRLC_min;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRLM= CAN_ALL_PAM_u4PAM_objectStsRLM_min;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRRM= CAN_ALL_PAM_u4PAM_objectStsRRM_min;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRRC= CAN_ALL_PAM_u4PAM_objectStsRRC_min;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u4PAM_ParkingBarSts= CAN_ALL_PAM_u4PAM_ParkingBarSts_min;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts= CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts_min;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2PAM_RearSysTemWorkSts= CAN_ALL_PAM_u2PAM_RearSysTemWorkSts_min;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus= CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus_min;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence= CAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence_min;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_uPAM_ParkingBarpercent=VCAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u8PAM_InfoDisplayReq=VCAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u8PAM_ObjectStsFLC=VCAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_ObjectStsFLM=VCAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_ObjectStsFRM=VCAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsFRC=VCAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRLC=VCAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRLM=VCAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRRM=VCAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRRC=VCAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_ParkingBarSts=VCAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts=VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_RearSysTemWorkSts=VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus=VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence=VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 

                VCAN_ALL_PAM_uPAM_ParkingBarpercent=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_uPAM_ParkingBarpercent;//0.7-->0.0 127 "No Display APA" 126 "No Display APA" 125 "No Display APA" 124 "No Display APA" 123 "No Display APA" 122 "No Display APA" 121 "No Display APA" 120 "No Display APA" 119 "No Display APA" 118 "No Display APA" 117 "No Display APA" 116 "No Display APA" 115 "No Display APA" 114 "No Display APA" 113 "No Display APA" 112 "No Display APA" 111 "No Display APA" 110 "No Display APA" 109 "No Display APA" 108 "No Display APA" 107 "No Display APA" 106 "No Display APA" 105 "No Display APA" 104 "No Display APA" 103 "No Display APA" 102 "No Display APA" 101 "No Display APA" 100 "100percent" 99 "99percent" 98 "98percent" 97 "97percent" 96 "96percent" 95 "95percent" 94 "94percent" 93 "93percent" 92 "92percent" 91 "91percent" 90 "90percent" 89 "89percent" 88 "88percent" 87 "87percent" 86 "86percent" 85 "85percent" 84 "84percent" 83 "83percent" 82 "82percent" 81 "81percent" 80 "80percent" 79 "79percent" 78 "78percent" 77 "77percent" 76 "76percent" 75 "75percent" 74 "74percent" 73 "73percent" 72 "72percent" 71 "71percent" 70 "70percent" 69 "69percent" 68 "68percent" 67 "67percent" 66 "66percent" 65 "65percent" 64 "64percent" 63 "63percent" 62 "62percent" 61 "61percent" 60 "60percent" 59 "59percent" 58 "58percent" 57 "57percent" 56 "56percent" 55 "55percent" 54 "54percent" 53 "53percent" 52 "52percent" 51 "51percent" 50 "50percent" 49 "49percent" 48 "48percent" 47 "47percent" 46 "46percent" 45 "45percent" 44 "44percent" 43 "43percent" 42 "42percent" 41 "41percent" 40 "40percent" 39 "39percent" 38 "38percent" 37 "37percent" 36 "36percent" 35 "35percent" 34 "34percent" 33 "33percent" 32 "32percent" 31 "31percent" 30 "30percent" 29 "29percent" 28 "28percent" 27 "27percent" 26 "26percent" 25 "25percent" 24 "24percent" 23 "23percent" 22 "22percent" 21 "21percent" 20 "20percent" 19 "19percent" 18 "18percent" 17 "17percent" 16 "16percent" 15 "15percent" 14 "14percent" 13 "13percent" 12 "12percent" 11 "11percent" 10 "10percent" 9 "9percent" 8 "8percent" 7 "7percent" 6 "6percent" 5 "5percent" 4 "4percent" 3 "3percent" 2 "2percent" 1 "1percent" 0 "0percent" 名称：PAM_ParkingBarpercent 位数：8bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位：% 
                VCAN_ALL_PAM_u8PAM_InfoDisplayReq=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u8PAM_InfoDisplayReq;//1.7-->1.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Req_Function not available" 24 "Req_Function Complete" 23 "Req_Gear R and Brake" 22 "Req_Press Brake Pedal" 21 "Req_Repress Dead Man Switch" 20 "Req_Buckle Seat Belt" 19 "Req_Close Door" 18 "Req_Release Brake andsteering wheel" 17 "Req_Slow_Down" 16 "Req_Drive_Bw" 15 "Req_Gear_D" 14 "Req_Gear_R" 13 "pPSC&cPSC request" 12 "cPSC request only" 11 "pPSC request only" 10 "Req_Process bar" 9 "Req_Function off" 8 "Req_Function Select" 7 "Req_Stop" 6 "Req_Drive_Fw" 5 "Req_SearchingProcess" 4 "Req_Confirm_Switch" 3 "Req_Gear_P" 2 "Req_Turn_lever" 1 "Req_Forward_Again" 0 "No Request" 名称：PAM_InfoDisplayReq 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u8PAM_ObjectStsFLC=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u8PAM_ObjectStsFLC;//2.7-->2.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_ObjectStsFLM=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_ObjectStsFLM;//2.3-->2.0 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_ObjectStsFRM=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_ObjectStsFRM;//3.7-->3.4 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_ObjectStsFRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_objectStsFRC=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsFRC;//3.3-->3.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsFRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_objectStsRLC=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRLC;//4.7-->4.4 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRLC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_objectStsRLM=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRLM;//4.3-->4.0 15 "Reserved" 14 "Reserved" 13 "Reserved" 12 "Reserved" 11 "Reserved" 10 "Reserved" 9 "Reserved" 8 "Reserved" 7 "object zone7" 6 "object zone6" 5 "object  zone5" 4 "object zone4" 3 "object zone3" 2 "object zone2" 1 "object in zone1" 0 "No object" 名称：PAM_objectStsRLM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_objectStsRRM=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRRM;//5.7-->5.4 7 "object zone 7" 6 "object zone 6" 5 "object  zone 5" 4 "object zone 4" 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRM 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_objectStsRRC=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_objectStsRRC;//5.3-->5.0 3 "object zone 3" 2 "object zone 2" 1 "object in zone 1" 0 "No object" 名称：PAM_objectStsRRC 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u4PAM_ParkingBarSts=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u4PAM_ParkingBarSts;//6.7-->6.6 2 "Display on From bottom to top" 1 "Display on From top to bottom" 0 "Display off" 名称：PAM_ParkingBarSts 位数：2bit, logical min-max：0~2 physical min-max：0x000~0x2 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2PAM_FrontSysTemWorkSts=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_FrontSysTemWorkSts;//6.5-->6.4 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_FrontSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2PAM_RearSysTemWorkSts=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_RearSysTemWorkSts;//6.3-->6.2 3 "Failed" 2 "Active" 1 "Enable" 0 "Disable" 名称：PAM_RearSysTemWorkSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_ChimeCmdSoundstatus;//6.1-->6.0 3 "APA" 2 "RearSystemWarning" 1 "FrontSystemWarning" 0 "NoWarning" 名称：PAM_ChimeCmdSoundstatus 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2PAM_ChimeCmdSoundCadence;//7.3-->7.0 12 "Tone 12 PAM successful tone" 11 "Tone 11  PAM warning tone" 10 "Tone 10 PAM failed tone" 9 "RPA OK" 8 "RPA NOK" 7 "Tone 7" 6 "Tone 6" 5 "Tone 5" 4 "Tone 4" 3 "Tone 3" 2 "Tone 2" 1 "Tone 1" 0 "Tone 0 No warning" 名称：PAM_ChimeCmdSoundCadence 位数：4bit, logical min-max：0~14 physical min-max：0x000~0xE 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+7] =Vu8_PAM_2_PAM_0x271_Data7Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+6] =Vu8_PAM_2_PAM_0x271_Data6Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+5] =Vu8_PAM_2_PAM_0x271_Data5Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+4] =Vu8_PAM_2_PAM_0x271_Data4Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+3] =Vu8_PAM_2_PAM_0x271_Data3Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+2] =Vu8_PAM_2_PAM_0x271_Data2Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+1] =Vu8_PAM_2_PAM_0x271_Data1Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x271_FR+0] =Vu8_PAM_2_PAM_0x271_Data0Bit.R;

                Vu8_PAM_2_PAM_0x271_Data7Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 7];
                Vu8_PAM_2_PAM_0x271_Data6Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 6];
                Vu8_PAM_2_PAM_0x271_Data5Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 5];
                Vu8_PAM_2_PAM_0x271_Data4Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 4];
                Vu8_PAM_2_PAM_0x271_Data3Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 3];
                Vu8_PAM_2_PAM_0x271_Data2Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 2];
                Vu8_PAM_2_PAM_0x271_Data1Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 1];
                Vu8_PAM_2_PAM_0x271_Data0Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x271_FR + 0];



//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_0x272_FR+0] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_0x272_FR+0]  ; 
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_0x272_FR+1] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_0x272_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x272_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x272_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_PAM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x272 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_0x272_FR+0]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_0x272_FR+0];
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_0x272_FR+1]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_0x272_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x272_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH]  == 1 ) {


                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_uSDG_ObjectStsFLS= CAN_ALL_PAM_uSDG_ObjectStsFLS_min;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS= CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS_min;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3APA_Parkslot_State= CAN_ALL_PAM_u3APA_Parkslot_State_min;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2SDG_ObjectStsRLS= CAN_ALL_PAM_u2SDG_ObjectStsRLS_min;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3SDG_ObjectSts_FRS= CAN_ALL_PAM_u3SDG_ObjectSts_FRS_min;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B.c2Reserve_3_8_9= CAN_ALL_PAM_c2Reserve_3_8_9_min;//1.1-->1.0
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS= CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS_min;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsRRS= CAN_ALL_PAM_u3SDG_ObjectStsRRS_min;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3APA_SelectedSide= CAN_ALL_PAM_u3APA_SelectedSide_min;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B.c8Reserve_3_24_31= CAN_ALL_PAM_c8Reserve_3_24_31_min;//3.7-->3.0
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u2APA_Recover_INT_Indication= CAN_ALL_PAM_u2APA_Recover_INT_Indication_min;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u3APA_Quit_Indication= CAN_ALL_PAM_u3APA_Quit_Indication_min;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B. CAN_ALL_PAM_u5APA_Indication= CAN_ALL_PAM_u5APA_Indication_min;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_PAM.B.c21Reserve_3_56_39= CAN_ALL_PAM_c21Reserve_3_56_39_min;//4.7-->7.0

                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_uSDG_ObjectStsFLS=VCAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS=VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3APA_Parkslot_State=VCAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2SDG_ObjectStsRLS=VCAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectSts_FRS=VCAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B.c2Reserve_3_8_9=Vc2Reserve_3_8_9;//1.1-->1.0
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS=VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsRRS=VCAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3APA_SelectedSide=VCAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B.c8Reserve_3_24_31=Vc8Reserve_3_24_31;//3.7-->3.0
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2APA_Recover_INT_Indication=VCAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3APA_Quit_Indication=VCAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u5APA_Indication=VCAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B.c21Reserve_3_56_39=Vc21Reserve_3_56_39;//4.7-->7.0

                VCAN_ALL_PAM_uSDG_ObjectStsFLS=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_uSDG_ObjectStsFLS;//0.7-->0.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsFLS_RLS;//0.4-->0.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFLS_RLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3APA_Parkslot_State=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3APA_Parkslot_State;//0.1-->0.0 3 "Invalid" 2 "Slot_Right" 1 "Slot_Left" 0 "No Slot" 名称：APA_Parkslot_State 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u2SDG_ObjectStsRLS=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2SDG_ObjectStsRLS;//1.7-->1.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRLS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3SDG_ObjectSts_FRS=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectSts_FRS;//1.4-->1.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectSts_FRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                Vc2Reserve_3_8_9=CAN_ALL_FRVar_PAM.B.c2Reserve_3_8_9;//1.1-->1.0
                VCAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsFRS_RRS;//2.7-->2.5 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsFRS_RRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3SDG_ObjectStsRRS=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3SDG_ObjectStsRRS;//2.4-->2.2 3 "Object In zone 3" 2 "Object In zone 2" 1 "Object in zone 1" 0 "No object" 名称：SDG_ObjectStsRRS 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3APA_SelectedSide=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3APA_SelectedSide;//2.1-->2.0 3 "Reserved" 2 "Right" 1 "Left" 0 "None" 名称：APA_SelectedSide 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc8Reserve_3_24_31=CAN_ALL_FRVar_PAM.B.c8Reserve_3_24_31;//3.7-->3.0
                VCAN_ALL_PAM_u2APA_Recover_INT_Indication=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u2APA_Recover_INT_Indication;//4.7-->4.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Req_Recover_Brake Pedal Release" 3 "Req_Recover_Non Driver Door Open" 2 "Req_Recover_Found Obstacle In Trajectory" 1 "Req_Recover_Dead Man Switch Release" 0 "No Request" 名称：APA_Recover_INT_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u3APA_Quit_Indication=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u3APA_Quit_Indication;//4.4-->4.0 31 "Reserved" 30 "Reserved" 29 "Reserved" 28 "Reserved" 27 "Reserved" 26 "Reserved" 25 "Reserved" 24 "Reserved" 23 "Reserved" 22 "Reserved" 21 "Reserved" 20 "Req_Quit_Above Slope limt" 19 "Req_Quit_Steering Wheel Hands On" 18 "Req_Quit_Gear Interrupt" 17 "Req_Quit_Vehicle Block" 16 "Req_Quit_EPB_Apply" 15 "Req_Quit_Driver_Door" 14 "Req_Quit_Seat belt unbuckle" 13 "Req_Quit_No object in front" 12 "Req_Quit_Space limit" 11 "Req_Quit_Trajectory" 10 "Req_Quit_ACC" 9 "Req_Quit_External ECU actvie" 8 "Req_Quit_Gear Intervention" 7 "Req_Quit_Gas pedal" 6 "Req_Quit_Recover_Int_Tims_Overflow" 5 "Req_Quit_Move times overflow" 4 "Req_Quit_Timing overflow" 3 "Req_Quit_Speed high" 2 "Req_Quit_APA_Failure 泊车辅助系统故障，系统退出" 1 "Req_Quit_External ECU failure" 0 "No Request" 名称：APA_Quit_Indication 位数：5bit, logical min-max：0~31 physical min-max：0x000~0x1F 精度：1 偏移量：0 单位： 
                VCAN_ALL_PAM_u5APA_Indication=CAN_ALL_FRVar_PAM.B. CAN_ALL_PAM_u5APA_Indication;//5.7-->5.5 7 "Reserved" 6 "Reserved" 5 "Reserved" 4 "Reserved" 3 "POC Active" 2 "cPSC Active" 1 "pPSC Active" 0 "No Active" 名称：APA_Indication 位数：3bit, logical min-max：0~7 physical min-max：0x000~0x7 精度：1 偏移量：0 单位： 
                Vc21Reserve_3_56_39=CAN_ALL_FRVar_PAM.B.c21Reserve_3_56_39;//4.7-->7.0

                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+7] =Vu8_PAM_3_PAM_0x272_Data7Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+6] =Vu8_PAM_3_PAM_0x272_Data6Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+5] =Vu8_PAM_3_PAM_0x272_Data5Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+4] =Vu8_PAM_3_PAM_0x272_Data4Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+3] =Vu8_PAM_3_PAM_0x272_Data3Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+2] =Vu8_PAM_3_PAM_0x272_Data2Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+1] =Vu8_PAM_3_PAM_0x272_Data1Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_0x272_FR+0] =Vu8_PAM_3_PAM_0x272_Data0Bit.R;

                Vu8_PAM_3_PAM_0x272_Data7Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 7];
                Vu8_PAM_3_PAM_0x272_Data6Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 6];
                Vu8_PAM_3_PAM_0x272_Data5Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 5];
                Vu8_PAM_3_PAM_0x272_Data4Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 4];
                Vu8_PAM_3_PAM_0x272_Data3Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 3];
                Vu8_PAM_3_PAM_0x272_Data2Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 2];
                Vu8_PAM_3_PAM_0x272_Data1Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 1];
                Vu8_PAM_3_PAM_0x272_Data0Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_0x272_FR + 0];



//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_DiagResp_FR+0] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_DiagResp_FR+0]  ; 
                CAN_ALL_FRVar_PAM.R[ 2*ALL_PAM_PAM_DiagResp_FR+1] = CAN_ALL_FRMes_PAM.R[ 2*ALL_PAM_PAM_DiagResp_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_DiagResp_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_DiagResp_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_PAM = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_DiagResp = 1 ;  //部件具体报文CAN接收无信号
                exDiagRespFromPAM.R= CAN_ALL_PAM_uDiagRespFromPAM_min;//0.7-->7.0 名称：DiagRespFromPAM 位数：64bit, logical min-max：0~100 physical min-max：0x000~0x64 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_PAM.B.exDiagRespFromPAM64High32=exDiagRespFromPAM.B.exDiagRespFromPAM64High32;
                CAN_ALL_FRVar_PAM.B.exDiagRespFromPAM64Low32=exDiagRespFromPAM.B.exDiagRespFromPAM64Low32;
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_DiagResp_FR+0]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_DiagResp_FR+0];
                CAN_ALL_FRVar_PAM.R[2*ALL_PAM_PAM_DiagResp_FR+1]=CAN_ALL_FRAMES_PAM.R[2*ALL_PAM_PAM_DiagResp_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_PAM_PAM_DiagResp_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH]  == 1 ) {



                CAN_ALL_FRVar_PAM.B.exDiagRespFromPAM64High32=VexexDiagRespFromPAM64High32;
                CAN_ALL_FRVar_PAM.B.exDiagRespFromPAM64Low32=VexexDiagRespFromPAM64Low32;

                VexexDiagRespFromPAM64High32 = CAN_ALL_FRVar_PAM.B.exDiagRespFromPAM64High32;
                VexexDiagRespFromPAM64Low32= CAN_ALL_FRVar_PAM.B.exDiagRespFromPAM64Low32;

                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+7] =Vu8_PAM_4_PAM_DiagResp_Data7Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+6] =Vu8_PAM_4_PAM_DiagResp_Data6Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+5] =Vu8_PAM_4_PAM_DiagResp_Data5Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+4] =Vu8_PAM_4_PAM_DiagResp_Data4Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+3] =Vu8_PAM_4_PAM_DiagResp_Data3Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+2] =Vu8_PAM_4_PAM_DiagResp_Data2Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+1] =Vu8_PAM_4_PAM_DiagResp_Data1Bit.R;
                CAN_ALL_FRVar_PAM.By[ 8*ALL_PAM_PAM_DiagResp_FR+0] =Vu8_PAM_4_PAM_DiagResp_Data0Bit.R;

                Vu8_PAM_4_PAM_DiagResp_Data7Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 7];
                Vu8_PAM_4_PAM_DiagResp_Data6Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 6];
                Vu8_PAM_4_PAM_DiagResp_Data5Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 5];
                Vu8_PAM_4_PAM_DiagResp_Data4Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 4];
                Vu8_PAM_4_PAM_DiagResp_Data3Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 3];
                Vu8_PAM_4_PAM_DiagResp_Data2Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 2];
                Vu8_PAM_4_PAM_DiagResp_Data1Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 1];
                Vu8_PAM_4_PAM_DiagResp_Data0Bit.R=CAN_ALL_FRVar_PAM.By[8 * ALL_PAM_PAM_DiagResp_FR + 0];


//--2 th CAN 报文初始化子程序------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_PAM_PAM_0x270_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_PAM_PAM_0x271_CH];//Can_NR=2
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_PAM_PAM_0x272_CH];//Can_NR=3
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_PAM_PAM_DiagResp_CH];//Can_NR=4

//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

                CAN1.MB[ALL_PAM_PAM_0x270_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_PAM_PAM_0x270_CH]ID.B.ID_STD= ALL_PAM_PAM_0x270_ID;
                CAN1.MB[ALL_PAM_PAM_0x270_CH].CS.B.IDE = ALL_PAM_PAM_0x270_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_PAM_PAM_0x270_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_PAM_PAM_0x270_CH].CS.B.DLC =ALL_PAM_PAM_0x270_LH; 

//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

                CAN1.MB[ALL_PAM_PAM_0x271_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_PAM_PAM_0x271_CH]ID.B.ID_STD= ALL_PAM_PAM_0x271_ID;
                CAN1.MB[ALL_PAM_PAM_0x271_CH].CS.B.IDE = ALL_PAM_PAM_0x271_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_PAM_PAM_0x271_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_PAM_PAM_0x271_CH].CS.B.DLC =ALL_PAM_PAM_0x271_LH; 

//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

                CAN1.MB[ALL_PAM_PAM_0x272_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_PAM_PAM_0x272_CH]ID.B.ID_STD= ALL_PAM_PAM_0x272_ID;
                CAN1.MB[ALL_PAM_PAM_0x272_CH].CS.B.IDE = ALL_PAM_PAM_0x272_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_PAM_PAM_0x272_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_PAM_PAM_0x272_CH].CS.B.DLC =ALL_PAM_PAM_0x272_LH; 

//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].ID.R= ALL_PAM_PAM_DiagResp_ID;
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].CS.B.IDE = ALL_PAM_PAM_DiagResp_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].CS.B.DLC =ALL_PAM_PAM_DiagResp_LH; 
//--3 th CAN 报文接收中断子程序------------

//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH]  == 0) {
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+0] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[0]; 
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+1] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[1];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+2] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[2];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+3] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[3];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+4] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[4];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+5] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[5];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+6] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[6];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x270_FR+7] = CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[7];
               Error_CAN1.B.ALL_PAM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x270 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x270_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x270_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_PAM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH]  == 0) {
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+0] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[0]; 
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+1] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[1];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+2] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[2];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+3] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[3];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+4] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[4];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+5] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[5];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+6] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[6];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x271_FR+7] = CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[7];
               Error_CAN1.B.ALL_PAM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x271 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x271_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x271_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_PAM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH]  == 0) {
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+0] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[0]; 
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+1] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[1];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+2] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[2];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+3] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[3];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+4] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[4];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+5] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[5];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+6] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[6];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_0x272_FR+7] = CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[7];
               Error_CAN1.B.ALL_PAM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x272 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_PAM_PAM_0x272_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_0x272_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_PAM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH]  == 0) {
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+0] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[0]; 
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+1] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[1];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+2] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[2];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+3] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[3];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+4] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[4];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+5] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[5];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+6] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[6];
                CAN_ALL_FRMes_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+7] = CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[7];
               Error_CAN1.B.ALL_PAM = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_PAM.B.ALL_PAM_PAM_DiagResp = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_PAM_PAM_DiagResp_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_PAM_PAM_DiagResp_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_PAM_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN 报文发送子程序------------                    

//--Can_NR=1----PAM 1 the Data Frame 名称：PAM_0x270  ID：0x624  周期：20ms  位数：8字节PAM-->
                 if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_0x270_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_PAM_PAM_0x270_CH] ;
                if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x270T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[0] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+0];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[1] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+1];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[2] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+2];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[3] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+3];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[4] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+4];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[5] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+5];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[6] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+6];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].DATA.B[7] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x270_FR+7];
                CAN1.MB[ALL_PAM_PAM_0x270_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_PAM_PAM_0x270_Ay] = ALL_PAM_PAM_0x270_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x270T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_0x270_DT ) == 0 ) {


//--Can_NR=2----PAM 2 the Data Frame 名称：PAM_0x271  ID：0x625  周期：100ms  位数：8字节PAM-->
                 if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_0x271_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_PAM_PAM_0x271_CH] ;
                if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x271T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[0] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+0];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[1] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+1];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[2] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+2];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[3] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+3];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[4] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+4];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[5] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+5];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[6] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+6];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].DATA.B[7] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x271_FR+7];
                CAN1.MB[ALL_PAM_PAM_0x271_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_PAM_PAM_0x271_Ay] = ALL_PAM_PAM_0x271_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x271T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_0x271_DT ) == 0 ) {


//--Can_NR=3----PAM 3 the Data Frame 名称：PAM_0x272  ID：0x626  周期：100ms  位数：8字节PAM-->
                 if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_0x272_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_PAM_PAM_0x272_CH] ;
                if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x272T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[0] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+0];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[1] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+1];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[2] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+2];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[3] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+3];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[4] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+4];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[5] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+5];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[6] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+6];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].DATA.B[7] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_0x272_FR+7];
                CAN1.MB[ALL_PAM_PAM_0x272_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_PAM_PAM_0x272_Ay] = ALL_PAM_PAM_0x272_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_0x272T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_0x272_DT ) == 0 ) {


//--Can_NR=4----PAM 4 the Data Frame 名称：PAM_DiagResp  ID：0x1864  周期：0ms  位数：8字节PAM-->
                 if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_DiagResp_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_PAM_PAM_DiagResp_CH] ;
                if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_DiagRespT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[0] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+0];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[1] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+1];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[2] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+2];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[3] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+3];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[4] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+4];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[5] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+5];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[6] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+6];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].DATA.B[7] = CAN_ALL_FRVar_PAM.By[8*ALL_PAM_PAM_DiagResp_FR+7];
                CAN1.MB[ALL_PAM_PAM_DiagResp_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_PAM_PAM_DiagResp_Ay] = ALL_PAM_PAM_DiagResp_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_PAM.B.ALL_PAM_PAM_DiagRespT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_PAM_PAM_DiagResp_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_PAM_H 