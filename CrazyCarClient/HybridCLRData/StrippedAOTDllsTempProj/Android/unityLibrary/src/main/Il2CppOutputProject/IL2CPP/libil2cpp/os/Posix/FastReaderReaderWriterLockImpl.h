#pragma once

#include "il2cpp-config.h"

#if IL2CPP_THREADS_PTHREAD && IL2CPP_SUPPORT_THREADS

#include <pthread.h>
#include "MutexImpl.h"

namespace il2cpp
{
namespace os
{
    // The pthread reader writer lock takes a lock to update its state on lock and unlock
    // So if you're read case time is on the order of taking a lock, then it's faster
    // to just use a non-recursive mutex
    class FastReaderReaderWriterLockImpl
    {
    public:

        FastReaderReaderWriterLockImpl()
        {
            pthread_mutex_init(&m_Mutex, NULL);
        }

        ~FastReaderReaderWriterLockImpl()
        {
            pthread_mutex_destroy(&m_Mutex);
        }

        void LockExclusive()
        {
            pthread_mutex_lock(&m_Mutex);
        }

        void LockShared()
        {
            pthread_mutex_lock(&m_Mutex);
        }

        void ReleaseExclusive()
        {
            pthread_mutex_unlock(&m_Mutex);
        }

        void ReleaseShared()
        {
            pthread_mutex_unlock(&m_Mutex);
        }

        pthread_mutex_t* GetOSHandle()
        {
            return &m_Mutex;
        }

    private:
        pthread_mutex_t m_Mutex;
    };
}
}

#endif
