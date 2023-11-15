#pragma once

#include <stdint.h>
#include "il2cpp-config.h"
#include "il2cpp-class-internals.h"

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace IO
{
#pragma pack(push, 4)
    struct WIN32_FILE_ATTRBIUTE_DATA_MIRROR
    {
        int32_t attributes;
        int64_t creation_time;
        int64_t last_access_time;
        int64_t last_write_time;
        uint32_t length_high;
        uint32_t length_low;
    };
#pragma pack(pop)

    class LIBIL2CPP_CODEGEN_API BrokeredFileSystem
    {
    public:
        static bool CreateDirectory(Il2CppString* path);
        static bool RemoveDirectory(Il2CppString* path);
        static bool GetFileAttributes(Il2CppString* path, WIN32_FILE_ATTRBIUTE_DATA_MIRROR* data);
        static bool SetAttributes(Il2CppString* path, int32_t attributes);
        static void* OpenFile(Il2CppString* path, int32_t desiredAccess, int32_t shareMode, int32_t creationDisposition, int32_t flagsAndAttributes);
        static void CopyFile(Il2CppString* sourcePath, Il2CppString* destinationPath, bool overwrite, int32_t* error);
        static bool MoveFile(Il2CppString* sourcePath, Il2CppString* destinationPath);
        static bool DeleteFile(Il2CppString* path);
        static void* FindFirstFile(Il2CppString* searchPath, Il2CppString** resultFileName, uint32_t* fileAttributes);
        static bool FindNextFile(void* handle, Il2CppString** resultFileName, uint32_t* fileAttributes);
        static void FindHandleClose(void* handle);
    };
} /* namespace IO */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
