/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gw_swm_body_0x31a_31a_h
#define impl_type_gw_swm_body_0x31a_31a_h





























#include "impl_type_swm_menu_righttype.h"
#include "impl_type_swm_frontfoglighttype.h"
#include "impl_type_swm_menu_confirmtype.h"
#include "impl_type_swm_menu_downtype.h"
#include "impl_type_swm_menu_lefttype.h"
#include "impl_type_swm_menu_uptype.h"
#include "impl_type_swm_lamplimphomeststype.h"
#include "impl_type_swm_phonetype.h"
#include "impl_type_swm_flashlightststype.h"
#include "impl_type_swm_washerlimphomeststype.h"
#include "impl_type_swm_vol_plustype.h"
#include "impl_type_swm_headlamptype.h"
#include "impl_type_swm_vol_minustype.h"
#include "impl_type_swm_rwasherststype.h"
#include "impl_type_swm_rearfoglighttype.h"
#include "impl_type_swm_wipinginterval_sensitvitytype.h"
#include "impl_type_swm_rearwipingmodetype.h"
#include "impl_type_swm_mutetype.h"
#include "impl_type_swm_menu_returntype.h"
#include "impl_type_swm_frontwipingmodetype.h"
#include "impl_type_swm_turnindicationacttype.h"
#include "impl_type_swm_wechattype.h"
#include "impl_type_swm_previous_songtype.h"
#include "impl_type_int32.h"
#include "impl_type_swm_next_songtype.h"
#include "impl_type_swm_highbeamtype.h"
#include "impl_type_swm_fwasherststype.h"


struct Gw_swm_body_0x31a_31a {
    ::Swm_highbeamType swm_highbeam;
    
    ::Swm_frontwipingmodeType swm_frontwipingmode;
    
    ::Swm_wipinginterval_sensitvityType swm_wipinginterval_sensitvity;
    
    ::Swm_rearfoglightType swm_rearfoglight;
    
    ::Swm_frontfoglightType swm_frontfoglight;
    
    ::Swm_washerlimphomestsType swm_washerlimphomests;
    
    ::Swm_rearwipingmodeType swm_rearwipingmode;
    
    ::Swm_turnindicationactType swm_turnindicationact;
    
    ::Swm_vol_plusType swm_vol_plus;
    
    ::Swm_vol_minusType swm_vol_minus;
    
    ::Swm_wechatType swm_wechat;
    
    ::Swm_lamplimphomestsType swm_lamplimphomests;
    
    ::Swm_headlampType swm_headlamp;
    
    ::Swm_next_songType swm_next_song;
    
    ::Swm_previous_songType swm_previous_song;
    
    ::Swm_phoneType swm_phone;
    
    ::Swm_muteType swm_mute;
    
    ::Swm_menu_rightType swm_menu_right;
    
    ::Swm_menu_leftType swm_menu_left;
    
    ::Swm_menu_downType swm_menu_down;
    
    ::Swm_menu_upType swm_menu_up;
    
    ::Swm_fwasherstsType swm_fwashersts;
    
    ::Int32 rolling_counter_0x31a;
    
    ::Swm_menu_returnType swm_menu_return;
    
    ::Swm_menu_confirmType swm_menu_confirm;
    
    ::Int32 checksum_0x31a;
    
    ::Swm_rwasherstsType swm_rwashersts;
    
    ::Swm_flashlightstsType swm_flashlightsts;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(swm_highbeam);
        fun(swm_frontwipingmode);
        fun(swm_wipinginterval_sensitvity);
        fun(swm_rearfoglight);
        fun(swm_frontfoglight);
        fun(swm_washerlimphomests);
        fun(swm_rearwipingmode);
        fun(swm_turnindicationact);
        fun(swm_vol_plus);
        fun(swm_vol_minus);
        fun(swm_wechat);
        fun(swm_lamplimphomests);
        fun(swm_headlamp);
        fun(swm_next_song);
        fun(swm_previous_song);
        fun(swm_phone);
        fun(swm_mute);
        fun(swm_menu_right);
        fun(swm_menu_left);
        fun(swm_menu_down);
        fun(swm_menu_up);
        fun(swm_fwashersts);
        fun(rolling_counter_0x31a);
        fun(swm_menu_return);
        fun(swm_menu_confirm);
        fun(checksum_0x31a);
        fun(swm_rwashersts);
        fun(swm_flashlightsts);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(swm_highbeam);
        fun(swm_frontwipingmode);
        fun(swm_wipinginterval_sensitvity);
        fun(swm_rearfoglight);
        fun(swm_frontfoglight);
        fun(swm_washerlimphomests);
        fun(swm_rearwipingmode);
        fun(swm_turnindicationact);
        fun(swm_vol_plus);
        fun(swm_vol_minus);
        fun(swm_wechat);
        fun(swm_lamplimphomests);
        fun(swm_headlamp);
        fun(swm_next_song);
        fun(swm_previous_song);
        fun(swm_phone);
        fun(swm_mute);
        fun(swm_menu_right);
        fun(swm_menu_left);
        fun(swm_menu_down);
        fun(swm_menu_up);
        fun(swm_fwashersts);
        fun(rolling_counter_0x31a);
        fun(swm_menu_return);
        fun(swm_menu_confirm);
        fun(checksum_0x31a);
        fun(swm_rwashersts);
        fun(swm_flashlightsts);
    }

    bool operator == (const ::Gw_swm_body_0x31a_31a& t) const {
        return (swm_highbeam == t.swm_highbeam) && (swm_frontwipingmode == t.swm_frontwipingmode) && (swm_wipinginterval_sensitvity == t.swm_wipinginterval_sensitvity) && (swm_rearfoglight == t.swm_rearfoglight) && (swm_frontfoglight == t.swm_frontfoglight) && (swm_washerlimphomests == t.swm_washerlimphomests) && (swm_rearwipingmode == t.swm_rearwipingmode) && (swm_turnindicationact == t.swm_turnindicationact) && (swm_vol_plus == t.swm_vol_plus) && (swm_vol_minus == t.swm_vol_minus) && (swm_wechat == t.swm_wechat) && (swm_lamplimphomests == t.swm_lamplimphomests) && (swm_headlamp == t.swm_headlamp) && (swm_next_song == t.swm_next_song) && (swm_previous_song == t.swm_previous_song) && (swm_phone == t.swm_phone) && (swm_mute == t.swm_mute) && (swm_menu_right == t.swm_menu_right) && (swm_menu_left == t.swm_menu_left) && (swm_menu_down == t.swm_menu_down) && (swm_menu_up == t.swm_menu_up) && (swm_fwashersts == t.swm_fwashersts) && (rolling_counter_0x31a == t.rolling_counter_0x31a) && (swm_menu_return == t.swm_menu_return) && (swm_menu_confirm == t.swm_menu_confirm) && (checksum_0x31a == t.checksum_0x31a) && (swm_rwashersts == t.swm_rwashersts) && (swm_flashlightsts == t.swm_flashlightsts);
    }
};


#endif // impl_type_gw_swm_body_0x31a_31a_h
