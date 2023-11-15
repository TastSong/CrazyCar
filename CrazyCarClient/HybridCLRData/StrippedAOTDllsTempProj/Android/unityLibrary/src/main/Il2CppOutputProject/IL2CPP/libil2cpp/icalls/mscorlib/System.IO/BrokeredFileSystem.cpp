#include "il2cpp-object-internals.h"
#include "gc/GarbageCollector.h"
#include "icalls/mscorlib/System.IO/BrokeredFileSystem.h"
#include "os/BrokeredFileSystem.h"
#include "os/Directory.h"
#include "os/ErrorCodes.h"
#include "vm/LastError.h"
#include "vm/String.h"
#include "utils/Memory.h"
#include "utils/StringUtils.h"

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
    bool BrokeredFileSystem::CreateDirectory(Il2CppString* path)
    {
        auto status = os::BrokeredFileSystem::CreateDirectoryW(path->chars);
        vm::LastError::SetLastError(status);
        if (status != os::kErrorCodeSuccess)
            return false;

        return true;
    }

    bool BrokeredFileSystem::RemoveDirectory(Il2CppString* path)
    {
        auto status = os::BrokeredFileSystem::RemoveDirectoryW(path->chars);
        vm::LastError::SetLastError(status);
        if (status != os::kErrorCodeSuccess)
            return false;

        return true;
    }

    bool BrokeredFileSystem::GetFileAttributes(Il2CppString* path, WIN32_FILE_ATTRBIUTE_DATA_MIRROR* data)
    {
        os::FileStat stat;
        int32_t error = 0;
        os::BrokeredFileSystem::GetFileStat(il2cpp::utils::StringUtils::Utf16ToUtf8(path->chars), path->chars, &stat, &error);
        data->attributes = stat.attributes;
        data->creation_time = stat.creation_time;
        data->last_access_time = stat.last_access_time;
        data->last_write_time = stat.last_write_time;
        data->length_high = (uint32_t)(stat.length >> 32);
        data->length_low = (uint32_t)stat.length;

        vm::LastError::SetLastError(error);
        if (error != os::kErrorCodeSuccess)
            return false;

        return true;
    }

    bool BrokeredFileSystem::SetAttributes(Il2CppString* path, int32_t attributes)
    {
        int error = os::kErrorCodeSuccess;
        auto result = os::BrokeredFileSystem::SetFileAttributesW(path->chars, (UnityPalFileAttributes)attributes, &error);
        vm::LastError::SetLastError(error);
        return result;
    }

    void* BrokeredFileSystem::OpenFile(Il2CppString* path, int32_t desiredAccess, int32_t shareMode, int32_t creationDisposition, int32_t flagsAndAttributes)
    {
        int error = os::kErrorCodeSuccess;
        auto result = os::File::Open(il2cpp::utils::StringUtils::Utf16ToUtf8(path->chars), creationDisposition, desiredAccess, shareMode, flagsAndAttributes, &error);
        vm::LastError::SetLastError(error);
        return result;
    }

    void BrokeredFileSystem::CopyFile(Il2CppString* sourcePath, Il2CppString* destinationPath, bool overwrite, int32_t* error)
    {
        *error = os::kErrorCodeSuccess;
        os::BrokeredFileSystem::CopyFileW(sourcePath->chars, destinationPath->chars, overwrite, error);
    }

    bool BrokeredFileSystem::MoveFile(Il2CppString* sourcePath, Il2CppString* destinationPath)
    {
        int error = os::kErrorCodeSuccess;
        auto result = os::BrokeredFileSystem::MoveFileW(sourcePath->chars, destinationPath->chars, &error);
        vm::LastError::SetLastError(error);
        return result;
    }

    bool BrokeredFileSystem::DeleteFile(Il2CppString* path)
    {
        int32_t status = os::BrokeredFileSystem::DeleteFileW(path->chars);
        vm::LastError::SetLastError(status);
        if (status != os::kErrorCodeSuccess)
            return false;
        return true;
    }

    void* BrokeredFileSystem::FindFirstFile(Il2CppString* searchPath, Il2CppString** resultFileName, uint32_t* fileAttributes)
    {
        DECLARE_IL2CPP_CHAR_PTR_AS_STRING_VIEW_OF_NATIVE_CHARS(searchPathNative, searchPath->chars);

        Il2CppNativeString resultFileNameNative;

        os::Directory::FindHandle* findHandle = new(utils::Memory::Malloc(sizeof(os::Directory::FindHandle))) os::Directory::FindHandle(searchPathNative);
        int error = os::BrokeredFileSystem::FindFirstFileW(findHandle, searchPathNative, &resultFileNameNative, (int32_t*)fileAttributes);
        vm::LastError::SetLastError(error);

        DECLARE_NATIVE_STRING_AS_STRING_VIEW_OF_IL2CPP_CHARS(resultFileNameNativeUtf16, resultFileNameNative);
        *resultFileName = vm::String::NewUtf16(resultFileNameNativeUtf16);
        gc::GarbageCollector::SetWriteBarrier((void**)resultFileName);

        return findHandle;
    }

    bool BrokeredFileSystem::FindNextFile(void* handle, Il2CppString** resultFileName, uint32_t* fileAttributes)
    {
        Il2CppNativeString resultFileNameNative;
        auto status = os::BrokeredFileSystem::FindNextFileW((os::Directory::FindHandle*)handle, &resultFileNameNative, (int32_t*)fileAttributes);

        DECLARE_NATIVE_STRING_AS_STRING_VIEW_OF_IL2CPP_CHARS(resultFileNameNativeUtf16, resultFileNameNative);
        *resultFileName = vm::String::NewUtf16(resultFileNameNativeUtf16);
        gc::GarbageCollector::SetWriteBarrier((void**)resultFileName);

        vm::LastError::SetLastError(status);
        if (status != os::kErrorCodeSuccess)
            return false;
        return true;
    }

    void BrokeredFileSystem::FindHandleClose(void* findHandle)
    {
        os::BrokeredFileSystem::FindClose(((os::Directory::FindHandle*)findHandle)->osHandle);
        utils::Memory::Free(findHandle);
    }
} /* namespace IO */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
