#ifndef  _CAN_ALL_SRS_H
#define  _CAN_ALL_SRS_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000350
//848 SRS_CrashOutputSts 1 "Crash" 0 "No crash"
#define  CAN_ALL_SRS_cb1SRS_CrashOutputSts_Crash 1
#define  CAN_ALL_SRS_cb1SRS_CrashOutputSts_No_crash  0 
//848 SRS_SBR_Driver 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Lamp_Off  0 
//848 SRS_SBR_PAMsenger 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Lamp_Off  0 
//848 SRS_SBR_SecondRowLeft 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Lamp_Off  0 
//848 SRS_SBR_SecondRowMid 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Lamp_Off  0 
//848 SRS_SBR_SecondRowRight 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Lamp_Off  0 
//848 SRS_AirBagFailSts 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off"
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_reserved 3
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_lamp_on  2 
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_lamp_flash  1 
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_lamp_off  0 

//CAN有符号变量：该变量是正负整数

//CAN无符号变量：define该变量的physical min-max
#define  CAN_ALL_SRS_u1SRS_CrashOutputSts_min 0
#define  CAN_ALL_SRS_u1SRS_CrashOutputSts_max 0x1
#define  CAN_ALL_SRS_u2SRS_SBR_Driver_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_Driver_max 0x3
#define  CAN_ALL_SRS_u2SRS_SBR_PAMsenger_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_PAMsenger_max 0x3
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_max 0x3
#define  CAN_ALL_SRS_c3Reserve_1_0_2_min 0
#define  CAN_ALL_SRS_c3Reserve_1_0_2_max 0x7
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_max 0x3
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_max 0x3
#define  CAN_ALL_SRS_u2SRS_AirBagFailSts_min 0
#define  CAN_ALL_SRS_u2SRS_AirBagFailSts_max 0x3
#define  CAN_ALL_SRS_c1Reserve_1_9_9_min 0
#define  CAN_ALL_SRS_c1Reserve_1_9_9_max 0x1
#define  CAN_ALL_SRS_u4Rolling_counter_0x350_min 0
#define  CAN_ALL_SRS_u4Rolling_counter_0x350_max 0xF
#define  CAN_ALL_SRS_u8Checksum_0x350_min 0
#define  CAN_ALL_SRS_u8Checksum_0x350_max 0xFF

//CANfactor分子分母定义
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_PAMsenger_factor 1
#define  CAN_ALL_SRS_u4Rolling_counter_0x350_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_Driver_factor 1
#define  CAN_ALL_SRS_u8Checksum_0x350_factor 1
#define  CAN_ALL_SRS_u1SRS_CrashOutputSts_factor 1
#define  CAN_ALL_SRS_u2SRS_AirBagFailSts_factor 1

//#define  报文名称_CH（CAN报文通道号）    报文序号+10；#define  结构体名称_CH（结构体通道号）  报文序号；#define 报文名称_ID （CAN报文ID）  报文CAN ID；#define 报文名称_DT  (CAN报文周期)  报文时间周倜【MS】/10； #define 报文名称_TorR(CAN报文发送或接收)    发送1，接收0

//--Can_NR=1----SRS 1 th Data Frame 名称：SRS_0x350  ID：0X848  周期：100ms  DLC：8字节SRS-->GW
#define ALL_SRS_SRS_0x350_CH 1
#define ALL_SRS_SRS_0x350_FR 1
#define ALL_SRS_SRS_0x350_ID 0XFFFFFFFF80000350
#define ALL_SRS_SRS_0x350_DT 10 //xxMS/10
#define ALL_SRS_SRS_0x350_TorR 0
#define ALL_SRS_SRS_0x350_Ay 0
#define ALL_SRS_SRS_0x350_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_SRS_SRS_0x350_LH 8//LENGTH <=8


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
//-----------------------1 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[16];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[8];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[2];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->
  vuint32_t  CAN_ALL_SRS_uSRS_CrashOutputSts:1;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_SRS_u1SRS_SBR_Driver:2;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_PAMsenger:2;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c3Reserve_1_0_2:3;//0.2-->0.0
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft:2;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid:2;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight:2;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t c1Reserve_1_9_9:1;//1.1-->1.1
  vuint32_t  CAN_ALL_SRS_u2SRS_AirBagFailSts:2;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_SRS_u2Rolling_counter_0x350:4;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint32_t  CAN_ALL_SRS_u4Checksum_0x350:8;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 
    } B;
} CAN_ALL_FRAMES_SRS_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[16];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[8];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[2];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->
  vuint64_t  CAN_ALL_SRS_uSRS_CrashOutputSts:1;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_SRS_u1SRS_SBR_Driver:2;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_PAMsenger:2;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c3Reserve_1_0_2:3;//0.2-->0.0
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft:2;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid:2;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight:2;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t c1Reserve_1_9_9:1;//1.1-->1.1
  vuint64_t  CAN_ALL_SRS_u2SRS_AirBagFailSts:2;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_SRS_u2Rolling_counter_0x350:4;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
  vuint64_t  CAN_ALL_SRS_u4Checksum_0x350:8;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

    } B;
} CAN_ALL_FRAMES_SRS_tag;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRAMES_SRS;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRMes_SRS;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRVar_SRS;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRVarOld_SRS;

//--1 th CAN 报文数据处理子程序------------
                CAN1_noReceivedMessageTime[ALL_SRS_SRS_0x350_CH]++;//Can_NR=1
typedef union {
    vuint8_t R;
    struct { //ALL_SRS 接收报文故障
        vuint8_t ALL_SRS_SRS_0x350: 1; //Can_NR=1
    } B;
} Error_CAN1_ALL_SRS_tag ;
extern Error_CAN1_ALL_SRS_tag Error_CAN1_ALL_SRS ;
typedef union {
    vuint8_t R;
    struct { //ALL_SRS 接收报文故障
        vuint8_t ALL_SRS_SRS_0x350T: 1; //Can_NR=1
    } B;
}  D00CTR_def_CAN1_ALL_SRS_tag ;
extern  D00CTR_def_CAN1_ALL_SRS_tag D00CTR_def_CAN1_ALL_SRS ;


//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

 vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================================================(分隔行)



//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

 extern  vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

 vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//=======================64位元素变量==============================(分隔行)



//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

 extern  vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
 extern  vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 


//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

typedef union {
    vuint8_t R;
    struct { //64位元素位控变量
        vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
        vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
        vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
         //vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

     } B;
}  Vu8_SRS_1_SRS_0x350_DataBit_tag;
extern Vu8_SRS_1_SRS_0x350_DataBit_tag Vu8_SRS_1_SRS_0x350_DataBit;

//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

                if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  = 0 ; //报文已处理
                CAN_ALL_FRVar_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+0] = CAN_ALL_FRMes_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+0]  ; 
                CAN_ALL_FRVar_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+1] = CAN_ALL_FRMes_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  = 0 ; //报文已处理
                CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_SRS = 1 ;  //部件CAN接收无信号
                Error_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350 = 1 ;  //部件具体报文CAN接收无信号
                CAN_ALL_FRVar_SRS.R[2*ALL_SRS_SRS_0x350_FR+0]=CAN_ALL_FRAMES_SRS.R[2*ALL_SRS_SRS_0x350_FR+0];
                CAN_ALL_FRVar_SRS.R[2*ALL_SRS_SRS_0x350_FR+1]=CAN_ALL_FRAMES_SRS.R[2*ALL_SRS_SRS_0x350_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 1 ) {


                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_uSRS_CrashOutputSts= CAN_ALL_SRS_uSRS_CrashOutputSts_min;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u1SRS_SBR_Driver= CAN_ALL_SRS_u1SRS_SBR_Driver_min;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_PAMsenger= CAN_ALL_SRS_u2SRS_SBR_PAMsenger_min;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B.c3Reserve_1_0_2= CAN_ALL_SRS_c3Reserve_1_0_2_min;//0.2-->0.0
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft= CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_min;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowMid= CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_min;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowRight= CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_min;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B.c1Reserve_1_9_9= CAN_ALL_SRS_c1Reserve_1_9_9_min;//1.1-->1.1
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_AirBagFailSts= CAN_ALL_SRS_u2SRS_AirBagFailSts_min;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2Rolling_counter_0x350= CAN_ALL_SRS_u2Rolling_counter_0x350_min;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u4Checksum_0x350= CAN_ALL_SRS_u4Checksum_0x350_min;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_uSRS_CrashOutputSts=VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u1SRS_SBR_Driver=VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_PAMsenger=VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B.c3Reserve_1_0_2=Vc3Reserve_1_0_2;//0.2-->0.0
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft=VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowMid=VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowRight=VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B.c1Reserve_1_9_9=Vc1Reserve_1_9_9;//1.1-->1.1
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_AirBagFailSts=VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2Rolling_counter_0x350=VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u4Checksum_0x350=VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                VCAN_ALL_SRS_uSRS_CrashOutputSts=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" 名称：SRS_CrashOutputSts 位数：1bit, logical min-max：0~1 physical min-max：0x000~0x1 精度：1 偏移量：0 单位： 
                VCAN_ALL_SRS_u1SRS_SBR_Driver=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_Driver 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_SRS_u2SRS_SBR_PAMsenger=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_PAMsenger 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc3Reserve_1_0_2=CAN_ALL_FRVar_SRS.B.c3Reserve_1_0_2;//0.2-->0.0
                VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowLeft 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowMid 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" 名称：SRS_SBR_SecondRowRight 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                Vc1Reserve_1_9_9=CAN_ALL_FRVar_SRS.B.c1Reserve_1_9_9;//1.1-->1.1
                VCAN_ALL_SRS_u2SRS_AirBagFailSts=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" 名称：SRS_AirBagFailSts 位数：2bit, logical min-max：0~3 physical min-max：0x000~0x3 精度：1 偏移量：0 单位： 
                VCAN_ALL_SRS_u2Rolling_counter_0x350=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 名称：Rolling_counter_0x350 位数：4bit, logical min-max：0~15 physical min-max：0x000~0xF 精度：1 偏移量：0 单位： 
                VCAN_ALL_SRS_u4Checksum_0x350=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 名称：Checksum_0x350 位数：8bit, logical min-max：0~255 physical min-max：0x000~0xFF 精度：1 偏移量：0 单位： 

                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+7] =Vu8_SRS_1_SRS_0x350_Data7Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+6] =Vu8_SRS_1_SRS_0x350_Data6Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+5] =Vu8_SRS_1_SRS_0x350_Data5Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+4] =Vu8_SRS_1_SRS_0x350_Data4Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+3] =Vu8_SRS_1_SRS_0x350_Data3Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+2] =Vu8_SRS_1_SRS_0x350_Data2Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+1] =Vu8_SRS_1_SRS_0x350_Data1Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+0] =Vu8_SRS_1_SRS_0x350_Data0Bit.R;

                Vu8_SRS_1_SRS_0x350_Data7Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 7];
                Vu8_SRS_1_SRS_0x350_Data6Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 6];
                Vu8_SRS_1_SRS_0x350_Data5Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 5];
                Vu8_SRS_1_SRS_0x350_Data4Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 4];
                Vu8_SRS_1_SRS_0x350_Data3Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 3];
                Vu8_SRS_1_SRS_0x350_Data2Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 2];
                Vu8_SRS_1_SRS_0x350_Data1Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 1];
                Vu8_SRS_1_SRS_0x350_Data0Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 0];


//--2 th CAN 报文初始化子程序------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_SRS_SRS_0x350_CH];//Can_NR=1

//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_SRS_SRS_0x350_CH].ID.R= ALL_SRS_SRS_0x350_ID;
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.IDE = ALL_SRS_SRS_0x350_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.DLC =ALL_SRS_SRS_0x350_LH; 
//--3 th CAN 报文接收中断子程序------------

//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 0) {
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+0] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[0]; 
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+1] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[1];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+2] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[2];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+3] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[3];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+4] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[4];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+5] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[5];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+6] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[6];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+7] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[7];
               Error_CAN1.B.ALL_SRS = 0 ;  //部件CAN接收信号
               Error_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350 = 0 ;  //部件具体报文CAN接收信号
                CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_SRS_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN 报文发送子程序------------                    

//--Can_NR=1----SRS 1 the Data Frame 名称：SRS_0x350  ID：0x848  周期：100ms  位数：8字节SRS-->
                 if ( ( Pit0Ctr_10MS % ALL_SRS_SRS_0x350_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_SRS_SRS_0x350_CH] ;
                if ( D00CTR_def_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[0] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+0];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[1] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+1];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[2] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+2];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[3] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+3];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[4] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+4];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[5] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+5];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[6] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+6];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[7] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+7];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_SRS_SRS_0x350_Ay] = ALL_SRS_SRS_0x350_CH + 0x80 ; //CAN channel number + 0x80表示发射有效 
                 } //if ( D00CTR_def_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_SRS_SRS_0x350_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_SRS_H 