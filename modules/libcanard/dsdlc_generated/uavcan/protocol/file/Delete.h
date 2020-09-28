/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/protocol/file/47.Delete.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_FILE_DELETE
#define __UAVCAN_PROTOCOL_FILE_DELETE

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan/protocol/file/Error.h>
#include <uavcan/protocol/file/Path.h>

/******************************* Source text **********************************
#
# Delete remote file system entry.
# If the remote entry is a directory, all nested entries will be removed too.
#

Path path

---

Error error
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.file.Delete
uavcan.protocol.file.Path path
---
uavcan.protocol.file.Error error
******************************************************************************/

#define UAVCAN_PROTOCOL_FILE_DELETE_ID                     47
#define UAVCAN_PROTOCOL_FILE_DELETE_NAME                   "uavcan.protocol.file.Delete"
#define UAVCAN_PROTOCOL_FILE_DELETE_SIGNATURE              (0x78648C99170B47AAULL)

#define UAVCAN_PROTOCOL_FILE_DELETE_REQUEST_MAX_SIZE       ((1608 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    uavcan_protocol_file_Path path;                          //

} uavcan_protocol_file_DeleteRequest;

static inline
uint32_t uavcan_protocol_file_DeleteRequest_encode(uavcan_protocol_file_DeleteRequest* source, void* msg_buf);

static inline
int32_t uavcan_protocol_file_DeleteRequest_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteRequest* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_protocol_file_DeleteRequest_encode_internal(uavcan_protocol_file_DeleteRequest* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_protocol_file_DeleteRequest_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteRequest* dest, uint8_t** dyn_arr_buf, int32_t offset);

#define UAVCAN_PROTOCOL_FILE_DELETE_RESPONSE_MAX_SIZE      ((16 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    uavcan_protocol_file_Error error;                         //

} uavcan_protocol_file_DeleteResponse;

static inline
uint32_t uavcan_protocol_file_DeleteResponse_encode(uavcan_protocol_file_DeleteResponse* source, void* msg_buf);

static inline
int32_t uavcan_protocol_file_DeleteResponse_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteResponse* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_protocol_file_DeleteResponse_encode_internal(uavcan_protocol_file_DeleteResponse* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_protocol_file_DeleteResponse_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_file_DeleteResponse* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/protocol/file/47.Delete.uavcan
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
  * @brief uavcan_protocol_file_DeleteRequest_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_protocol_file_DeleteRequest_encode_internal(uavcan_protocol_file_DeleteRequest* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    // Compound
    offset = uavcan_protocol_file_Path_encode_internal(&source->path, msg_buf, offset, 0);

    return offset;
}

/**
  * @brief uavcan_protocol_file_DeleteRequest_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_protocol_file_DeleteRequest_encode(uavcan_protocol_file_DeleteRequest* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_protocol_file_DeleteRequest_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_protocol_file_DeleteRequest_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_file_DeleteRequest dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_file_DeleteRequest_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_protocol_file_DeleteRequest* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    // Compound
    offset = uavcan_protocol_file_Path_decode_internal(transfer, payload_len, &dest->path, dyn_arr_buf, offset);
    if (offset < 0)
    {
        ret = offset;
        goto uavcan_protocol_file_DeleteRequest_error_exit;
    }
    return offset;

uavcan_protocol_file_DeleteRequest_error_exit:
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
  * @brief uavcan_protocol_file_DeleteRequest_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_file_DeleteRequest dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_file_DeleteRequest_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_protocol_file_DeleteRequest* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_protocol_file_DeleteRequest); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_protocol_file_DeleteRequest_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

/**
  * @brief uavcan_protocol_file_DeleteResponse_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_protocol_file_DeleteResponse_encode_internal(uavcan_protocol_file_DeleteResponse* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    // Compound
    offset = uavcan_protocol_file_Error_encode_internal(&source->error, msg_buf, offset, 0);

    return offset;
}

/**
  * @brief uavcan_protocol_file_DeleteResponse_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_protocol_file_DeleteResponse_encode(uavcan_protocol_file_DeleteResponse* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_protocol_file_DeleteResponse_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_protocol_file_DeleteResponse_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_file_DeleteResponse dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_file_DeleteResponse_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_protocol_file_DeleteResponse* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    // Compound
    offset = uavcan_protocol_file_Error_decode_internal(transfer, payload_len, &dest->error, dyn_arr_buf, offset);
    if (offset < 0)
    {
        ret = offset;
        goto uavcan_protocol_file_DeleteResponse_error_exit;
    }
    return offset;

uavcan_protocol_file_DeleteResponse_error_exit:
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
  * @brief uavcan_protocol_file_DeleteResponse_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_file_DeleteResponse dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_file_DeleteResponse_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_protocol_file_DeleteResponse* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_protocol_file_DeleteResponse); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_protocol_file_DeleteResponse_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_FILE_DELETE