/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_shift_cmd_65_h
#define impl_type_shift_cmd_65_h


#include "impl_type_shift_cmdtype.h"


struct Shift_cmd_65 {
    ::Shift_cmdType shift_cmd;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(shift_cmd);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(shift_cmd);
    }

    bool operator == (const ::Shift_cmd_65& t) const {
        return (shift_cmd == t.shift_cmd);
    }
};


#endif // impl_type_shift_cmd_65_h
