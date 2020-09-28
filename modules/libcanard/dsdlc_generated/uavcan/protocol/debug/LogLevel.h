/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/protocol/debug/LogLevel.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_DEBUG_LOGLEVEL
#define __UAVCAN_PROTOCOL_DEBUG_LOGLEVEL

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Log message severity
#

uint3 DEBUG    = 0
uint3 INFO     = 1
uint3 WARNING  = 2
uint3 ERROR    = 3
uint3 value
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.debug.LogLevel
saturated uint3 value
******************************************************************************/

#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_NAME                "uavcan.protocol.debug.LogLevel"
#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_SIGNATURE           (0x711BF141AF572346ULL)

#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_MAX_SIZE            ((3 + 7)/8)

// Constants
#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_DEBUG                                  0 // 0
#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_INFO                                   1 // 1
#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_WARNING                                2 // 2
#define UAVCAN_PROTOCOL_DEBUG_LOGLEVEL_ERROR                                  3 // 3

typedef struct
{
    // FieldTypes
    uint8_t    value;                         // bit len 3

} uavcan_protocol_debug_LogLevel;

static inline
uint32_t uavcan_protocol_debug_LogLevel_encode(uavcan_protocol_debug_LogLevel* source, void* msg_buf);

static inline
int32_t uavcan_protocol_debug_LogLevel_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_debug_LogLevel* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_protocol_debug_LogLevel_encode_internal(uavcan_protocol_debug_LogLevel* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_protocol_debug_LogLevel_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_debug_LogLevel* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/protocol/debug/LogLevel.uavcan
 */

#ifndef CANARD_INTERNAL_SATURATE
#define CANARD_INTERNAL_SATURATE(x, max) ( ((x) > max) ? max : ( (-(x) > max) ? (-max) : (x) ) );
#endif

#ifndef CANARD_INTERNAL_SATURATE_UNSIGNED
#define CANARD_INTERNAL_SATURATE_UNSIGNED(x, max) ( ((x) >= max) ? max : (x) );
#endif

#if defined(__GNUC__)
# define CANARD_MAYBE_UNUSED(x) x __attribute__((unused))
#else
# define CANARD_MAYBE_UNUSED(x) x
#endif

/**
  * @brief uavcan_protocol_debug_LogLevel_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_protocol_debug_LogLevel_encode_internal(uavcan_protocol_debug_LogLevel* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    source->value = CANARD_INTERNAL_SATURATE_UNSIGNED(source->value, 7)
    canardEncodeScalar(msg_buf, offset, 3, (void*)&source->value); // 7
    offset += 3;

    return offset;
}

/**
  * @brief uavcan_protocol_debug_LogLevel_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_protocol_debug_LogLevel_encode(uavcan_protocol_debug_LogLevel* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_protocol_debug_LogLevel_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_protocol_debug_LogLevel_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_debug_LogLevel dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_debug_LogLevel_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_protocol_debug_LogLevel* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 3, false, (void*)&dest->value);
    if (ret != 3)
    {
        goto uavcan_protocol_debug_LogLevel_error_exit;
    }
    offset += 3;
    return offset;

uavcan_protocol_debug_LogLevel_error_exit:
    if (ret < 0)
    {
        return ret;
    }
    else
    {
        return -CANARD_ERROR_INTERNAL;
    }
}

/**
  * @brief uavcan_protocol_debug_LogLevel_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_debug_LogLevel dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_debug_LogLevel_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_protocol_debug_LogLevel* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_protocol_debug_LogLevel); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_protocol_debug_LogLevel_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_DEBUG_LOGLEVEL