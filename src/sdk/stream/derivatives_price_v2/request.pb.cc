// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/derivatives_price_v2/request.proto

#include "sdk/stream/derivatives_price_v2/request.pb.h"

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
namespace kaikosdk {
constexpr StreamDerivativesPriceRequestV2::StreamDerivativesPriceRequestV2(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : instrument_criteria_(nullptr){}
struct StreamDerivativesPriceRequestV2DefaultTypeInternal {
  constexpr StreamDerivativesPriceRequestV2DefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~StreamDerivativesPriceRequestV2DefaultTypeInternal() {}
  union {
    StreamDerivativesPriceRequestV2 _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT StreamDerivativesPriceRequestV2DefaultTypeInternal _StreamDerivativesPriceRequestV2_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceRequestV2, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::StreamDerivativesPriceRequestV2, instrument_criteria_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::StreamDerivativesPriceRequestV2)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_StreamDerivativesPriceRequestV2_default_instance_),
};

const char descriptor_table_protodef_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n-sdk/stream/derivatives_price_v2/reques"
  "t.proto\022\010kaikosdk\032\"sdk/core/instrument_c"
  "riteria.proto\"\\\n\037StreamDerivativesPriceR"
  "equestV2\0229\n\023instrument_criteria\030\001 \001(\0132\034."
  "kaikosdk.InstrumentCriteriaB\253\001\n)com.kaik"
  "o.sdk.stream.derivatives_price_v2P\001ZWgit"
  "hub.com/challengerdeep/kaiko-go-sdk/stre"
  "am/derivatives_price_v2;derivatives_pric"
  "e_v2\252\002\"KaikoSdk.Stream.DerivativesPriceV"
  "2b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_deps[1] = {
  &::descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto = {
  false, false, 369, descriptor_table_protodef_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto, "sdk/stream/derivatives_price_v2/request.proto", 
  &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_once, descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto::offsets,
  file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto, file_level_enum_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto, file_level_service_descriptors_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto(&descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto);
namespace kaikosdk {

// ===================================================================

class StreamDerivativesPriceRequestV2::_Internal {
 public:
  static const ::kaikosdk::InstrumentCriteria& instrument_criteria(const StreamDerivativesPriceRequestV2* msg);
};

const ::kaikosdk::InstrumentCriteria&
StreamDerivativesPriceRequestV2::_Internal::instrument_criteria(const StreamDerivativesPriceRequestV2* msg) {
  return *msg->instrument_criteria_;
}
void StreamDerivativesPriceRequestV2::clear_instrument_criteria() {
  if (GetArenaForAllocation() == nullptr && instrument_criteria_ != nullptr) {
    delete instrument_criteria_;
  }
  instrument_criteria_ = nullptr;
}
StreamDerivativesPriceRequestV2::StreamDerivativesPriceRequestV2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:kaikosdk.StreamDerivativesPriceRequestV2)
}
StreamDerivativesPriceRequestV2::StreamDerivativesPriceRequestV2(const StreamDerivativesPriceRequestV2& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_instrument_criteria()) {
    instrument_criteria_ = new ::kaikosdk::InstrumentCriteria(*from.instrument_criteria_);
  } else {
    instrument_criteria_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.StreamDerivativesPriceRequestV2)
}

inline void StreamDerivativesPriceRequestV2::SharedCtor() {
instrument_criteria_ = nullptr;
}

StreamDerivativesPriceRequestV2::~StreamDerivativesPriceRequestV2() {
  // @@protoc_insertion_point(destructor:kaikosdk.StreamDerivativesPriceRequestV2)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void StreamDerivativesPriceRequestV2::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete instrument_criteria_;
}

void StreamDerivativesPriceRequestV2::ArenaDtor(void* object) {
  StreamDerivativesPriceRequestV2* _this = reinterpret_cast< StreamDerivativesPriceRequestV2* >(object);
  (void)_this;
}
void StreamDerivativesPriceRequestV2::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void StreamDerivativesPriceRequestV2::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void StreamDerivativesPriceRequestV2::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.StreamDerivativesPriceRequestV2)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && instrument_criteria_ != nullptr) {
    delete instrument_criteria_;
  }
  instrument_criteria_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamDerivativesPriceRequestV2::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_instrument_criteria(), ptr);
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

uint8_t* StreamDerivativesPriceRequestV2::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.StreamDerivativesPriceRequestV2)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  if (this->_internal_has_instrument_criteria()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::instrument_criteria(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.StreamDerivativesPriceRequestV2)
  return target;
}

size_t StreamDerivativesPriceRequestV2::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.StreamDerivativesPriceRequestV2)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  if (this->_internal_has_instrument_criteria()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *instrument_criteria_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamDerivativesPriceRequestV2::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    StreamDerivativesPriceRequestV2::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamDerivativesPriceRequestV2::GetClassData() const { return &_class_data_; }

void StreamDerivativesPriceRequestV2::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<StreamDerivativesPriceRequestV2 *>(to)->MergeFrom(
      static_cast<const StreamDerivativesPriceRequestV2 &>(from));
}


void StreamDerivativesPriceRequestV2::MergeFrom(const StreamDerivativesPriceRequestV2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.StreamDerivativesPriceRequestV2)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_instrument_criteria()) {
    _internal_mutable_instrument_criteria()->::kaikosdk::InstrumentCriteria::MergeFrom(from._internal_instrument_criteria());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamDerivativesPriceRequestV2::CopyFrom(const StreamDerivativesPriceRequestV2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.StreamDerivativesPriceRequestV2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamDerivativesPriceRequestV2::IsInitialized() const {
  return true;
}

void StreamDerivativesPriceRequestV2::InternalSwap(StreamDerivativesPriceRequestV2* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(instrument_criteria_, other->instrument_criteria_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamDerivativesPriceRequestV2::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_getter, &descriptor_table_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto_once,
      file_level_metadata_sdk_2fstream_2fderivatives_5fprice_5fv2_2frequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::StreamDerivativesPriceRequestV2* Arena::CreateMaybeMessage< ::kaikosdk::StreamDerivativesPriceRequestV2 >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::StreamDerivativesPriceRequestV2 >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>