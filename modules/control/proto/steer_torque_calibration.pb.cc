// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/steer_torque_calibration.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/control/proto/steer_torque_calibration.pb.h"

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
namespace control {
namespace steertorquecalibration {
class Steer_Torque_CalibrationTableDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Steer_Torque_CalibrationTable> {
} _Steer_Torque_CalibrationTable_default_instance_;
class Steer_Torque_CalibrationInfoDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Steer_Torque_CalibrationInfo> {
} _Steer_Torque_CalibrationInfo_default_instance_;

namespace protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

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
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationTable, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationTable, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationTable, steer_calibration_),
  ~0u,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationInfo, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationInfo, speed_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationInfo, angle_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Steer_Torque_CalibrationInfo, torque_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(Steer_Torque_CalibrationTable)},
  { 7, 15, sizeof(Steer_Torque_CalibrationInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Steer_Torque_CalibrationTable_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Steer_Torque_CalibrationInfo_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/control/proto/steer_torque_calibration.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Steer_Torque_CalibrationTable_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Steer_Torque_CalibrationInfo_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Steer_Torque_CalibrationTable_default_instance_.DefaultConstruct();
  _Steer_Torque_CalibrationInfo_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n4modules/control/proto/steer_torque_cal"
      "ibration.proto\022\'jmc_auto.control.steerto"
      "rquecalibration\"\201\001\n\035Steer_Torque_Calibra"
      "tionTable\022`\n\021steer_calibration\030\001 \003(\0132E.j"
      "mc_auto.control.steertorquecalibration.S"
      "teer_Torque_CalibrationInfo\"L\n\034Steer_Tor"
      "que_CalibrationInfo\022\r\n\005speed\030\001 \001(\001\022\r\n\005an"
      "gle\030\002 \001(\001\022\016\n\006torque\030\003 \001(\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 305);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/control/proto/steer_torque_calibration.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Steer_Torque_CalibrationTable::kSteerCalibrationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Steer_Torque_CalibrationTable::Steer_Torque_CalibrationTable()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
}
Steer_Torque_CalibrationTable::Steer_Torque_CalibrationTable(const Steer_Torque_CalibrationTable& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      steer_calibration_(from.steer_calibration_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
}

void Steer_Torque_CalibrationTable::SharedCtor() {
  _cached_size_ = 0;
}

Steer_Torque_CalibrationTable::~Steer_Torque_CalibrationTable() {
  // @@protoc_insertion_point(destructor:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  SharedDtor();
}

void Steer_Torque_CalibrationTable::SharedDtor() {
}

void Steer_Torque_CalibrationTable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Steer_Torque_CalibrationTable::descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Steer_Torque_CalibrationTable& Steer_Torque_CalibrationTable::default_instance() {
  protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::InitDefaults();
  return *internal_default_instance();
}

Steer_Torque_CalibrationTable* Steer_Torque_CalibrationTable::New(::google::protobuf::Arena* arena) const {
  Steer_Torque_CalibrationTable* n = new Steer_Torque_CalibrationTable;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Steer_Torque_CalibrationTable::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  steer_calibration_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Steer_Torque_CalibrationTable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo steer_calibration = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_steer_calibration()));
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
  // @@protoc_insertion_point(parse_success:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  return false;
#undef DO_
}

void Steer_Torque_CalibrationTable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo steer_calibration = 1;
  for (unsigned int i = 0, n = this->steer_calibration_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->steer_calibration(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
}

::google::protobuf::uint8* Steer_Torque_CalibrationTable::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo steer_calibration = 1;
  for (unsigned int i = 0, n = this->steer_calibration_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->steer_calibration(i), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  return target;
}

size_t Steer_Torque_CalibrationTable::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo steer_calibration = 1;
  {
    unsigned int count = this->steer_calibration_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->steer_calibration(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Steer_Torque_CalibrationTable::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  GOOGLE_DCHECK_NE(&from, this);
  const Steer_Torque_CalibrationTable* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Steer_Torque_CalibrationTable>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
    MergeFrom(*source);
  }
}

void Steer_Torque_CalibrationTable::MergeFrom(const Steer_Torque_CalibrationTable& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  steer_calibration_.MergeFrom(from.steer_calibration_);
}

void Steer_Torque_CalibrationTable::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Steer_Torque_CalibrationTable::CopyFrom(const Steer_Torque_CalibrationTable& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Steer_Torque_CalibrationTable::IsInitialized() const {
  return true;
}

void Steer_Torque_CalibrationTable::Swap(Steer_Torque_CalibrationTable* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Steer_Torque_CalibrationTable::InternalSwap(Steer_Torque_CalibrationTable* other) {
  steer_calibration_.InternalSwap(&other->steer_calibration_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Steer_Torque_CalibrationTable::GetMetadata() const {
  protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Steer_Torque_CalibrationTable

// repeated .jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo steer_calibration = 1;
int Steer_Torque_CalibrationTable::steer_calibration_size() const {
  return steer_calibration_.size();
}
void Steer_Torque_CalibrationTable::clear_steer_calibration() {
  steer_calibration_.Clear();
}
const ::jmc_auto::control::steertorquecalibration::Steer_Torque_CalibrationInfo& Steer_Torque_CalibrationTable::steer_calibration(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable.steer_calibration)
  return steer_calibration_.Get(index);
}
::jmc_auto::control::steertorquecalibration::Steer_Torque_CalibrationInfo* Steer_Torque_CalibrationTable::mutable_steer_calibration(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable.steer_calibration)
  return steer_calibration_.Mutable(index);
}
::jmc_auto::control::steertorquecalibration::Steer_Torque_CalibrationInfo* Steer_Torque_CalibrationTable::add_steer_calibration() {
  // @@protoc_insertion_point(field_add:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable.steer_calibration)
  return steer_calibration_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::control::steertorquecalibration::Steer_Torque_CalibrationInfo >*
Steer_Torque_CalibrationTable::mutable_steer_calibration() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable.steer_calibration)
  return &steer_calibration_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::control::steertorquecalibration::Steer_Torque_CalibrationInfo >&
Steer_Torque_CalibrationTable::steer_calibration() const {
  // @@protoc_insertion_point(field_list:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationTable.steer_calibration)
  return steer_calibration_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Steer_Torque_CalibrationInfo::kSpeedFieldNumber;
const int Steer_Torque_CalibrationInfo::kAngleFieldNumber;
const int Steer_Torque_CalibrationInfo::kTorqueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Steer_Torque_CalibrationInfo::Steer_Torque_CalibrationInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
}
Steer_Torque_CalibrationInfo::Steer_Torque_CalibrationInfo(const Steer_Torque_CalibrationInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&speed_, &from.speed_,
    reinterpret_cast<char*>(&torque_) -
    reinterpret_cast<char*>(&speed_) + sizeof(torque_));
  // @@protoc_insertion_point(copy_constructor:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
}

void Steer_Torque_CalibrationInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&speed_, 0, reinterpret_cast<char*>(&torque_) -
    reinterpret_cast<char*>(&speed_) + sizeof(torque_));
}

Steer_Torque_CalibrationInfo::~Steer_Torque_CalibrationInfo() {
  // @@protoc_insertion_point(destructor:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  SharedDtor();
}

void Steer_Torque_CalibrationInfo::SharedDtor() {
}

void Steer_Torque_CalibrationInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Steer_Torque_CalibrationInfo::descriptor() {
  protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Steer_Torque_CalibrationInfo& Steer_Torque_CalibrationInfo::default_instance() {
  protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::InitDefaults();
  return *internal_default_instance();
}

Steer_Torque_CalibrationInfo* Steer_Torque_CalibrationInfo::New(::google::protobuf::Arena* arena) const {
  Steer_Torque_CalibrationInfo* n = new Steer_Torque_CalibrationInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Steer_Torque_CalibrationInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  if (_has_bits_[0 / 32] & 7u) {
    ::memset(&speed_, 0, reinterpret_cast<char*>(&torque_) -
      reinterpret_cast<char*>(&speed_) + sizeof(torque_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Steer_Torque_CalibrationInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double speed = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {
          set_has_speed();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &speed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double angle = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {
          set_has_angle();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angle_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double torque = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u)) {
          set_has_torque();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &torque_)));
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
  // @@protoc_insertion_point(parse_success:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  return false;
#undef DO_
}

void Steer_Torque_CalibrationInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double speed = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->speed(), output);
  }

  // optional double angle = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->angle(), output);
  }

  // optional double torque = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->torque(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
}

::google::protobuf::uint8* Steer_Torque_CalibrationInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double speed = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->speed(), target);
  }

  // optional double angle = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->angle(), target);
  }

  // optional double torque = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->torque(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  return target;
}

size_t Steer_Torque_CalibrationInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional double speed = 1;
    if (has_speed()) {
      total_size += 1 + 8;
    }

    // optional double angle = 2;
    if (has_angle()) {
      total_size += 1 + 8;
    }

    // optional double torque = 3;
    if (has_torque()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Steer_Torque_CalibrationInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const Steer_Torque_CalibrationInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Steer_Torque_CalibrationInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
    MergeFrom(*source);
  }
}

void Steer_Torque_CalibrationInfo::MergeFrom(const Steer_Torque_CalibrationInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      speed_ = from.speed_;
    }
    if (cached_has_bits & 0x00000002u) {
      angle_ = from.angle_;
    }
    if (cached_has_bits & 0x00000004u) {
      torque_ = from.torque_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Steer_Torque_CalibrationInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Steer_Torque_CalibrationInfo::CopyFrom(const Steer_Torque_CalibrationInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Steer_Torque_CalibrationInfo::IsInitialized() const {
  return true;
}

void Steer_Torque_CalibrationInfo::Swap(Steer_Torque_CalibrationInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Steer_Torque_CalibrationInfo::InternalSwap(Steer_Torque_CalibrationInfo* other) {
  std::swap(speed_, other->speed_);
  std::swap(angle_, other->angle_);
  std::swap(torque_, other->torque_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Steer_Torque_CalibrationInfo::GetMetadata() const {
  protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcontrol_2fproto_2fsteer_5ftorque_5fcalibration_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Steer_Torque_CalibrationInfo

// optional double speed = 1;
bool Steer_Torque_CalibrationInfo::has_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Steer_Torque_CalibrationInfo::set_has_speed() {
  _has_bits_[0] |= 0x00000001u;
}
void Steer_Torque_CalibrationInfo::clear_has_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
void Steer_Torque_CalibrationInfo::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
double Steer_Torque_CalibrationInfo::speed() const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo.speed)
  return speed_;
}
void Steer_Torque_CalibrationInfo::set_speed(double value) {
  set_has_speed();
  speed_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo.speed)
}

// optional double angle = 2;
bool Steer_Torque_CalibrationInfo::has_angle() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Steer_Torque_CalibrationInfo::set_has_angle() {
  _has_bits_[0] |= 0x00000002u;
}
void Steer_Torque_CalibrationInfo::clear_has_angle() {
  _has_bits_[0] &= ~0x00000002u;
}
void Steer_Torque_CalibrationInfo::clear_angle() {
  angle_ = 0;
  clear_has_angle();
}
double Steer_Torque_CalibrationInfo::angle() const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo.angle)
  return angle_;
}
void Steer_Torque_CalibrationInfo::set_angle(double value) {
  set_has_angle();
  angle_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo.angle)
}

// optional double torque = 3;
bool Steer_Torque_CalibrationInfo::has_torque() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Steer_Torque_CalibrationInfo::set_has_torque() {
  _has_bits_[0] |= 0x00000004u;
}
void Steer_Torque_CalibrationInfo::clear_has_torque() {
  _has_bits_[0] &= ~0x00000004u;
}
void Steer_Torque_CalibrationInfo::clear_torque() {
  torque_ = 0;
  clear_has_torque();
}
double Steer_Torque_CalibrationInfo::torque() const {
  // @@protoc_insertion_point(field_get:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo.torque)
  return torque_;
}
void Steer_Torque_CalibrationInfo::set_torque(double value) {
  set_has_torque();
  torque_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.control.steertorquecalibration.Steer_Torque_CalibrationInfo.torque)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace steertorquecalibration
}  // namespace control
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)