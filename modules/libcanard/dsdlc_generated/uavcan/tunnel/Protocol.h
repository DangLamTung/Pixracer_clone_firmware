/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/tunnel/Protocol.uavcan
 */

#ifndef __UAVCAN_TUNNEL_PROTOCOL
#define __UAVCAN_TUNNEL_PROTOCOL

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# This enumeration specifies the encapsulated protocol.
# New protocols are likely to be added in the future.
#

uint8 MAVLINK                   = 0     # MAVLink

uint8 protocol
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.tunnel.Protocol
saturated uint8 protocol
******************************************************************************/

#define UAVCAN_TUNNEL_PROTOCOL_NAME                        "uavcan.tunnel.Protocol"
#define UAVCAN_TUNNEL_PROTOCOL_SIGNATURE                   (0xA367483C9B920E49ULL)

#define UAVCAN_TUNNEL_PROTOCOL_MAX_SIZE                    ((8 + 7)/8)

// Constants
#define UAVCAN_TUNNEL_PROTOCOL_MAVLINK                                        0 // 0

typedef struct
{
    // FieldTypes
    uint8_t    protocol;                      // bit len 8

} uavcan_tunnel_Protocol;

static inline
uint32_t uavcan_tunnel_Protocol_encode(uavcan_tunnel_Protocol* source, void* msg_buf);

static inline
int32_t uavcan_tunnel_Protocol_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_tunnel_Protocol* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_tunnel_Protocol_encode_internal(uavcan_tunnel_Protocol* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_tunnel_Protocol_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_tunnel_Protocol* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/tunnel/Protocol.uavcan
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
  * @brief uavcan_tunnel_Protocol_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_tunnel_Protocol_encode_internal(uavcan_tunnel_Protocol* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->protocol); // 255
    offset += 8;

    return offset;
}

/**
  * @brief uavcan_tunnel_Protocol_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_tunnel_Protocol_encode(uavcan_tunnel_Protocol* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_tunnel_Protocol_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_tunnel_Protocol_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_tunnel_Protocol dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_tunnel_Protocol_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_tunnel_Protocol* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->protocol);
    if (ret != 8)
    {
        goto uavcan_tunnel_Protocol_error_exit;
    }
    offset += 8;
    return offset;

uavcan_tunnel_Protocol_error_exit:
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
  * @brief uavcan_tunnel_Protocol_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_tunnel_Protocol dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_tunnel_Protocol_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_tunnel_Protocol* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_tunnel_Protocol); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_tunnel_Protocol_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_TUNNEL_PROTOCOL