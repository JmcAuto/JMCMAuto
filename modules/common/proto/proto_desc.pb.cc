// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/proto_desc.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/common/proto/proto_desc.pb.h"

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
namespace common {
namespace proto {
class ProtoDescDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<ProtoDesc> {
} _ProtoDesc_default_instance_;

namespace protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDesc, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDesc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDesc, desc_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProtoDesc, dependencies_),
  0,
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(ProtoDesc)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_ProtoDesc_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/common/proto/proto_desc.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _ProtoDesc_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _ProtoDesc_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n%modules/common/proto/proto_desc.proto\022"
      "\025jmc_auto.common.proto\"Q\n\tProtoDesc\022\014\n\004d"
      "esc\030\001 \001(\014\0226\n\014dependencies\030\002 \003(\0132 .jmc_au"
      "to.common.proto.ProtoDesc"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 145);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/common/proto/proto_desc.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ProtoDesc::kDescFieldNumber;
const int ProtoDesc::kDependenciesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ProtoDesc::ProtoDesc()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.common.proto.ProtoDesc)
}
ProtoDesc::ProtoDesc(const ProtoDesc& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      dependencies_(from.dependencies_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_desc()) {
    desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.desc_);
  }
  // @@protoc_insertion_point(copy_constructor:jmc_auto.common.proto.ProtoDesc)
}

void ProtoDesc::SharedCtor() {
  _cached_size_ = 0;
  desc_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ProtoDesc::~ProtoDesc() {
  // @@protoc_insertion_point(destructor:jmc_auto.common.proto.ProtoDesc)
  SharedDtor();
}

void ProtoDesc::SharedDtor() {
  desc_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ProtoDesc::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProtoDesc::descriptor() {
  protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ProtoDesc& ProtoDesc::default_instance() {
  protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto::InitDefaults();
  return *internal_default_instance();
}

ProtoDesc* ProtoDesc::New(::google::protobuf::Arena* arena) const {
  ProtoDesc* n = new ProtoDesc;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProtoDesc::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.common.proto.ProtoDesc)
  dependencies_.Clear();
  if (has_desc()) {
    GOOGLE_DCHECK(!desc_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*desc_.UnsafeRawStringPointer())->clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ProtoDesc::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.common.proto.ProtoDesc)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes desc = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_desc()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .jmc_auto.common.proto.ProtoDesc dependencies = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_dependencies()));
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
  // @@protoc_insertion_point(parse_success:jmc_auto.common.proto.ProtoDesc)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.common.proto.ProtoDesc)
  return false;
#undef DO_
}

void ProtoDesc::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.common.proto.ProtoDesc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes desc = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->desc(), output);
  }

  // repeated .jmc_auto.common.proto.ProtoDesc dependencies = 2;
  for (unsigned int i = 0, n = this->dependencies_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->dependencies(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.common.proto.ProtoDesc)
}

::google::protobuf::uint8* ProtoDesc::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.common.proto.ProtoDesc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes desc = 1;
  if (cached_has_bits & 0x00000001u) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->desc(), target);
  }

  // repeated .jmc_auto.common.proto.ProtoDesc dependencies = 2;
  for (unsigned int i = 0, n = this->dependencies_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->dependencies(i), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.common.proto.ProtoDesc)
  return target;
}

size_t ProtoDesc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.common.proto.ProtoDesc)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .jmc_auto.common.proto.ProtoDesc dependencies = 2;
  {
    unsigned int count = this->dependencies_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->dependencies(i));
    }
  }

  // optional bytes desc = 1;
  if (has_desc()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->desc());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProtoDesc::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.common.proto.ProtoDesc)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoDesc* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ProtoDesc>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.common.proto.ProtoDesc)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.common.proto.ProtoDesc)
    MergeFrom(*source);
  }
}

void ProtoDesc::MergeFrom(const ProtoDesc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.common.proto.ProtoDesc)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  dependencies_.MergeFrom(from.dependencies_);
  if (from.has_desc()) {
    set_has_desc();
    desc_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.desc_);
  }
}

void ProtoDesc::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.common.proto.ProtoDesc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoDesc::CopyFrom(const ProtoDesc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.common.proto.ProtoDesc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoDesc::IsInitialized() const {
  return true;
}

void ProtoDesc::Swap(ProtoDesc* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProtoDesc::InternalSwap(ProtoDesc* other) {
  dependencies_.InternalSwap(&other->dependencies_);
  desc_.Swap(&other->desc_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProtoDesc::GetMetadata() const {
  protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcommon_2fproto_2fproto_5fdesc_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProtoDesc

// optional bytes desc = 1;
bool ProtoDesc::has_desc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ProtoDesc::set_has_desc() {
  _has_bits_[0] |= 0x00000001u;
}
void ProtoDesc::clear_has_desc() {
  _has_bits_[0] &= ~0x00000001u;
}
void ProtoDesc::clear_desc() {
  desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_desc();
}
const ::std::string& ProtoDesc::desc() const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.proto.ProtoDesc.desc)
  return desc_.GetNoArena();
}
void ProtoDesc::set_desc(const ::std::string& value) {
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.common.proto.ProtoDesc.desc)
}
#if LANG_CXX11
void ProtoDesc::set_desc(::std::string&& value) {
  set_has_desc();
  desc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.common.proto.ProtoDesc.desc)
}
#endif
void ProtoDesc::set_desc(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.common.proto.ProtoDesc.desc)
}
void ProtoDesc::set_desc(const void* value, size_t size) {
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.common.proto.ProtoDesc.desc)
}
::std::string* ProtoDesc::mutable_desc() {
  set_has_desc();
  // @@protoc_insertion_point(field_mutable:jmc_auto.common.proto.ProtoDesc.desc)
  return desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* ProtoDesc::release_desc() {
  // @@protoc_insertion_point(field_release:jmc_auto.common.proto.ProtoDesc.desc)
  clear_has_desc();
  return desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void ProtoDesc::set_allocated_desc(::std::string* desc) {
  if (desc != NULL) {
    set_has_desc();
  } else {
    clear_has_desc();
  }
  desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), desc);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.common.proto.ProtoDesc.desc)
}

// repeated .jmc_auto.common.proto.ProtoDesc dependencies = 2;
int ProtoDesc::dependencies_size() const {
  return dependencies_.size();
}
void ProtoDesc::clear_dependencies() {
  dependencies_.Clear();
}
const ::jmc_auto::common::proto::ProtoDesc& ProtoDesc::dependencies(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.proto.ProtoDesc.dependencies)
  return dependencies_.Get(index);
}
::jmc_auto::common::proto::ProtoDesc* ProtoDesc::mutable_dependencies(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.common.proto.ProtoDesc.dependencies)
  return dependencies_.Mutable(index);
}
::jmc_auto::common::proto::ProtoDesc* ProtoDesc::add_dependencies() {
  // @@protoc_insertion_point(field_add:jmc_auto.common.proto.ProtoDesc.dependencies)
  return dependencies_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::common::proto::ProtoDesc >*
ProtoDesc::mutable_dependencies() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.common.proto.ProtoDesc.dependencies)
  return &dependencies_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::proto::ProtoDesc >&
ProtoDesc::dependencies() const {
  // @@protoc_insertion_point(field_list:jmc_auto.common.proto.ProtoDesc.dependencies)
  return dependencies_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace common
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)
