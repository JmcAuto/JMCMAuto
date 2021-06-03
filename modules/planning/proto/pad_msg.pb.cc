// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/pad_msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "modules/planning/proto/pad_msg.pb.h"

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
class PadMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<PadMessage> {
} _PadMessage_default_instance_;

namespace protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto {


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
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PadMessage, action_),
  0,
  1,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(PadMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_PadMessage_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "modules/planning/proto/pad_msg.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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
  _PadMessage_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::jmc_auto::common::protobuf_modules_2fcommon_2fproto_2fheader_2eproto::InitDefaults();
  _PadMessage_default_instance_.DefaultConstruct();
  _PadMessage_default_instance_.get_mutable()->header_ = const_cast< ::jmc_auto::common::Header*>(
      ::jmc_auto::common::Header::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n$modules/planning/proto/pad_msg.proto\022\021"
      "jmc_auto.planning\032!modules/common/proto/"
      "header.proto\"g\n\nPadMessage\022\'\n\006header\030\001 \001"
      "(\0132\027.jmc_auto.common.Header\0220\n\006action\030\002 "
      "\001(\0162 .jmc_auto.planning.DrivingAction*t\n"
      "\rDrivingAction\022\010\n\004NONE\020d\022\n\n\006FOLLOW\020\000\022\017\n\013"
      "CHANGE_LEFT\020\001\022\020\n\014CHANGE_RIGHT\020\002\022\r\n\tPULL_"
      "OVER\020\003\022\010\n\004STOP\020\004\022\021\n\rRESUME_CRUISE\020\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 315);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "modules/planning/proto/pad_msg.proto", &protobuf_RegisterTypes);
  ::jmc_auto::common::protobuf_modules_2fcommon_2fproto_2fheader_2eproto::AddDescriptors();
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

}  // namespace protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto

const ::google::protobuf::EnumDescriptor* DrivingAction_descriptor() {
  protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::file_level_enum_descriptors[0];
}
bool DrivingAction_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 100:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PadMessage::kHeaderFieldNumber;
const int PadMessage::kActionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PadMessage::PadMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:jmc_auto.planning.PadMessage)
}
PadMessage::PadMessage(const PadMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::jmc_auto::common::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  action_ = from.action_;
  // @@protoc_insertion_point(copy_constructor:jmc_auto.planning.PadMessage)
}

void PadMessage::SharedCtor() {
  _cached_size_ = 0;
  header_ = NULL;
  action_ = 100;
}

PadMessage::~PadMessage() {
  // @@protoc_insertion_point(destructor:jmc_auto.planning.PadMessage)
  SharedDtor();
}

void PadMessage::SharedDtor() {
  if (this != internal_default_instance()) {
    delete header_;
  }
}

void PadMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PadMessage::descriptor() {
  protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const PadMessage& PadMessage::default_instance() {
  protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::InitDefaults();
  return *internal_default_instance();
}

PadMessage* PadMessage::New(::google::protobuf::Arena* arena) const {
  PadMessage* n = new PadMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PadMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:jmc_auto.planning.PadMessage)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_header()) {
      GOOGLE_DCHECK(header_ != NULL);
      header_->::jmc_auto::common::Header::Clear();
    }
    action_ = 100;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PadMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:jmc_auto.planning.PadMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .jmc_auto.common.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .jmc_auto.planning.DrivingAction action = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::jmc_auto::planning::DrivingAction_IsValid(value)) {
            set_action(static_cast< ::jmc_auto::planning::DrivingAction >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
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
  // @@protoc_insertion_point(parse_success:jmc_auto.planning.PadMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:jmc_auto.planning.PadMessage)
  return false;
#undef DO_
}

void PadMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:jmc_auto.planning.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .jmc_auto.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // optional .jmc_auto.planning.DrivingAction action = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->action(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:jmc_auto.planning.PadMessage)
}

::google::protobuf::uint8* PadMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:jmc_auto.planning.PadMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .jmc_auto.common.Header header = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, deterministic, target);
  }

  // optional .jmc_auto.planning.DrivingAction action = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->action(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:jmc_auto.planning.PadMessage)
  return target;
}

size_t PadMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:jmc_auto.planning.PadMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional .jmc_auto.common.Header header = 1;
    if (has_header()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->header_);
    }

    // optional .jmc_auto.planning.DrivingAction action = 2;
    if (has_action()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->action());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PadMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:jmc_auto.planning.PadMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const PadMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const PadMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:jmc_auto.planning.PadMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:jmc_auto.planning.PadMessage)
    MergeFrom(*source);
  }
}

void PadMessage::MergeFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:jmc_auto.planning.PadMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_header()->::jmc_auto::common::Header::MergeFrom(from.header());
    }
    if (cached_has_bits & 0x00000002u) {
      action_ = from.action_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PadMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:jmc_auto.planning.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PadMessage::CopyFrom(const PadMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:jmc_auto.planning.PadMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PadMessage::IsInitialized() const {
  return true;
}

void PadMessage::Swap(PadMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PadMessage::InternalSwap(PadMessage* other) {
  std::swap(header_, other->header_);
  std::swap(action_, other->action_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PadMessage::GetMetadata() const {
  protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_modules_2fplanning_2fproto_2fpad_5fmsg_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PadMessage

// optional .jmc_auto.common.Header header = 1;
bool PadMessage::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PadMessage::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
void PadMessage::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
void PadMessage::clear_header() {
  if (header_ != NULL) header_->::jmc_auto::common::Header::Clear();
  clear_has_header();
}
const ::jmc_auto::common::Header& PadMessage::header() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PadMessage.header)
  return header_ != NULL ? *header_
                         : *::jmc_auto::common::Header::internal_default_instance();
}
::jmc_auto::common::Header* PadMessage::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::jmc_auto::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.planning.PadMessage.header)
  return header_;
}
::jmc_auto::common::Header* PadMessage::release_header() {
  // @@protoc_insertion_point(field_release:jmc_auto.planning.PadMessage.header)
  clear_has_header();
  ::jmc_auto::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void PadMessage::set_allocated_header(::jmc_auto::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.planning.PadMessage.header)
}

// optional .jmc_auto.planning.DrivingAction action = 2;
bool PadMessage::has_action() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PadMessage::set_has_action() {
  _has_bits_[0] |= 0x00000002u;
}
void PadMessage::clear_has_action() {
  _has_bits_[0] &= ~0x00000002u;
}
void PadMessage::clear_action() {
  action_ = 100;
  clear_has_action();
}
::jmc_auto::planning::DrivingAction PadMessage::action() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PadMessage.action)
  return static_cast< ::jmc_auto::planning::DrivingAction >(action_);
}
void PadMessage::set_action(::jmc_auto::planning::DrivingAction value) {
  assert(::jmc_auto::planning::DrivingAction_IsValid(value));
  set_has_action();
  action_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PadMessage.action)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)
