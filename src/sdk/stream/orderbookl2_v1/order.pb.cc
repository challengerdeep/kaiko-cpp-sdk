// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/orderbookl2_v1/order.proto

#include "sdk/stream/orderbookl2_v1/order.pb.h"

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
PROTOBUF_CONSTEXPR Order::Order(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.amount_)*/0
  , /*decltype(_impl_.price_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct OrderDefaultTypeInternal {
  PROTOBUF_CONSTEXPR OrderDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~OrderDefaultTypeInternal() {}
  union {
    Order _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 OrderDefaultTypeInternal _Order_default_instance_;
}  // namespace kaikosdk
static ::_pb::Metadata file_level_metadata_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto = nullptr;

const uint32_t TableStruct_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::Order, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::kaikosdk::Order, _impl_.amount_),
  PROTOBUF_FIELD_OFFSET(::kaikosdk::Order, _impl_.price_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::kaikosdk::Order)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::kaikosdk::_Order_default_instance_._instance,
};

const char descriptor_table_protodef_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%sdk/stream/orderbookl2_v1/order.proto\022"
  "\010kaikosdk\"&\n\005Order\022\016\n\006amount\030\001 \001(\001\022\r\n\005pr"
  "ice\030\002 \001(\001B\215\001\n#com.kaiko.sdk.stream.order"
  "bookl2_v1P\001ZFgithub.com/kaikodata/kaiko-"
  "go-sdk/stream/orderbookl2_v1;orderbookl2"
  "_v1\252\002\033KaikoSdk.Stream.OrderBookL2b\006proto"
  "3"
  ;
static ::_pbi::once_flag descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto = {
    false, false, 241, descriptor_table_protodef_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto,
    "sdk/stream/orderbookl2_v1/order.proto",
    &descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto::offsets,
    file_level_metadata_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto, file_level_enum_descriptors_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto,
    file_level_service_descriptors_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto(&descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto);
namespace kaikosdk {

// ===================================================================

class Order::_Internal {
 public:
};

Order::Order(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:kaikosdk.Order)
}
Order::Order(const Order& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Order* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.amount_){}
    , decltype(_impl_.price_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.amount_, &from._impl_.amount_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.price_) -
    reinterpret_cast<char*>(&_impl_.amount_)) + sizeof(_impl_.price_));
  // @@protoc_insertion_point(copy_constructor:kaikosdk.Order)
}

inline void Order::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.amount_){0}
    , decltype(_impl_.price_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Order::~Order() {
  // @@protoc_insertion_point(destructor:kaikosdk.Order)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Order::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Order::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Order::Clear() {
// @@protoc_insertion_point(message_clear_start:kaikosdk.Order)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.amount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.price_) -
      reinterpret_cast<char*>(&_impl_.amount_)) + sizeof(_impl_.price_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Order::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // double amount = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _impl_.amount_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else
          goto handle_unusual;
        continue;
      // double price = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 17)) {
          _impl_.price_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

uint8_t* Order::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kaikosdk.Order)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // double amount = 1;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_amount = this->_internal_amount();
  uint64_t raw_amount;
  memcpy(&raw_amount, &tmp_amount, sizeof(tmp_amount));
  if (raw_amount != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(1, this->_internal_amount(), target);
  }

  // double price = 2;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = this->_internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteDoubleToArray(2, this->_internal_price(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kaikosdk.Order)
  return target;
}

size_t Order::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kaikosdk.Order)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // double amount = 1;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_amount = this->_internal_amount();
  uint64_t raw_amount;
  memcpy(&raw_amount, &tmp_amount, sizeof(tmp_amount));
  if (raw_amount != 0) {
    total_size += 1 + 8;
  }

  // double price = 2;
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = this->_internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    total_size += 1 + 8;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Order::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Order::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Order::GetClassData() const { return &_class_data_; }


void Order::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Order*>(&to_msg);
  auto& from = static_cast<const Order&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:kaikosdk.Order)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_amount = from._internal_amount();
  uint64_t raw_amount;
  memcpy(&raw_amount, &tmp_amount, sizeof(tmp_amount));
  if (raw_amount != 0) {
    _this->_internal_set_amount(from._internal_amount());
  }
  static_assert(sizeof(uint64_t) == sizeof(double), "Code assumes uint64_t and double are the same size.");
  double tmp_price = from._internal_price();
  uint64_t raw_price;
  memcpy(&raw_price, &tmp_price, sizeof(tmp_price));
  if (raw_price != 0) {
    _this->_internal_set_price(from._internal_price());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Order::CopyFrom(const Order& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kaikosdk.Order)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Order::IsInitialized() const {
  return true;
}

void Order::InternalSwap(Order* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Order, _impl_.price_)
      + sizeof(Order::_impl_.price_)
      - PROTOBUF_FIELD_OFFSET(Order, _impl_.amount_)>(
          reinterpret_cast<char*>(&_impl_.amount_),
          reinterpret_cast<char*>(&other->_impl_.amount_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Order::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto_getter, &descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto_once,
      file_level_metadata_sdk_2fstream_2forderbookl2_5fv1_2forder_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kaikosdk::Order*
Arena::CreateMaybeMessage< ::kaikosdk::Order >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kaikosdk::Order >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
