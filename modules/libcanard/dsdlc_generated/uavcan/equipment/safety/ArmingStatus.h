/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/equipment/safety/1100.ArmingStatus.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS
#define __UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# This message represents the system arming status.
# Some nodes may refuse to operate unless the system is fully armed.
#

uint8 STATUS_DISARMED           = 0
uint8 STATUS_FULLY_ARMED        = 255

uint8 status
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.safety.ArmingStatus
saturated uint8 status
******************************************************************************/

#define UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS_ID            1100
#define UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS_NAME          "uavcan.equipment.safety.ArmingStatus"
#define UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS_SIGNATURE     (0x8700F375556A8003ULL)

#define UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS_MAX_SIZE      ((8 + 7)/8)

// Constants
#define UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS_STATUS_DISARMED                  0 // 0
#define UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS_STATUS_FULLY_ARMED             255 // 255

typedef struct
{
    // FieldTypes
    uint8_t    status;                        // bit len 8

} uavcan_equipment_safety_ArmingStatus;

static inline
uint32_t uavcan_equipment_safety_ArmingStatus_encode(uavcan_equipment_safety_ArmingStatus* source, void* msg_buf);

static inline
int32_t uavcan_equipment_safety_ArmingStatus_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_safety_ArmingStatus* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_equipment_safety_ArmingStatus_encode_internal(uavcan_equipment_safety_ArmingStatus* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_equipment_safety_ArmingStatus_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_safety_ArmingStatus* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/modules/uavcan/dsdl/uavcan/equipment/safety/1100.ArmingStatus.uavcan
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
  * @brief uavcan_equipment_safety_ArmingStatus_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_equipment_safety_ArmingStatus_encode_internal(uavcan_equipment_safety_ArmingStatus* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->status); // 255
    offset += 8;

    return offset;
}

/**
  * @brief uavcan_equipment_safety_ArmingStatus_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_safety_ArmingStatus_encode(uavcan_equipment_safety_ArmingStatus* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_safety_ArmingStatus_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_safety_ArmingStatus_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_safety_ArmingStatus dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_safety_ArmingStatus_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_safety_ArmingStatus* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->status);
    if (ret != 8)
    {
        goto uavcan_equipment_safety_ArmingStatus_error_exit;
    }
    offset += 8;
    return offset;

uavcan_equipment_safety_ArmingStatus_error_exit:
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
  * @brief uavcan_equipment_safety_ArmingStatus_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_safety_ArmingStatus dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_safety_ArmingStatus_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_safety_ArmingStatus* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_safety_ArmingStatus); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_safety_ArmingStatus_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_SAFETY_ARMINGSTATUS