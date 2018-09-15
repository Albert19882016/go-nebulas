// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dag.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dag.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace dagpb {
class DagDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Dag> {
} _Dag_default_instance_;
class NodeDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Node> {
} _Node_default_instance_;

namespace protobuf_dag_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dag, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Dag, nodes_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Node, children_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Dag)},
  { 5, -1, sizeof(Node)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Dag_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Node_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "dag.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Dag_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _Node_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Dag_default_instance_.DefaultConstruct();
  _Node_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\tdag.proto\022\005dagpb\"!\n\003Dag\022\032\n\005Nodes\030\001 \003(\013"
      "2\013.dagpb.Node\"4\n\004Node\022\013\n\003Key\030\001 \001(\t\022\r\n\005In"
      "dex\030\002 \001(\005\022\020\n\010Children\030\003 \003(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dag.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_dag_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Dag::kNodesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Dag::Dag()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_dag_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:dagpb.Dag)
}
Dag::Dag(const Dag& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      nodes_(from.nodes_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:dagpb.Dag)
}

void Dag::SharedCtor() {
  _cached_size_ = 0;
}

Dag::~Dag() {
  // @@protoc_insertion_point(destructor:dagpb.Dag)
  SharedDtor();
}

void Dag::SharedDtor() {
}

void Dag::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Dag::descriptor() {
  protobuf_dag_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dag_2eproto::file_level_metadata[0].descriptor;
}

const Dag& Dag::default_instance() {
  protobuf_dag_2eproto::InitDefaults();
  return *internal_default_instance();
}

Dag* Dag::New(::google::protobuf::Arena* arena) const {
  Dag* n = new Dag;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Dag::Clear() {
// @@protoc_insertion_point(message_clear_start:dagpb.Dag)
  nodes_.Clear();
}

bool Dag::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dagpb.Dag)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .dagpb.Node Nodes = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_nodes()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dagpb.Dag)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dagpb.Dag)
  return false;
#undef DO_
}

void Dag::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dagpb.Dag)
  // repeated .dagpb.Node Nodes = 1;
  for (unsigned int i = 0, n = this->nodes_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->nodes(i), output);
  }

  // @@protoc_insertion_point(serialize_end:dagpb.Dag)
}

::google::protobuf::uint8* Dag::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dagpb.Dag)
  // repeated .dagpb.Node Nodes = 1;
  for (unsigned int i = 0, n = this->nodes_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->nodes(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:dagpb.Dag)
  return target;
}

size_t Dag::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dagpb.Dag)
  size_t total_size = 0;

  // repeated .dagpb.Node Nodes = 1;
  {
    unsigned int count = this->nodes_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->nodes(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Dag::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dagpb.Dag)
  GOOGLE_DCHECK_NE(&from, this);
  const Dag* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Dag>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dagpb.Dag)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dagpb.Dag)
    MergeFrom(*source);
  }
}

void Dag::MergeFrom(const Dag& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dagpb.Dag)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  nodes_.MergeFrom(from.nodes_);
}

void Dag::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dagpb.Dag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Dag::CopyFrom(const Dag& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dagpb.Dag)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Dag::IsInitialized() const {
  return true;
}

void Dag::Swap(Dag* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Dag::InternalSwap(Dag* other) {
  nodes_.UnsafeArenaSwap(&other->nodes_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Dag::GetMetadata() const {
  protobuf_dag_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dag_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Dag

// repeated .dagpb.Node Nodes = 1;
int Dag::nodes_size() const {
  return nodes_.size();
}
void Dag::clear_nodes() {
  nodes_.Clear();
}
const ::dagpb::Node& Dag::nodes(int index) const {
  // @@protoc_insertion_point(field_get:dagpb.Dag.Nodes)
  return nodes_.Get(index);
}
::dagpb::Node* Dag::mutable_nodes(int index) {
  // @@protoc_insertion_point(field_mutable:dagpb.Dag.Nodes)
  return nodes_.Mutable(index);
}
::dagpb::Node* Dag::add_nodes() {
  // @@protoc_insertion_point(field_add:dagpb.Dag.Nodes)
  return nodes_.Add();
}
::google::protobuf::RepeatedPtrField< ::dagpb::Node >*
Dag::mutable_nodes() {
  // @@protoc_insertion_point(field_mutable_list:dagpb.Dag.Nodes)
  return &nodes_;
}
const ::google::protobuf::RepeatedPtrField< ::dagpb::Node >&
Dag::nodes() const {
  // @@protoc_insertion_point(field_list:dagpb.Dag.Nodes)
  return nodes_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Node::kKeyFieldNumber;
const int Node::kIndexFieldNumber;
const int Node::kChildrenFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Node::Node()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_dag_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:dagpb.Node)
}
Node::Node(const Node& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      children_(from.children_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  index_ = from.index_;
  // @@protoc_insertion_point(copy_constructor:dagpb.Node)
}

void Node::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  index_ = 0;
  _cached_size_ = 0;
}

Node::~Node() {
  // @@protoc_insertion_point(destructor:dagpb.Node)
  SharedDtor();
}

void Node::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Node::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Node::descriptor() {
  protobuf_dag_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dag_2eproto::file_level_metadata[1].descriptor;
}

const Node& Node::default_instance() {
  protobuf_dag_2eproto::InitDefaults();
  return *internal_default_instance();
}

Node* Node::New(::google::protobuf::Arena* arena) const {
  Node* n = new Node;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Node::Clear() {
// @@protoc_insertion_point(message_clear_start:dagpb.Node)
  children_.Clear();
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  index_ = 0;
}

bool Node::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dagpb.Node)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string Key = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "dagpb.Node.Key"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 Index = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated int32 Children = 3;
      case 3: {
        if (tag == 26u) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_children())));
        } else if (tag == 24u) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26u, input, this->mutable_children())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dagpb.Node)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dagpb.Node)
  return false;
#undef DO_
}

void Node::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dagpb.Node)
  // string Key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dagpb.Node.Key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // int32 Index = 2;
  if (this->index() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->index(), output);
  }

  // repeated int32 Children = 3;
  if (this->children_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_children_cached_byte_size_);
  }
  for (int i = 0; i < this->children_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->children(i), output);
  }

  // @@protoc_insertion_point(serialize_end:dagpb.Node)
}

::google::protobuf::uint8* Node::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:dagpb.Node)
  // string Key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "dagpb.Node.Key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // int32 Index = 2;
  if (this->index() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->index(), target);
  }

  // repeated int32 Children = 3;
  if (this->children_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _children_cached_byte_size_, target);
  }
  for (int i = 0; i < this->children_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->children(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:dagpb.Node)
  return target;
}

size_t Node::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:dagpb.Node)
  size_t total_size = 0;

  // repeated int32 Children = 3;
  {
    size_t data_size = ::google::protobuf::internal::WireFormatLite::
      Int32Size(this->children_);
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _children_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string Key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }

  // int32 Index = 2;
  if (this->index() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->index());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Node::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:dagpb.Node)
  GOOGLE_DCHECK_NE(&from, this);
  const Node* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Node>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:dagpb.Node)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:dagpb.Node)
    MergeFrom(*source);
  }
}

void Node::MergeFrom(const Node& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:dagpb.Node)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  children_.MergeFrom(from.children_);
  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.index() != 0) {
    set_index(from.index());
  }
}

void Node::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:dagpb.Node)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Node::CopyFrom(const Node& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:dagpb.Node)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Node::IsInitialized() const {
  return true;
}

void Node::Swap(Node* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Node::InternalSwap(Node* other) {
  children_.UnsafeArenaSwap(&other->children_);
  key_.Swap(&other->key_);
  std::swap(index_, other->index_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Node::GetMetadata() const {
  protobuf_dag_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_dag_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Node

// string Key = 1;
void Node::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Node::key() const {
  // @@protoc_insertion_point(field_get:dagpb.Node.Key)
  return key_.GetNoArena();
}
void Node::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:dagpb.Node.Key)
}
#if LANG_CXX11
void Node::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:dagpb.Node.Key)
}
#endif
void Node::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:dagpb.Node.Key)
}
void Node::set_key(const char* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:dagpb.Node.Key)
}
::std::string* Node::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:dagpb.Node.Key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Node::release_key() {
  // @@protoc_insertion_point(field_release:dagpb.Node.Key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Node::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:dagpb.Node.Key)
}

// int32 Index = 2;
void Node::clear_index() {
  index_ = 0;
}
::google::protobuf::int32 Node::index() const {
  // @@protoc_insertion_point(field_get:dagpb.Node.Index)
  return index_;
}
void Node::set_index(::google::protobuf::int32 value) {
  
  index_ = value;
  // @@protoc_insertion_point(field_set:dagpb.Node.Index)
}

// repeated int32 Children = 3;
int Node::children_size() const {
  return children_.size();
}
void Node::clear_children() {
  children_.Clear();
}
::google::protobuf::int32 Node::children(int index) const {
  // @@protoc_insertion_point(field_get:dagpb.Node.Children)
  return children_.Get(index);
}
void Node::set_children(int index, ::google::protobuf::int32 value) {
  children_.Set(index, value);
  // @@protoc_insertion_point(field_set:dagpb.Node.Children)
}
void Node::add_children(::google::protobuf::int32 value) {
  children_.Add(value);
  // @@protoc_insertion_point(field_add:dagpb.Node.Children)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Node::children() const {
  // @@protoc_insertion_point(field_list:dagpb.Node.Children)
  return children_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Node::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:dagpb.Node.Children)
  return &children_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace dagpb

// @@protoc_insertion_point(global_scope)
