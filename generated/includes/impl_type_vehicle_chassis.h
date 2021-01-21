/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_vehicle_chassis_h
#define impl_type_vehicle_chassis_h












#include "impl_type_gearposition.h"
#include "impl_type_bool.h"
#include "impl_type_float.h"
#include "impl_type_drivingmode.h"
#include "impl_type_chassiserrorcode.h"
#include "impl_type_comheader.h"


struct Vehicle_Chassis {
    ::Float SOC;
    
    ::Float speed_mps;
    
    ::Float ACC_Speed;
    
    ::Float throttle_percentage;
    
    ::Float brake_percentage;
    
    ::Float steering_percentage;
    
    ::ComHeader header;
    
    ::Bool engine_started;
    
    ::DrivingMode driving_mode;
    
    ::ChassisErrorCode error_code;
    
    ::GearPosition gear_location;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(SOC);
        fun(speed_mps);
        fun(ACC_Speed);
        fun(throttle_percentage);
        fun(brake_percentage);
        fun(steering_percentage);
        fun(header);
        fun(engine_started);
        fun(driving_mode);
        fun(error_code);
        fun(gear_location);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(SOC);
        fun(speed_mps);
        fun(ACC_Speed);
        fun(throttle_percentage);
        fun(brake_percentage);
        fun(steering_percentage);
        fun(header);
        fun(engine_started);
        fun(driving_mode);
        fun(error_code);
        fun(gear_location);
    }

    bool operator == (const ::Vehicle_Chassis& t) const {
        return (SOC == t.SOC) && (speed_mps == t.speed_mps) && (ACC_Speed == t.ACC_Speed) && (throttle_percentage == t.throttle_percentage) && (brake_percentage == t.brake_percentage) && (steering_percentage == t.steering_percentage) && (header == t.header) && (engine_started == t.engine_started) && (driving_mode == t.driving_mode) && (error_code == t.error_code) && (gear_location == t.gear_location);
    }
};


#endif // impl_type_vehicle_chassis_h
