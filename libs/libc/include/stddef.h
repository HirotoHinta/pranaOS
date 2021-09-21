/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
*/

#pragma once

// includes
#include <sys/cdefs.h>
#include <sys/types.h>

__BEGIN_DECLS

#ifdef __i386__
#if defined(__clang__)
typedef unsigned int size_t;
typedef int ssize_t;
typedef int ptrdiff_t;
#elif defined(__GNUC__) || defined(__GNUG__)
typedef unsigned long size_t;
typedef long ssize_t;
typedef long ptrdiff_t;
#endif
#elif __arm__
typedef unsigned int size_t;
typedef int ssize_t;
typedef int ptrdiff_t;
#endif

#define NULL ((void*)0)

__END_DECLS