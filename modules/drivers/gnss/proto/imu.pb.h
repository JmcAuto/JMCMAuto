// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/drivers/gnss/proto/imu.proto

#ifndef PROTOBUF_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto__INCLUDED
#define PROTOBUF_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto__INCLUDED

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
namespace drivers {
namespace gnss {
class Imu;
class ImuDefaultTypeInternal;
extern ImuDefaultTypeInternal _Imu_default_instance_;
}  // namespace gnss
}  // namespace drivers
}  // namespace jmc_auto

namespace jmc_auto {
namespace drivers {
namespace gnss {

namespace protobuf_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto {
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
}  // namespace protobuf_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto

// ===================================================================

class Imu : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.drivers.gnss.Imu) */ {
 public:
  Imu();
  virtual ~Imu();

  Imu(const Imu& from);

  inline Imu& operator=(const Imu& from) {
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
  static const Imu& default_instance();

  static inline const Imu* internal_default_instance() {
    return reinterpret_cast<const Imu*>(
               &_Imu_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Imu* other);

  // implements Message ----------------------------------------------

  inline Imu* New() const PROTOBUF_FINAL { return New(NULL); }

  Imu* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Imu& from);
  void MergeFrom(const Imu& from);
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
  void InternalSwap(Imu* other);
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

  // optional .jmc_auto.common.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  const ::jmc_auto::common::Header& header() const;
  ::jmc_auto::common::Header* mutable_header();
  ::jmc_auto::common::Header* release_header();
  void set_allocated_header(::jmc_auto::common::Header* header);

  // optional .jmc_auto.common.Point3D linear_acceleration = 4;
  bool has_linear_acceleration() const;
  void clear_linear_acceleration();
  static const int kLinearAccelerationFieldNumber = 4;
  const ::jmc_auto::common::Point3D& linear_acceleration() const;
  ::jmc_auto::common::Point3D* mutable_linear_acceleration();
  ::jmc_auto::common::Point3D* release_linear_acceleration();
  void set_allocated_linear_acceleration(::jmc_auto::common::Point3D* linear_acceleration);

  // optional .jmc_auto.common.Point3D angular_velocity = 5;
  bool has_angular_velocity() const;
  void clear_angular_velocity();
  static const int kAngularVelocityFieldNumber = 5;
  const ::jmc_auto::common::Point3D& angular_velocity() const;
  ::jmc_auto::common::Point3D* mutable_angular_velocity();
  ::jmc_auto::common::Point3D* release_angular_velocity();
  void set_allocated_angular_velocity(::jmc_auto::common::Point3D* angular_velocity);

  // optional double measurement_time = 2;
  bool has_measurement_time() const;
  void clear_measurement_time();
  static const int kMeasurementTimeFieldNumber = 2;
  double measurement_time() const;
  void set_measurement_time(double value);

  // optional float measurement_span = 3 [default = 0];
  bool has_measurement_span() const;
  void clear_measurement_span();
  static const int kMeasurementSpanFieldNumber = 3;
  float measurement_span() const;
  void set_measurement_span(float value);

  // @@protoc_insertion_point(class_scope:jmc_auto.drivers.gnss.Imu)
 private:
  void set_has_header();
  void clear_has_header();
  void set_has_measurement_time();
  void clear_has_measurement_time();
  void set_has_measurement_span();
  void clear_has_measurement_span();
  void set_has_linear_acceleration();
  void clear_has_linear_acceleration();
  void set_has_angular_velocity();
  void clear_has_angular_velocity();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::jmc_auto::common::Header* header_;
  ::jmc_auto::common::Point3D* linear_acceleration_;
  ::jmc_auto::common::Point3D* angular_velocity_;
  double measurement_time_;
  float measurement_span_;
  friend struct protobuf_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Imu

// optional .jmc_auto.common.Header header = 1;
inline bool Imu::has_header() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Imu::set_has_header() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Imu::clear_has_header() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Imu::clear_header() {
  if (header_ != NULL) header_->::jmc_auto::common::Header::Clear();
  clear_has_header();
}
inline const ::jmc_auto::common::Header& Imu::header() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.gnss.Imu.header)
  return header_ != NULL ? *header_
                         : *::jmc_auto::common::Header::internal_default_instance();
}
inline ::jmc_auto::common::Header* Imu::mutable_header() {
  set_has_header();
  if (header_ == NULL) {
    header_ = new ::jmc_auto::common::Header;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.gnss.Imu.header)
  return header_;
}
inline ::jmc_auto::common::Header* Imu::release_header() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.gnss.Imu.header)
  clear_has_header();
  ::jmc_auto::common::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline void Imu::set_allocated_header(::jmc_auto::common::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    set_has_header();
  } else {
    clear_has_header();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.gnss.Imu.header)
}

// optional double measurement_time = 2;
inline bool Imu::has_measurement_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Imu::set_has_measurement_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Imu::clear_has_measurement_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Imu::clear_measurement_time() {
  measurement_time_ = 0;
  clear_has_measurement_time();
}
inline double Imu::measurement_time() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.gnss.Imu.measurement_time)
  return measurement_time_;
}
inline void Imu::set_measurement_time(double value) {
  set_has_measurement_time();
  measurement_time_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.gnss.Imu.measurement_time)
}

// optional float measurement_span = 3 [default = 0];
inline bool Imu::has_measurement_span() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Imu::set_has_measurement_span() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Imu::clear_has_measurement_span() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Imu::clear_measurement_span() {
  measurement_span_ = 0;
  clear_has_measurement_span();
}
inline float Imu::measurement_span() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.gnss.Imu.measurement_span)
  return measurement_span_;
}
inline void Imu::set_measurement_span(float value) {
  set_has_measurement_span();
  measurement_span_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.gnss.Imu.measurement_span)
}

// optional .jmc_auto.common.Point3D linear_acceleration = 4;
inline bool Imu::has_linear_acceleration() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Imu::set_has_linear_acceleration() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Imu::clear_has_linear_acceleration() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Imu::clear_linear_acceleration() {
  if (linear_acceleration_ != NULL) linear_acceleration_->::jmc_auto::common::Point3D::Clear();
  clear_has_linear_acceleration();
}
inline const ::jmc_auto::common::Point3D& Imu::linear_acceleration() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.gnss.Imu.linear_acceleration)
  return linear_acceleration_ != NULL ? *linear_acceleration_
                         : *::jmc_auto::common::Point3D::internal_default_instance();
}
inline ::jmc_auto::common::Point3D* Imu::mutable_linear_acceleration() {
  set_has_linear_acceleration();
  if (linear_acceleration_ == NULL) {
    linear_acceleration_ = new ::jmc_auto::common::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.gnss.Imu.linear_acceleration)
  return linear_acceleration_;
}
inline ::jmc_auto::common::Point3D* Imu::release_linear_acceleration() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.gnss.Imu.linear_acceleration)
  clear_has_linear_acceleration();
  ::jmc_auto::common::Point3D* temp = linear_acceleration_;
  linear_acceleration_ = NULL;
  return temp;
}
inline void Imu::set_allocated_linear_acceleration(::jmc_auto::common::Point3D* linear_acceleration) {
  delete linear_acceleration_;
  linear_acceleration_ = linear_acceleration;
  if (linear_acceleration) {
    set_has_linear_acceleration();
  } else {
    clear_has_linear_acceleration();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.gnss.Imu.linear_acceleration)
}

// optional .jmc_auto.common.Point3D angular_velocity = 5;
inline bool Imu::has_angular_velocity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Imu::set_has_angular_velocity() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Imu::clear_has_angular_velocity() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Imu::clear_angular_velocity() {
  if (angular_velocity_ != NULL) angular_velocity_->::jmc_auto::common::Point3D::Clear();
  clear_has_angular_velocity();
}
inline const ::jmc_auto::common::Point3D& Imu::angular_velocity() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.gnss.Imu.angular_velocity)
  return angular_velocity_ != NULL ? *angular_velocity_
                         : *::jmc_auto::common::Point3D::internal_default_instance();
}
inline ::jmc_auto::common::Point3D* Imu::mutable_angular_velocity() {
  set_has_angular_velocity();
  if (angular_velocity_ == NULL) {
    angular_velocity_ = new ::jmc_auto::common::Point3D;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.gnss.Imu.angular_velocity)
  return angular_velocity_;
}
inline ::jmc_auto::common::Point3D* Imu::release_angular_velocity() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.gnss.Imu.angular_velocity)
  clear_has_angular_velocity();
  ::jmc_auto::common::Point3D* temp = angular_velocity_;
  angular_velocity_ = NULL;
  return temp;
}
inline void Imu::set_allocated_angular_velocity(::jmc_auto::common::Point3D* angular_velocity) {
  delete angular_velocity_;
  angular_velocity_ = angular_velocity;
  if (angular_velocity) {
    set_has_angular_velocity();
  } else {
    clear_has_angular_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.gnss.Imu.angular_velocity)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace gnss
}  // namespace drivers
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fdrivers_2fgnss_2fproto_2fimu_2eproto__INCLUDED
