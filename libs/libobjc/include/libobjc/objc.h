/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <libobjc/helpers.h>
#include <libobjc/runtime.h>

OBJC_EXPORT id _Nullable objc_alloc(Class _Nullable cls);
OBJC_EXPORT id _Nullable objc_alloc_init(Class _Nullable cls);