{
  "ShortName": "/jmc_auto/Platform/ChassisDateType/ChassisGPS",
  "Namespace": "::",
  "Type": "STRUCTURE",
  "Subelements": [
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
      "Type": "/HuaweiMDC/ImplementationDataType/Int32",
      "Padding": "3"
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
      "Type": "/HuaweiMDC/ImplementationDataType/Int32",
      "Padding": "4"
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
      "Type": "/HuaweiMDC/ImplementationDataType/Bool",
      "Padding": "6"
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
      "Type": "/HuaweiMDC/ImplementationDataType/Int32",
      "Padding": "3"
    },
    {
      "Name": "gps_speed",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    }
  ],
  "IsPlane": "true"
}