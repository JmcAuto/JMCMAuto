/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_speedpoint_h
#define impl_type_speedpoint_h






#include "impl_type_double.h"


struct SpeedPoint {
    ::Double s;
    
    ::Double t;
    
    ::Double v;
    
    ::Double a;
    
    ::Double da;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(s);
        fun(t);
        fun(v);
        fun(a);
        fun(da);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(s);
        fun(t);
        fun(v);
        fun(a);
        fun(da);
    }

    bool operator == (const ::SpeedPoint& t) const {
        return (s == t.s) && (t == t.t) && (v == t.v) && (a == t.a) && (da == t.da);
    }
};


#endif // impl_type_speedpoint_h
