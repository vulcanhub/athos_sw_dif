// Generated register defines for PWRMGR

// Copyright information found in source file:
// Copyright lowRISC contributors.Copyright lowRISC contributors.

// Licensing information found in source file:
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _PWRMGR_REG_DEFS_
#define _PWRMGR_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Number of wakeups
#define PWRMGR_PARAM_NUM_WKUPS 2

// Vector index for gsc_wk, applies for WAKEUP_EN, WAKE_STATUS and WAKE_INFO
#define PWRMGR_PARAM_GSC_WK_IDX 0

// Vector index for aon_timer_wkup_req, applies for WAKEUP_EN, WAKE_STATUS
// and WAKE_INFO
#define PWRMGR_PARAM_AON_TIMER_WKUP_REQ_IDX 1

// Number of reset requets
#define PWRMGR_PARAM_NUM_RST_REQS 2

// Register width
#define PWRMGR_PARAM_REG_WIDTH 32

// Common Interrupt Offsets
#define PWRMGR_INTR_COMMON_WAKEUP_BIT 0

// Interrupt State Register
#define PWRMGR_INTR_STATE_REG_OFFSET 0x0
#define PWRMGR_INTR_STATE_WAKEUP_BIT 0

// Interrupt Enable Register
#define PWRMGR_INTR_ENABLE_REG_OFFSET 0x4
#define PWRMGR_INTR_ENABLE_WAKEUP_BIT 0

// Interrupt Test Register
#define PWRMGR_INTR_TEST_REG_OFFSET 0x8
#define PWRMGR_INTR_TEST_WAKEUP_BIT 0

// Controls the configurability of the !!CONTROL register.
#define PWRMGR_CTRL_CFG_REGWEN_REG_OFFSET 0xc
#define PWRMGR_CTRL_CFG_REGWEN_EN_BIT 0

// Control register
#define PWRMGR_CONTROL_REG_OFFSET 0x10
#define PWRMGR_CONTROL_LOW_POWER_HINT_BIT 0
#define PWRMGR_CONTROL_CORE_CLK_EN_BIT 4
#define PWRMGR_CONTROL_IO_CLK_EN_BIT 5
#define PWRMGR_CONTROL_USB_CLK_EN_LP_BIT 6
#define PWRMGR_CONTROL_USB_CLK_EN_ACTIVE_BIT 7
#define PWRMGR_CONTROL_MAIN_PD_N_BIT 8

// The configuration registers CONTROL, WAKEUP_EN, RESET_EN are all written
// in the
#define PWRMGR_CFG_CDC_SYNC_REG_OFFSET 0x14
#define PWRMGR_CFG_CDC_SYNC_SYNC_BIT 0

// Configuration enable for wakeup register
#define PWRMGR_WAKEUP_EN_REGWEN_REG_OFFSET 0x18
#define PWRMGR_WAKEUP_EN_REGWEN_EN_BIT 0

// Bit mask for enabled wakeups (common parameters)
#define PWRMGR_WAKEUP_EN_EN_FIELD_WIDTH 1
#define PWRMGR_WAKEUP_EN_EN_FIELDS_PER_REG 32
#define PWRMGR_WAKEUP_EN_MULTIREG_COUNT 1

// Bit mask for enabled wakeups
#define PWRMGR_WAKEUP_EN_REG_OFFSET 0x1c
#define PWRMGR_WAKEUP_EN_EN_0_BIT 0
#define PWRMGR_WAKEUP_EN_EN_1_BIT 1

// A read only register of all current wake requests post enable mask (common
// parameters)
#define PWRMGR_WAKE_STATUS_VAL_FIELD_WIDTH 1
#define PWRMGR_WAKE_STATUS_VAL_FIELDS_PER_REG 32
#define PWRMGR_WAKE_STATUS_MULTIREG_COUNT 1

// A read only register of all current wake requests post enable mask
#define PWRMGR_WAKE_STATUS_REG_OFFSET 0x20
#define PWRMGR_WAKE_STATUS_VAL_0_BIT 0
#define PWRMGR_WAKE_STATUS_VAL_1_BIT 1

// Configuration enable for reset register
#define PWRMGR_RESET_EN_REGWEN_REG_OFFSET 0x24
#define PWRMGR_RESET_EN_REGWEN_EN_BIT 0

// Bit mask for enabled reset requests (common parameters)
#define PWRMGR_RESET_EN_EN_FIELD_WIDTH 1
#define PWRMGR_RESET_EN_EN_FIELDS_PER_REG 32
#define PWRMGR_RESET_EN_MULTIREG_COUNT 1

// Bit mask for enabled reset requests
#define PWRMGR_RESET_EN_REG_OFFSET 0x28
#define PWRMGR_RESET_EN_EN_0_BIT 0
#define PWRMGR_RESET_EN_EN_1_BIT 1

// A read only register of all current reset requests post enable mask
// (common parameters)
#define PWRMGR_RESET_STATUS_VAL_FIELD_WIDTH 1
#define PWRMGR_RESET_STATUS_VAL_FIELDS_PER_REG 32
#define PWRMGR_RESET_STATUS_MULTIREG_COUNT 1

// A read only register of all current reset requests post enable mask
#define PWRMGR_RESET_STATUS_REG_OFFSET 0x2c
#define PWRMGR_RESET_STATUS_VAL_0_BIT 0
#define PWRMGR_RESET_STATUS_VAL_1_BIT 1

// A read only register of escalation reset request
#define PWRMGR_ESCALATE_RESET_STATUS_REG_OFFSET 0x30
#define PWRMGR_ESCALATE_RESET_STATUS_VAL_BIT 0

// Indicates which functions caused the chip to wakeup
#define PWRMGR_WAKE_INFO_CAPTURE_DIS_REG_OFFSET 0x34
#define PWRMGR_WAKE_INFO_CAPTURE_DIS_VAL_BIT 0

// Indicates which functions caused the chip to wakeup.
#define PWRMGR_WAKE_INFO_REG_OFFSET 0x38
#define PWRMGR_WAKE_INFO_REASONS_MASK 0x3
#define PWRMGR_WAKE_INFO_REASONS_OFFSET 0
#define PWRMGR_WAKE_INFO_REASONS_FIELD \
  ((bitfield_field32_t) { .mask = PWRMGR_WAKE_INFO_REASONS_MASK, .index = PWRMGR_WAKE_INFO_REASONS_OFFSET })
#define PWRMGR_WAKE_INFO_FALL_THROUGH_BIT 2
#define PWRMGR_WAKE_INFO_ABORT_BIT 3

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _PWRMGR_REG_DEFS_
// End generated register defines for PWRMGR