#include "il2cpp-config.h"

#if !IL2CPP_SUPPORTS_BROKERED_FILESYSTEM

#include "os/BrokeredFileSystem.h"

namespace il2cpp
{
namespace os
{
    int BrokeredFileSystem::CreateDirectoryW(const UTF16String& path)
    {
        return os::kErrorCodeAccessDenied;
    }

    int BrokeredFileSystem::RemoveDirectoryW(const UTF16String& path)
    {
        return os::kErrorCodeAccessDenied;
    }

    std::set<std::string> BrokeredFileSystem::GetFileSystemEntries(const UTF16String& path, const UTF16String& pathWithPattern, int32_t attributes, int32_t attributeMask, int* error)
    {
        *error = os::kErrorCodeAccessDenied;
        return std::set<std::string>();
    }

    os::ErrorCode BrokeredFileSystem::FindFirstFileW(Directory::FindHandle* findHandle, const utils::StringView<Il2CppNativeChar>& searchPathWithPattern, Il2CppNativeString* resultFileName, int32_t* resultAttributes)
    {
        return os::kErrorCodeAccessDenied;
    }

    os::ErrorCode BrokeredFileSystem::FindNextFileW(Directory::FindHandle* findHandle, Il2CppNativeString* resultFileName, int32_t* resultAttributes)
    {
        return os::kErrorCodeAccessDenied;
    }

    os::ErrorCode BrokeredFileSystem::FindClose(void* osHandle)
    {
        return os::kErrorCodeAccessDenied;
    }

    bool BrokeredFileSystem::CopyFileW(const UTF16String& source, const UTF16String& destination, bool overwrite, int* error)
    {
        *error = os::kErrorCodeAccessDenied;
        return false;
    }

    bool BrokeredFileSystem::MoveFileW(const UTF16String& source, const UTF16String& destination, int* error)
    {
        *error = os::kErrorCodeAccessDenied;
        return false;
    }

    int BrokeredFileSystem::DeleteFileW(const UTF16String& path)
    {
        return os::kErrorCodeAccessDenied;
    }

    UnityPalFileAttributes BrokeredFileSystem::GetFileAttributesW(const UTF16String& path, int* error)
    {
        *error = os::kErrorCodeAccessDenied;
        return kFileAttributeReadOnly;
    }

    bool BrokeredFileSystem::SetFileAttributesW(const UTF16String& path, UnityPalFileAttributes attributes, int* error)
    {
        return false;
    }

    bool BrokeredFileSystem::GetFileStat(const std::string& utf8Path, const UTF16String& path, FileStat* stat, int* error)
    {
        return false;
    }

    FileHandle* BrokeredFileSystem::Open(const UTF16String& path, uint32_t desiredAccess, uint32_t shareMode, uint32_t creationDisposition, uint32_t flagsAndAttributes, int* error)
    {
        *error = os::kErrorCodeAccessDenied;
        return NULL;
    }

    void BrokeredFileSystem::CleanupStatics()
    {
    }
}
}

#endif // !IL2CPP_SUPPORTS_BROKERED_FILESYSTEM
