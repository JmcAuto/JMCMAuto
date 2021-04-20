{
  "ShortName": "/jmc_auto/Modules/ControlCommandDataType/jmc_auto/Modules/ControlCommandDataType/jmc_auto/Modules/ControlCommandDataType/ControlCommand/Debug/InputDebug",
  "Namespace": "::",
  "Type": "STRUCTURE",
  "Subelements": [
    {
      "Name": "header",
      "Type": "/jmc_auto/header/Header"
    },
    {
      "Name": "throttle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "brake",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "steering_rate",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "steering_target",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "speed",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "acceleration",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "left_turn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "right_turn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "high_beam",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "low_beam",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "horn",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "turnsignal",
      "Type": "/jmc_auto/vehicle_signal/TurnSignal"
    },
    {
      "Name": "reset_model",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "engine_on_off",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "trajectory_fraction",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "driving_mode",
      "Type": "/jmc_auto/Modules/ChassisDateType/DrivingMode"
    },
    {
      "Name": "gear_location",
      "Type": "/jmc_auto/Modules/ChassisDateType/GearPosition",
      "Padding": "6"
    },
    {
      "Name": "debug",
      "Type": "/jmc_auto/Modules/ControlCommandDataType/Debug"
    },
    {
      "Name": "signal",
      "Type": "/jmc_auto/vehicle_signal/VehicleSignal"
    },
    {
      "Name": "latency_stats",
      "Type": "/jmc_auto/Modules/ControlCommandDataType/LatencyStats"
    },
    {
      "Name": "pad_msg",
      "Type": "/jmc_auto/Modules/ControlCommandDataType/PadMessage"
    },
    {
      "Name": "engage_advice",
      "Type": "/jmc_auto/drive_state/EngageAdvice"
    },
    {
      "Name": "is_in_safe_mode",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "steering_torque",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "pam_esp_stop_distance",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "ACC_StandstillReq",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "steering_angle",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "parking_brake",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool"
    },
    {
      "Name": "PAM_ESP_Target_Gear_Request",
      "Type": "/HuaweiMDC/ImplementationDataType/Int32"
    },
    {
      "Name": "simple_lon_debug",
      "Type": "/jmc_auto/Modules/ControlCommandDataType/SimpleLongtitudinalDebug"
    },
    {
      "Name": "simple_lat_debug",
      "Type": "/jmc_auto/Modules/ControlCommandDataType/SimpleLateralDebug"
    },
    {
      "Name": "input_debug",
      "Type": "/jmc_auto/Modules/ControlCommandDataType/InputDebug"
    },
    {
      "Name": "localization_header",
      "Type": "/jmc_auto/header/Header"
    },
    {
      "Name": "canbus_header",
      "Type": "/jmc_auto/header/Header"
    },
    {
      "Name": "trajectory_header",
      "Type": "/jmc_auto/header/Header"
    }
  ],
  "IsPlane": "true"
}