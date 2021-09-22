/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <libkern/types.h>

uint8_t port_byte_in(uint16_t port);
void port_byte_out(uint16_t port, uint8_t data);
uint16_t port_word_in(uint16_t port);
void port_word_out(uint16_t port, uint16_t data);
uint32_t port_dword_in(uint16_t port);
void port_dword_out(uint16_t port, uint32_t data);
uint8_t port_8bit_in(uint16_t port);
void port_8bit_out(uint16_t port, uint8_t data);
uint16_t port_16bit_in(uint16_t port);
void port_16bit_out(uint16_t port, uint16_t data);
uint32_t port_32bit_in(uint16_t port);
void port_32bit_out(uint16_t port, uint32_t data);
void io_wait();