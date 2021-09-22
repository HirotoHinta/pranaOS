/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <drivers/driver_manager.h>
#include <drivers/x86/display.h>
#include <libkern/types.h>
#include <mem/kmalloc.h>
#include <platform/x86/port.h>

typedef struct { // LBA28 | LBA48
    uint32_t data; // 16bit | 16 bits
    uint32_t error; // 8 bit | 16 bits
    uint32_t sector_count; // 8 bit | 16 bits
    uint32_t lba_lo; // 8 bit | 16 bits
    uint32_t lba_mid; // 8 bit | 16 bits
    uint32_t lba_hi; // 8 bit | 16 bits
    uint32_t device; // 8 bit
    uint32_t command; // 8 bit
    uint32_t control;
} ata_ports_t;

typedef struct {
    ata_ports_t port;
    bool is_master;
    uint16_t cylindres;
    uint16_t heads;
    uint16_t sectors;
    bool dma;
    bool lba;
    uint32_t capacity; // in sectors
} ata_t;

extern ata_t _ata_drives[MAX_DEVICES_COUNT];

void ata_add_new_device(device_t* t_new_device);

void ata_install();
void ata_init(ata_t* ata, uint32_t port, bool is_master);
bool ata_indentify(ata_t* ata);