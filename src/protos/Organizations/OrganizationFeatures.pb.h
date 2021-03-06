// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Organizations/OrganizationFeatures.proto

#ifndef PROTOBUF_Organizations_2fOrganizationFeatures_2eproto__INCLUDED
#define PROTOBUF_Organizations_2fOrganizationFeatures_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Organizations/BlockStatus.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Organizations {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Organizations_2fOrganizationFeatures_2eproto();
void protobuf_AssignDesc_Organizations_2fOrganizationFeatures_2eproto();
void protobuf_ShutdownFile_Organizations_2fOrganizationFeatures_2eproto();

class OrganizationFeatures;

// ===================================================================

class OrganizationFeatures : public ::google::protobuf::Message {
 public:
  OrganizationFeatures();
  virtual ~OrganizationFeatures();

  OrganizationFeatures(const OrganizationFeatures& from);

  inline OrganizationFeatures& operator=(const OrganizationFeatures& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const OrganizationFeatures& default_instance();

  void Swap(OrganizationFeatures* other);

  // implements Message ----------------------------------------------

  OrganizationFeatures* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const OrganizationFeatures& from);
  void MergeFrom(const OrganizationFeatures& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .Diadoc.Api.Proto.Organizations.BlockStatus BlockStatus = 1;
  inline bool has_blockstatus() const;
  inline void clear_blockstatus();
  static const int kBlockStatusFieldNumber = 1;
  inline const ::Diadoc::Api::Proto::Organizations::BlockStatus& blockstatus() const;
  inline ::Diadoc::Api::Proto::Organizations::BlockStatus* mutable_blockstatus();
  inline ::Diadoc::Api::Proto::Organizations::BlockStatus* release_blockstatus();
  inline void set_allocated_blockstatus(::Diadoc::Api::Proto::Organizations::BlockStatus* blockstatus);

  // repeated string Features = 2;
  inline int features_size() const;
  inline void clear_features();
  static const int kFeaturesFieldNumber = 2;
  inline const ::std::string& features(int index) const;
  inline ::std::string* mutable_features(int index);
  inline void set_features(int index, const ::std::string& value);
  inline void set_features(int index, const char* value);
  inline void set_features(int index, const char* value, size_t size);
  inline ::std::string* add_features();
  inline void add_features(const ::std::string& value);
  inline void add_features(const char* value);
  inline void add_features(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& features() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_features();

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Organizations.OrganizationFeatures)
 private:
  inline void set_has_blockstatus();
  inline void clear_has_blockstatus();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Diadoc::Api::Proto::Organizations::BlockStatus* blockstatus_;
  ::google::protobuf::RepeatedPtrField< ::std::string> features_;
  friend void  protobuf_AddDesc_Organizations_2fOrganizationFeatures_2eproto();
  friend void protobuf_AssignDesc_Organizations_2fOrganizationFeatures_2eproto();
  friend void protobuf_ShutdownFile_Organizations_2fOrganizationFeatures_2eproto();

  void InitAsDefaultInstance();
  static OrganizationFeatures* default_instance_;
};
// ===================================================================


// ===================================================================

// OrganizationFeatures

// required .Diadoc.Api.Proto.Organizations.BlockStatus BlockStatus = 1;
inline bool OrganizationFeatures::has_blockstatus() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OrganizationFeatures::set_has_blockstatus() {
  _has_bits_[0] |= 0x00000001u;
}
inline void OrganizationFeatures::clear_has_blockstatus() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void OrganizationFeatures::clear_blockstatus() {
  if (blockstatus_ != NULL) blockstatus_->::Diadoc::Api::Proto::Organizations::BlockStatus::Clear();
  clear_has_blockstatus();
}
inline const ::Diadoc::Api::Proto::Organizations::BlockStatus& OrganizationFeatures::blockstatus() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Organizations.OrganizationFeatures.BlockStatus)
  return blockstatus_ != NULL ? *blockstatus_ : *default_instance_->blockstatus_;
}
inline ::Diadoc::Api::Proto::Organizations::BlockStatus* OrganizationFeatures::mutable_blockstatus() {
  set_has_blockstatus();
  if (blockstatus_ == NULL) blockstatus_ = new ::Diadoc::Api::Proto::Organizations::BlockStatus;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Organizations.OrganizationFeatures.BlockStatus)
  return blockstatus_;
}
inline ::Diadoc::Api::Proto::Organizations::BlockStatus* OrganizationFeatures::release_blockstatus() {
  clear_has_blockstatus();
  ::Diadoc::Api::Proto::Organizations::BlockStatus* temp = blockstatus_;
  blockstatus_ = NULL;
  return temp;
}
inline void OrganizationFeatures::set_allocated_blockstatus(::Diadoc::Api::Proto::Organizations::BlockStatus* blockstatus) {
  delete blockstatus_;
  blockstatus_ = blockstatus;
  if (blockstatus) {
    set_has_blockstatus();
  } else {
    clear_has_blockstatus();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Organizations.OrganizationFeatures.BlockStatus)
}

// repeated string Features = 2;
inline int OrganizationFeatures::features_size() const {
  return features_.size();
}
inline void OrganizationFeatures::clear_features() {
  features_.Clear();
}
inline const ::std::string& OrganizationFeatures::features(int index) const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
  return features_.Get(index);
}
inline ::std::string* OrganizationFeatures::mutable_features(int index) {
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
  return features_.Mutable(index);
}
inline void OrganizationFeatures::set_features(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
  features_.Mutable(index)->assign(value);
}
inline void OrganizationFeatures::set_features(int index, const char* value) {
  features_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
}
inline void OrganizationFeatures::set_features(int index, const char* value, size_t size) {
  features_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
}
inline ::std::string* OrganizationFeatures::add_features() {
  return features_.Add();
}
inline void OrganizationFeatures::add_features(const ::std::string& value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
}
inline void OrganizationFeatures::add_features(const char* value) {
  features_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
}
inline void OrganizationFeatures::add_features(const char* value, size_t size) {
  features_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
OrganizationFeatures::features() const {
  // @@protoc_insertion_point(field_list:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
  return features_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
OrganizationFeatures::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:Diadoc.Api.Proto.Organizations.OrganizationFeatures.Features)
  return &features_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Organizations
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Organizations_2fOrganizationFeatures_2eproto__INCLUDED
