// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/util/testdata/simple.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/common/util/testdata/simple.pb.h"

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
namespace util {
namespace test {
class SimpleMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SimpleMessage> {
} _SimpleMessage_default_instance_;
class SimpleRepeatedMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SimpleRepeatedMessage> {
} _SimpleRepeatedMessage_default_instance_;

namespace protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleMessage, integer_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleMessage, text_),
  1,
  0,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleRepeatedMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleRepeatedMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SimpleRepeatedMessage, message_),
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(SimpleMessage)},
  { 9, 15, sizeof(SimpleRepeatedMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_SimpleMessage_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_SimpleRepeatedMessage_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/common/util/testdata/simple.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _SimpleMessage_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _SimpleRepeatedMessage_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _SimpleMessage_default_instance_.DefaultConstruct();
  _SimpleRepeatedMessage_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n)modules/common/util/testdata/simple.pr"
      "oto\022\031jmc_auto.common.util.test\".\n\rSimple"
      "Message\022\017\n\007integer\030\001 \001(\005\022\014\n\004text\030\002 \001(\t\"R"
      "\n\025SimpleRepeatedMessage\0229\n\007message\030\001 \003(\013"
      "2(.jmc_auto.common.util.test.SimpleMessa"
      "ge"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 202);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/common/util/testdata/simple.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SimpleMessage::kIntegerFieldNumber;
const int SimpleMessage::kTextFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SimpleMessage::SimpleMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.common.util.test.SimpleMessage)
}
SimpleMessage::SimpleMessage(const SimpleMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_text()) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  integer_ = from.integer_;
  // @@protoc_insertion_point(copy_constructor:jmc_auto.common.util.test.SimpleMessage)
}

void SimpleMessage::SharedCtor() {
  _cached_size_ = 0;
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  integer_ = 0;
}

SimpleMessage::~SimpleMessage() {
  // @@protoc_insertion_point(destructor:jmc_auto.common.util.test.SimpleMessage)
  SharedDtor();
}

void SimpleMessage::SharedDtor() {
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SimpleMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SimpleMessage::descriptor() {
  protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SimpleMessage& SimpleMessage::default_instance() {
  protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::InitDefaults();
  return *internal_default_instance();
}

SimpleMessage* SimpleMessage::New(::google::protobuf::Arena* arena) const {
  SimpleMessage* n = new SimpleMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SimpleMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.common.util.test.SimpleMessage)
  if (has_text()) {
    GOOGLE_DCHECK(!text_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*text_.UnsafeRawStringPointer())->clear();
  }
  integer_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SimpleMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.common.util.test.SimpleMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 integer = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_integer();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &integer_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string text = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "jmc_auto.common.util.test.SimpleMessage.text");
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
  // @@protoc_insertion_point(parse_success:jmc_auto.common.util.test.SimpleMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.common.util.test.SimpleMessage)
  return false;
#undef DO_
}

void SimpleMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.common.util.test.SimpleMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 integer = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->integer(), output);
  }

  // optional string text = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "jmc_auto.common.util.test.SimpleMessage.text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->text(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.common.util.test.SimpleMessage)
}

::google::protobuf::uint8* SimpleMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.common.util.test.SimpleMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 integer = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->integer(), target);
  }

  // optional string text = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "jmc_auto.common.util.test.SimpleMessage.text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->text(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.common.util.test.SimpleMessage)
  return target;
}

size_t SimpleMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.common.util.test.SimpleMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional string text = 2;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

    // optional int32 integer = 1;
    if (has_integer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->integer());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SimpleMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.common.util.test.SimpleMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const SimpleMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SimpleMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.common.util.test.SimpleMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.common.util.test.SimpleMessage)
    MergeFrom(*source);
  }
}

void SimpleMessage::MergeFrom(const SimpleMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.common.util.test.SimpleMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_text();
      text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
    }
    if (cached_has_bits & 0x00000002u) {
      integer_ = from.integer_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void SimpleMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.common.util.test.SimpleMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SimpleMessage::CopyFrom(const SimpleMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.common.util.test.SimpleMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimpleMessage::IsInitialized() const {
  return true;
}

void SimpleMessage::Swap(SimpleMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SimpleMessage::InternalSwap(SimpleMessage* other) {
  text_.Swap(&other->text_);
  std::swap(integer_, other->integer_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SimpleMessage::GetMetadata() const {
  protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SimpleMessage

// optional int32 integer = 1;
bool SimpleMessage::has_integer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SimpleMessage::set_has_integer() {
  _has_bits_[0] |= 0x00000002u;
}
void SimpleMessage::clear_has_integer() {
  _has_bits_[0] &= ~0x00000002u;
}
void SimpleMessage::clear_integer() {
  integer_ = 0;
  clear_has_integer();
}
::google::protobuf::int32 SimpleMessage::integer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.util.test.SimpleMessage.integer)
  return integer_;
}
void SimpleMessage::set_integer(::google::protobuf::int32 value) {
  set_has_integer();
  integer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.common.util.test.SimpleMessage.integer)
}

// optional string text = 2;
bool SimpleMessage::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SimpleMessage::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
void SimpleMessage::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
void SimpleMessage::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_text();
}
const ::std::string& SimpleMessage::text() const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.util.test.SimpleMessage.text)
  return text_.GetNoArena();
}
void SimpleMessage::set_text(const ::std::string& value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.common.util.test.SimpleMessage.text)
}
#if LANG_CXX11
void SimpleMessage::set_text(::std::string&& value) {
  set_has_text();
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.common.util.test.SimpleMessage.text)
}
#endif
void SimpleMessage::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.common.util.test.SimpleMessage.text)
}
void SimpleMessage::set_text(const char* value, size_t size) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.common.util.test.SimpleMessage.text)
}
::std::string* SimpleMessage::mutable_text() {
  set_has_text();
  // @@protoc_insertion_point(field_mutable:jmc_auto.common.util.test.SimpleMessage.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SimpleMessage::release_text() {
  // @@protoc_insertion_point(field_release:jmc_auto.common.util.test.SimpleMessage.text)
  clear_has_text();
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SimpleMessage::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    set_has_text();
  } else {
    clear_has_text();
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.common.util.test.SimpleMessage.text)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SimpleRepeatedMessage::kMessageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SimpleRepeatedMessage::SimpleRepeatedMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.common.util.test.SimpleRepeatedMessage)
}
SimpleRepeatedMessage::SimpleRepeatedMessage(const SimpleRepeatedMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      message_(from.message_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:jmc_auto.common.util.test.SimpleRepeatedMessage)
}

void SimpleRepeatedMessage::SharedCtor() {
  _cached_size_ = 0;
}

SimpleRepeatedMessage::~SimpleRepeatedMessage() {
  // @@protoc_insertion_point(destructor:jmc_auto.common.util.test.SimpleRepeatedMessage)
  SharedDtor();
}

void SimpleRepeatedMessage::SharedDtor() {
}

void SimpleRepeatedMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SimpleRepeatedMessage::descriptor() {
  protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SimpleRepeatedMessage& SimpleRepeatedMessage::default_instance() {
  protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::InitDefaults();
  return *internal_default_instance();
}

SimpleRepeatedMessage* SimpleRepeatedMessage::New(::google::protobuf::Arena* arena) const {
  SimpleRepeatedMessage* n = new SimpleRepeatedMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SimpleRepeatedMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  message_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool SimpleRepeatedMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_message()));
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
  // @@protoc_insertion_point(parse_success:jmc_auto.common.util.test.SimpleRepeatedMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.common.util.test.SimpleRepeatedMessage)
  return false;
#undef DO_
}

void SimpleRepeatedMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
  for (unsigned int i = 0, n = this->message_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->message(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.common.util.test.SimpleRepeatedMessage)
}

::google::protobuf::uint8* SimpleRepeatedMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
  for (unsigned int i = 0, n = this->message_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->message(i), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.common.util.test.SimpleRepeatedMessage)
  return target;
}

size_t SimpleRepeatedMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
  {
    unsigned int count = this->message_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->message(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SimpleRepeatedMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const SimpleRepeatedMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SimpleRepeatedMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.common.util.test.SimpleRepeatedMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.common.util.test.SimpleRepeatedMessage)
    MergeFrom(*source);
  }
}

void SimpleRepeatedMessage::MergeFrom(const SimpleRepeatedMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  message_.MergeFrom(from.message_);
}

void SimpleRepeatedMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SimpleRepeatedMessage::CopyFrom(const SimpleRepeatedMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.common.util.test.SimpleRepeatedMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SimpleRepeatedMessage::IsInitialized() const {
  return true;
}

void SimpleRepeatedMessage::Swap(SimpleRepeatedMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SimpleRepeatedMessage::InternalSwap(SimpleRepeatedMessage* other) {
  message_.InternalSwap(&other->message_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SimpleRepeatedMessage::GetMetadata() const {
  protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SimpleRepeatedMessage

// repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
int SimpleRepeatedMessage::message_size() const {
  return message_.size();
}
void SimpleRepeatedMessage::clear_message() {
  message_.Clear();
}
const ::jmc_auto::common::util::test::SimpleMessage& SimpleRepeatedMessage::message(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_.Get(index);
}
::jmc_auto::common::util::test::SimpleMessage* SimpleRepeatedMessage::mutable_message(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_.Mutable(index);
}
::jmc_auto::common::util::test::SimpleMessage* SimpleRepeatedMessage::add_message() {
  // @@protoc_insertion_point(field_add:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_.Add();
}
::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage >*
SimpleRepeatedMessage::mutable_message() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return &message_;
}
const ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage >&
SimpleRepeatedMessage::message() const {
  // @@protoc_insertion_point(field_list:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace test
}  // namespace util
}  // namespace common
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)
