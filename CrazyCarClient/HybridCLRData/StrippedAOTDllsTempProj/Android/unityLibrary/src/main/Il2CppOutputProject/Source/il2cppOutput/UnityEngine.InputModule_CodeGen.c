#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern void NativeUpdateCallback__ctor_m04FDCD50564E7535FADAFF34BBA83500585A84F5 (void);
// 0x00000002 System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType,UnityEngineInternal.Input.NativeInputEventBuffer*)
extern void NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333 (void);
// 0x00000003 System.Void UnityEngineInternal.Input.NativeInputSystem::.cctor()
extern void NativeInputSystem__cctor_mADBD6616441651B2AFE2AD8AF64D63DF0BA66693 (void);
// 0x00000004 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyBeforeUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern void NativeInputSystem_NotifyBeforeUpdate_m39AE2F1A42BD47200A263AD0EF9EDA5EF4C0042A (void);
// 0x00000005 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.IntPtr)
extern void NativeInputSystem_NotifyUpdate_m482599CC17084B0383809F97671530613EA39AD0 (void);
// 0x00000006 System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(System.Int32,System.String)
extern void NativeInputSystem_NotifyDeviceDiscovered_m861CCAFB4DD314DB3DC58FBD0398800CF9272C03 (void);
// 0x00000007 System.Void UnityEngineInternal.Input.NativeInputSystem::ShouldRunUpdate(UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean&)
extern void NativeInputSystem_ShouldRunUpdate_m7C9E1201550198D8E1F163787175C86A8B0EE71B (void);
// 0x00000008 System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
extern void NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	NativeUpdateCallback__ctor_m04FDCD50564E7535FADAFF34BBA83500585A84F5,
	NativeUpdateCallback_Invoke_mC4B7018AE8ED52FB9C6805F65C57A81812D21333,
	NativeInputSystem__cctor_mADBD6616441651B2AFE2AD8AF64D63DF0BA66693,
	NativeInputSystem_NotifyBeforeUpdate_m39AE2F1A42BD47200A263AD0EF9EDA5EF4C0042A,
	NativeInputSystem_NotifyUpdate_m482599CC17084B0383809F97671530613EA39AD0,
	NativeInputSystem_NotifyDeviceDiscovered_m861CCAFB4DD314DB3DC58FBD0398800CF9272C03,
	NativeInputSystem_ShouldRunUpdate_m7C9E1201550198D8E1F163787175C86A8B0EE71B,
	NativeInputSystem_set_hasDeviceDiscoveredCallback_m0979ABC04DBA52617481EDF743D8B48CC089A1C8,
};
static const int32_t s_InvokerIndices[8] = 
{
	5311,
	4917,
	18959,
	18048,
	16044,
	16046,
	16039,
	18042,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_InputModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_InputModule_CodeGenModule = 
{
	"UnityEngine.InputModule.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
