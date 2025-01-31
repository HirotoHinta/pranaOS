#pragma once

#define UTSNAME_LENGTH 65

#define UTSNAME_DOMAIN_LENGTH UTSNAME_LENGTH

#ifndef UTSNAME_SYSNAME_LENGTH
#define UTSNAME_SYSNAME_LENGTH UTSNAME_LENGTH
#endif
#ifndef UTSNAME_NODENAME_LENGTH
#define UTSNAME_NODENAME_LENGTH UTSNAME_LENGTH
#endif
#ifndef UTSNAME_RELEASE_LENGTH
#define UTSNAME_RELEASE_LENGTH UTSNAME_LENGTH
#endif
#ifndef UTSNAME_VERSION_LENGTH
#define UTSNAME_VERSION_LENGTH UTSNAME_LENGTH
#endif
#ifndef UTSNAME_MACHINE_LENGTH
#define UTSNAME_MACHINE_LENGTH UTSNAME_LENGTH
#endif

/**
 * @brief utsname[]
 * 
 */
struct utsname
{
	char sysname[UTSNAME_SYSNAME_LENGTH];
	char nodename[UTSNAME_NODENAME_LENGTH];
	char release[UTSNAME_RELEASE_LENGTH];
	char version[UTSNAME_VERSION_LENGTH];
	char machine[UTSNAME_MACHINE_LENGTH];
	char domainname[UTSNAME_DOMAIN_LENGTH];
};