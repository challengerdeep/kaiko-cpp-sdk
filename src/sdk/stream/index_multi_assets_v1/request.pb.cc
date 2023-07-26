// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/index_multi_assets_v1/request.proto

#include "sdk/stream/index_multi_assets_v1/request.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace kaikosdk {
PROTOBUF_CONSTEXPR StreamIndexMultiAssetsServiceRequestV1::StreamIndexMultiAssetsServiceRequestV1(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.commodities_)*/{}
  , /*decltype(_impl_._commodities_cached_byte_size_)*/{0}
  , /*decltype(_impl_.index_code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.interval_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamIndexMultiAssetsServiceRequestV1DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamIndexMultiAssetsServiceRequestV1DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamIndexMultiAssetsServiceRequestV1DefaultTypeInternal() {}
  union {
    StreamIndexMultiAssetsServiceRequestV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamIndexMultiAssetsServiceRequestV1DefaultTypeInternal _StreamIndexMultiAssetsServiceRequestV1_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexMultiAssetsServiceRequestV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexMultiAssetsServiceRequestV1, _impl_.index_code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexMultiAssetsServiceRequestV1, _impl_.commodities_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamIndexMultiAssetsServiceRequestV1, _impl_.interval_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamIndexMultiAssetsServiceRequestV1)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamIndexMultiAssetsServiceRequestV1_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.sdk/stream/index_multi_assets_v1/reque"
  "st.proto\022\010kaikosdk\032\034sdk/core/data_interv"
  "al.proto\032#sdk/stream/index_v1/commodity."
  "proto\"\233\001\n&StreamIndexMultiAssetsServiceR"
  "equestV1\022\022\n\nindex_code\030\001 \001(\t\0223\n\013commodit"
  "ies\030\002 \003(\0162\036.kaikosdk.StreamIndexCommodit"
  "y\022(\n\010interval\030\003 \001(\0132\026.kaikosdk.DataInter"
  "valB\251\001\n*com.kaiko.sdk.stream.index_multi"
  "_assets_v1P\001ZTgithub.com/kaikodata/kaiko"
  "-go-sdk/stream/index_multi_assets_v1;ind"
  "ex_multi_assets_v1\252\002\"KaikoSdk.Stream.Ind"
  "exMultiAssetsV1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_deps[2] = {
  &::descriptor_table_sdk_2fcore_2fdata_5finterval_2eproto,
  &::descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto = {
    false, false, 463, descriptor_table_protodef_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto,
    "sdk/stream/index_multi_assets_v1/request.proto",
    &descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto,
    file_level_service_descriptors_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto(&descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamIndexMultiAssetsServiceRequestV1::_Internal {
 public:
  static const ::kaikosdk::DataInterval& interval(const StreamIndexMultiAssetsServiceRequestV1* msg);
};

const ::kaikosdk::DataInterval&
StreamIndexMultiAssetsServiceRequestV1::_Internal::interval(const StreamIndexMultiAssetsServiceRequestV1* msg) {
  return *msg->_impl_.interval_;
}
void StreamIndexMultiAssetsServiceRequestV1::clear_interval() {
  if (GetArenaForAllocation() == nullptr && _impl_.interval_ != nullptr) {
    delete _impl_.interval_;
  }
  _impl_.interval_ = nullptr;
}
StreamIndexMultiAssetsServiceRequestV1::StreamIndexMultiAssetsServiceRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
}
StreamIndexMultiAssetsServiceRequestV1::StreamIndexMultiAssetsServiceRequestV1(const StreamIndexMultiAssetsServiceRequestV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamIndexMultiAssetsServiceRequestV1* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.commodities_){from._impl_.commodities_}
    , /*decltype(_impl_._commodities_cached_byte_size_)*/{0}
    , decltype(_impl_.index_code_){}
    , decltype(_impl_.interval_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.index_code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.index_code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_index_code().empty()) {
    _this->_impl_.index_code_.Set(from._internal_index_code(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_interval()) {
    _this->_impl_.interval_ = new ::kaikosdk::DataInterval(*from._impl_.interval_);
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
}

inline void StreamIndexMultiAssetsServiceRequestV1::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.commodities_){arena}
    , /*decltype(_impl_._commodities_cached_byte_size_)*/{0}
    , decltype(_impl_.index_code_){}
    , decltype(_impl_.interval_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.index_code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.index_code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StreamIndexMultiAssetsServiceRequestV1::~StreamIndexMultiAssetsServiceRequestV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamIndexMultiAssetsServiceRequestV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.commodities_.~RepeatedField();
  _impl_.index_code_.Destroy();
  if (this != internal_default_instance()) delete _impl_.interval_;
}

void StreamIndexMultiAssetsServiceRequestV1::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamIndexMultiAssetsServiceRequestV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.commodities_.Clear();
  _impl_.index_code_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.interval_ != nullptr) {
    delete _impl_.interval_;
  }
  _impl_.interval_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamIndexMultiAssetsServiceRequestV1::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string index_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_index_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamIndexMultiAssetsServiceRequestV1.index_code"));
        } else
          goto handle_unusual;
        continue;
      // repeated .kaikosdk.StreamIndexCommodity commodities = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_commodities(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_commodities(static_cast<::kaikosdk::StreamIndexCommodity>(val));
        } else
          goto handle_unusual;
        continue;
      // .kaikosdk.DataInterval interval = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_interval(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StreamIndexMultiAssetsServiceRequestV1::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string index_code = 1;
  if (!this->_internal_index_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_index_code().data(), static_cast<int>(this->_internal_index_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamIndexMultiAssetsServiceRequestV1.index_code");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_index_code(), target);
  }

  // repeated .kaikosdk.StreamIndexCommodity commodities = 2;
  {
    int byte_size = _impl_._commodities_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          2, _impl_.commodities_, byte_size, target);
    }
  }

  // .kaikosdk.DataInterval interval = 3;
  if (this->_internal_has_interval()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::interval(this),
        _Internal::interval(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  return target;
}

size_t StreamIndexMultiAssetsServiceRequestV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .kaikosdk.StreamIndexCommodity commodities = 2;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_commodities_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_commodities(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._commodities_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string index_code = 1;
  if (!this->_internal_index_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_index_code());
  }

  // .kaikosdk.DataInterval interval = 3;
  if (this->_internal_has_interval()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.interval_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamIndexMultiAssetsServiceRequestV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamIndexMultiAssetsServiceRequestV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamIndexMultiAssetsServiceRequestV1::GetClassData() const { return &_class_data_; }


void StreamIndexMultiAssetsServiceRequestV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamIndexMultiAssetsServiceRequestV1*>(&to_msg);
  auto& from = static_cast<const StreamIndexMultiAssetsServiceRequestV1&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.commodities_.MergeFrom(from._impl_.commodities_);
  if (!from._internal_index_code().empty()) {
    _this->_internal_set_index_code(from._internal_index_code());
  }
  if (from._internal_has_interval()) {
    _this->_internal_mutable_interval()->::kaikosdk::DataInterval::MergeFrom(
        from._internal_interval());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamIndexMultiAssetsServiceRequestV1::CopyFrom(const StreamIndexMultiAssetsServiceRequestV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamIndexMultiAssetsServiceRequestV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamIndexMultiAssetsServiceRequestV1::IsInitialized() const {
  return true;
}

void StreamIndexMultiAssetsServiceRequestV1::InternalSwap(StreamIndexMultiAssetsServiceRequestV1* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.commodities_.InternalSwap(&other->_impl_.commodities_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.index_code_, lhs_arena,
      &other->_impl_.index_code_, rhs_arena
  );
  swap(_impl_.interval_, other->_impl_.interval_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamIndexMultiAssetsServiceRequestV1::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2findex_5fmulti_5fassets_5fv1_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1*
Arena::CreateMaybeMessage< ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamIndexMultiAssetsServiceRequestV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
