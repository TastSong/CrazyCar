#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3, T4, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>
struct IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode>
struct IEnumerator_1_t74AEE2605F4B877C807DBE6BC93485F22AD46925;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
// UnityEngine.Yoga.YogaNode[]
struct YogaNodeU5BU5D_t27301B567A9C8D13791534005522F3E81E19B61A;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Yoga.Logger
struct Logger_t092B1218ED93DD47180692D5761559B2054234A0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46;
IL2CPP_EXTERN_C String_t* _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF;
IL2CPP_EXTERN_C String_t* _stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E;
IL2CPP_EXTERN_C String_t* _stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520;
IL2CPP_EXTERN_C String_t* _stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCFDAF3CE34E8117DEABC58BB3EBDB7B80EA66F5A 
{
};

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E  : public RuntimeObject
{
};

struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Instance_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	YogaNodeU5BU5D_t27301B567A9C8D13791534005522F3E81E19B61A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	YogaNodeU5BU5D_t27301B567A9C8D13791534005522F3E81E19B61A* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.Yoga.MeasureOutput
struct MeasureOutput_t6C4FCF151309F81DF23561CF3FF1777445FBD84E  : public RuntimeObject
{
};

// UnityEngine.Yoga.Native
struct Native_t97ADC11284398663A27E9214C13A84F868A25614  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.UIElements.TextNative
struct TextNative_t463AA48470CE96DB270F55A6F73EF2D90401C00C  : public RuntimeObject
{
};

// UnityEngine.UIElements.UIElementsRuntimeUtilityNative
struct UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938  : public RuntimeObject
{
};

struct UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields
{
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanelsCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___RepaintOverlayPanelsCallback_0;
	// System.Action UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanelsCallback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdateRuntimePanelsCallback_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Yoga.YogaConstants
struct YogaConstants_tE52AB48288567AEF285EDE0C8884AFD803AD9D3C  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>
struct NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.UIR.DrawBufferRange
struct DrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4 
{
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::firstIndex
	int32_t ___firstIndex_0;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::indexCount
	int32_t ___indexCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::minIndexVal
	int32_t ___minIndexVal_2;
	// System.Int32 UnityEngine.UIElements.UIR.DrawBufferRange::vertsReferenced
	int32_t ___vertsReferenced_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Rendering.StencilState
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Rendering.VertexAttributeDescriptor
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	// UnityEngine.Rendering.VertexAttribute UnityEngine.Rendering.VertexAttributeDescriptor::<attribute>k__BackingField
	int32_t ___U3CattributeU3Ek__BackingField_0;
	// UnityEngine.Rendering.VertexAttributeFormat UnityEngine.Rendering.VertexAttributeDescriptor::<format>k__BackingField
	int32_t ___U3CformatU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Rendering.VertexAttributeDescriptor::<stream>k__BackingField
	int32_t ___U3CstreamU3Ek__BackingField_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Yoga.YogaSize
struct YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA 
{
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;
};

// UnityEngine.Yoga.YogaValue
struct YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C 
{
	// System.Single UnityEngine.Yoga.YogaValue::value
	float ___value_0;
	// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::unit
	int32_t ___unit_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct GfxUpdateBufferRange_tC47258BCB472B0727B4FCE21A2A53506644C1A97 
{
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::offsetFromWriteStart
	uint32_t ___offsetFromWriteStart_0;
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::size
	uint32_t ___size_1;
	// System.UIntPtr UnityEngine.UIElements.UIR.GfxUpdateBufferRange::source
	uintptr_t ___source_2;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 
{
	// System.String UnityEngine.UIElements.TextNativeSettings::text
	String_t* ___text_0;
	// UnityEngine.Font UnityEngine.UIElements.TextNativeSettings::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_1;
	// System.Int32 UnityEngine.UIElements.TextNativeSettings::size
	int32_t ___size_2;
	// System.Single UnityEngine.UIElements.TextNativeSettings::scaling
	float ___scaling_3;
	// UnityEngine.FontStyle UnityEngine.UIElements.TextNativeSettings::style
	int32_t ___style_4;
	// UnityEngine.Color UnityEngine.UIElements.TextNativeSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	// UnityEngine.TextAnchor UnityEngine.UIElements.TextNativeSettings::anchor
	int32_t ___anchor_6;
	// System.Boolean UnityEngine.UIElements.TextNativeSettings::wordWrap
	bool ___wordWrap_7;
	// System.Single UnityEngine.UIElements.TextNativeSettings::wordWrapWidth
	float ___wordWrapWidth_8;
	// System.Boolean UnityEngine.UIElements.TextNativeSettings::richText
	bool ___richText_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke
{
	char* ___text_0;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_1;
	int32_t ___size_2;
	float ___scaling_3;
	int32_t ___style_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	int32_t ___anchor_6;
	int32_t ___wordWrap_7;
	float ___wordWrapWidth_8;
	int32_t ___richText_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.TextNativeSettings
struct TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com
{
	Il2CppChar* ___text_0;
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_1;
	int32_t ___size_2;
	float ___scaling_3;
	int32_t ___style_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
	int32_t ___anchor_6;
	int32_t ___wordWrap_7;
	float ___wordWrapWidth_8;
	int32_t ___richText_9;
};

// UnityEngine.UIElements.TextVertex
struct TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 
{
	// UnityEngine.Vector3 UnityEngine.UIElements.TextVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color32 UnityEngine.UIElements.TextVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_1;
	// UnityEngine.Vector2 UnityEngine.UIElements.TextVertex::uv0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv0_2;
};

// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Yoga.YogaConfig::_ygConfig
	intptr_t ____ygConfig_1;
	// UnityEngine.Yoga.Logger UnityEngine.Yoga.YogaConfig::_logger
	Logger_t092B1218ED93DD47180692D5761559B2054234A0* ____logger_2;
};

struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields
{
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaConfig::Default
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___Default_0;
};

// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// UnityEngine.Yoga.YogaConfig UnityEngine.Yoga.YogaNode::_config
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ____config_1;
	// System.WeakReference UnityEngine.Yoga.YogaNode::_parent
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____parent_2;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* ____children_3;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* ____measureFunction_4;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* ____baselineFunction_5;
	// System.Object UnityEngine.Yoga.YogaNode::_data
	RuntimeObject* ____data_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA  : public MulticastDelegate_t
{
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Yoga.Logger
struct Logger_t092B1218ED93DD47180692D5761559B2054234A0  : public MulticastDelegate_t
{
};

// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2  : public RuntimeArray
{
	ALIGN_FIELD (8) VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 m_Items[1];

	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline (const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.TextVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19_gshared (const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_gshared (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.TextVertex>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7_gshared (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 ___nativeArray0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m6EBB551060750C05ED566CCB896C65810C1BB6BC (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_m6F05627862225682B30DEE270AF5DBC92A3F5E4A (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_m55403B2B8AB39FDB5A3DB015876D5F050CBE2E12 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_m35CD57DCE2F418647FB611724CD0B06ED5EA91D2 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m3A70ED59754A7D67E27CE780CBCBB6A4DF585C72 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_m38A7998A22EF0102C503F240323511654889D7C6 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_m4EF83ED5DC1934CCE14E4AADEA8A730D2889CAAC (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_m6F611BD851C531FBCBB7E5BCC06886089DAF92FD (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_m65A5C6F9FAF9C804FE3299AF793B314D89C940CA (intptr_t ___ygNode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_m2550E140E21149C6CDEC2DCB80DD9E9D48895F82 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeIsDirty_m3D3979D37CB7D3FC3EF5F0986A3AEEC3CB5A4C68 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMarkDirty_m198894367903C588630F3798F546B7FBFDB3D3D8 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeGetHasNewLayout_m1448EE1836A9A2D0DC3FDB8D38F0655E2E0ECD9E (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCopyStyle_mB8ACE09355CEE68478C8198F30788AE536D2D1B9 (intptr_t ___dstNode0, intptr_t ___srcNode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_m572CB2FFCA3A4F9E4D6F1D8809C410A19BD82C9F (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_m1DA9A504EB3BD07A61941C692C02DD400E44C73D (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_mEB1ABE291C84FAEF8112585734A05F5989905B70 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_mBC30EB43D186C9F977B415445CD8906CA3DAF61C (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_m4AF9BC14BF935EC05DF59AB5C4A613D2DF9AECA9 (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_m4F8EBDBC68466EF490CA01F81FD5945C9CCF5402 (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_mD284119C6D3D043671B09CCFF6C1C864F1D41855 (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_mC9EACF4137A84B413EB0C8C3315D308435FD58D5 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlex_m0378FB3565379BF2A86E4D32D4CF3D527FC22D7A (intptr_t ___node0, float ___flex1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_mC5D64E0AFD69DCA7D43867F0AFAAC5AAF43CAC16 (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_mBEB442044933F36011FB1C5D48DC6BB565F22EE5 (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m53E89CA73D54E0D61C0AE43E46E71880B19E71A3 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_m75E0FE2D72735385BD4B768E7E6595BEB2767B33 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_mA8EAC51EB221DAA641C0C113B1C888EEC8C134A9 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_m0E5E9A14D79DA3097D850A1399E815C7EB5C1711 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mC0573A277B1B16B80CC8A9791C4477AF191EB0C9 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m51B0C20BC69889051707A5656AC8E923214BCE28 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_mB51BB945080154E9C68427923798645B681F3F23 (intptr_t ___node0, float ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_mD0A25B33B11FE4A31513388555CCF2666C961454 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_m2E2855E43F07820F05EB8B4EA48E772A8984D405 (intptr_t ___node0, float ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_m629E9CC47E379D44E9772713BA95FD7EB8F3E49B (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_mFA9603DDDDF6E0858A17A52AE09848F917B59A64 (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mDD919E0532D33DE34AFA75DA7FCD918AE710C12A (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m53E372211ECD5CF9E338EB92FC6E812AD16E57A5 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_m511DBAB717BE516FD441F65AE02AC96E7C28DC2A (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_mD4BAEFA7CC9566284701288E58C9E8FFF90D0DC5 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_mAD8DF2A468F3BED78662C0FFA09384C31953B18A (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_mE3932DE6D89F927AB48EE46B75D66A3619680E44 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m96B29A4AE1C66E0FEF096DA5050CEC94442C459A (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m5372EE7B9E7CDE267BF9BF0FFC355CB4FD288297 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetRight_m0068329B2B59D0DBBB0DEC009D5B0F1F655B3540 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBottom_m6F4451718486D0A549E1D5BEA7C8501DB62ACDA4 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m9D52EC9FB8D5FCC5EE14E070C9092237211EA492 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_m5D2329F68FBBBA67CDEE3E673C787C2548514596 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_mF50DB42B8D5EA25253E77D8F9EBDBA8A4CC8034E (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Count()
inline int32_t List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetHasNewLayout_mBE5DBEC31B5DC5AD534B332B102ACDBD8B657D3E (intptr_t ___node0, bool ___hasNewLayout1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::.ctor(System.Int32)
inline void List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::Insert(System.Int32,T)
inline void List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___index0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*, int32_t, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_m3D9EEA4EF0E478F0D04C0C074BFB046FDB103503 (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::get_Item(System.Int32)
inline YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* (*) (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8 (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_m2C8E3F3B387CE8961A8881B5BB77530B60058D68 (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A (intptr_t ___ygNode0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_m4228A419D4F5A31A523E74B9114DB57F3E446363 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mF3175AEA27BA26593CDAE27E2C47E08C3AB2F56D (intptr_t ___node0, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_YGNodeStyleGetDirection_mD05F2B74EA9428572D5DA28B6B906E4A52568618 (intptr_t ___node0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCalculateLayout_m61971612B736E4A072F2CE9607360F3A0E46CC0F (intptr_t ___node0, float ___availableWidth1, float ___availableHeight2, int32_t ___parentDirection3, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<UnityEngine.Yoga.YogaNode>()
inline RuntimeObject* Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline)(method);
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_mF1AB16FC5A940C05E458238DBFC5BC0A04D40AFC (intptr_t ___ygNode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m63E4F7ECDAA151F463EFE996C63586FACD11BB4C (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigNew_m11896EDBABF4FAE5486DD882CBF71AB15D3B1EEB (const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, intptr_t ___ygConfig0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m39FFBA6301AAACAFE0570ABA725972240550981C (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGConfigGetUseWebDefaults_m0F1759A9663FF89B89F3BE95E66B761375602DE2 (intptr_t ___config0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetUseWebDefaults_mBA0DEB8659A98F62BD44F809D80DB1B21B9AC55E (intptr_t ___config0, bool ___useWebDefaults1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_m691E9B0FC19C5C2864A5239B27E8ABC2E00D70D9 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m89E2B96C9637A2A250147771D3C6FEAC4D0F458A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m1BD66A8B7482CB49C9D4B0241E88CCE8EB0743FB (float ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) ;
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Point_m1EF4416D27335FE09A3CD7D3CD8307763FA991BE (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetCursorPosition_m88B61DC7C5E4F17AC5E75F54D9B9B9F56F14F290 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, int32_t ___cursorPosition2, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_mC1ADB603729FAA6D6437B1E2031224A386FE1F9F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_m917EE94AF5471D5E962AB3BEB0C7592A7F917BC2 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.TextVertex>()
inline int32_t UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19_gshared)(method);
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_m21E5914758FA0C969689CAA41EE14D265DAEED05 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.TextVertex>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7 (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7_gshared)(___nativeArray0, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___condition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetOffset_m65E9D221159D69B6AA2F3B9F93EB010A5709BE05 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_Injected_m1E6872A8C0AC95CFDF74C202595553A1E470472F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_Injected_m69A3B288A6F117F0A596A2B7222C398D6008AE7B (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetCursorPosition_Injected_mC5C07A73AF3CC29F5E6333E7CF1D33DF1633B9BA (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, int32_t ___cursorPosition2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_Injected_mB5CAF8BEBFB7228E06BD36FB3B9C188C1A12127F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetOffset_Injected_m5A58EA8CF5C12A4E039224EFFD860A022BC15156 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret2, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.Camera>::Invoke(T)
inline void Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, intptr_t, const RuntimeMethod*))Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_Injected_m4CBBCDD753216F330B41766DA7C0D217FE281D64 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_Injected_m333581839C1FABCFAEE7EFBDF945ECEF7CCAE610 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___scissorRect0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_CreateStencilState_Injected_m47D217E56E67F17F06B389BF566BF0566D0F5479 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* ___stencilState0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetActiveViewport_Injected_mA7FB4F05C7BDF5ABC71D228CE66B33954507C46D (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetUnityProjectionMatrix_Injected_m9E6F597B899AD99C931FBAFC0363B6F6E666CA81 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret0, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaNode::set_Left(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Left_m45FA7CF627DF74C1F795DA1488EF943DA77067A6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Top(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Top_m2F3AE8DA9025B7A1EB370C67C8B4560BA23CE5A4 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 1, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Right(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Right_m35D7139ECEB7CC1B82A5DCFBFDC96EA9AFC686E5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 2, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Bottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Bottom_m03A39B84DE5056608BCFE43E98956BF58035347F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF(__this, 3, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePosition(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePosition_m17081B8019875ACCC6D5215A1FB0D6B64C9FD7CF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		Native_YGNodeStyleSetPositionPercent_m6EBB551060750C05ED566CCB896C65810C1BB6BC(L_2, L_3, L_4, NULL);
		goto IL_003d;
	}

IL_0027:
	{
		intptr_t L_5 = __this->____ygNode_0;
		int32_t L_6 = ___edge0;
		float L_7;
		L_7 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		Native_YGNodeStyleSetPosition_m6F05627862225682B30DEE270AF5DBC92A3F5E4A(L_5, L_6, L_7, NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginLeft_m6DD0D35E142EB59ED9280D1C4EA2F038C132FC4B (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginTop_mA43AB8E85422F7980BECF2DEF66F736C27E8E972 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 1, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginRight_m4D2DF290FF89E2A9CF33DA815985B79DFA864A3C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 2, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MarginBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MarginBottom_m0CCF6AF5FC2C6ACA8E2E084AABC83322A215AEEC (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065(__this, 3, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStyleMargin(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStyleMargin_m9F59AA83FE83F289CC286EF0C33F8558055A8065 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		Native_YGNodeStyleSetMarginPercent_m55403B2B8AB39FDB5A3DB015876D5F050CBE2E12(L_2, L_3, L_4, NULL);
		goto IL_005c;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		intptr_t L_7 = __this->____ygNode_0;
		int32_t L_8 = ___edge0;
		Native_YGNodeStyleSetMarginAuto_m35CD57DCE2F418647FB611724CD0B06ED5EA91D2(L_7, L_8, NULL);
		goto IL_005c;
	}

IL_0046:
	{
		intptr_t L_9 = __this->____ygNode_0;
		int32_t L_10 = ___edge0;
		float L_11;
		L_11 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		Native_YGNodeStyleSetMargin_m3A70ED59754A7D67E27CE780CBCBB6A4DF585C72(L_9, L_10, L_11, NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingLeft(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingLeft_mDC797F410F72554FAD67A14DC5002656C985D06D (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingTop(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingTop_mE59506FA241E2BFD3AC4CEB219000993CC950F01 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 1, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingRight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingRight_mA277C8926B03AE1FE89F46A6A24882D61155E7F8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 2, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PaddingBottom(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PaddingBottom_mD4BE8EAD7054982975BB95088DC507B355B57D32 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = ___value0;
		YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707(__this, 3, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetStylePadding(UnityEngine.Yoga.YogaEdge,UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetStylePadding_m4591446410152C5EFEEFC41D208431CEDFBBF707 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___edge0, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value1), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		int32_t L_3 = ___edge0;
		float L_4;
		L_4 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		Native_YGNodeStyleSetPaddingPercent_m38A7998A22EF0102C503F240323511654889D7C6(L_2, L_3, L_4, NULL);
		goto IL_003d;
	}

IL_0027:
	{
		intptr_t L_5 = __this->____ygNode_0;
		int32_t L_6 = ___edge0;
		float L_7;
		L_7 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value1), NULL);
		Native_YGNodeStyleSetPadding_m4EF83ED5DC1934CCE14E4AADEA8A730D2889CAAC(L_5, L_6, L_7, NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderLeftWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderLeftWidth_m6F0ADE17EA294DC33E0EBBB17E4DF867B5E73CA5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD(L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderTopWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderTopWidth_m39A26DC4E61833C0F8F58EA28A71AA35C4553005 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD(L_0, 1, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderRightWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderRightWidth_m047EE6ECCF13C9E44885BCE8FA20D2FD0DA498C6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD(L_0, 2, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_BorderBottomWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_BorderBottomWidth_m10BD7CB272CE0342EEA05F413A78BB6CE34FD8F3 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD(L_0, 3, L_1, NULL);
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginLeft_mBBDC00F49301F60C09C5B3BF8782EAB5C814DFB4 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17(L_0, 0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginTop_m010905C6DDD8C42E540AAB4DDCD2AFA6FFE13BE6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17(L_0, 1, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginRight_mE6BDC383CDA9AFD8C827B928A86EF13A8D50A566 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17(L_0, 2, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutMarginBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutMarginBottom_m46D9999CE1CF2957DE68BA4024B36F9A50F08151 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17(L_0, 3, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingLeft_m315AB18C71CFF8207E9DBC8D7538BFE0A0569421 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA(L_0, 0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingTop_m76AB547D25D8C51B5CA987BD7D8D586AF284E8D8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA(L_0, 1, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingRight_m3AB9145B687CB1ADE6B6EFBDBBF2928301B0FEB1 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA(L_0, 2, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutPaddingBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutPaddingBottom_m08100BDABCA07492B6BBF8FD57BCB06AD460049C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA(L_0, 3, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderLeft_mC799A7EC6C1ED244DDD852634ACC768CEADFD366 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861(L_0, 0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderTop_m5FEAEE25D61F72B530BCC9B8B11A374BAD94D637 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861(L_0, 1, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderRight_mC22B436C97ABEF06221F3BF9F1506E527E9CEF99 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861(L_0, 2, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBorderBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBorderBottom_m06786864F2149A50CBD5F551977E46737A614D91 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861(L_0, 3, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::.ctor(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B2_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B1_0 = NULL;
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* G_B3_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_0 = ___config0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000f;
		}
	}
	{
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = ___config0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_2 = ((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		NullCheck(G_B3_1);
		G_B3_1->____config_1 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____config_1), (void*)G_B3_0);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_3 = __this->____config_1;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(L_3, NULL);
		intptr_t L_5;
		L_5 = Native_YGNodeNewWithConfig_m6F611BD851C531FBCBB7E5BCC06886089DAF92FD(L_4, NULL);
		__this->____ygNode_0 = L_5;
		intptr_t L_6 = __this->____ygNode_0;
		intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_8;
		L_8 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_6, L_7, NULL);
		V_0 = L_8;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_10 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode__ctor_m824433D9174C4325E87EC380CD5EB5F10C20A35C_RuntimeMethod_var)));
	}

IL_004f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Finalize_mD0E1733478B7861392542C1A2F8161B462CD6327 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			intptr_t L_0 = __this->____ygNode_0;
			Native_YGNodeFree_m65A5C6F9FAF9C804FE3299AF793B314D89C940CA(L_0, NULL);
			goto IL_0018;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Config(UnityEngine.Yoga.YogaConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Config_mFEE688C9B0B7EFFE581F278746A7C4CD76449DE5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* G_B2_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B2_1 = NULL;
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* G_B1_0 = NULL;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* G_B1_1 = NULL;
	{
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_0 = ___value0;
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_2 = ((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000c:
	{
		NullCheck(G_B2_1);
		G_B2_1->____config_1 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____config_1), (void*)G_B2_0);
		intptr_t L_3 = __this->____ygNode_0;
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_4 = __this->____config_1;
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(L_4, NULL);
		Native_YGNodeSetConfig_m2550E140E21149C6CDEC2DCB80DD9E9D48895F82(L_3, L_5, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsDirty_m24743ABB33BC9F32F946B3FD9C5DB85F77285781 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->____ygNode_0;
		bool L_1;
		L_1 = Native_YGNodeIsDirty_m3D3979D37CB7D3FC3EF5F0986A3AEEC3CB5A4C68(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::MarkDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_MarkDirty_mCCCABC1717DCAF3E313846069AD503959B184930 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		Native_YGNodeMarkDirty_m198894367903C588630F3798F546B7FBFDB3D3D8(L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_HasNewLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_HasNewLayout_m801E00B631071A29A968ACA0489B1BDC2CE3CE05 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->____ygNode_0;
		bool L_1;
		L_1 = Native_YGNodeGetHasNewLayout_m1448EE1836A9A2D0DC3FDB8D38F0655E2E0ECD9E(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsMeasureDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsMeasureDefined_m14B27C81AD102F307669F55E3FDFEE7E7E61B7EC (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_0 = __this->____measureFunction_4;
		V_0 = (bool)((!(((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaNode::get_IsBaselineDefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_0 = __this->____baselineFunction_5;
		V_0 = (bool)((!(((RuntimeObject*)(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::CopyStyle(UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_CopyStyle_mB3AFC6604AA23297A7DA93E5DE9A36CC3CD4B65C (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___srcNode0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___srcNode0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->____ygNode_0;
		Native_YGNodeCopyStyle_mB8ACE09355CEE68478C8198F30788AE536D2D1B9(L_0, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexDirection(UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexDirection_mFF74AB011A465EFD90BAFDE41F00207619429306 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetFlexDirection_m572CB2FFCA3A4F9E4D6F1D8809C410A19BD82C9F(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_JustifyContent(UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_JustifyContent_m008464E5DA37AEDD2DDA37E89CEB2E3A1C25C286 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetJustifyContent_m1DA9A504EB3BD07A61941C692C02DD400E44C73D(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Display(UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Display_mCD8A7B298E87852734559A41DC01EF96827032C2 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetDisplay_mEB1ABE291C84FAEF8112585734A05F5989905B70(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignItems(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignItems_m8443F468878AF728A2F82505F4B53D2065DA89BF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignItems_mBC30EB43D186C9F977B415445CD8906CA3DAF61C(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignSelf(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignSelf_mD678D097FA3DB20EF1568A9B17C7423CC8B0BCBF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignSelf_m4AF9BC14BF935EC05DF59AB5C4A613D2DF9AECA9(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_AlignContent(UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_AlignContent_m9AC19A64AAAACEB85DA4FCF94D9372A4556F0845 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetAlignContent_m4F8EBDBC68466EF490CA01F81FD5945C9CCF5402(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_PositionType(UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_PositionType_m958F7BB665C87711439BED68CCB9E7C63798FEA5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetPositionType_mD284119C6D3D043671B09CCFF6C1C864F1D41855(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Wrap(UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Wrap_m01F365128F74AC617966A2B3EEF340150AB59EE6 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetFlexWrap_mC9EACF4137A84B413EB0C8C3315D308435FD58D5(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Flex(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Flex_mCFCB82869C82DD5CB40151681576F4A40F381D6A (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlex_m0378FB3565379BF2A86E4D32D4CF3D527FC22D7A(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexGrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexGrow_m884FDA11A3F7FAF051CB840829442FE14CC3CC2B (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlexGrow_mC5D64E0AFD69DCA7D43867F0AFAAC5AAF43CAC16(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexShrink(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexShrink_m30FC430AB92EB6FF05B394D25D728DC4DB2B4FA5 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___value0;
		Native_YGNodeStyleSetFlexShrink_mBEB442044933F36011FB1C5D48DC6BB565F22EE5(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_FlexBasis(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_FlexBasis_m24CCC6C38C4612359E942EEF5EA5FDF4D24E7671 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetFlexBasisPercent_m53E89CA73D54E0D61C0AE43E46E71880B19E71A3(L_2, L_3, NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->____ygNode_0;
		Native_YGNodeStyleSetFlexBasisAuto_m75E0FE2D72735385BD4B768E7E6595BEB2767B33(L_6, NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->____ygNode_0;
		float L_8;
		L_8 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetFlexBasis_mA8EAC51EB221DAA641C0C113B1C888EEC8C134A9(L_7, L_8, NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Width(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Width_mA267DDF44981884C4C630FCBC602595F58AB05E8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetWidthPercent_m0E5E9A14D79DA3097D850A1399E815C7EB5C1711(L_2, L_3, NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->____ygNode_0;
		Native_YGNodeStyleSetWidthAuto_mC0573A277B1B16B80CC8A9791C4477AF191EB0C9(L_6, NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->____ygNode_0;
		float L_8;
		L_8 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetWidth_m51B0C20BC69889051707A5656AC8E923214BCE28(L_7, L_8, NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Height(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Height_m4AFF9C286F42919CA1C5C7A152A4ED477C56969E (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetHeightPercent_mB51BB945080154E9C68427923798645B681F3F23(L_2, L_3, NULL);
		goto IL_0059;
	}

IL_0026:
	{
		int32_t L_4;
		L_4 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)3))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		intptr_t L_6 = __this->____ygNode_0;
		Native_YGNodeStyleSetHeightAuto_mD0A25B33B11FE4A31513388555CCF2666C961454(L_6, NULL);
		goto IL_0059;
	}

IL_0044:
	{
		intptr_t L_7 = __this->____ygNode_0;
		float L_8;
		L_8 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetHeight_m2E2855E43F07820F05EB8B4EA48E772A8984D405(L_7, L_8, NULL);
	}

IL_0059:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxWidth_m18194AF8ECC926D70493BAC8C8041349DCF0DE43 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMaxWidthPercent_m629E9CC47E379D44E9772713BA95FD7EB8F3E49B(L_2, L_3, NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->____ygNode_0;
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMaxWidth_mFA9603DDDDF6E0858A17A52AE09848F917B59A64(L_4, L_5, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MaxHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MaxHeight_m25F7366BA8516D5C4B3EBDA5A797B33704A4CAB8 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMaxHeightPercent_mDD919E0532D33DE34AFA75DA7FCD918AE710C12A(L_2, L_3, NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->____ygNode_0;
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMaxHeight_m53E372211ECD5CF9E338EB92FC6E812AD16E57A5(L_4, L_5, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinWidth(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinWidth_mC876A8736AA69BC6100AA5E361A0E9190D02DB21 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMinWidthPercent_m511DBAB717BE516FD441F65AE02AC96E7C28DC2A(L_2, L_3, NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->____ygNode_0;
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMinWidth_mD4BAEFA7CC9566284701288E58C9E8FFF90D0DC5(L_4, L_5, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_MinHeight(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_MinHeight_mB3301DB6766234FE7D594DE46DF59C31F0F29643 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___value0), NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = __this->____ygNode_0;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMinHeightPercent_mAD8DF2A468F3BED78662C0FFA09384C31953B18A(L_2, L_3, NULL);
		goto IL_003b;
	}

IL_0026:
	{
		intptr_t L_4 = __this->____ygNode_0;
		float L_5;
		L_5 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___value0), NULL);
		Native_YGNodeStyleSetMinHeight_mE3932DE6D89F927AB48EE46B75D66A3619680E44(L_4, L_5, NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutX_mEEE47120D6DB656AC643A1294AFE3CC79E93C492 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetLeft_m96B29A4AE1C66E0FEF096DA5050CEC94442C459A(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutY_m79DCF02D705920434DCE9B534FFAAC936A268173 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetTop_m5372EE7B9E7CDE267BF9BF0FFC355CB4FD288297(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutRight_mEBCE0188575C7FE3D72255011803E1EC56685F24 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetRight_m0068329B2B59D0DBBB0DEC009D5B0F1F655B3540(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutBottom_m2F6857AB410F79908EA7098DA19F09BE07245269 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetBottom_m6F4451718486D0A549E1D5BEA7C8501DB62ACDA4(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutWidth_mF68064634C5682A2C0C70DAAF6CB45C39D3F216A (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetWidth_m9D52EC9FB8D5FCC5EE14E070C9092237211EA492(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::get_LayoutHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_get_LayoutHeight_m0A56155F1B067D0127E5A38204C2F0A9BAB605BD (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1;
		L_1 = Native_YGNodeLayoutGetHeight_m5D2329F68FBBBA67CDEE3E673C787C2548514596(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::set_Overflow(UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_set_Overflow_m5DD8FEB426E1376D210ED0057C4A12DD8E18417F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		int32_t L_1 = ___value0;
		Native_YGNodeStyleSetOverflow_mF50DB42B8D5EA25253E77D8F9EBDBA8A4CC8034E(L_0, L_1, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Yoga.YogaNode::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaNode_get_Count_mBBD0D15ACBBA109563C7D22EAB1F58094C4562AD (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_1 = __this->____children_3;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline(L_1, List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::MarkLayoutSeen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_MarkLayoutSeen_m899C39B9392134C5B7835217D18FCC8D5E7A1E5A (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		Native_YGNodeSetHasNewLayout_mBE5DBEC31B5DC5AD534B332B102ACDBD8B657D3E(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Insert(System.Int32,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Insert_m9182FC436BFB915BDAB6492465B6E7832B1921CF (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___index0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		V_0 = (bool)((((RuntimeObject*)(List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_2 = (List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*)il2cpp_codegen_object_new(List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9(L_2, 4, List_1__ctor_m7F8A2C64FB277D2E5F22096BD170311CAE6BB5D9_RuntimeMethod_var);
		__this->____children_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_3), (void*)L_2);
	}

IL_001c:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_3 = __this->____children_3;
		int32_t L_4 = ___index0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___node1;
		NullCheck(L_3);
		List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288(L_3, L_4, L_5, List_1_Insert_mA92B83F973FB95C659066E38F975266A82781288_RuntimeMethod_var);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_6 = ___node1;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_7, __this, NULL);
		NullCheck(L_6);
		L_6->____parent_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____parent_2), (void*)L_7);
		intptr_t L_8 = __this->____ygNode_0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_9 = ___node1;
		NullCheck(L_9);
		intptr_t L_10 = L_9->____ygNode_0;
		int32_t L_11 = ___index0;
		Native_YGNodeInsertChild_m3D9EEA4EF0E478F0D04C0C074BFB046FDB103503(L_8, L_10, L_11, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* V_0 = NULL;
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2;
		L_2 = List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005(L_0, L_1, List_1_get_Item_m40CC53AA08CACE00E704271718B2EC1EA8370005_RuntimeMethod_var);
		V_0 = L_2;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_3 = V_0;
		NullCheck(L_3);
		L_3->____parent_2 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____parent_2), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_4 = __this->____children_3;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8(L_4, L_5, List_1_RemoveAt_mBB0834285CA3155F375FB93327E51E35ADA652A8_RuntimeMethod_var);
		intptr_t L_6 = __this->____ygNode_0;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = V_0;
		NullCheck(L_7);
		intptr_t L_8 = L_7->____ygNode_0;
		Native_YGNodeRemoveChild_m2C8E3F3B387CE8961A8881B5BB77530B60058D68(L_6, L_8, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_Clear_mCB7D5DF9967646CFD9A156DEAC56E13A0BA60826 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0027;
	}

IL_0011:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_2 = __this->____children_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline(L_2, List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		YogaNode_RemoveAt_m344D767FF02FB69813F270953ACFEE28E5DEF83F(__this, ((int32_t)il2cpp_codegen_subtract(L_3, 1)), NULL);
	}

IL_0027:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_4 = __this->____children_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_inline(L_4, List_1_get_Count_m1733F3D0927028C67ADD808F9E5808F07053C114_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0011;
		}
	}
	{
	}

IL_003a:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::SetMeasureFunction(UnityEngine.Yoga.MeasureFunction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_SetMeasureFunction_mD658FA9C0543C022DB09D54B49BA38354B558D04 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* ___measureFunction0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_0 = ___measureFunction0;
		__this->____measureFunction_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____measureFunction_4), (void*)L_0);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_1 = ___measureFunction0;
		V_0 = (bool)((((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3;
		L_3 = YogaNode_get_IsBaselineDefined_m7E3BFBBB4F59F44881E6A58B342FABB672119DF5(__this, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		intptr_t L_5 = __this->____ygNode_0;
		Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A(L_5, (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*)NULL, NULL);
	}

IL_002d:
	{
		intptr_t L_6 = __this->____ygNode_0;
		Native_YGNodeRemoveMeasureFunc_m4228A419D4F5A31A523E74B9114DB57F3E446363(L_6, NULL);
		goto IL_0057;
	}

IL_003c:
	{
		intptr_t L_7 = __this->____ygNode_0;
		Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A(L_7, __this, NULL);
		intptr_t L_8 = __this->____ygNode_0;
		Native_YGNodeSetMeasureFunc_mF3175AEA27BA26593CDAE27E2C47E08C3AB2F56D(L_8, NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaNode::CalculateLayout(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaNode_CalculateLayout_mF1185A522FA0E60BA47039893A3EE3419B6F1D37 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, float ___width0, float ___height1, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygNode_0;
		float L_1 = ___width0;
		float L_2 = ___height1;
		intptr_t L_3 = __this->____ygNode_0;
		int32_t L_4;
		L_4 = Native_YGNodeStyleGetDirection_mD05F2B74EA9428572D5DA28B6B906E4A52568618(L_3, NULL);
		Native_YGNodeCalculateLayout_m61971612B736E4A072F2CE9607360F3A0E46CC0F(L_0, L_1, L_2, L_4, NULL);
		return;
	}
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.YogaNode::MeasureInternal(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___node0;
		NullCheck(L_1);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_2 = L_1->____measureFunction_4;
		G_B3_0 = ((((RuntimeObject*)(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807D31E7D618CFE25644A0B838EBD88C978E78F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___node0;
		NullCheck(L_5);
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* L_6 = L_5->____measureFunction_4;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = ___node0;
		float L_8 = ___width1;
		int32_t L_9 = ___widthMode2;
		float L_10 = ___height3;
		int32_t L_11 = ___heightMode4;
		NullCheck(L_6);
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_12;
		L_12 = MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		V_1 = L_12;
		goto IL_0034;
	}

IL_0034:
	{
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Yoga.YogaNode::BaselineInternal(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_0 = ___node0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_1 = ___node0;
		NullCheck(L_1);
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_2 = L_1->____baselineFunction_5;
		G_B3_0 = ((((RuntimeObject*)(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB7EACAE6B3BFBFD70862A8840592343396CF46)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757_RuntimeMethod_var)));
	}

IL_0020:
	{
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_5 = ___node0;
		NullCheck(L_5);
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* L_6 = L_5->____baselineFunction_5;
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_7 = ___node0;
		float L_8 = ___width1;
		float L_9 = ___height2;
		NullCheck(L_6);
		float L_10;
		L_10 = BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline(L_6, L_7, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_0031;
	}

IL_0031:
	{
		float L_11 = V_1;
		return L_11;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_GetEnumerator_m93CA3A3DC1ED5F958FB6E7D3CFB534F9A374B394 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_inline(Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_3 = __this->____children_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IEnumerator UnityEngine.Yoga.YogaNode::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YogaNode_System_Collections_IEnumerable_GetEnumerator_mF3D17F0F0C2E0C5FA4ECE8EDE724F0E332E900FA (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_0 = __this->____children_3;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_inline(Enumerable_Empty_TisYogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA_m4485546A3BF44A4910BBCCC57011E15CB49F3BE6_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		List_1_t84B666107A8A3ECB0F5A24B0243137D056DA9165* L_3 = __this->____children_3;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Yoga.YogaNode>::GetEnumerator() */, IEnumerable_1_t1A289AA616E33E751647D01D6EEEB0565390CC17_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGNodeNewWithConfig_m6F611BD851C531FBCBB7E5BCC06886089DAF92FD (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Native_YGNodeNewWithConfig_m6F611BD851C531FBCBB7E5BCC06886089DAF92FD_ftn) (intptr_t);
	static Native_YGNodeNewWithConfig_m6F611BD851C531FBCBB7E5BCC06886089DAF92FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeNewWithConfig_m6F611BD851C531FBCBB7E5BCC06886089DAF92FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeNewWithConfig(System.IntPtr)");
	intptr_t icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFree_m65A5C6F9FAF9C804FE3299AF793B314D89C940CA (intptr_t ___ygNode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___ygNode0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_4 = ___ygNode0;
		Native_YGNodeFreeInternal_mF1AB16FC5A940C05E458238DBFC5BC0A04D40AFC(L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeFreeInternal_mF1AB16FC5A940C05E458238DBFC5BC0A04D40AFC (intptr_t ___ygNode0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeFreeInternal_mF1AB16FC5A940C05E458238DBFC5BC0A04D40AFC_ftn) (intptr_t);
	static Native_YGNodeFreeInternal_mF1AB16FC5A940C05E458238DBFC5BC0A04D40AFC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeFreeInternal_mF1AB16FC5A940C05E458238DBFC5BC0A04D40AFC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___ygNode0);
}
// System.Void UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A (intptr_t ___ygNode0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A_ftn) (intptr_t, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*);
	static Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGSetManagedObject_m956D442A7E5D175AB52901C54E4F1456691F8C5A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGSetManagedObject(System.IntPtr,UnityEngine.Yoga.YogaNode)");
	_il2cpp_icall_func(___ygNode0, ___node1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetConfig_m2550E140E21149C6CDEC2DCB80DD9E9D48895F82 (intptr_t ___ygNode0, intptr_t ___config1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeSetConfig_m2550E140E21149C6CDEC2DCB80DD9E9D48895F82_ftn) (intptr_t, intptr_t);
	static Native_YGNodeSetConfig_m2550E140E21149C6CDEC2DCB80DD9E9D48895F82_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetConfig_m2550E140E21149C6CDEC2DCB80DD9E9D48895F82_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetConfig(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___ygNode0, ___config1);
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigGetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigGetDefault_m89E2B96C9637A2A250147771D3C6FEAC4D0F458A (const RuntimeMethod* method) 
{
	typedef intptr_t (*Native_YGConfigGetDefault_m89E2B96C9637A2A250147771D3C6FEAC4D0F458A_ftn) ();
	static Native_YGConfigGetDefault_m89E2B96C9637A2A250147771D3C6FEAC4D0F458A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetDefault_m89E2B96C9637A2A250147771D3C6FEAC4D0F458A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetDefault()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.IntPtr UnityEngine.Yoga.Native::YGConfigNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Native_YGConfigNew_m11896EDBABF4FAE5486DD882CBF71AB15D3B1EEB (const RuntimeMethod* method) 
{
	typedef intptr_t (*Native_YGConfigNew_m11896EDBABF4FAE5486DD882CBF71AB15D3B1EEB_ftn) ();
	static Native_YGConfigNew_m11896EDBABF4FAE5486DD882CBF71AB15D3B1EEB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigNew_m11896EDBABF4FAE5486DD882CBF71AB15D3B1EEB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigNew()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigFree(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFree_m39FFBA6301AAACAFE0570ABA725972240550981C (intptr_t ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___config0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		intptr_t L_4 = ___config0;
		Native_YGConfigFreeInternal_m63E4F7ECDAA151F463EFE996C63586FACD11BB4C(L_4, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigFreeInternal_m63E4F7ECDAA151F463EFE996C63586FACD11BB4C (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGConfigFreeInternal_m63E4F7ECDAA151F463EFE996C63586FACD11BB4C_ftn) (intptr_t);
	static Native_YGConfigFreeInternal_m63E4F7ECDAA151F463EFE996C63586FACD11BB4C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigFreeInternal_m63E4F7ECDAA151F463EFE996C63586FACD11BB4C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigFreeInternal(System.IntPtr)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetUseWebDefaults_mBA0DEB8659A98F62BD44F809D80DB1B21B9AC55E (intptr_t ___config0, bool ___useWebDefaults1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGConfigSetUseWebDefaults_mBA0DEB8659A98F62BD44F809D80DB1B21B9AC55E_ftn) (intptr_t, bool);
	static Native_YGConfigSetUseWebDefaults_mBA0DEB8659A98F62BD44F809D80DB1B21B9AC55E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetUseWebDefaults_mBA0DEB8659A98F62BD44F809D80DB1B21B9AC55E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetUseWebDefaults(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___config0, ___useWebDefaults1);
}
// System.Boolean UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGConfigGetUseWebDefaults_m0F1759A9663FF89B89F3BE95E66B761375602DE2 (intptr_t ___config0, const RuntimeMethod* method) 
{
	typedef bool (*Native_YGConfigGetUseWebDefaults_m0F1759A9663FF89B89F3BE95E66B761375602DE2_ftn) (intptr_t);
	static Native_YGConfigGetUseWebDefaults_m0F1759A9663FF89B89F3BE95E66B761375602DE2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigGetUseWebDefaults_m0F1759A9663FF89B89F3BE95E66B761375602DE2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigGetUseWebDefaults(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___config0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGConfigSetPointScaleFactor_m691E9B0FC19C5C2864A5239B27E8ABC2E00D70D9 (intptr_t ___config0, float ___pixelsInPoint1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGConfigSetPointScaleFactor_m691E9B0FC19C5C2864A5239B27E8ABC2E00D70D9_ftn) (intptr_t, float);
	static Native_YGConfigSetPointScaleFactor_m691E9B0FC19C5C2864A5239B27E8ABC2E00D70D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGConfigSetPointScaleFactor_m691E9B0FC19C5C2864A5239B27E8ABC2E00D70D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGConfigSetPointScaleFactor(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___config0, ___pixelsInPoint1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeInsertChild_m3D9EEA4EF0E478F0D04C0C074BFB046FDB103503 (intptr_t ___node0, intptr_t ___child1, uint32_t ___index2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeInsertChild_m3D9EEA4EF0E478F0D04C0C074BFB046FDB103503_ftn) (intptr_t, intptr_t, uint32_t);
	static Native_YGNodeInsertChild_m3D9EEA4EF0E478F0D04C0C074BFB046FDB103503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeInsertChild_m3D9EEA4EF0E478F0D04C0C074BFB046FDB103503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeInsertChild(System.IntPtr,System.IntPtr,System.UInt32)");
	_il2cpp_icall_func(___node0, ___child1, ___index2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveChild_m2C8E3F3B387CE8961A8881B5BB77530B60058D68 (intptr_t ___node0, intptr_t ___child1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeRemoveChild_m2C8E3F3B387CE8961A8881B5BB77530B60058D68_ftn) (intptr_t, intptr_t);
	static Native_YGNodeRemoveChild_m2C8E3F3B387CE8961A8881B5BB77530B60058D68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveChild_m2C8E3F3B387CE8961A8881B5BB77530B60058D68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveChild(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___node0, ___child1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCalculateLayout_m61971612B736E4A072F2CE9607360F3A0E46CC0F (intptr_t ___node0, float ___availableWidth1, float ___availableHeight2, int32_t ___parentDirection3, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeCalculateLayout_m61971612B736E4A072F2CE9607360F3A0E46CC0F_ftn) (intptr_t, float, float, int32_t);
	static Native_YGNodeCalculateLayout_m61971612B736E4A072F2CE9607360F3A0E46CC0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeCalculateLayout_m61971612B736E4A072F2CE9607360F3A0E46CC0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeCalculateLayout(System.IntPtr,System.Single,System.Single,UnityEngine.Yoga.YogaDirection)");
	_il2cpp_icall_func(___node0, ___availableWidth1, ___availableHeight2, ___parentDirection3);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMarkDirty_m198894367903C588630F3798F546B7FBFDB3D3D8 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeMarkDirty_m198894367903C588630F3798F546B7FBFDB3D3D8_ftn) (intptr_t);
	static Native_YGNodeMarkDirty_m198894367903C588630F3798F546B7FBFDB3D3D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeMarkDirty_m198894367903C588630F3798F546B7FBFDB3D3D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeMarkDirty(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Boolean UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeIsDirty_m3D3979D37CB7D3FC3EF5F0986A3AEEC3CB5A4C68 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef bool (*Native_YGNodeIsDirty_m3D3979D37CB7D3FC3EF5F0986A3AEEC3CB5A4C68_ftn) (intptr_t);
	static Native_YGNodeIsDirty_m3D3979D37CB7D3FC3EF5F0986A3AEEC3CB5A4C68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeIsDirty_m3D3979D37CB7D3FC3EF5F0986A3AEEC3CB5A4C68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeIsDirty(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeCopyStyle_mB8ACE09355CEE68478C8198F30788AE536D2D1B9 (intptr_t ___dstNode0, intptr_t ___srcNode1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeCopyStyle_mB8ACE09355CEE68478C8198F30788AE536D2D1B9_ftn) (intptr_t, intptr_t);
	static Native_YGNodeCopyStyle_mB8ACE09355CEE68478C8198F30788AE536D2D1B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeCopyStyle_mB8ACE09355CEE68478C8198F30788AE536D2D1B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeCopyStyle(System.IntPtr,System.IntPtr)");
	_il2cpp_icall_func(___dstNode0, ___srcNode1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetMeasureFunc_mF3175AEA27BA26593CDAE27E2C47E08C3AB2F56D (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeSetMeasureFunc_mF3175AEA27BA26593CDAE27E2C47E08C3AB2F56D_ftn) (intptr_t);
	static Native_YGNodeSetMeasureFunc_mF3175AEA27BA26593CDAE27E2C47E08C3AB2F56D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetMeasureFunc_mF3175AEA27BA26593CDAE27E2C47E08C3AB2F56D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeRemoveMeasureFunc_m4228A419D4F5A31A523E74B9114DB57F3E446363 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeRemoveMeasureFunc_m4228A419D4F5A31A523E74B9114DB57F3E446363_ftn) (intptr_t);
	static Native_YGNodeRemoveMeasureFunc_m4228A419D4F5A31A523E74B9114DB57F3E446363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeRemoveMeasureFunc_m4228A419D4F5A31A523E74B9114DB57F3E446363_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeRemoveMeasureFunc(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeMeasureInvoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeMeasureInvoke_mCDB590CFD8E79635FFA4C9E787FEC4AA48D2A448 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, intptr_t ___returnValueAddress5, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___returnValueAddress5;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2 = ___node0;
		float L_3 = ___width1;
		int32_t L_4 = ___widthMode2;
		float L_5 = ___height3;
		int32_t L_6 = ___heightMode4;
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_7;
		L_7 = YogaNode_MeasureInternal_m48B8FB32DE181D6CF67675FE8FCE8B5947CCBFF0(L_2, L_3, L_4, L_5, L_6, NULL);
		*(YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA*)L_1 = L_7;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeBaselineInvoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeBaselineInvoke_m6EDF6191EEF3C742BF22A6E6232D3EA8E6F4C5E0 (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, intptr_t ___returnValueAddress3, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___returnValueAddress3;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* L_2 = ___node0;
		float L_3 = ___width1;
		float L_4 = ___height2;
		float L_5;
		L_5 = YogaNode_BaselineInternal_m1CB75FF4F21CC040899903C1BAA548691A94D757(L_2, L_3, L_4, NULL);
		*((float*)L_1) = (float)L_5;
		return;
	}
}
// System.Void UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeSetHasNewLayout_mBE5DBEC31B5DC5AD534B332B102ACDBD8B657D3E (intptr_t ___node0, bool ___hasNewLayout1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeSetHasNewLayout_mBE5DBEC31B5DC5AD534B332B102ACDBD8B657D3E_ftn) (intptr_t, bool);
	static Native_YGNodeSetHasNewLayout_mBE5DBEC31B5DC5AD534B332B102ACDBD8B657D3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeSetHasNewLayout_mBE5DBEC31B5DC5AD534B332B102ACDBD8B657D3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeSetHasNewLayout(System.IntPtr,System.Boolean)");
	_il2cpp_icall_func(___node0, ___hasNewLayout1);
}
// System.Boolean UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Native_YGNodeGetHasNewLayout_m1448EE1836A9A2D0DC3FDB8D38F0655E2E0ECD9E (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef bool (*Native_YGNodeGetHasNewLayout_m1448EE1836A9A2D0DC3FDB8D38F0655E2E0ECD9E_ftn) (intptr_t);
	static Native_YGNodeGetHasNewLayout_m1448EE1836A9A2D0DC3FDB8D38F0655E2E0ECD9E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeGetHasNewLayout_m1448EE1836A9A2D0DC3FDB8D38F0655E2E0ECD9E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeGetHasNewLayout(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// UnityEngine.Yoga.YogaDirection UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Native_YGNodeStyleGetDirection_mD05F2B74EA9428572D5DA28B6B906E4A52568618 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef int32_t (*Native_YGNodeStyleGetDirection_mD05F2B74EA9428572D5DA28B6B906E4A52568618_ftn) (intptr_t);
	static Native_YGNodeStyleGetDirection_mD05F2B74EA9428572D5DA28B6B906E4A52568618_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleGetDirection_mD05F2B74EA9428572D5DA28B6B906E4A52568618_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleGetDirection(System.IntPtr)");
	int32_t icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexDirection_m572CB2FFCA3A4F9E4D6F1D8809C410A19BD82C9F (intptr_t ___node0, int32_t ___flexDirection1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexDirection_m572CB2FFCA3A4F9E4D6F1D8809C410A19BD82C9F_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexDirection_m572CB2FFCA3A4F9E4D6F1D8809C410A19BD82C9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexDirection_m572CB2FFCA3A4F9E4D6F1D8809C410A19BD82C9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexDirection(System.IntPtr,UnityEngine.Yoga.YogaFlexDirection)");
	_il2cpp_icall_func(___node0, ___flexDirection1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetJustifyContent_m1DA9A504EB3BD07A61941C692C02DD400E44C73D (intptr_t ___node0, int32_t ___justifyContent1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetJustifyContent_m1DA9A504EB3BD07A61941C692C02DD400E44C73D_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetJustifyContent_m1DA9A504EB3BD07A61941C692C02DD400E44C73D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetJustifyContent_m1DA9A504EB3BD07A61941C692C02DD400E44C73D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetJustifyContent(System.IntPtr,UnityEngine.Yoga.YogaJustify)");
	_il2cpp_icall_func(___node0, ___justifyContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignContent_m4F8EBDBC68466EF490CA01F81FD5945C9CCF5402 (intptr_t ___node0, int32_t ___alignContent1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetAlignContent_m4F8EBDBC68466EF490CA01F81FD5945C9CCF5402_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignContent_m4F8EBDBC68466EF490CA01F81FD5945C9CCF5402_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignContent_m4F8EBDBC68466EF490CA01F81FD5945C9CCF5402_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignContent(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignContent1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignItems_mBC30EB43D186C9F977B415445CD8906CA3DAF61C (intptr_t ___node0, int32_t ___alignItems1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetAlignItems_mBC30EB43D186C9F977B415445CD8906CA3DAF61C_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignItems_mBC30EB43D186C9F977B415445CD8906CA3DAF61C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignItems_mBC30EB43D186C9F977B415445CD8906CA3DAF61C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignItems(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignItems1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetAlignSelf_m4AF9BC14BF935EC05DF59AB5C4A613D2DF9AECA9 (intptr_t ___node0, int32_t ___alignSelf1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetAlignSelf_m4AF9BC14BF935EC05DF59AB5C4A613D2DF9AECA9_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetAlignSelf_m4AF9BC14BF935EC05DF59AB5C4A613D2DF9AECA9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetAlignSelf_m4AF9BC14BF935EC05DF59AB5C4A613D2DF9AECA9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetAlignSelf(System.IntPtr,UnityEngine.Yoga.YogaAlign)");
	_il2cpp_icall_func(___node0, ___alignSelf1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionType_mD284119C6D3D043671B09CCFF6C1C864F1D41855 (intptr_t ___node0, int32_t ___positionType1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPositionType_mD284119C6D3D043671B09CCFF6C1C864F1D41855_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetPositionType_mD284119C6D3D043671B09CCFF6C1C864F1D41855_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionType_mD284119C6D3D043671B09CCFF6C1C864F1D41855_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionType(System.IntPtr,UnityEngine.Yoga.YogaPositionType)");
	_il2cpp_icall_func(___node0, ___positionType1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexWrap_mC9EACF4137A84B413EB0C8C3315D308435FD58D5 (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexWrap_mC9EACF4137A84B413EB0C8C3315D308435FD58D5_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetFlexWrap_mC9EACF4137A84B413EB0C8C3315D308435FD58D5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexWrap_mC9EACF4137A84B413EB0C8C3315D308435FD58D5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexWrap(System.IntPtr,UnityEngine.Yoga.YogaWrap)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetOverflow_mF50DB42B8D5EA25253E77D8F9EBDBA8A4CC8034E (intptr_t ___node0, int32_t ___flexWrap1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetOverflow_mF50DB42B8D5EA25253E77D8F9EBDBA8A4CC8034E_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetOverflow_mF50DB42B8D5EA25253E77D8F9EBDBA8A4CC8034E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetOverflow_mF50DB42B8D5EA25253E77D8F9EBDBA8A4CC8034E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetOverflow(System.IntPtr,UnityEngine.Yoga.YogaOverflow)");
	_il2cpp_icall_func(___node0, ___flexWrap1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetDisplay_mEB1ABE291C84FAEF8112585734A05F5989905B70 (intptr_t ___node0, int32_t ___display1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetDisplay_mEB1ABE291C84FAEF8112585734A05F5989905B70_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetDisplay_mEB1ABE291C84FAEF8112585734A05F5989905B70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetDisplay_mEB1ABE291C84FAEF8112585734A05F5989905B70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetDisplay(System.IntPtr,UnityEngine.Yoga.YogaDisplay)");
	_il2cpp_icall_func(___node0, ___display1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlex_m0378FB3565379BF2A86E4D32D4CF3D527FC22D7A (intptr_t ___node0, float ___flex1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlex_m0378FB3565379BF2A86E4D32D4CF3D527FC22D7A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlex_m0378FB3565379BF2A86E4D32D4CF3D527FC22D7A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlex_m0378FB3565379BF2A86E4D32D4CF3D527FC22D7A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlex(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flex1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexGrow_mC5D64E0AFD69DCA7D43867F0AFAAC5AAF43CAC16 (intptr_t ___node0, float ___flexGrow1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexGrow_mC5D64E0AFD69DCA7D43867F0AFAAC5AAF43CAC16_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexGrow_mC5D64E0AFD69DCA7D43867F0AFAAC5AAF43CAC16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexGrow_mC5D64E0AFD69DCA7D43867F0AFAAC5AAF43CAC16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexGrow(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexGrow1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexShrink_mBEB442044933F36011FB1C5D48DC6BB565F22EE5 (intptr_t ___node0, float ___flexShrink1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexShrink_mBEB442044933F36011FB1C5D48DC6BB565F22EE5_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexShrink_mBEB442044933F36011FB1C5D48DC6BB565F22EE5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexShrink_mBEB442044933F36011FB1C5D48DC6BB565F22EE5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexShrink(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexShrink1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasis_mA8EAC51EB221DAA641C0C113B1C888EEC8C134A9 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexBasis_mA8EAC51EB221DAA641C0C113B1C888EEC8C134A9_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasis_mA8EAC51EB221DAA641C0C113B1C888EEC8C134A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasis_mA8EAC51EB221DAA641C0C113B1C888EEC8C134A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasis(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisPercent_m53E89CA73D54E0D61C0AE43E46E71880B19E71A3 (intptr_t ___node0, float ___flexBasis1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexBasisPercent_m53E89CA73D54E0D61C0AE43E46E71880B19E71A3_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetFlexBasisPercent_m53E89CA73D54E0D61C0AE43E46E71880B19E71A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisPercent_m53E89CA73D54E0D61C0AE43E46E71880B19E71A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___flexBasis1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetFlexBasisAuto_m75E0FE2D72735385BD4B768E7E6595BEB2767B33 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetFlexBasisAuto_m75E0FE2D72735385BD4B768E7E6595BEB2767B33_ftn) (intptr_t);
	static Native_YGNodeStyleSetFlexBasisAuto_m75E0FE2D72735385BD4B768E7E6595BEB2767B33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetFlexBasisAuto_m75E0FE2D72735385BD4B768E7E6595BEB2767B33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetFlexBasisAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidth_m51B0C20BC69889051707A5656AC8E923214BCE28 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetWidth_m51B0C20BC69889051707A5656AC8E923214BCE28_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidth_m51B0C20BC69889051707A5656AC8E923214BCE28_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidth_m51B0C20BC69889051707A5656AC8E923214BCE28_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthPercent_m0E5E9A14D79DA3097D850A1399E815C7EB5C1711 (intptr_t ___node0, float ___width1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetWidthPercent_m0E5E9A14D79DA3097D850A1399E815C7EB5C1711_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetWidthPercent_m0E5E9A14D79DA3097D850A1399E815C7EB5C1711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthPercent_m0E5E9A14D79DA3097D850A1399E815C7EB5C1711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___width1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetWidthAuto_mC0573A277B1B16B80CC8A9791C4477AF191EB0C9 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetWidthAuto_mC0573A277B1B16B80CC8A9791C4477AF191EB0C9_ftn) (intptr_t);
	static Native_YGNodeStyleSetWidthAuto_mC0573A277B1B16B80CC8A9791C4477AF191EB0C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetWidthAuto_mC0573A277B1B16B80CC8A9791C4477AF191EB0C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetWidthAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeight_m2E2855E43F07820F05EB8B4EA48E772A8984D405 (intptr_t ___node0, float ___height1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetHeight_m2E2855E43F07820F05EB8B4EA48E772A8984D405_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeight_m2E2855E43F07820F05EB8B4EA48E772A8984D405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeight_m2E2855E43F07820F05EB8B4EA48E772A8984D405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightPercent_mB51BB945080154E9C68427923798645B681F3F23 (intptr_t ___node0, float ___height1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetHeightPercent_mB51BB945080154E9C68427923798645B681F3F23_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetHeightPercent_mB51BB945080154E9C68427923798645B681F3F23_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightPercent_mB51BB945080154E9C68427923798645B681F3F23_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___height1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetHeightAuto_mD0A25B33B11FE4A31513388555CCF2666C961454 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetHeightAuto_mD0A25B33B11FE4A31513388555CCF2666C961454_ftn) (intptr_t);
	static Native_YGNodeStyleSetHeightAuto_mD0A25B33B11FE4A31513388555CCF2666C961454_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetHeightAuto_mD0A25B33B11FE4A31513388555CCF2666C961454_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetHeightAuto(System.IntPtr)");
	_il2cpp_icall_func(___node0);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidth_mD4BAEFA7CC9566284701288E58C9E8FFF90D0DC5 (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinWidth_mD4BAEFA7CC9566284701288E58C9E8FFF90D0DC5_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidth_mD4BAEFA7CC9566284701288E58C9E8FFF90D0DC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidth_mD4BAEFA7CC9566284701288E58C9E8FFF90D0DC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinWidthPercent_m511DBAB717BE516FD441F65AE02AC96E7C28DC2A (intptr_t ___node0, float ___minWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinWidthPercent_m511DBAB717BE516FD441F65AE02AC96E7C28DC2A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinWidthPercent_m511DBAB717BE516FD441F65AE02AC96E7C28DC2A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinWidthPercent_m511DBAB717BE516FD441F65AE02AC96E7C28DC2A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeight_mE3932DE6D89F927AB48EE46B75D66A3619680E44 (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinHeight_mE3932DE6D89F927AB48EE46B75D66A3619680E44_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeight_mE3932DE6D89F927AB48EE46B75D66A3619680E44_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeight_mE3932DE6D89F927AB48EE46B75D66A3619680E44_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMinHeightPercent_mAD8DF2A468F3BED78662C0FFA09384C31953B18A (intptr_t ___node0, float ___minHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMinHeightPercent_mAD8DF2A468F3BED78662C0FFA09384C31953B18A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMinHeightPercent_mAD8DF2A468F3BED78662C0FFA09384C31953B18A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMinHeightPercent_mAD8DF2A468F3BED78662C0FFA09384C31953B18A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMinHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___minHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidth_mFA9603DDDDF6E0858A17A52AE09848F917B59A64 (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxWidth_mFA9603DDDDF6E0858A17A52AE09848F917B59A64_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidth_mFA9603DDDDF6E0858A17A52AE09848F917B59A64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidth_mFA9603DDDDF6E0858A17A52AE09848F917B59A64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidth(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxWidthPercent_m629E9CC47E379D44E9772713BA95FD7EB8F3E49B (intptr_t ___node0, float ___maxWidth1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxWidthPercent_m629E9CC47E379D44E9772713BA95FD7EB8F3E49B_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxWidthPercent_m629E9CC47E379D44E9772713BA95FD7EB8F3E49B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxWidthPercent_m629E9CC47E379D44E9772713BA95FD7EB8F3E49B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxWidthPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxWidth1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeight_m53E372211ECD5CF9E338EB92FC6E812AD16E57A5 (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxHeight_m53E372211ECD5CF9E338EB92FC6E812AD16E57A5_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeight_m53E372211ECD5CF9E338EB92FC6E812AD16E57A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeight_m53E372211ECD5CF9E338EB92FC6E812AD16E57A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeight(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMaxHeightPercent_mDD919E0532D33DE34AFA75DA7FCD918AE710C12A (intptr_t ___node0, float ___maxHeight1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMaxHeightPercent_mDD919E0532D33DE34AFA75DA7FCD918AE710C12A_ftn) (intptr_t, float);
	static Native_YGNodeStyleSetMaxHeightPercent_mDD919E0532D33DE34AFA75DA7FCD918AE710C12A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMaxHeightPercent_mDD919E0532D33DE34AFA75DA7FCD918AE710C12A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMaxHeightPercent(System.IntPtr,System.Single)");
	_il2cpp_icall_func(___node0, ___maxHeight1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPosition_m6F05627862225682B30DEE270AF5DBC92A3F5E4A (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPosition_m6F05627862225682B30DEE270AF5DBC92A3F5E4A_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPosition_m6F05627862225682B30DEE270AF5DBC92A3F5E4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPosition_m6F05627862225682B30DEE270AF5DBC92A3F5E4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPosition(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPositionPercent_m6EBB551060750C05ED566CCB896C65810C1BB6BC (intptr_t ___node0, int32_t ___edge1, float ___position2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPositionPercent_m6EBB551060750C05ED566CCB896C65810C1BB6BC_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPositionPercent_m6EBB551060750C05ED566CCB896C65810C1BB6BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPositionPercent_m6EBB551060750C05ED566CCB896C65810C1BB6BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPositionPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___position2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMargin_m3A70ED59754A7D67E27CE780CBCBB6A4DF585C72 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMargin_m3A70ED59754A7D67E27CE780CBCBB6A4DF585C72_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMargin_m3A70ED59754A7D67E27CE780CBCBB6A4DF585C72_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMargin_m3A70ED59754A7D67E27CE780CBCBB6A4DF585C72_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginPercent_m55403B2B8AB39FDB5A3DB015876D5F050CBE2E12 (intptr_t ___node0, int32_t ___edge1, float ___margin2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMarginPercent_m55403B2B8AB39FDB5A3DB015876D5F050CBE2E12_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetMarginPercent_m55403B2B8AB39FDB5A3DB015876D5F050CBE2E12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginPercent_m55403B2B8AB39FDB5A3DB015876D5F050CBE2E12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___margin2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetMarginAuto_m35CD57DCE2F418647FB611724CD0B06ED5EA91D2 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetMarginAuto_m35CD57DCE2F418647FB611724CD0B06ED5EA91D2_ftn) (intptr_t, int32_t);
	static Native_YGNodeStyleSetMarginAuto_m35CD57DCE2F418647FB611724CD0B06ED5EA91D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetMarginAuto_m35CD57DCE2F418647FB611724CD0B06ED5EA91D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetMarginAuto(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	_il2cpp_icall_func(___node0, ___edge1);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPadding_m4EF83ED5DC1934CCE14E4AADEA8A730D2889CAAC (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPadding_m4EF83ED5DC1934CCE14E4AADEA8A730D2889CAAC_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPadding_m4EF83ED5DC1934CCE14E4AADEA8A730D2889CAAC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPadding_m4EF83ED5DC1934CCE14E4AADEA8A730D2889CAAC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetPaddingPercent_m38A7998A22EF0102C503F240323511654889D7C6 (intptr_t ___node0, int32_t ___edge1, float ___padding2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetPaddingPercent_m38A7998A22EF0102C503F240323511654889D7C6_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetPaddingPercent_m38A7998A22EF0102C503F240323511654889D7C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetPaddingPercent_m38A7998A22EF0102C503F240323511654889D7C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetPaddingPercent(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___padding2);
}
// System.Void UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD (intptr_t ___node0, int32_t ___edge1, float ___border2, const RuntimeMethod* method) 
{
	typedef void (*Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD_ftn) (intptr_t, int32_t, float);
	static Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeStyleSetBorder_m2FC91E730F7299CD56EC8904D2F14371B9B98BFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeStyleSetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge,System.Single)");
	_il2cpp_icall_func(___node0, ___edge1, ___border2);
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetLeft_m96B29A4AE1C66E0FEF096DA5050CEC94442C459A (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetLeft_m96B29A4AE1C66E0FEF096DA5050CEC94442C459A_ftn) (intptr_t);
	static Native_YGNodeLayoutGetLeft_m96B29A4AE1C66E0FEF096DA5050CEC94442C459A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetLeft_m96B29A4AE1C66E0FEF096DA5050CEC94442C459A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetLeft(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetTop_m5372EE7B9E7CDE267BF9BF0FFC355CB4FD288297 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetTop_m5372EE7B9E7CDE267BF9BF0FFC355CB4FD288297_ftn) (intptr_t);
	static Native_YGNodeLayoutGetTop_m5372EE7B9E7CDE267BF9BF0FFC355CB4FD288297_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetTop_m5372EE7B9E7CDE267BF9BF0FFC355CB4FD288297_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetTop(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetRight_m0068329B2B59D0DBBB0DEC009D5B0F1F655B3540 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetRight_m0068329B2B59D0DBBB0DEC009D5B0F1F655B3540_ftn) (intptr_t);
	static Native_YGNodeLayoutGetRight_m0068329B2B59D0DBBB0DEC009D5B0F1F655B3540_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetRight_m0068329B2B59D0DBBB0DEC009D5B0F1F655B3540_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetRight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBottom_m6F4451718486D0A549E1D5BEA7C8501DB62ACDA4 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetBottom_m6F4451718486D0A549E1D5BEA7C8501DB62ACDA4_ftn) (intptr_t);
	static Native_YGNodeLayoutGetBottom_m6F4451718486D0A549E1D5BEA7C8501DB62ACDA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetBottom_m6F4451718486D0A549E1D5BEA7C8501DB62ACDA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetBottom(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetWidth_m9D52EC9FB8D5FCC5EE14E070C9092237211EA492 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetWidth_m9D52EC9FB8D5FCC5EE14E070C9092237211EA492_ftn) (intptr_t);
	static Native_YGNodeLayoutGetWidth_m9D52EC9FB8D5FCC5EE14E070C9092237211EA492_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetWidth_m9D52EC9FB8D5FCC5EE14E070C9092237211EA492_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetWidth(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetHeight_m5D2329F68FBBBA67CDEE3E673C787C2548514596 (intptr_t ___node0, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetHeight_m5D2329F68FBBBA67CDEE3E673C787C2548514596_ftn) (intptr_t);
	static Native_YGNodeLayoutGetHeight_m5D2329F68FBBBA67CDEE3E673C787C2548514596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetHeight_m5D2329F68FBBBA67CDEE3E673C787C2548514596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetHeight(System.IntPtr)");
	float icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetMargin_mCB0EE80823095ADFCA2A8F0A2067DD5B450B0F17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetMargin(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetPadding_mE1699ADBB745BBCA574BAE8DB57CA430A1224BBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetPadding(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
// System.Single UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861 (intptr_t ___node0, int32_t ___edge1, const RuntimeMethod* method) 
{
	typedef float (*Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861_ftn) (intptr_t, int32_t);
	static Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Native_YGNodeLayoutGetBorder_m5F0B38BD792C29209B64DE9F6C0CD6950146A861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Yoga.Native::YGNodeLayoutGetBorder(System.IntPtr,UnityEngine.Yoga.YogaEdge)");
	float icallRetVal = _il2cpp_icall_func(___node0, ___edge1);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Yoga.YogaConstants::IsUndefined(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConstants_IsUndefined_m1BD66A8B7482CB49C9D4B0241E88CCE8EB0743FB (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___value0;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureOutput::Make(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureOutput_Make_m19BCA4677D3255795D936162FB6DE021C2C89E83 (float ___width0, float ___height1, const RuntimeMethod* method) 
{
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA));
		float L_0 = ___width0;
		(&V_0)->___width_0 = L_0;
		float L_1 = ___height1;
		(&V_0)->___height_1 = L_1;
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_2 = V_0;
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Yoga.YogaConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, intptr_t ___ygConfig0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0 = ___ygConfig0;
		__this->____ygConfig_1 = L_0;
		intptr_t L_1 = __this->____ygConfig_1;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_3;
		L_3 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52BC61F0345FADE03AB730C8F5BC70C5256D169E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4_RuntimeMethod_var)));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__ctor_m81D3E486916576BD67674EA5F26C8F2B45CCB6DD (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0;
		L_0 = Native_YGConfigNew_m11896EDBABF4FAE5486DD882CBF71AB15D3B1EEB(NULL);
		YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_Finalize_m395FFF204239D6A9DC076105B4D935706B29D631 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				intptr_t L_0;
				L_0 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
				YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = ((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0;
				NullCheck(L_1);
				intptr_t L_2;
				L_2 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(L_1, NULL);
				bool L_3;
				L_3 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_2, NULL);
				V_0 = L_3;
				bool L_4 = V_0;
				if (!L_4)
				{
					goto IL_0029_1;
				}
			}
			{
				intptr_t L_5;
				L_5 = YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD(__this, NULL);
				Native_YGConfigFree_m39FFBA6301AAACAFE0570ABA725972240550981C(L_5, NULL);
			}

IL_0029_1:
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		return;
	}
}
// System.IntPtr UnityEngine.Yoga.YogaConfig::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t YogaConfig_get_Handle_m7E2D8171E4E8AA98BC1D886218B6207D602281DD (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____ygConfig_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		intptr_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Yoga.YogaConfig::get_UseWebDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaConfig_get_UseWebDefaults_mB64415ACFDF7FB34F6F5BB42059BFD8E3705AD9D (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->____ygConfig_1;
		bool L_1;
		L_1 = Native_YGConfigGetUseWebDefaults_m0F1759A9663FF89B89F3BE95E66B761375602DE2(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_UseWebDefaults(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_UseWebDefaults_m96AB3442B80FDA12436C4452D8605AA8DA1C8B81 (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygConfig_1;
		bool L_1 = ___value0;
		Native_YGConfigSetUseWebDefaults_mBA0DEB8659A98F62BD44F809D80DB1B21B9AC55E(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::set_PointScaleFactor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig_set_PointScaleFactor_mF61D0EFB38778BC4B6DE323F53348485B8AC643D (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____ygConfig_1;
		float L_1 = ___value0;
		Native_YGConfigSetPointScaleFactor_m691E9B0FC19C5C2864A5239B27E8ABC2E00D70D9(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Yoga.YogaConfig::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YogaConfig__cctor_m2CBFE98AAE90596CBB749697AAE1973B2AE051FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0;
		L_0 = Native_YGConfigGetDefault_m89E2B96C9637A2A250147771D3C6FEAC4D0F458A(NULL);
		YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* L_1 = (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*)il2cpp_codegen_object_new(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		YogaConfig__ctor_mA5B9DCE1F40B5A6948D3D8848516F2CBCD2FABF4(L_1, L_0, NULL);
		((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_StaticFields*)il2cpp_codegen_static_fields_for(YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345_il2cpp_TypeInfo_var))->___Default_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Yoga.YogaUnit UnityEngine.Yoga.YogaValue::get_Unit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___unit_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.Yoga.YogaValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___value_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	float _returnValue;
	_returnValue = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Point(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Point_m1EF4416D27335FE09A3CD7D3CD8307763FA991BE (float ___value0, const RuntimeMethod* method) 
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B2_0 = NULL;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B3_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C));
		float L_0 = ___value0;
		(&V_0)->___value_0 = L_0;
		float L_1 = ___value0;
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m1BD66A8B7482CB49C9D4B0241E88CCE8EB0743FB(L_1, NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->___unit_1 = G_B3_0;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(UnityEngine.Yoga.YogaValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___other0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0;
		L_0 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(__this, NULL);
		int32_t L_1;
		L_1 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900((&___other0), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		float L_2;
		L_2 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A(__this, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A((&___other0), NULL);
		bool L_4;
		L_4 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_3, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5;
		L_5 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(__this, NULL);
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 1;
	}

IL_0033:
	{
		G_B6_0 = G_B4_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B6_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B6_0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F_AdjustorThunk (RuntimeObject* __this, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C ___other0, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Yoga.YogaValue::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		bool L_4;
		L_4 = YogaValue_Equals_m7D39A876BF907A38C1F82FCF5303B9AD3CD1BC3F(__this, ((*(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*)((YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*)(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*)UnBox(L_3, YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C_il2cpp_TypeInfo_var)))), NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	bool _returnValue;
	_returnValue = YogaValue_Equals_mC37A099D3DB33896B40843065EC84D6F290FCCBD(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Yoga.YogaValue::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672 (YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		float L_0;
		L_0 = YogaValue_get_Value_m142314AA36484CD328E08A06D6A750F5CA1C112A(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		int32_t L_2;
		L_2 = YogaValue_get_Unit_m4387357877C0D183FAFD5A3857AEF4C3E52CA900(__this, NULL);
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^(int32_t)L_2));
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = YogaValue_GetHashCode_m8E287A9A127C7B15B870756A948C3BB6C4A12672(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Auto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Auto_m2410501B6BB747D8290711BB328EB5FF7EAF73B5 (const RuntimeMethod* method) 
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C));
		(&V_0)->___value_0 = (std::numeric_limits<float>::quiet_NaN());
		(&V_0)->___unit_1 = 3;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_0 = V_0;
		V_1 = L_0;
		goto IL_0021;
	}

IL_0021:
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_1 = V_1;
		return L_1;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::Percent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_Percent_m3A88462FA1C96A48737C78DC5B538B5CC7331C18 (float ___value0, const RuntimeMethod* method) 
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_1;
	memset((&V_1), 0, sizeof(V_1));
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B2_0 = NULL;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C* G_B3_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C));
		float L_0 = ___value0;
		(&V_0)->___value_0 = L_0;
		float L_1 = ___value0;
		bool L_2;
		L_2 = YogaConstants_IsUndefined_m1BD66A8B7482CB49C9D4B0241E88CCE8EB0743FB(L_1, NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B2_0 = (&V_0);
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		G_B3_1->___unit_1 = G_B3_0;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_3 = V_0;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0028:
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Yoga.YogaValue UnityEngine.Yoga.YogaValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C YogaValue_op_Implicit_m4E6C27B18E3D7AEAB238CD7E520852BF732F28F7 (float ___pointValue0, const RuntimeMethod* method) 
{
	YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___pointValue0;
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_1;
		L_1 = YogaValue_Point_m1EF4416D27335FE09A3CD7D3CD8307763FA991BE(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		YogaValue_t9066126971BFC18D9B4A8AB11435557F19598F8C L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_Multicast(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* currentDelegate = reinterpret_cast<MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09*>(delegatesToInvoke[i]);
		typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInst(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, method);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStatic(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, method);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStaticInvoker(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_ClosedStaticInvoker(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenVirtual(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return VirtualFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInterface(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return InterfaceFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericVirtual(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericVirtualFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(method, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericInterface(MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericInterfaceFuncInvoker4< YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA, float, int32_t, float, int32_t >::Invoke(method, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4);
}
// System.Void UnityEngine.Yoga.MeasureFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeasureFunction__ctor_mE08DFEFBD622065D2E123492910EA66C4A80A0BA (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_Multicast;
}
// UnityEngine.Yoga.YogaSize UnityEngine.Yoga.MeasureFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,UnityEngine.Yoga.YogaMeasureMode,System.Single,UnityEngine.Yoga.YogaMeasureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) 
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_Multicast(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* currentDelegate = reinterpret_cast<BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___node0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInst(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	typedef float (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___height2, method);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStatic(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___node0, ___width1, ___height2, method);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStaticInvoker(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< float, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_ClosedStaticInvoker(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< float, RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenVirtual(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return VirtualFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInterface(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return InterfaceFuncInvoker2< float, float, float >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericVirtual(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericVirtualFuncInvoker2< float, float, float >::Invoke(method, ___node0, ___width1, ___height2);
}
float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericInterface(BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method)
{
	NullCheck(___node0);
	return GenericInterfaceFuncInvoker2< float, float, float >::Invoke(method, ___node0, ___width1, ___height2);
}
// System.Void UnityEngine.Yoga.BaselineFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaselineFunction__ctor_m525AED7069E4DFB2C8770618315000F96E7FD500 (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_Multicast;
}
// System.Single UnityEngine.Yoga.BaselineFunction::Invoke(UnityEngine.Yoga.YogaNode,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109 (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_Multicast(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Logger_t092B1218ED93DD47180692D5761559B2054234A0* currentDelegate = reinterpret_cast<Logger_t092B1218ED93DD47180692D5761559B2054234A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___config0, ___node1, ___level2, ___message3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInst(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	typedef void (*FunctionPointerType) (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___config0, ___node1, ___level2, ___message3, method);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStatic(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___config0, ___node1, ___level2, ___message3, method);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStaticInvoker(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_ClosedStaticInvoker(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenVirtual(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	VirtualActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInterface(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	InterfaceActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericVirtual(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	GenericVirtualActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(method, ___config0, ___node1, ___level2, ___message3);
}
void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericInterface(Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method)
{
	NullCheck(___config0);
	GenericInterfaceActionInvoker3< YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t* >::Invoke(method, ___config0, ___node1, ___level2, ___message3);
}
// System.Void UnityEngine.Yoga.Logger::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m411B63478FF6F8FEDFB36E338920ECF6D44FCE89 (Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF_Multicast;
}
// System.Void UnityEngine.Yoga.Logger::Invoke(UnityEngine.Yoga.YogaConfig,UnityEngine.Yoga.YogaNode,UnityEngine.Yoga.YogaLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Invoke_mB64732D7138E5BFC958D540B1F27686BFAC815CF (Logger_t092B1218ED93DD47180692D5761559B2054234A0* __this, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___config0, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node1, int32_t ___level2, String_t* ___message3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___config0, ___node1, ___level2, ___message3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RepaintOverlayPanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RepaintOverlayPanels_m346BC3BDB4713023D04B36C35E1D5C20465A815A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var))->___RepaintOverlayPanelsCallback_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UpdateRuntimePanels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UpdateRuntimePanels_mB08CCB60AFCD7B71AA0E1F50DF697BFCFA8DC376 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_StaticFields*)il2cpp_codegen_static_fields_for(UIElementsRuntimeUtilityNative_t9DE2C23158D553BB693212D0D8AEAE8594E75938_il2cpp_TypeInfo_var))->___UpdateRuntimePanelsCallback_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_m04D189811F7F648F186D5976D21EDF13BA986A71 (const RuntimeMethod* method) 
{
	typedef void (*UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_m04D189811F7F648F186D5976D21EDF13BA986A71_ftn) ();
	static UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_m04D189811F7F648F186D5976D21EDF13BA986A71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_RegisterPlayerloopCallback_m04D189811F7F648F186D5976D21EDF13BA986A71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m412B040F225984650BD09B9E8693AF6127D97ADF (const RuntimeMethod* method) 
{
	typedef void (*UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m412B040F225984650BD09B9E8693AF6127D97ADF_ftn) ();
	static UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m412B040F225984650BD09B9E8693AF6127D97ADF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_UnregisterPlayerloopCallback_m412B040F225984650BD09B9E8693AF6127D97ADF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIElementsRuntimeUtilityNative::VisualElementCreation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElementsRuntimeUtilityNative_VisualElementCreation_m4FEEF03A1322277172416B770CB029247D7FCDFD (const RuntimeMethod* method) 
{
	typedef void (*UIElementsRuntimeUtilityNative_VisualElementCreation_m4FEEF03A1322277172416B770CB029247D7FCDFD_ftn) ();
	static UIElementsRuntimeUtilityNative_VisualElementCreation_m4FEEF03A1322277172416B770CB029247D7FCDFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UIElementsRuntimeUtilityNative_VisualElementCreation_m4FEEF03A1322277172416B770CB029247D7FCDFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIElementsRuntimeUtilityNative::VisualElementCreation()");
	_il2cpp_icall_func();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke& marshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_back(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke& marshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_pinvoke_cleanup(TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_com(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com& marshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_com_back(const TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com& marshaled, TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062& unmarshaled)
{
	Exception_t* ___font_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'font' of type 'TextNativeSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___font_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.TextNativeSettings
IL2CPP_EXTERN_C void TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshal_com_cleanup(TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::GetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_GetCursorPosition_mF7B2D51841761A24623EE9DCAA354F30CB9523F4 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, int32_t ___cursorIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_4;
		goto IL_0030;
	}

IL_0025:
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_5 = ___settings0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = ___rect1;
		int32_t L_7 = ___cursorIndex2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = TextNative_DoGetCursorPosition_m88B61DC7C5E4F17AC5E75F54D9B9B9F56F14F290(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		return L_9;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextWidth_mE3A73219F780DB79A4BFCEA91CA1C4DB9AF7F00F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_0025:
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_4 = ___settings0;
		String_t* L_5 = L_4.___text_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_003c:
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_8 = ___settings0;
		float L_9;
		L_9 = TextNative_DoComputeTextWidth_mC1ADB603729FAA6D6437B1E2031224A386FE1F9F(L_8, NULL);
		V_1 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		float L_10 = V_1;
		return L_10;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextHeight_m2DB34E72014B203E83A17A7321793ED979D36AD8 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_0025:
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_4 = ___settings0;
		String_t* L_5 = L_4.___text_0;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_0045;
	}

IL_003c:
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_8 = ___settings0;
		float L_9;
		L_9 = TextNative_DoComputeTextHeight_m917EE94AF5471D5E962AB3BEB0C7592A7F917BC2(L_8, NULL);
		V_1 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		float L_10 = V_1;
		return L_10;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex> UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 TextNative_GetVertices_m877716FCDD7F1D2C5849487C88691A5BA2441088 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = 0;
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19(UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19_RuntimeMethod_var);
		TextNative_GetVertices_m21E5914758FA0C969689CAA41EE14D265DAEED05(L_0, L_1, L_2, (&V_0), NULL);
		int32_t L_3 = V_0;
		NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB((&V_1), L_3, 2, 0, NativeArray_1__ctor_mA0072316B099B9C974C6E435A3E22C7A2A9F7FFB_RuntimeMethod_var);
		int32_t L_4 = V_0;
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_6 = ___settings0;
		NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 L_7 = V_1;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7(L_7, NativeArrayUnsafeUtility_GetUnsafePtr_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mB71B93B1CC56845E3673C6C82279BA7A395475C7_RuntimeMethod_var);
		intptr_t L_9;
		L_9 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D(L_8, NULL);
		int32_t L_10;
		L_10 = UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19(UnsafeUtility_SizeOf_TisTextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3_mA7798253D03E86FE4ACF94B4097B20FD2475EB19_RuntimeMethod_var);
		TextNative_GetVertices_m21E5914758FA0C969689CAA41EE14D265DAEED05(L_6, L_9, L_10, (&V_0), NULL);
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0), NULL);
	}

IL_0053:
	{
		NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 L_13 = V_1;
		V_3 = L_13;
		goto IL_0057;
	}

IL_0057:
	{
		NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 L_14 = V_3;
		return L_14;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::GetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_GetOffset_mBBAE5C3304645D4295B723ABC9245AD6751ECD36 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___screenRect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* G_B4_0 = NULL;
	TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* G_B3_1 = NULL;
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_0 = ___settings0;
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1 = L_0.___font_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral67BE3EF2BBE376CBFE6CC45672B2C7742A3C2520, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_004f;
	}

IL_002f:
	{
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_5 = ___settings0;
		String_t* L_6 = L_5.___text_0;
		String_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = (&___settings0);
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = (&___settings0);
			goto IL_0040;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_0040:
	{
		G_B4_1->___text_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___text_0), (void*)G_B4_0);
		TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 L_8 = ___settings0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_9 = ___screenRect1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = TextNative_DoGetOffset_m65E9D221159D69B6AA2F3B9F93EB010A5709BE05(L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_004f;
	}

IL_004f:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		return L_11;
	}
}
// System.Single UnityEngine.UIElements.TextNative::ComputeTextScaling(UnityEngine.Matrix4x4,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_ComputeTextScaling_mB18E1C1AD82EAD2A557414E4634F2F89149FFA2B (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldMatrix0, float ___pixelsPerPoint1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___worldMatrix0;
		float L_1 = L_0.___m00_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___worldMatrix0;
		float L_3 = L_2.___m10_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___worldMatrix0;
		float L_5 = L_4.___m20_2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_1, L_3, L_5, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6 = ___worldMatrix0;
		float L_7 = L_6.___m01_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___worldMatrix0;
		float L_9 = L_8.___m11_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___worldMatrix0;
		float L_11 = L_10.___m21_6;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_7, L_9, L_11, NULL);
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_2 = ((float)(((float)il2cpp_codegen_add(L_12, L_13))/(2.0f)));
		float L_14 = V_2;
		float L_15 = ___pixelsPerPoint1;
		V_3 = ((float)il2cpp_codegen_multiply(L_14, L_15));
		goto IL_004f;
	}

IL_004f:
	{
		float L_16 = V_3;
		return L_16;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_mC1ADB603729FAA6D6437B1E2031224A386FE1F9F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = TextNative_DoComputeTextWidth_Injected_m1E6872A8C0AC95CFDF74C202595553A1E470472F((&___settings0), NULL);
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight(UnityEngine.UIElements.TextNativeSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_m917EE94AF5471D5E962AB3BEB0C7592A7F917BC2 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = TextNative_DoComputeTextHeight_Injected_m69A3B288A6F117F0A596A2B7222C398D6008AE7B((&___settings0), NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetCursorPosition(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetCursorPosition_m88B61DC7C5E4F17AC5E75F54D9B9B9F56F14F290 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, int32_t ___cursorPosition2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___cursorPosition2;
		TextNative_DoGetCursorPosition_Injected_mC5C07A73AF3CC29F5E6333E7CF1D33DF1633B9BA((&___settings0), (&___rect1), L_0, (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices(UnityEngine.UIElements.TextNativeSettings,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_m21E5914758FA0C969689CAA41EE14D265DAEED05 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___buffer1;
		int32_t L_1 = ___vertexSize2;
		int32_t* L_2 = ___vertexCount3;
		TextNative_GetVertices_Injected_mB5CAF8BEBFB7228E06BD36FB3B9C188C1A12127F((&___settings0), L_0, L_1, L_2, NULL);
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.TextNative::DoGetOffset(UnityEngine.UIElements.TextNativeSettings,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TextNative_DoGetOffset_m65E9D221159D69B6AA2F3B9F93EB010A5709BE05 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062 ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TextNative_DoGetOffset_Injected_m5A58EA8CF5C12A4E039224EFFD860A022BC15156((&___settings0), (&___rect1), (&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextWidth_Injected_m1E6872A8C0AC95CFDF74C202595553A1E470472F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) 
{
	typedef float (*TextNative_DoComputeTextWidth_Injected_m1E6872A8C0AC95CFDF74C202595553A1E470472F_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*);
	static TextNative_DoComputeTextWidth_Injected_m1E6872A8C0AC95CFDF74C202595553A1E470472F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoComputeTextWidth_Injected_m1E6872A8C0AC95CFDF74C202595553A1E470472F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoComputeTextWidth_Injected(UnityEngine.UIElements.TextNativeSettings&)");
	float icallRetVal = _il2cpp_icall_func(___settings0);
	return icallRetVal;
}
// System.Single UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextNative_DoComputeTextHeight_Injected_m69A3B288A6F117F0A596A2B7222C398D6008AE7B (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, const RuntimeMethod* method) 
{
	typedef float (*TextNative_DoComputeTextHeight_Injected_m69A3B288A6F117F0A596A2B7222C398D6008AE7B_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*);
	static TextNative_DoComputeTextHeight_Injected_m69A3B288A6F117F0A596A2B7222C398D6008AE7B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoComputeTextHeight_Injected_m69A3B288A6F117F0A596A2B7222C398D6008AE7B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoComputeTextHeight_Injected(UnityEngine.UIElements.TextNativeSettings&)");
	float icallRetVal = _il2cpp_icall_func(___settings0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetCursorPosition_Injected_mC5C07A73AF3CC29F5E6333E7CF1D33DF1633B9BA (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, int32_t ___cursorPosition2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret3, const RuntimeMethod* method) 
{
	typedef void (*TextNative_DoGetCursorPosition_Injected_mC5C07A73AF3CC29F5E6333E7CF1D33DF1633B9BA_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TextNative_DoGetCursorPosition_Injected_mC5C07A73AF3CC29F5E6333E7CF1D33DF1633B9BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoGetCursorPosition_Injected_mC5C07A73AF3CC29F5E6333E7CF1D33DF1633B9BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoGetCursorPosition_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,System.Int32,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___settings0, ___rect1, ___cursorPosition2, ___ret3);
}
// System.Void UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_GetVertices_Injected_mB5CAF8BEBFB7228E06BD36FB3B9C188C1A12127F (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, intptr_t ___buffer1, int32_t ___vertexSize2, int32_t* ___vertexCount3, const RuntimeMethod* method) 
{
	typedef void (*TextNative_GetVertices_Injected_mB5CAF8BEBFB7228E06BD36FB3B9C188C1A12127F_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*, intptr_t, int32_t, int32_t*);
	static TextNative_GetVertices_Injected_mB5CAF8BEBFB7228E06BD36FB3B9C188C1A12127F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_GetVertices_Injected_mB5CAF8BEBFB7228E06BD36FB3B9C188C1A12127F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::GetVertices_Injected(UnityEngine.UIElements.TextNativeSettings&,System.IntPtr,System.Int32,System.Int32&)");
	_il2cpp_icall_func(___settings0, ___buffer1, ___vertexSize2, ___vertexCount3);
}
// System.Void UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextNative_DoGetOffset_Injected_m5A58EA8CF5C12A4E039224EFFD860A022BC15156 (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062* ___settings0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___rect1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___ret2, const RuntimeMethod* method) 
{
	typedef void (*TextNative_DoGetOffset_Injected_m5A58EA8CF5C12A4E039224EFFD860A022BC15156_ftn) (TextNativeSettings_tE9D302AD381537B4FD42C3D02583F719CFF40062*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*);
	static TextNative_DoGetOffset_Injected_m5A58EA8CF5C12A4E039224EFFD860A022BC15156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TextNative_DoGetOffset_Injected_m5A58EA8CF5C12A4E039224EFFD860A022BC15156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.TextNative::DoGetOffset_Injected(UnityEngine.UIElements.TextNativeSettings&,UnityEngine.Rect&,UnityEngine.Vector2&)");
	_il2cpp_icall_func(___settings0, ___rect1, ___ret2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UIElements.UIR.Utility::add_GraphicsResourcesRecreate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_GraphicsResourcesRecreate_m7500B21EEAD18C1D395CA679C4C1B2A10AE1B962 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0), L_5, L_6);
		V_0 = L_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_GraphicsResourcesRecreate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_GraphicsResourcesRecreate_mB4DF54BC3B178674658360B438A1CA823A1C73AC (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0), L_5, L_6);
		V_0 = L_7;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_EngineUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_EngineUpdate_m06DF99E8301C5BD159A6AAE914BDCF808BA92B32 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_EngineUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_EngineUpdate_mF7A954E84FC896CC63CB68CAF8A5235F835FF2D7 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_FlushPendingResources(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_FlushPendingResources_m9A930FD6215580544B7AFAB6CA57D9581833FBEA (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_FlushPendingResources(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_FlushPendingResources_mBA31F8A56E659DE7298C2656B05D835178E5EE0D (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_RegisterIntermediateRenderers(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_RegisterIntermediateRenderers_m7E13A9C3E01341D429E0999F89F580232FFC6429 (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_1 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = V_0;
		V_1 = L_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_2 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)Castclass((RuntimeObject*)L_4, Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_5 = V_2;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_6 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3), L_5, L_6);
		V_0 = L_7;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_8 = V_0;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_8) == ((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_RegisterIntermediateRenderers(System.Action`1<UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_RegisterIntermediateRenderers_mEF3C851756F576BD728BD8BFFE5C5A64597539E5 (Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_1 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = V_0;
		V_1 = L_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_2 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)Castclass((RuntimeObject*)L_4, Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_5 = V_2;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_6 = V_1;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3), L_5, L_6);
		V_0 = L_7;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_8 = V_0;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_8) == ((RuntimeObject*)(Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::add_RenderNodeExecute(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_add_RenderNodeExecute_mA892466BF824D857F435453B8EA832382DC3314A (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_1 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_2 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)Castclass((RuntimeObject*)L_4, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = V_2;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_6 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_8 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_8) == ((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::remove_RenderNodeExecute(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_remove_RenderNodeExecute_m240A07023F25797A1827351E49329A02A122AD6C (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_1 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = V_0;
		V_1 = L_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_2 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)Castclass((RuntimeObject*)L_4, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = V_2;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_6 = V_1;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*>((&((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5), L_5, L_6);
		V_0 = L_7;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_8 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_8) == ((RuntimeObject*)(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseGraphicsResourcesRecreate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseGraphicsResourcesRecreate_m836B6EF1199237DBF417FA6F803ECD85E221201B (bool ___recreate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___GraphicsResourcesRecreate_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		bool L_2 = ___recreate0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseEngineUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseEngineUpdate_m7AB4CDD154B44E8B1E224F5BC180640AD1749B1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___EngineUpdate_1;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseFlushPendingResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseFlushPendingResources_mB13980DB6EAEE1060226EB7DFA6CCEEB57D9CE68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___FlushPendingResources_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRegisterIntermediateRenderers(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRegisterIntermediateRenderers_mABFC7BADB09B3ADECB04E0E4D1B52ECD161C9F9E (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B2_0 = NULL;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RegisterIntermediateRenderers_3;
		Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mCEB98AA7C8ED536CE7A592667637829D2D609DCF_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeAdd(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeAdd_mC61730515A6F1CB102C9D98DB7A85763EBDF5D96 (intptr_t ___userData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeAdd_4;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeExecute(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeExecute_mA31EAEA7E25A4EB997B70359272900579DAA5446 (intptr_t ___userData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeExecute_5;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RaiseRenderNodeCleanup(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RaiseRenderNodeCleanup_mEF39A08F8A41ACDD38F7BF073F5B3B545A048B0C (intptr_t ___userData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B2_0 = NULL;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = ((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___RenderNodeCleanup_6;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		intptr_t L_2 = ___userData0;
		NullCheck(G_B2_0);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(G_B2_0, L_2, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_AllocateBuffer_m8DC30A1D8EF56C1F02B665FF7E60887E30A21114 (int32_t ___elementCount0, int32_t ___elementStride1, bool ___vertexBuffer2, const RuntimeMethod* method) 
{
	typedef intptr_t (*Utility_AllocateBuffer_m8DC30A1D8EF56C1F02B665FF7E60887E30A21114_ftn) (int32_t, int32_t, bool);
	static Utility_AllocateBuffer_m8DC30A1D8EF56C1F02B665FF7E60887E30A21114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_AllocateBuffer_m8DC30A1D8EF56C1F02B665FF7E60887E30A21114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::AllocateBuffer(System.Int32,System.Int32,System.Boolean)");
	intptr_t icallRetVal = _il2cpp_icall_func(___elementCount0, ___elementStride1, ___vertexBuffer2);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_FreeBuffer_m3994CCBBB9E8C8B063CC8554EE0DFBE244EA427B (intptr_t ___buffer0, const RuntimeMethod* method) 
{
	typedef void (*Utility_FreeBuffer_m3994CCBBB9E8C8B063CC8554EE0DFBE244EA427B_ftn) (intptr_t);
	static Utility_FreeBuffer_m3994CCBBB9E8C8B063CC8554EE0DFBE244EA427B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_FreeBuffer_m3994CCBBB9E8C8B063CC8554EE0DFBE244EA427B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::FreeBuffer(System.IntPtr)");
	_il2cpp_icall_func(___buffer0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_UpdateBufferRanges_mDAE14652D11D1AABBF39FD3AC71CC8B3A0880DAA (intptr_t ___buffer0, intptr_t ___ranges1, int32_t ___rangeCount2, int32_t ___writeRangeStart3, int32_t ___writeRangeEnd4, const RuntimeMethod* method) 
{
	typedef void (*Utility_UpdateBufferRanges_mDAE14652D11D1AABBF39FD3AC71CC8B3A0880DAA_ftn) (intptr_t, intptr_t, int32_t, int32_t, int32_t);
	static Utility_UpdateBufferRanges_mDAE14652D11D1AABBF39FD3AC71CC8B3A0880DAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_UpdateBufferRanges_mDAE14652D11D1AABBF39FD3AC71CC8B3A0880DAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::UpdateBufferRanges(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___buffer0, ___ranges1, ___rangeCount2, ___writeRangeStart3, ___writeRangeEnd4);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, intptr_t ___vector4s2, int32_t ___count3, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1_ftn) (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*, int32_t, intptr_t, int32_t);
	static Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___props0, ___name1, ___vector4s2, ___count3);
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_GetVertexDeclaration_mB8CDEF6DF2CBA67EE88C0FB666CDC338556F329F (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___vertexAttributes0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Utility_GetVertexDeclaration_mB8CDEF6DF2CBA67EE88C0FB666CDC338556F329F_ftn) (VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2*);
	static Utility_GetVertexDeclaration_mB8CDEF6DF2CBA67EE88C0FB666CDC338556F329F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetVertexDeclaration_mB8CDEF6DF2CBA67EE88C0FB666CDC338556F329F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetVertexDeclaration(UnityEngine.Rendering.VertexAttributeDescriptor[])");
	intptr_t icallRetVal = _il2cpp_icall_func(___vertexAttributes0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4,UnityEngine.Bounds,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_m19E56570934E5AE455A1FE959EAB203D284DA4FA (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = ___material1;
		int32_t L_2 = ___renderLayer4;
		int32_t L_3 = ___shadowCasting5;
		bool L_4 = ___receiveShadows6;
		int32_t L_5 = ___sameDistanceSortPriority7;
		uint64_t L_6 = ___sceneCullingMask8;
		int32_t L_7 = ___rendererCallbackFlags9;
		intptr_t L_8 = ___userData10;
		int32_t L_9 = ___userDataSize11;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_RegisterIntermediateRenderer_Injected_m4CBBCDD753216F330B41766DA7C0D217FE281D64(L_0, L_1, (&___transform2), (&___aabb3), L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4 (intptr_t ___ib0, intptr_t* ___vertexStreams1, int32_t ___streamCount2, intptr_t ___ranges3, int32_t ___rangeCount4, intptr_t ___vertexDecl5, const RuntimeMethod* method) 
{
	typedef void (*Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4_ftn) (intptr_t, intptr_t*, int32_t, intptr_t, int32_t, intptr_t);
	static Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_DrawRanges_m6F5AE31B6A857DB71F66A2662C6EBE1B218B6FF4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)");
	_il2cpp_icall_func(___ib0, ___vertexStreams1, ___streamCount2, ___ranges3, ___rangeCount4, ___vertexDecl5);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetPropertyBlock_m04316F1E2FCAF1F9DDBEBDFE542EEBC3120C4EA4 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetPropertyBlock_m04316F1E2FCAF1F9DDBEBDFE542EEBC3120C4EA4_ftn) (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*);
	static Utility_SetPropertyBlock_m04316F1E2FCAF1F9DDBEBDFE542EEBC3120C4EA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetPropertyBlock_m04316F1E2FCAF1F9DDBEBDFE542EEBC3120C4EA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)");
	_il2cpp_icall_func(___props0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_mFB429FC493F3679035007BF759880159DDBFC049 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___scissorRect0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetScissorRect_Injected_m333581839C1FABCFAEE7EFBDF945ECEF7CCAE610((&___scissorRect0), NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::DisableScissor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DisableScissor_m7B52FA0EC1106927817854145DA8A862B3F2624C (const RuntimeMethod* method) 
{
	typedef void (*Utility_DisableScissor_m7B52FA0EC1106927817854145DA8A862B3F2624C_ftn) ();
	static Utility_DisableScissor_m7B52FA0EC1106927817854145DA8A862B3F2624C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_DisableScissor_m7B52FA0EC1106927817854145DA8A862B3F2624C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::DisableScissor()");
	_il2cpp_icall_func();
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState(UnityEngine.Rendering.StencilState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_CreateStencilState_mDC1F4473214745D1BE75D104081E73B52CCD043B (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___stencilState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		intptr_t L_0;
		L_0 = Utility_CreateStencilState_Injected_m47D217E56E67F17F06B389BF566BF0566D0F5479((&___stencilState0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetStencilState(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetStencilState_m6F1F46336FF696C8C6A360B5E0CB344AC193A9E1 (intptr_t ___stencilState0, int32_t ___stencilRef1, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetStencilState_m6F1F46336FF696C8C6A360B5E0CB344AC193A9E1_ftn) (intptr_t, int32_t);
	static Utility_SetStencilState_m6F1F46336FF696C8C6A360B5E0CB344AC193A9E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetStencilState_m6F1F46336FF696C8C6A360B5E0CB344AC193A9E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetStencilState(System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___stencilState0, ___stencilRef1);
}
// System.Boolean UnityEngine.UIElements.UIR.Utility::HasMappedBufferRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_HasMappedBufferRange_m9701BED18820E4604C7C46DD1615E1272483C043 (const RuntimeMethod* method) 
{
	typedef bool (*Utility_HasMappedBufferRange_m9701BED18820E4604C7C46DD1615E1272483C043_ftn) ();
	static Utility_HasMappedBufferRange_m9701BED18820E4604C7C46DD1615E1272483C043_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_HasMappedBufferRange_m9701BED18820E4604C7C46DD1615E1272483C043_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::HasMappedBufferRange()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.UInt32 UnityEngine.UIElements.UIR.Utility::InsertCPUFence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utility_InsertCPUFence_m8FC65EF05973588366BC403C8807897CEE7CF440 (const RuntimeMethod* method) 
{
	typedef uint32_t (*Utility_InsertCPUFence_m8FC65EF05973588366BC403C8807897CEE7CF440_ftn) ();
	static Utility_InsertCPUFence_m8FC65EF05973588366BC403C8807897CEE7CF440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_InsertCPUFence_m8FC65EF05973588366BC403C8807897CEE7CF440_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::InsertCPUFence()");
	uint32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utility_CPUFencePassed_mBF5F842311E4ABF3DE18E9CA26A3684C21D836A5 (uint32_t ___fence0, const RuntimeMethod* method) 
{
	typedef bool (*Utility_CPUFencePassed_mBF5F842311E4ABF3DE18E9CA26A3684C21D836A5_ftn) (uint32_t);
	static Utility_CPUFencePassed_mBF5F842311E4ABF3DE18E9CA26A3684C21D836A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_CPUFencePassed_mBF5F842311E4ABF3DE18E9CA26A3684C21D836A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::CPUFencePassed(System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(___fence0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_WaitForCPUFencePassed_m5DC66BA62BAA3A503311E5EFE480BA763BA40CBB (uint32_t ___fence0, const RuntimeMethod* method) 
{
	typedef void (*Utility_WaitForCPUFencePassed_m5DC66BA62BAA3A503311E5EFE480BA763BA40CBB_ftn) (uint32_t);
	static Utility_WaitForCPUFencePassed_m5DC66BA62BAA3A503311E5EFE480BA763BA40CBB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_WaitForCPUFencePassed_m5DC66BA62BAA3A503311E5EFE480BA763BA40CBB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::WaitForCPUFencePassed(System.UInt32)");
	_il2cpp_icall_func(___fence0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SyncRenderThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SyncRenderThread_m4A7091ECD29F7A1CEF970D70F52F8C19696D6010 (const RuntimeMethod* method) 
{
	typedef void (*Utility_SyncRenderThread_m4A7091ECD29F7A1CEF970D70F52F8C19696D6010_ftn) ();
	static Utility_SyncRenderThread_m4A7091ECD29F7A1CEF970D70F52F8C19696D6010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SyncRenderThread_m4A7091ECD29F7A1CEF970D70F52F8C19696D6010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SyncRenderThread()");
	_il2cpp_icall_func();
}
// UnityEngine.RectInt UnityEngine.UIElements.UIR.Utility::GetActiveViewport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 Utility_GetActiveViewport_mDB9165183361EBE3D7D6D673EA147472C7FC9F14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_GetActiveViewport_Injected_mA7FB4F05C7BDF5ABC71D228CE66B33954507C46D((&V_0), NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileDrawChainBegin_m28C587F98561B8F4C6ED13AEEE83430A25D3F83B (const RuntimeMethod* method) 
{
	typedef void (*Utility_ProfileDrawChainBegin_m28C587F98561B8F4C6ED13AEEE83430A25D3F83B_ftn) ();
	static Utility_ProfileDrawChainBegin_m28C587F98561B8F4C6ED13AEEE83430A25D3F83B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileDrawChainBegin_m28C587F98561B8F4C6ED13AEEE83430A25D3F83B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileDrawChainBegin()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_ProfileDrawChainEnd_mF3602959ACC39C6EAE6429CC58172A06851E050D (const RuntimeMethod* method) 
{
	typedef void (*Utility_ProfileDrawChainEnd_mF3602959ACC39C6EAE6429CC58172A06851E050D_ftn) ();
	static Utility_ProfileDrawChainEnd_mF3602959ACC39C6EAE6429CC58172A06851E050D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_ProfileDrawChainEnd_mF3602959ACC39C6EAE6429CC58172A06851E050D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::ProfileDrawChainEnd()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_NotifyOfUIREvents_m84DA51777B615A0FA57AE784519A530F23434B47 (bool ___subscribe0, const RuntimeMethod* method) 
{
	typedef void (*Utility_NotifyOfUIREvents_m84DA51777B615A0FA57AE784519A530F23434B47_ftn) (bool);
	static Utility_NotifyOfUIREvents_m84DA51777B615A0FA57AE784519A530F23434B47_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_NotifyOfUIREvents_m84DA51777B615A0FA57AE784519A530F23434B47_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::NotifyOfUIREvents(System.Boolean)");
	_il2cpp_icall_func(___subscribe0);
}
// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Utility_GetUnityProjectionMatrix_mDAA7B9D416768C0A81392BE9F27D551650EFF1D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_GetUnityProjectionMatrix_Injected_m9E6F597B899AD99C931FBAFC0363B6F6E666CA81((&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility__cctor_m8AD41F9B37AF2853080C9A52DEFDCE5E6693C3FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral3E4595538801AB36CCD7E4EFDA9DD0272DEA19EF, /*hidden argument*/NULL);
		((Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var))->___s_MarkerRaiseEngineUpdate_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_RegisterIntermediateRenderer_Injected_m4CBBCDD753216F330B41766DA7C0D217FE281D64 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform2, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___aabb3, int32_t ___renderLayer4, int32_t ___shadowCasting5, bool ___receiveShadows6, int32_t ___sameDistanceSortPriority7, uint64_t ___sceneCullingMask8, int32_t ___rendererCallbackFlags9, intptr_t ___userData10, int32_t ___userDataSize11, const RuntimeMethod* method) 
{
	typedef void (*Utility_RegisterIntermediateRenderer_Injected_m4CBBCDD753216F330B41766DA7C0D217FE281D64_ftn) (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, int32_t, bool, int32_t, uint64_t, int32_t, intptr_t, int32_t);
	static Utility_RegisterIntermediateRenderer_Injected_m4CBBCDD753216F330B41766DA7C0D217FE281D64_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_RegisterIntermediateRenderer_Injected_m4CBBCDD753216F330B41766DA7C0D217FE281D64_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderer_Injected(UnityEngine.Camera,UnityEngine.Material,UnityEngine.Matrix4x4&,UnityEngine.Bounds&,System.Int32,System.Int32,System.Boolean,System.Int32,System.UInt64,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___camera0, ___material1, ___transform2, ___aabb3, ___renderLayer4, ___shadowCasting5, ___receiveShadows6, ___sameDistanceSortPriority7, ___sceneCullingMask8, ___rendererCallbackFlags9, ___userData10, ___userDataSize11);
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetScissorRect_Injected_m333581839C1FABCFAEE7EFBDF945ECEF7CCAE610 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___scissorRect0, const RuntimeMethod* method) 
{
	typedef void (*Utility_SetScissorRect_Injected_m333581839C1FABCFAEE7EFBDF945ECEF7CCAE610_ftn) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*);
	static Utility_SetScissorRect_Injected_m333581839C1FABCFAEE7EFBDF945ECEF7CCAE610_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_SetScissorRect_Injected_m333581839C1FABCFAEE7EFBDF945ECEF7CCAE610_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::SetScissorRect_Injected(UnityEngine.RectInt&)");
	_il2cpp_icall_func(___scissorRect0);
}
// System.IntPtr UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utility_CreateStencilState_Injected_m47D217E56E67F17F06B389BF566BF0566D0F5479 (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9* ___stencilState0, const RuntimeMethod* method) 
{
	typedef intptr_t (*Utility_CreateStencilState_Injected_m47D217E56E67F17F06B389BF566BF0566D0F5479_ftn) (StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9*);
	static Utility_CreateStencilState_Injected_m47D217E56E67F17F06B389BF566BF0566D0F5479_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_CreateStencilState_Injected_m47D217E56E67F17F06B389BF566BF0566D0F5479_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::CreateStencilState_Injected(UnityEngine.Rendering.StencilState&)");
	intptr_t icallRetVal = _il2cpp_icall_func(___stencilState0);
	return icallRetVal;
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetActiveViewport_Injected_mA7FB4F05C7BDF5ABC71D228CE66B33954507C46D (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Utility_GetActiveViewport_Injected_mA7FB4F05C7BDF5ABC71D228CE66B33954507C46D_ftn) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*);
	static Utility_GetActiveViewport_Injected_mA7FB4F05C7BDF5ABC71D228CE66B33954507C46D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetActiveViewport_Injected_mA7FB4F05C7BDF5ABC71D228CE66B33954507C46D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetActiveViewport_Injected(UnityEngine.RectInt&)");
	_il2cpp_icall_func(___ret0);
}
// System.Void UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_GetUnityProjectionMatrix_Injected_m9E6F597B899AD99C931FBAFC0363B6F6E666CA81 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Utility_GetUnityProjectionMatrix_Injected_m9E6F597B899AD99C931FBAFC0363B6F6E666CA81_ftn) (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Utility_GetUnityProjectionMatrix_Injected_m9E6F597B899AD99C931FBAFC0363B6F6E666CA81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Utility_GetUnityProjectionMatrix_Injected_m9E6F597B899AD99C931FBAFC0363B6F6E666CA81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UIElements.UIR.Utility::GetUnityProjectionMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA MeasureFunction_Invoke_m280560A27915B9D2F3D7E75056A63084925EEFCE_inline (MeasureFunction_t60EBED1328F5328D4FA7E26335967E59E73B4D09* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, int32_t ___widthMode2, float ___height3, int32_t ___heightMode4, const RuntimeMethod* method) 
{
	typedef YogaSize_tA276812CB1E90E7AA2028A9474EA6EA46B3B38EA (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, int32_t, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___widthMode2, ___height3, ___heightMode4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaselineFunction_Invoke_m2DDB6CB96A11C1AF2F557FB363F99BA3A2E6E109_inline (BaselineFunction_t13AFADEF52F63320B2159C237635948AEB801679* __this, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___node0, float ___width1, float ___height2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA*, float, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___node0, ___width1, ___height2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_mA90CDE158774C34A28C07CEEA9E9EA2A61618238_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
