#include "il2cpp-config.h"
#include "os/FastReaderReaderWriterLock.h"

#if IL2CPP_SUPPORT_THREADS

#if IL2CPP_USE_BASELIB_FAST_READER_RWL
#include "os/baselib/FastReaderReaderWriterLockImpl.h"
#elif IL2CPP_THREADS_WIN32
#include "os/Win32/FastReaderReaderWriterLockImpl.h"
#elif IL2CPP_THREADS_PTHREAD
#include "os/Posix/FastReaderReaderWriterLockImpl.h"
#else
#include "os/FastReaderReaderWriterLockImpl.h"
#endif

namespace il2cpp
{
namespace os
{
    FastReaderReaderWriterLock::FastReaderReaderWriterLock()
        : m_Impl(new FastReaderReaderWriterLockImpl())
    {
    }

    FastReaderReaderWriterLock::~FastReaderReaderWriterLock()
    {
        delete m_Impl;
    }

    void FastReaderReaderWriterLock::LockExclusive()
    {
        m_Impl->LockExclusive();
    }

    void FastReaderReaderWriterLock::LockShared()
    {
        m_Impl->LockShared();
    }

    void FastReaderReaderWriterLock::ReleaseExclusive()
    {
        m_Impl->ReleaseExclusive();
    }

    void FastReaderReaderWriterLock::ReleaseShared()
    {
        m_Impl->ReleaseShared();
    }

    FastReaderReaderWriterLockImpl* FastReaderReaderWriterLock::GetImpl()
    {
        return m_Impl;
    }
}
}

#else

#include <stddef.h>

namespace il2cpp
{
namespace os
{
    FastReaderReaderWriterLock::FastReaderReaderWriterLock()
    {
    }

    FastReaderReaderWriterLock::~FastReaderReaderWriterLock()
    {
    }

    void FastReaderReaderWriterLock::LockExclusive()
    {
    }

    void FastReaderReaderWriterLock::LockShared()
    {
    }

    void FastReaderReaderWriterLock::ReleaseExclusive()
    {
    }

    void FastReaderReaderWriterLock::ReleaseShared()
    {
    }

    FastReaderReaderWriterLockImpl* FastReaderReaderWriterLock::GetImpl()
    {
        IL2CPP_ASSERT(0 && "Threads are not enabled for this platform.");
        return NULL;
    }
}
}

#endif
