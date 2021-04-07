/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_header_h
#define impl_type_header_h








#include "impl_type_uint64.h"
#include "impl_type_double.h"
#include "impl_type_uint32.h"
#include "impl_type_statuspb.h"


struct Header {
    ::Double timestamp_sec;
    
    ::UInt32 sequence_num;
    
    ::UInt64 lidar_timestamp;
    
    ::UInt64 camera_timestamp;
    
    ::UInt64 radar_timestamp;
    
    ::UInt32 version;
    
    ::StatusPb status;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(timestamp_sec);
        fun(sequence_num);
        fun(lidar_timestamp);
        fun(camera_timestamp);
        fun(radar_timestamp);
        fun(version);
        fun(status);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(timestamp_sec);
        fun(sequence_num);
        fun(lidar_timestamp);
        fun(camera_timestamp);
        fun(radar_timestamp);
        fun(version);
        fun(status);
    }

    bool operator == (const ::Header& t) const {
        return (timestamp_sec == t.timestamp_sec) && (sequence_num == t.sequence_num) && (lidar_timestamp == t.lidar_timestamp) && (camera_timestamp == t.camera_timestamp) && (radar_timestamp == t.radar_timestamp) && (version == t.version) && (status == t.status);
    }
};


#endif // impl_type_header_h
