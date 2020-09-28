/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/libraries/AP_UAVCAN/dsdl/ardupilot/indication/20000.SafetyState.uavcan
 */

#ifndef __ARDUPILOT_INDICATION_SAFETYSTATE
#define __ARDUPILOT_INDICATION_SAFETYSTATE

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# support for Safety LED on UAVCAN

uint8 STATUS_SAFETY_ON           = 0
uint8 STATUS_SAFETY_OFF          = 255

uint8 status
******************************************************************************/

/********************* DSDL signature source definition ***********************
ardupilot.indication.SafetyState
saturated uint8 status
******************************************************************************/

#define ARDUPILOT_INDICATION_SAFETYSTATE_ID                20000
#define ARDUPILOT_INDICATION_SAFETYSTATE_NAME              "ardupilot.indication.SafetyState"
#define ARDUPILOT_INDICATION_SAFETYSTATE_SIGNATURE         (0xE965701A95A1A6A1ULL)

#define ARDUPILOT_INDICATION_SAFETYSTATE_MAX_SIZE          ((8 + 7)/8)

// Constants
#define ARDUPILOT_INDICATION_SAFETYSTATE_STATUS_SAFETY_ON                     0 // 0
#define ARDUPILOT_INDICATION_SAFETYSTATE_STATUS_SAFETY_OFF                  255 // 255

typedef struct
{
    // FieldTypes
    uint8_t    status;                        // bit len 8

} ardupilot_indication_SafetyState;

static inline
uint32_t ardupilot_indication_SafetyState_encode(ardupilot_indication_SafetyState* source, void* msg_buf);

static inline
int32_t ardupilot_indication_SafetyState_decode(const CanardRxTransfer* transfer, uint16_t payload_len, ardupilot_indication_SafetyState* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t ardupilot_indication_SafetyState_encode_internal(ardupilot_indication_SafetyState* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t ardupilot_indication_SafetyState_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, ardupilot_indication_SafetyState* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/libraries/AP_UAVCAN/dsdl/ardupilot/indication/20000.SafetyState.uavcan
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
  * @brief ardupilot_indication_SafetyState_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t ardupilot_indication_SafetyState_encode_internal(ardupilot_indication_SafetyState* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->status); // 255
    offset += 8;

    return offset;
}

/**
  * @brief ardupilot_indication_SafetyState_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t ardupilot_indication_SafetyState_encode(ardupilot_indication_SafetyState* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = ardupilot_indication_SafetyState_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief ardupilot_indication_SafetyState_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     ardupilot_indication_SafetyState dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t ardupilot_indication_SafetyState_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  ardupilot_indication_SafetyState* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->status);
    if (ret != 8)
    {
        goto ardupilot_indication_SafetyState_error_exit;
    }
    offset += 8;
    return offset;

ardupilot_indication_SafetyState_error_exit:
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
  * @brief ardupilot_indication_SafetyState_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     ardupilot_indication_SafetyState dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t ardupilot_indication_SafetyState_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  ardupilot_indication_SafetyState* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(ardupilot_indication_SafetyState); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = ardupilot_indication_SafetyState_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __ARDUPILOT_INDICATION_SAFETYSTATE