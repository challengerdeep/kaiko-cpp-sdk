// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/core/envelope_status.proto

#include "sdk/core/envelope_status.pb.h"

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
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_sdk_2fcore_2fenvelope_5fstatus_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_sdk_2fcore_2fenvelope_5fstatus_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_sdk_2fcore_2fenvelope_5fstatus_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_sdk_2fcore_2fenvelope_5fstatus_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036sdk/core/envelope_status.proto\022\010kaikos"
  "dk*5\n\016EnvelopeStatus\022\013\n\007UNKNOWN\020\000\022\t\n\005ERR"
  "OR\020\001\022\013\n\007SUCCESS\020\002BX\n\022com.kaiko.sdk.coreP"
  "\001Z0github.com/challengerdeep/kaiko-go-sd"
  "k/core;core\252\002\rKaikoSdk.Coreb\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto = {
  false, false, 195, descriptor_table_protodef_sdk_2fcore_2fenvelope_5fstatus_2eproto, "sdk/core/envelope_status.proto", 
  &descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto_once, nullptr, 0, 0,
  schemas, file_default_instances, TableStruct_sdk_2fcore_2fenvelope_5fstatus_2eproto::offsets,
  nullptr, file_level_enum_descriptors_sdk_2fcore_2fenvelope_5fstatus_2eproto, file_level_service_descriptors_sdk_2fcore_2fenvelope_5fstatus_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto_getter() {
  return &descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_sdk_2fcore_2fenvelope_5fstatus_2eproto(&descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto);
namespace kaikosdk {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EnvelopeStatus_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_sdk_2fcore_2fenvelope_5fstatus_2eproto);
  return file_level_enum_descriptors_sdk_2fcore_2fenvelope_5fstatus_2eproto[0];
}
bool EnvelopeStatus_IsValid(int value) {
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