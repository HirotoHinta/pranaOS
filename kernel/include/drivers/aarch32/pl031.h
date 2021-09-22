/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <drivers/driver_manager.h>
#include <libkern/mask.h>
#include <libkern/types.h>
#include <platform/aarch32/interrupts.h>
#include <platform/aarch32/target/cortex-a15/device_settings.h>

struct pl031_registers {
    uint32_t data;
    uint32_t match;
    uint32_t load;
    uint32_t control;
    // TO BE CONTINUED
};
typedef struct pl031_registers pl031_registers_t;

void pl031_install();
uint32_t pl031_read_rtc();