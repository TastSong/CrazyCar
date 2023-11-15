#pragma once

#include <stdint.h>
#include "os/Mutex.h"
#include "il2cpp-class-internals.h"
#include "vm/Type.h"

namespace il2cpp
{
namespace metadata
{
    class ArrayMetadata
    {
    public:
        static Il2CppClass* GetBoundedArrayClass(Il2CppClass* elementClass, uint32_t rank, bool bounded);

        typedef void(*ArrayTypeWalkCallback)(Il2CppClass* type, void* context);
        static void WalkSZArrays(ArrayTypeWalkCallback callback, void* context);
        static void WalkArrays(ArrayTypeWalkCallback callback, void* context);

        // called as part of Class::Init with lock held
        static void SetupArrayInterfaces(Il2CppClass* klass, const il2cpp::os::FastAutoLock& lock);
        static void SetupArrayVTable(Il2CppClass* klass, const il2cpp::os::FastAutoLock& lock);

        static void Clear();

        /* From ECMA-335, I.8.7 Assignment compatibility:

            The reduced type of a type T is the following:

            1. If the underlying type of T is:
                a. int8, or unsigned int8, then its reduced type is int8.
                b. int16, or unsigned int16, then its reduced type is int16.
                c. int32, or unsigned int32, then its reduced type is int32.
                d. int64, or unsigned int64, then its reduced type is int64.
                e. native int, or unsigned native int, then its reduced type is native int.
                   (NOTE: In NetFW/Mono (but not CoreCLR) implementations the reduced type is int32 or int64)
            2. Otherwise, the reduced type is itself.
            AND... enums are converted to their underlying type
        */
        static inline Il2CppClass* GetArrayVarianceReducedType(Il2CppClass* type)
        {
            if (il2cpp::vm::Type::IsArray(&type->byval_arg))
            {
                return type;
            }

            // Using castClass to handle reducing enum types - for enums castClass is the underling type
            switch (type->castClass->byval_arg.type)
            {
                case IL2CPP_TYPE_I1:
                case IL2CPP_TYPE_U1:
                    return il2cpp_defaults.sbyte_class;

                case IL2CPP_TYPE_I2:
                case IL2CPP_TYPE_U2:
                    return il2cpp_defaults.int16_class;

                case IL2CPP_TYPE_I4:
                case IL2CPP_TYPE_U4:
                    return il2cpp_defaults.int32_class;

                case IL2CPP_TYPE_I8:
                case IL2CPP_TYPE_U8:
                    return il2cpp_defaults.int64_class;

                case IL2CPP_TYPE_I:
                case IL2CPP_TYPE_U:
#if IL2CPP_SIZEOF_VOID_P == 8
                    return il2cpp_defaults.int64_class;
#else
                    return il2cpp_defaults.int32_class;
#endif
                default:
                    return type;
            }
        }
    };
} /* namespace vm */
} /* namespace il2cpp */
