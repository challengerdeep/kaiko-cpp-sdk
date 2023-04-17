// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregated_quote_v2/request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto

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
#include "sdk/core/data_interval.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto;
namespace kaikosdk {
class StreamAggregatedQuoteRequestV2;
struct StreamAggregatedQuoteRequestV2DefaultTypeInternal;
extern StreamAggregatedQuoteRequestV2DefaultTypeInternal _StreamAggregatedQuoteRequestV2_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatedQuoteRequestV2* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatedQuoteRequestV2>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatedQuoteRequestV2 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatedQuoteRequestV2) */ {
 public:
  inline StreamAggregatedQuoteRequestV2() : StreamAggregatedQuoteRequestV2(nullptr) {}
  ~StreamAggregatedQuoteRequestV2() override;
  explicit PROTOBUF_CONSTEXPR StreamAggregatedQuoteRequestV2(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatedQuoteRequestV2(const StreamAggregatedQuoteRequestV2& from);
  StreamAggregatedQuoteRequestV2(StreamAggregatedQuoteRequestV2&& from) noexcept
    : StreamAggregatedQuoteRequestV2() {
    *this = ::std::move(from);
  }

  inline StreamAggregatedQuoteRequestV2& operator=(const StreamAggregatedQuoteRequestV2& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatedQuoteRequestV2& operator=(StreamAggregatedQuoteRequestV2&& from) noexcept {
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
  static const StreamAggregatedQuoteRequestV2& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatedQuoteRequestV2* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatedQuoteRequestV2*>(
               &_StreamAggregatedQuoteRequestV2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatedQuoteRequestV2& a, StreamAggregatedQuoteRequestV2& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatedQuoteRequestV2* other) {
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
  void UnsafeArenaSwap(StreamAggregatedQuoteRequestV2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamAggregatedQuoteRequestV2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamAggregatedQuoteRequestV2>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamAggregatedQuoteRequestV2& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamAggregatedQuoteRequestV2& from) {
    StreamAggregatedQuoteRequestV2::MergeImpl(*this, from);
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
  void InternalSwap(StreamAggregatedQuoteRequestV2* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatedQuoteRequestV2";
  }
  protected:
  explicit StreamAggregatedQuoteRequestV2(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInstrumentClassFieldNumber = 1,
    kCodeFieldNumber = 2,
    kIntervalFieldNumber = 3,
    kIncludeUnvettedPriceFieldNumber = 4,
  };
  // string instrument_class = 1;
  void clear_instrument_class();
  const std::string& instrument_class() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_instrument_class(ArgT0&& arg0, ArgT... args);
  std::string* mutable_instrument_class();
  PROTOBUF_NODISCARD std::string* release_instrument_class();
  void set_allocated_instrument_class(std::string* instrument_class);
  private:
  const std::string& _internal_instrument_class() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_instrument_class(const std::string& value);
  std::string* _internal_mutable_instrument_class();
  public:

  // string code = 2;
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

  // .kaikosdk.DataInterval interval = 3;
  bool has_interval() const;
  private:
  bool _internal_has_interval() const;
  public:
  void clear_interval();
  const ::kaikosdk::DataInterval& interval() const;
  PROTOBUF_NODISCARD ::kaikosdk::DataInterval* release_interval();
  ::kaikosdk::DataInterval* mutable_interval();
  void set_allocated_interval(::kaikosdk::DataInterval* interval);
  private:
  const ::kaikosdk::DataInterval& _internal_interval() const;
  ::kaikosdk::DataInterval* _internal_mutable_interval();
  public:
  void unsafe_arena_set_allocated_interval(
      ::kaikosdk::DataInterval* interval);
  ::kaikosdk::DataInterval* unsafe_arena_release_interval();

  // bool include_unvetted_price = 4;
  void clear_include_unvetted_price();
  bool include_unvetted_price() const;
  void set_include_unvetted_price(bool value);
  private:
  bool _internal_include_unvetted_price() const;
  void _internal_set_include_unvetted_price(bool value);
  public:

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatedQuoteRequestV2)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr instrument_class_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
    ::kaikosdk::DataInterval* interval_;
    bool include_unvetted_price_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatedQuoteRequestV2

// string instrument_class = 1;
inline void StreamAggregatedQuoteRequestV2::clear_instrument_class() {
  _impl_.instrument_class_.ClearToEmpty();
}
inline const std::string& StreamAggregatedQuoteRequestV2::instrument_class() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class)
  return _internal_instrument_class();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatedQuoteRequestV2::set_instrument_class(ArgT0&& arg0, ArgT... args) {
 
 _impl_.instrument_class_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class)
}
inline std::string* StreamAggregatedQuoteRequestV2::mutable_instrument_class() {
  std::string* _s = _internal_mutable_instrument_class();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class)
  return _s;
}
inline const std::string& StreamAggregatedQuoteRequestV2::_internal_instrument_class() const {
  return _impl_.instrument_class_.Get();
}
inline void StreamAggregatedQuoteRequestV2::_internal_set_instrument_class(const std::string& value) {
  
  _impl_.instrument_class_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatedQuoteRequestV2::_internal_mutable_instrument_class() {
  
  return _impl_.instrument_class_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatedQuoteRequestV2::release_instrument_class() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class)
  return _impl_.instrument_class_.Release();
}
inline void StreamAggregatedQuoteRequestV2::set_allocated_instrument_class(std::string* instrument_class) {
  if (instrument_class != nullptr) {
    
  } else {
    
  }
  _impl_.instrument_class_.SetAllocated(instrument_class, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.instrument_class_.IsDefault()) {
    _impl_.instrument_class_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedQuoteRequestV2.instrument_class)
}

// string code = 2;
inline void StreamAggregatedQuoteRequestV2::clear_code() {
  _impl_.code_.ClearToEmpty();
}
inline const std::string& StreamAggregatedQuoteRequestV2::code() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedQuoteRequestV2.code)
  return _internal_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatedQuoteRequestV2::set_code(ArgT0&& arg0, ArgT... args) {
 
 _impl_.code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedQuoteRequestV2.code)
}
inline std::string* StreamAggregatedQuoteRequestV2::mutable_code() {
  std::string* _s = _internal_mutable_code();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedQuoteRequestV2.code)
  return _s;
}
inline const std::string& StreamAggregatedQuoteRequestV2::_internal_code() const {
  return _impl_.code_.Get();
}
inline void StreamAggregatedQuoteRequestV2::_internal_set_code(const std::string& value) {
  
  _impl_.code_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatedQuoteRequestV2::_internal_mutable_code() {
  
  return _impl_.code_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatedQuoteRequestV2::release_code() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedQuoteRequestV2.code)
  return _impl_.code_.Release();
}
inline void StreamAggregatedQuoteRequestV2::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    
  } else {
    
  }
  _impl_.code_.SetAllocated(code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.code_.IsDefault()) {
    _impl_.code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedQuoteRequestV2.code)
}

// .kaikosdk.DataInterval interval = 3;
inline bool StreamAggregatedQuoteRequestV2::_internal_has_interval() const {
  return this != internal_default_instance() && _impl_.interval_ != nullptr;
}
inline bool StreamAggregatedQuoteRequestV2::has_interval() const {
  return _internal_has_interval();
}
inline const ::kaikosdk::DataInterval& StreamAggregatedQuoteRequestV2::_internal_interval() const {
  const ::kaikosdk::DataInterval* p = _impl_.interval_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::DataInterval&>(
      ::kaikosdk::_DataInterval_default_instance_);
}
inline const ::kaikosdk::DataInterval& StreamAggregatedQuoteRequestV2::interval() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedQuoteRequestV2.interval)
  return _internal_interval();
}
inline void StreamAggregatedQuoteRequestV2::unsafe_arena_set_allocated_interval(
    ::kaikosdk::DataInterval* interval) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.interval_);
  }
  _impl_.interval_ = interval;
  if (interval) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamAggregatedQuoteRequestV2.interval)
}
inline ::kaikosdk::DataInterval* StreamAggregatedQuoteRequestV2::release_interval() {
  
  ::kaikosdk::DataInterval* temp = _impl_.interval_;
  _impl_.interval_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::kaikosdk::DataInterval* StreamAggregatedQuoteRequestV2::unsafe_arena_release_interval() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedQuoteRequestV2.interval)
  
  ::kaikosdk::DataInterval* temp = _impl_.interval_;
  _impl_.interval_ = nullptr;
  return temp;
}
inline ::kaikosdk::DataInterval* StreamAggregatedQuoteRequestV2::_internal_mutable_interval() {
  
  if (_impl_.interval_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::DataInterval>(GetArenaForAllocation());
    _impl_.interval_ = p;
  }
  return _impl_.interval_;
}
inline ::kaikosdk::DataInterval* StreamAggregatedQuoteRequestV2::mutable_interval() {
  ::kaikosdk::DataInterval* _msg = _internal_mutable_interval();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedQuoteRequestV2.interval)
  return _msg;
}
inline void StreamAggregatedQuoteRequestV2::set_allocated_interval(::kaikosdk::DataInterval* interval) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.interval_);
  }
  if (interval) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(interval));
    if (message_arena != submessage_arena) {
      interval = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, interval, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.interval_ = interval;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedQuoteRequestV2.interval)
}

// bool include_unvetted_price = 4;
inline void StreamAggregatedQuoteRequestV2::clear_include_unvetted_price() {
  _impl_.include_unvetted_price_ = false;
}
inline bool StreamAggregatedQuoteRequestV2::_internal_include_unvetted_price() const {
  return _impl_.include_unvetted_price_;
}
inline bool StreamAggregatedQuoteRequestV2::include_unvetted_price() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedQuoteRequestV2.include_unvetted_price)
  return _internal_include_unvetted_price();
}
inline void StreamAggregatedQuoteRequestV2::_internal_set_include_unvetted_price(bool value) {
  
  _impl_.include_unvetted_price_ = value;
}
inline void StreamAggregatedQuoteRequestV2::set_include_unvetted_price(bool value) {
  _internal_set_include_unvetted_price(value);
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedQuoteRequestV2.include_unvetted_price)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fquote_5fv2_2frequest_2eproto
