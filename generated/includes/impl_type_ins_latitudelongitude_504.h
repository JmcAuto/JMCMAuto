/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_ins_latitudelongitude_504_h
#define impl_type_ins_latitudelongitude_504_h



#include "impl_type_double.h"


struct Ins_latitudelongitude_504 {
    ::Double ins__latitude;
    
    ::Double ins_longitude;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(ins__latitude);
        fun(ins_longitude);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(ins__latitude);
        fun(ins_longitude);
    }

    bool operator == (const ::Ins_latitudelongitude_504& t) const {
        return (ins__latitude == t.ins__latitude) && (ins_longitude == t.ins_longitude);
    }
};


#endif // impl_type_ins_latitudelongitude_504_h
