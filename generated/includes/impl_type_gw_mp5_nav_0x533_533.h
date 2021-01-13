/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gw_mp5_nav_0x533_533_h
#define impl_type_gw_mp5_nav_0x533_533_h










#include "impl_type_nav_speedlimitunitstype.h"
#include "impl_type_int32.h"
#include "impl_type_mp5_apaactive_cmdtype.h"
#include "impl_type_nav_currroadtypetype.h"
#include "impl_type_nav_speedlimitstatustype.h"
#include "impl_type_nav_ststype.h"
#include "impl_type_mp5_apa_confirmbuttontype.h"
#include "impl_type_nav_speedlimittype.h"
#include "impl_type_mp5_apa_function_selecttype.h"


struct Gw_mp5_nav_0x533_533 {
    ::Nav_speedlimitunitsType nav_speedlimitunits;
    
    ::Nav_currroadtypeType nav_currroadtype;
    
    ::Nav_speedlimitType nav_speedlimit;
    
    ::Mp5_apaactive_cmdType mp5_apaactive_cmd;
    
    ::Mp5_apa_confirmbuttonType mp5_apa_confirmbutton;
    
    ::Mp5_apa_function_selectType mp5_apa_function_select;
    
    ::Nav_stsType nav_sts;
    
    ::Int32 nav_countrycode;
    
    ::Nav_speedlimitstatusType nav_speedlimitstatus;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(nav_speedlimitunits);
        fun(nav_currroadtype);
        fun(nav_speedlimit);
        fun(mp5_apaactive_cmd);
        fun(mp5_apa_confirmbutton);
        fun(mp5_apa_function_select);
        fun(nav_sts);
        fun(nav_countrycode);
        fun(nav_speedlimitstatus);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(nav_speedlimitunits);
        fun(nav_currroadtype);
        fun(nav_speedlimit);
        fun(mp5_apaactive_cmd);
        fun(mp5_apa_confirmbutton);
        fun(mp5_apa_function_select);
        fun(nav_sts);
        fun(nav_countrycode);
        fun(nav_speedlimitstatus);
    }

    bool operator == (const ::Gw_mp5_nav_0x533_533& t) const {
        return (nav_speedlimitunits == t.nav_speedlimitunits) && (nav_currroadtype == t.nav_currroadtype) && (nav_speedlimit == t.nav_speedlimit) && (mp5_apaactive_cmd == t.mp5_apaactive_cmd) && (mp5_apa_confirmbutton == t.mp5_apa_confirmbutton) && (mp5_apa_function_select == t.mp5_apa_function_select) && (nav_sts == t.nav_sts) && (nav_countrycode == t.nav_countrycode) && (nav_speedlimitstatus == t.nav_speedlimitstatus);
    }
};


#endif // impl_type_gw_mp5_nav_0x533_533_h