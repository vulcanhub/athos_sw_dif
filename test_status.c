// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// #include "testing/test_status.h"
// 
// #include "arch/device.h"
// #include "base/mmio.h"
// #include "runtime/hart.h"
// #include "runtime/log.h"

#include "dif/test_status.h"

#include "dif/device.h"
#include "base/mmio.h"
#include "dif/hart.h"
#include "dif/log.h"

/**
 * Writes the test status to the test status device address.
 *
 * @param test_status current status of the test.
 */
static void test_status_device_write(test_status_t test_status) {
  if (kDeviceTestStatusAddress != 0) {
    mmio_region_t test_status_device_addr =
        mmio_region_from_addr(kDeviceTestStatusAddress);
    mmio_region_write32(test_status_device_addr, 0x0, (uint32_t)test_status);
  }
}

void test_status_set(test_status_t test_status) {
  switch (test_status) {
    case kTestStatusPassed: {
      LOG_INFO("PASS!");
      test_status_device_write(test_status);
      abort();
      break;
    }
    case kTestStatusFailed: {
      LOG_INFO("FAIL!");
      test_status_device_write(test_status);
      abort();
      break;
    }
    default: {
      test_status_device_write(test_status);
      break;
    }
  }
}
