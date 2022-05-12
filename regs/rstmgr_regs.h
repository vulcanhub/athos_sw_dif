// Generated register defines for RSTMGR

// Copyright information found in source file:
// Copyright lowRISC contributors.Copyright lowRISC contributors.

// Licensing information found in source file:
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _RSTMGR_REG_DEFS_
#define _RSTMGR_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Read width for crash info
#define RSTMGR_PARAM_RD_WIDTH 32

// Index width for crash info
#define RSTMGR_PARAM_IDX_WIDTH 4

// Number of hardware reset requests, inclusive of escalation
#define RSTMGR_PARAM_NUM_HW_RESETS 3

// Number of software resets
#define RSTMGR_PARAM_NUM_SW_RESETS 1

// Register width
#define RSTMGR_PARAM_REG_WIDTH 32

// Device reset reason.
#define RSTMGR_RESET_INFO_REG_OFFSET 0x0
#define RSTMGR_RESET_INFO_POR_BIT 0
#define RSTMGR_RESET_INFO_LOW_POWER_EXIT_BIT 1
#define RSTMGR_RESET_INFO_NDM_RESET_BIT 2
#define RSTMGR_RESET_INFO_HW_REQ_MASK 0x7
#define RSTMGR_RESET_INFO_HW_REQ_OFFSET 3
#define RSTMGR_RESET_INFO_HW_REQ_FIELD \
  ((bitfield_field32_t) { .mask = RSTMGR_RESET_INFO_HW_REQ_MASK, .index = RSTMGR_RESET_INFO_HW_REQ_OFFSET })

// Alert write enable
#define RSTMGR_ALERT_REGWEN_REG_OFFSET 0x4
#define RSTMGR_ALERT_REGWEN_EN_BIT 0

// Alert info dump controls.
#define RSTMGR_ALERT_INFO_CTRL_REG_OFFSET 0x8
#define RSTMGR_ALERT_INFO_CTRL_EN_BIT 0
#define RSTMGR_ALERT_INFO_CTRL_INDEX_MASK 0xf
#define RSTMGR_ALERT_INFO_CTRL_INDEX_OFFSET 4
#define RSTMGR_ALERT_INFO_CTRL_INDEX_FIELD \
  ((bitfield_field32_t) { .mask = RSTMGR_ALERT_INFO_CTRL_INDEX_MASK, .index = RSTMGR_ALERT_INFO_CTRL_INDEX_OFFSET })

// Alert info dump attributes.
#define RSTMGR_ALERT_INFO_ATTR_REG_OFFSET 0xc
#define RSTMGR_ALERT_INFO_ATTR_CNT_AVAIL_MASK 0xf
#define RSTMGR_ALERT_INFO_ATTR_CNT_AVAIL_OFFSET 0
#define RSTMGR_ALERT_INFO_ATTR_CNT_AVAIL_FIELD \
  ((bitfield_field32_t) { .mask = RSTMGR_ALERT_INFO_ATTR_CNT_AVAIL_MASK, .index = RSTMGR_ALERT_INFO_ATTR_CNT_AVAIL_OFFSET })

//   Alert dump information prior to last reset.
#define RSTMGR_ALERT_INFO_REG_OFFSET 0x10

// Cpu write enable
#define RSTMGR_CPU_REGWEN_REG_OFFSET 0x14
#define RSTMGR_CPU_REGWEN_EN_BIT 0

// Cpu info dump controls.
#define RSTMGR_CPU_INFO_CTRL_REG_OFFSET 0x18
#define RSTMGR_CPU_INFO_CTRL_EN_BIT 0
#define RSTMGR_CPU_INFO_CTRL_INDEX_MASK 0xf
#define RSTMGR_CPU_INFO_CTRL_INDEX_OFFSET 4
#define RSTMGR_CPU_INFO_CTRL_INDEX_FIELD \
  ((bitfield_field32_t) { .mask = RSTMGR_CPU_INFO_CTRL_INDEX_MASK, .index = RSTMGR_CPU_INFO_CTRL_INDEX_OFFSET })

// Cpu info dump attributes.
#define RSTMGR_CPU_INFO_ATTR_REG_OFFSET 0x1c
#define RSTMGR_CPU_INFO_ATTR_CNT_AVAIL_MASK 0xf
#define RSTMGR_CPU_INFO_ATTR_CNT_AVAIL_OFFSET 0
#define RSTMGR_CPU_INFO_ATTR_CNT_AVAIL_FIELD \
  ((bitfield_field32_t) { .mask = RSTMGR_CPU_INFO_ATTR_CNT_AVAIL_MASK, .index = RSTMGR_CPU_INFO_ATTR_CNT_AVAIL_OFFSET })

//   Cpu dump information prior to last reset.
#define RSTMGR_CPU_INFO_REG_OFFSET 0x20

// Register write enable for software controllabe resets.
#define RSTMGR_SW_RST_REGEN_EN_FIELD_WIDTH 1
#define RSTMGR_SW_RST_REGEN_EN_FIELDS_PER_REG 32
#define RSTMGR_SW_RST_REGEN_MULTIREG_COUNT 1

// Register write enable for software controllabe resets.
#define RSTMGR_SW_RST_REGEN_REG_OFFSET 0x24
#define RSTMGR_SW_RST_REGEN_EN_0_BIT 0

// Software controllabe resets.
#define RSTMGR_SW_RST_CTRL_N_VAL_FIELD_WIDTH 1
#define RSTMGR_SW_RST_CTRL_N_VAL_FIELDS_PER_REG 32
#define RSTMGR_SW_RST_CTRL_N_MULTIREG_COUNT 1

// Software controllabe resets.
#define RSTMGR_SW_RST_CTRL_N_REG_OFFSET 0x28
#define RSTMGR_SW_RST_CTRL_N_VAL_0_BIT 0

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _RSTMGR_REG_DEFS_
// End generated register defines for RSTMGR