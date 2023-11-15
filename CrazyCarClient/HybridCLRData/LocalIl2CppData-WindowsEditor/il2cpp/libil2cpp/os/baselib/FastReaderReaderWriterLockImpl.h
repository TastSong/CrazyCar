#pragma once

#include "il2cpp-config.h"

#if IL2CPP_USE_BASELIB_FAST_READER_RWL

#include "Baselib.h"
#include "Cpp/Lock.h"

namespace il2cpp
{
namespace os
{
    // This FastReaderReaderWriterLockImpl uses the baselib non-recursive lock
    // There is no reader writer lock in baselib and this the fastest baselib lock (on some platforms....)
    class FastReaderReaderWriterLockImpl
    {
    public:

        void LockExclusive()
        {
            m_Lock.Acquire();
        }

        void LockShared()
        {
            m_Lock.Acquire();
        }

        void ReleaseExclusive()
        {
            m_Lock.Release();
        }

        void ReleaseShared()
        {
            m_Lock.Release();
        }

    private:
        baselib::Lock m_Lock;
    };
}
}

#endif
