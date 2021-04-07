{
  "ShortName": "/jmc_auto/Platform/ChassisDateType/jmc_auto/Platform/ChassisDateType/Chassis/ChassisGPS",
  "Namespace": "::",
  "Type": "STRUCTURE",
  "Subelements": [
    {
      "Name": "engine_started",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "engine_rpm",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "speed_mps",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "odometer_m",
      "Type": "/HuaweiMDC/ImplementationDataType/Float",
      "Padding": "3"
    },
    {
      "Name": "fuel_range_m",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "throttle_percentage",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "brake_percentage",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "steering_percentage",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "steering_torque_nm",
      "Type": "/HuaweiMDC/ImplementationDataType/Float",
      "Padding": "4"
    },
    {
      "Name": "parking_brake",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "high_beam_signal",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "low_beam_signal",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "left_turn_signal",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool",
      "Padding": "6"
    },
    {
      "Name": "right_turn_signal",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "horn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "wiper",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "disengage_status",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "driving_mode",
      "Type": "/jmc_auto/Platform/ChassisDateType/DrivingMode"
    },
    {
      "Name": "error_code",
      "Type": "/jmc_auto/Platform/ChassisDateType/ChassisErrorCode",
      "Padding": "3"
    },
    {
      "Name": "gear_location",
      "Type": "/jmc_auto/Platform/ChassisDateType/GearPosition"
    },
    {
      "Name": "steering_timestamp",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "header",
      "Type": "/jmc_auto/header/Header"
    },
    {
      "Name": "chassis_error_mask",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32",
      "Padding": "4"
    },
    {
      "Name": "signal",
      "Type": "/jmc_auto/vehicle_signal/VehicleSignal",
      "Padding": "2"
    },
    {
      "Name": "chassis_gps",
      "Type": "/jmc_auto/Platform/ChassisDateType/ChassisGPS"
    },
    {
      "Name": "engage_advice",
      "Type": "/jmc_auto/drive_state/EngageAdvice",
      "Padding": "7"
    },
    {
      "Name": "wheel_speed",
      "Type": "/jmc_auto/Platform/ChassisDateType/WheelSpeed"
    },
    {
      "Name": "surround",
      "Type": "/jmc_auto/Platform/ChassisDateType/Surround"
    },
    {
      "Name": "lon_acc",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "steer_wheel_rot_spd",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "abs_vehspdlgt_valid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "esp_algtstatus_valid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "sas_sasstssnsr_valid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "steerwheelrotspd_valid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "eps_lkaresponsetorque_valid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "eps_torsionbartorque",
      "Type": "/HuaweiMDC/ImplementationDataType/Float"
    },
    {
      "Name": "eps_tosionbartorquevalid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "abs_whlmilgfrntri",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "abs_whlmilgfrntle",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "abs_whlmilgrearre",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "abs_whlmilgrearle",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_wheelpulse_fl",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_wheelpulse_fr",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_wheelpulse_rl",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_wheelpulse_rr",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ems_accpedalratio",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "brkpedalstasus",
      "Type": "/jmc_auto/Platform/ChassisDateType/BrkPedalStasus"
    },
    {
      "Name": "abs_whlspdfrntle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "abs_whlspdfrntri",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "abs_whlspdrele",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "abs_whlspdreri",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "acc_x",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "acc_y",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "acc_z",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "gyro_x",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "gyro_y",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "gyro_z",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_pitchangle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_rollangle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_headingangle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_locatheight",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_time",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_latitude",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_longitude",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_northspd",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_eastspd",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_togroundspd",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_gpsflag_pos",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ins_numsv",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ins_gpsflag_heading",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ins_gps_age",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ins_car_status",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ins_status",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ins_std_lat",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_std_lon",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_std_locat_height",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "ins_std_heading",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "eps_lkacontrolstatus",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_vlc_active",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_vlc_available",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_apa_gearboxenable",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_vlc_apactive",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_vlcapa_available",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "eps_epspamsts",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "eps_epspaminh",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "esp_epbstatus",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "latitude",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "longitude",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "gps_valid",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "year",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "month",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "day",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "hours",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "minutes",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "seconds",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "compass_direction",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "pdop",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "is_gps_fault",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "is_inferred",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "altitude",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "heading",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "hdop",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "vdop",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "quality",
      "Type": "/jmc_auto/Platform/ChassisDateType/GpsQuality"
    },
    {
      "Name": "num_satellites",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "gps_speed",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    }
  ],
  "IsPlane": "true"
}