// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/proio.proto

#ifndef PROTOBUF_proto_2fproio_2eproto__INCLUDED
#define PROTOBUF_proto_2fproio_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace proio {
namespace proto {
class CollectionProto;
class CollectionProtoDefaultTypeInternal;
extern CollectionProtoDefaultTypeInternal _CollectionProto_default_instance_;
class CollectionProto_AuxDataEntry;
class CollectionProto_AuxDataEntryDefaultTypeInternal;
extern CollectionProto_AuxDataEntryDefaultTypeInternal _CollectionProto_AuxDataEntry_default_instance_;
class CollectionProto_EntriesEntry;
class CollectionProto_EntriesEntryDefaultTypeInternal;
extern CollectionProto_EntriesEntryDefaultTypeInternal _CollectionProto_EntriesEntry_default_instance_;
class EventHeader;
class EventHeaderDefaultTypeInternal;
extern EventHeaderDefaultTypeInternal _EventHeader_default_instance_;
class EventHeader_AuxDataEntry;
class EventHeader_AuxDataEntryDefaultTypeInternal;
extern EventHeader_AuxDataEntryDefaultTypeInternal _EventHeader_AuxDataEntry_default_instance_;
class EventHeader_CollectionHeader;
class EventHeader_CollectionHeaderDefaultTypeInternal;
extern EventHeader_CollectionHeaderDefaultTypeInternal _EventHeader_CollectionHeader_default_instance_;
}  // namespace proto
}  // namespace proio

namespace proio {
namespace proto {

namespace protobuf_proto_2fproio_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_proto_2fproio_2eproto

// ===================================================================

class EventHeader_CollectionHeader : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proio.proto.EventHeader.CollectionHeader) */ {
 public:
  EventHeader_CollectionHeader();
  virtual ~EventHeader_CollectionHeader();

  EventHeader_CollectionHeader(const EventHeader_CollectionHeader& from);

  inline EventHeader_CollectionHeader& operator=(const EventHeader_CollectionHeader& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventHeader_CollectionHeader(EventHeader_CollectionHeader&& from) noexcept
    : EventHeader_CollectionHeader() {
    *this = ::std::move(from);
  }

  inline EventHeader_CollectionHeader& operator=(EventHeader_CollectionHeader&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EventHeader_CollectionHeader& default_instance();

  static inline const EventHeader_CollectionHeader* internal_default_instance() {
    return reinterpret_cast<const EventHeader_CollectionHeader*>(
               &_EventHeader_CollectionHeader_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(EventHeader_CollectionHeader* other);
  friend void swap(EventHeader_CollectionHeader& a, EventHeader_CollectionHeader& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventHeader_CollectionHeader* New() const PROTOBUF_FINAL { return New(NULL); }

  EventHeader_CollectionHeader* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const EventHeader_CollectionHeader& from);
  void MergeFrom(const EventHeader_CollectionHeader& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(EventHeader_CollectionHeader* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string entryType = 2;
  void clear_entrytype();
  static const int kEntryTypeFieldNumber = 2;
  const ::std::string& entrytype() const;
  void set_entrytype(const ::std::string& value);
  #if LANG_CXX11
  void set_entrytype(::std::string&& value);
  #endif
  void set_entrytype(const char* value);
  void set_entrytype(const char* value, size_t size);
  ::std::string* mutable_entrytype();
  ::std::string* release_entrytype();
  void set_allocated_entrytype(::std::string* entrytype);

  // uint32 id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // uint32 payloadSize = 4;
  void clear_payloadsize();
  static const int kPayloadSizeFieldNumber = 4;
  ::google::protobuf::uint32 payloadsize() const;
  void set_payloadsize(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proio.proto.EventHeader.CollectionHeader)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr entrytype_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 payloadsize_;
  mutable int _cached_size_;
  friend struct protobuf_proto_2fproio_2eproto::TableStruct;
};
// -------------------------------------------------------------------


// -------------------------------------------------------------------

class EventHeader : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proio.proto.EventHeader) */ {
 public:
  EventHeader();
  virtual ~EventHeader();

  EventHeader(const EventHeader& from);

  inline EventHeader& operator=(const EventHeader& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventHeader(EventHeader&& from) noexcept
    : EventHeader() {
    *this = ::std::move(from);
  }

  inline EventHeader& operator=(EventHeader&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EventHeader& default_instance();

  static inline const EventHeader* internal_default_instance() {
    return reinterpret_cast<const EventHeader*>(
               &_EventHeader_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(EventHeader* other);
  friend void swap(EventHeader& a, EventHeader& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventHeader* New() const PROTOBUF_FINAL { return New(NULL); }

  EventHeader* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const EventHeader& from);
  void MergeFrom(const EventHeader& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(EventHeader* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  typedef EventHeader_CollectionHeader CollectionHeader;

  // accessors -------------------------------------------------------

  // repeated .proio.proto.EventHeader.CollectionHeader payloadCollections = 5;
  int payloadcollections_size() const;
  void clear_payloadcollections();
  static const int kPayloadCollectionsFieldNumber = 5;
  const ::proio::proto::EventHeader_CollectionHeader& payloadcollections(int index) const;
  ::proio::proto::EventHeader_CollectionHeader* mutable_payloadcollections(int index);
  ::proio::proto::EventHeader_CollectionHeader* add_payloadcollections();
  ::google::protobuf::RepeatedPtrField< ::proio::proto::EventHeader_CollectionHeader >*
      mutable_payloadcollections();
  const ::google::protobuf::RepeatedPtrField< ::proio::proto::EventHeader_CollectionHeader >&
      payloadcollections() const;

  // map<string, bytes> auxData = 6;
  int auxdata_size() const;
  void clear_auxdata();
  static const int kAuxDataFieldNumber = 6;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      auxdata() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_auxdata();

  // uint64 runNumber = 1;
  void clear_runnumber();
  static const int kRunNumberFieldNumber = 1;
  ::google::protobuf::uint64 runnumber() const;
  void set_runnumber(::google::protobuf::uint64 value);

  // uint64 eventNumber = 2;
  void clear_eventnumber();
  static const int kEventNumberFieldNumber = 2;
  ::google::protobuf::uint64 eventnumber() const;
  void set_eventnumber(::google::protobuf::uint64 value);

  // uint64 timeStamp = 3;
  void clear_timestamp();
  static const int kTimeStampFieldNumber = 3;
  ::google::protobuf::uint64 timestamp() const;
  void set_timestamp(::google::protobuf::uint64 value);

  // uint32 nUniqueCollIDs = 4;
  void clear_nuniquecollids();
  static const int kNUniqueCollIDsFieldNumber = 4;
  ::google::protobuf::uint32 nuniquecollids() const;
  void set_nuniquecollids(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proio.proto.EventHeader)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::proio::proto::EventHeader_CollectionHeader > payloadcollections_;
  public:
  class EventHeader_AuxDataEntry : public ::google::protobuf::internal::MapEntry<EventHeader_AuxDataEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<EventHeader_AuxDataEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > SuperType;
    EventHeader_AuxDataEntry();
    EventHeader_AuxDataEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const EventHeader_AuxDataEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_EventHeader_AuxDataEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      EventHeader_AuxDataEntry,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > auxdata_;
  private:
  ::google::protobuf::uint64 runnumber_;
  ::google::protobuf::uint64 eventnumber_;
  ::google::protobuf::uint64 timestamp_;
  ::google::protobuf::uint32 nuniquecollids_;
  mutable int _cached_size_;
  friend struct protobuf_proto_2fproio_2eproto::TableStruct;
};
// -------------------------------------------------------------------


// -------------------------------------------------------------------


// -------------------------------------------------------------------

class CollectionProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:proio.proto.CollectionProto) */ {
 public:
  CollectionProto();
  virtual ~CollectionProto();

  CollectionProto(const CollectionProto& from);

  inline CollectionProto& operator=(const CollectionProto& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CollectionProto(CollectionProto&& from) noexcept
    : CollectionProto() {
    *this = ::std::move(from);
  }

  inline CollectionProto& operator=(CollectionProto&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CollectionProto& default_instance();

  static inline const CollectionProto* internal_default_instance() {
    return reinterpret_cast<const CollectionProto*>(
               &_CollectionProto_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(CollectionProto* other);
  friend void swap(CollectionProto& a, CollectionProto& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CollectionProto* New() const PROTOBUF_FINAL { return New(NULL); }

  CollectionProto* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CollectionProto& from);
  void MergeFrom(const CollectionProto& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CollectionProto* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<uint32, bytes> entries = 2;
  int entries_size() const;
  void clear_entries();
  static const int kEntriesFieldNumber = 2;
  const ::google::protobuf::Map< ::google::protobuf::uint32, ::std::string >&
      entries() const;
  ::google::protobuf::Map< ::google::protobuf::uint32, ::std::string >*
      mutable_entries();

  // map<string, bytes> auxData = 3;
  int auxdata_size() const;
  void clear_auxdata();
  static const int kAuxDataFieldNumber = 3;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      auxdata() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_auxdata();

  // uint32 nUniqueEntryIDs = 1;
  void clear_nuniqueentryids();
  static const int kNUniqueEntryIDsFieldNumber = 1;
  ::google::protobuf::uint32 nuniqueentryids() const;
  void set_nuniqueentryids(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:proio.proto.CollectionProto)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  public:
  class CollectionProto_EntriesEntry : public ::google::protobuf::internal::MapEntry<CollectionProto_EntriesEntry, 
      ::google::protobuf::uint32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<CollectionProto_EntriesEntry, 
      ::google::protobuf::uint32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > SuperType;
    CollectionProto_EntriesEntry();
    CollectionProto_EntriesEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const CollectionProto_EntriesEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_CollectionProto_EntriesEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      CollectionProto_EntriesEntry,
      ::google::protobuf::uint32, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_UINT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > entries_;
  private:
  public:
  class CollectionProto_AuxDataEntry : public ::google::protobuf::internal::MapEntry<CollectionProto_AuxDataEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > {
  public:
    typedef ::google::protobuf::internal::MapEntry<CollectionProto_AuxDataEntry, 
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > SuperType;
    CollectionProto_AuxDataEntry();
    CollectionProto_AuxDataEntry(::google::protobuf::Arena* arena);
    void MergeFrom(const ::google::protobuf::Message& other) PROTOBUF_FINAL;
    void MergeFrom(const CollectionProto_AuxDataEntry& other);
    static const Message* internal_default_instance() { return reinterpret_cast<const Message*>(&_CollectionProto_AuxDataEntry_default_instance_); }
    ::google::protobuf::Metadata GetMetadata() const;
  };
  private:
  ::google::protobuf::internal::MapField<
      CollectionProto_AuxDataEntry,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_BYTES,
      0 > auxdata_;
  private:
  ::google::protobuf::uint32 nuniqueentryids_;
  mutable int _cached_size_;
  friend struct protobuf_proto_2fproio_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// EventHeader_CollectionHeader

// string name = 1;
inline void EventHeader_CollectionHeader::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EventHeader_CollectionHeader::name() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.CollectionHeader.name)
  return name_.GetNoArena();
}
inline void EventHeader_CollectionHeader::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.CollectionHeader.name)
}
#if LANG_CXX11
inline void EventHeader_CollectionHeader::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proio.proto.EventHeader.CollectionHeader.name)
}
#endif
inline void EventHeader_CollectionHeader::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proio.proto.EventHeader.CollectionHeader.name)
}
inline void EventHeader_CollectionHeader::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proio.proto.EventHeader.CollectionHeader.name)
}
inline ::std::string* EventHeader_CollectionHeader::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:proio.proto.EventHeader.CollectionHeader.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventHeader_CollectionHeader::release_name() {
  // @@protoc_insertion_point(field_release:proio.proto.EventHeader.CollectionHeader.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EventHeader_CollectionHeader::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:proio.proto.EventHeader.CollectionHeader.name)
}

// string entryType = 2;
inline void EventHeader_CollectionHeader::clear_entrytype() {
  entrytype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EventHeader_CollectionHeader::entrytype() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.CollectionHeader.entryType)
  return entrytype_.GetNoArena();
}
inline void EventHeader_CollectionHeader::set_entrytype(const ::std::string& value) {
  
  entrytype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.CollectionHeader.entryType)
}
#if LANG_CXX11
inline void EventHeader_CollectionHeader::set_entrytype(::std::string&& value) {
  
  entrytype_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:proio.proto.EventHeader.CollectionHeader.entryType)
}
#endif
inline void EventHeader_CollectionHeader::set_entrytype(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  entrytype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:proio.proto.EventHeader.CollectionHeader.entryType)
}
inline void EventHeader_CollectionHeader::set_entrytype(const char* value, size_t size) {
  
  entrytype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:proio.proto.EventHeader.CollectionHeader.entryType)
}
inline ::std::string* EventHeader_CollectionHeader::mutable_entrytype() {
  
  // @@protoc_insertion_point(field_mutable:proio.proto.EventHeader.CollectionHeader.entryType)
  return entrytype_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EventHeader_CollectionHeader::release_entrytype() {
  // @@protoc_insertion_point(field_release:proio.proto.EventHeader.CollectionHeader.entryType)
  
  return entrytype_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EventHeader_CollectionHeader::set_allocated_entrytype(::std::string* entrytype) {
  if (entrytype != NULL) {
    
  } else {
    
  }
  entrytype_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), entrytype);
  // @@protoc_insertion_point(field_set_allocated:proio.proto.EventHeader.CollectionHeader.entryType)
}

// uint32 id = 3;
inline void EventHeader_CollectionHeader::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 EventHeader_CollectionHeader::id() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.CollectionHeader.id)
  return id_;
}
inline void EventHeader_CollectionHeader::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.CollectionHeader.id)
}

// uint32 payloadSize = 4;
inline void EventHeader_CollectionHeader::clear_payloadsize() {
  payloadsize_ = 0u;
}
inline ::google::protobuf::uint32 EventHeader_CollectionHeader::payloadsize() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.CollectionHeader.payloadSize)
  return payloadsize_;
}
inline void EventHeader_CollectionHeader::set_payloadsize(::google::protobuf::uint32 value) {
  
  payloadsize_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.CollectionHeader.payloadSize)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// EventHeader

// uint64 runNumber = 1;
inline void EventHeader::clear_runnumber() {
  runnumber_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventHeader::runnumber() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.runNumber)
  return runnumber_;
}
inline void EventHeader::set_runnumber(::google::protobuf::uint64 value) {
  
  runnumber_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.runNumber)
}

// uint64 eventNumber = 2;
inline void EventHeader::clear_eventnumber() {
  eventnumber_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventHeader::eventnumber() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.eventNumber)
  return eventnumber_;
}
inline void EventHeader::set_eventnumber(::google::protobuf::uint64 value) {
  
  eventnumber_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.eventNumber)
}

// uint64 timeStamp = 3;
inline void EventHeader::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EventHeader::timestamp() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.timeStamp)
  return timestamp_;
}
inline void EventHeader::set_timestamp(::google::protobuf::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.timeStamp)
}

// uint32 nUniqueCollIDs = 4;
inline void EventHeader::clear_nuniquecollids() {
  nuniquecollids_ = 0u;
}
inline ::google::protobuf::uint32 EventHeader::nuniquecollids() const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.nUniqueCollIDs)
  return nuniquecollids_;
}
inline void EventHeader::set_nuniquecollids(::google::protobuf::uint32 value) {
  
  nuniquecollids_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.EventHeader.nUniqueCollIDs)
}

// repeated .proio.proto.EventHeader.CollectionHeader payloadCollections = 5;
inline int EventHeader::payloadcollections_size() const {
  return payloadcollections_.size();
}
inline void EventHeader::clear_payloadcollections() {
  payloadcollections_.Clear();
}
inline const ::proio::proto::EventHeader_CollectionHeader& EventHeader::payloadcollections(int index) const {
  // @@protoc_insertion_point(field_get:proio.proto.EventHeader.payloadCollections)
  return payloadcollections_.Get(index);
}
inline ::proio::proto::EventHeader_CollectionHeader* EventHeader::mutable_payloadcollections(int index) {
  // @@protoc_insertion_point(field_mutable:proio.proto.EventHeader.payloadCollections)
  return payloadcollections_.Mutable(index);
}
inline ::proio::proto::EventHeader_CollectionHeader* EventHeader::add_payloadcollections() {
  // @@protoc_insertion_point(field_add:proio.proto.EventHeader.payloadCollections)
  return payloadcollections_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::proio::proto::EventHeader_CollectionHeader >*
EventHeader::mutable_payloadcollections() {
  // @@protoc_insertion_point(field_mutable_list:proio.proto.EventHeader.payloadCollections)
  return &payloadcollections_;
}
inline const ::google::protobuf::RepeatedPtrField< ::proio::proto::EventHeader_CollectionHeader >&
EventHeader::payloadcollections() const {
  // @@protoc_insertion_point(field_list:proio.proto.EventHeader.payloadCollections)
  return payloadcollections_;
}

// map<string, bytes> auxData = 6;
inline int EventHeader::auxdata_size() const {
  return auxdata_.size();
}
inline void EventHeader::clear_auxdata() {
  auxdata_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
EventHeader::auxdata() const {
  // @@protoc_insertion_point(field_map:proio.proto.EventHeader.auxData)
  return auxdata_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
EventHeader::mutable_auxdata() {
  // @@protoc_insertion_point(field_mutable_map:proio.proto.EventHeader.auxData)
  return auxdata_.MutableMap();
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// CollectionProto

// uint32 nUniqueEntryIDs = 1;
inline void CollectionProto::clear_nuniqueentryids() {
  nuniqueentryids_ = 0u;
}
inline ::google::protobuf::uint32 CollectionProto::nuniqueentryids() const {
  // @@protoc_insertion_point(field_get:proio.proto.CollectionProto.nUniqueEntryIDs)
  return nuniqueentryids_;
}
inline void CollectionProto::set_nuniqueentryids(::google::protobuf::uint32 value) {
  
  nuniqueentryids_ = value;
  // @@protoc_insertion_point(field_set:proio.proto.CollectionProto.nUniqueEntryIDs)
}

// map<uint32, bytes> entries = 2;
inline int CollectionProto::entries_size() const {
  return entries_.size();
}
inline void CollectionProto::clear_entries() {
  entries_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::uint32, ::std::string >&
CollectionProto::entries() const {
  // @@protoc_insertion_point(field_map:proio.proto.CollectionProto.entries)
  return entries_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::uint32, ::std::string >*
CollectionProto::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_map:proio.proto.CollectionProto.entries)
  return entries_.MutableMap();
}

// map<string, bytes> auxData = 3;
inline int CollectionProto::auxdata_size() const {
  return auxdata_.size();
}
inline void CollectionProto::clear_auxdata() {
  auxdata_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
CollectionProto::auxdata() const {
  // @@protoc_insertion_point(field_map:proio.proto.CollectionProto.auxData)
  return auxdata_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
CollectionProto::mutable_auxdata() {
  // @@protoc_insertion_point(field_mutable_map:proio.proto.CollectionProto.auxData)
  return auxdata_.MutableMap();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace proio

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fproio_2eproto__INCLUDED
