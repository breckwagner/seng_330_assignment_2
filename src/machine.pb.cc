// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: machine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "machine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace data {

namespace {

const ::google::protobuf::Descriptor* SerializedMachine_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SerializedMachine_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_machine_2eproto() {
  protobuf_AddDesc_machine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "machine.proto");
  GOOGLE_CHECK(file != NULL);
  SerializedMachine_descriptor_ = file->message_type(0);
  static const int SerializedMachine_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedMachine, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedMachine, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedMachine, machine_log_),
  };
  SerializedMachine_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SerializedMachine_descriptor_,
      SerializedMachine::default_instance_,
      SerializedMachine_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedMachine, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SerializedMachine, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SerializedMachine));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_machine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SerializedMachine_descriptor_, &SerializedMachine::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_machine_2eproto() {
  delete SerializedMachine::default_instance_;
  delete SerializedMachine_reflection_;
}

void protobuf_AddDesc_machine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmachine.proto\022\004data\"D\n\021SerializedMachi"
    "ne\022\n\n\002id\030\001 \001(\005\022\016\n\006status\030\002 \001(\t\022\023\n\013machin"
    "e_log\030\003 \001(\t", 91);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "machine.proto", &protobuf_RegisterTypes);
  SerializedMachine::default_instance_ = new SerializedMachine();
  SerializedMachine::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_machine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_machine_2eproto {
  StaticDescriptorInitializer_machine_2eproto() {
    protobuf_AddDesc_machine_2eproto();
  }
} static_descriptor_initializer_machine_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SerializedMachine::kIdFieldNumber;
const int SerializedMachine::kStatusFieldNumber;
const int SerializedMachine::kMachineLogFieldNumber;
#endif  // !_MSC_VER

SerializedMachine::SerializedMachine()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:data.SerializedMachine)
}

void SerializedMachine::InitAsDefaultInstance() {
}

SerializedMachine::SerializedMachine(const SerializedMachine& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:data.SerializedMachine)
}

void SerializedMachine::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  status_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  machine_log_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SerializedMachine::~SerializedMachine() {
  // @@protoc_insertion_point(destructor:data.SerializedMachine)
  SharedDtor();
}

void SerializedMachine::SharedDtor() {
  if (status_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete status_;
  }
  if (machine_log_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete machine_log_;
  }
  if (this != default_instance_) {
  }
}

void SerializedMachine::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SerializedMachine::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SerializedMachine_descriptor_;
}

const SerializedMachine& SerializedMachine::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_machine_2eproto();
  return *default_instance_;
}

SerializedMachine* SerializedMachine::default_instance_ = NULL;

SerializedMachine* SerializedMachine::New() const {
  return new SerializedMachine;
}

void SerializedMachine::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    id_ = 0;
    if (has_status()) {
      if (status_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        status_->clear();
      }
    }
    if (has_machine_log()) {
      if (machine_log_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        machine_log_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SerializedMachine::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:data.SerializedMachine)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_status;
        break;
      }

      // optional string status = 2;
      case 2: {
        if (tag == 18) {
         parse_status:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_status()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->status().data(), this->status().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "status");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_machine_log;
        break;
      }

      // optional string machine_log = 3;
      case 3: {
        if (tag == 26) {
         parse_machine_log:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_machine_log()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->machine_log().data(), this->machine_log().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "machine_log");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:data.SerializedMachine)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:data.SerializedMachine)
  return false;
#undef DO_
}

void SerializedMachine::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:data.SerializedMachine)
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string status = 2;
  if (has_status()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->status().data(), this->status().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "status");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->status(), output);
  }

  // optional string machine_log = 3;
  if (has_machine_log()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->machine_log().data(), this->machine_log().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "machine_log");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->machine_log(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:data.SerializedMachine)
}

::google::protobuf::uint8* SerializedMachine::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:data.SerializedMachine)
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string status = 2;
  if (has_status()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->status().data(), this->status().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "status");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->status(), target);
  }

  // optional string machine_log = 3;
  if (has_machine_log()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->machine_log().data(), this->machine_log().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "machine_log");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->machine_log(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:data.SerializedMachine)
  return target;
}

int SerializedMachine::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string status = 2;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->status());
    }

    // optional string machine_log = 3;
    if (has_machine_log()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->machine_log());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SerializedMachine::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SerializedMachine* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SerializedMachine*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SerializedMachine::MergeFrom(const SerializedMachine& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_machine_log()) {
      set_machine_log(from.machine_log());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SerializedMachine::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SerializedMachine::CopyFrom(const SerializedMachine& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SerializedMachine::IsInitialized() const {

  return true;
}

void SerializedMachine::Swap(SerializedMachine* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(status_, other->status_);
    std::swap(machine_log_, other->machine_log_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SerializedMachine::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SerializedMachine_descriptor_;
  metadata.reflection = SerializedMachine_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data

// @@protoc_insertion_point(global_scope)
