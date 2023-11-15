#include "il2cpp-config.h"
#include "NativeMethods.h"
#include "os/NativeMethods.h"
#include "os/Process.h"
#include "vm/Exception.h"

namespace il2cpp
{
namespace icalls
{
namespace System
{
namespace Microsoft
{
namespace Win32
{
    bool NativeMethods::CloseProcess(intptr_t handle)
    {
        return os::NativeMethods::CloseProcess((il2cpp::os::ProcessHandle*)handle);
    }

    bool NativeMethods::GetExitCodeProcess(intptr_t processHandle, int32_t* exitCode)
    {
        auto result = os::NativeMethods::GetExitCodeProcess((il2cpp::os::ProcessHandle*)processHandle, exitCode);
        vm::Exception::RaiseIfError(result.GetError());
        return result.Get();
    }

    bool NativeMethods::GetProcessTimes(intptr_t handle, int64_t* creation, int64_t* exit, int64_t* kernel, int64_t* user)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::SetPriorityClass, "IL2CPP does not support process times");
        return false;
    }

    bool NativeMethods::GetProcessWorkingSetSize(intptr_t handle, intptr_t* min, intptr_t* max)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::SetPriorityClass, "IL2CPP does not support process working set size");
        return false;
    }

    bool NativeMethods::SetPriorityClass(intptr_t handle, int32_t priorityClass)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::SetPriorityClass, "IL2CPP does not support process priority");
        return false;
    }

    bool NativeMethods::SetProcessWorkingSetSize(intptr_t handle, intptr_t min, intptr_t max)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::SetPriorityClass, "IL2CPP does not support process working set size");
        return false;
    }

    bool NativeMethods::TerminateProcess(intptr_t processHandle, int32_t exitCode)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::SetPriorityClass, "IL2CPP does not support process termination");
        return false;
    }

    int32_t NativeMethods::GetCurrentProcessId()
    {
        return os::NativeMethods::GetCurrentProcessId();
    }

    int32_t NativeMethods::GetPriorityClass(intptr_t handle)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::GetPriorityClass, "IL2CPP does not support process priority");
        return 0;
    }

    int32_t NativeMethods::WaitForInputIdle(intptr_t handle, int32_t milliseconds)
    {
        NOT_SUPPORTED_IL2CPP(NativeMethods::GetPriorityClass, "IL2CPP does not support waiting for input idle for a process");
        return 0;
    }

    intptr_t NativeMethods::GetCurrentProcess()
    {
        auto currentProcess = os::NativeMethods::GetCurrentProcess();
        vm::Exception::RaiseIfError(currentProcess.GetError());
        return reinterpret_cast<intptr_t>(currentProcess.Get());
    }
} // namespace Win32
} // namespace Microsoft
} // namespace System
} // namespace icalls
} // namespace il2cpp
