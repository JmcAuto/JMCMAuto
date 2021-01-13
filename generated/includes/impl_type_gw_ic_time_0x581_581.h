/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_gw_ic_time_0x581_581_h
#define impl_type_gw_ic_time_0x581_581_h







#include "impl_type_ic_datetype.h"
#include "impl_type_ic_hourtype.h"
#include "impl_type_ic_yeartype.h"
#include "impl_type_ic_secondtype.h"
#include "impl_type_ic_minutetype.h"
#include "impl_type_ic_monthtype.h"


struct Gw_ic_time_0x581_581 {
    ::Ic_monthType ic_month;
    
    ::Ic_dateType ic_date;
    
    ::Ic_hourType ic_hour;
    
    ::Ic_minuteType ic_minute;
    
    ::Ic_secondType ic_second;
    
    ::Ic_yearType ic_year;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(ic_month);
        fun(ic_date);
        fun(ic_hour);
        fun(ic_minute);
        fun(ic_second);
        fun(ic_year);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(ic_month);
        fun(ic_date);
        fun(ic_hour);
        fun(ic_minute);
        fun(ic_second);
        fun(ic_year);
    }

    bool operator == (const ::Gw_ic_time_0x581_581& t) const {
        return (ic_month == t.ic_month) && (ic_date == t.ic_date) && (ic_hour == t.ic_hour) && (ic_minute == t.ic_minute) && (ic_second == t.ic_second) && (ic_year == t.ic_year);
    }
};


#endif // impl_type_gw_ic_time_0x581_581_h