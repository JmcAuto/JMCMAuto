/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_vehicleconfig_h
#define impl_type_vehicleconfig_h




#include "impl_type_extrinsics.h"
#include "impl_type_header.h"
#include "impl_type_vehicleparam.h"


struct VehicleConfig {
    ::Header header;
    
    ::VehicleParam vehicle_param;
    
    ::Extrinsics extrinsics;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(header);
        fun(vehicle_param);
        fun(extrinsics);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(header);
        fun(vehicle_param);
        fun(extrinsics);
    }

    bool operator == (const ::VehicleConfig& t) const {
        return (header == t.header) && (vehicle_param == t.vehicle_param) && (extrinsics == t.extrinsics);
    }
};


#endif // impl_type_vehicleconfig_h
