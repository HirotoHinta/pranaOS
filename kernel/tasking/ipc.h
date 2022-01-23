//
// Created by KrisnaPranav on 23/01/22.
//

#pragma once

#include <kernel/cpu/register.h>
#include "process.h"

namespace Kernel {
    struct ipcReceiveDescriptor {
        Process* receivingProcess;
        Thread* receivingThread;
        int receiveFromPID;
        int receiveType;
    };

    class ipcManager {

    };
}