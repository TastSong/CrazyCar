#pragma once

#include "utils/Expected.h"

#include <stdint.h>
#include <string>

namespace il2cpp
{
namespace os
{
    struct ProcessHandle;

    class Process
    {
    public:
        static int GetCurrentProcessId();
        static utils::Expected<ProcessHandle*> GetProcess(int processId);
        static void FreeProcess(ProcessHandle* handle);
        static utils::Expected<std::string> GetProcessName(ProcessHandle* handle);
        static intptr_t GetMainWindowHandle(int32_t pid);
    };
}
}
