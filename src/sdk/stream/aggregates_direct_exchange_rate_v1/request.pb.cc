// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_direct_exchange_rate_v1/request.proto

#include "sdk/stream/aggregates_direct_exchange_rate_v1/request.pb.h"

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
PROTOBUF_CONSTEXPR StreamAggregatesDirectExchangeRateV1RequestV2::StreamAggregatesDirectExchangeRateV1RequestV2(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.include_exchanges_)*/{}
  , /*decltype(_impl_.exclude_exchanges_)*/{}
  , /*decltype(_impl_.assets_)*/nullptr
  , /*decltype(_impl_.window_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreamAggregatesDirectExchangeRateV1RequestV2DefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamAggregatesDirectExchangeRateV1RequestV2DefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamAggregatesDirectExchangeRateV1RequestV2DefaultTypeInternal() {}
  union {
    StreamAggregatesDirectExchangeRateV1RequestV2 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamAggregatesDirectExchangeRateV1RequestV2DefaultTypeInternal _StreamAggregatesDirectExchangeRateV1RequestV2_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2, _impl_.assets_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2, _impl_.window_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2, _impl_.include_exchanges_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2, _impl_.exclude_exchanges_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_StreamAggregatesDirectExchangeRateV1RequestV2_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n;sdk/stream/aggregates_direct_exchange_"
  "rate_v1/request.proto\022\010kaikosdk\032\036google/"
  "protobuf/duration.proto\032\025sdk/core/assets"
  ".proto\"\262\001\n-StreamAggregatesDirectExchang"
  "eRateV1RequestV2\022 \n\006assets\030\001 \001(\0132\020.kaiko"
  "sdk.Assets\022)\n\006window\030\002 \001(\0132\031.google.prot"
  "obuf.Duration\022\031\n\021include_exchanges\030\003 \003(\t"
  "\022\031\n\021exclude_exchanges\030\004 \003(\tB\334\001\n7com.kaik"
  "o.sdk.stream.aggregates_direct_exchange_"
  "rate_v1P\001Zngithub.com/kaikodata/kaiko-go"
  "-sdk/stream/aggregates_direct_exchange_r"
  "ate_v1;aggregates_direct_exchange_rate_v"
  "1\252\002.KaikoSdk.Stream.AggregatesDirectExch"
  "angeRateV1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_deps[2] = {
  &::descriptor_table_google_2fprotobuf_2fduration_2eproto,
  &::descriptor_table_sdk_2fcore_2fassets_2eproto,
};
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto = {
    false, false, 538, descriptor_table_protodef_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto,
    "sdk/stream/aggregates_direct_exchange_rate_v1/request.proto",
    &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto,
    file_level_service_descriptors_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto(&descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamAggregatesDirectExchangeRateV1RequestV2::_Internal {
 public:
  static const ::kaikosdk::Assets& assets(const StreamAggregatesDirectExchangeRateV1RequestV2* msg);
  static const ::PROTOBUF_NAMESPACE_ID::Duration& window(const StreamAggregatesDirectExchangeRateV1RequestV2* msg);
};

const ::kaikosdk::Assets&
StreamAggregatesDirectExchangeRateV1RequestV2::_Internal::assets(const StreamAggregatesDirectExchangeRateV1RequestV2* msg) {
  return *msg->_impl_.assets_;
}
const ::PROTOBUF_NAMESPACE_ID::Duration&
StreamAggregatesDirectExchangeRateV1RequestV2::_Internal::window(const StreamAggregatesDirectExchangeRateV1RequestV2* msg) {
  return *msg->_impl_.window_;
}
void StreamAggregatesDirectExchangeRateV1RequestV2::clear_assets() {
  if (GetArenaForAllocation() == nullptr && _impl_.assets_ != nullptr) {
    delete _impl_.assets_;
  }
  _impl_.assets_ = nullptr;
}
void StreamAggregatesDirectExchangeRateV1RequestV2::clear_window() {
  if (GetArenaForAllocation() == nullptr && _impl_.window_ != nullptr) {
    delete _impl_.window_;
  }
  _impl_.window_ = nullptr;
}
StreamAggregatesDirectExchangeRateV1RequestV2::StreamAggregatesDirectExchangeRateV1RequestV2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
}
StreamAggregatesDirectExchangeRateV1RequestV2::StreamAggregatesDirectExchangeRateV1RequestV2(const StreamAggregatesDirectExchangeRateV1RequestV2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StreamAggregatesDirectExchangeRateV1RequestV2* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.include_exchanges_){from._impl_.include_exchanges_}
    , decltype(_impl_.exclude_exchanges_){from._impl_.exclude_exchanges_}
    , decltype(_impl_.assets_){nullptr}
    , decltype(_impl_.window_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_assets()) {
    _this->_impl_.assets_ = new ::kaikosdk::Assets(*from._impl_.assets_);
  }
  if (from._internal_has_window()) {
    _this->_impl_.window_ = new ::PROTOBUF_NAMESPACE_ID::Duration(*from._impl_.window_);
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
}

inline void StreamAggregatesDirectExchangeRateV1RequestV2::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.include_exchanges_){arena}
    , decltype(_impl_.exclude_exchanges_){arena}
    , decltype(_impl_.assets_){nullptr}
    , decltype(_impl_.window_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

StreamAggregatesDirectExchangeRateV1RequestV2::~StreamAggregatesDirectExchangeRateV1RequestV2() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamAggregatesDirectExchangeRateV1RequestV2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.include_exchanges_.~RepeatedPtrField();
  _impl_.exclude_exchanges_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.assets_;
  if (this != internal_default_instance()) delete _impl_.window_;
}

void StreamAggregatesDirectExchangeRateV1RequestV2::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamAggregatesDirectExchangeRateV1RequestV2::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.include_exchanges_.Clear();
  _impl_.exclude_exchanges_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.assets_ != nullptr) {
    delete _impl_.assets_;
  }
  _impl_.assets_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.window_ != nullptr) {
    delete _impl_.window_;
  }
  _impl_.window_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamAggregatesDirectExchangeRateV1RequestV2::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .kaikosdk.Assets assets = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_assets(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.Duration window = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_window(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string include_exchanges = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_include_exchanges();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2.include_exchanges"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string exclude_exchanges = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_exclude_exchanges();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2.exclude_exchanges"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

uint8_t* StreamAggregatesDirectExchangeRateV1RequestV2::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .kaikosdk.Assets assets = 1;
  if (this->_internal_has_assets()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::assets(this),
        _Internal::assets(this).GetCachedSize(), target, stream);
  }

  // .google.protobuf.Duration window = 2;
  if (this->_internal_has_window()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::window(this),
        _Internal::window(this).GetCachedSize(), target, stream);
  }

  // repeated string include_exchanges = 3;
  for (int i = 0, n = this->_internal_include_exchanges_size(); i < n; i++) {
    const auto& s = this->_internal_include_exchanges(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2.include_exchanges");
    target = stream->WriteString(3, s, target);
  }

  // repeated string exclude_exchanges = 4;
  for (int i = 0, n = this->_internal_exclude_exchanges_size(); i < n; i++) {
    const auto& s = this->_internal_exclude_exchanges(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2.exclude_exchanges");
    target = stream->WriteString(4, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  return target;
}

size_t StreamAggregatesDirectExchangeRateV1RequestV2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string include_exchanges = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.include_exchanges_.size());
  for (int i = 0, n = _impl_.include_exchanges_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.include_exchanges_.Get(i));
  }

  // repeated string exclude_exchanges = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.exclude_exchanges_.size());
  for (int i = 0, n = _impl_.exclude_exchanges_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.exclude_exchanges_.Get(i));
  }

  // .kaikosdk.Assets assets = 1;
  if (this->_internal_has_assets()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.assets_);
  }

  // .google.protobuf.Duration window = 2;
  if (this->_internal_has_window()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.window_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamAggregatesDirectExchangeRateV1RequestV2::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamAggregatesDirectExchangeRateV1RequestV2::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamAggregatesDirectExchangeRateV1RequestV2::GetClassData() const { return &_class_data_; }


void StreamAggregatesDirectExchangeRateV1RequestV2::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StreamAggregatesDirectExchangeRateV1RequestV2*>(&to_msg);
  auto& from = static_cast<const StreamAggregatesDirectExchangeRateV1RequestV2&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.include_exchanges_.MergeFrom(from._impl_.include_exchanges_);
  _this->_impl_.exclude_exchanges_.MergeFrom(from._impl_.exclude_exchanges_);
  if (from._internal_has_assets()) {
    _this->_internal_mutable_assets()->::kaikosdk::Assets::MergeFrom(
        from._internal_assets());
  }
  if (from._internal_has_window()) {
    _this->_internal_mutable_window()->::PROTOBUF_NAMESPACE_ID::Duration::MergeFrom(
        from._internal_window());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamAggregatesDirectExchangeRateV1RequestV2::CopyFrom(const StreamAggregatesDirectExchangeRateV1RequestV2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamAggregatesDirectExchangeRateV1RequestV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamAggregatesDirectExchangeRateV1RequestV2::IsInitialized() const {
  return true;
}

void StreamAggregatesDirectExchangeRateV1RequestV2::InternalSwap(StreamAggregatesDirectExchangeRateV1RequestV2* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.include_exchanges_.InternalSwap(&other->_impl_.include_exchanges_);
  _impl_.exclude_exchanges_.InternalSwap(&other->_impl_.exclude_exchanges_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamAggregatesDirectExchangeRateV1RequestV2, _impl_.window_)
      + sizeof(StreamAggregatesDirectExchangeRateV1RequestV2::_impl_.window_)
      - PROTOBUF_FIELD_OFFSET(StreamAggregatesDirectExchangeRateV1RequestV2, _impl_.assets_)>(
          reinterpret_cast<char*>(&_impl_.assets_),
          reinterpret_cast<char*>(&other->_impl_.assets_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamAggregatesDirectExchangeRateV1RequestV2::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2*
Arena::CreateMaybeMessage< ::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamAggregatesDirectExchangeRateV1RequestV2 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>