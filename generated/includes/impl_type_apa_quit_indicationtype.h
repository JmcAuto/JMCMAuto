/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_apa_quit_indicationtype_h
#define impl_type_apa_quit_indicationtype_h

#include "impl_type_uint32.h"

enum class Apa_quit_indicationType : UInt32
{
    APA_QUIT_INDICATION_NO_REQUEST = 0,
    APA_QUIT_INDICATION_REQ_QUIT_EXTERNAL_ECU_FAILURE = 1,
    APA_QUIT_INDICATION_REQ_QUIT_APA_FAILURE = 2,
    APA_QUIT_INDICATION_REQ_QUIT_SPEED_HIGH = 3,
    APA_QUIT_INDICATION_REQ_QUIT_TIMING_OVERFLOW = 4,
    APA_QUIT_INDICATION_REQ_QUIT_MOVE_TIMES_OVERFLOW = 5,
    APA_QUIT_INDICATION_REQ_QUIT_RECOVER_INT_TIMS_OVERFLOW = 6,
    APA_QUIT_INDICATION_REQ_QUIT_GAS_PEDAL = 7,
    APA_QUIT_INDICATION_REQ_QUIT_GEAR_INTERVENTION = 8,
    APA_QUIT_INDICATION_REQ_QUIT_EXTERNAL_ECU_ACTVIE = 9,
    APA_QUIT_INDICATION_REQ_QUIT_TIMING_OAPA_QUIT_INDICATION_REQ_QUIT_ACCVERFLOW = 10,
    APA_QUIT_INDICATION_REQ_QUIT_TRAJECTORY = 11,
    APA_QUIT_INDICATION_REQ_QUIT_SPACE_LIMIT = 12,
    APA_QUIT_INDICATION_REQ_QUIT_NO_OBJECT_IN_FRONT = 13,
    APA_QUIT_INDICATION_REQ_QUIT_SEAT_BELT_UNBUCKLE = 14,
    APA_QUIT_INDICATION_REQ_QUIT_DRIVER_DOOR = 15,
    APA_QUIT_INDICATION_REQ_QUIT_EPB_APPLY = 16,
    APA_QUIT_INDICATION_REQ_QUIT_VEHICLE_BLOCK = 17,
    APA_QUIT_INDICATION_REQ_QUIT_GEAR_INTERRUPT = 18,
    APA_QUIT_INDICATION_REQ_QUIT_STEERING_WHEEL_HANDS_ON = 19,
    APA_QUIT_INDICATION_REQ_QUIT_ABOVE_SLOPE_LIMT = 20,
    APA_QUIT_INDICATION_RESERVED = 21
};

#endif // impl_type_apa_quit_indicationtype_h