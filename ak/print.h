/*
 * Copyright (c) 2021 - 2022, the pranaOS Developers & Krisna Pranav
 *
 * SPDX-License-Identifier: GPL-3.0 License
 */

#pragma once

#include "types.h"
#include "convert.h"
#include <kernel/console.h>

namespace ak {
    class Print {
    public:
        static void printfHex(uint8_t key);
        static void printfHex16(uint16_t key);
        static void printfHex32(uint32_t key);
        static void printbits(uint8_t key);
        static void printbits(uint16_t key);
        static void printbits(uint32_t key);
        static void printbits(uint64_t key);
    };
}