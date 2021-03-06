// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/DocumentWithDocflowV3.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Docflow/DocumentWithDocflowV3.pb.h"

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

const ::google::protobuf::Descriptor* DocumentWithDocflowV3_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DocumentWithDocflowV3_reflection_ = NULL;
const ::google::protobuf::Descriptor* LastEvent_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LastEvent_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Docflow_2fDocumentWithDocflowV3_2eproto() {
  protobuf_AddDesc_Docflow_2fDocumentWithDocflowV3_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Docflow/DocumentWithDocflowV3.proto");
  GOOGLE_CHECK(file != NULL);
  DocumentWithDocflowV3_descriptor_ = file->message_type(0);
  static const int DocumentWithDocflowV3_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DocumentWithDocflowV3, documentid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DocumentWithDocflowV3, lastevent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DocumentWithDocflowV3, documentinfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DocumentWithDocflowV3, docflow_),
  };
  DocumentWithDocflowV3_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DocumentWithDocflowV3_descriptor_,
      DocumentWithDocflowV3::default_instance_,
      DocumentWithDocflowV3_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DocumentWithDocflowV3, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DocumentWithDocflowV3, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DocumentWithDocflowV3));
  LastEvent_descriptor_ = file->message_type(1);
  static const int LastEvent_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LastEvent, eventid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LastEvent, timestamp_),
  };
  LastEvent_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LastEvent_descriptor_,
      LastEvent::default_instance_,
      LastEvent_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LastEvent, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LastEvent, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LastEvent));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Docflow_2fDocumentWithDocflowV3_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DocumentWithDocflowV3_descriptor_, &DocumentWithDocflowV3::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LastEvent_descriptor_, &LastEvent::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Docflow_2fDocumentWithDocflowV3_2eproto() {
  delete DocumentWithDocflowV3::default_instance_;
  delete DocumentWithDocflowV3_reflection_;
  delete LastEvent::default_instance_;
  delete LastEvent_reflection_;
}

void protobuf_AddDesc_Docflow_2fDocumentWithDocflowV3_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_DocumentId_2eproto();
  ::Diadoc::Api::Proto::protobuf_AddDesc_Timestamp_2eproto();
  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fDocumentInfoV3_2eproto();
  ::Diadoc::Api::Proto::Docflow::protobuf_AddDesc_Docflow_2fDocflowV3_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n#Docflow/DocumentWithDocflowV3.proto\022\030D"
    "iadoc.Api.Proto.Docflow\032\020DocumentId.prot"
    "o\032\017Timestamp.proto\032\034Docflow/DocumentInfo"
    "V3.proto\032\027Docflow/DocflowV3.proto\"\367\001\n\025Do"
    "cumentWithDocflowV3\0220\n\nDocumentId\030\001 \002(\0132"
    "\034.Diadoc.Api.Proto.DocumentId\0226\n\tLastEve"
    "nt\030\002 \002(\0132#.Diadoc.Api.Proto.Docflow.Last"
    "Event\022>\n\014DocumentInfo\030\003 \002(\0132(.Diadoc.Api"
    ".Proto.Docflow.DocumentInfoV3\0224\n\007Docflow"
    "\030\004 \002(\0132#.Diadoc.Api.Proto.Docflow.Docflo"
    "wV3\"L\n\tLastEvent\022\017\n\007EventId\030\001 \002(\t\022.\n\tTim"
    "estamp\030\002 \002(\0132\033.Diadoc.Api.Proto.Timestam"
    "p", 481);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Docflow/DocumentWithDocflowV3.proto", &protobuf_RegisterTypes);
  DocumentWithDocflowV3::default_instance_ = new DocumentWithDocflowV3();
  LastEvent::default_instance_ = new LastEvent();
  DocumentWithDocflowV3::default_instance_->InitAsDefaultInstance();
  LastEvent::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Docflow_2fDocumentWithDocflowV3_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Docflow_2fDocumentWithDocflowV3_2eproto {
  StaticDescriptorInitializer_Docflow_2fDocumentWithDocflowV3_2eproto() {
    protobuf_AddDesc_Docflow_2fDocumentWithDocflowV3_2eproto();
  }
} static_descriptor_initializer_Docflow_2fDocumentWithDocflowV3_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DocumentWithDocflowV3::kDocumentIdFieldNumber;
const int DocumentWithDocflowV3::kLastEventFieldNumber;
const int DocumentWithDocflowV3::kDocumentInfoFieldNumber;
const int DocumentWithDocflowV3::kDocflowFieldNumber;
#endif  // !_MSC_VER

DocumentWithDocflowV3::DocumentWithDocflowV3()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
}

void DocumentWithDocflowV3::InitAsDefaultInstance() {
  documentid_ = const_cast< ::Diadoc::Api::Proto::DocumentId*>(&::Diadoc::Api::Proto::DocumentId::default_instance());
  lastevent_ = const_cast< ::Diadoc::Api::Proto::Docflow::LastEvent*>(&::Diadoc::Api::Proto::Docflow::LastEvent::default_instance());
  documentinfo_ = const_cast< ::Diadoc::Api::Proto::Docflow::DocumentInfoV3*>(&::Diadoc::Api::Proto::Docflow::DocumentInfoV3::default_instance());
  docflow_ = const_cast< ::Diadoc::Api::Proto::Docflow::DocflowV3*>(&::Diadoc::Api::Proto::Docflow::DocflowV3::default_instance());
}

DocumentWithDocflowV3::DocumentWithDocflowV3(const DocumentWithDocflowV3& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
}

void DocumentWithDocflowV3::SharedCtor() {
  _cached_size_ = 0;
  documentid_ = NULL;
  lastevent_ = NULL;
  documentinfo_ = NULL;
  docflow_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DocumentWithDocflowV3::~DocumentWithDocflowV3() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  SharedDtor();
}

void DocumentWithDocflowV3::SharedDtor() {
  if (this != default_instance_) {
    delete documentid_;
    delete lastevent_;
    delete documentinfo_;
    delete docflow_;
  }
}

void DocumentWithDocflowV3::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DocumentWithDocflowV3::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DocumentWithDocflowV3_descriptor_;
}

const DocumentWithDocflowV3& DocumentWithDocflowV3::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Docflow_2fDocumentWithDocflowV3_2eproto();
  return *default_instance_;
}

DocumentWithDocflowV3* DocumentWithDocflowV3::default_instance_ = NULL;

DocumentWithDocflowV3* DocumentWithDocflowV3::New() const {
  return new DocumentWithDocflowV3;
}

void DocumentWithDocflowV3::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    if (has_documentid()) {
      if (documentid_ != NULL) documentid_->::Diadoc::Api::Proto::DocumentId::Clear();
    }
    if (has_lastevent()) {
      if (lastevent_ != NULL) lastevent_->::Diadoc::Api::Proto::Docflow::LastEvent::Clear();
    }
    if (has_documentinfo()) {
      if (documentinfo_ != NULL) documentinfo_->::Diadoc::Api::Proto::Docflow::DocumentInfoV3::Clear();
    }
    if (has_docflow()) {
      if (docflow_ != NULL) docflow_->::Diadoc::Api::Proto::Docflow::DocflowV3::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DocumentWithDocflowV3::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Diadoc.Api.Proto.DocumentId DocumentId = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_documentid()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_LastEvent;
        break;
      }

      // required .Diadoc.Api.Proto.Docflow.LastEvent LastEvent = 2;
      case 2: {
        if (tag == 18) {
         parse_LastEvent:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_lastevent()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_DocumentInfo;
        break;
      }

      // required .Diadoc.Api.Proto.Docflow.DocumentInfoV3 DocumentInfo = 3;
      case 3: {
        if (tag == 26) {
         parse_DocumentInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_documentinfo()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_Docflow;
        break;
      }

      // required .Diadoc.Api.Proto.Docflow.DocflowV3 Docflow = 4;
      case 4: {
        if (tag == 34) {
         parse_Docflow:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_docflow()));
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  return false;
#undef DO_
}

void DocumentWithDocflowV3::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  // required .Diadoc.Api.Proto.DocumentId DocumentId = 1;
  if (has_documentid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->documentid(), output);
  }

  // required .Diadoc.Api.Proto.Docflow.LastEvent LastEvent = 2;
  if (has_lastevent()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->lastevent(), output);
  }

  // required .Diadoc.Api.Proto.Docflow.DocumentInfoV3 DocumentInfo = 3;
  if (has_documentinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->documentinfo(), output);
  }

  // required .Diadoc.Api.Proto.Docflow.DocflowV3 Docflow = 4;
  if (has_docflow()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->docflow(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
}

::google::protobuf::uint8* DocumentWithDocflowV3::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  // required .Diadoc.Api.Proto.DocumentId DocumentId = 1;
  if (has_documentid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->documentid(), target);
  }

  // required .Diadoc.Api.Proto.Docflow.LastEvent LastEvent = 2;
  if (has_lastevent()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->lastevent(), target);
  }

  // required .Diadoc.Api.Proto.Docflow.DocumentInfoV3 DocumentInfo = 3;
  if (has_documentinfo()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->documentinfo(), target);
  }

  // required .Diadoc.Api.Proto.Docflow.DocflowV3 Docflow = 4;
  if (has_docflow()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->docflow(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Docflow.DocumentWithDocflowV3)
  return target;
}

int DocumentWithDocflowV3::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .Diadoc.Api.Proto.DocumentId DocumentId = 1;
    if (has_documentid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->documentid());
    }

    // required .Diadoc.Api.Proto.Docflow.LastEvent LastEvent = 2;
    if (has_lastevent()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->lastevent());
    }

    // required .Diadoc.Api.Proto.Docflow.DocumentInfoV3 DocumentInfo = 3;
    if (has_documentinfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->documentinfo());
    }

    // required .Diadoc.Api.Proto.Docflow.DocflowV3 Docflow = 4;
    if (has_docflow()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->docflow());
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

void DocumentWithDocflowV3::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DocumentWithDocflowV3* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DocumentWithDocflowV3*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DocumentWithDocflowV3::MergeFrom(const DocumentWithDocflowV3& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_documentid()) {
      mutable_documentid()->::Diadoc::Api::Proto::DocumentId::MergeFrom(from.documentid());
    }
    if (from.has_lastevent()) {
      mutable_lastevent()->::Diadoc::Api::Proto::Docflow::LastEvent::MergeFrom(from.lastevent());
    }
    if (from.has_documentinfo()) {
      mutable_documentinfo()->::Diadoc::Api::Proto::Docflow::DocumentInfoV3::MergeFrom(from.documentinfo());
    }
    if (from.has_docflow()) {
      mutable_docflow()->::Diadoc::Api::Proto::Docflow::DocflowV3::MergeFrom(from.docflow());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DocumentWithDocflowV3::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DocumentWithDocflowV3::CopyFrom(const DocumentWithDocflowV3& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DocumentWithDocflowV3::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  if (has_documentid()) {
    if (!this->documentid().IsInitialized()) return false;
  }
  if (has_lastevent()) {
    if (!this->lastevent().IsInitialized()) return false;
  }
  if (has_documentinfo()) {
    if (!this->documentinfo().IsInitialized()) return false;
  }
  if (has_docflow()) {
    if (!this->docflow().IsInitialized()) return false;
  }
  return true;
}

void DocumentWithDocflowV3::Swap(DocumentWithDocflowV3* other) {
  if (other != this) {
    std::swap(documentid_, other->documentid_);
    std::swap(lastevent_, other->lastevent_);
    std::swap(documentinfo_, other->documentinfo_);
    std::swap(docflow_, other->docflow_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DocumentWithDocflowV3::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DocumentWithDocflowV3_descriptor_;
  metadata.reflection = DocumentWithDocflowV3_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LastEvent::kEventIdFieldNumber;
const int LastEvent::kTimestampFieldNumber;
#endif  // !_MSC_VER

LastEvent::LastEvent()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Docflow.LastEvent)
}

void LastEvent::InitAsDefaultInstance() {
  timestamp_ = const_cast< ::Diadoc::Api::Proto::Timestamp*>(&::Diadoc::Api::Proto::Timestamp::default_instance());
}

LastEvent::LastEvent(const LastEvent& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Docflow.LastEvent)
}

void LastEvent::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  eventid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  timestamp_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LastEvent::~LastEvent() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Docflow.LastEvent)
  SharedDtor();
}

void LastEvent::SharedDtor() {
  if (eventid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete eventid_;
  }
  if (this != default_instance_) {
    delete timestamp_;
  }
}

void LastEvent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LastEvent::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LastEvent_descriptor_;
}

const LastEvent& LastEvent::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Docflow_2fDocumentWithDocflowV3_2eproto();
  return *default_instance_;
}

LastEvent* LastEvent::default_instance_ = NULL;

LastEvent* LastEvent::New() const {
  return new LastEvent;
}

void LastEvent::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_eventid()) {
      if (eventid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        eventid_->clear();
      }
    }
    if (has_timestamp()) {
      if (timestamp_ != NULL) timestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LastEvent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Docflow.LastEvent)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string EventId = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_eventid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->eventid().data(), this->eventid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "eventid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Timestamp;
        break;
      }

      // required .Diadoc.Api.Proto.Timestamp Timestamp = 2;
      case 2: {
        if (tag == 18) {
         parse_Timestamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_timestamp()));
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
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Docflow.LastEvent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Docflow.LastEvent)
  return false;
#undef DO_
}

void LastEvent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Docflow.LastEvent)
  // required string EventId = 1;
  if (has_eventid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->eventid().data(), this->eventid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "eventid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->eventid(), output);
  }

  // required .Diadoc.Api.Proto.Timestamp Timestamp = 2;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->timestamp(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Docflow.LastEvent)
}

::google::protobuf::uint8* LastEvent::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Docflow.LastEvent)
  // required string EventId = 1;
  if (has_eventid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->eventid().data(), this->eventid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "eventid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->eventid(), target);
  }

  // required .Diadoc.Api.Proto.Timestamp Timestamp = 2;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->timestamp(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Docflow.LastEvent)
  return target;
}

int LastEvent::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string EventId = 1;
    if (has_eventid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->eventid());
    }

    // required .Diadoc.Api.Proto.Timestamp Timestamp = 2;
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->timestamp());
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

void LastEvent::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LastEvent* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LastEvent*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LastEvent::MergeFrom(const LastEvent& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_eventid()) {
      set_eventid(from.eventid());
    }
    if (from.has_timestamp()) {
      mutable_timestamp()->::Diadoc::Api::Proto::Timestamp::MergeFrom(from.timestamp());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LastEvent::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LastEvent::CopyFrom(const LastEvent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LastEvent::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_timestamp()) {
    if (!this->timestamp().IsInitialized()) return false;
  }
  return true;
}

void LastEvent::Swap(LastEvent* other) {
  if (other != this) {
    std::swap(eventid_, other->eventid_);
    std::swap(timestamp_, other->timestamp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LastEvent::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LastEvent_descriptor_;
  metadata.reflection = LastEvent_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Docflow
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
