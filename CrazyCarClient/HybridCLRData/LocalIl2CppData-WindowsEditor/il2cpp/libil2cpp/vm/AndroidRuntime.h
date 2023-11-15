#pragma once

#include "il2cpp-config.h"

namespace il2cpp
{
namespace vm
{
    class LIBIL2CPP_CODEGEN_API AndroidRuntime
    {
    public:
        static void SetNetworkUpStateFunc(Il2CppAndroidUpStateFunc func);
        static bool GetNetworkInterfaceUpState(Il2CppString* ifName, bool* isUp);
    };
} /* namespace vm */
} /* namespace il2cpp */
