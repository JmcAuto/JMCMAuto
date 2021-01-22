/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_esp_advanced_0x234_234_h
#define impl_type_esp_advanced_0x234_234_h























#include "impl_type_esp_aebdecactivetype.h"
#include "impl_type_esp_vdcactivetype.h"
#include "impl_type_esp_ebdactivetype.h"
#include "impl_type_esp_prefillavailabletype.h"
#include "impl_type_esp_dtcactivetype.h"
#include "impl_type_esp_cdderrortype.h"
#include "impl_type_esp_vlcerrortype.h"
#include "impl_type_esp_brkfrictqtotatwhlvaildtype.h"
#include "impl_type_esp_abaavailabletype.h"
#include "impl_type_int32.h"
#include "impl_type_esp_prefillactivetype.h"
#include "impl_type_esp_awbactivetype.h"
#include "impl_type_esp_nobrakeforcetype.h"
#include "impl_type_esp_abaactivetype.h"
#include "impl_type_esp_cdd_apactivetype.h"
#include "impl_type_esp_ecdtempofftype.h"
#include "impl_type_esp_aebdecavailabletype.h"
#include "impl_type_esp_cddactivetype.h"


struct Esp_advanced_0x234_234 {
    ::Esp_vdcactiveType esp_vdcactive;
    
    ::Esp_ebdactiveType esp_ebdactive;
    
    ::Esp_ecdtempoffType esp_ecdtempoff;
    
    ::Esp_nobrakeforceType esp_nobrakeforce;
    
    ::Esp_brkfrictqtotatwhlvaildType esp_brkfrictqtotatwhlvaild;
    
    ::Esp_aebdecavailableType esp_aebdecavailable;
    
    ::Esp_aebdecactiveType esp_aebdecactive;
    
    ::Esp_prefillavailableType esp_prefillavailable;
    
    ::Esp_prefillactiveType esp_prefillactive;
    
    ::Esp_abaavailableType esp_abaavailable;
    
    ::Esp_abaactiveType esp_abaactive;
    
    ::Esp_cddactiveType esp_cddavailable;
    
    ::Esp_dtcactiveType esp_dtcactive;
    
    ::Esp_awbactiveType esp_awbavailable;
    
    ::Esp_awbactiveType esp_awbactive;
    
    ::Int32 esp_brkfrictqtotatwhl;
    
    ::Esp_vlcerrorType esp_vlcerror;
    
    ::Esp_cdderrorType esp_cdderror;
    
    ::Int32 rolling_counter_0x234;
    
    ::Int32 checksum_0x234;
    
    ::Esp_cddactiveType esp_cddactive;
    
    ::Esp_cdd_apactiveType esp_cdd_apactive;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(esp_vdcactive);
        fun(esp_ebdactive);
        fun(esp_ecdtempoff);
        fun(esp_nobrakeforce);
        fun(esp_brkfrictqtotatwhlvaild);
        fun(esp_aebdecavailable);
        fun(esp_aebdecactive);
        fun(esp_prefillavailable);
        fun(esp_prefillactive);
        fun(esp_abaavailable);
        fun(esp_abaactive);
        fun(esp_cddavailable);
        fun(esp_dtcactive);
        fun(esp_awbavailable);
        fun(esp_awbactive);
        fun(esp_brkfrictqtotatwhl);
        fun(esp_vlcerror);
        fun(esp_cdderror);
        fun(rolling_counter_0x234);
        fun(checksum_0x234);
        fun(esp_cddactive);
        fun(esp_cdd_apactive);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(esp_vdcactive);
        fun(esp_ebdactive);
        fun(esp_ecdtempoff);
        fun(esp_nobrakeforce);
        fun(esp_brkfrictqtotatwhlvaild);
        fun(esp_aebdecavailable);
        fun(esp_aebdecactive);
        fun(esp_prefillavailable);
        fun(esp_prefillactive);
        fun(esp_abaavailable);
        fun(esp_abaactive);
        fun(esp_cddavailable);
        fun(esp_dtcactive);
        fun(esp_awbavailable);
        fun(esp_awbactive);
        fun(esp_brkfrictqtotatwhl);
        fun(esp_vlcerror);
        fun(esp_cdderror);
        fun(rolling_counter_0x234);
        fun(checksum_0x234);
        fun(esp_cddactive);
        fun(esp_cdd_apactive);
    }

    bool operator == (const ::Esp_advanced_0x234_234& t) const {
        return (esp_vdcactive == t.esp_vdcactive) && (esp_ebdactive == t.esp_ebdactive) && (esp_ecdtempoff == t.esp_ecdtempoff) && (esp_nobrakeforce == t.esp_nobrakeforce) && (esp_brkfrictqtotatwhlvaild == t.esp_brkfrictqtotatwhlvaild) && (esp_aebdecavailable == t.esp_aebdecavailable) && (esp_aebdecactive == t.esp_aebdecactive) && (esp_prefillavailable == t.esp_prefillavailable) && (esp_prefillactive == t.esp_prefillactive) && (esp_abaavailable == t.esp_abaavailable) && (esp_abaactive == t.esp_abaactive) && (esp_cddavailable == t.esp_cddavailable) && (esp_dtcactive == t.esp_dtcactive) && (esp_awbavailable == t.esp_awbavailable) && (esp_awbactive == t.esp_awbactive) && (esp_brkfrictqtotatwhl == t.esp_brkfrictqtotatwhl) && (esp_vlcerror == t.esp_vlcerror) && (esp_cdderror == t.esp_cdderror) && (rolling_counter_0x234 == t.rolling_counter_0x234) && (checksum_0x234 == t.checksum_0x234) && (esp_cddactive == t.esp_cddactive) && (esp_cdd_apactive == t.esp_cdd_apactive);
    }
};


#endif // impl_type_esp_advanced_0x234_234_h