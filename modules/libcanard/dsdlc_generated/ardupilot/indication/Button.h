/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/libraries/AP_UAVCAN/dsdl/ardupilot/indication/20001.Button.uavcan
 */

#ifndef __ARDUPILOT_INDICATION_BUTTON
#define __ARDUPILOT_INDICATION_BUTTON

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# support for buttons on UAVCAN
# while a button is being pressed this message should be sent at 10Hz

uint8 BUTTON_SAFETY      = 1

uint8 button

# number of 0.1s units the button has been pressed for. If over 255
# then send 255
uint8 press_time
******************************************************************************/

/********************* DSDL signature source definition ***********************
ardupilot.indication.Button
saturated uint8 button
saturated uint8 press_time
******************************************************************************/

#define ARDUPILOT_INDICATION_BUTTON_ID                     20001
#define ARDUPILOT_INDICATION_BUTTON_NAME                   "ardupilot.indication.Button"
#define ARDUPILOT_INDICATION_BUTTON_SIGNATURE              (0x645A46EFBA7466EULL)

#define ARDUPILOT_INDICATION_BUTTON_MAX_SIZE               ((16 + 7)/8)

// Constants
#define ARDUPILOT_INDICATION_BUTTON_BUTTON_SAFETY                             1 // 1

typedef struct
{
    // FieldTypes
    uint8_t    button;                        // bit len 8
    uint8_t    press_time;                    // bit len 8

} ardupilot_indication_Button;

static inline
uint32_t ardupilot_indication_Button_encode(ardupilot_indication_Button* source, void* msg_buf);

static inline
int32_t ardupilot_indication_Button_decode(const CanardRxTransfer* transfer, uint16_t payload_len, ardupilot_indication_Button* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t ardupilot_indication_Button_encode_internal(ardupilot_indication_Button* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t ardupilot_indication_Button_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, ardupilot_indication_Button* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/tung/ardupilot/libraries/AP_UAVCAN/dsdl/ardupilot/indication/20001.Button.uavcan
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
  * @brief ardupilot_indication_Button_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t ardupilot_indication_Button_encode_internal(ardupilot_indication_Button* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->button); // 255
    offset += 8;

    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->press_time); // 255
    offset += 8;

    return offset;
}

/**
  * @brief ardupilot_indication_Button_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t ardupilot_indication_Button_encode(ardupilot_indication_Button* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = ardupilot_indication_Button_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief ardupilot_indication_Button_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     ardupilot_indication_Button dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t ardupilot_indication_Button_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  ardupilot_indication_Button* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->button);
    if (ret != 8)
    {
        goto ardupilot_indication_Button_error_exit;
    }
    offset += 8;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->press_time);
    if (ret != 8)
    {
        goto ardupilot_indication_Button_error_exit;
    }
    offset += 8;
    return offset;

ardupilot_indication_Button_error_exit:
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
  * @brief ardupilot_indication_Button_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     ardupilot_indication_Button dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t ardupilot_indication_Button_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  ardupilot_indication_Button* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(ardupilot_indication_Button); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = ardupilot_indication_Button_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __ARDUPILOT_INDICATION_BUTTON