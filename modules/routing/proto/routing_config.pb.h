// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/routing/proto/routing_config.proto

#ifndef PROTOBUF_modules_2frouting_2fproto_2frouting_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2frouting_2fproto_2frouting_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace routing {
class RoutingConfig;
class RoutingConfigDefaultTypeInternal;
extern RoutingConfigDefaultTypeInternal _RoutingConfig_default_instance_;
}  // namespace routing
}  // namespace jmc_auto

namespace jmc_auto {
namespace routing {

namespace protobuf_modules_2frouting_2fproto_2frouting_5fconfig_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2frouting_2fproto_2frouting_5fconfig_2eproto

// ===================================================================

class RoutingConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.routing.RoutingConfig) */ {
 public:
  RoutingConfig();
  virtual ~RoutingConfig();

  RoutingConfig(const RoutingConfig& from);

  inline RoutingConfig& operator=(const RoutingConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RoutingConfig& default_instance();

  static inline const RoutingConfig* internal_default_instance() {
    return reinterpret_cast<const RoutingConfig*>(
               &_RoutingConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RoutingConfig* other);

  // implements Message ----------------------------------------------

  inline RoutingConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  RoutingConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RoutingConfig& from);
  void MergeFrom(const RoutingConfig& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RoutingConfig* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional double base_speed = 1;
  bool has_base_speed() const;
  void clear_base_speed();
  static const int kBaseSpeedFieldNumber = 1;
  double base_speed() const;
  void set_base_speed(double value);

  // optional double left_turn_penalty = 2;
  bool has_left_turn_penalty() const;
  void clear_left_turn_penalty();
  static const int kLeftTurnPenaltyFieldNumber = 2;
  double left_turn_penalty() const;
  void set_left_turn_penalty(double value);

  // optional double right_turn_penalty = 3;
  bool has_right_turn_penalty() const;
  void clear_right_turn_penalty();
  static const int kRightTurnPenaltyFieldNumber = 3;
  double right_turn_penalty() const;
  void set_right_turn_penalty(double value);

  // optional double uturn_penalty = 4;
  bool has_uturn_penalty() const;
  void clear_uturn_penalty();
  static const int kUturnPenaltyFieldNumber = 4;
  double uturn_penalty() const;
  void set_uturn_penalty(double value);

  // optional double change_penalty = 5;
  bool has_change_penalty() const;
  void clear_change_penalty();
  static const int kChangePenaltyFieldNumber = 5;
  double change_penalty() const;
  void set_change_penalty(double value);

  // optional double base_changing_length = 6;
  bool has_base_changing_length() const;
  void clear_base_changing_length();
  static const int kBaseChangingLengthFieldNumber = 6;
  double base_changing_length() const;
  void set_base_changing_length(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.routing.RoutingConfig)
 private:
  void set_has_base_speed();
  void clear_has_base_speed();
  void set_has_left_turn_penalty();
  void clear_has_left_turn_penalty();
  void set_has_right_turn_penalty();
  void clear_has_right_turn_penalty();
  void set_has_uturn_penalty();
  void clear_has_uturn_penalty();
  void set_has_change_penalty();
  void clear_has_change_penalty();
  void set_has_base_changing_length();
  void clear_has_base_changing_length();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double base_speed_;
  double left_turn_penalty_;
  double right_turn_penalty_;
  double uturn_penalty_;
  double change_penalty_;
  double base_changing_length_;
  friend struct protobuf_modules_2frouting_2fproto_2frouting_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RoutingConfig

// optional double base_speed = 1;
inline bool RoutingConfig::has_base_speed() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RoutingConfig::set_has_base_speed() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RoutingConfig::clear_has_base_speed() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RoutingConfig::clear_base_speed() {
  base_speed_ = 0;
  clear_has_base_speed();
}
inline double RoutingConfig::base_speed() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.RoutingConfig.base_speed)
  return base_speed_;
}
inline void RoutingConfig::set_base_speed(double value) {
  set_has_base_speed();
  base_speed_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.routing.RoutingConfig.base_speed)
}

// optional double left_turn_penalty = 2;
inline bool RoutingConfig::has_left_turn_penalty() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RoutingConfig::set_has_left_turn_penalty() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RoutingConfig::clear_has_left_turn_penalty() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RoutingConfig::clear_left_turn_penalty() {
  left_turn_penalty_ = 0;
  clear_has_left_turn_penalty();
}
inline double RoutingConfig::left_turn_penalty() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.RoutingConfig.left_turn_penalty)
  return left_turn_penalty_;
}
inline void RoutingConfig::set_left_turn_penalty(double value) {
  set_has_left_turn_penalty();
  left_turn_penalty_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.routing.RoutingConfig.left_turn_penalty)
}

// optional double right_turn_penalty = 3;
inline bool RoutingConfig::has_right_turn_penalty() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RoutingConfig::set_has_right_turn_penalty() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RoutingConfig::clear_has_right_turn_penalty() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RoutingConfig::clear_right_turn_penalty() {
  right_turn_penalty_ = 0;
  clear_has_right_turn_penalty();
}
inline double RoutingConfig::right_turn_penalty() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.RoutingConfig.right_turn_penalty)
  return right_turn_penalty_;
}
inline void RoutingConfig::set_right_turn_penalty(double value) {
  set_has_right_turn_penalty();
  right_turn_penalty_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.routing.RoutingConfig.right_turn_penalty)
}

// optional double uturn_penalty = 4;
inline bool RoutingConfig::has_uturn_penalty() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RoutingConfig::set_has_uturn_penalty() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RoutingConfig::clear_has_uturn_penalty() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RoutingConfig::clear_uturn_penalty() {
  uturn_penalty_ = 0;
  clear_has_uturn_penalty();
}
inline double RoutingConfig::uturn_penalty() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.RoutingConfig.uturn_penalty)
  return uturn_penalty_;
}
inline void RoutingConfig::set_uturn_penalty(double value) {
  set_has_uturn_penalty();
  uturn_penalty_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.routing.RoutingConfig.uturn_penalty)
}

// optional double change_penalty = 5;
inline bool RoutingConfig::has_change_penalty() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RoutingConfig::set_has_change_penalty() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RoutingConfig::clear_has_change_penalty() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RoutingConfig::clear_change_penalty() {
  change_penalty_ = 0;
  clear_has_change_penalty();
}
inline double RoutingConfig::change_penalty() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.RoutingConfig.change_penalty)
  return change_penalty_;
}
inline void RoutingConfig::set_change_penalty(double value) {
  set_has_change_penalty();
  change_penalty_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.routing.RoutingConfig.change_penalty)
}

// optional double base_changing_length = 6;
inline bool RoutingConfig::has_base_changing_length() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RoutingConfig::set_has_base_changing_length() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RoutingConfig::clear_has_base_changing_length() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RoutingConfig::clear_base_changing_length() {
  base_changing_length_ = 0;
  clear_has_base_changing_length();
}
inline double RoutingConfig::base_changing_length() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.RoutingConfig.base_changing_length)
  return base_changing_length_;
}
inline void RoutingConfig::set_base_changing_length(double value) {
  set_has_base_changing_length();
  base_changing_length_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.routing.RoutingConfig.base_changing_length)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace routing
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2frouting_2fproto_2frouting_5fconfig_2eproto__INCLUDED
