// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gc_rcon_team.proto

#ifndef PROTOBUF_INCLUDED_gc_5frcon_5fteam_2eproto
#define PROTOBUF_INCLUDED_gc_5frcon_5fteam_2eproto

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
#include "gc_rcon.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gc_5frcon_5fteam_2eproto 

namespace protobuf_gc_5frcon_5fteam_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_gc_5frcon_5fteam_2eproto
namespace ssl_protos {
namespace gc {
class ControllerToTeam;
class ControllerToTeamDefaultTypeInternal;
extern ControllerToTeamDefaultTypeInternal _ControllerToTeam_default_instance_;
class TeamRegistration;
class TeamRegistrationDefaultTypeInternal;
extern TeamRegistrationDefaultTypeInternal _TeamRegistration_default_instance_;
class TeamToController;
class TeamToControllerDefaultTypeInternal;
extern TeamToControllerDefaultTypeInternal _TeamToController_default_instance_;
}  // namespace gc
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> ::ssl_protos::gc::ControllerToTeam* Arena::CreateMaybeMessage<::ssl_protos::gc::ControllerToTeam>(Arena*);
template<> ::ssl_protos::gc::TeamRegistration* Arena::CreateMaybeMessage<::ssl_protos::gc::TeamRegistration>(Arena*);
template<> ::ssl_protos::gc::TeamToController* Arena::CreateMaybeMessage<::ssl_protos::gc::TeamToController>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ssl_protos {
namespace gc {

// ===================================================================

class TeamRegistration : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.TeamRegistration) */ {
 public:
  TeamRegistration();
  virtual ~TeamRegistration();

  TeamRegistration(const TeamRegistration& from);

  inline TeamRegistration& operator=(const TeamRegistration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TeamRegistration(TeamRegistration&& from) noexcept
    : TeamRegistration() {
    *this = ::std::move(from);
  }

  inline TeamRegistration& operator=(TeamRegistration&& from) noexcept {
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
  static const TeamRegistration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TeamRegistration* internal_default_instance() {
    return reinterpret_cast<const TeamRegistration*>(
               &_TeamRegistration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TeamRegistration* other);
  friend void swap(TeamRegistration& a, TeamRegistration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TeamRegistration* New() const final {
    return CreateMaybeMessage<TeamRegistration>(NULL);
  }

  TeamRegistration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TeamRegistration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TeamRegistration& from);
  void MergeFrom(const TeamRegistration& from);
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
  void InternalSwap(TeamRegistration* other);
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

  // required string team_name = 1;
  bool has_team_name() const;
  void clear_team_name();
  static const int kTeamNameFieldNumber = 1;
  const ::std::string& team_name() const;
  void set_team_name(const ::std::string& value);
  #if LANG_CXX11
  void set_team_name(::std::string&& value);
  #endif
  void set_team_name(const char* value);
  void set_team_name(const char* value, size_t size);
  ::std::string* mutable_team_name();
  ::std::string* release_team_name();
  void set_allocated_team_name(::std::string* team_name);

  // optional .ssl_protos.gc.Signature signature = 2;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 2;
  private:
  const ::ssl_protos::gc::Signature& _internal_signature() const;
  public:
  const ::ssl_protos::gc::Signature& signature() const;
  ::ssl_protos::gc::Signature* release_signature();
  ::ssl_protos::gc::Signature* mutable_signature();
  void set_allocated_signature(::ssl_protos::gc::Signature* signature);

  // @@protoc_insertion_point(class_scope:ssl_protos.gc.TeamRegistration)
 private:
  void set_has_team_name();
  void clear_has_team_name();
  void set_has_signature();
  void clear_has_signature();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr team_name_;
  ::ssl_protos::gc::Signature* signature_;
  friend struct ::protobuf_gc_5frcon_5fteam_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TeamToController : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.TeamToController) */ {
 public:
  TeamToController();
  virtual ~TeamToController();

  TeamToController(const TeamToController& from);

  inline TeamToController& operator=(const TeamToController& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TeamToController(TeamToController&& from) noexcept
    : TeamToController() {
    *this = ::std::move(from);
  }

  inline TeamToController& operator=(TeamToController&& from) noexcept {
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
  static const TeamToController& default_instance();

  enum MsgCase {
    kDesiredKeeper = 2,
    kSubstituteBot = 4,
    kPing = 5,
    MSG_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TeamToController* internal_default_instance() {
    return reinterpret_cast<const TeamToController*>(
               &_TeamToController_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(TeamToController* other);
  friend void swap(TeamToController& a, TeamToController& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TeamToController* New() const final {
    return CreateMaybeMessage<TeamToController>(NULL);
  }

  TeamToController* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TeamToController>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TeamToController& from);
  void MergeFrom(const TeamToController& from);
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
  void InternalSwap(TeamToController* other);
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

  // optional .ssl_protos.gc.Signature signature = 1;
  bool has_signature() const;
  void clear_signature();
  static const int kSignatureFieldNumber = 1;
  private:
  const ::ssl_protos::gc::Signature& _internal_signature() const;
  public:
  const ::ssl_protos::gc::Signature& signature() const;
  ::ssl_protos::gc::Signature* release_signature();
  ::ssl_protos::gc::Signature* mutable_signature();
  void set_allocated_signature(::ssl_protos::gc::Signature* signature);

  // optional int32 desired_keeper = 2;
  bool has_desired_keeper() const;
  void clear_desired_keeper();
  static const int kDesiredKeeperFieldNumber = 2;
  ::google::protobuf::int32 desired_keeper() const;
  void set_desired_keeper(::google::protobuf::int32 value);

  // optional bool substitute_bot = 4;
  bool has_substitute_bot() const;
  void clear_substitute_bot();
  static const int kSubstituteBotFieldNumber = 4;
  bool substitute_bot() const;
  void set_substitute_bot(bool value);

  // optional bool ping = 5;
  bool has_ping() const;
  void clear_ping();
  static const int kPingFieldNumber = 5;
  bool ping() const;
  void set_ping(bool value);

  void clear_msg();
  MsgCase msg_case() const;
  // @@protoc_insertion_point(class_scope:ssl_protos.gc.TeamToController)
 private:
  void set_has_signature();
  void clear_has_signature();
  void set_has_desired_keeper();
  void set_has_substitute_bot();
  void set_has_ping();

  inline bool has_msg() const;
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::ssl_protos::gc::Signature* signature_;
  union MsgUnion {
    MsgUnion() {}
    ::google::protobuf::int32 desired_keeper_;
    bool substitute_bot_;
    bool ping_;
  } msg_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_gc_5frcon_5fteam_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ControllerToTeam : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ssl_protos.gc.ControllerToTeam) */ {
 public:
  ControllerToTeam();
  virtual ~ControllerToTeam();

  ControllerToTeam(const ControllerToTeam& from);

  inline ControllerToTeam& operator=(const ControllerToTeam& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ControllerToTeam(ControllerToTeam&& from) noexcept
    : ControllerToTeam() {
    *this = ::std::move(from);
  }

  inline ControllerToTeam& operator=(ControllerToTeam&& from) noexcept {
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
  static const ControllerToTeam& default_instance();

  enum MsgCase {
    kControllerReply = 1,
    MSG_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ControllerToTeam* internal_default_instance() {
    return reinterpret_cast<const ControllerToTeam*>(
               &_ControllerToTeam_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ControllerToTeam* other);
  friend void swap(ControllerToTeam& a, ControllerToTeam& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ControllerToTeam* New() const final {
    return CreateMaybeMessage<ControllerToTeam>(NULL);
  }

  ControllerToTeam* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ControllerToTeam>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ControllerToTeam& from);
  void MergeFrom(const ControllerToTeam& from);
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
  void InternalSwap(ControllerToTeam* other);
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

  // optional .ssl_protos.gc.ControllerReply controller_reply = 1;
  bool has_controller_reply() const;
  void clear_controller_reply();
  static const int kControllerReplyFieldNumber = 1;
  private:
  const ::ssl_protos::gc::ControllerReply& _internal_controller_reply() const;
  public:
  const ::ssl_protos::gc::ControllerReply& controller_reply() const;
  ::ssl_protos::gc::ControllerReply* release_controller_reply();
  ::ssl_protos::gc::ControllerReply* mutable_controller_reply();
  void set_allocated_controller_reply(::ssl_protos::gc::ControllerReply* controller_reply);

  void clear_msg();
  MsgCase msg_case() const;
  // @@protoc_insertion_point(class_scope:ssl_protos.gc.ControllerToTeam)
 private:
  void set_has_controller_reply();

  inline bool has_msg() const;
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  union MsgUnion {
    MsgUnion() {}
    ::ssl_protos::gc::ControllerReply* controller_reply_;
  } msg_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_gc_5frcon_5fteam_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TeamRegistration

// required string team_name = 1;
inline bool TeamRegistration::has_team_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TeamRegistration::set_has_team_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TeamRegistration::clear_has_team_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TeamRegistration::clear_team_name() {
  team_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_team_name();
}
inline const ::std::string& TeamRegistration::team_name() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.TeamRegistration.team_name)
  return team_name_.GetNoArena();
}
inline void TeamRegistration::set_team_name(const ::std::string& value) {
  set_has_team_name();
  team_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ssl_protos.gc.TeamRegistration.team_name)
}
#if LANG_CXX11
inline void TeamRegistration::set_team_name(::std::string&& value) {
  set_has_team_name();
  team_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ssl_protos.gc.TeamRegistration.team_name)
}
#endif
inline void TeamRegistration::set_team_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_team_name();
  team_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ssl_protos.gc.TeamRegistration.team_name)
}
inline void TeamRegistration::set_team_name(const char* value, size_t size) {
  set_has_team_name();
  team_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ssl_protos.gc.TeamRegistration.team_name)
}
inline ::std::string* TeamRegistration::mutable_team_name() {
  set_has_team_name();
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.TeamRegistration.team_name)
  return team_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TeamRegistration::release_team_name() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.TeamRegistration.team_name)
  if (!has_team_name()) {
    return NULL;
  }
  clear_has_team_name();
  return team_name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TeamRegistration::set_allocated_team_name(::std::string* team_name) {
  if (team_name != NULL) {
    set_has_team_name();
  } else {
    clear_has_team_name();
  }
  team_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), team_name);
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.TeamRegistration.team_name)
}

// optional .ssl_protos.gc.Signature signature = 2;
inline bool TeamRegistration::has_signature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TeamRegistration::set_has_signature() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TeamRegistration::clear_has_signature() {
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::ssl_protos::gc::Signature& TeamRegistration::_internal_signature() const {
  return *signature_;
}
inline const ::ssl_protos::gc::Signature& TeamRegistration::signature() const {
  const ::ssl_protos::gc::Signature* p = signature_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.TeamRegistration.signature)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::gc::Signature*>(
      &::ssl_protos::gc::_Signature_default_instance_);
}
inline ::ssl_protos::gc::Signature* TeamRegistration::release_signature() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.TeamRegistration.signature)
  clear_has_signature();
  ::ssl_protos::gc::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}
inline ::ssl_protos::gc::Signature* TeamRegistration::mutable_signature() {
  set_has_signature();
  if (signature_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::gc::Signature>(GetArenaNoVirtual());
    signature_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.TeamRegistration.signature)
  return signature_;
}
inline void TeamRegistration::set_allocated_signature(::ssl_protos::gc::Signature* signature) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(signature_);
  }
  if (signature) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      signature = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, signature, submessage_arena);
    }
    set_has_signature();
  } else {
    clear_has_signature();
  }
  signature_ = signature;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.TeamRegistration.signature)
}

// -------------------------------------------------------------------

// TeamToController

// optional .ssl_protos.gc.Signature signature = 1;
inline bool TeamToController::has_signature() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TeamToController::set_has_signature() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TeamToController::clear_has_signature() {
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::ssl_protos::gc::Signature& TeamToController::_internal_signature() const {
  return *signature_;
}
inline const ::ssl_protos::gc::Signature& TeamToController::signature() const {
  const ::ssl_protos::gc::Signature* p = signature_;
  // @@protoc_insertion_point(field_get:ssl_protos.gc.TeamToController.signature)
  return p != NULL ? *p : *reinterpret_cast<const ::ssl_protos::gc::Signature*>(
      &::ssl_protos::gc::_Signature_default_instance_);
}
inline ::ssl_protos::gc::Signature* TeamToController::release_signature() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.TeamToController.signature)
  clear_has_signature();
  ::ssl_protos::gc::Signature* temp = signature_;
  signature_ = NULL;
  return temp;
}
inline ::ssl_protos::gc::Signature* TeamToController::mutable_signature() {
  set_has_signature();
  if (signature_ == NULL) {
    auto* p = CreateMaybeMessage<::ssl_protos::gc::Signature>(GetArenaNoVirtual());
    signature_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.TeamToController.signature)
  return signature_;
}
inline void TeamToController::set_allocated_signature(::ssl_protos::gc::Signature* signature) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(signature_);
  }
  if (signature) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      signature = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, signature, submessage_arena);
    }
    set_has_signature();
  } else {
    clear_has_signature();
  }
  signature_ = signature;
  // @@protoc_insertion_point(field_set_allocated:ssl_protos.gc.TeamToController.signature)
}

// optional int32 desired_keeper = 2;
inline bool TeamToController::has_desired_keeper() const {
  return msg_case() == kDesiredKeeper;
}
inline void TeamToController::set_has_desired_keeper() {
  _oneof_case_[0] = kDesiredKeeper;
}
inline void TeamToController::clear_desired_keeper() {
  if (has_desired_keeper()) {
    msg_.desired_keeper_ = 0;
    clear_has_msg();
  }
}
inline ::google::protobuf::int32 TeamToController::desired_keeper() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.TeamToController.desired_keeper)
  if (has_desired_keeper()) {
    return msg_.desired_keeper_;
  }
  return 0;
}
inline void TeamToController::set_desired_keeper(::google::protobuf::int32 value) {
  if (!has_desired_keeper()) {
    clear_msg();
    set_has_desired_keeper();
  }
  msg_.desired_keeper_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.TeamToController.desired_keeper)
}

// optional bool substitute_bot = 4;
inline bool TeamToController::has_substitute_bot() const {
  return msg_case() == kSubstituteBot;
}
inline void TeamToController::set_has_substitute_bot() {
  _oneof_case_[0] = kSubstituteBot;
}
inline void TeamToController::clear_substitute_bot() {
  if (has_substitute_bot()) {
    msg_.substitute_bot_ = false;
    clear_has_msg();
  }
}
inline bool TeamToController::substitute_bot() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.TeamToController.substitute_bot)
  if (has_substitute_bot()) {
    return msg_.substitute_bot_;
  }
  return false;
}
inline void TeamToController::set_substitute_bot(bool value) {
  if (!has_substitute_bot()) {
    clear_msg();
    set_has_substitute_bot();
  }
  msg_.substitute_bot_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.TeamToController.substitute_bot)
}

// optional bool ping = 5;
inline bool TeamToController::has_ping() const {
  return msg_case() == kPing;
}
inline void TeamToController::set_has_ping() {
  _oneof_case_[0] = kPing;
}
inline void TeamToController::clear_ping() {
  if (has_ping()) {
    msg_.ping_ = false;
    clear_has_msg();
  }
}
inline bool TeamToController::ping() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.TeamToController.ping)
  if (has_ping()) {
    return msg_.ping_;
  }
  return false;
}
inline void TeamToController::set_ping(bool value) {
  if (!has_ping()) {
    clear_msg();
    set_has_ping();
  }
  msg_.ping_ = value;
  // @@protoc_insertion_point(field_set:ssl_protos.gc.TeamToController.ping)
}

inline bool TeamToController::has_msg() const {
  return msg_case() != MSG_NOT_SET;
}
inline void TeamToController::clear_has_msg() {
  _oneof_case_[0] = MSG_NOT_SET;
}
inline TeamToController::MsgCase TeamToController::msg_case() const {
  return TeamToController::MsgCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// ControllerToTeam

// optional .ssl_protos.gc.ControllerReply controller_reply = 1;
inline bool ControllerToTeam::has_controller_reply() const {
  return msg_case() == kControllerReply;
}
inline void ControllerToTeam::set_has_controller_reply() {
  _oneof_case_[0] = kControllerReply;
}
inline const ::ssl_protos::gc::ControllerReply& ControllerToTeam::_internal_controller_reply() const {
  return *msg_.controller_reply_;
}
inline ::ssl_protos::gc::ControllerReply* ControllerToTeam::release_controller_reply() {
  // @@protoc_insertion_point(field_release:ssl_protos.gc.ControllerToTeam.controller_reply)
  if (has_controller_reply()) {
    clear_has_msg();
      ::ssl_protos::gc::ControllerReply* temp = msg_.controller_reply_;
    msg_.controller_reply_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ssl_protos::gc::ControllerReply& ControllerToTeam::controller_reply() const {
  // @@protoc_insertion_point(field_get:ssl_protos.gc.ControllerToTeam.controller_reply)
  return has_controller_reply()
      ? *msg_.controller_reply_
      : *reinterpret_cast< ::ssl_protos::gc::ControllerReply*>(&::ssl_protos::gc::_ControllerReply_default_instance_);
}
inline ::ssl_protos::gc::ControllerReply* ControllerToTeam::mutable_controller_reply() {
  if (!has_controller_reply()) {
    clear_msg();
    set_has_controller_reply();
    msg_.controller_reply_ = CreateMaybeMessage< ::ssl_protos::gc::ControllerReply >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:ssl_protos.gc.ControllerToTeam.controller_reply)
  return msg_.controller_reply_;
}

inline bool ControllerToTeam::has_msg() const {
  return msg_case() != MSG_NOT_SET;
}
inline void ControllerToTeam::clear_has_msg() {
  _oneof_case_[0] = MSG_NOT_SET;
}
inline ControllerToTeam::MsgCase ControllerToTeam::msg_case() const {
  return ControllerToTeam::MsgCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gc
}  // namespace ssl_protos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gc_5frcon_5fteam_2eproto