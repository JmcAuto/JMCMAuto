/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_advice_h
#define impl_type_advice_h

#include "impl_type_uint16.h"

enum class Advice : UInt16
{
    UNKNOW = 0,
    DISALLOW_ENGAGE = 1,
    READY_TO_ENGAGE = 2,
    KEEP_ENGAGE = 3,
    PREPARE_DISENGAGE = 4
};

#endif // impl_type_advice_h