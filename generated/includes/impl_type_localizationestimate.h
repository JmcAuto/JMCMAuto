/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_localizationestimate_h
#define impl_type_localizationestimate_h

#pragma pack(1)




#include "impl_type_double.h"
#include "impl_type_header.h"
#include "impl_type_trajectorypoint.h"
#include "impl_type_uncertainty.h"
#include "impl_type_pose.h"


struct LocalizationEstimate {
    ::Header header;
    
    ::Pose pose;
    
    ::Uncertainty uncertainty;
    
    ::Double measurement_time;
    
    ::TrajectoryPoint trajectory_point;
    

    static bool IsPlane()
    {
        return false;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(header);
        fun(pose);
        fun(uncertainty);
        fun(measurement_time);
        fun(trajectory_point);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(header);
        fun(pose);
        fun(uncertainty);
        fun(measurement_time);
        fun(trajectory_point);
    }

    bool operator == (const ::LocalizationEstimate& t) const {
        return (header == t.header) && (pose == t.pose) && (uncertainty == t.uncertainty) && (measurement_time == t.measurement_time) && (trajectory_point == t.trajectory_point);
    }
};

#pragma pack()
#endif // impl_type_localizationestimate_h
