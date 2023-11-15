#if IL2CPP_ENABLE_WRITE_BARRIER_VALIDATION

#include "gc_wrapper.h"
#include "il2cpp-config.h"
#include "il2cpp-api.h"
#include "gc/WriteBarrierValidation.h"
#include "gc/GarbageCollector.h"
#include "os/Mutex.h"
#include "vm/StackTrace.h"
#include <algorithm>
#include <functional>
#include <map>
#include <string>

// On systems which have the posix backtrace API, you can turn on this define to get native stack traces.
// This can make it easier to debug issues with missing barriers.
#define HAS_POSIX_BACKTRACE IL2CPP_TARGET_OSX
#define HAS_WINDOWS_BACKTRACE IL2CPP_TARGET_WINDOWS

#if HAS_POSIX_BACKTRACE
#include <execinfo.h>
#endif

#if HAS_WINDOWS_BACKTRACE
#include <windows.h>
#endif

using namespace il2cpp::os;
using namespace il2cpp::vm;

#if !IL2CPP_GC_BOEHM
#error "Write Barrier Validation is specific to Boehm GC"
#endif

#if IL2CPP_TINY && !IL2CPP_TINY_DEBUGGER

#define IL2CPP_TINY_BACKEND 1

uint8_t* Il2CppGetTinyTypeUniverse();

typedef void* StackFrames;

struct StackTrace
{
    static StackFrames* GetStackFrames()
    {
        return NULL;
    }
};

#endif

namespace il2cpp
{
namespace gc
{
    enum AllocationKind
    {
        kPtrFree = 0,
        kNormal = 1,
        kUncollectable = 2,
        kObject = 3
    };

    struct AllocationInfo
    {
        size_t size;
        StackFrames stacktrace;
#if HAS_POSIX_BACKTRACE || HAS_WINDOWS_BACKTRACE
        void *backtraceFrames[128];
        int frameCount;
#endif
        AllocationKind kind;
    };

    static std::map<void*, AllocationInfo, std::greater<void*> > g_Allocations;
    static std::map<void**, void*> g_References;
    static void* g_MinHeap = (void*)0xffffffffffffffffULL;
    static void* g_MaxHeap = 0;
    static WriteBarrierValidation::ExternalAllocationTrackerFunction g_ExternalAllocationTrackerFunction = NULL;
    static WriteBarrierValidation::ExternalWriteBarrierTrackerFunction g_ExternalWriteBarrierTrackerFunction = NULL;
    static baselib::ReentrantLock s_AllocationMutex;
    static baselib::ReentrantLock s_WriteBarrierMutex;

    extern "C" void* GC_malloc_kind(size_t size, int k);

#if HAS_POSIX_BACKTRACE
    std::string GetStackPosix(const AllocationInfo &info)
    {
        std::string result;
        char **frameStrings = backtrace_symbols(&info.backtraceFrames[0], info.frameCount);
        int frameCount = std::min(info.frameCount, 32);
        if (frameStrings != NULL)
        {
            for (int x = 0; x < frameCount; x++)
            {
                result += frameStrings[x];
                result += "\n";
            }
            free(frameStrings);
        }
        return result;
    }

#endif

    void* GC_malloc_wrapper(size_t size, AllocationKind kind)
    {
        void* ptr = (char*)GC_malloc_kind(size, kind);
        memset(ptr, 0, size);

        if (g_ExternalAllocationTrackerFunction != NULL)
            g_ExternalAllocationTrackerFunction(ptr, size, kind);
        else
        {
            const StackFrames *trace = StackTrace::GetStackFrames();

            os::FastAutoLock lock(&s_AllocationMutex);

            AllocationInfo& allocation = g_Allocations[ptr];
            allocation.size = size;
            allocation.kind = kind;
            if (trace != NULL)
                allocation.stacktrace = *trace;
#if HAS_POSIX_BACKTRACE
            allocation.frameCount = backtrace(&allocation.backtraceFrames[0], 128);
#endif
#if HAS_WINDOWS_BACKTRACE
            allocation.frameCount = CaptureStackBackTrace(0, 128, &allocation.backtraceFrames[0], NULL);
#endif

            g_MinHeap = std::min(g_MinHeap, ptr);
            g_MaxHeap = std::max(g_MaxHeap, (void*)((char*)ptr + size));
        }

        return ptr;
    }

    extern "C" void GC_dirty_inner(void **ptr)
    {
        if (g_ExternalWriteBarrierTrackerFunction)
            g_ExternalWriteBarrierTrackerFunction(ptr);
        else
        {
            os::FastAutoLock lock(&s_WriteBarrierMutex);
            g_References[ptr] = *ptr;
        }
    }

    extern "C" void GC_free(void *ptr)
    {
    }

    extern "C" void* GC_malloc(size_t size)
    {
        return GC_malloc_wrapper(size, kNormal);
    }

    extern "C" void* GC_gcj_malloc(size_t size, void * ptr_to_struct_containing_descr)
    {
        void ** ptr = (void**)GC_malloc_wrapper(size, kObject);
        *ptr = ptr_to_struct_containing_descr;
        return ptr;
    }

    extern "C" void* GC_CALL GC_gcj_vector_malloc(size_t size, void * ptr_to_struct_containing_descr)
    {
        void ** ptr = (void**)GC_malloc_wrapper(size, kObject);
        *ptr = ptr_to_struct_containing_descr;
        return ptr;
    }

    extern "C" void* GC_malloc_uncollectable(size_t size)
    {
        return GC_malloc_wrapper(size, kUncollectable);
    }

    extern "C" void* GC_malloc_atomic(size_t size)
    {
        return GC_malloc_wrapper(size, kPtrFree);
    }

    static std::string ObjectName(void* object, AllocationKind kind)
    {
        if (kind != kObject)
        {
            switch (kind)
            {
                case kPtrFree: return "Kind: kPtrFree";
                case kNormal: return "Kind: kNormal";
                case kUncollectable: return "Kind: kUncollectable";
                default: return "?";
            }
        }

#if IL2CPP_TINY_BACKEND
        ptrdiff_t typeOffset = reinterpret_cast<uint8_t*>(((Il2CppObject*)object)->klass) - Il2CppGetTinyTypeUniverse();
        return "Tiny Type Offset:" + std::to_string(typeOffset);
#else
        Il2CppClass* klass = il2cpp_object_get_class((Il2CppObject*)(object));

        if (klass == NULL)
            return "";

        std::string name = il2cpp_class_get_name(klass);
        Il2CppClass* parent = il2cpp_class_get_declaring_type(klass);
        while (parent != NULL)
        {
            klass = parent;
            parent = il2cpp_class_get_declaring_type(klass);
            name = std::string(il2cpp_class_get_name(klass)) + "/" + name;
        }

        return std::string(il2cpp_class_get_namespace(klass)) + "::" + name;
#endif
    }

    static std::string GetReadableStackTrace(const StackFrames &stackTrace)
    {
#if IL2CPP_TINY_BACKEND
        return "No managed stack traces in Tiny";
#else
        std::string str;
        for (StackFrames::const_iterator i = stackTrace.begin(); i != stackTrace.end(); i++)
        {
            Il2CppClass* parent = il2cpp_method_get_declaring_type(i->method);
            str += il2cpp_class_get_namespace(parent);
            str += '.';
            str += il2cpp_class_get_name(parent);
            str += ':';
            str += il2cpp_method_get_name(i->method);
            str += '\n';
        }
        return str;
#endif
    }

    static std::string LogError(std::pair<void*, AllocationInfo> const & object, void** reference, void *refObject)
    {
        std::string msg;
        char chbuf[1024];
        snprintf(chbuf, 1024, "In object %p (%s) with size %zx at offset %zx, allocated at \n%s\n", object.first, ObjectName(object.first, object.second.kind).c_str(), object.second.size, (size_t)((char*)reference - (char*)object.first),
#if HAS_POSIX_BACKTRACE
            GetStackPosix(object.second).c_str()
#else
            GetReadableStackTrace(object.second.stacktrace).c_str()
#endif
        );
        msg += chbuf;
        snprintf(chbuf, 1024, "Points to object %p of type (%s)\n", refObject, ObjectName(refObject, kPtrFree).c_str());
        msg += chbuf;
        return msg;
    }

    // Boehm internal constants
    #define GC_DS_TAG_BITS 2
    #define GC_DS_TAGS   ((1 << GC_DS_TAG_BITS) - 1)
    #define GC_DS_LENGTH 0  /* The entire word is a length in bytes that    */
    /* must be a multiple of 4.                     */
    #define GC_DS_BITMAP 1  /* 30 (62) bits are a bitmap describing pointer */

    #ifndef MARK_DESCR_OFFSET
    #  define MARK_DESCR_OFFSET sizeof(void*)
    #endif

    void WriteBarrierValidation::SetExternalAllocationTracker(ExternalAllocationTrackerFunction func)
    {
        g_ExternalAllocationTrackerFunction = func;
    }

    void WriteBarrierValidation::SetExternalWriteBarrierTracker(ExternalWriteBarrierTrackerFunction func)
    {
        g_ExternalWriteBarrierTrackerFunction = func;
    }

    /* Taken from https://randomascii.wordpress.com/2012/02/14/64-bit-made-easy/

    Copyright 2012 Bruce Dawson. All Rights Reserved.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    */
    void ReserveBottomMemory()
    {
#if defined(_WIN64)
        static bool s_initialized = false;
        if (s_initialized)
            return;
        s_initialized = true;

        // Start by reserving large blocks of address space, and then
        // gradually reduce the size in order to capture all of the
        // fragments. Technically we should continue down to 64 KB but
        // stopping at 1 MB is sufficient to keep most allocators out.

        const size_t LOW_MEM_LINE = 0x1000000000LL; // Modified to reserve bottom 64 GB
        size_t totalReservation = 0;
        size_t numVAllocs = 0;
        size_t numHeapAllocs = 0;
        size_t oneMB = 1024 * 1024;
        size_t sixtyFourKB = 64 * 1024; // Modified to continue down to 64 KB as our GC allocates chunks in 256 KB
        for (size_t size = 256 * oneMB; size >= sixtyFourKB; size /= 2)
        {
            for (;;)
            {
                void* p = VirtualAlloc(0, size, MEM_RESERVE, PAGE_NOACCESS);
                if (!p)
                    break;

                if ((size_t)p >= LOW_MEM_LINE)
                {
                    // We don't need this memory, so release it completely.
                    VirtualFree(p, 0, MEM_RELEASE);
                    break;
                }

                totalReservation += size;
                ++numVAllocs;
            }
        }

        // Now repeat the same process but making heap allocations, to use up
        // the already reserved heap blocks that are below the 4 GB line.
        HANDLE heap = GetProcessHeap();
        for (size_t blockSize = 64 * 1024; blockSize >= 16; blockSize /= 2)
        {
            for (;;)
            {
                void* p = HeapAlloc(heap, 0, blockSize);
                if (!p)
                    break;

                if ((size_t)p >= LOW_MEM_LINE)
                {
                    // We don't need this memory, so release it completely.
                    HeapFree(heap, 0, p);
                    break;
                }

                totalReservation += blockSize;
                ++numHeapAllocs;
            }
        }

        // Perversely enough the CRT doesn't use the process heap. Consume up
        // the memory the CRT heap has already reserved.
        for (size_t blockSize = 64 * 1024; blockSize >= 16; blockSize /= 2)
        {
            for (;;)
            {
                void* p = malloc(blockSize);
                if (!p)
                    break;

                if ((size_t)p >= LOW_MEM_LINE)
                {
                    // We don't need this memory, so release it completely.
                    free(p);
                    break;
                }

                totalReservation += blockSize;
                ++numHeapAllocs;
            }
        }

        // Print diagnostics showing how many allocations we had to make in
        // order to reserve all of low memory, typically less than 200.
        char buffer[1000];
        sprintf_s(buffer, "Reserved %1.3f MB (%d vallocs,"
            "%d heap allocs) of low-memory.\n",
            totalReservation / (1024 * 1024.0),
            (int)numVAllocs, (int)numHeapAllocs);
        OutputDebugStringA(buffer);
#endif
    }

    void WriteBarrierValidation::Setup()
    {
        // Reserve bottom 64 GB of memory to force GC into high addresses
        // This prevents hashes colliding with heap addresses and causing false detections.
        ReserveBottomMemory();

        GarbageCollector::Disable();
    }

    void WriteBarrierValidation::Run()
    {
        if (g_ExternalAllocationTrackerFunction != NULL)
            return;
        std::string msg;
        msg = "<TestResult Name='WriteBarrierValidation'>\n<![CDATA[\n";
        size_t errors = 0;
        for (std::map<void*, AllocationInfo>::iterator i = g_Allocations.begin(); i != g_Allocations.end(); i++)
        {
            if (i->second.kind == kPtrFree)
                continue;

            intptr_t desc = (intptr_t)GC_NO_DESCRIPTOR;
            if (i->second.kind == kObject)
            {
                desc = *(intptr_t*)(((char*)(*(void**)i->first)) + MARK_DESCR_OFFSET);
                if ((desc & GC_DS_TAGS) != GC_DS_BITMAP)
                    desc = (intptr_t)GC_NO_DESCRIPTOR;
            }

            for (void** ptr = ((void**)i->first) + 2; ptr < (void**)((char*)i->first + i->second.size); ptr++)
            {
                if (desc != (intptr_t)GC_NO_DESCRIPTOR)
                {
                    // if we have a GC descriptor bitmap, check if this address can be a pointer, skip otherwise.
                    size_t ptr_index = ptr - (void**)i->first;
                    if (((desc >> (sizeof(void*) * 8 - ptr_index - 1)) & 1) == 0)
                        continue;
                }

                void* ref = *ptr;
                if (ref < g_MinHeap || ref >= g_MaxHeap)
                    continue;

                std::map<void*, AllocationInfo>::iterator j = g_Allocations.lower_bound(ref);
                if (j != g_Allocations.end() && j != i && j->second.kind != kUncollectable)
                {
                    if (j->first <= ref && (void*)((char*)j->first + j->second.size) > ref)
                    {
                        std::map<void**, void*>::iterator trackedRef = g_References.find(ptr);
                        if (trackedRef == g_References.end())
                        {
                            char chbuf[1024];
                            snprintf(chbuf, 1024, "\n%p looks like a reference to %p, but was not found in tracked references\n", ptr, ref);
                            msg += chbuf;
                            errors++;
                            msg += LogError(*i, ptr, j->first);
                        }
                        else if (trackedRef->second != ref)
                        {
                            char chbuf[1024];
                            snprintf(chbuf, 1024, "\n%p does not match tracked value (%p!=%p).\n", ptr, trackedRef->second, ref);
                            msg += chbuf;
                            errors++;
                            msg += LogError(*i, ptr, j->first);
                        }
                    }
                }
            }
        }
        msg += "]]>\n</TestResult>\n";
        if (errors > 0)
            printf("%s", msg.c_str());
    }
} /* gc */
} /* il2cpp */

#endif
