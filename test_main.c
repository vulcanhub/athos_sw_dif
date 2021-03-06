// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// Copyright (C) May 2022, Belmont Computing, Inc. -- All Rights Reserved
// Licensed under the BCI License. See LICENSE for details.

#include "dif/test_main.h"

#include "dif/device.h"
#include "dif/dif_uart.h"
#include "dif/log.h"
#include "dif/print.h"
#include "dif/check.h"
#include "dif/test_coverage.h"
#include "dif/test_status.h"

#include "top/sw/autogen/top_athos.h"  // Generated.



static dif_uart_t uart0;
static void init_uart(void) {
  CHECK(
      dif_uart_init(
          (dif_uart_params_t){
              .base_addr = mmio_region_from_addr(TOP_ATHOS_UART0_BASE_ADDR),
          },
          &uart0) == kDifUartOk,
      "failed to init UART");
  CHECK(dif_uart_configure(&uart0,
                           (dif_uart_config_t){
                               .baudrate = kUartBaudrate,
                               .clk_freq_hz = kClockFreqPeripheralHz,
                               .parity_enable = kDifUartToggleDisabled,
                               .parity = kDifUartParityEven,
                           }) == kDifUartConfigOk,
        "failed to configure UART");
  base_uart_stdout(&uart0);
}

int main(int argc, char **argv) {
  test_status_set(kTestStatusInTest);

  // Initialize the UART to enable logging for non-DV simulation platforms.
  if (kDeviceType != kDeviceSimDV) {
    init_uart();
  }

  // Run the SW test which is fully contained within `test_main()`.
  bool result = test_main();

  // Must happen before any debug output.
  if (kTestConfig.can_clobber_uart) {
    init_uart();
  }

  test_coverage_send_buffer();
  test_status_set(result ? kTestStatusPassed : kTestStatusFailed);

  // Unreachable code.
  return 1;
}
