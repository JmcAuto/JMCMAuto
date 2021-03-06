/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_point2d_h
#define impl_type_point2d_h



#include "impl_type_double.h"


struct Point2D {
    ::Double x;
    
    ::Double y;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(x);
        fun(y);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(x);
        fun(y);
    }

    bool operator == (const ::Point2D& t) const {
        return (x == t.x) && (y == t.y);
    }
};


#endif // impl_type_point2d_h
