#include "AndroidRuntime.h"
#include "il2cpp-config.h"
#include "utils/StringUtils.h"

namespace il2cpp
{
namespace vm
{
    static Il2CppAndroidUpStateFunc s_func = NULL;

    void AndroidRuntime::SetNetworkUpStateFunc(Il2CppAndroidUpStateFunc func)
    {
        s_func = func;
    }

    bool AndroidRuntime::GetNetworkInterfaceUpState(Il2CppString* ifName, bool* isUp)
    {
        if (s_func)
        {
            std::string name = utils::StringUtils::Utf16ToUtf8(utils::StringUtils::GetChars(ifName));
            return s_func(name.c_str(), (uint8_t*)isUp);
        }
        return false;
    }
}
}
