/*
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2019. All rights reserved.
 * Generated by VRTF CM-Generator
 */

#ifndef impl_type_chassisgps_h
#define impl_type_chassisgps_h





















#include "impl_type_double.h"
#include "impl_type_bool.h"
#include "impl_type_int32.h"
#include "impl_type_gpsquality.h"


struct ChassisGPS {
    ::Double latitude;
    
    ::Double longitude;
    
    ::Bool gps_valid;
    
    ::Int32 year;
    
    ::Int32 month;
    
    ::Int32 day;
    
    ::Int32 hours;
    
    ::Int32 minutes;
    
    ::Int32 seconds;
    
    ::Double compass_direction;
    
    ::Double pdop;
    
    ::Bool is_gps_fault;
    
    ::Bool is_inferred;
    
    ::Double altitude;
    
    ::Double heading;
    
    ::Double hdop;
    
    ::Double vdop;
    
    ::GpsQuality quality;
    
    ::Int32 num_satellites;
    
    ::Double gps_speed;
    

    static bool IsPlane()
    {
        return true;
    }

    using IsEnumerableTag = void;
    template<typename F>
    void enumerate(F& fun)
    {
        fun(latitude);
        fun(longitude);
        fun(gps_valid);
        fun(year);
        fun(month);
        fun(day);
        fun(hours);
        fun(minutes);
        fun(seconds);
        fun(compass_direction);
        fun(pdop);
        fun(is_gps_fault);
        fun(is_inferred);
        fun(altitude);
        fun(heading);
        fun(hdop);
        fun(vdop);
        fun(quality);
        fun(num_satellites);
        fun(gps_speed);
    }

    template<typename F>
    void enumerate(F& fun) const
    {
        fun(latitude);
        fun(longitude);
        fun(gps_valid);
        fun(year);
        fun(month);
        fun(day);
        fun(hours);
        fun(minutes);
        fun(seconds);
        fun(compass_direction);
        fun(pdop);
        fun(is_gps_fault);
        fun(is_inferred);
        fun(altitude);
        fun(heading);
        fun(hdop);
        fun(vdop);
        fun(quality);
        fun(num_satellites);
        fun(gps_speed);
    }

    bool operator == (const ::ChassisGPS& t) const {
        return (latitude == t.latitude) && (longitude == t.longitude) && (gps_valid == t.gps_valid) && (year == t.year) && (month == t.month) && (day == t.day) && (hours == t.hours) && (minutes == t.minutes) && (seconds == t.seconds) && (compass_direction == t.compass_direction) && (pdop == t.pdop) && (is_gps_fault == t.is_gps_fault) && (is_inferred == t.is_inferred) && (altitude == t.altitude) && (heading == t.heading) && (hdop == t.hdop) && (vdop == t.vdop) && (quality == t.quality) && (num_satellites == t.num_satellites) && (gps_speed == t.gps_speed);
    }
};


#endif // impl_type_chassisgps_h
