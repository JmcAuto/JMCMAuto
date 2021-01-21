/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gw_body_0x321_321_h
#define impl_type_gw_body_0x321_321_h















#include "impl_type_bcm_highbeamststype.h"
#include "impl_type_bcm_bgllumlvlsettingtype.h"
#include "impl_type_bcm_ss_enableststype.h"
#include "impl_type_bcm_autolampststype.h"
#include "impl_type_bcm_brakefluidststype.h"
#include "impl_type_bcm_powermodetype.h"
#include "impl_type_bcm_reardef_statustype.h"
#include "impl_type_bcm_outsidetempdigtype.h"
#include "impl_type_bcm_frntfoglmpststype.h"
#include "impl_type_double.h"
#include "impl_type_bcm_poslmpststype.h"
#include "impl_type_bcm_driving_mode_req_bcmtype.h"
#include "impl_type_bcm_lowbeamststype.h"
#include "impl_type_bcm_reverse_geartype.h"


struct Gw_body_0x321_321 {
    ::Bcm_outsidetempdigType bcm_outsidetempdig;
    
    ::Double bcm_outsidetemp;
    
    ::Bcm_driving_mode_req_bcmType bcm_driving_mode_req_bcm;
    
    ::Bcm_powermodeType bcm_powermode;
    
    ::Bcm_frntfoglmpstsType bcm_frntfoglmpsts;
    
    ::Bcm_lowbeamstsType bcm_lowbeamsts;
    
    ::Bcm_highbeamstsType bcm_highbeamsts;
    
    ::Bcm_ss_enablestsType bcm_ss_enablests;
    
    ::Bcm_reardef_statusType bcm_reardef_status;
    
    ::Bcm_brakefluidstsType bcm_brakefluidsts;
    
    ::Bcm_autolampstsType bcm_autolampsts;
    
    ::Bcm_poslmpstsType bcm_poslmpsts;
    
    ::Bcm_bgllumlvlsettingType bcm_bgllumlvlsetting;
    
    ::Bcm_reverse_gearType bcm_reverse_gear;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(bcm_outsidetempdig);
        fun(bcm_outsidetemp);
        fun(bcm_driving_mode_req_bcm);
        fun(bcm_powermode);
        fun(bcm_frntfoglmpsts);
        fun(bcm_lowbeamsts);
        fun(bcm_highbeamsts);
        fun(bcm_ss_enablests);
        fun(bcm_reardef_status);
        fun(bcm_brakefluidsts);
        fun(bcm_autolampsts);
        fun(bcm_poslmpsts);
        fun(bcm_bgllumlvlsetting);
        fun(bcm_reverse_gear);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(bcm_outsidetempdig);
        fun(bcm_outsidetemp);
        fun(bcm_driving_mode_req_bcm);
        fun(bcm_powermode);
        fun(bcm_frntfoglmpsts);
        fun(bcm_lowbeamsts);
        fun(bcm_highbeamsts);
        fun(bcm_ss_enablests);
        fun(bcm_reardef_status);
        fun(bcm_brakefluidsts);
        fun(bcm_autolampsts);
        fun(bcm_poslmpsts);
        fun(bcm_bgllumlvlsetting);
        fun(bcm_reverse_gear);
    }

    bool operator == (const ::Gw_body_0x321_321& t) const {
        return (bcm_outsidetempdig == t.bcm_outsidetempdig) && (bcm_outsidetemp == t.bcm_outsidetemp) && (bcm_driving_mode_req_bcm == t.bcm_driving_mode_req_bcm) && (bcm_powermode == t.bcm_powermode) && (bcm_frntfoglmpsts == t.bcm_frntfoglmpsts) && (bcm_lowbeamsts == t.bcm_lowbeamsts) && (bcm_highbeamsts == t.bcm_highbeamsts) && (bcm_ss_enablests == t.bcm_ss_enablests) && (bcm_reardef_status == t.bcm_reardef_status) && (bcm_brakefluidsts == t.bcm_brakefluidsts) && (bcm_autolampsts == t.bcm_autolampsts) && (bcm_poslmpsts == t.bcm_poslmpsts) && (bcm_bgllumlvlsetting == t.bcm_bgllumlvlsetting) && (bcm_reverse_gear == t.bcm_reverse_gear);
    }
};


#endif // impl_type_gw_body_0x321_321_h
