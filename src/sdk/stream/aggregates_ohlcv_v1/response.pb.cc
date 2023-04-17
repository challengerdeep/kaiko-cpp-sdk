// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_ohlcv_v1/response.proto

#include "sdk/stream/aggregates_ohlcv_v1/response.pb.h"

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
PROTOBUF_CONSTEXPR StreamAggregatesOHLCVResponseV1::StreamAggregatesOHLCVResponseV1(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.aggregate_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.class__)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.close_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.exchange_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.high_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.low_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.open_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.sequence_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.uid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.volume_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.timestamp_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamAggregatesOHLCVResponseV1DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamAggregatesOHLCVResponseV1DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamAggregatesOHLCVResponseV1DefaultTypeInternal() {}
  union {
    StreamAggregatesOHLCVResponseV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamAggregatesOHLCVResponseV1DefaultTypeInternal _StreamAggregatesOHLCVResponseV1_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.aggregate_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.class__),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.close_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.high_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.low_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.open_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.sequence_id_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.uid_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesOHLCVResponseV1, _impl_.volume_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatesOHLCVResponseV1)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamAggregatesOHLCVResponseV1_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n-sdk/stream/aggregates_ohlcv_v1/respons"
  "e.proto\022\010kaikosdk\032\037google/protobuf/times"
  "tamp.proto\"\374\001\n\037StreamAggregatesOHLCVResp"
  "onseV1\022\021\n\taggregate\030\001 \001(\t\022\r\n\005class\030\002 \001(\t"
  "\022\r\n\005close\030\003 \001(\t\022\020\n\010exchange\030\004 \001(\t\022\014\n\004hig"
  "h\030\005 \001(\t\022\013\n\003low\030\006 \001(\t\022\014\n\004open\030\007 \001(\t\022\023\n\013se"
  "quence_id\030\010 \001(\t\022\014\n\004code\030\t \001(\t\022-\n\ttimesta"
  "mp\030\n \001(\0132\032.google.protobuf.Timestamp\022\013\n\003"
  "uid\030\013 \001(\t\022\016\n\006volume\030\014 \001(\tB\242\001\n(com.kaiko."
  "sdk.stream.aggregates_ohlcv_v1P\001ZPgithub"
  ".com/kaikodata/kaiko-go-sdk/stream/aggre"
  "gates_ohlcv_v1;aggregates_ohlcv_v1\252\002!Kai"
  "koSdk.Stream.AggregatesOHLCVV1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto = {
    false, false, 518, descriptor_table_protodef_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto,
    "sdk/stream/aggregates_ohlcv_v1/response.proto",
    &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto,
    file_level_service_descriptors_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesOHLCVResponseV1::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const StreamAggregatesOHLCVResponseV1* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
StreamAggregatesOHLCVResponseV1::_Internal::timestamp(const StreamAggregatesOHLCVResponseV1* msg) {
  return *msg->_impl_.timestamp_;
}
void StreamAggregatesOHLCVResponseV1::clear_timestamp() {
  if (GetArenaForAllocation() == nullptr && _impl_.timestamp_ != nullptr) {
    delete _impl_.timestamp_;
  }
  _impl_.timestamp_ = nullptr;
}
StreamAggregatesOHLCVResponseV1::StreamAggregatesOHLCVResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesOHLCVResponseV1)
}
StreamAggregatesOHLCVResponseV1::StreamAggregatesOHLCVResponseV1(const StreamAggregatesOHLCVResponseV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamAggregatesOHLCVResponseV1* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.aggregate_){}
    , decltype(_impl_.class__){}
    , decltype(_impl_.close_){}
    , decltype(_impl_.exchange_){}
    , decltype(_impl_.high_){}
    , decltype(_impl_.low_){}
    , decltype(_impl_.open_){}
    , decltype(_impl_.sequence_id_){}
    , decltype(_impl_.code_){}
    , decltype(_impl_.uid_){}
    , decltype(_impl_.volume_){}
    , decltype(_impl_.timestamp_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.aggregate_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_aggregate().empty()) {
    _this->_impl_.aggregate_.Set(from._internal_aggregate(), 
      _this->GetArenaForAllocation());
  }
  _impl_.class__.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.class__.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_class_().empty()) {
    _this->_impl_.class__.Set(from._internal_class_(), 
      _this->GetArenaForAllocation());
  }
  _impl_.close_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.close_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_close().empty()) {
    _this->_impl_.close_.Set(from._internal_close(), 
      _this->GetArenaForAllocation());
  }
  _impl_.exchange_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.exchange_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_exchange().empty()) {
    _this->_impl_.exchange_.Set(from._internal_exchange(), 
      _this->GetArenaForAllocation());
  }
  _impl_.high_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.high_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_high().empty()) {
    _this->_impl_.high_.Set(from._internal_high(), 
      _this->GetArenaForAllocation());
  }
  _impl_.low_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.low_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_low().empty()) {
    _this->_impl_.low_.Set(from._internal_low(), 
      _this->GetArenaForAllocation());
  }
  _impl_.open_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.open_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_open().empty()) {
    _this->_impl_.open_.Set(from._internal_open(), 
      _this->GetArenaForAllocation());
  }
  _impl_.sequence_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sequence_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sequence_id().empty()) {
    _this->_impl_.sequence_id_.Set(from._internal_sequence_id(), 
      _this->GetArenaForAllocation());
  }
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_code().empty()) {
    _this->_impl_.code_.Set(from._internal_code(), 
      _this->GetArenaForAllocation());
  }
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_uid().empty()) {
    _this->_impl_.uid_.Set(from._internal_uid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.volume_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.volume_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_volume().empty()) {
    _this->_impl_.volume_.Set(from._internal_volume(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_timestamp()) {
    _this->_impl_.timestamp_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.timestamp_);
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesOHLCVResponseV1)
}

inline void StreamAggregatesOHLCVResponseV1::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.aggregate_){}
    , decltype(_impl_.class__){}
    , decltype(_impl_.close_){}
    , decltype(_impl_.exchange_){}
    , decltype(_impl_.high_){}
    , decltype(_impl_.low_){}
    , decltype(_impl_.open_){}
    , decltype(_impl_.sequence_id_){}
    , decltype(_impl_.code_){}
    , decltype(_impl_.uid_){}
    , decltype(_impl_.volume_){}
    , decltype(_impl_.timestamp_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.aggregate_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.class__.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.class__.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.close_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.close_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.exchange_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.exchange_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.high_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.high_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.low_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.low_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.open_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.open_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.sequence_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sequence_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.volume_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.volume_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StreamAggregatesOHLCVResponseV1::~StreamAggregatesOHLCVResponseV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesOHLCVResponseV1)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamAggregatesOHLCVResponseV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.aggregate_.Destroy();
  _impl_.class__.Destroy();
  _impl_.close_.Destroy();
  _impl_.exchange_.Destroy();
  _impl_.high_.Destroy();
  _impl_.low_.Destroy();
  _impl_.open_.Destroy();
  _impl_.sequence_id_.Destroy();
  _impl_.code_.Destroy();
  _impl_.uid_.Destroy();
  _impl_.volume_.Destroy();
  if (this != internal_default_instance()) delete _impl_.timestamp_;
}

void StreamAggregatesOHLCVResponseV1::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamAggregatesOHLCVResponseV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.aggregate_.ClearToEmpty();
  _impl_.class__.ClearToEmpty();
  _impl_.close_.ClearToEmpty();
  _impl_.exchange_.ClearToEmpty();
  _impl_.high_.ClearToEmpty();
  _impl_.low_.ClearToEmpty();
  _impl_.open_.ClearToEmpty();
  _impl_.sequence_id_.ClearToEmpty();
  _impl_.code_.ClearToEmpty();
  _impl_.uid_.ClearToEmpty();
  _impl_.volume_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.timestamp_ != nullptr) {
    delete _impl_.timestamp_;
  }
  _impl_.timestamp_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesOHLCVResponseV1::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string aggregate = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_aggregate();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.aggregate"));
        } else
          goto handle_unusual;
        continue;
      // string class = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_class_();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.class"));
        } else
          goto handle_unusual;
        continue;
      // string close = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_close();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.close"));
        } else
          goto handle_unusual;
        continue;
      // string exchange = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_exchange();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.exchange"));
        } else
          goto handle_unusual;
        continue;
      // string high = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_high();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.high"));
        } else
          goto handle_unusual;
        continue;
      // string low = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_low();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.low"));
        } else
          goto handle_unusual;
        continue;
      // string open = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_open();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.open"));
        } else
          goto handle_unusual;
        continue;
      // string sequence_id = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_sequence_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.sequence_id"));
        } else
          goto handle_unusual;
        continue;
      // string code = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.code"));
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string uid = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 90)) {
          auto str = _internal_mutable_uid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.uid"));
        } else
          goto handle_unusual;
        continue;
      // string volume = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 98)) {
          auto str = _internal_mutable_volume();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesOHLCVResponseV1.volume"));
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

uint8_t* StreamAggregatesOHLCVResponseV1::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string aggregate = 1;
  if (!this->_internal_aggregate().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_aggregate().data(), static_cast<int>(this->_internal_aggregate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.aggregate");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_aggregate(), target);
  }

  // string class = 2;
  if (!this->_internal_class_().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_class_().data(), static_cast<int>(this->_internal_class_().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.class");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_class_(), target);
  }

  // string close = 3;
  if (!this->_internal_close().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_close().data(), static_cast<int>(this->_internal_close().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.close");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_close(), target);
  }

  // string exchange = 4;
  if (!this->_internal_exchange().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exchange().data(), static_cast<int>(this->_internal_exchange().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.exchange");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_exchange(), target);
  }

  // string high = 5;
  if (!this->_internal_high().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_high().data(), static_cast<int>(this->_internal_high().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.high");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_high(), target);
  }

  // string low = 6;
  if (!this->_internal_low().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_low().data(), static_cast<int>(this->_internal_low().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.low");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_low(), target);
  }

  // string open = 7;
  if (!this->_internal_open().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_open().data(), static_cast<int>(this->_internal_open().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.open");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_open(), target);
  }

  // string sequence_id = 8;
  if (!this->_internal_sequence_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sequence_id().data(), static_cast<int>(this->_internal_sequence_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.sequence_id");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_sequence_id(), target);
  }

  // string code = 9;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.code");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_code(), target);
  }

  // .google.protobuf.Timestamp timestamp = 10;
  if (this->_internal_has_timestamp()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(10, _Internal::timestamp(this),
        _Internal::timestamp(this).GetCachedSize(), target, stream);
  }

  // string uid = 11;
  if (!this->_internal_uid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uid().data(), static_cast<int>(this->_internal_uid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.uid");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_uid(), target);
  }

  // string volume = 12;
  if (!this->_internal_volume().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_volume().data(), static_cast<int>(this->_internal_volume().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesOHLCVResponseV1.volume");
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_volume(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesOHLCVResponseV1)
  return target;
}

size_t StreamAggregatesOHLCVResponseV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string aggregate = 1;
  if (!this->_internal_aggregate().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_aggregate());
  }

  // string class = 2;
  if (!this->_internal_class_().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_class_());
  }

  // string close = 3;
  if (!this->_internal_close().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_close());
  }

  // string exchange = 4;
  if (!this->_internal_exchange().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exchange());
  }

  // string high = 5;
  if (!this->_internal_high().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_high());
  }

  // string low = 6;
  if (!this->_internal_low().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_low());
  }

  // string open = 7;
  if (!this->_internal_open().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_open());
  }

  // string sequence_id = 8;
  if (!this->_internal_sequence_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sequence_id());
  }

  // string code = 9;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string uid = 11;
  if (!this->_internal_uid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uid());
  }

  // string volume = 12;
  if (!this->_internal_volume().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_volume());
  }

  // .google.protobuf.Timestamp timestamp = 10;
  if (this->_internal_has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.timestamp_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesOHLCVResponseV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamAggregatesOHLCVResponseV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesOHLCVResponseV1::GetClassData() const { return &_class_data_; }


void StreamAggregatesOHLCVResponseV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamAggregatesOHLCVResponseV1*>(&to_msg);
  auto& from = static_cast<const StreamAggregatesOHLCVResponseV1&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_aggregate().empty()) {
    _this->_internal_set_aggregate(from._internal_aggregate());
  }
  if (!from._internal_class_().empty()) {
    _this->_internal_set_class_(from._internal_class_());
  }
  if (!from._internal_close().empty()) {
    _this->_internal_set_close(from._internal_close());
  }
  if (!from._internal_exchange().empty()) {
    _this->_internal_set_exchange(from._internal_exchange());
  }
  if (!from._internal_high().empty()) {
    _this->_internal_set_high(from._internal_high());
  }
  if (!from._internal_low().empty()) {
    _this->_internal_set_low(from._internal_low());
  }
  if (!from._internal_open().empty()) {
    _this->_internal_set_open(from._internal_open());
  }
  if (!from._internal_sequence_id().empty()) {
    _this->_internal_set_sequence_id(from._internal_sequence_id());
  }
  if (!from._internal_code().empty()) {
    _this->_internal_set_code(from._internal_code());
  }
  if (!from._internal_uid().empty()) {
    _this->_internal_set_uid(from._internal_uid());
  }
  if (!from._internal_volume().empty()) {
    _this->_internal_set_volume(from._internal_volume());
  }
  if (from._internal_has_timestamp()) {
    _this->_internal_mutable_timestamp()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
        from._internal_timestamp());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesOHLCVResponseV1::CopyFrom(const StreamAggregatesOHLCVResponseV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesOHLCVResponseV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesOHLCVResponseV1::IsInitialized() const {
  return true;
}

void StreamAggregatesOHLCVResponseV1::InternalSwap(StreamAggregatesOHLCVResponseV1* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.aggregate_, lhs_arena,
      &other->_impl_.aggregate_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.class__, lhs_arena,
      &other->_impl_.class__, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.close_, lhs_arena,
      &other->_impl_.close_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.exchange_, lhs_arena,
      &other->_impl_.exchange_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.high_, lhs_arena,
      &other->_impl_.high_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.low_, lhs_arena,
      &other->_impl_.low_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.open_, lhs_arena,
      &other->_impl_.open_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sequence_id_, lhs_arena,
      &other->_impl_.sequence_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.code_, lhs_arena,
      &other->_impl_.code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.uid_, lhs_arena,
      &other->_impl_.uid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.volume_, lhs_arena,
      &other->_impl_.volume_, rhs_arena
  );
  swap(_impl_.timestamp_, other->_impl_.timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesOHLCVResponseV1::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fohlcv_5fv1_2fresponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesOHLCVResponseV1*
Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesOHLCVResponseV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesOHLCVResponseV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
