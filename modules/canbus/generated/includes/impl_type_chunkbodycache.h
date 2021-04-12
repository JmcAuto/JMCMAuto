/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_chunkbodycache_h
#define impl_type_chunkbodycache_h


#include "impl_type_uint64.h"


struct ChunkBodyCache {
    ::UInt64 message_number;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(message_number);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(message_number);
    }

    bool operator == (const ::ChunkBodyCache& t) const {
        return (message_number == t.message_number);
    }
};


#endif // impl_type_chunkbodycache_h