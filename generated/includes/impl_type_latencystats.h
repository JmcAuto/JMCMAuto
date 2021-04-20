/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_latencystats_h
#define impl_type_latencystats_h




#include "impl_type_double.h"
#include "impl_type_bool.h"


struct LatencyStats {
    ::Double total_time_ms;
    
    ::Double controller_time_ms;
    
    ::Bool total_time_exceeded;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(total_time_ms);
        fun(controller_time_ms);
        fun(total_time_exceeded);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(total_time_ms);
        fun(controller_time_ms);
        fun(total_time_exceeded);
    }

    bool operator == (const ::LatencyStats& t) const {
        return (total_time_ms == t.total_time_ms) && (controller_time_ms == t.controller_time_ms) && (total_time_exceeded == t.total_time_exceeded);
    }
};


#endif // impl_type_latencystats_h
