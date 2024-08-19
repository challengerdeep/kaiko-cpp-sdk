// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/derivatives_instrument_metrics_v1/commodity_kind.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fcommodity_5fkind_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fcommodity_5fkind_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fcommodity_5fkind_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fcommodity_5fkind_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fcommodity_5fkind_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

enum StreamDerivativesInstrumentCommodityKindV1 : int {
  SDICK_UNKNOWN = 0,
  SDICK_PRICE = 1,
  SDICK_RISK = 2,
  StreamDerivativesInstrumentCommodityKindV1_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  StreamDerivativesInstrumentCommodityKindV1_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool StreamDerivativesInstrumentCommodityKindV1_IsValid(int value);
constexpr StreamDerivativesInstrumentCommodityKindV1 StreamDerivativesInstrumentCommodityKindV1_MIN = SDICK_UNKNOWN;
constexpr StreamDerivativesInstrumentCommodityKindV1 StreamDerivativesInstrumentCommodityKindV1_MAX = SDICK_RISK;
constexpr int StreamDerivativesInstrumentCommodityKindV1_ARRAYSIZE = StreamDerivativesInstrumentCommodityKindV1_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StreamDerivativesInstrumentCommodityKindV1_descriptor();
template<typename T>
inline const std::string& StreamDerivativesInstrumentCommodityKindV1_Name(T enum_t_value) {
  static_assert(::std::is_same<T, StreamDerivativesInstrumentCommodityKindV1>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function StreamDerivativesInstrumentCommodityKindV1_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    StreamDerivativesInstrumentCommodityKindV1_descriptor(), enum_t_value);
}
inline bool StreamDerivativesInstrumentCommodityKindV1_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, StreamDerivativesInstrumentCommodityKindV1* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<StreamDerivativesInstrumentCommodityKindV1>(
    StreamDerivativesInstrumentCommodityKindV1_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::kaikosdk::StreamDerivativesInstrumentCommodityKindV1> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::kaikosdk::StreamDerivativesInstrumentCommodityKindV1>() {
  return ::kaikosdk::StreamDerivativesInstrumentCommodityKindV1_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2fderivatives_5finstrument_5fmetrics_5fv1_2fcommodity_5fkind_2eproto
