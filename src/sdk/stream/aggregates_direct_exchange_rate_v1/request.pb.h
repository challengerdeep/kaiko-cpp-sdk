// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_direct_exchange_rate_v1/request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto;
namespace kaikosdk {
class StreamAggregatesDirectExchangeRateRequestV1;
struct StreamAggregatesDirectExchangeRateRequestV1DefaultTypeInternal;
extern StreamAggregatesDirectExchangeRateRequestV1DefaultTypeInternal _StreamAggregatesDirectExchangeRateRequestV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatesDirectExchangeRateRequestV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatesDirectExchangeRateRequestV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1) */ {
 public:
  inline StreamAggregatesDirectExchangeRateRequestV1() : StreamAggregatesDirectExchangeRateRequestV1(nullptr) {}
  ~StreamAggregatesDirectExchangeRateRequestV1() override;
  explicit PROTOBUF_CONSTEXPR StreamAggregatesDirectExchangeRateRequestV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatesDirectExchangeRateRequestV1(const StreamAggregatesDirectExchangeRateRequestV1& from);
  StreamAggregatesDirectExchangeRateRequestV1(StreamAggregatesDirectExchangeRateRequestV1&& from) noexcept
    : StreamAggregatesDirectExchangeRateRequestV1() {
    *this = ::std::move(from);
  }

  inline StreamAggregatesDirectExchangeRateRequestV1& operator=(const StreamAggregatesDirectExchangeRateRequestV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatesDirectExchangeRateRequestV1& operator=(StreamAggregatesDirectExchangeRateRequestV1&& from) noexcept {
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
  static const StreamAggregatesDirectExchangeRateRequestV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatesDirectExchangeRateRequestV1* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatesDirectExchangeRateRequestV1*>(
               &_StreamAggregatesDirectExchangeRateRequestV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatesDirectExchangeRateRequestV1& a, StreamAggregatesDirectExchangeRateRequestV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatesDirectExchangeRateRequestV1* other) {
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
  void UnsafeArenaSwap(StreamAggregatesDirectExchangeRateRequestV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamAggregatesDirectExchangeRateRequestV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamAggregatesDirectExchangeRateRequestV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamAggregatesDirectExchangeRateRequestV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamAggregatesDirectExchangeRateRequestV1& from) {
    StreamAggregatesDirectExchangeRateRequestV1::MergeImpl(*this, from);
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
  void InternalSwap(StreamAggregatesDirectExchangeRateRequestV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatesDirectExchangeRateRequestV1";
  }
  protected:
  explicit StreamAggregatesDirectExchangeRateRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 1,
    kAggregateFieldNumber = 2,
    kSourcesFieldNumber = 3,
  };
  // string code = 1;
  void clear_code();
  const std::string& code() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_code(ArgT0&& arg0, ArgT... args);
  std::string* mutable_code();
  PROTOBUF_NODISCARD std::string* release_code();
  void set_allocated_code(std::string* code);
  private:
  const std::string& _internal_code() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_code(const std::string& value);
  std::string* _internal_mutable_code();
  public:

  // string aggregate = 2;
  void clear_aggregate();
  const std::string& aggregate() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_aggregate(ArgT0&& arg0, ArgT... args);
  std::string* mutable_aggregate();
  PROTOBUF_NODISCARD std::string* release_aggregate();
  void set_allocated_aggregate(std::string* aggregate);
  private:
  const std::string& _internal_aggregate() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_aggregate(const std::string& value);
  std::string* _internal_mutable_aggregate();
  public:

  // bool sources = 3;
  void clear_sources();
  bool sources() const;
  void set_sources(bool value);
  private:
  bool _internal_sources() const;
  void _internal_set_sources(bool value);
  public:

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aggregate_;
    bool sources_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatesDirectExchangeRateRequestV1

// string code = 1;
inline void StreamAggregatesDirectExchangeRateRequestV1::clear_code() {
  _impl_.code_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateRequestV1::code() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code)
  return _internal_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateRequestV1::set_code(ArgT0&& arg0, ArgT... args) {
 
 _impl_.code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code)
}
inline std::string* StreamAggregatesDirectExchangeRateRequestV1::mutable_code() {
  std::string* _s = _internal_mutable_code();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateRequestV1::_internal_code() const {
  return _impl_.code_.Get();
}
inline void StreamAggregatesDirectExchangeRateRequestV1::_internal_set_code(const std::string& value) {
  
  _impl_.code_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateRequestV1::_internal_mutable_code() {
  
  return _impl_.code_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateRequestV1::release_code() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code)
  return _impl_.code_.Release();
}
inline void StreamAggregatesDirectExchangeRateRequestV1::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    
  } else {
    
  }
  _impl_.code_.SetAllocated(code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.code_.IsDefault()) {
    _impl_.code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.code)
}

// string aggregate = 2;
inline void StreamAggregatesDirectExchangeRateRequestV1::clear_aggregate() {
  _impl_.aggregate_.ClearToEmpty();
}
inline const std::string& StreamAggregatesDirectExchangeRateRequestV1::aggregate() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate)
  return _internal_aggregate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesDirectExchangeRateRequestV1::set_aggregate(ArgT0&& arg0, ArgT... args) {
 
 _impl_.aggregate_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate)
}
inline std::string* StreamAggregatesDirectExchangeRateRequestV1::mutable_aggregate() {
  std::string* _s = _internal_mutable_aggregate();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate)
  return _s;
}
inline const std::string& StreamAggregatesDirectExchangeRateRequestV1::_internal_aggregate() const {
  return _impl_.aggregate_.Get();
}
inline void StreamAggregatesDirectExchangeRateRequestV1::_internal_set_aggregate(const std::string& value) {
  
  _impl_.aggregate_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateRequestV1::_internal_mutable_aggregate() {
  
  return _impl_.aggregate_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesDirectExchangeRateRequestV1::release_aggregate() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate)
  return _impl_.aggregate_.Release();
}
inline void StreamAggregatesDirectExchangeRateRequestV1::set_allocated_aggregate(std::string* aggregate) {
  if (aggregate != nullptr) {
    
  } else {
    
  }
  _impl_.aggregate_.SetAllocated(aggregate, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.aggregate_.IsDefault()) {
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.aggregate)
}

// bool sources = 3;
inline void StreamAggregatesDirectExchangeRateRequestV1::clear_sources() {
  _impl_.sources_ = false;
}
inline bool StreamAggregatesDirectExchangeRateRequestV1::_internal_sources() const {
  return _impl_.sources_;
}
inline bool StreamAggregatesDirectExchangeRateRequestV1::sources() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.sources)
  return _internal_sources();
}
inline void StreamAggregatesDirectExchangeRateRequestV1::_internal_set_sources(bool value) {
  
  _impl_.sources_ = value;
}
inline void StreamAggregatesDirectExchangeRateRequestV1::set_sources(bool value) {
  _internal_set_sources(value);
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesDirectExchangeRateRequestV1.sources)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fdirect_5fexchange_5frate_5fv1_2frequest_2eproto
