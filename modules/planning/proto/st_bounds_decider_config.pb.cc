// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/st_bounds_decider_config.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/planning/proto/st_bounds_decider_config.pb.h"

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
namespace planning {
class STBoundsDeciderConfigDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<STBoundsDeciderConfig> {
} _STBoundsDeciderConfig_default_instance_;

namespace protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(STBoundsDeciderConfig, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(STBoundsDeciderConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(STBoundsDeciderConfig, total_time_),
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(STBoundsDeciderConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_STBoundsDeciderConfig_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/planning/proto/st_bounds_decider_config.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
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
  _STBoundsDeciderConfig_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _STBoundsDeciderConfig_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n5modules/planning/proto/st_bounds_decid"
      "er_config.proto\022\021jmc_auto.planning\".\n\025ST"
      "BoundsDeciderConfig\022\025\n\ntotal_time\030\001 \001(\001:"
      "\0017"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/planning/proto/st_bounds_decider_config.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int STBoundsDeciderConfig::kTotalTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

STBoundsDeciderConfig::STBoundsDeciderConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.planning.STBoundsDeciderConfig)
}
STBoundsDeciderConfig::STBoundsDeciderConfig(const STBoundsDeciderConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  total_time_ = from.total_time_;
  // @@protoc_insertion_point(copy_constructor:jmc_auto.planning.STBoundsDeciderConfig)
}

void STBoundsDeciderConfig::SharedCtor() {
  _cached_size_ = 0;
  total_time_ = 7;
}

STBoundsDeciderConfig::~STBoundsDeciderConfig() {
  // @@protoc_insertion_point(destructor:jmc_auto.planning.STBoundsDeciderConfig)
  SharedDtor();
}

void STBoundsDeciderConfig::SharedDtor() {
}

void STBoundsDeciderConfig::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* STBoundsDeciderConfig::descriptor() {
  protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const STBoundsDeciderConfig& STBoundsDeciderConfig::default_instance() {
  protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::InitDefaults();
  return *internal_default_instance();
}

STBoundsDeciderConfig* STBoundsDeciderConfig::New(::google::protobuf::Arena* arena) const {
  STBoundsDeciderConfig* n = new STBoundsDeciderConfig;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void STBoundsDeciderConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.planning.STBoundsDeciderConfig)
  total_time_ = 7;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool STBoundsDeciderConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.planning.STBoundsDeciderConfig)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double total_time = 1 [default = 7];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {
          set_has_total_time();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &total_time_)));
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
  // @@protoc_insertion_point(parse_success:jmc_auto.planning.STBoundsDeciderConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.planning.STBoundsDeciderConfig)
  return false;
#undef DO_
}

void STBoundsDeciderConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.planning.STBoundsDeciderConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double total_time = 1 [default = 7];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->total_time(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.planning.STBoundsDeciderConfig)
}

::google::protobuf::uint8* STBoundsDeciderConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.planning.STBoundsDeciderConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double total_time = 1 [default = 7];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->total_time(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.planning.STBoundsDeciderConfig)
  return target;
}

size_t STBoundsDeciderConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.planning.STBoundsDeciderConfig)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // optional double total_time = 1 [default = 7];
  if (has_total_time()) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void STBoundsDeciderConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.planning.STBoundsDeciderConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const STBoundsDeciderConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const STBoundsDeciderConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.planning.STBoundsDeciderConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.planning.STBoundsDeciderConfig)
    MergeFrom(*source);
  }
}

void STBoundsDeciderConfig::MergeFrom(const STBoundsDeciderConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.planning.STBoundsDeciderConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_total_time()) {
    set_total_time(from.total_time());
  }
}

void STBoundsDeciderConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.planning.STBoundsDeciderConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void STBoundsDeciderConfig::CopyFrom(const STBoundsDeciderConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.planning.STBoundsDeciderConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool STBoundsDeciderConfig::IsInitialized() const {
  return true;
}

void STBoundsDeciderConfig::Swap(STBoundsDeciderConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void STBoundsDeciderConfig::InternalSwap(STBoundsDeciderConfig* other) {
  std::swap(total_time_, other->total_time_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata STBoundsDeciderConfig::GetMetadata() const {
  protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fplanning_2fproto_2fst_5fbounds_5fdecider_5fconfig_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// STBoundsDeciderConfig

// optional double total_time = 1 [default = 7];
bool STBoundsDeciderConfig::has_total_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void STBoundsDeciderConfig::set_has_total_time() {
  _has_bits_[0] |= 0x00000001u;
}
void STBoundsDeciderConfig::clear_has_total_time() {
  _has_bits_[0] &= ~0x00000001u;
}
void STBoundsDeciderConfig::clear_total_time() {
  total_time_ = 7;
  clear_has_total_time();
}
double STBoundsDeciderConfig::total_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.STBoundsDeciderConfig.total_time)
  return total_time_;
}
void STBoundsDeciderConfig::set_total_time(double value) {
  set_has_total_time();
  total_time_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.STBoundsDeciderConfig.total_time)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)