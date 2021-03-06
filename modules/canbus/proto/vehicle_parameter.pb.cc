// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/canbus/proto/vehicle_parameter.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/canbus/proto/vehicle_parameter.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace jmc_auto {
namespace canbus {
class VehicleParameterDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VehicleParameter> {
} _VehicleParameter_default_instance_;

namespace protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleParameter, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleParameter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleParameter, brand_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleParameter, max_engine_pedal_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleParameter, max_enable_fail_attempt_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VehicleParameter, driving_mode_),
  1,
  0,
  2,
  3,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 9, sizeof(VehicleParameter)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_VehicleParameter_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/canbus/proto/vehicle_parameter.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _VehicleParameter_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::jmc_auto::canbus::protobuf_modules_2fcanbus_2fproto_2fchassis_2eproto::InitDefaults();
  _VehicleParameter_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n,modules/canbus/proto/vehicle_parameter"
      ".proto\022\017jmc_auto.canbus\032\"modules/canbus/"
      "proto/chassis.proto\"\220\002\n\020VehicleParameter"
      "\022=\n\005brand\030\001 \001(\0162..jmc_auto.canbus.Vehicl"
      "eParameter.VehicleBrand\022\030\n\020max_engine_pe"
      "dal\030\002 \001(\001\022\037\n\027max_enable_fail_attempt\030\003 \001"
      "(\005\022:\n\014driving_mode\030\004 \001(\0162$.jmc_auto.canb"
      "us.Chassis.DrivingMode\"F\n\014VehicleBrand\022\017"
      "\n\013LINCOLN_MKZ\020\000\022\007\n\003GEM\020\001\022\006\n\002CH\020\002\022\n\n\006TESH"
      "UN\020\003\022\010\n\004CX75\020\004"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 374);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/canbus/proto/vehicle_parameter.proto", &protobuf_RegisterTypes);
  ::jmc_auto::canbus::protobuf_modules_2fcanbus_2fproto_2fchassis_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto

const ::google::protobuf::EnumDescriptor* VehicleParameter_VehicleBrand_descriptor() {
  protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::file_level_enum_descriptors[0];
}
bool VehicleParameter_VehicleBrand_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const VehicleParameter_VehicleBrand VehicleParameter::LINCOLN_MKZ;
const VehicleParameter_VehicleBrand VehicleParameter::GEM;
const VehicleParameter_VehicleBrand VehicleParameter::CH;
const VehicleParameter_VehicleBrand VehicleParameter::TESHUN;
const VehicleParameter_VehicleBrand VehicleParameter::CX75;
const VehicleParameter_VehicleBrand VehicleParameter::VehicleBrand_MIN;
const VehicleParameter_VehicleBrand VehicleParameter::VehicleBrand_MAX;
const int VehicleParameter::VehicleBrand_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VehicleParameter::kBrandFieldNumber;
const int VehicleParameter::kMaxEnginePedalFieldNumber;
const int VehicleParameter::kMaxEnableFailAttemptFieldNumber;
const int VehicleParameter::kDrivingModeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VehicleParameter::VehicleParameter()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.canbus.VehicleParameter)
}
VehicleParameter::VehicleParameter(const VehicleParameter& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&max_engine_pedal_, &from.max_engine_pedal_,
    reinterpret_cast<char*>(&driving_mode_) -
    reinterpret_cast<char*>(&max_engine_pedal_) + sizeof(driving_mode_));
  // @@protoc_insertion_point(copy_constructor:jmc_auto.canbus.VehicleParameter)
}

void VehicleParameter::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&max_engine_pedal_, 0, reinterpret_cast<char*>(&driving_mode_) -
    reinterpret_cast<char*>(&max_engine_pedal_) + sizeof(driving_mode_));
}

VehicleParameter::~VehicleParameter() {
  // @@protoc_insertion_point(destructor:jmc_auto.canbus.VehicleParameter)
  SharedDtor();
}

void VehicleParameter::SharedDtor() {
}

void VehicleParameter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VehicleParameter::descriptor() {
  protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VehicleParameter& VehicleParameter::default_instance() {
  protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::InitDefaults();
  return *internal_default_instance();
}

VehicleParameter* VehicleParameter::New(::google::protobuf::Arena* arena) const {
  VehicleParameter* n = new VehicleParameter;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VehicleParameter::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.canbus.VehicleParameter)
  if (_has_bits_[0 / 32] & 15u) {
    ::memset(&max_engine_pedal_, 0, reinterpret_cast<char*>(&driving_mode_) -
      reinterpret_cast<char*>(&max_engine_pedal_) + sizeof(driving_mode_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VehicleParameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.canbus.VehicleParameter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .jmc_auto.canbus.VehicleParameter.VehicleBrand brand = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::jmc_auto::canbus::VehicleParameter_VehicleBrand_IsValid(value)) {
            set_brand(static_cast< ::jmc_auto::canbus::VehicleParameter_VehicleBrand >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double max_engine_pedal = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {
          set_has_max_engine_pedal();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_engine_pedal_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 max_enable_fail_attempt = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          set_has_max_enable_fail_attempt();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_enable_fail_attempt_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .jmc_auto.canbus.Chassis.DrivingMode driving_mode = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::jmc_auto::canbus::Chassis_DrivingMode_IsValid(value)) {
            set_driving_mode(static_cast< ::jmc_auto::canbus::Chassis_DrivingMode >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:jmc_auto.canbus.VehicleParameter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.canbus.VehicleParameter)
  return false;
#undef DO_
}

void VehicleParameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.canbus.VehicleParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .jmc_auto.canbus.VehicleParameter.VehicleBrand brand = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->brand(), output);
  }

  // optional double max_engine_pedal = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->max_engine_pedal(), output);
  }

  // optional int32 max_enable_fail_attempt = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->max_enable_fail_attempt(), output);
  }

  // optional .jmc_auto.canbus.Chassis.DrivingMode driving_mode = 4;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->driving_mode(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.canbus.VehicleParameter)
}

::google::protobuf::uint8* VehicleParameter::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.canbus.VehicleParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .jmc_auto.canbus.VehicleParameter.VehicleBrand brand = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->brand(), target);
  }

  // optional double max_engine_pedal = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->max_engine_pedal(), target);
  }

  // optional int32 max_enable_fail_attempt = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->max_enable_fail_attempt(), target);
  }

  // optional .jmc_auto.canbus.Chassis.DrivingMode driving_mode = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->driving_mode(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.canbus.VehicleParameter)
  return target;
}

size_t VehicleParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.canbus.VehicleParameter)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional double max_engine_pedal = 2;
    if (has_max_engine_pedal()) {
      total_size += 1 + 8;
    }

    // optional .jmc_auto.canbus.VehicleParameter.VehicleBrand brand = 1;
    if (has_brand()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->brand());
    }

    // optional int32 max_enable_fail_attempt = 3;
    if (has_max_enable_fail_attempt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_enable_fail_attempt());
    }

    // optional .jmc_auto.canbus.Chassis.DrivingMode driving_mode = 4;
    if (has_driving_mode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->driving_mode());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VehicleParameter::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.canbus.VehicleParameter)
  GOOGLE_DCHECK_NE(&from, this);
  const VehicleParameter* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VehicleParameter>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.canbus.VehicleParameter)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.canbus.VehicleParameter)
    MergeFrom(*source);
  }
}

void VehicleParameter::MergeFrom(const VehicleParameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.canbus.VehicleParameter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      max_engine_pedal_ = from.max_engine_pedal_;
    }
    if (cached_has_bits & 0x00000002u) {
      brand_ = from.brand_;
    }
    if (cached_has_bits & 0x00000004u) {
      max_enable_fail_attempt_ = from.max_enable_fail_attempt_;
    }
    if (cached_has_bits & 0x00000008u) {
      driving_mode_ = from.driving_mode_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VehicleParameter::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.canbus.VehicleParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleParameter::CopyFrom(const VehicleParameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.canbus.VehicleParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleParameter::IsInitialized() const {
  return true;
}

void VehicleParameter::Swap(VehicleParameter* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VehicleParameter::InternalSwap(VehicleParameter* other) {
  std::swap(max_engine_pedal_, other->max_engine_pedal_);
  std::swap(brand_, other->brand_);
  std::swap(max_enable_fail_attempt_, other->max_enable_fail_attempt_);
  std::swap(driving_mode_, other->driving_mode_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VehicleParameter::GetMetadata() const {
  protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcanbus_2fproto_2fvehicle_5fparameter_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleParameter

// optional .jmc_auto.canbus.VehicleParameter.VehicleBrand brand = 1;
bool VehicleParameter::has_brand() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void VehicleParameter::set_has_brand() {
  _has_bits_[0] |= 0x00000002u;
}
void VehicleParameter::clear_has_brand() {
  _has_bits_[0] &= ~0x00000002u;
}
void VehicleParameter::clear_brand() {
  brand_ = 0;
  clear_has_brand();
}
::jmc_auto::canbus::VehicleParameter_VehicleBrand VehicleParameter::brand() const {
  // @@protoc_insertion_point(field_get:jmc_auto.canbus.VehicleParameter.brand)
  return static_cast< ::jmc_auto::canbus::VehicleParameter_VehicleBrand >(brand_);
}
void VehicleParameter::set_brand(::jmc_auto::canbus::VehicleParameter_VehicleBrand value) {
  assert(::jmc_auto::canbus::VehicleParameter_VehicleBrand_IsValid(value));
  set_has_brand();
  brand_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.canbus.VehicleParameter.brand)
}

// optional double max_engine_pedal = 2;
bool VehicleParameter::has_max_engine_pedal() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void VehicleParameter::set_has_max_engine_pedal() {
  _has_bits_[0] |= 0x00000001u;
}
void VehicleParameter::clear_has_max_engine_pedal() {
  _has_bits_[0] &= ~0x00000001u;
}
void VehicleParameter::clear_max_engine_pedal() {
  max_engine_pedal_ = 0;
  clear_has_max_engine_pedal();
}
double VehicleParameter::max_engine_pedal() const {
  // @@protoc_insertion_point(field_get:jmc_auto.canbus.VehicleParameter.max_engine_pedal)
  return max_engine_pedal_;
}
void VehicleParameter::set_max_engine_pedal(double value) {
  set_has_max_engine_pedal();
  max_engine_pedal_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.canbus.VehicleParameter.max_engine_pedal)
}

// optional int32 max_enable_fail_attempt = 3;
bool VehicleParameter::has_max_enable_fail_attempt() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void VehicleParameter::set_has_max_enable_fail_attempt() {
  _has_bits_[0] |= 0x00000004u;
}
void VehicleParameter::clear_has_max_enable_fail_attempt() {
  _has_bits_[0] &= ~0x00000004u;
}
void VehicleParameter::clear_max_enable_fail_attempt() {
  max_enable_fail_attempt_ = 0;
  clear_has_max_enable_fail_attempt();
}
::google::protobuf::int32 VehicleParameter::max_enable_fail_attempt() const {
  // @@protoc_insertion_point(field_get:jmc_auto.canbus.VehicleParameter.max_enable_fail_attempt)
  return max_enable_fail_attempt_;
}
void VehicleParameter::set_max_enable_fail_attempt(::google::protobuf::int32 value) {
  set_has_max_enable_fail_attempt();
  max_enable_fail_attempt_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.canbus.VehicleParameter.max_enable_fail_attempt)
}

// optional .jmc_auto.canbus.Chassis.DrivingMode driving_mode = 4;
bool VehicleParameter::has_driving_mode() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void VehicleParameter::set_has_driving_mode() {
  _has_bits_[0] |= 0x00000008u;
}
void VehicleParameter::clear_has_driving_mode() {
  _has_bits_[0] &= ~0x00000008u;
}
void VehicleParameter::clear_driving_mode() {
  driving_mode_ = 0;
  clear_has_driving_mode();
}
::jmc_auto::canbus::Chassis_DrivingMode VehicleParameter::driving_mode() const {
  // @@protoc_insertion_point(field_get:jmc_auto.canbus.VehicleParameter.driving_mode)
  return static_cast< ::jmc_auto::canbus::Chassis_DrivingMode >(driving_mode_);
}
void VehicleParameter::set_driving_mode(::jmc_auto::canbus::Chassis_DrivingMode value) {
  assert(::jmc_auto::canbus::Chassis_DrivingMode_IsValid(value));
  set_has_driving_mode();
  driving_mode_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.canbus.VehicleParameter.driving_mode)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace canbus
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)
