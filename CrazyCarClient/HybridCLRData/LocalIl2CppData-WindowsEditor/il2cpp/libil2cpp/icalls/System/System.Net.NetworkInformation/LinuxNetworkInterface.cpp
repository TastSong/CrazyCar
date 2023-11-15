#include "il2cpp-config.h"
#include "LinuxNetworkInterface.h"
#include "il2cpp-api.h"
#include "vm/AndroidRuntime.h"

namespace il2cpp
{
namespace icalls
{
namespace System
{
namespace System
{
namespace Net
{
namespace NetworkInformation
{
    bool LinuxNetworkInterface::unitydroid_get_network_interface_up_state(Il2CppString* ifName, bool* isUp)
    {
        return vm::AndroidRuntime::GetNetworkInterfaceUpState(ifName, isUp);
    }
} // namespace NetworkInformation
} // namespace Net
} // namespace System
} // namespace System
} // namespace icalls
} // namespace il2cpp
