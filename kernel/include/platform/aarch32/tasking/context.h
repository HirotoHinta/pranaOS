/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <libkern/c_attrs.h>
#include <libkern/types.h>

typedef struct {
    uint32_t r[9];
    uint32_t lr;
} PACKED context_t;

static inline uint32_t context_get_instruction_pointer(context_t* ctx)
{
    return ctx->lr;
}

static inline void context_set_instruction_pointer(context_t* ctx, uint32_t ip)
{
    ctx->lr = ip;
}