/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_ping_2eproto__INCLUDED
#define PROTOBUF_C_ping_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _PingMessage PingMessage;
typedef struct _PongMessage PongMessage;


/* --- enums --- */


/* --- messages --- */

struct  _PingMessage
{
  ProtobufCMessage base;
  int32_t ping;
};
#define PING_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ping_message__descriptor) \
    , 0 }


struct  _PongMessage
{
  ProtobufCMessage base;
  int32_t pong;
};
#define PONG_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pong_message__descriptor) \
    , 0 }


/* PingMessage methods */
void   ping_message__init
                     (PingMessage         *message);
size_t ping_message__get_packed_size
                     (const PingMessage   *message);
size_t ping_message__pack
                     (const PingMessage   *message,
                      uint8_t             *out);
size_t ping_message__pack_to_buffer
                     (const PingMessage   *message,
                      ProtobufCBuffer     *buffer);
PingMessage *
       ping_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ping_message__free_unpacked
                     (PingMessage *message,
                      ProtobufCAllocator *allocator);
/* PongMessage methods */
void   pong_message__init
                     (PongMessage         *message);
size_t pong_message__get_packed_size
                     (const PongMessage   *message);
size_t pong_message__pack
                     (const PongMessage   *message,
                      uint8_t             *out);
size_t pong_message__pack_to_buffer
                     (const PongMessage   *message,
                      ProtobufCBuffer     *buffer);
PongMessage *
       pong_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pong_message__free_unpacked
                     (PongMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*PingMessage_Closure)
                 (const PingMessage *message,
                  void *closure_data);
typedef void (*PongMessage_Closure)
                 (const PongMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ping_message__descriptor;
extern const ProtobufCMessageDescriptor pong_message__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ping_2eproto__INCLUDED */