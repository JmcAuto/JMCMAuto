/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_sod_0x275_275_h
#define impl_type_sod_0x275_275_h
















#include "impl_type_tpms_lf_pressure_warningtype.h"
#include "impl_type_tire_positiontype.h"
#include "impl_type_tpms_system_statustype.h"
#include "impl_type_tpms_temperature_warningtype.h"
#include "impl_type_tpms_rf_pressure_warningtype.h"
#include "impl_type_tpms_lamp_statustype.h"
#include "impl_type_tpms_resrvedtype.h"
#include "impl_type_double.h"
#include "impl_type_tpms_lr_pressure_warningtype.h"
#include "impl_type_tpms_al_statetype.h"
#include "impl_type_int32.h"
#include "impl_type_tpms_rr_pressure_warningtype.h"


struct Sod_0x275_275 {
    ::Double tpms_rf_pressure;
    
    ::Double tpms_rr_pressure;
    
    ::Double tpms_lr_pressure;
    
    ::Int32 tpms_tire_temperature;
    
    ::Tpms_lf_pressure_warningType tpms_lf_pressure_warning;
    
    ::Tpms_rf_pressure_warningType tpms_rf_pressure_warning;
    
    ::Tpms_system_statusType tpms_system_status;
    
    ::Tpms_rr_pressure_warningType tpms_rr_pressure_warning;
    
    ::Tpms_lr_pressure_warningType tpms_lr_pressure_warning;
    
    ::Tpms_temperature_warningType tpms_temperature_warning;
    
    ::Tpms_resrvedType tpms_resrved;
    
    ::Tire_positionType tire_position;
    
    ::Tpms_lamp_statusType tpms_lamp_status;
    
    ::Tpms_al_stateType tpms_al_state;
    
    ::Double tpms_lf_pressure;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(tpms_rf_pressure);
        fun(tpms_rr_pressure);
        fun(tpms_lr_pressure);
        fun(tpms_tire_temperature);
        fun(tpms_lf_pressure_warning);
        fun(tpms_rf_pressure_warning);
        fun(tpms_system_status);
        fun(tpms_rr_pressure_warning);
        fun(tpms_lr_pressure_warning);
        fun(tpms_temperature_warning);
        fun(tpms_resrved);
        fun(tire_position);
        fun(tpms_lamp_status);
        fun(tpms_al_state);
        fun(tpms_lf_pressure);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(tpms_rf_pressure);
        fun(tpms_rr_pressure);
        fun(tpms_lr_pressure);
        fun(tpms_tire_temperature);
        fun(tpms_lf_pressure_warning);
        fun(tpms_rf_pressure_warning);
        fun(tpms_system_status);
        fun(tpms_rr_pressure_warning);
        fun(tpms_lr_pressure_warning);
        fun(tpms_temperature_warning);
        fun(tpms_resrved);
        fun(tire_position);
        fun(tpms_lamp_status);
        fun(tpms_al_state);
        fun(tpms_lf_pressure);
    }

    bool operator == (const ::Sod_0x275_275& t) const {
        return (tpms_rf_pressure == t.tpms_rf_pressure) && (tpms_rr_pressure == t.tpms_rr_pressure) && (tpms_lr_pressure == t.tpms_lr_pressure) && (tpms_tire_temperature == t.tpms_tire_temperature) && (tpms_lf_pressure_warning == t.tpms_lf_pressure_warning) && (tpms_rf_pressure_warning == t.tpms_rf_pressure_warning) && (tpms_system_status == t.tpms_system_status) && (tpms_rr_pressure_warning == t.tpms_rr_pressure_warning) && (tpms_lr_pressure_warning == t.tpms_lr_pressure_warning) && (tpms_temperature_warning == t.tpms_temperature_warning) && (tpms_resrved == t.tpms_resrved) && (tire_position == t.tire_position) && (tpms_lamp_status == t.tpms_lamp_status) && (tpms_al_state == t.tpms_al_state) && (tpms_lf_pressure == t.tpms_lf_pressure);
    }
};


#endif // impl_type_sod_0x275_275_h
