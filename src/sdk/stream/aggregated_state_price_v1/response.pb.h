// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/aggregated_state_price_v1/response.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto;
namespace kaikosdk {
class StreamAggregatedStatePriceResponseV1;
struct StreamAggregatedStatePriceResponseV1DefaultTypeInternal;
extern StreamAggregatedStatePriceResponseV1DefaultTypeInternal _StreamAggregatedStatePriceResponseV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamAggregatedStatePriceResponseV1* Arena::CreateMaybeMessage<::kaikosdk::StreamAggregatedStatePriceResponseV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamAggregatedStatePriceResponseV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamAggregatedStatePriceResponseV1) */ {
 public:
  inline StreamAggregatedStatePriceResponseV1() : StreamAggregatedStatePriceResponseV1(nullptr) {}
  ~StreamAggregatedStatePriceResponseV1() override;
  explicit PROTOBUF_CONSTEXPR StreamAggregatedStatePriceResponseV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamAggregatedStatePriceResponseV1(const StreamAggregatedStatePriceResponseV1& from);
  StreamAggregatedStatePriceResponseV1(StreamAggregatedStatePriceResponseV1&& from) noexcept
    : StreamAggregatedStatePriceResponseV1() {
    *this = ::std::move(from);
  }

  inline StreamAggregatedStatePriceResponseV1& operator=(const StreamAggregatedStatePriceResponseV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamAggregatedStatePriceResponseV1& operator=(StreamAggregatedStatePriceResponseV1&& from) noexcept {
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
  static const StreamAggregatedStatePriceResponseV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamAggregatedStatePriceResponseV1* internal_default_instance() {
    return reinterpret_cast<const StreamAggregatedStatePriceResponseV1*>(
               &_StreamAggregatedStatePriceResponseV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamAggregatedStatePriceResponseV1& a, StreamAggregatedStatePriceResponseV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamAggregatedStatePriceResponseV1* other) {
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
  void UnsafeArenaSwap(StreamAggregatedStatePriceResponseV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamAggregatedStatePriceResponseV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamAggregatedStatePriceResponseV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamAggregatedStatePriceResponseV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamAggregatedStatePriceResponseV1& from) {
    StreamAggregatedStatePriceResponseV1::MergeImpl(*this, from);
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
  void InternalSwap(StreamAggregatedStatePriceResponseV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamAggregatedStatePriceResponseV1";
  }
  protected:
  explicit StreamAggregatedStatePriceResponseV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBaseFieldNumber = 2,
    kAggregatedPriceUsdFieldNumber = 3,
    kAggregatedPriceLstFieldNumber = 4,
    kLstQuoteFieldNumber = 6,
    kDatetimeFieldNumber = 1,
    kTsEventFieldNumber = 5,
  };
  // string base = 2;
  void clear_base();
  const std::string& base() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_base(ArgT0&& arg0, ArgT... args);
  std::string* mutable_base();
  PROTOBUF_NODISCARD std::string* release_base();
  void set_allocated_base(std::string* base);
  private:
  const std::string& _internal_base() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_base(const std::string& value);
  std::string* _internal_mutable_base();
  public:

  // string aggregated_price_usd = 3;
  void clear_aggregated_price_usd();
  const std::string& aggregated_price_usd() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_aggregated_price_usd(ArgT0&& arg0, ArgT... args);
  std::string* mutable_aggregated_price_usd();
  PROTOBUF_NODISCARD std::string* release_aggregated_price_usd();
  void set_allocated_aggregated_price_usd(std::string* aggregated_price_usd);
  private:
  const std::string& _internal_aggregated_price_usd() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_aggregated_price_usd(const std::string& value);
  std::string* _internal_mutable_aggregated_price_usd();
  public:

  // string aggregated_price_lst = 4;
  void clear_aggregated_price_lst();
  const std::string& aggregated_price_lst() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_aggregated_price_lst(ArgT0&& arg0, ArgT... args);
  std::string* mutable_aggregated_price_lst();
  PROTOBUF_NODISCARD std::string* release_aggregated_price_lst();
  void set_allocated_aggregated_price_lst(std::string* aggregated_price_lst);
  private:
  const std::string& _internal_aggregated_price_lst() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_aggregated_price_lst(const std::string& value);
  std::string* _internal_mutable_aggregated_price_lst();
  public:

  // string lst_quote = 6;
  void clear_lst_quote();
  const std::string& lst_quote() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_lst_quote(ArgT0&& arg0, ArgT... args);
  std::string* mutable_lst_quote();
  PROTOBUF_NODISCARD std::string* release_lst_quote();
  void set_allocated_lst_quote(std::string* lst_quote);
  private:
  const std::string& _internal_lst_quote() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_lst_quote(const std::string& value);
  std::string* _internal_mutable_lst_quote();
  public:

  // .google.protobuf.Timestamp datetime = 1;
  bool has_datetime() const;
  private:
  bool _internal_has_datetime() const;
  public:
  void clear_datetime();
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& datetime() const;
  PROTOBUF_NODISCARD ::PROTOBUF_NAMESPACE_ID::Timestamp* release_datetime();
  ::PROTOBUF_NAMESPACE_ID::Timestamp* mutable_datetime();
  void set_allocated_datetime(::PROTOBUF_NAMESPACE_ID::Timestamp* datetime);
  private:
  const ::PROTOBUF_NAMESPACE_ID::Timestamp& _internal_datetime() const;
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _internal_mutable_datetime();
  public:
  void unsafe_arena_set_allocated_datetime(
      ::PROTOBUF_NAMESPACE_ID::Timestamp* datetime);
  ::PROTOBUF_NAMESPACE_ID::Timestamp* unsafe_arena_release_datetime();

  // .google.protobuf.Timestamp ts_event = 5;
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

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamAggregatedStatePriceResponseV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr base_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aggregated_price_usd_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr aggregated_price_lst_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr lst_quote_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* datetime_;
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamAggregatedStatePriceResponseV1

// .google.protobuf.Timestamp datetime = 1;
inline bool StreamAggregatedStatePriceResponseV1::_internal_has_datetime() const {
  return this != internal_default_instance() && _impl_.datetime_ != nullptr;
}
inline bool StreamAggregatedStatePriceResponseV1::has_datetime() const {
  return _internal_has_datetime();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatedStatePriceResponseV1::_internal_datetime() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.datetime_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatedStatePriceResponseV1::datetime() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceResponseV1.datetime)
  return _internal_datetime();
}
inline void StreamAggregatedStatePriceResponseV1::unsafe_arena_set_allocated_datetime(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* datetime) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.datetime_);
  }
  _impl_.datetime_ = datetime;
  if (datetime) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.datetime)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::release_datetime() {
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.datetime_;
  _impl_.datetime_ = nullptr;
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::unsafe_arena_release_datetime() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedStatePriceResponseV1.datetime)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.datetime_;
  _impl_.datetime_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::_internal_mutable_datetime() {
  
  if (_impl_.datetime_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.datetime_ = p;
  }
  return _impl_.datetime_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::mutable_datetime() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_datetime();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceResponseV1.datetime)
  return _msg;
}
inline void StreamAggregatedStatePriceResponseV1::set_allocated_datetime(::PROTOBUF_NAMESPACE_ID::Timestamp* datetime) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.datetime_);
  }
  if (datetime) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(datetime));
    if (message_arena != submessage_arena) {
      datetime = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, datetime, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.datetime_ = datetime;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.datetime)
}

// string base = 2;
inline void StreamAggregatedStatePriceResponseV1::clear_base() {
  _impl_.base_.ClearToEmpty();
}
inline const std::string& StreamAggregatedStatePriceResponseV1::base() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceResponseV1.base)
  return _internal_base();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatedStatePriceResponseV1::set_base(ArgT0&& arg0, ArgT... args) {
 
 _impl_.base_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedStatePriceResponseV1.base)
}
inline std::string* StreamAggregatedStatePriceResponseV1::mutable_base() {
  std::string* _s = _internal_mutable_base();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceResponseV1.base)
  return _s;
}
inline const std::string& StreamAggregatedStatePriceResponseV1::_internal_base() const {
  return _impl_.base_.Get();
}
inline void StreamAggregatedStatePriceResponseV1::_internal_set_base(const std::string& value) {
  
  _impl_.base_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::_internal_mutable_base() {
  
  return _impl_.base_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::release_base() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedStatePriceResponseV1.base)
  return _impl_.base_.Release();
}
inline void StreamAggregatedStatePriceResponseV1::set_allocated_base(std::string* base) {
  if (base != nullptr) {
    
  } else {
    
  }
  _impl_.base_.SetAllocated(base, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.base_.IsDefault()) {
    _impl_.base_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.base)
}

// string aggregated_price_usd = 3;
inline void StreamAggregatedStatePriceResponseV1::clear_aggregated_price_usd() {
  _impl_.aggregated_price_usd_.ClearToEmpty();
}
inline const std::string& StreamAggregatedStatePriceResponseV1::aggregated_price_usd() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_usd)
  return _internal_aggregated_price_usd();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatedStatePriceResponseV1::set_aggregated_price_usd(ArgT0&& arg0, ArgT... args) {
 
 _impl_.aggregated_price_usd_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_usd)
}
inline std::string* StreamAggregatedStatePriceResponseV1::mutable_aggregated_price_usd() {
  std::string* _s = _internal_mutable_aggregated_price_usd();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_usd)
  return _s;
}
inline const std::string& StreamAggregatedStatePriceResponseV1::_internal_aggregated_price_usd() const {
  return _impl_.aggregated_price_usd_.Get();
}
inline void StreamAggregatedStatePriceResponseV1::_internal_set_aggregated_price_usd(const std::string& value) {
  
  _impl_.aggregated_price_usd_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::_internal_mutable_aggregated_price_usd() {
  
  return _impl_.aggregated_price_usd_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::release_aggregated_price_usd() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_usd)
  return _impl_.aggregated_price_usd_.Release();
}
inline void StreamAggregatedStatePriceResponseV1::set_allocated_aggregated_price_usd(std::string* aggregated_price_usd) {
  if (aggregated_price_usd != nullptr) {
    
  } else {
    
  }
  _impl_.aggregated_price_usd_.SetAllocated(aggregated_price_usd, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.aggregated_price_usd_.IsDefault()) {
    _impl_.aggregated_price_usd_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_usd)
}

// string aggregated_price_lst = 4;
inline void StreamAggregatedStatePriceResponseV1::clear_aggregated_price_lst() {
  _impl_.aggregated_price_lst_.ClearToEmpty();
}
inline const std::string& StreamAggregatedStatePriceResponseV1::aggregated_price_lst() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_lst)
  return _internal_aggregated_price_lst();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatedStatePriceResponseV1::set_aggregated_price_lst(ArgT0&& arg0, ArgT... args) {
 
 _impl_.aggregated_price_lst_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_lst)
}
inline std::string* StreamAggregatedStatePriceResponseV1::mutable_aggregated_price_lst() {
  std::string* _s = _internal_mutable_aggregated_price_lst();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_lst)
  return _s;
}
inline const std::string& StreamAggregatedStatePriceResponseV1::_internal_aggregated_price_lst() const {
  return _impl_.aggregated_price_lst_.Get();
}
inline void StreamAggregatedStatePriceResponseV1::_internal_set_aggregated_price_lst(const std::string& value) {
  
  _impl_.aggregated_price_lst_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::_internal_mutable_aggregated_price_lst() {
  
  return _impl_.aggregated_price_lst_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::release_aggregated_price_lst() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_lst)
  return _impl_.aggregated_price_lst_.Release();
}
inline void StreamAggregatedStatePriceResponseV1::set_allocated_aggregated_price_lst(std::string* aggregated_price_lst) {
  if (aggregated_price_lst != nullptr) {
    
  } else {
    
  }
  _impl_.aggregated_price_lst_.SetAllocated(aggregated_price_lst, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.aggregated_price_lst_.IsDefault()) {
    _impl_.aggregated_price_lst_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.aggregated_price_lst)
}

// .google.protobuf.Timestamp ts_event = 5;
inline bool StreamAggregatedStatePriceResponseV1::_internal_has_ts_event() const {
  return this != internal_default_instance() && _impl_.ts_event_ != nullptr;
}
inline bool StreamAggregatedStatePriceResponseV1::has_ts_event() const {
  return _internal_has_ts_event();
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatedStatePriceResponseV1::_internal_ts_event() const {
  const ::PROTOBUF_NAMESPACE_ID::Timestamp* p = _impl_.ts_event_;
  return p != nullptr ? *p : reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Timestamp&>(
      ::PROTOBUF_NAMESPACE_ID::_Timestamp_default_instance_);
}
inline const ::PROTOBUF_NAMESPACE_ID::Timestamp& StreamAggregatedStatePriceResponseV1::ts_event() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceResponseV1.ts_event)
  return _internal_ts_event();
}
inline void StreamAggregatedStatePriceResponseV1::unsafe_arena_set_allocated_ts_event(
    ::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ts_event_);
  }
  _impl_.ts_event_ = ts_event;
  if (ts_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.ts_event)
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::release_ts_event() {
  
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
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::unsafe_arena_release_ts_event() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedStatePriceResponseV1.ts_event)
  
  ::PROTOBUF_NAMESPACE_ID::Timestamp* temp = _impl_.ts_event_;
  _impl_.ts_event_ = nullptr;
  return temp;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::_internal_mutable_ts_event() {
  
  if (_impl_.ts_event_ == nullptr) {
    auto* p = CreateMaybeMessage<::PROTOBUF_NAMESPACE_ID::Timestamp>(GetArenaForAllocation());
    _impl_.ts_event_ = p;
  }
  return _impl_.ts_event_;
}
inline ::PROTOBUF_NAMESPACE_ID::Timestamp* StreamAggregatedStatePriceResponseV1::mutable_ts_event() {
  ::PROTOBUF_NAMESPACE_ID::Timestamp* _msg = _internal_mutable_ts_event();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceResponseV1.ts_event)
  return _msg;
}
inline void StreamAggregatedStatePriceResponseV1::set_allocated_ts_event(::PROTOBUF_NAMESPACE_ID::Timestamp* ts_event) {
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
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.ts_event)
}

// string lst_quote = 6;
inline void StreamAggregatedStatePriceResponseV1::clear_lst_quote() {
  _impl_.lst_quote_.ClearToEmpty();
}
inline const std::string& StreamAggregatedStatePriceResponseV1::lst_quote() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamAggregatedStatePriceResponseV1.lst_quote)
  return _internal_lst_quote();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void StreamAggregatedStatePriceResponseV1::set_lst_quote(ArgT0&& arg0, ArgT... args) {
 
 _impl_.lst_quote_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:kaikosdk.StreamAggregatedStatePriceResponseV1.lst_quote)
}
inline std::string* StreamAggregatedStatePriceResponseV1::mutable_lst_quote() {
  std::string* _s = _internal_mutable_lst_quote();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamAggregatedStatePriceResponseV1.lst_quote)
  return _s;
}
inline const std::string& StreamAggregatedStatePriceResponseV1::_internal_lst_quote() const {
  return _impl_.lst_quote_.Get();
}
inline void StreamAggregatedStatePriceResponseV1::_internal_set_lst_quote(const std::string& value) {
  
  _impl_.lst_quote_.Set(value, GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::_internal_mutable_lst_quote() {
  
  return _impl_.lst_quote_.Mutable(GetArenaForAllocation());
}
inline std::string* StreamAggregatedStatePriceResponseV1::release_lst_quote() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamAggregatedStatePriceResponseV1.lst_quote)
  return _impl_.lst_quote_.Release();
}
inline void StreamAggregatedStatePriceResponseV1::set_allocated_lst_quote(std::string* lst_quote) {
  if (lst_quote != nullptr) {
    
  } else {
    
  }
  _impl_.lst_quote_.SetAllocated(lst_quote, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.lst_quote_.IsDefault()) {
    _impl_.lst_quote_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamAggregatedStatePriceResponseV1.lst_quote)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2faggregated_5fstate_5fprice_5fv1_2fresponse_2eproto
