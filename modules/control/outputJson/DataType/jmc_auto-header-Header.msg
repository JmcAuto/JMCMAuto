{
  "ShortName": "/jmc_auto/header/Header",
  "Namespace": "::",
  "Type": "STRUCTURE",
  "Subelements": [
    {
      "Name": "timestamp_sec",
      "Type": "/HuaweiMDC/ImplementationDataType/Double"
    },
    {
      "Name": "sequence_num",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt32",
      "Padding": "4"
    },
    {
      "Name": "lidar_timestamp",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "camera_timestamp",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "radar_timestamp",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "version",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt32"
    },
    {
      "Name": "status",
      "Type": "/jmc_auto/error_code/StatusPb"
    }
  ],
  "IsPlane": "true"
}