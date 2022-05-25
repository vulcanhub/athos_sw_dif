// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Copyright (C) May 2022, Belmont Computing, Inc. -- All Rights Reserved
// Licensed under the BCI License. See LICENSE for details.

#include "dif/irq.h"

#include "base/csr.h"

static const uint32_t IRQ_EXT_ENABLE_OFFSET = 11;
static const uint32_t IRQ_TIMER_ENABLE_OFFSET = 7;
static const uint32_t IRQ_SW_ENABLE_OFFSET = 3;

void irq_set_vector_offset(uintptr_t address) {
  CSR_WRITE(CSR_REG_MTVEC, (uint32_t)address);
}

void irq_global_ctrl(bool en) {
  if (en) {
    CSR_SET_BITS(CSR_REG_MSTATUS, 0x8);
  } else {
    CSR_CLEAR_BITS(CSR_REG_MSTATUS, 0x8);
  }
}

void irq_external_ctrl(bool en) {
  const uint32_t mask = 1 << IRQ_EXT_ENABLE_OFFSET;
  if (en) {
    CSR_SET_BITS(CSR_REG_MIE, mask);
  } else {
    CSR_CLEAR_BITS(CSR_REG_MIE, mask);
  }
}

void irq_timer_ctrl(bool en) {
  const uint32_t mask = 1 << IRQ_TIMER_ENABLE_OFFSET;
  if (en) {
    CSR_SET_BITS(CSR_REG_MIE, mask);
  } else {
    CSR_CLEAR_BITS(CSR_REG_MIE, mask);
  }
}

void irq_software_ctrl(bool en) {
  const uint32_t mask = 1 << IRQ_SW_ENABLE_OFFSET;
  if (en) {
    CSR_SET_BITS(CSR_REG_MIE, mask);
  } else {
    CSR_CLEAR_BITS(CSR_REG_MIE, mask);
  }
}
