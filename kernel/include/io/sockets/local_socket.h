/*
 * Copyright (c) 2021, Krisna Pranav
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <io/sockets/socket.h>

int local_socket_create(int type, int protocol, file_descriptor_t* fd);
bool local_socket_can_read(dentry_t* dentry, uint32_t start);
int local_socket_read(dentry_t* dentry, uint8_t* buf, uint32_t start, uint32_t len);
bool local_socket_can_write(dentry_t* dentry, uint32_t start);
int local_socket_write(dentry_t* dentry, uint8_t* buf, uint32_t start, uint32_t len);

int local_socket_bind(file_descriptor_t* sock, char* name, uint32_t len);
int local_socket_connect(file_descriptor_t* sock, char* name, uint32_t len);
