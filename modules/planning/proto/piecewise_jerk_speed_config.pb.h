// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/piecewise_jerk_speed_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fspeed_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fspeed_5fconfig_2eproto__INCLUDED

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
namespace planning {
class PiecewiseJerkSpeedConfig;
class PiecewiseJerkSpeedConfigDefaultTypeInternal;
extern PiecewiseJerkSpeedConfigDefaultTypeInternal _PiecewiseJerkSpeedConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fspeed_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fspeed_5fconfig_2eproto

// ===================================================================

class PiecewiseJerkSpeedConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.PiecewiseJerkSpeedConfig) */ {
 public:
  PiecewiseJerkSpeedConfig();
  virtual ~PiecewiseJerkSpeedConfig();

  PiecewiseJerkSpeedConfig(const PiecewiseJerkSpeedConfig& from);

  inline PiecewiseJerkSpeedConfig& operator=(const PiecewiseJerkSpeedConfig& from) {
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
  static const PiecewiseJerkSpeedConfig& default_instance();

  static inline const PiecewiseJerkSpeedConfig* internal_default_instance() {
    return reinterpret_cast<const PiecewiseJerkSpeedConfig*>(
               &_PiecewiseJerkSpeedConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(PiecewiseJerkSpeedConfig* other);

  // implements Message ----------------------------------------------

  inline PiecewiseJerkSpeedConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  PiecewiseJerkSpeedConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PiecewiseJerkSpeedConfig& from);
  void MergeFrom(const PiecewiseJerkSpeedConfig& from);
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
  void InternalSwap(PiecewiseJerkSpeedConfig* other);
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

  // optional double acc_weight = 1 [default = 1];
  bool has_acc_weight() const;
  void clear_acc_weight();
  static const int kAccWeightFieldNumber = 1;
  double acc_weight() const;
  void set_acc_weight(double value);

  // optional double jerk_weight = 2 [default = 10];
  bool has_jerk_weight() const;
  void clear_jerk_weight();
  static const int kJerkWeightFieldNumber = 2;
  double jerk_weight() const;
  void set_jerk_weight(double value);

  // optional double kappa_penalty_weight = 3 [default = 1000];
  bool has_kappa_penalty_weight() const;
  void clear_kappa_penalty_weight();
  static const int kKappaPenaltyWeightFieldNumber = 3;
  double kappa_penalty_weight() const;
  void set_kappa_penalty_weight(double value);

  // optional double ref_s_weight = 4 [default = 10];
  bool has_ref_s_weight() const;
  void clear_ref_s_weight();
  static const int kRefSWeightFieldNumber = 4;
  double ref_s_weight() const;
  void set_ref_s_weight(double value);

  // optional double ref_v_weight = 5 [default = 10];
  bool has_ref_v_weight() const;
  void clear_ref_v_weight();
  static const int kRefVWeightFieldNumber = 5;
  double ref_v_weight() const;
  void set_ref_v_weight(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.PiecewiseJerkSpeedConfig)
 private:
  void set_has_acc_weight();
  void clear_has_acc_weight();
  void set_has_jerk_weight();
  void clear_has_jerk_weight();
  void set_has_kappa_penalty_weight();
  void clear_has_kappa_penalty_weight();
  void set_has_ref_s_weight();
  void clear_has_ref_s_weight();
  void set_has_ref_v_weight();
  void clear_has_ref_v_weight();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double acc_weight_;
  double jerk_weight_;
  double kappa_penalty_weight_;
  double ref_s_weight_;
  double ref_v_weight_;
  friend struct protobuf_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fspeed_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PiecewiseJerkSpeedConfig

// optional double acc_weight = 1 [default = 1];
inline bool PiecewiseJerkSpeedConfig::has_acc_weight() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PiecewiseJerkSpeedConfig::set_has_acc_weight() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PiecewiseJerkSpeedConfig::clear_has_acc_weight() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PiecewiseJerkSpeedConfig::clear_acc_weight() {
  acc_weight_ = 1;
  clear_has_acc_weight();
}
inline double PiecewiseJerkSpeedConfig::acc_weight() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PiecewiseJerkSpeedConfig.acc_weight)
  return acc_weight_;
}
inline void PiecewiseJerkSpeedConfig::set_acc_weight(double value) {
  set_has_acc_weight();
  acc_weight_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PiecewiseJerkSpeedConfig.acc_weight)
}

// optional double jerk_weight = 2 [default = 10];
inline bool PiecewiseJerkSpeedConfig::has_jerk_weight() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PiecewiseJerkSpeedConfig::set_has_jerk_weight() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PiecewiseJerkSpeedConfig::clear_has_jerk_weight() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PiecewiseJerkSpeedConfig::clear_jerk_weight() {
  jerk_weight_ = 10;
  clear_has_jerk_weight();
}
inline double PiecewiseJerkSpeedConfig::jerk_weight() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PiecewiseJerkSpeedConfig.jerk_weight)
  return jerk_weight_;
}
inline void PiecewiseJerkSpeedConfig::set_jerk_weight(double value) {
  set_has_jerk_weight();
  jerk_weight_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PiecewiseJerkSpeedConfig.jerk_weight)
}

// optional double kappa_penalty_weight = 3 [default = 1000];
inline bool PiecewiseJerkSpeedConfig::has_kappa_penalty_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PiecewiseJerkSpeedConfig::set_has_kappa_penalty_weight() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PiecewiseJerkSpeedConfig::clear_has_kappa_penalty_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PiecewiseJerkSpeedConfig::clear_kappa_penalty_weight() {
  kappa_penalty_weight_ = 1000;
  clear_has_kappa_penalty_weight();
}
inline double PiecewiseJerkSpeedConfig::kappa_penalty_weight() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PiecewiseJerkSpeedConfig.kappa_penalty_weight)
  return kappa_penalty_weight_;
}
inline void PiecewiseJerkSpeedConfig::set_kappa_penalty_weight(double value) {
  set_has_kappa_penalty_weight();
  kappa_penalty_weight_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PiecewiseJerkSpeedConfig.kappa_penalty_weight)
}

// optional double ref_s_weight = 4 [default = 10];
inline bool PiecewiseJerkSpeedConfig::has_ref_s_weight() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PiecewiseJerkSpeedConfig::set_has_ref_s_weight() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PiecewiseJerkSpeedConfig::clear_has_ref_s_weight() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PiecewiseJerkSpeedConfig::clear_ref_s_weight() {
  ref_s_weight_ = 10;
  clear_has_ref_s_weight();
}
inline double PiecewiseJerkSpeedConfig::ref_s_weight() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PiecewiseJerkSpeedConfig.ref_s_weight)
  return ref_s_weight_;
}
inline void PiecewiseJerkSpeedConfig::set_ref_s_weight(double value) {
  set_has_ref_s_weight();
  ref_s_weight_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PiecewiseJerkSpeedConfig.ref_s_weight)
}

// optional double ref_v_weight = 5 [default = 10];
inline bool PiecewiseJerkSpeedConfig::has_ref_v_weight() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PiecewiseJerkSpeedConfig::set_has_ref_v_weight() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PiecewiseJerkSpeedConfig::clear_has_ref_v_weight() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PiecewiseJerkSpeedConfig::clear_ref_v_weight() {
  ref_v_weight_ = 10;
  clear_has_ref_v_weight();
}
inline double PiecewiseJerkSpeedConfig::ref_v_weight() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.PiecewiseJerkSpeedConfig.ref_v_weight)
  return ref_v_weight_;
}
inline void PiecewiseJerkSpeedConfig::set_ref_v_weight(double value) {
  set_has_ref_v_weight();
  ref_v_weight_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.PiecewiseJerkSpeedConfig.ref_v_weight)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fpiecewise_5fjerk_5fspeed_5fconfig_2eproto__INCLUDED