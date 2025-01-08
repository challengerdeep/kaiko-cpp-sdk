// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sdk/stream/orderbookl2_v1/request.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto

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
#include "sdk/core/instrument_criteria.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto;
namespace kaikosdk {
class StreamOrderBookL2ReplayRequestV1;
struct StreamOrderBookL2ReplayRequestV1DefaultTypeInternal;
extern StreamOrderBookL2ReplayRequestV1DefaultTypeInternal _StreamOrderBookL2ReplayRequestV1_default_instance_;
class StreamOrderBookL2RequestV1;
struct StreamOrderBookL2RequestV1DefaultTypeInternal;
extern StreamOrderBookL2RequestV1DefaultTypeInternal _StreamOrderBookL2RequestV1_default_instance_;
}  // namespace kaikosdk
PROTOBUF_NAMESPACE_OPEN
template<> ::kaikosdk::StreamOrderBookL2ReplayRequestV1* Arena::CreateMaybeMessage<::kaikosdk::StreamOrderBookL2ReplayRequestV1>(Arena*);
template<> ::kaikosdk::StreamOrderBookL2RequestV1* Arena::CreateMaybeMessage<::kaikosdk::StreamOrderBookL2RequestV1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace kaikosdk {

// ===================================================================

class StreamOrderBookL2RequestV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamOrderBookL2RequestV1) */ {
 public:
  inline StreamOrderBookL2RequestV1() : StreamOrderBookL2RequestV1(nullptr) {}
  ~StreamOrderBookL2RequestV1() override;
  explicit PROTOBUF_CONSTEXPR StreamOrderBookL2RequestV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamOrderBookL2RequestV1(const StreamOrderBookL2RequestV1& from);
  StreamOrderBookL2RequestV1(StreamOrderBookL2RequestV1&& from) noexcept
    : StreamOrderBookL2RequestV1() {
    *this = ::std::move(from);
  }

  inline StreamOrderBookL2RequestV1& operator=(const StreamOrderBookL2RequestV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamOrderBookL2RequestV1& operator=(StreamOrderBookL2RequestV1&& from) noexcept {
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
  static const StreamOrderBookL2RequestV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamOrderBookL2RequestV1* internal_default_instance() {
    return reinterpret_cast<const StreamOrderBookL2RequestV1*>(
               &_StreamOrderBookL2RequestV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(StreamOrderBookL2RequestV1& a, StreamOrderBookL2RequestV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamOrderBookL2RequestV1* other) {
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
  void UnsafeArenaSwap(StreamOrderBookL2RequestV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamOrderBookL2RequestV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamOrderBookL2RequestV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamOrderBookL2RequestV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamOrderBookL2RequestV1& from) {
    StreamOrderBookL2RequestV1::MergeImpl(*this, from);
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
  void InternalSwap(StreamOrderBookL2RequestV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamOrderBookL2RequestV1";
  }
  protected:
  explicit StreamOrderBookL2RequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInstrumentCriteriaFieldNumber = 1,
  };
  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  bool has_instrument_criteria() const;
  private:
  bool _internal_has_instrument_criteria() const;
  public:
  void clear_instrument_criteria();
  const ::kaikosdk::InstrumentCriteria& instrument_criteria() const;
  PROTOBUF_NODISCARD ::kaikosdk::InstrumentCriteria* release_instrument_criteria();
  ::kaikosdk::InstrumentCriteria* mutable_instrument_criteria();
  void set_allocated_instrument_criteria(::kaikosdk::InstrumentCriteria* instrument_criteria);
  private:
  const ::kaikosdk::InstrumentCriteria& _internal_instrument_criteria() const;
  ::kaikosdk::InstrumentCriteria* _internal_mutable_instrument_criteria();
  public:
  void unsafe_arena_set_allocated_instrument_criteria(
      ::kaikosdk::InstrumentCriteria* instrument_criteria);
  ::kaikosdk::InstrumentCriteria* unsafe_arena_release_instrument_criteria();

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamOrderBookL2RequestV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::kaikosdk::InstrumentCriteria* instrument_criteria_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto;
};
// -------------------------------------------------------------------

class StreamOrderBookL2ReplayRequestV1 final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:kaikosdk.StreamOrderBookL2ReplayRequestV1) */ {
 public:
  inline StreamOrderBookL2ReplayRequestV1() : StreamOrderBookL2ReplayRequestV1(nullptr) {}
  ~StreamOrderBookL2ReplayRequestV1() override;
  explicit PROTOBUF_CONSTEXPR StreamOrderBookL2ReplayRequestV1(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StreamOrderBookL2ReplayRequestV1(const StreamOrderBookL2ReplayRequestV1& from);
  StreamOrderBookL2ReplayRequestV1(StreamOrderBookL2ReplayRequestV1&& from) noexcept
    : StreamOrderBookL2ReplayRequestV1() {
    *this = ::std::move(from);
  }

  inline StreamOrderBookL2ReplayRequestV1& operator=(const StreamOrderBookL2ReplayRequestV1& from) {
    CopyFrom(from);
    return *this;
  }
  inline StreamOrderBookL2ReplayRequestV1& operator=(StreamOrderBookL2ReplayRequestV1&& from) noexcept {
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
  static const StreamOrderBookL2ReplayRequestV1& default_instance() {
    return *internal_default_instance();
  }
  static inline const StreamOrderBookL2ReplayRequestV1* internal_default_instance() {
    return reinterpret_cast<const StreamOrderBookL2ReplayRequestV1*>(
               &_StreamOrderBookL2ReplayRequestV1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StreamOrderBookL2ReplayRequestV1& a, StreamOrderBookL2ReplayRequestV1& b) {
    a.Swap(&b);
  }
  inline void Swap(StreamOrderBookL2ReplayRequestV1* other) {
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
  void UnsafeArenaSwap(StreamOrderBookL2ReplayRequestV1* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StreamOrderBookL2ReplayRequestV1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<StreamOrderBookL2ReplayRequestV1>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const StreamOrderBookL2ReplayRequestV1& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const StreamOrderBookL2ReplayRequestV1& from) {
    StreamOrderBookL2ReplayRequestV1::MergeImpl(*this, from);
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
  void InternalSwap(StreamOrderBookL2ReplayRequestV1* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "kaikosdk.StreamOrderBookL2ReplayRequestV1";
  }
  protected:
  explicit StreamOrderBookL2ReplayRequestV1(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInstrumentCriteriaFieldNumber = 1,
    kIntervalFieldNumber = 2,
  };
  // .kaikosdk.InstrumentCriteria instrument_criteria = 1;
  bool has_instrument_criteria() const;
  private:
  bool _internal_has_instrument_criteria() const;
  public:
  void clear_instrument_criteria();
  const ::kaikosdk::InstrumentCriteria& instrument_criteria() const;
  PROTOBUF_NODISCARD ::kaikosdk::InstrumentCriteria* release_instrument_criteria();
  ::kaikosdk::InstrumentCriteria* mutable_instrument_criteria();
  void set_allocated_instrument_criteria(::kaikosdk::InstrumentCriteria* instrument_criteria);
  private:
  const ::kaikosdk::InstrumentCriteria& _internal_instrument_criteria() const;
  ::kaikosdk::InstrumentCriteria* _internal_mutable_instrument_criteria();
  public:
  void unsafe_arena_set_allocated_instrument_criteria(
      ::kaikosdk::InstrumentCriteria* instrument_criteria);
  ::kaikosdk::InstrumentCriteria* unsafe_arena_release_instrument_criteria();

  // .kaikosdk.DataInterval interval = 2;
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

  // @@protoc_insertion_point(class_scope:kaikosdk.StreamOrderBookL2ReplayRequestV1)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::kaikosdk::InstrumentCriteria* instrument_criteria_;
    ::kaikosdk::DataInterval* interval_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// StreamOrderBookL2RequestV1

// .kaikosdk.InstrumentCriteria instrument_criteria = 1;
inline bool StreamOrderBookL2RequestV1::_internal_has_instrument_criteria() const {
  return this != internal_default_instance() && _impl_.instrument_criteria_ != nullptr;
}
inline bool StreamOrderBookL2RequestV1::has_instrument_criteria() const {
  return _internal_has_instrument_criteria();
}
inline const ::kaikosdk::InstrumentCriteria& StreamOrderBookL2RequestV1::_internal_instrument_criteria() const {
  const ::kaikosdk::InstrumentCriteria* p = _impl_.instrument_criteria_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::InstrumentCriteria&>(
      ::kaikosdk::_InstrumentCriteria_default_instance_);
}
inline const ::kaikosdk::InstrumentCriteria& StreamOrderBookL2RequestV1::instrument_criteria() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamOrderBookL2RequestV1.instrument_criteria)
  return _internal_instrument_criteria();
}
inline void StreamOrderBookL2RequestV1::unsafe_arena_set_allocated_instrument_criteria(
    ::kaikosdk::InstrumentCriteria* instrument_criteria) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.instrument_criteria_);
  }
  _impl_.instrument_criteria_ = instrument_criteria;
  if (instrument_criteria) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamOrderBookL2RequestV1.instrument_criteria)
}
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2RequestV1::release_instrument_criteria() {
  
  ::kaikosdk::InstrumentCriteria* temp = _impl_.instrument_criteria_;
  _impl_.instrument_criteria_ = nullptr;
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
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2RequestV1::unsafe_arena_release_instrument_criteria() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamOrderBookL2RequestV1.instrument_criteria)
  
  ::kaikosdk::InstrumentCriteria* temp = _impl_.instrument_criteria_;
  _impl_.instrument_criteria_ = nullptr;
  return temp;
}
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2RequestV1::_internal_mutable_instrument_criteria() {
  
  if (_impl_.instrument_criteria_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::InstrumentCriteria>(GetArenaForAllocation());
    _impl_.instrument_criteria_ = p;
  }
  return _impl_.instrument_criteria_;
}
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2RequestV1::mutable_instrument_criteria() {
  ::kaikosdk::InstrumentCriteria* _msg = _internal_mutable_instrument_criteria();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamOrderBookL2RequestV1.instrument_criteria)
  return _msg;
}
inline void StreamOrderBookL2RequestV1::set_allocated_instrument_criteria(::kaikosdk::InstrumentCriteria* instrument_criteria) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.instrument_criteria_);
  }
  if (instrument_criteria) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_criteria));
    if (message_arena != submessage_arena) {
      instrument_criteria = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, instrument_criteria, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.instrument_criteria_ = instrument_criteria;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamOrderBookL2RequestV1.instrument_criteria)
}

// -------------------------------------------------------------------

// StreamOrderBookL2ReplayRequestV1

// .kaikosdk.InstrumentCriteria instrument_criteria = 1;
inline bool StreamOrderBookL2ReplayRequestV1::_internal_has_instrument_criteria() const {
  return this != internal_default_instance() && _impl_.instrument_criteria_ != nullptr;
}
inline bool StreamOrderBookL2ReplayRequestV1::has_instrument_criteria() const {
  return _internal_has_instrument_criteria();
}
inline const ::kaikosdk::InstrumentCriteria& StreamOrderBookL2ReplayRequestV1::_internal_instrument_criteria() const {
  const ::kaikosdk::InstrumentCriteria* p = _impl_.instrument_criteria_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::InstrumentCriteria&>(
      ::kaikosdk::_InstrumentCriteria_default_instance_);
}
inline const ::kaikosdk::InstrumentCriteria& StreamOrderBookL2ReplayRequestV1::instrument_criteria() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamOrderBookL2ReplayRequestV1.instrument_criteria)
  return _internal_instrument_criteria();
}
inline void StreamOrderBookL2ReplayRequestV1::unsafe_arena_set_allocated_instrument_criteria(
    ::kaikosdk::InstrumentCriteria* instrument_criteria) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.instrument_criteria_);
  }
  _impl_.instrument_criteria_ = instrument_criteria;
  if (instrument_criteria) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamOrderBookL2ReplayRequestV1.instrument_criteria)
}
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2ReplayRequestV1::release_instrument_criteria() {
  
  ::kaikosdk::InstrumentCriteria* temp = _impl_.instrument_criteria_;
  _impl_.instrument_criteria_ = nullptr;
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
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2ReplayRequestV1::unsafe_arena_release_instrument_criteria() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamOrderBookL2ReplayRequestV1.instrument_criteria)
  
  ::kaikosdk::InstrumentCriteria* temp = _impl_.instrument_criteria_;
  _impl_.instrument_criteria_ = nullptr;
  return temp;
}
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2ReplayRequestV1::_internal_mutable_instrument_criteria() {
  
  if (_impl_.instrument_criteria_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::InstrumentCriteria>(GetArenaForAllocation());
    _impl_.instrument_criteria_ = p;
  }
  return _impl_.instrument_criteria_;
}
inline ::kaikosdk::InstrumentCriteria* StreamOrderBookL2ReplayRequestV1::mutable_instrument_criteria() {
  ::kaikosdk::InstrumentCriteria* _msg = _internal_mutable_instrument_criteria();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamOrderBookL2ReplayRequestV1.instrument_criteria)
  return _msg;
}
inline void StreamOrderBookL2ReplayRequestV1::set_allocated_instrument_criteria(::kaikosdk::InstrumentCriteria* instrument_criteria) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.instrument_criteria_);
  }
  if (instrument_criteria) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(instrument_criteria));
    if (message_arena != submessage_arena) {
      instrument_criteria = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, instrument_criteria, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.instrument_criteria_ = instrument_criteria;
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamOrderBookL2ReplayRequestV1.instrument_criteria)
}

// .kaikosdk.DataInterval interval = 2;
inline bool StreamOrderBookL2ReplayRequestV1::_internal_has_interval() const {
  return this != internal_default_instance() && _impl_.interval_ != nullptr;
}
inline bool StreamOrderBookL2ReplayRequestV1::has_interval() const {
  return _internal_has_interval();
}
inline const ::kaikosdk::DataInterval& StreamOrderBookL2ReplayRequestV1::_internal_interval() const {
  const ::kaikosdk::DataInterval* p = _impl_.interval_;
  return p != nullptr ? *p : reinterpret_cast<const ::kaikosdk::DataInterval&>(
      ::kaikosdk::_DataInterval_default_instance_);
}
inline const ::kaikosdk::DataInterval& StreamOrderBookL2ReplayRequestV1::interval() const {
  // @@protoc_insertion_point(field_get:kaikosdk.StreamOrderBookL2ReplayRequestV1.interval)
  return _internal_interval();
}
inline void StreamOrderBookL2ReplayRequestV1::unsafe_arena_set_allocated_interval(
    ::kaikosdk::DataInterval* interval) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.interval_);
  }
  _impl_.interval_ = interval;
  if (interval) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:kaikosdk.StreamOrderBookL2ReplayRequestV1.interval)
}
inline ::kaikosdk::DataInterval* StreamOrderBookL2ReplayRequestV1::release_interval() {
  
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
inline ::kaikosdk::DataInterval* StreamOrderBookL2ReplayRequestV1::unsafe_arena_release_interval() {
  // @@protoc_insertion_point(field_release:kaikosdk.StreamOrderBookL2ReplayRequestV1.interval)
  
  ::kaikosdk::DataInterval* temp = _impl_.interval_;
  _impl_.interval_ = nullptr;
  return temp;
}
inline ::kaikosdk::DataInterval* StreamOrderBookL2ReplayRequestV1::_internal_mutable_interval() {
  
  if (_impl_.interval_ == nullptr) {
    auto* p = CreateMaybeMessage<::kaikosdk::DataInterval>(GetArenaForAllocation());
    _impl_.interval_ = p;
  }
  return _impl_.interval_;
}
inline ::kaikosdk::DataInterval* StreamOrderBookL2ReplayRequestV1::mutable_interval() {
  ::kaikosdk::DataInterval* _msg = _internal_mutable_interval();
  // @@protoc_insertion_point(field_mutable:kaikosdk.StreamOrderBookL2ReplayRequestV1.interval)
  return _msg;
}
inline void StreamOrderBookL2ReplayRequestV1::set_allocated_interval(::kaikosdk::DataInterval* interval) {
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
  // @@protoc_insertion_point(field_set_allocated:kaikosdk.StreamOrderBookL2ReplayRequestV1.interval)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace kaikosdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sdk_2fstream_2forderbookl2_5fv1_2frequest_2eproto