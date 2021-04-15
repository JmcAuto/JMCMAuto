{
  "ShortName": "/jmc_auto/record/jmc_auto/record/Index/RecordHeader",
  "Namespace": "::",
  "Type": "STRUCTURE",
  "Subelements": [
    {
      "Name": "major_version",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt32"
    },
    {
      "Name": "minor_version",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt32"
    },
    {
      "Name": "compress",
      "Type": "/jmc_auto/record/CompressType",
      "Padding": "7"
    },
    {
      "Name": "chunk_interval",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "segment_interval",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "index_position",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "chunk_number",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "channel_number",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "begin_time",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "end_time",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "message_number",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "size",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "is_complete",
      "Type": "/HuaweiMDC/ImplementationDataType/Bool",
      "Padding": "7"
    },
    {
      "Name": "chunk_raw_size",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    },
    {
      "Name": "segment_raw_size",
      "Type": "/HuaweiMDC/ImplementationDataType/UInt64"
    }
  ],
  "IsPlane": "true"
}