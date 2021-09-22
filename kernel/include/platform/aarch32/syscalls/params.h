/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <platform/aarch32/tasking/trapframe.h>

#define sys_id (tf->r[7])
#define param1 (tf->r[0])
#define param2 (tf->r[1])
#define param3 (tf->r[2])
#define param4 (tf->r[3])
#define param5 (tf->r[4])
#define return_val (tf->r[0])
#define return_with_val(val) \
    (return_val = val);      \
    return
