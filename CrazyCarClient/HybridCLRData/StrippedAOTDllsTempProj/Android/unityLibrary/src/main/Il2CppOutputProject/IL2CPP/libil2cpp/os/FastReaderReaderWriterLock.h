#pragma once
#include "utils/NonCopyable.h"

namespace il2cpp
{
namespace os
{
    class FastReaderReaderWriterLockImpl;

    // Use this class if the work done in the shared lock is "fast" - on the order of taking a lock
    class FastReaderReaderWriterLock
    {
    public:
        FastReaderReaderWriterLock();
        ~FastReaderReaderWriterLock();

        void LockExclusive();
        void LockShared();
        void ReleaseExclusive();
        void ReleaseShared();

        FastReaderReaderWriterLockImpl* GetImpl();

    private:
        FastReaderReaderWriterLockImpl* m_Impl;
    };

    struct FastReaderReaderWriterAutoSharedLock : public il2cpp::utils::NonCopyable
    {
        FastReaderReaderWriterAutoSharedLock(FastReaderReaderWriterLock* lock)
            : m_Lock(lock)
        {
            m_Lock->LockShared();
        }

        ~FastReaderReaderWriterAutoSharedLock()
        {
            m_Lock->ReleaseShared();
        }

    private:
        FastReaderReaderWriterLock* m_Lock;
    };

    struct FastReaderReaderWriterAutoExclusiveLock : public il2cpp::utils::NonCopyable
    {
        FastReaderReaderWriterAutoExclusiveLock(FastReaderReaderWriterLock* lock)
            : m_Lock(lock)
        {
            m_Lock->LockExclusive();
        }

        ~FastReaderReaderWriterAutoExclusiveLock()
        {
            m_Lock->ReleaseExclusive();
        }

    private:
        FastReaderReaderWriterLock* m_Lock;
    };
}
}
