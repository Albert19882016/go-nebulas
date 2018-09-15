// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: state.proto

#ifndef PROTOBUF_state_2eproto__INCLUDED
#define PROTOBUF_state_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace consensuspb {
class ConsensusRoot;
class ConsensusRootDefaultTypeInternal;
extern ConsensusRootDefaultTypeInternal _ConsensusRoot_default_instance_;
}  // namespace consensuspb

namespace consensuspb {

namespace protobuf_state_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_state_2eproto

// ===================================================================

class ConsensusRoot : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:consensuspb.ConsensusRoot) */ {
 public:
  ConsensusRoot();
  virtual ~ConsensusRoot();

  ConsensusRoot(const ConsensusRoot& from);

  inline ConsensusRoot& operator=(const ConsensusRoot& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConsensusRoot& default_instance();

  static inline const ConsensusRoot* internal_default_instance() {
    return reinterpret_cast<const ConsensusRoot*>(
               &_ConsensusRoot_default_instance_);
  }

  void Swap(ConsensusRoot* other);

  // implements Message ----------------------------------------------

  inline ConsensusRoot* New() const PROTOBUF_FINAL { return New(NULL); }

  ConsensusRoot* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ConsensusRoot& from);
  void MergeFrom(const ConsensusRoot& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ConsensusRoot* other);
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

  // bytes proposer = 2;
  void clear_proposer();
  static const int kProposerFieldNumber = 2;
  const ::std::string& proposer() const;
  void set_proposer(const ::std::string& value);
  #if LANG_CXX11
  void set_proposer(::std::string&& value);
  #endif
  void set_proposer(const char* value);
  void set_proposer(const void* value, size_t size);
  ::std::string* mutable_proposer();
  ::std::string* release_proposer();
  void set_allocated_proposer(::std::string* proposer);

  // bytes dynasty_root = 3;
  void clear_dynasty_root();
  static const int kDynastyRootFieldNumber = 3;
  const ::std::string& dynasty_root() const;
  void set_dynasty_root(const ::std::string& value);
  #if LANG_CXX11
  void set_dynasty_root(::std::string&& value);
  #endif
  void set_dynasty_root(const char* value);
  void set_dynasty_root(const void* value, size_t size);
  ::std::string* mutable_dynasty_root();
  ::std::string* release_dynasty_root();
  void set_allocated_dynasty_root(::std::string* dynasty_root);

  // int64 timestamp = 1;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:consensuspb.ConsensusRoot)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr proposer_;
  ::google::protobuf::internal::ArenaStringPtr dynasty_root_;
  ::google::protobuf::int64 timestamp_;
  mutable int _cached_size_;
  friend struct  protobuf_state_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ConsensusRoot

// int64 timestamp = 1;
inline void ConsensusRoot::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ConsensusRoot::timestamp() const {
  // @@protoc_insertion_point(field_get:consensuspb.ConsensusRoot.timestamp)
  return timestamp_;
}
inline void ConsensusRoot::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:consensuspb.ConsensusRoot.timestamp)
}

// bytes proposer = 2;
inline void ConsensusRoot::clear_proposer() {
  proposer_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConsensusRoot::proposer() const {
  // @@protoc_insertion_point(field_get:consensuspb.ConsensusRoot.proposer)
  return proposer_.GetNoArena();
}
inline void ConsensusRoot::set_proposer(const ::std::string& value) {
  
  proposer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:consensuspb.ConsensusRoot.proposer)
}
#if LANG_CXX11
inline void ConsensusRoot::set_proposer(::std::string&& value) {
  
  proposer_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:consensuspb.ConsensusRoot.proposer)
}
#endif
inline void ConsensusRoot::set_proposer(const char* value) {
  
  proposer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:consensuspb.ConsensusRoot.proposer)
}
inline void ConsensusRoot::set_proposer(const void* value, size_t size) {
  
  proposer_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:consensuspb.ConsensusRoot.proposer)
}
inline ::std::string* ConsensusRoot::mutable_proposer() {
  
  // @@protoc_insertion_point(field_mutable:consensuspb.ConsensusRoot.proposer)
  return proposer_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConsensusRoot::release_proposer() {
  // @@protoc_insertion_point(field_release:consensuspb.ConsensusRoot.proposer)
  
  return proposer_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConsensusRoot::set_allocated_proposer(::std::string* proposer) {
  if (proposer != NULL) {
    
  } else {
    
  }
  proposer_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), proposer);
  // @@protoc_insertion_point(field_set_allocated:consensuspb.ConsensusRoot.proposer)
}

// bytes dynasty_root = 3;
inline void ConsensusRoot::clear_dynasty_root() {
  dynasty_root_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ConsensusRoot::dynasty_root() const {
  // @@protoc_insertion_point(field_get:consensuspb.ConsensusRoot.dynasty_root)
  return dynasty_root_.GetNoArena();
}
inline void ConsensusRoot::set_dynasty_root(const ::std::string& value) {
  
  dynasty_root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:consensuspb.ConsensusRoot.dynasty_root)
}
#if LANG_CXX11
inline void ConsensusRoot::set_dynasty_root(::std::string&& value) {
  
  dynasty_root_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:consensuspb.ConsensusRoot.dynasty_root)
}
#endif
inline void ConsensusRoot::set_dynasty_root(const char* value) {
  
  dynasty_root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:consensuspb.ConsensusRoot.dynasty_root)
}
inline void ConsensusRoot::set_dynasty_root(const void* value, size_t size) {
  
  dynasty_root_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:consensuspb.ConsensusRoot.dynasty_root)
}
inline ::std::string* ConsensusRoot::mutable_dynasty_root() {
  
  // @@protoc_insertion_point(field_mutable:consensuspb.ConsensusRoot.dynasty_root)
  return dynasty_root_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ConsensusRoot::release_dynasty_root() {
  // @@protoc_insertion_point(field_release:consensuspb.ConsensusRoot.dynasty_root)
  
  return dynasty_root_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ConsensusRoot::set_allocated_dynasty_root(::std::string* dynasty_root) {
  if (dynasty_root != NULL) {
    
  } else {
    
  }
  dynasty_root_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dynasty_root);
  // @@protoc_insertion_point(field_set_allocated:consensuspb.ConsensusRoot.dynasty_root)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace consensuspb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_state_2eproto__INCLUDED
