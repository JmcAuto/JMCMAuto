/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gw_ems_whltq_0x107_107_h
#define impl_type_gw_ems_whltq_0x107_107_h










#include "impl_type_double.h"
#include "impl_type_int32.h"
#include "impl_type_ems_kickdowntype.h"
#include "impl_type_abs_absflgflttype.h"
#include "impl_type_ems_brkpedalstasustype.h"
#include "impl_type_ems_accpedalratioerrortype.h"


struct Gw_ems_whltq_0x107_107 {
    ::Int32 minindicatedtorqwhl;
    
    ::Double ems_accrawpedalratio;
    
    ::Double ems_accpedalratio;
    
    ::Int32 dcm_ems_rollingcounter_0x107;
    
    ::Abs_absflgfltType dcm_ems_checksum_0x107;
    
    ::Ems_brkpedalstasusType ems_brkpedalstasus;
    
    ::Ems_accpedalratioerrorType ems_accpedalratioerror;
    
    ::Int32 maxindicatedtorqwhl;
    
    ::Ems_kickdownType ems_kickdown;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(minindicatedtorqwhl);
        fun(ems_accrawpedalratio);
        fun(ems_accpedalratio);
        fun(dcm_ems_rollingcounter_0x107);
        fun(dcm_ems_checksum_0x107);
        fun(ems_brkpedalstasus);
        fun(ems_accpedalratioerror);
        fun(maxindicatedtorqwhl);
        fun(ems_kickdown);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(minindicatedtorqwhl);
        fun(ems_accrawpedalratio);
        fun(ems_accpedalratio);
        fun(dcm_ems_rollingcounter_0x107);
        fun(dcm_ems_checksum_0x107);
        fun(ems_brkpedalstasus);
        fun(ems_accpedalratioerror);
        fun(maxindicatedtorqwhl);
        fun(ems_kickdown);
    }

    bool operator == (const ::Gw_ems_whltq_0x107_107& t) const {
        return (minindicatedtorqwhl == t.minindicatedtorqwhl) && (ems_accrawpedalratio == t.ems_accrawpedalratio) && (ems_accpedalratio == t.ems_accpedalratio) && (dcm_ems_rollingcounter_0x107 == t.dcm_ems_rollingcounter_0x107) && (dcm_ems_checksum_0x107 == t.dcm_ems_checksum_0x107) && (ems_brkpedalstasus == t.ems_brkpedalstasus) && (ems_accpedalratioerror == t.ems_accpedalratioerror) && (maxindicatedtorqwhl == t.maxindicatedtorqwhl) && (ems_kickdown == t.ems_kickdown);
    }
};


#endif // impl_type_gw_ems_whltq_0x107_107_h
