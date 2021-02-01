// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/planning/proto/creep_decider_config.proto

#ifndef PROTOBUF_modules_2fplanning_2fproto_2fcreep_5fdecider_5fconfig_2eproto__INCLUDED
#define PROTOBUF_modules_2fplanning_2fproto_2fcreep_5fdecider_5fconfig_2eproto__INCLUDED

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
class CreepDeciderConfig;
class CreepDeciderConfigDefaultTypeInternal;
extern CreepDeciderConfigDefaultTypeInternal _CreepDeciderConfig_default_instance_;
}  // namespace planning
}  // namespace jmc_auto

namespace jmc_auto {
namespace planning {

namespace protobuf_modules_2fplanning_2fproto_2fcreep_5fdecider_5fconfig_2eproto {
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
}  // namespace protobuf_modules_2fplanning_2fproto_2fcreep_5fdecider_5fconfig_2eproto

// ===================================================================

class CreepDeciderConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.planning.CreepDeciderConfig) */ {
 public:
  CreepDeciderConfig();
  virtual ~CreepDeciderConfig();

  CreepDeciderConfig(const CreepDeciderConfig& from);

  inline CreepDeciderConfig& operator=(const CreepDeciderConfig& from) {
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
  static const CreepDeciderConfig& default_instance();

  static inline const CreepDeciderConfig* internal_default_instance() {
    return reinterpret_cast<const CreepDeciderConfig*>(
               &_CreepDeciderConfig_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CreepDeciderConfig* other);

  // implements Message ----------------------------------------------

  inline CreepDeciderConfig* New() const PROTOBUF_FINAL { return New(NULL); }

  CreepDeciderConfig* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CreepDeciderConfig& from);
  void MergeFrom(const CreepDeciderConfig& from);
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
  void InternalSwap(CreepDeciderConfig* other);
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

  // optional double stop_distance = 1 [default = 0.5];
  bool has_stop_distance() const;
  void clear_stop_distance();
  static const int kStopDistanceFieldNumber = 1;
  double stop_distance() const;
  void set_stop_distance(double value);

  // optional double speed_limit = 2 [default = 1];
  bool has_speed_limit() const;
  void clear_speed_limit();
  static const int kSpeedLimitFieldNumber = 2;
  double speed_limit() const;
  void set_speed_limit(double value);

  // optional double max_valid_stop_distance = 3 [default = 0.3];
  bool has_max_valid_stop_distance() const;
  void clear_max_valid_stop_distance();
  static const int kMaxValidStopDistanceFieldNumber = 3;
  double max_valid_stop_distance() const;
  void set_max_valid_stop_distance(double value);

  // optional double min_boundary_t = 4 [default = 6];
  bool has_min_boundary_t() const;
  void clear_min_boundary_t();
  static const int kMinBoundaryTFieldNumber = 4;
  double min_boundary_t() const;
  void set_min_boundary_t(double value);

  // optional double ignore_max_st_min_t = 5 [default = 0.1];
  bool has_ignore_max_st_min_t() const;
  void clear_ignore_max_st_min_t();
  static const int kIgnoreMaxStMinTFieldNumber = 5;
  double ignore_max_st_min_t() const;
  void set_ignore_max_st_min_t(double value);

  // optional double ignore_min_st_min_s = 6 [default = 15];
  bool has_ignore_min_st_min_s() const;
  void clear_ignore_min_st_min_s();
  static const int kIgnoreMinStMinSFieldNumber = 6;
  double ignore_min_st_min_s() const;
  void set_ignore_min_st_min_s(double value);

  // @@protoc_insertion_point(class_scope:jmc_auto.planning.CreepDeciderConfig)
 private:
  void set_has_stop_distance();
  void clear_has_stop_distance();
  void set_has_speed_limit();
  void clear_has_speed_limit();
  void set_has_max_valid_stop_distance();
  void clear_has_max_valid_stop_distance();
  void set_has_min_boundary_t();
  void clear_has_min_boundary_t();
  void set_has_ignore_max_st_min_t();
  void clear_has_ignore_max_st_min_t();
  void set_has_ignore_min_st_min_s();
  void clear_has_ignore_min_st_min_s();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  double stop_distance_;
  double speed_limit_;
  double max_valid_stop_distance_;
  double min_boundary_t_;
  double ignore_max_st_min_t_;
  double ignore_min_st_min_s_;
  friend struct protobuf_modules_2fplanning_2fproto_2fcreep_5fdecider_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CreepDeciderConfig

// optional double stop_distance = 1 [default = 0.5];
inline bool CreepDeciderConfig::has_stop_distance() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CreepDeciderConfig::set_has_stop_distance() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CreepDeciderConfig::clear_has_stop_distance() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CreepDeciderConfig::clear_stop_distance() {
  stop_distance_ = 0.5;
  clear_has_stop_distance();
}
inline double CreepDeciderConfig::stop_distance() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.CreepDeciderConfig.stop_distance)
  return stop_distance_;
}
inline void CreepDeciderConfig::set_stop_distance(double value) {
  set_has_stop_distance();
  stop_distance_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.CreepDeciderConfig.stop_distance)
}

// optional double speed_limit = 2 [default = 1];
inline bool CreepDeciderConfig::has_speed_limit() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CreepDeciderConfig::set_has_speed_limit() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CreepDeciderConfig::clear_has_speed_limit() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CreepDeciderConfig::clear_speed_limit() {
  speed_limit_ = 1;
  clear_has_speed_limit();
}
inline double CreepDeciderConfig::speed_limit() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.CreepDeciderConfig.speed_limit)
  return speed_limit_;
}
inline void CreepDeciderConfig::set_speed_limit(double value) {
  set_has_speed_limit();
  speed_limit_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.CreepDeciderConfig.speed_limit)
}

// optional double max_valid_stop_distance = 3 [default = 0.3];
inline bool CreepDeciderConfig::has_max_valid_stop_distance() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CreepDeciderConfig::set_has_max_valid_stop_distance() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CreepDeciderConfig::clear_has_max_valid_stop_distance() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CreepDeciderConfig::clear_max_valid_stop_distance() {
  max_valid_stop_distance_ = 0.3;
  clear_has_max_valid_stop_distance();
}
inline double CreepDeciderConfig::max_valid_stop_distance() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.CreepDeciderConfig.max_valid_stop_distance)
  return max_valid_stop_distance_;
}
inline void CreepDeciderConfig::set_max_valid_stop_distance(double value) {
  set_has_max_valid_stop_distance();
  max_valid_stop_distance_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.CreepDeciderConfig.max_valid_stop_distance)
}

// optional double min_boundary_t = 4 [default = 6];
inline bool CreepDeciderConfig::has_min_boundary_t() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CreepDeciderConfig::set_has_min_boundary_t() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CreepDeciderConfig::clear_has_min_boundary_t() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CreepDeciderConfig::clear_min_boundary_t() {
  min_boundary_t_ = 6;
  clear_has_min_boundary_t();
}
inline double CreepDeciderConfig::min_boundary_t() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.CreepDeciderConfig.min_boundary_t)
  return min_boundary_t_;
}
inline void CreepDeciderConfig::set_min_boundary_t(double value) {
  set_has_min_boundary_t();
  min_boundary_t_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.CreepDeciderConfig.min_boundary_t)
}

// optional double ignore_max_st_min_t = 5 [default = 0.1];
inline bool CreepDeciderConfig::has_ignore_max_st_min_t() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CreepDeciderConfig::set_has_ignore_max_st_min_t() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CreepDeciderConfig::clear_has_ignore_max_st_min_t() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CreepDeciderConfig::clear_ignore_max_st_min_t() {
  ignore_max_st_min_t_ = 0.1;
  clear_has_ignore_max_st_min_t();
}
inline double CreepDeciderConfig::ignore_max_st_min_t() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.CreepDeciderConfig.ignore_max_st_min_t)
  return ignore_max_st_min_t_;
}
inline void CreepDeciderConfig::set_ignore_max_st_min_t(double value) {
  set_has_ignore_max_st_min_t();
  ignore_max_st_min_t_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.CreepDeciderConfig.ignore_max_st_min_t)
}

// optional double ignore_min_st_min_s = 6 [default = 15];
inline bool CreepDeciderConfig::has_ignore_min_st_min_s() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CreepDeciderConfig::set_has_ignore_min_st_min_s() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CreepDeciderConfig::clear_has_ignore_min_st_min_s() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CreepDeciderConfig::clear_ignore_min_st_min_s() {
  ignore_min_st_min_s_ = 15;
  clear_has_ignore_min_st_min_s();
}
inline double CreepDeciderConfig::ignore_min_st_min_s() const {
  // @@protoc_insertion_point(field_get:jmc_auto.planning.CreepDeciderConfig.ignore_min_st_min_s)
  return ignore_min_st_min_s_;
}
inline void CreepDeciderConfig::set_ignore_min_st_min_s(double value) {
  set_has_ignore_min_st_min_s();
  ignore_min_st_min_s_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.planning.CreepDeciderConfig.ignore_min_st_min_s)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace planning
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fplanning_2fproto_2fcreep_5fdecider_5fconfig_2eproto__INCLUDED