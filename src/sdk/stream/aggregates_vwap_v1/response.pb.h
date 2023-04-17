// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregates_vwap_v1/response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto

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
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto;
namespace kaikosdk {
class StreamAggregatesVWAPResponseV1;
struct StreamAggregatesVWAPResponseV1DefaultTypeInternal;
extern StreamAggregatesVWAPResponseV1DefaultTypeInternal _StreamAggregatesVWAPResponseV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatesVWAPResponseV1* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatesVWAPResponseV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatesVWAPResponseV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatesVWAPResponseV1) */ {
 public:
  inline StreamAggregatesVWAPResponseV1() : StreamAggregatesVWAPResponseV1(nullptr) {}
  ~StreamAggregatesVWAPResponseV1() override;
  explicit PROTOBUF_CONSTEXPR StreamAggregatesVWAPResponseV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatesVWAPResponseV1(const StreamAggregatesVWAPResponseV1& from);
  StreamAggregatesVWAPResponseV1(StreamAggregatesVWAPResponseV1&& from) noexcept
    : StreamAggregatesVWAPResponseV1() {
    *this = ::std::move(from);
  }

  inline StreamAggregatesVWAPResponseV1& operator=(const StreamAggregatesVWAPResponseV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatesVWAPResponseV1& operator=(StreamAggregatesVWAPResponseV1&& from) noexcept {
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
  static const StreamAggregatesVWAPResponseV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatesVWAPResponseV1* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatesVWAPResponseV1*>(
               &_StreamAggregatesVWAPResponseV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatesVWAPResponseV1& a, StreamAggregatesVWAPResponseV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatesVWAPResponseV1* other) {
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
  void UnsafeArenaSwap(StreamAggregatesVWAPResponseV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamAggregatesVWAPResponseV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamAggregatesVWAPResponseV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamAggregatesVWAPResponseV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamAggregatesVWAPResponseV1& from) {
    StreamAggregatesVWAPResponseV1::MergeImpl(*this, from);
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
  void InternalSwap(StreamAggregatesVWAPResponseV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatesVWAPResponseV1";
  }
  protected:
  explicit StreamAggregatesVWAPResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAggregateFieldNumber = 1,
    kClassFieldNumber = 2,
    kCodeFieldNumber = 3,
    kExchangeFieldNumber = 4,
    kSequenceIdFieldNumber = 5,
    kUidFieldNumber = 8,
    kTsEventFieldNumber = 7,
    kPriceFieldNumber = 6,
  };
  // string aggregate = 1;
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

  // string class = 2;
  void clear_class_();
  const std::string& class_() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_class_(ArgT0&& arg0, ArgT... args);
  std::string* mutable_class_();
  PROTOBUF_NODISCARD std::string* release_class_();
  void set_allocated_class_(std::string* class_);
  private:
  const std::string& _internal_class_() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_class_(const std::string& value);
  std::string* _internal_mutable_class_();
  public:

  // string code = 3;
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

  // string exchange = 4;
  void clear_exchange();
  const std::string& exchange() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_exchange(ArgT0&& arg0, ArgT... args);
  std::string* mutable_exchange();
  PROTOBUF_NODISCARD std::string* release_exchange();
  void set_allocated_exchange(std::string* exchange);
  private:
  const std::string& _internal_exchange() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_exchange(const std::string& value);
  std::string* _internal_mutable_exchange();
  public:

  // string sequence_id = 5;
  void clear_sequence_id();
  const std::string& sequence_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sequence_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sequence_id();
  PROTOBUF_NODISCARD std::string* release_sequence_id();
  void set_allocated_sequence_id(std::string* sequence_id);
  private:
  const std::string& _internal_sequence_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sequence_id(const std::string& value);
  std::string* _internal_mutable_sequence_id();
  public:

  // string uid = 8;
  void clear_uid();
  const std::string& uid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uid();
  PROTOBUF_NODISCARD std::string* release_uid();
  void set_allocated_uid(std::string* uid);
  private:
  const std::string& _internal_uid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uid(const std::string& value);
  std::string* _internal_mutable_uid();
  public:

  // .google.protobuf.Timestamp ts_event = 7;
  bool has_ts_event() const;
  private:
  bool _internal_has_ts_event() const;
  public:
  void clear_ts_event();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& ts_event() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_ts_event();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_ts_event();
  void set_allocated_ts_event(::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_ts_event() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_ts_event();
  public:
  void unsafe_arena_set_allocated_ts_event(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_ts_event();

  // double price = 6;
  void clear_price();
  double price() const;
  void set_price(double value);
  private:
  double _internal_price() const;
  void _internal_set_price(double value);
  public:

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatesVWAPResponseV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aggregate_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr class__;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr exchange_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sequence_id_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uid_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event_;
    double price_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatesVWAPResponseV1

// string aggregate = 1;
inline void StreamAggregatesVWAPResponseV1::clear_aggregate() {
  _impl_.aggregate_.ClearToEmpty();
}
inline const std::string& StreamAggregatesVWAPResponseV1::aggregate() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.aggregate)
  return _internal_aggregate();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesVWAPResponseV1::set_aggregate(ArgT0&& arg0, ArgT... args) {
 
 _impl_.aggregate_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.aggregate)
}
inline std::string* StreamAggregatesVWAPResponseV1::mutable_aggregate() {
  std::string* _s = _internal_mutable_aggregate();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.aggregate)
  return _s;
}
inline const std::string& StreamAggregatesVWAPResponseV1::_internal_aggregate() const {
  return _impl_.aggregate_.Get();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_aggregate(const std::string& value) {
  
  _impl_.aggregate_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::_internal_mutable_aggregate() {
  
  return _impl_.aggregate_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::release_aggregate() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.aggregate)
  return _impl_.aggregate_.Release();
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_aggregate(std::string* aggregate) {
  if (aggregate != nullptr) {
    
  } else {
    
  }
  _impl_.aggregate_.SetAllocated(aggregate, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.aggregate_.IsDefault()) {
    _impl_.aggregate_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.aggregate)
}

// string class = 2;
inline void StreamAggregatesVWAPResponseV1::clear_class_() {
  _impl_.class__.ClearToEmpty();
}
inline const std::string& StreamAggregatesVWAPResponseV1::class_() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.class)
  return _internal_class_();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesVWAPResponseV1::set_class_(ArgT0&& arg0, ArgT... args) {
 
 _impl_.class__.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.class)
}
inline std::string* StreamAggregatesVWAPResponseV1::mutable_class_() {
  std::string* _s = _internal_mutable_class_();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.class)
  return _s;
}
inline const std::string& StreamAggregatesVWAPResponseV1::_internal_class_() const {
  return _impl_.class__.Get();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_class_(const std::string& value) {
  
  _impl_.class__.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::_internal_mutable_class_() {
  
  return _impl_.class__.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::release_class_() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.class)
  return _impl_.class__.Release();
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_class_(std::string* class_) {
  if (class_ != nullptr) {
    
  } else {
    
  }
  _impl_.class__.SetAllocated(class_, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.class__.IsDefault()) {
    _impl_.class__.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.class)
}

// string code = 3;
inline void StreamAggregatesVWAPResponseV1::clear_code() {
  _impl_.code_.ClearToEmpty();
}
inline const std::string& StreamAggregatesVWAPResponseV1::code() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.code)
  return _internal_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesVWAPResponseV1::set_code(ArgT0&& arg0, ArgT... args) {
 
 _impl_.code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.code)
}
inline std::string* StreamAggregatesVWAPResponseV1::mutable_code() {
  std::string* _s = _internal_mutable_code();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.code)
  return _s;
}
inline const std::string& StreamAggregatesVWAPResponseV1::_internal_code() const {
  return _impl_.code_.Get();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_code(const std::string& value) {
  
  _impl_.code_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::_internal_mutable_code() {
  
  return _impl_.code_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::release_code() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.code)
  return _impl_.code_.Release();
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    
  } else {
    
  }
  _impl_.code_.SetAllocated(code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.code_.IsDefault()) {
    _impl_.code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.code)
}

// string exchange = 4;
inline void StreamAggregatesVWAPResponseV1::clear_exchange() {
  _impl_.exchange_.ClearToEmpty();
}
inline const std::string& StreamAggregatesVWAPResponseV1::exchange() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.exchange)
  return _internal_exchange();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesVWAPResponseV1::set_exchange(ArgT0&& arg0, ArgT... args) {
 
 _impl_.exchange_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.exchange)
}
inline std::string* StreamAggregatesVWAPResponseV1::mutable_exchange() {
  std::string* _s = _internal_mutable_exchange();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.exchange)
  return _s;
}
inline const std::string& StreamAggregatesVWAPResponseV1::_internal_exchange() const {
  return _impl_.exchange_.Get();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_exchange(const std::string& value) {
  
  _impl_.exchange_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::_internal_mutable_exchange() {
  
  return _impl_.exchange_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::release_exchange() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.exchange)
  return _impl_.exchange_.Release();
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_exchange(std::string* exchange) {
  if (exchange != nullptr) {
    
  } else {
    
  }
  _impl_.exchange_.SetAllocated(exchange, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.exchange_.IsDefault()) {
    _impl_.exchange_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.exchange)
}

// string sequence_id = 5;
inline void StreamAggregatesVWAPResponseV1::clear_sequence_id() {
  _impl_.sequence_id_.ClearToEmpty();
}
inline const std::string& StreamAggregatesVWAPResponseV1::sequence_id() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.sequence_id)
  return _internal_sequence_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesVWAPResponseV1::set_sequence_id(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sequence_id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.sequence_id)
}
inline std::string* StreamAggregatesVWAPResponseV1::mutable_sequence_id() {
  std::string* _s = _internal_mutable_sequence_id();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.sequence_id)
  return _s;
}
inline const std::string& StreamAggregatesVWAPResponseV1::_internal_sequence_id() const {
  return _impl_.sequence_id_.Get();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_sequence_id(const std::string& value) {
  
  _impl_.sequence_id_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::_internal_mutable_sequence_id() {
  
  return _impl_.sequence_id_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::release_sequence_id() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.sequence_id)
  return _impl_.sequence_id_.Release();
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_sequence_id(std::string* sequence_id) {
  if (sequence_id != nullptr) {
    
  } else {
    
  }
  _impl_.sequence_id_.SetAllocated(sequence_id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sequence_id_.IsDefault()) {
    _impl_.sequence_id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.sequence_id)
}

// double price = 6;
inline void StreamAggregatesVWAPResponseV1::clear_price() {
  _impl_.price_ = 0;
}
inline double StreamAggregatesVWAPResponseV1::_internal_price() const {
  return _impl_.price_;
}
inline double StreamAggregatesVWAPResponseV1::price() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.price)
  return _internal_price();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_price(double value) {
  
  _impl_.price_ = value;
}
inline void StreamAggregatesVWAPResponseV1::set_price(double value) {
  _internal_set_price(value);
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.price)
}

// .google.protobuf.Timestamp ts_event = 7;
inline bool StreamAggregatesVWAPResponseV1::_internal_has_ts_event() const {
  return this != internal_default_instance() && _impl_.ts_event_ != nullptr;
}
inline bool StreamAggregatesVWAPResponseV1::has_ts_event() const {
  return _internal_has_ts_event();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatesVWAPResponseV1::_internal_ts_event() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.ts_event_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatesVWAPResponseV1::ts_event() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.ts_event)
  return _internal_ts_event();
}
inline void StreamAggregatesVWAPResponseV1::unsafe_arena_set_allocated_ts_event(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ts_event_);
  }
  _impl_.ts_event_ = ts_event;
  if (ts_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.ts_event)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesVWAPResponseV1::release_ts_event() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.ts_event_;
  _impl_.ts_event_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesVWAPResponseV1::unsafe_arena_release_ts_event() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.ts_event)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.ts_event_;
  _impl_.ts_event_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesVWAPResponseV1::_internal_mutable_ts_event() {
  
  if (_impl_.ts_event_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.ts_event_ = p;
  }
  return _impl_.ts_event_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatesVWAPResponseV1::mutable_ts_event() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_ts_event();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.ts_event)
  return _msg;
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_ts_event(::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ts_event_);
  }
  if (ts_event) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(ts_event));
    if (message_arena != submessage_arena) {
      ts_event = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ts_event, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.ts_event_ = ts_event;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.ts_event)
}

// string uid = 8;
inline void StreamAggregatesVWAPResponseV1::clear_uid() {
  _impl_.uid_.ClearToEmpty();
}
inline const std::string& StreamAggregatesVWAPResponseV1::uid() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatesVWAPResponseV1.uid)
  return _internal_uid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatesVWAPResponseV1::set_uid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.uid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatesVWAPResponseV1.uid)
}
inline std::string* StreamAggregatesVWAPResponseV1::mutable_uid() {
  std::string* _s = _internal_mutable_uid();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatesVWAPResponseV1.uid)
  return _s;
}
inline const std::string& StreamAggregatesVWAPResponseV1::_internal_uid() const {
  return _impl_.uid_.Get();
}
inline void StreamAggregatesVWAPResponseV1::_internal_set_uid(const std::string& value) {
  
  _impl_.uid_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::_internal_mutable_uid() {
  
  return _impl_.uid_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatesVWAPResponseV1::release_uid() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatesVWAPResponseV1.uid)
  return _impl_.uid_.Release();
}
inline void StreamAggregatesVWAPResponseV1::set_allocated_uid(std::string* uid) {
  if (uid != nullptr) {
    
  } else {
    
  }
  _impl_.uid_.SetAllocated(uid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uid_.IsDefault()) {
    _impl_.uid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatesVWAPResponseV1.uid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregates_5fvwap_5fv1_2fresponse_2eproto
