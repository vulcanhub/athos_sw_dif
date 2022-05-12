// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// #include "runtime/hart.h"
// 
// #include <stdbool.h>
// 
// #include "arch/device.h"
// #include "runtime/ibex.h"


#include "dif/hart.h"

#include <stdbool.h>

#include "dif/device.h"
#include "dif/ibex.h"

extern void wait_for_interrupt(void);

void usleep(uint32_t usec) {
  uint64_t cycles = kClockFreqCpuHz * usec / 1000000;
  uint64_t start = ibex_mcycle_read();
  while ((ibex_mcycle_read() - start) < cycles) {
  }
}

noreturn void abort(void) {
  while (true) {
    wait_for_interrupt();
  }
}
