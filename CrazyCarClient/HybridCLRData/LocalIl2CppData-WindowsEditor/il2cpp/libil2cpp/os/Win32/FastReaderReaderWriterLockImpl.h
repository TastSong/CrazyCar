#pragma once

#if IL2CPP_THREADS_WIN32

#include "ReaderWriterLockImpl.h"

namespace il2cpp
{
namespace os
{
    class FastReaderReaderWriterLockImpl : public ReaderWriterLockImpl
    {
        // Windows ReaderWriterLockImpl uses the Win32 SlimReaderWriterLock
        // which is fast for our purposes
    };
}
}

#endif
