// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/localization/proto/measure.proto

#ifndef PROTOBUF_modules_2flocalization_2fproto_2fmeasure_2eproto__INCLUDED
#define PROTOBUF_modules_2flocalization_2fproto_2fmeasure_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "modules/common/proto/header.pb.h"
#include "modules/common/proto/geometry.pb.h"
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace common {
class Header;
class HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
class Point2D;
class Point2DDefaultTypeInternal;
extern Point2DDefaultTypeInternal _Point2D_default_instance_;
class Point3D;
class Point3DDefaultTypeInternal;
extern Point3DDefaultTypeInternal _Point3D_default_instance_;
class PointENU;
class PointENUDefaultTypeInternal;
extern PointENUDefaultTypeInternal _PointENU_default_instance_;
class PointLLH;
class PointLLHDefaultTypeInternal;
extern PointLLHDefaultTypeInternal _PointLLH_default_instance_;
class Polygon;
class PolygonDefaultTypeInternal;
extern PolygonDefaultTypeInternal _Polygon_default_instance_;
class Quaternion;
class QuaternionDefaultTypeInternal;
extern QuaternionDefaultTypeInternal _Quaternion_default_instance_;
}  // namespace common
namespace localization {
class IntegMeasure;
class IntegMeasureDefaultTypeInternal;
extern IntegMeasureDefaultTypeInternal _IntegMeasure_default_instance_;
}  // namespace localization
}  // namespace jmc_auto

namespace jmc_auto {
namespace localization {

namespace protobuf_modules_2flocalization_2fproto_2fmeasure_2eproto {
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
}  // namespace protobuf_modules_2flocalization_2fproto_2fmeasure_2eproto

enum IntegMeasure_MeasureType {
  IntegMeasure_MeasureType_GNSS_POS_ONLY = 0,
  IntegMeasure_MeasureType_GNSS_POS_VEL = 1,
  IntegMeasure_MeasureType_GNSS_POS_XY = 2,
  IntegMeasure_MeasureType_GNSS_VEL_ONLY = 3,
  IntegMeasure_MeasureType_POINT_CLOUD_POS = 4,
  IntegMeasure_MeasureType_ODOMETER_VEL_ONLY = 5,
  IntegMeasure_MeasureType_VEHICLE_CONSTRAINT = 6
};
bool IntegMeasure_MeasureType_IsValid(int value);
const IntegMeasure_MeasureType IntegMeasure_MeasureType_MeasureType_MIN = IntegMeasure_MeasureType_GNSS_POS_ONLY;
const IntegMeasure_MeasureType IntegMeasure_MeasureType_MeasureType_MAX = IntegMeasure_MeasureType_VEHICLE_CONSTRAINT;
const int IntegMeasure_MeasureType_MeasureType_ARRAYSIZE = IntegMeasure_MeasureType_MeasureType_MAX + 1;

const ::google::protobuf::EnumDescriptor* IntegMeasure_MeasureType_descriptor();
inline const ::std::string& IntegMeasure_MeasureType_Name(IntegMeasure_MeasureType value) {
  return ::google::protobuf::internal::NameOfEnum(
    IntegMeasure_MeasureType_descriptor(), value);
}
inline bool IntegMeasure_MeasureType_Parse(
    const ::std::string& name, IntegMeasure_MeasureType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<IntegMeasure_MeasureType>(
    IntegMeasure_MeasureType_descriptor(), name, value);
}
enum IntegMeasure_FrameType {
  IntegMeasure_FrameType_ENU = 0,
  IntegMeasure_FrameType_ECEF = 1,
  IntegMeasure_FrameType_UTM = 2,
  IntegMeasure_FrameType_ODOMETER = 3
};
bool IntegMeasure_FrameType_IsValid(int value);
const IntegMeasure_FrameType IntegMeasure_FrameType_FrameType_MIN = IntegMeasure_FrameType_ENU;
const IntegMeasure_FrameType IntegMeasure_FrameType_FrameType_MAX = IntegMeasure_FrameType_ODOMETER;
const int IntegMeasure_FrameType_FrameType_ARRAYSIZE = IntegMeasure_FrameType_FrameType_MAX + 1;

const ::google::protobuf::EnumDescriptor* IntegMeasure_FrameType_descriptor();
inline const ::std::string& IntegMeasure_FrameType_Name(IntegMeasure_FrameType value) {
  return ::google::protobuf::internal::NameOfEnum(
    IntegMeasure_FrameType_descriptor(), value);
}
inline bool IntegMeasure_FrameType_Parse(
    const ::std::string& name, IntegMeasure_FrameType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<IntegMeasure_FrameType>(
    IntegMeasure_FrameType_descriptor(), name, value);
}
// ===================================================================

class IntegMeasure : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.localization.IntegMeasure) */ {
 public:
  IntegMeasure();
  virtual ~IntegMeasure();

  IntegMeasure(const IntegMeasure& from);

  inline IntegMeasure& operator=(const IntegMeasure& from) {
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
  static const IntegMeasure& default_instance();

  static inline const IntegMeasure* internal_default_instance() {
    return reinterpret_cast<const IntegMeasure*>(
               &_IntegMeasure_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(IntegMeasure* other);

  // implements Message ----------------------------------------------

  inline IntegMeasure* New() const PROTOBUF_FINAL { return New(NULL); }

  IntegMeasure* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const IntegMeasure& from);
  void MergeFrom(const IntegMeasure& from);
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
  void InternalSwap(IntegMeasure* other);
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

  typedef IntegMeasure_MeasureType MeasureType;
  static const MeasureType GNSS_POS_ONLY =
    IntegMeasure_MeasureType_GNSS_POS_ONLY;
  static const MeasureType GNSS_POS_VEL =
    IntegMeasure_MeasureType_GNSS_POS_VEL;
  static const MeasureType GNSS_POS_XY =
    IntegMeasure_MeasureType_GNSS_POS_XY;
  static const MeasureType GNSS_VEL_ONLY =
    IntegMeasure_MeasureType_GNSS_VEL_ONLY;
  static const MeasureType POINT_CLOUD_POS =
    IntegMeasure_MeasureType_POINT_CLOUD_POS;
  static const MeasureType ODOMETER_VEL_ONLY =
    IntegMeasure_MeasureType_ODOMETER_VEL_ONLY;
  static const MeasureType VEHICLE_CONSTRAINT =
    IntegMeasure_MeasureType_VEHICLE_CONSTRAINT;
  static inline bool MeasureType_IsValid(int value) {
    return IntegMeasure_MeasureType_IsValid(value);
  }
  static const MeasureType MeasureType_MIN =
    IntegMeasure_MeasureType_MeasureType_MIN;
  static const MeasureType MeasureType_MAX =
    IntegMeasure_MeasureType_MeasureType_MAX;
  static const int MeasureType_ARRAYSIZE =
    IntegMeasure_MeasureType_MeasureType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MeasureType_descriptor() {
    return IntegMeasure_MeasureType_descriptor();
  }
  static inline const ::std::string& MeasureType_Name(MeasureType value) {
    return IntegMeasure_MeasureType_Name(value);
  }
  static inline bool MeasureType_Parse(const ::std::string& name,
      MeasureType* value) {
    return IntegMeasure_MeasureType_Parse(name, value);
  }

  typedef IntegMeasure_FrameType FrameType;
  static const FrameType ENU =
    IntegMeasure_FrameType_ENU;
  static const FrameType ECEF =
    IntegMeasure_FrameType_ECEF;
  static const FrameType UTM =
    IntegMeasure_FrameType_UTM;
  static const FrameType ODOMETER =
    IntegMeasure_FrameType_ODOMETER;
  static inline bool FrameType_IsValid(int value) {
    return IntegMeasure_FrameType_IsValid(value);
  }
  static const FrameType FrameType_MIN =
    IntegMeasure_FrameType_FrameType_MIN;
  static const FrameType FrameType_MAX =
    IntegMeasure_FrameType_FrameType_MAX;
  static const int FrameType_ARRAYSIZE =
    IntegMeasure_FrameType_FrameType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FrameType_descriptor() {
    return IntegMeasure_FrameType_descriptor();
  }
  static inline const ::std::string& FrameType_Name(FrameType value) {
    return IntegMeasure_FrameType_Name(value);
  }
  static inline bool FrameType_Parse(const ::std::string& name,
      FrameType* value) {
    return IntegMeasure_FrameType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated double measure_covar = 10 [packed = true];
  int measure_covar_size() const;
  void clear_measure_covar();
  static const int kMeasureCovarFieldNumber = 10;
  double measure_covar(int index) const;
  void set_measure_covar(int index, double value);
  void add_measure_covar(double value);
  const ::google::protobuf::RepeatedField< double >&
      measure_covar() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_measure_covar();

  // optional .jmc_auto.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::jmc_auto::common::Header& header() const;
  ::jmc_auto::common::Header* mutable_header();
  ::jmc_auto::common::Header* release_header();
  void set_allocated_header(::jmc_auto::common::Header* header);

  // optional .jmc_auto.common.Point3D position = 4;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 4;
  const ::jmc_auto::common::Point3D& position() const;
  ::jmc_auto::common::Point3D* mutable_position();
  ::jmc_auto::common::Point3D* release_position();
  void set_allocated_position(::jmc_auto::common::Point3D* position);

  // optional .jmc_auto.common.Point3D velocity = 5;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 5;
  const ::jmc_auto::common::Point3D& velocity() const;
  ::jmc_auto::common::Point3D* mutable_velocity();
  ::jmc_auto::common::Point3D* release_velocity();
  void set_allocated_velocity(::jmc_auto::common::Point3D* velocity);

  // optional .jmc_auto.localization.IntegMeasure.MeasureType measure_type = 2;
  bool has_measure_type() const;
  void clear_measure_type();
  static const int kMeasureTypeFieldNumber = 2;
  ::jmc_auto::localization::IntegMeasure_MeasureType measure_type() const;
  void set_measure_type(::jmc_auto::localization::IntegMeasure_MeasureType value);

  // optional .jmc_auto.localization.IntegMeasure.FrameType frame_type = 3;
  bool has_frame_type() const;
  void clear_frame_type();
  static const int kFrameTypeFieldNumber = 3;
  ::jmc_auto::localization::IntegMeasure_FrameType frame_type() const;
  void set_frame_type(::jmc_auto::localization::IntegMeasure_FrameType value);

  // optional double yaw = 6;
  bool has_yaw() const;
  void clear_yaw();
  static const int kYawFieldNumber = 6;
  double yaw() const;
  void set_yaw(double value);

  // optional int32 zone_id = 7;
  bool has_zone_id() const;
  void clear_zone_id();
  static const int kZoneIdFieldNumber = 7;
  ::google::protobuf::int32 zone_id() const;
  void set_zone_id(::google::protobuf::int32 value);

  // optional bool is_have_variance = 8;
  bool has_is_have_variance() const;
  void clear_is_have_variance();
  static const int kIsHaveVarianceFieldNumber = 8;
  bool is_have_variance() const;
  void set_is_have_variance(bool value);

  // optional bool is_gnss_double_antenna = 9;
  bool has_is_gnss_double_antenna() const;
  void clear_is_gnss_double_antenna();
  static const int kIsGnssDoubleAntennaFieldNumber = 9;
  bool is_gnss_double_antenna() const;
  void set_is_gnss_double_antenna(bool value);

  // @@protoc_insertion_point(class_scope:jmc_auto.localization.IntegMeasure)
 private:
  void set_has_header();
  void clear_has_header();
  void set_has_measure_type();
  void clear_has_measure_type();
  void set_has_frame_type();
  void clear_has_frame_type();
  void set_has_position();
  void clear_has_position();
  void set_has_velocity();
  void clear_has_velocity();
  void set_has_yaw();
  void clear_has_yaw();
  void set_has_zone_id();
  void clear_has_zone_id();
  void set_has_is_have_variance();
  void clear_has_is_have_variance();
  void set_has_is_gnss_double_antenna();
  void clear_has_is_gnss_double_antenna();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< double > measure_covar_;
  mutable int _measure_covar_cached_byte_size_;
  ::jmc_auto::common::Header* header_;
  ::jmc_auto::common::Point3D* position_;
  ::jmc_auto::common::Point3D* velocity_;
  int measure_type_;
  int frame_type_;
  double yaw_;
  ::google::protobuf::int32 zone_id_;
  bool is_have_variance_;
  bool is_gnss_double_antenna_;
  friend struct protobuf_modules_2flocalization_2fproto_2fmeasure_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// IntegMeasure

// optional .jmc_auto.common.Header header = 1;
inline bool IntegMeasure::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IntegMeasure::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IntegMeasure::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IntegMeasure::clear_header() {
  if (header_ != NULL) header_->::jmc_auto::common::Header::Clear();
  clear_has_header();
}
inline const ::jmc_auto::common::Header& IntegMeasure::header() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.header)
  return header_ != NULL ? *header_
                         : *::jmc_auto::common::Header::internal_default_instance();
}
inline ::jmc_auto::common::Header* IntegMeasure::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::jmc_auto::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.localization.IntegMeasure.header)
  return header_;
}
inline ::jmc_auto::common::Header* IntegMeasure::release_header() {
  // @@protoc_insertion_point(field_release:jmc_auto.localization.IntegMeasure.header)
  clear_has_header();
  ::jmc_auto::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void IntegMeasure::set_allocated_header(::jmc_auto::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.localization.IntegMeasure.header)
}

// optional .jmc_auto.localization.IntegMeasure.MeasureType measure_type = 2;
inline bool IntegMeasure::has_measure_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void IntegMeasure::set_has_measure_type() {
  _has_bits_[0] |= 0x00000008u;
}
inline void IntegMeasure::clear_has_measure_type() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void IntegMeasure::clear_measure_type() {
  measure_type_ = 0;
  clear_has_measure_type();
}
inline ::jmc_auto::localization::IntegMeasure_MeasureType IntegMeasure::measure_type() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.measure_type)
  return static_cast< ::jmc_auto::localization::IntegMeasure_MeasureType >(measure_type_);
}
inline void IntegMeasure::set_measure_type(::jmc_auto::localization::IntegMeasure_MeasureType value) {
  assert(::jmc_auto::localization::IntegMeasure_MeasureType_IsValid(value));
  set_has_measure_type();
  measure_type_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.measure_type)
}

// optional .jmc_auto.localization.IntegMeasure.FrameType frame_type = 3;
inline bool IntegMeasure::has_frame_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void IntegMeasure::set_has_frame_type() {
  _has_bits_[0] |= 0x00000010u;
}
inline void IntegMeasure::clear_has_frame_type() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void IntegMeasure::clear_frame_type() {
  frame_type_ = 0;
  clear_has_frame_type();
}
inline ::jmc_auto::localization::IntegMeasure_FrameType IntegMeasure::frame_type() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.frame_type)
  return static_cast< ::jmc_auto::localization::IntegMeasure_FrameType >(frame_type_);
}
inline void IntegMeasure::set_frame_type(::jmc_auto::localization::IntegMeasure_FrameType value) {
  assert(::jmc_auto::localization::IntegMeasure_FrameType_IsValid(value));
  set_has_frame_type();
  frame_type_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.frame_type)
}

// optional .jmc_auto.common.Point3D position = 4;
inline bool IntegMeasure::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IntegMeasure::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IntegMeasure::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IntegMeasure::clear_position() {
  if (position_ != NULL) position_->::jmc_auto::common::Point3D::Clear();
  clear_has_position();
}
inline const ::jmc_auto::common::Point3D& IntegMeasure::position() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.position)
  return position_ != NULL ? *position_
                         : *::jmc_auto::common::Point3D::internal_default_instance();
}
inline ::jmc_auto::common::Point3D* IntegMeasure::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::jmc_auto::common::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.localization.IntegMeasure.position)
  return position_;
}
inline ::jmc_auto::common::Point3D* IntegMeasure::release_position() {
  // @@protoc_insertion_point(field_release:jmc_auto.localization.IntegMeasure.position)
  clear_has_position();
  ::jmc_auto::common::Point3D* temp = position_;
  position_ = NULL;
  return temp;
}
inline void IntegMeasure::set_allocated_position(::jmc_auto::common::Point3D* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.localization.IntegMeasure.position)
}

// optional .jmc_auto.common.Point3D velocity = 5;
inline bool IntegMeasure::has_velocity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IntegMeasure::set_has_velocity() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IntegMeasure::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IntegMeasure::clear_velocity() {
  if (velocity_ != NULL) velocity_->::jmc_auto::common::Point3D::Clear();
  clear_has_velocity();
}
inline const ::jmc_auto::common::Point3D& IntegMeasure::velocity() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.velocity)
  return velocity_ != NULL ? *velocity_
                         : *::jmc_auto::common::Point3D::internal_default_instance();
}
inline ::jmc_auto::common::Point3D* IntegMeasure::mutable_velocity() {
  set_has_velocity();
  if (velocity_ == NULL) {
    velocity_ = new ::jmc_auto::common::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.localization.IntegMeasure.velocity)
  return velocity_;
}
inline ::jmc_auto::common::Point3D* IntegMeasure::release_velocity() {
  // @@protoc_insertion_point(field_release:jmc_auto.localization.IntegMeasure.velocity)
  clear_has_velocity();
  ::jmc_auto::common::Point3D* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline void IntegMeasure::set_allocated_velocity(::jmc_auto::common::Point3D* velocity) {
  delete velocity_;
  velocity_ = velocity;
  if (velocity) {
    set_has_velocity();
  } else {
    clear_has_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.localization.IntegMeasure.velocity)
}

// optional double yaw = 6;
inline bool IntegMeasure::has_yaw() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void IntegMeasure::set_has_yaw() {
  _has_bits_[0] |= 0x00000020u;
}
inline void IntegMeasure::clear_has_yaw() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void IntegMeasure::clear_yaw() {
  yaw_ = 0;
  clear_has_yaw();
}
inline double IntegMeasure::yaw() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.yaw)
  return yaw_;
}
inline void IntegMeasure::set_yaw(double value) {
  set_has_yaw();
  yaw_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.yaw)
}

// optional int32 zone_id = 7;
inline bool IntegMeasure::has_zone_id() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void IntegMeasure::set_has_zone_id() {
  _has_bits_[0] |= 0x00000040u;
}
inline void IntegMeasure::clear_has_zone_id() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void IntegMeasure::clear_zone_id() {
  zone_id_ = 0;
  clear_has_zone_id();
}
inline ::google::protobuf::int32 IntegMeasure::zone_id() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.zone_id)
  return zone_id_;
}
inline void IntegMeasure::set_zone_id(::google::protobuf::int32 value) {
  set_has_zone_id();
  zone_id_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.zone_id)
}

// optional bool is_have_variance = 8;
inline bool IntegMeasure::has_is_have_variance() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void IntegMeasure::set_has_is_have_variance() {
  _has_bits_[0] |= 0x00000080u;
}
inline void IntegMeasure::clear_has_is_have_variance() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void IntegMeasure::clear_is_have_variance() {
  is_have_variance_ = false;
  clear_has_is_have_variance();
}
inline bool IntegMeasure::is_have_variance() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.is_have_variance)
  return is_have_variance_;
}
inline void IntegMeasure::set_is_have_variance(bool value) {
  set_has_is_have_variance();
  is_have_variance_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.is_have_variance)
}

// optional bool is_gnss_double_antenna = 9;
inline bool IntegMeasure::has_is_gnss_double_antenna() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void IntegMeasure::set_has_is_gnss_double_antenna() {
  _has_bits_[0] |= 0x00000100u;
}
inline void IntegMeasure::clear_has_is_gnss_double_antenna() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void IntegMeasure::clear_is_gnss_double_antenna() {
  is_gnss_double_antenna_ = false;
  clear_has_is_gnss_double_antenna();
}
inline bool IntegMeasure::is_gnss_double_antenna() const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.is_gnss_double_antenna)
  return is_gnss_double_antenna_;
}
inline void IntegMeasure::set_is_gnss_double_antenna(bool value) {
  set_has_is_gnss_double_antenna();
  is_gnss_double_antenna_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.is_gnss_double_antenna)
}

// repeated double measure_covar = 10 [packed = true];
inline int IntegMeasure::measure_covar_size() const {
  return measure_covar_.size();
}
inline void IntegMeasure::clear_measure_covar() {
  measure_covar_.Clear();
}
inline double IntegMeasure::measure_covar(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.localization.IntegMeasure.measure_covar)
  return measure_covar_.Get(index);
}
inline void IntegMeasure::set_measure_covar(int index, double value) {
  measure_covar_.Set(index, value);
  // @@protoc_insertion_point(field_set:jmc_auto.localization.IntegMeasure.measure_covar)
}
inline void IntegMeasure::add_measure_covar(double value) {
  measure_covar_.Add(value);
  // @@protoc_insertion_point(field_add:jmc_auto.localization.IntegMeasure.measure_covar)
}
inline const ::google::protobuf::RepeatedField< double >&
IntegMeasure::measure_covar() const {
  // @@protoc_insertion_point(field_list:jmc_auto.localization.IntegMeasure.measure_covar)
  return measure_covar_;
}
inline ::google::protobuf::RepeatedField< double >*
IntegMeasure::mutable_measure_covar() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.localization.IntegMeasure.measure_covar)
  return &measure_covar_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace localization
}  // namespace jmc_auto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::jmc_auto::localization::IntegMeasure_MeasureType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::jmc_auto::localization::IntegMeasure_MeasureType>() {
  return ::jmc_auto::localization::IntegMeasure_MeasureType_descriptor();
}
template <> struct is_proto_enum< ::jmc_auto::localization::IntegMeasure_FrameType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::jmc_auto::localization::IntegMeasure_FrameType>() {
  return ::jmc_auto::localization::IntegMeasure_FrameType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2flocalization_2fproto_2fmeasure_2eproto__INCLUDED