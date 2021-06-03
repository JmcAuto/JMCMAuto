// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/map/proto/map_stop_sign.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/map/proto/map_stop_sign.pb.h"

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
namespace hdmap {
class StopSignDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<StopSign> {
} _StopSign_default_instance_;

namespace protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StopSign, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StopSign, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StopSign, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StopSign, stop_line_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StopSign, overlap_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StopSign, type_),
  0,
  ~0u,
  ~0u,
  1,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 9, sizeof(StopSign)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_StopSign_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/map/proto/map_stop_sign.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _StopSign_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::jmc_auto::hdmap::protobuf_modules_2fmap_2fproto_2fmap_5fid_2eproto::InitDefaults();
  ::jmc_auto::hdmap::protobuf_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto::InitDefaults();
  _StopSign_default_instance_.DefaultConstruct();
  _StopSign_default_instance_.get_mutable()->id_ = const_cast< ::jmc_auto::hdmap::Id*>(
      ::jmc_auto::hdmap::Id::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n%modules/map/proto/map_stop_sign.proto\022"
      "\016jmc_auto.hdmap\032\036modules/map/proto/map_i"
      "d.proto\032$modules/map/proto/map_geometry."
      "proto\"\212\002\n\010StopSign\022\036\n\002id\030\001 \001(\0132\022.jmc_aut"
      "o.hdmap.Id\022(\n\tstop_line\030\002 \003(\0132\025.jmc_auto"
      ".hdmap.Curve\022&\n\noverlap_id\030\003 \003(\0132\022.jmc_a"
      "uto.hdmap.Id\022/\n\004type\030\004 \001(\0162!.jmc_auto.hd"
      "map.StopSign.StopType\"[\n\010StopType\022\013\n\007UNK"
      "NOWN\020\000\022\013\n\007ONE_WAY\020\001\022\013\n\007TWO_WAY\020\002\022\r\n\tTHRE"
      "E_WAY\020\003\022\014\n\010FOUR_WAY\020\004\022\013\n\007ALL_WAY\020\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 394);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/map/proto/map_stop_sign.proto", &protobuf_RegisterTypes);
  ::jmc_auto::hdmap::protobuf_modules_2fmap_2fproto_2fmap_5fid_2eproto::AddDescriptors();
  ::jmc_auto::hdmap::protobuf_modules_2fmap_2fproto_2fmap_5fgeometry_2eproto::AddDescriptors();
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

}  // namespace protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto

const ::google::protobuf::EnumDescriptor* StopSign_StopType_descriptor() {
  protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::file_level_enum_descriptors[0];
}
bool StopSign_StopType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const StopSign_StopType StopSign::UNKNOWN;
const StopSign_StopType StopSign::ONE_WAY;
const StopSign_StopType StopSign::TWO_WAY;
const StopSign_StopType StopSign::THREE_WAY;
const StopSign_StopType StopSign::FOUR_WAY;
const StopSign_StopType StopSign::ALL_WAY;
const StopSign_StopType StopSign::StopType_MIN;
const StopSign_StopType StopSign::StopType_MAX;
const int StopSign::StopType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StopSign::kIdFieldNumber;
const int StopSign::kStopLineFieldNumber;
const int StopSign::kOverlapIdFieldNumber;
const int StopSign::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StopSign::StopSign()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.hdmap.StopSign)
}
StopSign::StopSign(const StopSign& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      stop_line_(from.stop_line_),
      overlap_id_(from.overlap_id_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_id()) {
    id_ = new ::jmc_auto::hdmap::Id(*from.id_);
  } else {
    id_ = NULL;
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:jmc_auto.hdmap.StopSign)
}

void StopSign::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&id_, 0, reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&id_) + sizeof(type_));
}

StopSign::~StopSign() {
  // @@protoc_insertion_point(destructor:jmc_auto.hdmap.StopSign)
  SharedDtor();
}

void StopSign::SharedDtor() {
  if (this != internal_default_instance()) {
    delete id_;
  }
}

void StopSign::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StopSign::descriptor() {
  protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const StopSign& StopSign::default_instance() {
  protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::InitDefaults();
  return *internal_default_instance();
}

StopSign* StopSign::New(::google::protobuf::Arena* arena) const {
  StopSign* n = new StopSign;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StopSign::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.hdmap.StopSign)
  stop_line_.Clear();
  overlap_id_.Clear();
  if (has_id()) {
    GOOGLE_DCHECK(id_ != NULL);
    id_->::jmc_auto::hdmap::Id::Clear();
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool StopSign::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.hdmap.StopSign)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .jmc_auto.hdmap.Id id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .jmc_auto.hdmap.Curve stop_line = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_stop_line()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .jmc_auto.hdmap.Id overlap_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_overlap_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .jmc_auto.hdmap.StopSign.StopType type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::jmc_auto::hdmap::StopSign_StopType_IsValid(value)) {
            set_type(static_cast< ::jmc_auto::hdmap::StopSign_StopType >(value));
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
  // @@protoc_insertion_point(parse_success:jmc_auto.hdmap.StopSign)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.hdmap.StopSign)
  return false;
#undef DO_
}

void StopSign::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.hdmap.StopSign)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .jmc_auto.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->id_, output);
  }

  // repeated .jmc_auto.hdmap.Curve stop_line = 2;
  for (unsigned int i = 0, n = this->stop_line_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->stop_line(i), output);
  }

  // repeated .jmc_auto.hdmap.Id overlap_id = 3;
  for (unsigned int i = 0, n = this->overlap_id_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->overlap_id(i), output);
  }

  // optional .jmc_auto.hdmap.StopSign.StopType type = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.hdmap.StopSign)
}

::google::protobuf::uint8* StopSign::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.hdmap.StopSign)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .jmc_auto.hdmap.Id id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->id_, deterministic, target);
  }

  // repeated .jmc_auto.hdmap.Curve stop_line = 2;
  for (unsigned int i = 0, n = this->stop_line_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->stop_line(i), deterministic, target);
  }

  // repeated .jmc_auto.hdmap.Id overlap_id = 3;
  for (unsigned int i = 0, n = this->overlap_id_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->overlap_id(i), deterministic, target);
  }

  // optional .jmc_auto.hdmap.StopSign.StopType type = 4;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.hdmap.StopSign)
  return target;
}

size_t StopSign::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.hdmap.StopSign)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .jmc_auto.hdmap.Curve stop_line = 2;
  {
    unsigned int count = this->stop_line_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->stop_line(i));
    }
  }

  // repeated .jmc_auto.hdmap.Id overlap_id = 3;
  {
    unsigned int count = this->overlap_id_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->overlap_id(i));
    }
  }

  if (_has_bits_[0 / 32] & 3u) {
    // optional .jmc_auto.hdmap.Id id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->id_);
    }

    // optional .jmc_auto.hdmap.StopSign.StopType type = 4;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StopSign::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.hdmap.StopSign)
  GOOGLE_DCHECK_NE(&from, this);
  const StopSign* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const StopSign>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.hdmap.StopSign)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.hdmap.StopSign)
    MergeFrom(*source);
  }
}

void StopSign::MergeFrom(const StopSign& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.hdmap.StopSign)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  stop_line_.MergeFrom(from.stop_line_);
  overlap_id_.MergeFrom(from.overlap_id_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_id()->::jmc_auto::hdmap::Id::MergeFrom(from.id());
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void StopSign::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.hdmap.StopSign)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StopSign::CopyFrom(const StopSign& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.hdmap.StopSign)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StopSign::IsInitialized() const {
  return true;
}

void StopSign::Swap(StopSign* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StopSign::InternalSwap(StopSign* other) {
  stop_line_.InternalSwap(&other->stop_line_);
  overlap_id_.InternalSwap(&other->overlap_id_);
  std::swap(id_, other->id_);
  std::swap(type_, other->type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StopSign::GetMetadata() const {
  protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fmap_2fproto_2fmap_5fstop_5fsign_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StopSign

// optional .jmc_auto.hdmap.Id id = 1;
bool StopSign::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void StopSign::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void StopSign::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void StopSign::clear_id() {
  if (id_ != NULL) id_->::jmc_auto::hdmap::Id::Clear();
  clear_has_id();
}
const ::jmc_auto::hdmap::Id& StopSign::id() const {
  // @@protoc_insertion_point(field_get:jmc_auto.hdmap.StopSign.id)
  return id_ != NULL ? *id_
                         : *::jmc_auto::hdmap::Id::internal_default_instance();
}
::jmc_auto::hdmap::Id* StopSign::mutable_id() {
  set_has_id();
  if (id_ == NULL) {
    id_ = new ::jmc_auto::hdmap::Id;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.hdmap.StopSign.id)
  return id_;
}
::jmc_auto::hdmap::Id* StopSign::release_id() {
  // @@protoc_insertion_point(field_release:jmc_auto.hdmap.StopSign.id)
  clear_has_id();
  ::jmc_auto::hdmap::Id* temp = id_;
  id_ = NULL;
  return temp;
}
void StopSign::set_allocated_id(::jmc_auto::hdmap::Id* id) {
  delete id_;
  id_ = id;
  if (id) {
    set_has_id();
  } else {
    clear_has_id();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.hdmap.StopSign.id)
}

// repeated .jmc_auto.hdmap.Curve stop_line = 2;
int StopSign::stop_line_size() const {
  return stop_line_.size();
}
void StopSign::clear_stop_line() {
  stop_line_.Clear();
}
const ::jmc_auto::hdmap::Curve& StopSign::stop_line(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.hdmap.StopSign.stop_line)
  return stop_line_.Get(index);
}
::jmc_auto::hdmap::Curve* StopSign::mutable_stop_line(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.hdmap.StopSign.stop_line)
  return stop_line_.Mutable(index);
}
::jmc_auto::hdmap::Curve* StopSign::add_stop_line() {
  // @@protoc_insertion_point(field_add:jmc_auto.hdmap.StopSign.stop_line)
  return stop_line_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::hdmap::Curve >*
StopSign::mutable_stop_line() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.hdmap.StopSign.stop_line)
  return &stop_line_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::hdmap::Curve >&
StopSign::stop_line() const {
  // @@protoc_insertion_point(field_list:jmc_auto.hdmap.StopSign.stop_line)
  return stop_line_;
}

// repeated .jmc_auto.hdmap.Id overlap_id = 3;
int StopSign::overlap_id_size() const {
  return overlap_id_.size();
}
void StopSign::clear_overlap_id() {
  overlap_id_.Clear();
}
const ::jmc_auto::hdmap::Id& StopSign::overlap_id(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.hdmap.StopSign.overlap_id)
  return overlap_id_.Get(index);
}
::jmc_auto::hdmap::Id* StopSign::mutable_overlap_id(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.hdmap.StopSign.overlap_id)
  return overlap_id_.Mutable(index);
}
::jmc_auto::hdmap::Id* StopSign::add_overlap_id() {
  // @@protoc_insertion_point(field_add:jmc_auto.hdmap.StopSign.overlap_id)
  return overlap_id_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::hdmap::Id >*
StopSign::mutable_overlap_id() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.hdmap.StopSign.overlap_id)
  return &overlap_id_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::hdmap::Id >&
StopSign::overlap_id() const {
  // @@protoc_insertion_point(field_list:jmc_auto.hdmap.StopSign.overlap_id)
  return overlap_id_;
}

// optional .jmc_auto.hdmap.StopSign.StopType type = 4;
bool StopSign::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void StopSign::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
void StopSign::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void StopSign::clear_type() {
  type_ = 0;
  clear_has_type();
}
::jmc_auto::hdmap::StopSign_StopType StopSign::type() const {
  // @@protoc_insertion_point(field_get:jmc_auto.hdmap.StopSign.type)
  return static_cast< ::jmc_auto::hdmap::StopSign_StopType >(type_);
}
void StopSign::set_type(::jmc_auto::hdmap::StopSign_StopType value) {
  assert(::jmc_auto::hdmap::StopSign_StopType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.hdmap.StopSign.type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)
