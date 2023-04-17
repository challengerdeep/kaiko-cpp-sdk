// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_direct_exchange_rate_v1/response.proto

#include "sdk/stream/aggregates_direct_exchange_rate_v1/response.pb.h"

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
PROTOBUF_CONSTEXPR StreamAggregatesDirectExchangeRateResponseV1::StreamAggregatesDirectExchangeRateResponseV1(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sources_)*/{}
  , /*decltype(_impl_.aggregate_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.code_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.price_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.sequence_id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.uid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.timestamp_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamAggregatesDirectExchangeRateResponseV1DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamAggregatesDirectExchangeRateResponseV1DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamAggregatesDirectExchangeRateResponseV1DefaultTypeInternal() {}
  union {
    StreamAggregatesDirectExchangeRateResponseV1 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamAggregatesDirectExchangeRateResponseV1DefaultTypeInternal _StreamAggregatesDirectExchangeRateResponseV1_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.aggregate_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.code_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.price_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.sequence_id_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.sources_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1, _impl_.uid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamAggregatesDirectExchangeRateResponseV1_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n<sdk/stream/aggregates_direct_exchange_"
  "rate_v1/response.proto\022\010kaikosdk\032\037google"
  "/protobuf/timestamp.proto\032\032sdk/core/sour"
  "ce_data.proto\"\326\001\n,StreamAggregatesDirect"
  "ExchangeRateResponseV1\022\021\n\taggregate\030\001 \001("
  "\t\022\014\n\004code\030\002 \001(\t\022\r\n\005price\030\003 \001(\t\022\023\n\013sequen"
  "ce_id\030\004 \001(\t\022%\n\007sources\030\005 \003(\0132\024.kaikosdk."
  "SourceData\022-\n\ttimestamp\030\006 \001(\0132\032.google.p"
  "rotobuf.Timestamp\022\013\n\003uid\030\007 \001(\tB\334\001\n7com.k"
  "aiko.sdk.stream.aggregates_direct_exchan"
  "ge_rate_v1P\001Zngithub.com/kaikodata/kaiko"
  "-go-sdk/stream/aggregates_direct_exchang"
  "e_rate_v1;aggregates_direct_exchange_rat"
  "e_v1\252\002.KaikoSdk.Stream.AggregatesDirectE"
  "xchangeRateV1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2ftimestamp_2eproto,
  &::descriptor_table_sdk_2fcore_2fsource_5fdata_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto = {
    false, false, 581, descriptor_table_protodef_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto,
    "sdk/stream/aggregates_direct_exchange_rate_v1/response.proto",
    &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto,
    file_level_service_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesDirectExchangeRateResponseV1::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::Timestamp& timestamp(const StreamAggregatesDirectExchangeRateResponseV1* msg);
};

const ::PROTOBUF_NAMESPACE_ID::Timestamp&
StreamAggregatesDirectExchangeRateResponseV1::_Internal::timestamp(const StreamAggregatesDirectExchangeRateResponseV1* msg) {
  return *msg->_impl_.timestamp_;
}
void StreamAggregatesDirectExchangeRateResponseV1::clear_sources() {
  _impl_.sources_.Clear();
}
void StreamAggregatesDirectExchangeRateResponseV1::clear_timestamp() {
  if (GetArenaForAllocation() == nullptr && _impl_.timestamp_ != nullptr) {
    delete _impl_.timestamp_;
  }
  _impl_.timestamp_ = nullptr;
}
StreamAggregatesDirectExchangeRateResponseV1::StreamAggregatesDirectExchangeRateResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
}
StreamAggregatesDirectExchangeRateResponseV1::StreamAggregatesDirectExchangeRateResponseV1(const StreamAggregatesDirectExchangeRateResponseV1& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamAggregatesDirectExchangeRateResponseV1* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sources_){from._impl_.sources_}
    , decltype(_impl_.aggregate_){}
    , decltype(_impl_.code_){}
    , decltype(_impl_.price_){}
    , decltype(_impl_.sequence_id_){}
    , decltype(_impl_.uid_){}
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
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_code().empty()) {
    _this->_impl_.code_.Set(from._internal_code(), 
      _this->GetArenaForAllocation());
  }
  _impl_.price_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.price_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_price().empty()) {
    _this->_impl_.price_.Set(from._internal_price(), 
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
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_uid().empty()) {
    _this->_impl_.uid_.Set(from._internal_uid(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_timestamp()) {
    _this->_impl_.timestamp_ = new ::PROTOBUF_NAMESPACE_ID::Timestamp(*from._impl_.timestamp_);
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
}

inline void StreamAggregatesDirectExchangeRateResponseV1::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sources_){arena}
    , decltype(_impl_.aggregate_){}
    , decltype(_impl_.code_){}
    , decltype(_impl_.price_){}
    , decltype(_impl_.sequence_id_){}
    , decltype(_impl_.uid_){}
    , decltype(_impl_.timestamp_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.aggregate_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.code_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.code_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.price_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.price_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.sequence_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sequence_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

StreamAggregatesDirectExchangeRateResponseV1::~StreamAggregatesDirectExchangeRateResponseV1() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamAggregatesDirectExchangeRateResponseV1::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.sources_.~RepeatedPtrField();
  _impl_.aggregate_.Destroy();
  _impl_.code_.Destroy();
  _impl_.price_.Destroy();
  _impl_.sequence_id_.Destroy();
  _impl_.uid_.Destroy();
  if (this != internal_default_instance()) delete _impl_.timestamp_;
}

void StreamAggregatesDirectExchangeRateResponseV1::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamAggregatesDirectExchangeRateResponseV1::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sources_.Clear();
  _impl_.aggregate_.ClearToEmpty();
  _impl_.code_.ClearToEmpty();
  _impl_.price_.ClearToEmpty();
  _impl_.sequence_id_.ClearToEmpty();
  _impl_.uid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.timestamp_ != nullptr) {
    delete _impl_.timestamp_;
  }
  _impl_.timestamp_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesDirectExchangeRateResponseV1::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate"));
        } else
          goto handle_unusual;
        continue;
      // string code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_code();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code"));
        } else
          goto handle_unusual;
        continue;
      // string price = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_price();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price"));
        } else
          goto handle_unusual;
        continue;
      // string sequence_id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_sequence_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id"));
        } else
          goto handle_unusual;
        continue;
      // repeated .kaikosdk.SourceData sources = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_sources(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Timestamp timestamp = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_timestamp(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string uid = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_uid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid"));
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

uint8_t* StreamAggregatesDirectExchangeRateResponseV1::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string aggregate = 1;
  if (!this->_internal_aggregate().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_aggregate().data(), static_cast<int>(this->_internal_aggregate().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.aggregate");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_aggregate(), target);
  }

  // string code = 2;
  if (!this->_internal_code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.code");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_code(), target);
  }

  // string price = 3;
  if (!this->_internal_price().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_price().data(), static_cast<int>(this->_internal_price().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.price");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_price(), target);
  }

  // string sequence_id = 4;
  if (!this->_internal_sequence_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sequence_id().data(), static_cast<int>(this->_internal_sequence_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.sequence_id");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_sequence_id(), target);
  }

  // repeated .kaikosdk.SourceData sources = 5;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_sources_size()); i < n; i++) {
    const auto& repfield = this->_internal_sources(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(5, repfield, repfield.GetCachedSize(), target, stream);
  }

  // .google.protobuf.Timestamp timestamp = 6;
  if (this->_internal_has_timestamp()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::timestamp(this),
        _Internal::timestamp(this).GetCachedSize(), target, stream);
  }

  // string uid = 7;
  if (!this->_internal_uid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uid().data(), static_cast<int>(this->_internal_uid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateResponseV1.uid");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_uid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  return target;
}

size_t StreamAggregatesDirectExchangeRateResponseV1::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .kaikosdk.SourceData sources = 5;
  total_size += 1UL * this->_internal_sources_size();
  for (const auto& msg : this->_impl_.sources_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string aggregate = 1;
  if (!this->_internal_aggregate().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_aggregate());
  }

  // string code = 2;
  if (!this->_internal_code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  // string price = 3;
  if (!this->_internal_price().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_price());
  }

  // string sequence_id = 4;
  if (!this->_internal_sequence_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sequence_id());
  }

  // string uid = 7;
  if (!this->_internal_uid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uid());
  }

  // .google.protobuf.Timestamp timestamp = 6;
  if (this->_internal_has_timestamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.timestamp_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesDirectExchangeRateResponseV1::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamAggregatesDirectExchangeRateResponseV1::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesDirectExchangeRateResponseV1::GetClassData() const { return &_class_data_; }


void StreamAggregatesDirectExchangeRateResponseV1::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamAggregatesDirectExchangeRateResponseV1*>(&to_msg);
  auto& from = static_cast<const StreamAggregatesDirectExchangeRateResponseV1&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.sources_.MergeFrom(from._impl_.sources_);
  if (!from._internal_aggregate().empty()) {
    _this->_internal_set_aggregate(from._internal_aggregate());
  }
  if (!from._internal_code().empty()) {
    _this->_internal_set_code(from._internal_code());
  }
  if (!from._internal_price().empty()) {
    _this->_internal_set_price(from._internal_price());
  }
  if (!from._internal_sequence_id().empty()) {
    _this->_internal_set_sequence_id(from._internal_sequence_id());
  }
  if (!from._internal_uid().empty()) {
    _this->_internal_set_uid(from._internal_uid());
  }
  if (from._internal_has_timestamp()) {
    _this->_internal_mutable_timestamp()->::PROTOBUF_NAMESPACE_ID::Timestamp::MergeFrom(
        from._internal_timestamp());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesDirectExchangeRateResponseV1::CopyFrom(const StreamAggregatesDirectExchangeRateResponseV1& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesDirectExchangeRateResponseV1)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesDirectExchangeRateResponseV1::IsInitialized() const {
  return true;
}

void StreamAggregatesDirectExchangeRateResponseV1::InternalSwap(StreamAggregatesDirectExchangeRateResponseV1* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.sources_.InternalSwap(&other->_impl_.sources_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.aggregate_, lhs_arena,
      &other->_impl_.aggregate_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.code_, lhs_arena,
      &other->_impl_.code_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.price_, lhs_arena,
      &other->_impl_.price_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sequence_id_, lhs_arena,
      &other->_impl_.sequence_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.uid_, lhs_arena,
      &other->_impl_.uid_, rhs_arena
  );
  swap(_impl_.timestamp_, other->_impl_.timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesDirectExchangeRateResponseV1::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2fresponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1*
Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesDirectExchangeRateResponseV1 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
