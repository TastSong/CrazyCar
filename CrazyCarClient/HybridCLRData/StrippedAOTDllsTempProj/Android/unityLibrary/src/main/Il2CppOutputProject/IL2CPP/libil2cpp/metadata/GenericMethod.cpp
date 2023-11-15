#include "il2cpp-config.h"
#include "metadata/GenericMetadata.h"
#include "metadata/GenericMethod.h"
#include "metadata/GenericSharing.h"
#include "metadata/Il2CppGenericMethodCompare.h"
#include "metadata/Il2CppGenericMethodHash.h"
#include "os/Mutex.h"
#include "utils/Memory.h"
#include "vm/Class.h"
#include "vm/Exception.h"
#include "vm/GenericClass.h"
#include "vm/MetadataAlloc.h"
#include "vm/MetadataCache.h"
#include "vm/MetadataLock.h"
#include "vm/Method.h"
#include "vm/Runtime.h"
#include "vm/Type.h"
#include "utils/Il2CppHashMap.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-runtime-metadata.h"
#include "il2cpp-runtime-stats.h"
#include <string>

#include "hybridclr/metadata/MetadataUtil.h"
#include "hybridclr/metadata/MetadataModule.h"
#include "hybridclr/interpreter/InterpreterModule.h"

using il2cpp::metadata::GenericMetadata;
using il2cpp::metadata::GenericSharing;
using il2cpp::os::FastAutoLock;
using il2cpp::vm::Class;
using il2cpp::vm::GenericClass;
using il2cpp::vm::MetadataCalloc;
using il2cpp::vm::MetadataCache;
using il2cpp::vm::Method;
using il2cpp::vm::Runtime;
using il2cpp::vm::Type;

struct SharedGenericMethodInfo : public MethodInfo
{
    SharedGenericMethodInfo() { memset(this, 0, sizeof(*this)); }
    Il2CppMethodPointer virtualCallMethodPointer;
};

static size_t SizeOfGenericMethodInfo()
{
    // If full generic sharing is enabled we track an additional method pointer, virtualCallMethodPointer
    // that allows virtual calls from non-FGS code to FGS code to be done directly (via unresolved virtual calls)
    if (!il2cpp::vm::Runtime::IsFullGenericSharingEnabled())
        return sizeof(MethodInfo);
    return sizeof(SharedGenericMethodInfo);
}

static MethodInfo* AllocGenericMethodInfo()
{
    return (MethodInfo*)MetadataCalloc(1, SizeOfGenericMethodInfo());
}

static MethodInfo* AllocCopyGenericMethodInfo(const MethodInfo* sourceMethodInfo)
{
    MethodInfo* newMethodInfo = AllocGenericMethodInfo();
    memcpy(newMethodInfo, sourceMethodInfo, SizeOfGenericMethodInfo());
    return newMethodInfo;
}

namespace il2cpp
{
namespace metadata
{
    typedef Il2CppReaderWriterLockedHashMap<const Il2CppGenericMethod*, MethodInfo*, Il2CppGenericMethodHash, Il2CppGenericMethodCompare> Il2CppGenericMethodMap;
    static Il2CppGenericMethodMap s_GenericMethodMap;
    static Il2CppGenericMethodMap s_PendingGenericMethodMap;

    static bool HasFullGenericSharedParametersOrReturn(const MethodInfo* methodDefinition)
    {
        if (Type::HasVariableRuntimeSizeWhenFullyShared(methodDefinition->return_type))
            return true;

        for (int i = 0; i < methodDefinition->parameters_count; i++)
        {
            if (Type::HasVariableRuntimeSizeWhenFullyShared(methodDefinition->parameters[i]))
                return true;
        }

        return false;
    }

    static void AGenericMethodWhichIsTooDeeplyNestedWasInvoked()
    {
        vm::Exception::Raise(vm::Exception::GetMaximumNestedGenericsException());
    }

    static void AGenericMethodWhichIsTooDeeplyNestedWasInvokedInvoker(Il2CppMethodPointer ptr, const MethodInfo* method, void* obj, void** args, void* ret)
    {
        AGenericMethodWhichIsTooDeeplyNestedWasInvoked();
    }

    static SharedGenericMethodInfo ambiguousMethodInfo;

    bool GenericMethod::IsGenericAmbiguousMethodInfo(const MethodInfo* method)
    {
        return method == &ambiguousMethodInfo;
    }

    const MethodInfo* GenericMethod::GetGenericVirtualMethod(const MethodInfo* vtableSlotMethod, const MethodInfo* genericVirtualMethod)
    {
        IL2CPP_NOT_IMPLEMENTED_NO_ASSERT(GetGenericVirtualMethod, "We should only do the following slow method lookup once and then cache on type itself.");

        const Il2CppGenericInst* classInst = NULL;
        if (vtableSlotMethod->is_inflated)
        {
            classInst = vtableSlotMethod->genericMethod->context.class_inst;
            vtableSlotMethod = vtableSlotMethod->genericMethod->methodDefinition;
        }

        return metadata::GenericMethod::GetMethod(vtableSlotMethod, classInst, genericVirtualMethod->genericMethod->context.method_inst);
    }

    const MethodInfo* GenericMethod::GetMethod(const MethodInfo* methodDefinition, const Il2CppGenericInst* classInst, const Il2CppGenericInst* methodInst)
    {
        Il2CppGenericMethod gmethod = { 0 };
        gmethod.methodDefinition = methodDefinition;
        gmethod.context.class_inst = classInst;
        gmethod.context.method_inst = methodInst;
        return GetMethod(&gmethod, true);
    }

    MethodInfo* GenericMethod::AllocateNewMethodInfo(const MethodInfo* methodDefinition, const Il2CppGenericInst* classInst, const Il2CppGenericInst* methodInst)
    {
        const MethodInfo* methodInfo = GetMethod(methodDefinition, classInst, methodInst);
        return AllocCopyGenericMethodInfo(methodInfo);
    }

    const MethodInfo* GenericMethod::GetMethod(const Il2CppGenericMethod* gmethod)
    {
        return GetMethod(gmethod, false);
    }

    Il2CppMethodPointer GenericMethod::GetVirtualCallMethodPointer(const MethodInfo* method)
    {
        IL2CPP_ASSERT(method->is_inflated);

        if (il2cpp::vm::Runtime::IsFullGenericSharingEnabled())
            return ((const SharedGenericMethodInfo*)method)->virtualCallMethodPointer;
        else
            return method->virtualMethodPointer;
    }

    const MethodInfo* GenericMethod::GetMethod(const Il2CppGenericMethod* gmethod, bool copyMethodPtr)
    {
        // This can be NULL only when we have hit the generic recursion depth limit.
        if (gmethod == NULL)
        {
            MethodInfo* newMethod = AllocGenericMethodInfo();
            if (il2cpp::vm::Runtime::IsFullGenericSharingEnabled())
                ((SharedGenericMethodInfo*)newMethod)->virtualCallMethodPointer = AGenericMethodWhichIsTooDeeplyNestedWasInvoked;

            newMethod->methodPointer = AGenericMethodWhichIsTooDeeplyNestedWasInvoked;
            newMethod->virtualMethodPointer = AGenericMethodWhichIsTooDeeplyNestedWasInvoked;
            newMethod->invoker_method = AGenericMethodWhichIsTooDeeplyNestedWasInvokedInvoker;
            return newMethod;
        }

        // First check for an already constructed generic method using the shared/reader lock
        MethodInfo* existingMethod;
        if (s_GenericMethodMap.TryGet(gmethod, &existingMethod))
            return existingMethod;

        if (Method::IsAmbiguousMethodInfo(gmethod->methodDefinition))
        {
            // is_inflated is used as an initialized check
            if (!ambiguousMethodInfo.is_inflated)
            {
                memcpy(&ambiguousMethodInfo, gmethod->methodDefinition, sizeof(MethodInfo));
                ambiguousMethodInfo.is_inflated = true;
                // This method must have methodPointer null so that the test in RaiseExecutionEngineExceptionIfGenericVirtualMethodIsNotFound fails
                ambiguousMethodInfo.methodPointer = NULL;
                ambiguousMethodInfo.virtualCallMethodPointer = gmethod->methodDefinition->virtualMethodPointer;
            }

            return &ambiguousMethodInfo;
        }

        return CreateMethodLocked(gmethod, copyMethodPtr);
    }

    const MethodInfo* GenericMethod::CreateMethodLocked(const Il2CppGenericMethod* gmethod, bool copyMethodPtr)
    {
        // We need to inflate a new generic method, take the metadata mutex
        // All code below this point can and does assume mutual exclusion
        FastAutoLock lock(&il2cpp::vm::g_MetadataLock);

        // Recheck the s_GenericMethodMap in case there was a race to add this generic method
        MethodInfo* existingMethod;
        if (s_GenericMethodMap.TryGet(gmethod, &existingMethod))
            return existingMethod;

        // GetMethodLocked may be called recursively, we keep tracking of pending inflations
        if (s_PendingGenericMethodMap.TryGet(gmethod, &existingMethod))
            return existingMethod;

        if (copyMethodPtr)
            gmethod = MetadataCache::GetGenericMethod(gmethod->methodDefinition, gmethod->context.class_inst, gmethod->context.method_inst);

        const MethodInfo* methodDefinition = gmethod->methodDefinition;
        Il2CppClass* declaringClass = methodDefinition->klass;
        if (gmethod->context.class_inst)
        {
            Il2CppGenericClass* genericClassDeclaringType = GenericMetadata::GetGenericClass(methodDefinition->klass, gmethod->context.class_inst);
            declaringClass = GenericClass::GetClass(genericClassDeclaringType);

            // we may fail if we cannot construct generic type
            if (!declaringClass)
                return NULL;
        }

        MethodInfo* newMethod = AllocGenericMethodInfo();

        // we set the pending generic method map here because the initialization may recurse and try to retrieve the same generic method
        // this is safe because we *always* take the lock when retrieving the MethodInfo from a generic method.
        // if we move lock to only if MethodInfo needs constructed then we need to revisit this since we could return a partially initialized MethodInfo
        s_PendingGenericMethodMap.Add(gmethod, newMethod);

        newMethod->klass = declaringClass;
        newMethod->flags = methodDefinition->flags;
        newMethod->iflags = methodDefinition->iflags;
        newMethod->slot = methodDefinition->slot;
        newMethod->name = methodDefinition->name;
        newMethod->is_generic = false;
        newMethod->is_inflated = true;
        newMethod->token = methodDefinition->token;

        newMethod->return_type = GenericMetadata::InflateIfNeeded(methodDefinition->return_type, &gmethod->context, true);

        newMethod->parameters_count = methodDefinition->parameters_count;
        newMethod->parameters = GenericMetadata::InflateParameters(methodDefinition->parameters, methodDefinition->parameters_count, &gmethod->context, true);

        newMethod->genericMethod = gmethod;

        if (!gmethod->context.method_inst)
        {
            if (methodDefinition->is_generic)
                newMethod->is_generic = true;

            if (!declaringClass->generic_class)
            {
                newMethod->genericContainerHandle = methodDefinition->genericContainerHandle;
            }

            newMethod->methodMetadataHandle = methodDefinition->methodMetadataHandle;
        }
        else if (!il2cpp::vm::Runtime::IsLazyRGCTXInflationEnabled() && !il2cpp::metadata::GenericMetadata::ContainsGenericParameters(newMethod))
        {
            // we only need RGCTX for generic instance methods
            newMethod->rgctx_data = InflateRGCTXLocked(gmethod, lock);
        }

        il2cpp::vm::Il2CppGenericMethodPointers methodPointers = MetadataCache::GetGenericMethodPointers(methodDefinition, &gmethod->context);
        newMethod->virtualMethodPointer = methodPointers.virtualMethodPointer;
        newMethod->methodPointer = methodPointers.methodPointer;
        if (methodPointers.methodPointer)
        {
            newMethod->invoker_method = methodPointers.invoker_method;
        }
        else
        {
            newMethod->invoker_method = Runtime::GetMissingMethodInvoker();
            if (Method::IsInstance(newMethod))
                newMethod->virtualMethodPointer = MetadataCache::GetUnresolvedVirtualCallStub(newMethod);
        }

        bool isInterpMethod = hybridclr::metadata::IsInterpreterMethod(newMethod);
        if (!isInterpMethod)
        {
            newMethod->has_full_generic_sharing_signature = methodPointers.isFullGenericShared && HasFullGenericSharedParametersOrReturn(gmethod->methodDefinition);

            // Full generic sharing methods should be called via invoker
            // And invalid static methods can't use the unresolved virtual call stubs
            newMethod->indirect_call_via_invokers = newMethod->has_full_generic_sharing_signature || (!Method::IsInstance(newMethod) && newMethod->methodPointer == NULL);
        }

        ++il2cpp_runtime_stats.inflated_method_count;

        if (il2cpp::vm::Runtime::IsFullGenericSharingEnabled())
        {
            SharedGenericMethodInfo* sharedMethodInfo = reinterpret_cast<SharedGenericMethodInfo*>(newMethod);
            if (il2cpp::vm::Method::HasFullGenericSharingSignature(newMethod) && il2cpp::vm::Method::IsInstance(newMethod))
                sharedMethodInfo->virtualCallMethodPointer = MetadataCache::GetUnresolvedVirtualCallStub(newMethod);
            else
                sharedMethodInfo->virtualCallMethodPointer = newMethod->virtualMethodPointer;
        }

        bool isAotImplByInterp = hybridclr::metadata::MetadataModule::IsImplementedByInterpreter(newMethod);
        bool isAdjustorThunkMethod = IS_CLASS_VALUE_TYPE(newMethod->klass) && hybridclr::metadata::IsInstanceMethod(newMethod);
        if (methodPointers.methodPointer == nullptr)
        {
            if (isInterpMethod || isAotImplByInterp)
            {
                newMethod->invoker_method = hybridclr::interpreter::InterpreterModule::GetMethodInvoker(newMethod);
                newMethod->methodPointer = newMethod->methodPointerCallByInterp = hybridclr::interpreter::InterpreterModule::GetMethodPointer(newMethod);
                newMethod->virtualMethodPointer = newMethod->virtualMethodPointerCallByInterp = isAdjustorThunkMethod ?
                    hybridclr::interpreter::InterpreterModule::GetAdjustThunkMethodPointer(newMethod) :
                    (newMethod->methodPointerCallByInterp != hybridclr::interpreter::InterpreterModule::NotSupportNative2Managed ?
                        newMethod->methodPointerCallByInterp : hybridclr::interpreter::InterpreterModule::NotSupportAdjustorThunk);
                newMethod->isInterpterImpl = true;
            }
        }
        else
        {
            if (newMethod->indirect_call_via_invokers && isAotImplByInterp)
            {
                newMethod->methodPointerCallByInterp = hybridclr::interpreter::InterpreterModule::GetMethodPointer(newMethod);
                newMethod->virtualMethodPointerCallByInterp = isAdjustorThunkMethod ?
                    hybridclr::interpreter::InterpreterModule::GetAdjustThunkMethodPointer(newMethod) :
                    (newMethod->methodPointerCallByInterp != hybridclr::interpreter::InterpreterModule::NotSupportNative2Managed ?
                        newMethod->methodPointerCallByInterp : hybridclr::interpreter::InterpreterModule::NotSupportAdjustorThunk);
                newMethod->invoker_method = hybridclr::interpreter::InterpreterModule::GetMethodInvoker(newMethod);
                newMethod->methodPointer = newMethod->methodPointerCallByInterp;
                newMethod->virtualMethodPointer = newMethod->virtualMethodPointerCallByInterp;
                newMethod->isInterpterImpl = true;
            }
        }

        if (!newMethod->isInterpterImpl)
        {
            newMethod->methodPointerCallByInterp = newMethod->methodPointer;
            newMethod->virtualMethodPointerCallByInterp = GetVirtualCallMethodPointer(newMethod);
        }
        else
        {
            newMethod->initInterpCallMethodPointer = true;
            newMethod->indirect_call_via_invokers = false;
            newMethod->has_full_generic_sharing_signature = false;
        }

        // If we are a default interface method on a generic instance interface we need to ensure that the interfaces rgctx is inflated
        if (Method::IsDefaultInterfaceMethodOnGenericInstance(newMethod))
            vm::Class::InitLocked(declaringClass, lock);

        // The generic method is fully created,
        // Update the generic method map, this needs to take an exclusive lock
        // **** This must happen with the metadata lock held and be released before the metalock is released ****
        // **** This prevents deadlocks and ensures that there is no race condition
        // **** creating a new method adding it to s_GenericMethodMap and removing it from s_PendingGenericMethodMap
        s_GenericMethodMap.Add(gmethod, newMethod);

        // Remove the method from the pending table
        s_PendingGenericMethodMap.Remove(gmethod);

        return newMethod;
    }

    const Il2CppRGCTXData* GenericMethod::InflateRGCTX(const MethodInfo* method)
    {
        IL2CPP_ASSERT(method->is_inflated);
        IL2CPP_ASSERT(method->genericMethod);
        IL2CPP_ASSERT(method->genericMethod->context.method_inst);

        FastAutoLock lock(&il2cpp::vm::g_MetadataLock);

        if (method->rgctx_data != NULL)
            return method->rgctx_data;

        const Il2CppRGCTXData* rgctx = InflateRGCTXLocked(method->genericMethod, lock);
        const_cast<MethodInfo*>(method)->rgctx_data = rgctx;

        return rgctx;
    }

    const Il2CppRGCTXData* GenericMethod::InflateRGCTXLocked(const Il2CppGenericMethod* gmethod, const il2cpp::os::FastAutoLock &lock)
    {
        return GenericMetadata::InflateRGCTXLocked(gmethod->methodDefinition->klass->image, gmethod->methodDefinition->token, &gmethod->context, lock);
    }

    const Il2CppGenericContext* GenericMethod::GetContext(const Il2CppGenericMethod* gmethod)
    {
        return &gmethod->context;
    }

    static std::string FormatGenericArguments(const Il2CppGenericInst* inst)
    {
        std::string output;
        if (inst)
        {
            output.append("<");
            for (size_t i = 0; i < inst->type_argc; ++i)
            {
                if (i != 0)
                    output.append(", ");
                output.append(Type::GetName(inst->type_argv[i], IL2CPP_TYPE_NAME_FORMAT_FULL_NAME));
            }
            output.append(">");
        }

        return output;
    }

    std::string GenericMethod::GetFullName(const Il2CppGenericMethod* gmethod)
    {
        const MethodInfo* method = gmethod->methodDefinition;
        std::string output;
        output.append(Type::GetName(&gmethod->methodDefinition->klass->byval_arg, IL2CPP_TYPE_NAME_FORMAT_FULL_NAME));
        output.append(FormatGenericArguments(gmethod->context.class_inst));
        output.append("::");
        output.append(Method::GetName(method));
        output.append(FormatGenericArguments(gmethod->context.method_inst));

        return output;
    }

    void GenericMethod::ClearStatics()
    {
        s_GenericMethodMap.Clear();
    }
} /* namespace vm */
} /* namespace il2cpp */
