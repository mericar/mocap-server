// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VRCom.proto

#ifndef PROTOBUF_VRCom_2eproto__INCLUDED
#define PROTOBUF_VRCom_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace VRCom {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_VRCom_2eproto();
void protobuf_AssignDesc_VRCom_2eproto();
void protobuf_ShutdownFile_VRCom_2eproto();

class Mocap;
class Position;
class Rotation;

// ===================================================================

class Position : public ::google::protobuf::Message {
 public:
  Position();
  virtual ~Position();

  Position(const Position& from);

  inline Position& operator=(const Position& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Position& default_instance();

  void Swap(Position* other);

  // implements Message ----------------------------------------------

  inline Position* New() const { return New(NULL); }

  Position* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Position& from);
  void MergeFrom(const Position& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Position* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // optional float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // optional float z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // @@protoc_insertion_point(class_scope:VRCom.Position)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  float x_;
  float y_;
  float z_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_VRCom_2eproto();
  friend void protobuf_AssignDesc_VRCom_2eproto();
  friend void protobuf_ShutdownFile_VRCom_2eproto();

  void InitAsDefaultInstance();
  static Position* default_instance_;
};
// -------------------------------------------------------------------

class Rotation : public ::google::protobuf::Message {
 public:
  Rotation();
  virtual ~Rotation();

  Rotation(const Rotation& from);

  inline Rotation& operator=(const Rotation& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Rotation& default_instance();

  void Swap(Rotation* other);

  // implements Message ----------------------------------------------

  inline Rotation* New() const { return New(NULL); }

  Rotation* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Rotation& from);
  void MergeFrom(const Rotation& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Rotation* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // optional float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // optional float z = 3;
  void clear_z();
  static const int kZFieldNumber = 3;
  float z() const;
  void set_z(float value);

  // optional float w = 4;
  void clear_w();
  static const int kWFieldNumber = 4;
  float w() const;
  void set_w(float value);

  // @@protoc_insertion_point(class_scope:VRCom.Rotation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  float x_;
  float y_;
  float z_;
  float w_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_VRCom_2eproto();
  friend void protobuf_AssignDesc_VRCom_2eproto();
  friend void protobuf_ShutdownFile_VRCom_2eproto();

  void InitAsDefaultInstance();
  static Rotation* default_instance_;
};
// -------------------------------------------------------------------

class Mocap : public ::google::protobuf::Message {
 public:
  Mocap();
  virtual ~Mocap();

  Mocap(const Mocap& from);

  inline Mocap& operator=(const Mocap& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Mocap& default_instance();

  void Swap(Mocap* other);

  // implements Message ----------------------------------------------

  inline Mocap* New() const { return New(NULL); }

  Mocap* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Mocap& from);
  void MergeFrom(const Mocap& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Mocap* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional .VRCom.Position pos = 2;
  bool has_pos() const;
  void clear_pos();
  static const int kPosFieldNumber = 2;
  const ::VRCom::Position& pos() const;
  ::VRCom::Position* mutable_pos();
  ::VRCom::Position* release_pos();
  void set_allocated_pos(::VRCom::Position* pos);

  // optional .VRCom.Rotation rot = 3;
  bool has_rot() const;
  void clear_rot();
  static const int kRotFieldNumber = 3;
  const ::VRCom::Rotation& rot() const;
  ::VRCom::Rotation* mutable_rot();
  ::VRCom::Rotation* release_rot();
  void set_allocated_rot(::VRCom::Rotation* rot);

  // @@protoc_insertion_point(class_scope:VRCom.Mocap)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::VRCom::Position* pos_;
  ::VRCom::Rotation* rot_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_VRCom_2eproto();
  friend void protobuf_AssignDesc_VRCom_2eproto();
  friend void protobuf_ShutdownFile_VRCom_2eproto();

  void InitAsDefaultInstance();
  static Mocap* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Position

// optional float x = 1;
inline void Position::clear_x() {
  x_ = 0;
}
inline float Position::x() const {
  // @@protoc_insertion_point(field_get:VRCom.Position.x)
  return x_;
}
inline void Position::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Position.x)
}

// optional float y = 2;
inline void Position::clear_y() {
  y_ = 0;
}
inline float Position::y() const {
  // @@protoc_insertion_point(field_get:VRCom.Position.y)
  return y_;
}
inline void Position::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Position.y)
}

// optional float z = 3;
inline void Position::clear_z() {
  z_ = 0;
}
inline float Position::z() const {
  // @@protoc_insertion_point(field_get:VRCom.Position.z)
  return z_;
}
inline void Position::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Position.z)
}

// -------------------------------------------------------------------

// Rotation

// optional float x = 1;
inline void Rotation::clear_x() {
  x_ = 0;
}
inline float Rotation::x() const {
  // @@protoc_insertion_point(field_get:VRCom.Rotation.x)
  return x_;
}
inline void Rotation::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Rotation.x)
}

// optional float y = 2;
inline void Rotation::clear_y() {
  y_ = 0;
}
inline float Rotation::y() const {
  // @@protoc_insertion_point(field_get:VRCom.Rotation.y)
  return y_;
}
inline void Rotation::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Rotation.y)
}

// optional float z = 3;
inline void Rotation::clear_z() {
  z_ = 0;
}
inline float Rotation::z() const {
  // @@protoc_insertion_point(field_get:VRCom.Rotation.z)
  return z_;
}
inline void Rotation::set_z(float value) {
  
  z_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Rotation.z)
}

// optional float w = 4;
inline void Rotation::clear_w() {
  w_ = 0;
}
inline float Rotation::w() const {
  // @@protoc_insertion_point(field_get:VRCom.Rotation.w)
  return w_;
}
inline void Rotation::set_w(float value) {
  
  w_ = value;
  // @@protoc_insertion_point(field_set:VRCom.Rotation.w)
}

// -------------------------------------------------------------------

// Mocap

// optional string name = 1;
inline void Mocap::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Mocap::name() const {
  // @@protoc_insertion_point(field_get:VRCom.Mocap.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mocap::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VRCom.Mocap.name)
}
inline void Mocap::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VRCom.Mocap.name)
}
inline void Mocap::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VRCom.Mocap.name)
}
inline ::std::string* Mocap::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:VRCom.Mocap.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Mocap::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Mocap::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:VRCom.Mocap.name)
}

// optional .VRCom.Position pos = 2;
inline bool Mocap::has_pos() const {
  return !_is_default_instance_ && pos_ != NULL;
}
inline void Mocap::clear_pos() {
  if (GetArenaNoVirtual() == NULL && pos_ != NULL) delete pos_;
  pos_ = NULL;
}
inline const ::VRCom::Position& Mocap::pos() const {
  // @@protoc_insertion_point(field_get:VRCom.Mocap.pos)
  return pos_ != NULL ? *pos_ : *default_instance_->pos_;
}
inline ::VRCom::Position* Mocap::mutable_pos() {
  
  if (pos_ == NULL) {
    pos_ = new ::VRCom::Position;
  }
  // @@protoc_insertion_point(field_mutable:VRCom.Mocap.pos)
  return pos_;
}
inline ::VRCom::Position* Mocap::release_pos() {
  
  ::VRCom::Position* temp = pos_;
  pos_ = NULL;
  return temp;
}
inline void Mocap::set_allocated_pos(::VRCom::Position* pos) {
  delete pos_;
  pos_ = pos;
  if (pos) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:VRCom.Mocap.pos)
}

// optional .VRCom.Rotation rot = 3;
inline bool Mocap::has_rot() const {
  return !_is_default_instance_ && rot_ != NULL;
}
inline void Mocap::clear_rot() {
  if (GetArenaNoVirtual() == NULL && rot_ != NULL) delete rot_;
  rot_ = NULL;
}
inline const ::VRCom::Rotation& Mocap::rot() const {
  // @@protoc_insertion_point(field_get:VRCom.Mocap.rot)
  return rot_ != NULL ? *rot_ : *default_instance_->rot_;
}
inline ::VRCom::Rotation* Mocap::mutable_rot() {
  
  if (rot_ == NULL) {
    rot_ = new ::VRCom::Rotation;
  }
  // @@protoc_insertion_point(field_mutable:VRCom.Mocap.rot)
  return rot_;
}
inline ::VRCom::Rotation* Mocap::release_rot() {
  
  ::VRCom::Rotation* temp = rot_;
  rot_ = NULL;
  return temp;
}
inline void Mocap::set_allocated_rot(::VRCom::Rotation* rot) {
  delete rot_;
  rot_ = rot;
  if (rot) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:VRCom.Mocap.rot)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace VRCom

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_VRCom_2eproto__INCLUDED
