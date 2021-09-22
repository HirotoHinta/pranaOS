#pragma once

#include <libkern/types.h>

void* memset(void* dest, uint8_t fll, uint32_t nbytes);
void* memcpy(void* dest, const void* src, uint32_t nbytes);
void* memccpy(void* dest, const void* src, uint8_t stop, uint32_t nbytes);
void* memmove(void* dest, const void* src, uint32_t nbytes);
int memcmp(const void* src1, const void* src2, uint32_t nbytes);

char* kmem_bring_to_kernel(const char* data, uint32_t size);
char** kmem_bring_to_kernel_ptrarr(const char** data, uint32_t size);