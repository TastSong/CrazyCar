#pragma once
#include "utils/NonCopyable.h"

namespace il2cpp
{
namespace os
{
    class ReaderWriterLockImpl;

    class ReaderWriterLock
    {
    public:
        ReaderWriterLock();
        ~ReaderWriterLock();

        void LockExclusive();
        void LockShared();
        void ReleaseExclusive();
        void ReleaseShared();

        ReaderWriterLockImpl* GetImpl();

    private:
        ReaderWriterLockImpl* m_Impl;
    };

    struct ReaderWriterAutoSharedLock : public il2cpp::utils::NonCopyable
    {
        ReaderWriterAutoSharedLock(ReaderWriterLock* lock)
            : m_Lock(lock)
        {
            m_Lock->LockShared();
        }

        ~ReaderWriterAutoSharedLock()
        {
            m_Lock->ReleaseShared();
        }

    private:
        ReaderWriterLock* m_Lock;
    };

    struct ReaderWriterAutoExclusiveLock : public il2cpp::utils::NonCopyable
    {
        ReaderWriterAutoExclusiveLock(ReaderWriterLock* lock)
            : m_Lock(lock)
        {
            m_Lock->LockExclusive();
        }

        ~ReaderWriterAutoExclusiveLock()
        {
            m_Lock->ReleaseExclusive();
        }

    private:
        ReaderWriterLock* m_Lock;
    };
}
}
