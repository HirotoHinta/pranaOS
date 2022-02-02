#pragma once

#include <sys/cdefs.h>

namespace LibC {
    typedef unsigned int dev_t;
    typedef unsigned short umode_t;

    typedef long long loff_t;
    typedef long off_t;
    typedef unsigned long long ino_t;
    typedef unsigned int mode_t;
    typedef unsigned long ssize_t;
    typedef unsigned long sector_t;

    /**
     * @brief pid, tid, uid, gid, sid
     * 
     */
    typedef int pid_t;
    typedef int tid_t;
    typedef int uid_t;
    typedef int gid_t;
    typedef int sid_t;

    typedef unsigned int sigset_t;
    typedef int idtype_t;
    typedef int id_t;
    typedef int clockid_t;
    typedef long long clock_t;
    typedef int fpos_t;
    typedef unsigned int nlink_t;
    typedef int blksize_t;
    typedef int blkcnt_t;
    typedef unsigned int uint;
    typedef int seconds_t;
    typedef unsigned int useconds_t;

    typedef unsigned char u_char;
    typedef unsigned short u_short;
    typedef unsigned int u_int;
    typedef unsigned long u_long;
}