/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <libkern/libkern.h>
#include <libkern/lock.h>
#include <mem/vmm/zoner.h>

#define RINGBUFFER_STD_SIZE (16 * KB)

struct __ringbuffer {
    zone_t zone;
    uint32_t start;
    uint32_t end;
};
typedef struct __ringbuffer ringbuffer_t;

ringbuffer_t ringbuffer_create(uint32_t size);
#define ringbuffer_create_std() ringbuffer_create(RINGBUFFER_STD_SIZE)
void ringbuffer_free(ringbuffer_t* buf);

uint32_t ringbuffer_space_to_read(ringbuffer_t* buf);
uint32_t ringbuffer_space_to_read_with_custom_start(ringbuffer_t* buf, uint32_t start);
uint32_t ringbuffer_space_to_write(ringbuffer_t* buf);
uint32_t ringbuffer_read(ringbuffer_t* buf, uint8_t*, uint32_t);
uint32_t ringbuffer_read_with_start(ringbuffer_t* buf, uint32_t start, uint8_t* holder, uint32_t siz);
uint32_t ringbuffer_write(ringbuffer_t* buf, const uint8_t*, uint32_t);
uint32_t ringbuffer_write_ignore_bounds(ringbuffer_t* buf, const uint8_t* holder, uint32_t siz);
uint32_t ringbuffer_read_one(ringbuffer_t* buf, uint8_t* data);
uint32_t ringbuffer_write_one(ringbuffer_t* buf, uint8_t data);
void ringbuffer_clear(ringbuffer_t* buf);