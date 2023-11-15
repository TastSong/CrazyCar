#pragma once

#include <stdint.h>
#include "il2cpp-config.h"
struct Il2CppClass;
struct Il2CppGenericClass;
struct Il2CppGenericContext;

namespace il2cpp
{
namespace vm
{
    class LIBIL2CPP_CODEGEN_API GenericClass
    {
    public:
        // exported

    public:
        //internal
        static Il2CppClass* GetClass(Il2CppGenericClass *gclass, bool throwOnError = true);
        static Il2CppGenericContext* GetContext(Il2CppGenericClass *gclass);
        static Il2CppClass* GetTypeDefinition(Il2CppGenericClass *gclass);
        static bool IsEnum(Il2CppGenericClass *gclass);
        static bool IsValueType(Il2CppGenericClass *gclass);

        static void SetupEvents(Il2CppClass* genericInstanceType);
        static void SetupFields(Il2CppClass* genericInstanceType);
        static void SetupMethods(Il2CppClass* genericInstanceType);
        static void SetupProperties(Il2CppClass* genericInstanceType);

        static bool HasSameGenericTypeDefinition(const Il2CppGenericClass* gclass1, const Il2CppGenericClass* gclass2)
        {
            IL2CPP_ASSERT(gclass1->type->type == IL2CPP_TYPE_VALUETYPE || gclass1->type->type == IL2CPP_TYPE_CLASS);
            IL2CPP_ASSERT(gclass2->type->type == IL2CPP_TYPE_VALUETYPE || gclass2->type->type == IL2CPP_TYPE_CLASS);

            return gclass1->type->data.typeHandle == gclass2->type->data.typeHandle;
        }

    private:
        static Il2CppClass* CreateClass(Il2CppGenericClass *gclass, bool throwOnError = true);
    };
} /* namespace vm */
} /* namespace il2cpp */
