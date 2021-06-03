// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/routing/proto/poi.proto

#ifndef PROTOBUF_modules_2frouting_2fproto_2fpoi_2eproto__INCLUDED
#define PROTOBUF_modules_2frouting_2fproto_2fpoi_2eproto__INCLUDED

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
#include "modules/routing/proto/routing.pb.h"
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace routing {
class Landmark;
class LandmarkDefaultTypeInternal;
extern LandmarkDefaultTypeInternal _Landmark_default_instance_;
class LaneSegment;
class LaneSegmentDefaultTypeInternal;
extern LaneSegmentDefaultTypeInternal _LaneSegment_default_instance_;
class LaneWaypoint;
class LaneWaypointDefaultTypeInternal;
extern LaneWaypointDefaultTypeInternal _LaneWaypoint_default_instance_;
class Measurement;
class MeasurementDefaultTypeInternal;
extern MeasurementDefaultTypeInternal _Measurement_default_instance_;
class POI;
class POIDefaultTypeInternal;
extern POIDefaultTypeInternal _POI_default_instance_;
class ParkingInfo;
class ParkingInfoDefaultTypeInternal;
extern ParkingInfoDefaultTypeInternal _ParkingInfo_default_instance_;
class Passage;
class PassageDefaultTypeInternal;
extern PassageDefaultTypeInternal _Passage_default_instance_;
class RoadSegment;
class RoadSegmentDefaultTypeInternal;
extern RoadSegmentDefaultTypeInternal _RoadSegment_default_instance_;
class RoutingRequest;
class RoutingRequestDefaultTypeInternal;
extern RoutingRequestDefaultTypeInternal _RoutingRequest_default_instance_;
class RoutingResponse;
class RoutingResponseDefaultTypeInternal;
extern RoutingResponseDefaultTypeInternal _RoutingResponse_default_instance_;
}  // namespace routing
}  // namespace jmc_auto

namespace jmc_auto {
namespace routing {

namespace protobuf_modules_2frouting_2fproto_2fpoi_2eproto {
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
}  // namespace protobuf_modules_2frouting_2fproto_2fpoi_2eproto

// ===================================================================

class Landmark : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.routing.Landmark) */ {
 public:
  Landmark();
  virtual ~Landmark();

  Landmark(const Landmark& from);

  inline Landmark& operator=(const Landmark& from) {
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
  static const Landmark& default_instance();

  static inline const Landmark* internal_default_instance() {
    return reinterpret_cast<const Landmark*>(
               &_Landmark_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Landmark* other);

  // implements Message ----------------------------------------------

  inline Landmark* New() const PROTOBUF_FINAL { return New(NULL); }

  Landmark* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Landmark& from);
  void MergeFrom(const Landmark& from);
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
  void InternalSwap(Landmark* other);
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

  // repeated .jmc_auto.routing.LaneWaypoint waypoint = 2;
  int waypoint_size() const;
  void clear_waypoint();
  static const int kWaypointFieldNumber = 2;
  const ::jmc_auto::routing::LaneWaypoint& waypoint(int index) const;
  ::jmc_auto::routing::LaneWaypoint* mutable_waypoint(int index);
  ::jmc_auto::routing::LaneWaypoint* add_waypoint();
  ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::LaneWaypoint >*
      mutable_waypoint();
  const ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::LaneWaypoint >&
      waypoint() const;

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:jmc_auto.routing.Landmark)
 private:
  void set_has_name();
  void clear_has_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::LaneWaypoint > waypoint_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  friend struct protobuf_modules_2frouting_2fproto_2fpoi_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class POI : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.routing.POI) */ {
 public:
  POI();
  virtual ~POI();

  POI(const POI& from);

  inline POI& operator=(const POI& from) {
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
  static const POI& default_instance();

  static inline const POI* internal_default_instance() {
    return reinterpret_cast<const POI*>(
               &_POI_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(POI* other);

  // implements Message ----------------------------------------------

  inline POI* New() const PROTOBUF_FINAL { return New(NULL); }

  POI* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const POI& from);
  void MergeFrom(const POI& from);
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
  void InternalSwap(POI* other);
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

  // repeated .jmc_auto.routing.Landmark landmark = 1;
  int landmark_size() const;
  void clear_landmark();
  static const int kLandmarkFieldNumber = 1;
  const ::jmc_auto::routing::Landmark& landmark(int index) const;
  ::jmc_auto::routing::Landmark* mutable_landmark(int index);
  ::jmc_auto::routing::Landmark* add_landmark();
  ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::Landmark >*
      mutable_landmark();
  const ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::Landmark >&
      landmark() const;

  // @@protoc_insertion_point(class_scope:jmc_auto.routing.POI)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::Landmark > landmark_;
  friend struct protobuf_modules_2frouting_2fproto_2fpoi_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Landmark

// optional string name = 1;
inline bool Landmark::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Landmark::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Landmark::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Landmark::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Landmark::name() const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.Landmark.name)
  return name_.GetNoArena();
}
inline void Landmark::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.routing.Landmark.name)
}
#if LANG_CXX11
inline void Landmark::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.routing.Landmark.name)
}
#endif
inline void Landmark::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.routing.Landmark.name)
}
inline void Landmark::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.routing.Landmark.name)
}
inline ::std::string* Landmark::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:jmc_auto.routing.Landmark.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Landmark::release_name() {
  // @@protoc_insertion_point(field_release:jmc_auto.routing.Landmark.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Landmark::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.routing.Landmark.name)
}

// repeated .jmc_auto.routing.LaneWaypoint waypoint = 2;
inline int Landmark::waypoint_size() const {
  return waypoint_.size();
}
inline void Landmark::clear_waypoint() {
  waypoint_.Clear();
}
inline const ::jmc_auto::routing::LaneWaypoint& Landmark::waypoint(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.Landmark.waypoint)
  return waypoint_.Get(index);
}
inline ::jmc_auto::routing::LaneWaypoint* Landmark::mutable_waypoint(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.routing.Landmark.waypoint)
  return waypoint_.Mutable(index);
}
inline ::jmc_auto::routing::LaneWaypoint* Landmark::add_waypoint() {
  // @@protoc_insertion_point(field_add:jmc_auto.routing.Landmark.waypoint)
  return waypoint_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::LaneWaypoint >*
Landmark::mutable_waypoint() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.routing.Landmark.waypoint)
  return &waypoint_;
}
inline const ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::LaneWaypoint >&
Landmark::waypoint() const {
  // @@protoc_insertion_point(field_list:jmc_auto.routing.Landmark.waypoint)
  return waypoint_;
}

// -------------------------------------------------------------------

// POI

// repeated .jmc_auto.routing.Landmark landmark = 1;
inline int POI::landmark_size() const {
  return landmark_.size();
}
inline void POI::clear_landmark() {
  landmark_.Clear();
}
inline const ::jmc_auto::routing::Landmark& POI::landmark(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.routing.POI.landmark)
  return landmark_.Get(index);
}
inline ::jmc_auto::routing::Landmark* POI::mutable_landmark(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.routing.POI.landmark)
  return landmark_.Mutable(index);
}
inline ::jmc_auto::routing::Landmark* POI::add_landmark() {
  // @@protoc_insertion_point(field_add:jmc_auto.routing.POI.landmark)
  return landmark_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::Landmark >*
POI::mutable_landmark() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.routing.POI.landmark)
  return &landmark_;
}
inline const ::google::protobuf::RepeatedPtrField< ::jmc_auto::routing::Landmark >&
POI::landmark() const {
  // @@protoc_insertion_point(field_list:jmc_auto.routing.POI.landmark)
  return landmark_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace routing
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2frouting_2fproto_2fpoi_2eproto__INCLUDED
