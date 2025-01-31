/*
 * Copyright (c) 2021 - 2022, the pranaOS Developers & Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <kernel/interruptservice.h>

/**
 * @brief timer functionality
 * 
 */
void timerCallback();
uint32_t timerGetTick();
float timerGetTime();
void timerRegisterCallback(handler_t handler);

/**
 * @brief set timer freq.
 * 
 */
#define TIMERFREQ 50
#define TIMER_QUOTIENT 1193180
#define PIT_0 0x40
#define PIT_1 0x41
#define PIT_2 0x42
#define PIT_CMD 0x43
#define PIT_SET 0x36

void init_timer();