/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_comheader_h
#define impl_type_comheader_h




#include "impl_type_uint32.h"
#include "impl_type_string.h"
#include "impl_type_time.h"


struct ComHeader {
    ::UInt32 seq;
    
    ::Time stamp;
    
    ::String frameId;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(seq);
        fun(stamp);
        fun(frameId);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(seq);
        fun(stamp);
        fun(frameId);
    }

    bool operator == (const ::ComHeader& t) const {
        return (seq == t.seq) && (stamp == t.stamp) && (frameId == t.frameId);
    }
};


#endif // impl_type_comheader_h
