// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/index_v1/commodity.proto

#include "sdk/stream/index_v1/commodity.pb.h"

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
}  // namespace kaikosdk
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto = nullptr;
const uint32_t TableStruct_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#sdk/stream/index_v1/commodity.proto\022\010k"
  "aikosdk*P\n\024StreamIndexCommodity\022\017\n\013SIC_U"
  "NKNOWN\020\000\022\021\n\rSIC_REAL_TIME\020\001\022\024\n\020SIC_DAILY"
  "_FIXING\020\002B|\n\035com.kaiko.sdk.stream.index_"
  "v1P\001Z\?github.com/challengerdeep/kaiko-go"
  "-sdk/stream/index_v1;index_v1\252\002\027KaikoSdk"
  ".Stream.IndexV1b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto = {
  false, false, 263, descriptor_table_protodef_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto, "sdk/stream/index_v1/commodity.proto", 
  &descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto::offsets,
  nullptr, file_level_enum_descriptors_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto, file_level_service_descriptors_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto_getter() {
  return &descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto(&descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto);
namespace kaikosdk {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* StreamIndexCommodity_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto);
  return file_level_enum_descriptors_sdk_2fstream_2findex_5fv1_2fcommodity_2eproto[0];
}
bool StreamIndexCommodity_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>