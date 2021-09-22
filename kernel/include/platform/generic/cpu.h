/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <drivers/generic/fpu.h>
#include <libkern/types.h>
#include <mem/vmm/vmm.h>
#include <mem/vmm/zoner.h>
#include <platform/generic/tasking/context.h>
#include <tasking/bits/sched.h>

#define CPU_CNT 4
#define THIS_CPU (&cpus[system_cpu_id()])
#define FPU_ENABLED

struct thread;
typedef int cpu_state_t;
enum CPU_STATE {
    CPU_IN_KERNEL,
    CPU_IN_USERLAND,
};

typedef struct {
    int id;
    int int_depth_counter;

    pdirectory_t* pdir;
    zone_t sched_stack_zone;
    context_t* sched_context; // context of sched's registers
    struct thread* running_thread;
    cpu_state_t current_state;
    struct thread* idle_thread;

    sched_data_t sched;

    /* Stat */
    time_t stat_ticks_since_boot;
    time_t stat_system_and_idle_ticks;
    time_t stat_user_ticks;

#ifdef FPU_ENABLED
    // Information about current state of fpu.
    struct thread* fpu_for_thread;
    pid_t fpu_for_pid;
#endif // FPU_ENABLED
} cpu_t;

extern cpu_t cpus[CPU_CNT];