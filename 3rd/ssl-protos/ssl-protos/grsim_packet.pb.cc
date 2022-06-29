// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grsim_packet.proto

#include "grsim_packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_grsim_5fcommand_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_grsim_5fcommand_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Commands;
}  // namespace protobuf_grsim_5fcommand_2eproto
namespace protobuf_grsim_5freplacement_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_grsim_5freplacement_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Replacement;
}  // namespace protobuf_grsim_5freplacement_2eproto
namespace ssl_protos {
namespace grsim {
class PacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Packet>
      _instance;
} _Packet_default_instance_;
}  // namespace grsim
}  // namespace ssl_protos
namespace protobuf_grsim_5fpacket_2eproto {
static void InitDefaultsPacket() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ssl_protos::grsim::_Packet_default_instance_;
    new (ptr) ::ssl_protos::grsim::Packet();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ssl_protos::grsim::Packet::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_Packet =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsPacket}, {
      &protobuf_grsim_5fcommand_2eproto::scc_info_Commands.base,
      &protobuf_grsim_5freplacement_2eproto::scc_info_Replacement.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Packet.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::grsim::Packet, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::grsim::Packet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::grsim::Packet, commands_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::ssl_protos::grsim::Packet, replacement_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::ssl_protos::grsim::Packet)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::ssl_protos::grsim::_Packet_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "grsim_packet.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022grsim_packet.proto\022\020ssl_protos.grsim\032\023"
      "grsim_command.proto\032\027grsim_replacement.p"
      "roto\"j\n\006Packet\022,\n\010commands\030\001 \001(\0132\032.ssl_p"
      "rotos.grsim.Commands\0222\n\013replacement\030\002 \001("
      "\0132\035.ssl_protos.grsim.Replacement"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 192);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "grsim_packet.proto", &protobuf_RegisterTypes);
  ::protobuf_grsim_5fcommand_2eproto::AddDescriptors();
  ::protobuf_grsim_5freplacement_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_grsim_5fpacket_2eproto
namespace ssl_protos {
namespace grsim {

// ===================================================================

void Packet::InitAsDefaultInstance() {
  ::ssl_protos::grsim::_Packet_default_instance_._instance.get_mutable()->commands_ = const_cast< ::ssl_protos::grsim::Commands*>(
      ::ssl_protos::grsim::Commands::internal_default_instance());
  ::ssl_protos::grsim::_Packet_default_instance_._instance.get_mutable()->replacement_ = const_cast< ::ssl_protos::grsim::Replacement*>(
      ::ssl_protos::grsim::Replacement::internal_default_instance());
}
void Packet::clear_commands() {
  if (commands_ != NULL) commands_->Clear();
  clear_has_commands();
}
void Packet::clear_replacement() {
  if (replacement_ != NULL) replacement_->Clear();
  clear_has_replacement();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Packet::kCommandsFieldNumber;
const int Packet::kReplacementFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Packet::Packet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_grsim_5fpacket_2eproto::scc_info_Packet.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:ssl_protos.grsim.Packet)
}
Packet::Packet(const Packet& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_commands()) {
    commands_ = new ::ssl_protos::grsim::Commands(*from.commands_);
  } else {
    commands_ = NULL;
  }
  if (from.has_replacement()) {
    replacement_ = new ::ssl_protos::grsim::Replacement(*from.replacement_);
  } else {
    replacement_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:ssl_protos.grsim.Packet)
}

void Packet::SharedCtor() {
  ::memset(&commands_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&replacement_) -
      reinterpret_cast<char*>(&commands_)) + sizeof(replacement_));
}

Packet::~Packet() {
  // @@protoc_insertion_point(destructor:ssl_protos.grsim.Packet)
  SharedDtor();
}

void Packet::SharedDtor() {
  if (this != internal_default_instance()) delete commands_;
  if (this != internal_default_instance()) delete replacement_;
}

void Packet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Packet::descriptor() {
  ::protobuf_grsim_5fpacket_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grsim_5fpacket_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Packet& Packet::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_grsim_5fpacket_2eproto::scc_info_Packet.base);
  return *internal_default_instance();
}


void Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:ssl_protos.grsim.Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(commands_ != NULL);
      commands_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(replacement_ != NULL);
      replacement_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ssl_protos.grsim.Packet)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .ssl_protos.grsim.Commands commands = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_commands()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .ssl_protos.grsim.Replacement replacement = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_replacement()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ssl_protos.grsim.Packet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ssl_protos.grsim.Packet)
  return false;
#undef DO_
}

void Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ssl_protos.grsim.Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .ssl_protos.grsim.Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_commands(), output);
  }

  // optional .ssl_protos.grsim.Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_replacement(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ssl_protos.grsim.Packet)
}

::google::protobuf::uint8* Packet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ssl_protos.grsim.Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .ssl_protos.grsim.Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_commands(), deterministic, target);
  }

  // optional .ssl_protos.grsim.Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_replacement(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ssl_protos.grsim.Packet)
  return target;
}

size_t Packet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ssl_protos.grsim.Packet)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional .ssl_protos.grsim.Commands commands = 1;
    if (has_commands()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *commands_);
    }

    // optional .ssl_protos.grsim.Replacement replacement = 2;
    if (has_replacement()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *replacement_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Packet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ssl_protos.grsim.Packet)
  GOOGLE_DCHECK_NE(&from, this);
  const Packet* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Packet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ssl_protos.grsim.Packet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ssl_protos.grsim.Packet)
    MergeFrom(*source);
  }
}

void Packet::MergeFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ssl_protos.grsim.Packet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_commands()->::ssl_protos::grsim::Commands::MergeFrom(from.commands());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_replacement()->::ssl_protos::grsim::Replacement::MergeFrom(from.replacement());
    }
  }
}

void Packet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ssl_protos.grsim.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Packet::CopyFrom(const Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ssl_protos.grsim.Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Packet::IsInitialized() const {
  if (has_commands()) {
    if (!this->commands_->IsInitialized()) return false;
  }
  if (has_replacement()) {
    if (!this->replacement_->IsInitialized()) return false;
  }
  return true;
}

void Packet::Swap(Packet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Packet::InternalSwap(Packet* other) {
  using std::swap;
  swap(commands_, other->commands_);
  swap(replacement_, other->replacement_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Packet::GetMetadata() const {
  protobuf_grsim_5fpacket_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grsim_5fpacket_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace grsim
}  // namespace ssl_protos
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::ssl_protos::grsim::Packet* Arena::CreateMaybeMessage< ::ssl_protos::grsim::Packet >(Arena* arena) {
  return Arena::CreateInternal< ::ssl_protos::grsim::Packet >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)