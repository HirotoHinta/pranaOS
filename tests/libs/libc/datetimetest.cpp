#include <libc/datetime.h>
#include <libc/syscall.h>

using namespace Time;
using namespace Syscall;

Time dateTime::current() {
    Time result;
    doSyscall(SYSCALL_GET_DATETIME, (uint8_t)&result);
    return result;
}