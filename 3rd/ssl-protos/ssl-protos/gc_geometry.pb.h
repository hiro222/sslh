// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gc_geometry.proto

#ifndef PROTOBUF_INCLUDED_gc_5fgeometry_2eproto
#define PROTOBUF_INCLUDED_gc_5fgeometry_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gc_5fgeometry_2eproto 

namespace protobuf_gc_5fgeometry_2eproto {
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
}  // namespace protobuf_gc_5fgeometry_2eproto
namespace ssl_protos {
namespace gc {
class Vector2;
class Vector2DefaultTypeInternal;
extern Vector2DefaultTypeInternal _Vector2_default_instance_;
class Vector3;
class Vector3DefaultTypeInternal;
extern Vector3DefaultTypeInternal _Vector3_default_instance_;
}  // namespace gc
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> ::ssl_protos::gc::Vector2* Arena::CreateMaybeMessage<::ssl_protos::gc::Vector2>(Arena*);
template<> ::ssl_protos::gc::Vector3* Arena::CreateMaybeMessage<::ssl_protos::gc::Vector3>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssl_protos {
namespace gc {

// ===================================================================

class Vector2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.Vector2) */ {
 public:
  Vector2();
  virtual ~Vector2();

  Vector2(const Vector2& from);

  inline Vector2& operator=(const Vector2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vector2(Vector2&& from) noexcept
    : Vector2() {
    *this = ::std::move(from);
  }

  inline Vector2& operator=(Vector2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector2* internal_default_instance() {
    return reinterpret_cast<const Vector2*>(
               &_Vector2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Vector2* other);
  friend void swap(Vector2& a, Vector2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vector2* New() const final {
    return CreateMaybeMessage<Vector2>(NULL);
  }

  Vector2* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vector2>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vector2& from);
  void MergeFrom(const Vector2& from);
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
  void InternalSwap(Vector2* other);
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

  // required float x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // required float y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.Vector2)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  friend struct ::protobuf_gc_5fgeometry_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Vector3 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.Vector3) */ {
 public:
  Vector3();
  virtual ~Vector3();

  Vector3(const Vector3& from);

  inline Vector3& operator=(const Vector3& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vector3(Vector3&& from) noexcept
    : Vector3() {
    *this = ::std::move(from);
  }

  inline Vector3& operator=(Vector3&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector3* internal_default_instance() {
    return reinterpret_cast<const Vector3*>(
               &_Vector3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Vector3* other);
  friend void swap(Vector3& a, Vector3& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vector3* New() const final {
    return CreateMaybeMessage<Vector3>(NULL);
  }

  Vector3* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vector3>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vector3& from);
  void MergeFrom(const Vector3& from);
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
  void InternalSwap(Vector3* other);
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

  // required float x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // required float y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // required float z = 3;
  bool has_z() const;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.Vector3)
 private:
  void set_has_x();
  void clear_has_x();
  void set_has_y();
  void clear_has_y();
  void set_has_z();
  void clear_has_z();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  float z_;
  friend struct ::protobuf_gc_5fgeometry_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector2

// required float x = 1;
inline bool Vector2::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vector2::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vector2::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vector2::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Vector2::x() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.Vector2.x)
  return x_;
}
inline void Vector2::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.Vector2.x)
}

// required float y = 2;
inline bool Vector2::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vector2::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vector2::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vector2::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Vector2::y() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.Vector2.y)
  return y_;
}
inline void Vector2::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.Vector2.y)
}

// -------------------------------------------------------------------

// Vector3

// required float x = 1;
inline bool Vector3::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vector3::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vector3::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vector3::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Vector3::x() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.Vector3.x)
  return x_;
}
inline void Vector3::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.Vector3.x)
}

// required float y = 2;
inline bool Vector3::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vector3::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vector3::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vector3::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Vector3::y() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.Vector3.y)
  return y_;
}
inline void Vector3::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.Vector3.y)
}

// required float z = 3;
inline bool Vector3::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Vector3::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Vector3::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Vector3::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float Vector3::z() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.Vector3.z)
  return z_;
}
inline void Vector3::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.Vector3.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gc
}  // namespace ssl_protos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gc_5fgeometry_2eproto
