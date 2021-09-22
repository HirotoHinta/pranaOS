/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <libkern/types.h>
#include <platform/x86/idt.h>

#define PIT_BASE_FREQ 1193180
#define TIMER_TICKS_PER_SECOND 125

void pit_setup();
void pit_handler();