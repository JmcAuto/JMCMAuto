/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_vehiclestate_h
#define impl_type_vehiclestate_h
















#include "impl_type_double.h"


struct VehicleState {
    ::Double x;
    
    ::Double y;
    
    ::Double z;
    
    ::Double timestamp;
    
    ::Double roll;
    
    ::Double pitch;
    
    ::Double yaw;
    
    ::Double heading;
    
    ::Double kappa;
    
    ::Double linear_velocity;
    
    ::Double angular_velocity;
    
    ::Double linear_acceleration;
    
    ::Double gear;
    
    ::Double driving_mode;
    
    ::Double pose;
    

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
        fun(z);
        fun(timestamp);
        fun(roll);
        fun(pitch);
        fun(yaw);
        fun(heading);
        fun(kappa);
        fun(linear_velocity);
        fun(angular_velocity);
        fun(linear_acceleration);
        fun(gear);
        fun(driving_mode);
        fun(pose);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(x);
        fun(y);
        fun(z);
        fun(timestamp);
        fun(roll);
        fun(pitch);
        fun(yaw);
        fun(heading);
        fun(kappa);
        fun(linear_velocity);
        fun(angular_velocity);
        fun(linear_acceleration);
        fun(gear);
        fun(driving_mode);
        fun(pose);
    }

    bool operator == (const ::VehicleState& t) const {
        return (x == t.x) && (y == t.y) && (z == t.z) && (timestamp == t.timestamp) && (roll == t.roll) && (pitch == t.pitch) && (yaw == t.yaw) && (heading == t.heading) && (kappa == t.kappa) && (linear_velocity == t.linear_velocity) && (angular_velocity == t.angular_velocity) && (linear_acceleration == t.linear_acceleration) && (gear == t.gear) && (driving_mode == t.driving_mode) && (pose == t.pose);
    }
};


#endif // impl_type_vehiclestate_h
