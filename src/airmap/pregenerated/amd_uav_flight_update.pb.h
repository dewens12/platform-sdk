// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: amd_uav_flight_update.proto

#ifndef PROTOBUF_INCLUDED_amd_5fuav_5fflight_5fupdate_2eproto
#define PROTOBUF_INCLUDED_amd_5fuav_5fflight_5fupdate_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_amd_5fuav_5fflight_5fupdate_2eproto 

namespace protobuf_amd_5fuav_5fflight_5fupdate_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_amd_5fuav_5fflight_5fupdate_2eproto
namespace airmap {
namespace telemetry {
class AmdUavFlightUpdate;
class AmdUavFlightUpdateDefaultTypeInternal;
extern AmdUavFlightUpdateDefaultTypeInternal _AmdUavFlightUpdate_default_instance_;
class AmdUavFlightUpdates;
class AmdUavFlightUpdatesDefaultTypeInternal;
extern AmdUavFlightUpdatesDefaultTypeInternal _AmdUavFlightUpdates_default_instance_;
}  // namespace telemetry
}  // namespace airmap
namespace google {
namespace protobuf {
template<> ::airmap::telemetry::AmdUavFlightUpdate* Arena::CreateMaybeMessage<::airmap::telemetry::AmdUavFlightUpdate>(Arena*);
template<> ::airmap::telemetry::AmdUavFlightUpdates* Arena::CreateMaybeMessage<::airmap::telemetry::AmdUavFlightUpdates>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace airmap {
namespace telemetry {

// ===================================================================

class AmdUavFlightUpdates : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:airmap.telemetry.AmdUavFlightUpdates) */ {
 public:
  AmdUavFlightUpdates();
  virtual ~AmdUavFlightUpdates();

  AmdUavFlightUpdates(const AmdUavFlightUpdates& from);

  inline AmdUavFlightUpdates& operator=(const AmdUavFlightUpdates& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AmdUavFlightUpdates(AmdUavFlightUpdates&& from) noexcept
    : AmdUavFlightUpdates() {
    *this = ::std::move(from);
  }

  inline AmdUavFlightUpdates& operator=(AmdUavFlightUpdates&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AmdUavFlightUpdates& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AmdUavFlightUpdates* internal_default_instance() {
    return reinterpret_cast<const AmdUavFlightUpdates*>(
               &_AmdUavFlightUpdates_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(AmdUavFlightUpdates* other);
  friend void swap(AmdUavFlightUpdates& a, AmdUavFlightUpdates& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AmdUavFlightUpdates* New() const final {
    return CreateMaybeMessage<AmdUavFlightUpdates>(NULL);
  }

  AmdUavFlightUpdates* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AmdUavFlightUpdates>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AmdUavFlightUpdates& from);
  void MergeFrom(const AmdUavFlightUpdates& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AmdUavFlightUpdates* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .airmap.telemetry.AmdUavFlightUpdate updates = 1;
  int updates_size() const;
  void clear_updates();
  static const int kUpdatesFieldNumber = 1;
  ::airmap::telemetry::AmdUavFlightUpdate* mutable_updates(int index);
  ::google::protobuf::RepeatedPtrField< ::airmap::telemetry::AmdUavFlightUpdate >*
      mutable_updates();
  const ::airmap::telemetry::AmdUavFlightUpdate& updates(int index) const;
  ::airmap::telemetry::AmdUavFlightUpdate* add_updates();
  const ::google::protobuf::RepeatedPtrField< ::airmap::telemetry::AmdUavFlightUpdate >&
      updates() const;

  // @@protoc_insertion_point(class_scope:airmap.telemetry.AmdUavFlightUpdates)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::airmap::telemetry::AmdUavFlightUpdate > updates_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_amd_5fuav_5fflight_5fupdate_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class AmdUavFlightUpdate : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:airmap.telemetry.AmdUavFlightUpdate) */ {
 public:
  AmdUavFlightUpdate();
  virtual ~AmdUavFlightUpdate();

  AmdUavFlightUpdate(const AmdUavFlightUpdate& from);

  inline AmdUavFlightUpdate& operator=(const AmdUavFlightUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AmdUavFlightUpdate(AmdUavFlightUpdate&& from) noexcept
    : AmdUavFlightUpdate() {
    *this = ::std::move(from);
  }

  inline AmdUavFlightUpdate& operator=(AmdUavFlightUpdate&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AmdUavFlightUpdate& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AmdUavFlightUpdate* internal_default_instance() {
    return reinterpret_cast<const AmdUavFlightUpdate*>(
               &_AmdUavFlightUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(AmdUavFlightUpdate* other);
  friend void swap(AmdUavFlightUpdate& a, AmdUavFlightUpdate& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AmdUavFlightUpdate* New() const final {
    return CreateMaybeMessage<AmdUavFlightUpdate>(NULL);
  }

  AmdUavFlightUpdate* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<AmdUavFlightUpdate>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const AmdUavFlightUpdate& from);
  void MergeFrom(const AmdUavFlightUpdate& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AmdUavFlightUpdate* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string flight_id = 2;
  void clear_flight_id();
  static const int kFlightIdFieldNumber = 2;
  const ::std::string& flight_id() const;
  void set_flight_id(const ::std::string& value);
  #if LANG_CXX11
  void set_flight_id(::std::string&& value);
  #endif
  void set_flight_id(const char* value);
  void set_flight_id(const char* value, size_t size);
  ::std::string* mutable_flight_id();
  ::std::string* release_flight_id();
  void set_allocated_flight_id(::std::string* flight_id);

  // uint64 timestamp = 1;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // double latitude = 3;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 3;
  double latitude() const;
  void set_latitude(double value);

  // double longitude = 4;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 4;
  double longitude() const;
  void set_longitude(double value);

  // float course = 5;
  void clear_course();
  static const int kCourseFieldNumber = 5;
  float course() const;
  void set_course(float value);

  // float altitude = 6;
  void clear_altitude();
  static const int kAltitudeFieldNumber = 6;
  float altitude() const;
  void set_altitude(float value);

  // float speed = 7;
  void clear_speed();
  static const int kSpeedFieldNumber = 7;
  float speed() const;
  void set_speed(float value);

  // @@protoc_insertion_point(class_scope:airmap.telemetry.AmdUavFlightUpdate)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr flight_id_;
  ::google::protobuf::uint64 timestamp_;
  double latitude_;
  double longitude_;
  float course_;
  float altitude_;
  float speed_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_amd_5fuav_5fflight_5fupdate_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AmdUavFlightUpdates

// repeated .airmap.telemetry.AmdUavFlightUpdate updates = 1;
inline int AmdUavFlightUpdates::updates_size() const {
  return updates_.size();
}
inline void AmdUavFlightUpdates::clear_updates() {
  updates_.Clear();
}
inline ::airmap::telemetry::AmdUavFlightUpdate* AmdUavFlightUpdates::mutable_updates(int index) {
  // @@protoc_insertion_point(field_mutable:airmap.telemetry.AmdUavFlightUpdates.updates)
  return updates_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::airmap::telemetry::AmdUavFlightUpdate >*
AmdUavFlightUpdates::mutable_updates() {
  // @@protoc_insertion_point(field_mutable_list:airmap.telemetry.AmdUavFlightUpdates.updates)
  return &updates_;
}
inline const ::airmap::telemetry::AmdUavFlightUpdate& AmdUavFlightUpdates::updates(int index) const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdates.updates)
  return updates_.Get(index);
}
inline ::airmap::telemetry::AmdUavFlightUpdate* AmdUavFlightUpdates::add_updates() {
  // @@protoc_insertion_point(field_add:airmap.telemetry.AmdUavFlightUpdates.updates)
  return updates_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::airmap::telemetry::AmdUavFlightUpdate >&
AmdUavFlightUpdates::updates() const {
  // @@protoc_insertion_point(field_list:airmap.telemetry.AmdUavFlightUpdates.updates)
  return updates_;
}

// -------------------------------------------------------------------

// AmdUavFlightUpdate

// uint64 timestamp = 1;
inline void AmdUavFlightUpdate::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 AmdUavFlightUpdate::timestamp() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.timestamp)
  return timestamp_;
}
inline void AmdUavFlightUpdate::set_timestamp(::google::protobuf::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.timestamp)
}

// string flight_id = 2;
inline void AmdUavFlightUpdate::clear_flight_id() {
  flight_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AmdUavFlightUpdate::flight_id() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.flight_id)
  return flight_id_.GetNoArena();
}
inline void AmdUavFlightUpdate::set_flight_id(const ::std::string& value) {
  
  flight_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.flight_id)
}
#if LANG_CXX11
inline void AmdUavFlightUpdate::set_flight_id(::std::string&& value) {
  
  flight_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:airmap.telemetry.AmdUavFlightUpdate.flight_id)
}
#endif
inline void AmdUavFlightUpdate::set_flight_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  flight_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:airmap.telemetry.AmdUavFlightUpdate.flight_id)
}
inline void AmdUavFlightUpdate::set_flight_id(const char* value, size_t size) {
  
  flight_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:airmap.telemetry.AmdUavFlightUpdate.flight_id)
}
inline ::std::string* AmdUavFlightUpdate::mutable_flight_id() {
  
  // @@protoc_insertion_point(field_mutable:airmap.telemetry.AmdUavFlightUpdate.flight_id)
  return flight_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AmdUavFlightUpdate::release_flight_id() {
  // @@protoc_insertion_point(field_release:airmap.telemetry.AmdUavFlightUpdate.flight_id)
  
  return flight_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AmdUavFlightUpdate::set_allocated_flight_id(::std::string* flight_id) {
  if (flight_id != NULL) {
    
  } else {
    
  }
  flight_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), flight_id);
  // @@protoc_insertion_point(field_set_allocated:airmap.telemetry.AmdUavFlightUpdate.flight_id)
}

// double latitude = 3;
inline void AmdUavFlightUpdate::clear_latitude() {
  latitude_ = 0;
}
inline double AmdUavFlightUpdate::latitude() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.latitude)
  return latitude_;
}
inline void AmdUavFlightUpdate::set_latitude(double value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.latitude)
}

// double longitude = 4;
inline void AmdUavFlightUpdate::clear_longitude() {
  longitude_ = 0;
}
inline double AmdUavFlightUpdate::longitude() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.longitude)
  return longitude_;
}
inline void AmdUavFlightUpdate::set_longitude(double value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.longitude)
}

// float course = 5;
inline void AmdUavFlightUpdate::clear_course() {
  course_ = 0;
}
inline float AmdUavFlightUpdate::course() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.course)
  return course_;
}
inline void AmdUavFlightUpdate::set_course(float value) {
  
  course_ = value;
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.course)
}

// float altitude = 6;
inline void AmdUavFlightUpdate::clear_altitude() {
  altitude_ = 0;
}
inline float AmdUavFlightUpdate::altitude() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.altitude)
  return altitude_;
}
inline void AmdUavFlightUpdate::set_altitude(float value) {
  
  altitude_ = value;
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.altitude)
}

// float speed = 7;
inline void AmdUavFlightUpdate::clear_speed() {
  speed_ = 0;
}
inline float AmdUavFlightUpdate::speed() const {
  // @@protoc_insertion_point(field_get:airmap.telemetry.AmdUavFlightUpdate.speed)
  return speed_;
}
inline void AmdUavFlightUpdate::set_speed(float value) {
  
  speed_ = value;
  // @@protoc_insertion_point(field_set:airmap.telemetry.AmdUavFlightUpdate.speed)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace telemetry
}  // namespace airmap

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_amd_5fuav_5fflight_5fupdate_2eproto