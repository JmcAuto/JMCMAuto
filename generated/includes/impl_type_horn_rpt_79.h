/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_horn_rpt_79_h
#define impl_type_horn_rpt_79_h



#include "impl_type_float.h"


struct Horn_rpt_79 {
    
    ::Float commanded_value;
    
    ::Float manual_input;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(commanded_value);
        fun(manual_input);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(commanded_value);
        fun(manual_input);
    }

    bool operator == (const ::Horn_rpt_79& t) const {
        return (commanded_value == t.commanded_value) && (manual_input == t.manual_input);
    }
};


#endif // impl_type_horn_rpt_79_h