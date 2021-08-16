/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
*/

#pragma once

// includes
#include <base/StringView.h>

namespace ELF {

constexpr u32 compute_sysv_hash(const StringView& name)
{    
    u32 hash = 0;

    for (auto ch : name) {
        hash = hash << 4;
        hash += ch;

        const u32 top_nibble_of_hash = hash & 0xf0000000u;
        hash ^= top_nibble_of_hash >> 24;
        hash &= ~top_nibble_of_hash;
    }

    return hash;
}

constexpr u32 compute_gnu_hash(const StringView& name)
{

    u32 hash = 5381;

    for (auto ch : name)
        hash = hash * 33 + ch;

    return hash;
}

}
