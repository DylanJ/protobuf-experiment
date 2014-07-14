/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "ping.pb-c.h"
void   ping_message__init
                     (PingMessage         *message)
{
  static PingMessage init_value = PING_MESSAGE__INIT;
  *message = init_value;
}
size_t ping_message__get_packed_size
                     (const PingMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ping_message__pack
                     (const PingMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ping_message__pack_to_buffer
                     (const PingMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PingMessage *
       ping_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PingMessage *)
     protobuf_c_message_unpack (&ping_message__descriptor,
                                allocator, len, data);
}
void   ping_message__free_unpacked
                     (PingMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &ping_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   pong_message__init
                     (PongMessage         *message)
{
  static PongMessage init_value = PONG_MESSAGE__INIT;
  *message = init_value;
}
size_t pong_message__get_packed_size
                     (const PongMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pong_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pong_message__pack
                     (const PongMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pong_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pong_message__pack_to_buffer
                     (const PongMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pong_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PongMessage *
       pong_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PongMessage *)
     protobuf_c_message_unpack (&pong_message__descriptor,
                                allocator, len, data);
}
void   pong_message__free_unpacked
                     (PongMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &pong_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ping_message__field_descriptors[1] =
{
  {
    "ping",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PingMessage, ping),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ping_message__field_indices_by_name[] = {
  0,   /* field[0] = ping */
};
static const ProtobufCIntRange ping_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ping_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "PingMessage",
  "PingMessage",
  "PingMessage",
  "",
  sizeof(PingMessage),
  1,
  ping_message__field_descriptors,
  ping_message__field_indices_by_name,
  1,  ping_message__number_ranges,
  (ProtobufCMessageInit) ping_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor pong_message__field_descriptors[1] =
{
  {
    "pong",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(PongMessage, pong),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pong_message__field_indices_by_name[] = {
  0,   /* field[0] = pong */
};
static const ProtobufCIntRange pong_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor pong_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "PongMessage",
  "PongMessage",
  "PongMessage",
  "",
  sizeof(PongMessage),
  1,
  pong_message__field_descriptors,
  pong_message__field_indices_by_name,
  1,  pong_message__number_ranges,
  (ProtobufCMessageInit) pong_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
