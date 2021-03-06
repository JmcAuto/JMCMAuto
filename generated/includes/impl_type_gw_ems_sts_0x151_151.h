/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gw_ems_sts_0x151_151_h
#define impl_type_gw_ems_sts_0x151_151_h











#include "impl_type_double.h"
#include "impl_type_int32.h"
#include "impl_type_ems_cruisecontrolstatustype.h"
#include "impl_type_ems_enginestopstartstatustype.h"
#include "impl_type_ems_atsdrivingmodestatustype.h"
#include "impl_type_ems_drivingmodechange_fault_flagtype.h"


struct Gw_ems_sts_0x151_151 {
    ::Int32 ems_engbarometricpressure;
    
    ::Double ms_vacuumpressure;
    
    ::Double ems_targcruisespeed;
    
    ::Ems_atsdrivingmodestatusType ems_atsdrivingmodestatus;
    
    ::Ems_enginestopstartstatusType ems_enginestopstartstatus;
    
    ::Int32 dcm_ems_rollingcounter_0x151;
    
    ::Ems_cruisecontrolstatusType ems_cruisecontrolstatus;
    
    ::Ems_drivingmodechange_fault_flagType ems_drivingmodechange_fault_flag;
    
    ::Int32 dcm_ems_checksum_0x151;
    
    ::Int32 ems_engofftime;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(ems_engbarometricpressure);
        fun(ms_vacuumpressure);
        fun(ems_targcruisespeed);
        fun(ems_atsdrivingmodestatus);
        fun(ems_enginestopstartstatus);
        fun(dcm_ems_rollingcounter_0x151);
        fun(ems_cruisecontrolstatus);
        fun(ems_drivingmodechange_fault_flag);
        fun(dcm_ems_checksum_0x151);
        fun(ems_engofftime);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(ems_engbarometricpressure);
        fun(ms_vacuumpressure);
        fun(ems_targcruisespeed);
        fun(ems_atsdrivingmodestatus);
        fun(ems_enginestopstartstatus);
        fun(dcm_ems_rollingcounter_0x151);
        fun(ems_cruisecontrolstatus);
        fun(ems_drivingmodechange_fault_flag);
        fun(dcm_ems_checksum_0x151);
        fun(ems_engofftime);
    }

    bool operator == (const ::Gw_ems_sts_0x151_151& t) const {
        return (ems_engbarometricpressure == t.ems_engbarometricpressure) && (ms_vacuumpressure == t.ms_vacuumpressure) && (ems_targcruisespeed == t.ems_targcruisespeed) && (ems_atsdrivingmodestatus == t.ems_atsdrivingmodestatus) && (ems_enginestopstartstatus == t.ems_enginestopstartstatus) && (dcm_ems_rollingcounter_0x151 == t.dcm_ems_rollingcounter_0x151) && (ems_cruisecontrolstatus == t.ems_cruisecontrolstatus) && (ems_drivingmodechange_fault_flag == t.ems_drivingmodechange_fault_flag) && (dcm_ems_checksum_0x151 == t.dcm_ems_checksum_0x151) && (ems_engofftime == t.ems_engofftime);
    }
};


#endif // impl_type_gw_ems_sts_0x151_151_h
