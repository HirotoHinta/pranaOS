/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

/**
 * !!! ALERT !!!
 *  
 * After each push, your result pointers, you have got from get() could be broken!
 * For now, it's better to avoid using of dynamic array!
 * Need to be fixed.
 */

#pragma once

#include <libkern/types.h>

struct dynamic_array {
    void* data;
    uint32_t capacity; /* current allocated memory */
    uint32_t size; /* number of elements in vector */
    uint32_t element_size; /* size of elements in bytes */
};
typedef struct dynamic_array dynamic_array_t;

int dynamic_array_init(dynamic_array_t* v, uint32_t element_size);
int dynamic_array_init_of_size(dynamic_array_t* v, uint32_t element_size, uint32_t capacity);
int dynamic_array_free(dynamic_array_t* v);

void* dynamic_array_get(dynamic_array_t* v, int index);
int dynamic_array_push(dynamic_array_t* v, void* element);
int dynamic_array_pop(dynamic_array_t* v);
int dynamic_array_clear(dynamic_array_t* v);