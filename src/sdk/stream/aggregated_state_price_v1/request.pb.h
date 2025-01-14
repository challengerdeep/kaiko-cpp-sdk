// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregated_state_price_v1/request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto;
namespace kaikosdk {
class StreamAggregatedStatePriceRequestV1;
struct StreamAggregatedStatePriceRequestV1DefaultTypeInternal;
extern StreamAggregatedStatePriceRequestV1DefaultTypeInternal _StreamAggregatedStatePriceRequestV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatedStatePriceRequestV1* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatedStatePriceRequestV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatedStatePriceRequestV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatedStatePriceRequestV1) */ {
 public:
  inline StreamAggregatedStatePriceRequestV1() : StreamAggregatedStatePriceRequestV1(nullptr) {}
  ~StreamAggregatedStatePriceRequestV1() override;
  explicit PROTOBUF_CONSTEXPR StreamAggregatedStatePriceRequestV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatedStatePriceRequestV1(const StreamAggregatedStatePriceRequestV1& from);
  StreamAggregatedStatePriceRequestV1(StreamAggregatedStatePriceRequestV1&& from) noexcept
    : StreamAggregatedStatePriceRequestV1() {
    *this = ::std::move(from);
  }

  inline StreamAggregatedStatePriceRequestV1& operator=(const StreamAggregatedStatePriceRequestV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatedStatePriceRequestV1& operator=(StreamAggregatedStatePriceRequestV1&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StreamAggregatedStatePriceRequestV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatedStatePriceRequestV1* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatedStatePriceRequestV1*>(
               &_StreamAggregatedStatePriceRequestV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatedStatePriceRequestV1& a, StreamAggregatedStatePriceRequestV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatedStatePriceRequestV1* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StreamAggregatedStatePriceRequestV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamAggregatedStatePriceRequestV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamAggregatedStatePriceRequestV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamAggregatedStatePriceRequestV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamAggregatedStatePriceRequestV1& from) {
    StreamAggregatedStatePriceRequestV1::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StreamAggregatedStatePriceRequestV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatedStatePriceRequestV1";
  }
  protected:
  explicit StreamAggregatedStatePriceRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAssetsFieldNumber = 1,
  };
  // repeated string assets = 1;
  int assets_size() const;
  private:
  int _internal_assets_size() const;
  public:
  void clear_assets();
  const std::string& assets(int index) const;
  std::string* mutable_assets(int index);
  void set_assets(int index, const std::string& value);
  void set_assets(int index, std::string&& value);
  void set_assets(int index, const char* value);
  void set_assets(int index, const char* value, size_t size);
  std::string* add_assets();
  void add_assets(const std::string& value);
  void add_assets(std::string&& value);
  void add_assets(const char* value);
  void add_assets(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& assets() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_assets();
  private:
  const std::string& _internal_assets(int index) const;
  std::string* _internal_add_assets();
  public:

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatedStatePriceRequestV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> assets_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatedStatePriceRequestV1

// repeated string assets = 1;
inline int StreamAggregatedStatePriceRequestV1::_internal_assets_size() const {
  return _impl_.assets_.size();
}
inline int StreamAggregatedStatePriceRequestV1::assets_size() const {
  return _internal_assets_size();
}
inline void StreamAggregatedStatePriceRequestV1::clear_assets() {
  _impl_.assets_.Clear();
}
inline std::string* StreamAggregatedStatePriceRequestV1::add_assets() {
  std::string* _s = _internal_add_assets();
  // @@protoc_insertion_point(field_add_mutable:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
  return _s;
}
inline const std::string& StreamAggregatedStatePriceRequestV1::_internal_assets(int index) const {
  return _impl_.assets_.Get(index);
}
inline const std::string& StreamAggregatedStatePriceRequestV1::assets(int index) const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
  return _internal_assets(index);
}
inline std::string* StreamAggregatedStatePriceRequestV1::mutable_assets(int index) {
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
  return _impl_.assets_.Mutable(index);
}
inline void StreamAggregatedStatePriceRequestV1::set_assets(int index, const std::string& value) {
  _impl_.assets_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline void StreamAggregatedStatePriceRequestV1::set_assets(int index, std::string&& value) {
  _impl_.assets_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline void StreamAggregatedStatePriceRequestV1::set_assets(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.assets_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline void StreamAggregatedStatePriceRequestV1::set_assets(int index, const char* value, size_t size) {
  _impl_.assets_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline std::string* StreamAggregatedStatePriceRequestV1::_internal_add_assets() {
  return _impl_.assets_.Add();
}
inline void StreamAggregatedStatePriceRequestV1::add_assets(const std::string& value) {
  _impl_.assets_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline void StreamAggregatedStatePriceRequestV1::add_assets(std::string&& value) {
  _impl_.assets_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline void StreamAggregatedStatePriceRequestV1::add_assets(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.assets_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline void StreamAggregatedStatePriceRequestV1::add_assets(const char* value, size_t size) {
  _impl_.assets_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
StreamAggregatedStatePriceRequestV1::assets() const {
  // @@protoc_insertion_point(field_list:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
  return _impl_.assets_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
StreamAggregatedStatePriceRequestV1::mutable_assets() {
  // @@protoc_insertion_point(field_mutable_list:kaikosdk.StreamAggregatedStatePriceRequestV1.assets)
  return &_impl_.assets_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2frequest_2eproto
