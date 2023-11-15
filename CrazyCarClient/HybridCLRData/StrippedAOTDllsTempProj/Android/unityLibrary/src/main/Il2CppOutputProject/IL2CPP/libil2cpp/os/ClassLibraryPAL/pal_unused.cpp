#include "il2cpp-config.h"
#include "pal_platform.h"
#include "vm/Exception.h"

extern "C"
{
    // Items defined in, but never used by mscorlib
    // We ensure that we implement all System.Native P/Invokes internally so we need implementations, but they don't have to do anything
    IL2CPP_EXPORT void mono_pal_init();
    IL2CPP_EXPORT int32_t SystemNative_FStat2(intptr_t fd, struct FileStatus* output);
    IL2CPP_EXPORT int32_t SystemNative_UTime(const char* path, void* time);
    IL2CPP_EXPORT int32_t GlobalizationNative_GetTimeZoneDisplayName(Il2CppChar* localeName, Il2CppChar* timeZoneId, int32_t type, Il2CppChar* result, int32_t resultLength);
}

void mono_pal_init()
{
}

int32_t SystemNative_FStat2(intptr_t fd, struct FileStatus* output)
{
    IL2CPP_NOT_IMPLEMENTED(SystemNative_FStat2);
    NOT_SUPPORTED_IL2CPP(SystemNative_FStat2, Not implemented);
    return -1;
}

int32_t SystemNative_UTime(const char* path, /* UTimBuf* */ void* time)
{
    IL2CPP_NOT_IMPLEMENTED(SystemNative_UTime);
    NOT_SUPPORTED_IL2CPP(SystemNative_UTime, Not implemented);
    return -1;
}

int32_t GlobalizationNative_GetTimeZoneDisplayName(Il2CppChar* localeName, Il2CppChar* timeZoneId, int32_t type, Il2CppChar* result, int32_t resultLength)
{
    IL2CPP_NOT_IMPLEMENTED(GlobalizationNative_GetTimeZoneDisplayName);
    NOT_SUPPORTED_IL2CPP(GlobalizationNative_GetTimeZoneDisplayName, Not implemented);
    return -1;
}
