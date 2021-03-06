// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AsyncMethodResult.proto

#ifndef PROTOBUF_AsyncMethodResult_2eproto__INCLUDED
#define PROTOBUF_AsyncMethodResult_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_AsyncMethodResult_2eproto();
void protobuf_AssignDesc_AsyncMethodResult_2eproto();
void protobuf_ShutdownFile_AsyncMethodResult_2eproto();

class AsyncMethodResult;

// ===================================================================

class AsyncMethodResult : public ::google::protobuf::Message {
 public:
  AsyncMethodResult();
  virtual ~AsyncMethodResult();

  AsyncMethodResult(const AsyncMethodResult& from);

  inline AsyncMethodResult& operator=(const AsyncMethodResult& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AsyncMethodResult& default_instance();

  void Swap(AsyncMethodResult* other);

  // implements Message ----------------------------------------------

  AsyncMethodResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AsyncMethodResult& from);
  void MergeFrom(const AsyncMethodResult& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string TaskId = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIdFieldNumber = 1;
  inline const ::std::string& taskid() const;
  inline void set_taskid(const ::std::string& value);
  inline void set_taskid(const char* value);
  inline void set_taskid(const char* value, size_t size);
  inline ::std::string* mutable_taskid();
  inline ::std::string* release_taskid();
  inline void set_allocated_taskid(::std::string* taskid);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.AsyncMethodResult)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* taskid_;
  friend void  protobuf_AddDesc_AsyncMethodResult_2eproto();
  friend void protobuf_AssignDesc_AsyncMethodResult_2eproto();
  friend void protobuf_ShutdownFile_AsyncMethodResult_2eproto();

  void InitAsDefaultInstance();
  static AsyncMethodResult* default_instance_;
};
// ===================================================================


// ===================================================================

// AsyncMethodResult

// optional string TaskId = 1;
inline bool AsyncMethodResult::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AsyncMethodResult::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AsyncMethodResult::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AsyncMethodResult::clear_taskid() {
  if (taskid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    taskid_->clear();
  }
  clear_has_taskid();
}
inline const ::std::string& AsyncMethodResult::taskid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.AsyncMethodResult.TaskId)
  return *taskid_;
}
inline void AsyncMethodResult::set_taskid(const ::std::string& value) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.AsyncMethodResult.TaskId)
}
inline void AsyncMethodResult::set_taskid(const char* value) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.AsyncMethodResult.TaskId)
}
inline void AsyncMethodResult::set_taskid(const char* value, size_t size) {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    taskid_ = new ::std::string;
  }
  taskid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.AsyncMethodResult.TaskId)
}
inline ::std::string* AsyncMethodResult::mutable_taskid() {
  set_has_taskid();
  if (taskid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    taskid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.AsyncMethodResult.TaskId)
  return taskid_;
}
inline ::std::string* AsyncMethodResult::release_taskid() {
  clear_has_taskid();
  if (taskid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = taskid_;
    taskid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void AsyncMethodResult::set_allocated_taskid(::std::string* taskid) {
  if (taskid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete taskid_;
  }
  if (taskid) {
    set_has_taskid();
    taskid_ = taskid;
  } else {
    clear_has_taskid();
    taskid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.AsyncMethodResult.TaskId)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AsyncMethodResult_2eproto__INCLUDED
