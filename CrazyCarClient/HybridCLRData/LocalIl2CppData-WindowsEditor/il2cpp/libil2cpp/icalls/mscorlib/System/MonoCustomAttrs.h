#pragma once

#include <stdint.h>
#include "il2cpp-config.h"

#include "metadata/CustomAttributeDataReader.h"

struct Il2CppArray;
struct Il2CppObject;
struct Il2CppReflectionType;

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
    class LIBIL2CPP_CODEGEN_API MonoCustomAttrs
    {
    public:
        static Il2CppObject* CreateCustomAttributeData(const Il2CppAssembly* assembly, const il2cpp::metadata::LazyCustomAttributeData& data);
        static Il2CppArray* GetCustomAttributesDataInternal(Il2CppObject* obj);
        static Il2CppArray * GetCustomAttributesInternal(Il2CppObject* obj, Il2CppReflectionType* type, bool pseudoAttrs);
        static bool IsDefinedInternal(Il2CppObject *obj, Il2CppReflectionType *attr_type);
    };
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */
