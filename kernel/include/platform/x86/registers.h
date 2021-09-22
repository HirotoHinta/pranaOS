/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <libkern/types.h>

uint32_t read_cr2();
uint32_t read_cr3();
uint32_t read_esp();
extern uint32_t read_eip();

static inline uint32_t read_ebp()
{
    uint32_t val;
    asm volatile("movl %%ebp,%0"
                 : "=r"(val));
    return val;
}

static inline uint32_t read_cr0()
{
    uint32_t val;
    asm volatile("movl %%cr0, %0"
                 : "=r"(val));
    return val;
}

static inline void write_cr0(uint32_t val)
{
    asm volatile("movl %0, %%cr0"
                 :
                 : "r"(val));
}