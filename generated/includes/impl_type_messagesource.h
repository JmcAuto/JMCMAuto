/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_messagesource_h
#define impl_type_messagesource_h

#include "impl_type_uint8.h"

enum class MessageSource : UInt8
{
    UNKNOWN = 1,
    CANBUS = 2,
    CONTROL = 3,
    DECISION = 4,
    LOCALIZATION = 5,
    PLANNING = 6,
    PREDICTION = 7,
    SIMULATOR = 8,
    HWSYS = 9,
    ROUTING = 10,
    MONITOR = 11,
    HMI = 12,
    RELATIVE_MAP = 13,
    GNSS = 14,
    REMOTECONTROL = 15
};

#endif // impl_type_messagesource_h