/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "wrapper.pb-c.h"
void   wrapper_message__init
                     (WrapperMessage         *message)
{
  static WrapperMessage init_value = WRAPPER_MESSAGE__INIT;
  *message = init_value;
}
size_t wrapper_message__get_packed_size
                     (const WrapperMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wrapper_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wrapper_message__pack
                     (const WrapperMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wrapper_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wrapper_message__pack_to_buffer
                     (const WrapperMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wrapper_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
WrapperMessage *
       wrapper_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (WrapperMessage *)
     protobuf_c_message_unpack (&wrapper_message__descriptor,
                                allocator, len, data);
}
void   wrapper_message__free_unpacked
                     (WrapperMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &wrapper_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
const ProtobufCEnumValue wrapper_message__type__enum_values_by_number[4] =
{
  { "HANDSHAKE", "WRAPPER_MESSAGE__TYPE__HANDSHAKE", 1 },
  { "INPUT", "WRAPPER_MESSAGE__TYPE__INPUT", 2 },
  { "PING", "WRAPPER_MESSAGE__TYPE__PING", 3 },
  { "PONG", "WRAPPER_MESSAGE__TYPE__PONG", 4 },
};
static const ProtobufCIntRange wrapper_message__type__value_ranges[] = {
{1, 0},{0, 4}
};
const ProtobufCEnumValueIndex wrapper_message__type__enum_values_by_name[4] =
{
  { "HANDSHAKE", 0 },
  { "INPUT", 1 },
  { "PING", 2 },
  { "PONG", 3 },
};
const ProtobufCEnumDescriptor wrapper_message__type__descriptor =
{
  PROTOBUF_C_ENUM_DESCRIPTOR_MAGIC,
  "WrapperMessage.Type",
  "Type",
  "WrapperMessage__Type",
  "",
  4,
  wrapper_message__type__enum_values_by_number,
  4,
  wrapper_message__type__enum_values_by_name,
  1,
  wrapper_message__type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor wrapper_message__field_descriptors[5] =
{
  {
    "type",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(WrapperMessage, type),
    &wrapper_message__type__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "handshake_message",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(WrapperMessage, handshake_message),
    &handshake_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "input_message",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(WrapperMessage, input_message),
    &input_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ping_message",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(WrapperMessage, ping_message),
    &ping_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pong_message",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(WrapperMessage, pong_message),
    &pong_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wrapper_message__field_indices_by_name[] = {
  1,   /* field[1] = handshake_message */
  2,   /* field[2] = input_message */
  3,   /* field[3] = ping_message */
  4,   /* field[4] = pong_message */
  0,   /* field[0] = type */
};
static const ProtobufCIntRange wrapper_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor wrapper_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "WrapperMessage",
  "WrapperMessage",
  "WrapperMessage",
  "",
  sizeof(WrapperMessage),
  5,
  wrapper_message__field_descriptors,
  wrapper_message__field_indices_by_name,
  1,  wrapper_message__number_ranges,
  (ProtobufCMessageInit) wrapper_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
