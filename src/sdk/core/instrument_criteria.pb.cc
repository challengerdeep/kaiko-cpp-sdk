// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/instrument_criteria.proto

#include "sdk/core/instrument_criteria.pb.h"

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
constexpr InstrumentCriteria::InstrumentCriteria(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : exchange_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , instrument_class_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , code_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string){}
struct InstrumentCriteriaDefaultTypeInternal {
  constexpr InstrumentCriteriaDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~InstrumentCriteriaDefaultTypeInternal() {}
  union {
    InstrumentCriteria _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT InstrumentCriteriaDefaultTypeInternal _InstrumentCriteria_default_instance_;
}  // namespace kaikosdk
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_sdk_2fcore_2finstrument_5fcriteria_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_sdk_2fcore_2finstrument_5fcriteria_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fcore_2finstrument_5fcriteria_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sdk_2fcore_2finstrument_5fcriteria_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::InstrumentCriteria, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::InstrumentCriteria, exchange_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::InstrumentCriteria, instrument_class_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::InstrumentCriteria, code_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::kaikosdk::InstrumentCriteria)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::kaikosdk::_InstrumentCriteria_default_instance_),
};

const char descriptor_table_protodef_sdk_2fcore_2finstrument_5fcriteria_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"sdk/core/instrument_criteria.proto\022\010ka"
  "ikosdk\"N\n\022InstrumentCriteria\022\020\n\010exchange"
  "\030\001 \001(\t\022\030\n\020instrument_class\030\002 \001(\t\022\014\n\004code"
  "\030\003 \001(\tBX\n\022com.kaiko.sdk.coreP\001Z0github.c"
  "om/challengerdeep/kaiko-go-sdk/core;core"
  "\252\002\rKaikoSdk.Coreb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto = {
  false, false, 224, descriptor_table_protodef_sdk_2fcore_2finstrument_5fcriteria_2eproto, "sdk/core/instrument_criteria.proto", 
  &descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_sdk_2fcore_2finstrument_5fcriteria_2eproto::offsets,
  file_level_metadata_sdk_2fcore_2finstrument_5fcriteria_2eproto, file_level_enum_descriptors_sdk_2fcore_2finstrument_5fcriteria_2eproto, file_level_service_descriptors_sdk_2fcore_2finstrument_5fcriteria_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto_getter() {
  return &descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fcore_2finstrument_5fcriteria_2eproto(&descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto);
namespace kaikosdk {

// ===================================================================

class InstrumentCriteria::_Internal {
 public:
};

InstrumentCriteria::InstrumentCriteria(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.InstrumentCriteria)
}
InstrumentCriteria::InstrumentCriteria(const InstrumentCriteria& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_exchange().empty()) {
    exchange_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_exchange(), 
      GetArenaForAllocation());
  }
  instrument_class_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_instrument_class().empty()) {
    instrument_class_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_instrument_class(), 
      GetArenaForAllocation());
  }
  code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_code().empty()) {
    code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_code(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:kaikosdk.InstrumentCriteria)
}

void InstrumentCriteria::SharedCtor() {
exchange_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
instrument_class_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
code_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

InstrumentCriteria::~InstrumentCriteria() {
  // @@protoc_insertion_point(destructor:kaikosdk.InstrumentCriteria)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void InstrumentCriteria::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  exchange_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  instrument_class_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  code_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void InstrumentCriteria::ArenaDtor(void* object) {
  InstrumentCriteria* _this = reinterpret_cast< InstrumentCriteria* >(object);
  (void)_this;
}
void InstrumentCriteria::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void InstrumentCriteria::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void InstrumentCriteria::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.InstrumentCriteria)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  exchange_.ClearToEmpty();
  instrument_class_.ClearToEmpty();
  code_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InstrumentCriteria::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string exchange = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_exchange();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.InstrumentCriteria.exchange"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string instrument_class = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_instrument_class();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.InstrumentCriteria.instrument_class"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string code = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_code();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "kaikosdk.InstrumentCriteria.code"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* InstrumentCriteria::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.InstrumentCriteria)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string exchange = 1;
  if (!this->exchange().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_exchange().data(), static_cast<int>(this->_internal_exchange().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.InstrumentCriteria.exchange");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_exchange(), target);
  }

  // string instrument_class = 2;
  if (!this->instrument_class().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_instrument_class().data(), static_cast<int>(this->_internal_instrument_class().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.InstrumentCriteria.instrument_class");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_instrument_class(), target);
  }

  // string code = 3;
  if (!this->code().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_code().data(), static_cast<int>(this->_internal_code().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "kaikosdk.InstrumentCriteria.code");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.InstrumentCriteria)
  return target;
}

size_t InstrumentCriteria::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.InstrumentCriteria)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string exchange = 1;
  if (!this->exchange().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_exchange());
  }

  // string instrument_class = 2;
  if (!this->instrument_class().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_instrument_class());
  }

  // string code = 3;
  if (!this->code().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InstrumentCriteria::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:kaikosdk.InstrumentCriteria)
  GOOGLE_DCHECK_NE(&from, this);
  const InstrumentCriteria* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<InstrumentCriteria>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:kaikosdk.InstrumentCriteria)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:kaikosdk.InstrumentCriteria)
    MergeFrom(*source);
  }
}

void InstrumentCriteria::MergeFrom(const InstrumentCriteria& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.InstrumentCriteria)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from.exchange().empty()) {
    _internal_set_exchange(from._internal_exchange());
  }
  if (!from.instrument_class().empty()) {
    _internal_set_instrument_class(from._internal_instrument_class());
  }
  if (!from.code().empty()) {
    _internal_set_code(from._internal_code());
  }
}

void InstrumentCriteria::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:kaikosdk.InstrumentCriteria)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InstrumentCriteria::CopyFrom(const InstrumentCriteria& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.InstrumentCriteria)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InstrumentCriteria::IsInitialized() const {
  return true;
}

void InstrumentCriteria::InternalSwap(InstrumentCriteria* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &exchange_, GetArenaForAllocation(),
      &other->exchange_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &instrument_class_, GetArenaForAllocation(),
      &other->instrument_class_, other->GetArenaForAllocation()
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &code_, GetArenaForAllocation(),
      &other->code_, other->GetArenaForAllocation()
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata InstrumentCriteria::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto_getter, &descriptor_table_sdk_2fcore_2finstrument_5fcriteria_2eproto_once,
      file_level_metadata_sdk_2fcore_2finstrument_5fcriteria_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::InstrumentCriteria* Arena::CreateMaybeMessage< ::kaikosdk::InstrumentCriteria >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::InstrumentCriteria >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>