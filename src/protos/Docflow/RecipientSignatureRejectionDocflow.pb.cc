// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/RecipientSignatureRejectionDocflow.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Docflow/RecipientSignatureRejectionDocflow.pb.h"

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

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Docflow {

namespace {

const ::google::protobuf::Descriptor* RecipientSignatureRejectionDocflow_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RecipientSignatureRejectionDocflow_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto() {
  protobuf_AddDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Docflow/RecipientSignatureRejectionDocflow.proto");
  GOOGLE_CHECK(file != NULL);
  RecipientSignatureRejectionDocflow_descriptor_ = file->message_type(0);
  static const int RecipientSignatureRejectionDocflow_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecipientSignatureRejectionDocflow, isfinished_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecipientSignatureRejectionDocflow, recipientsignaturerejectionattachment_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecipientSignatureRejectionDocflow, deliverytimestamp_),
  };
  RecipientSignatureRejectionDocflow_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RecipientSignatureRejectionDocflow_descriptor_,
      RecipientSignatureRejectionDocflow::default_instance_,
      RecipientSignatureRejectionDocflow_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecipientSignatureRejectionDocflow, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RecipientSignatureRejectionDocflow, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RecipientSignatureRejectionDocflow));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RecipientSignatureRejectionDocflow_descriptor_, &RecipientSignatureRejectionDocflow::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Docflow_2fRecipientSignatureRejectionDocflow_2eproto() {
  delete RecipientSignatureRejectionDocflow::default_instance_;
  delete RecipientSignatureRejectionDocflow_reflection_;
}

void protobuf_AddDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_Timestamp_2eproto();
  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fAttachment_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n0Docflow/RecipientSignatureRejectionDoc"
    "flow.proto\022\030Diadoc.Api.Proto.Docflow\032\017Ti"
    "mestamp.proto\032\030Docflow/Attachment.proto\""
    "\313\001\n\"RecipientSignatureRejectionDocflow\022\022"
    "\n\nIsFinished\030\001 \001(\010\022Y\n%RecipientSignature"
    "RejectionAttachment\030\002 \001(\0132*.Diadoc.Api.P"
    "roto.Docflow.SignedAttachment\0226\n\021Deliver"
    "yTimestamp\030\003 \001(\0132\033.Diadoc.Api.Proto.Time"
    "stamp", 325);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Docflow/RecipientSignatureRejectionDocflow.proto", &protobuf_RegisterTypes);
  RecipientSignatureRejectionDocflow::default_instance_ = new RecipientSignatureRejectionDocflow();
  RecipientSignatureRejectionDocflow::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Docflow_2fRecipientSignatureRejectionDocflow_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Docflow_2fRecipientSignatureRejectionDocflow_2eproto {
  StaticDescriptorInitializer_Docflow_2fRecipientSignatureRejectionDocflow_2eproto() {
    protobuf_AddDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto();
  }
} static_descriptor_initializer_Docflow_2fRecipientSignatureRejectionDocflow_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RecipientSignatureRejectionDocflow::kIsFinishedFieldNumber;
const int RecipientSignatureRejectionDocflow::kRecipientSignatureRejectionAttachmentFieldNumber;
const int RecipientSignatureRejectionDocflow::kDeliveryTimestampFieldNumber;
#endif  // !_MSC_VER

RecipientSignatureRejectionDocflow::RecipientSignatureRejectionDocflow()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
}

void RecipientSignatureRejectionDocflow::InitAsDefaultInstance() {
  recipientsignaturerejectionattachment_ = const_cast< ::Diadoc::Api::Proto::Docflow::SignedAttachment*>(&::Diadoc::Api::Proto::Docflow::SignedAttachment::default_instance());
  deliverytimestamp_ = const_cast< ::Diadoc::Api::Proto::Timestamp*>(&::Diadoc::Api::Proto::Timestamp::default_instance());
}

RecipientSignatureRejectionDocflow::RecipientSignatureRejectionDocflow(const RecipientSignatureRejectionDocflow& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
}

void RecipientSignatureRejectionDocflow::SharedCtor() {
  _cached_size_ = 0;
  isfinished_ = false;
  recipientsignaturerejectionattachment_ = NULL;
  deliverytimestamp_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RecipientSignatureRejectionDocflow::~RecipientSignatureRejectionDocflow() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  SharedDtor();
}

void RecipientSignatureRejectionDocflow::SharedDtor() {
  if (this != default_instance_) {
    delete recipientsignaturerejectionattachment_;
    delete deliverytimestamp_;
  }
}

void RecipientSignatureRejectionDocflow::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RecipientSignatureRejectionDocflow::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RecipientSignatureRejectionDocflow_descriptor_;
}

const RecipientSignatureRejectionDocflow& RecipientSignatureRejectionDocflow::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Docflow_2fRecipientSignatureRejectionDocflow_2eproto();
  return *default_instance_;
}

RecipientSignatureRejectionDocflow* RecipientSignatureRejectionDocflow::default_instance_ = NULL;

RecipientSignatureRejectionDocflow* RecipientSignatureRejectionDocflow::New() const {
  return new RecipientSignatureRejectionDocflow;
}

void RecipientSignatureRejectionDocflow::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    isfinished_ = false;
    if (has_recipientsignaturerejectionattachment()) {
      if (recipientsignaturerejectionattachment_ != NULL) recipientsignaturerejectionattachment_->::Diadoc::Api::Proto::Docflow::SignedAttachment::Clear();
    }
    if (has_deliverytimestamp()) {
      if (deliverytimestamp_ != NULL) deliverytimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RecipientSignatureRejectionDocflow::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool IsFinished = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &isfinished_)));
          set_has_isfinished();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_RecipientSignatureRejectionAttachment;
        break;
      }

      // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RecipientSignatureRejectionAttachment = 2;
      case 2: {
        if (tag == 18) {
         parse_RecipientSignatureRejectionAttachment:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_recipientsignaturerejectionattachment()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_DeliveryTimestamp;
        break;
      }

      // optional .Diadoc.Api.Proto.Timestamp DeliveryTimestamp = 3;
      case 3: {
        if (tag == 26) {
         parse_DeliveryTimestamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_deliverytimestamp()));
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  return false;
#undef DO_
}

void RecipientSignatureRejectionDocflow::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  // optional bool IsFinished = 1;
  if (has_isfinished()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->isfinished(), output);
  }

  // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RecipientSignatureRejectionAttachment = 2;
  if (has_recipientsignaturerejectionattachment()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->recipientsignaturerejectionattachment(), output);
  }

  // optional .Diadoc.Api.Proto.Timestamp DeliveryTimestamp = 3;
  if (has_deliverytimestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->deliverytimestamp(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
}

::google::protobuf::uint8* RecipientSignatureRejectionDocflow::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  // optional bool IsFinished = 1;
  if (has_isfinished()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->isfinished(), target);
  }

  // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RecipientSignatureRejectionAttachment = 2;
  if (has_recipientsignaturerejectionattachment()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->recipientsignaturerejectionattachment(), target);
  }

  // optional .Diadoc.Api.Proto.Timestamp DeliveryTimestamp = 3;
  if (has_deliverytimestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->deliverytimestamp(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Docflow.RecipientSignatureRejectionDocflow)
  return target;
}

int RecipientSignatureRejectionDocflow::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool IsFinished = 1;
    if (has_isfinished()) {
      total_size += 1 + 1;
    }

    // optional .Diadoc.Api.Proto.Docflow.SignedAttachment RecipientSignatureRejectionAttachment = 2;
    if (has_recipientsignaturerejectionattachment()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->recipientsignaturerejectionattachment());
    }

    // optional .Diadoc.Api.Proto.Timestamp DeliveryTimestamp = 3;
    if (has_deliverytimestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->deliverytimestamp());
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

void RecipientSignatureRejectionDocflow::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RecipientSignatureRejectionDocflow* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RecipientSignatureRejectionDocflow*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RecipientSignatureRejectionDocflow::MergeFrom(const RecipientSignatureRejectionDocflow& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_isfinished()) {
      set_isfinished(from.isfinished());
    }
    if (from.has_recipientsignaturerejectionattachment()) {
      mutable_recipientsignaturerejectionattachment()->::Diadoc::Api::Proto::Docflow::SignedAttachment::MergeFrom(from.recipientsignaturerejectionattachment());
    }
    if (from.has_deliverytimestamp()) {
      mutable_deliverytimestamp()->::Diadoc::Api::Proto::Timestamp::MergeFrom(from.deliverytimestamp());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RecipientSignatureRejectionDocflow::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RecipientSignatureRejectionDocflow::CopyFrom(const RecipientSignatureRejectionDocflow& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RecipientSignatureRejectionDocflow::IsInitialized() const {

  if (has_recipientsignaturerejectionattachment()) {
    if (!this->recipientsignaturerejectionattachment().IsInitialized()) return false;
  }
  if (has_deliverytimestamp()) {
    if (!this->deliverytimestamp().IsInitialized()) return false;
  }
  return true;
}

void RecipientSignatureRejectionDocflow::Swap(RecipientSignatureRejectionDocflow* other) {
  if (other != this) {
    std::swap(isfinished_, other->isfinished_);
    std::swap(recipientsignaturerejectionattachment_, other->recipientsignaturerejectionattachment_);
    std::swap(deliverytimestamp_, other->deliverytimestamp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RecipientSignatureRejectionDocflow::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RecipientSignatureRejectionDocflow_descriptor_;
  metadata.reflection = RecipientSignatureRejectionDocflow_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Docflow
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
