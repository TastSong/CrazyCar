#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeShareNamespace.NSCallbackHelper
struct NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C;
// NativeShareNamespace.NSShareResultCallbackAndroid
struct NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0;
// NativeShare
struct NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeShare/ShareResultCallback
struct ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShareResult_t2D0F0DD75A0DAD3506F82AC32C648A14B220EBFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral40A8B44E40C6BC69E14DD32CBDD74FEAF5D4AAE6;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4F8AFCCA3C98C13359E32869847451346F47EC44;
IL2CPP_EXTERN_C String_t* _stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC9C8771A1E0FC481BB963F3BFB8DAEF6EEAF9F;
IL2CPP_EXTERN_C String_t* _stringLiteral6307B090E7219A907073428ED745FD41EFA179DE;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA8244F442D9E98513F33B514C419F2B86C8FC8CC;
IL2CPP_EXTERN_C String_t* _stringLiteralABD1A5066AD876BBA7B4C0BF57BA82BAB5878D3B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CB1C46094BA01F2C62E9A0EFE0F859DE17AED1;
IL2CPP_EXTERN_C String_t* _stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB;
IL2CPP_EXTERN_C String_t* _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF11FDD7A8BE90D32FAADFD0EF114AE0F6B18F0B;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C_m1E9F27E768DFBB2218FAE6B03CF0F19659020A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEEE4D0E955C54E7C3F09624B377FFA05709175EC 
{
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// NativeShare
struct NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B  : public RuntimeObject
{
	// System.String NativeShare::subject
	String_t* ___subject_2;
	// System.String NativeShare::text
	String_t* ___text_3;
	// System.String NativeShare::title
	String_t* ___title_4;
	// System.String NativeShare::url
	String_t* ___url_5;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetPackages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___targetPackages_6;
	// System.Collections.Generic.List`1<System.String> NativeShare::targetClasses
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___targetClasses_7;
	// System.Collections.Generic.List`1<System.String> NativeShare::files
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___files_8;
	// System.Collections.Generic.List`1<System.String> NativeShare::mimes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mimes_9;
	// NativeShare/ShareResultCallback NativeShare::callback
	ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* ___callback_10;
};

struct NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields
{
	// UnityEngine.AndroidJavaClass NativeShare::m_ajc
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeShare::m_context
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_context_1;
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

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// NativeShareNamespace.NSShareResultCallbackAndroid
struct NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// NativeShareNamespace.NSCallbackHelper NativeShareNamespace.NSShareResultCallbackAndroid::callbackHelper
	NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* ___callbackHelper_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NativeShare/ShareResultCallback
struct ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// NativeShareNamespace.NSCallbackHelper
struct NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeShare/ShareResultCallback NativeShareNamespace.NSCallbackHelper::callback
	ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* ___callback_4;
	// NativeShare/ShareResult NativeShareNamespace.NSCallbackHelper::result
	int32_t ___result_5;
	// System.String NativeShareNamespace.NSCallbackHelper::shareTarget
	String_t* ___shareTarget_6;
	// System.Boolean NativeShareNamespace.NSCallbackHelper::resultReceived
	bool ___resultReceived_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Byte[] NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytes_m5E2AE3535B50014A6BC5C326F6202FC7E2BEFB9C (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_AddFile_m2B6FF1B19C51E3229002A8430D253C1EFC0DD240 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaClass NativeShare::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeShare_get_AJC_m1C14E58171DD5A13FBE24EAF7595B6A9E5C995DE (const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject NativeShare::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeShare_get_Context_m3C66BE92A6E8B48B0E3A6F3E153A22A68F778446 (const RuntimeMethod* method) ;
// System.Void NativeShareNamespace.NSShareResultCallbackAndroid::.ctor(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackAndroid__ctor_mDCC938DDD0A5E1FED036520B61D9F430EC3BB25F (NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0* __this, ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* ___callback0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String NativeShare::CombineURLWithText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_CombineURLWithText_mBD3218FD4796ACD1E82A56023ACFD1D50E0B3E6D (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.String NativeShare::GetURLWithScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_GetURLWithScheme_mFB311627815D47656BEB6DBC2C131D8E64668CD4 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, int32_t ___quality1, const RuntimeMethod* method) ;
// System.Byte[] NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytesFromCopy_m20CFC5B48E34BBC8518FD78B6D69216E7D494DA5 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void NativeShare/ShareResultCallback::Invoke(NativeShare/ShareResult,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_inline (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NativeShareNamespace.NSCallbackHelper>()
inline NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* GameObject_AddComponent_TisNSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C_m1E9F27E768DFBB2218FAE6B03CF0F19659020A03 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void NativeShareNamespace.NSCallbackHelper::OnShareCompleted(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_OnShareCompleted_mF30592E3A6A8637EEC2E8B1000CF1DE6DB88C2CD (NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* __this, int32_t ___resultRaw0, String_t* ___shareTarget1, const RuntimeMethod* method) ;
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
// UnityEngine.AndroidJavaClass NativeShare::get_AJC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* NativeShare_get_AJC_m1C14E58171DD5A13FBE24EAF7595B6A9E5C995DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F8AFCCA3C98C13359E32869847451346F47EC44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_ajc == null )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_ajc_0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// m_ajc = new AndroidJavaClass( "com.yasirkula.unity.NativeShare" );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4F8AFCCA3C98C13359E32869847451346F47EC44, NULL);
		((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_ajc_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_ajc_0), (void*)L_1);
	}

IL_0016:
	{
		// return m_ajc;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = ((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_ajc_0;
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeShare::get_Context()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* NativeShare_get_Context_m3C66BE92A6E8B48B0E3A6F3E153A22A68F778446 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if( m_context == null )
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_context_1;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// using( AndroidJavaObject unityClass = new AndroidJavaClass( "com.unity3d.player.UnityPlayer" ) )
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_context = unityClass.GetStatic<AndroidJavaObject>( "currentActivity" );
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_context_1 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_context_1), (void*)L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// return m_context;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ((NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_StaticFields*)il2cpp_codegen_static_fields_for(NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B_il2cpp_TypeInfo_var))->___m_context_1;
		return L_6;
	}
}
// NativeShare NativeShare::SetSubject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetSubject_mB0E01F5228D5C868274067653497BFD0F1EF1D8A (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___subject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B1_1 = NULL;
	{
		// this.subject = subject ?? string.Empty;
		String_t* L_0 = ___subject0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___subject_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___subject_2), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetText_mEB89C82F62181F7754C20F3516754B81559DBA13 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B1_1 = NULL;
	{
		// this.text = text ?? string.Empty;
		String_t* L_0 = ___text0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___text_3 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___text_3), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetUrl_m5A85D24E53BA393226DD13089A85DC9044B294A6 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B1_1 = NULL;
	{
		// this.url = url ?? string.Empty;
		String_t* L_0 = ___url0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___url_5 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___url_5), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetTitle_m966A9EA67F0730EB62F54591335911957DF80EE6 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___title0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B1_1 = NULL;
	{
		// this.title = title ?? string.Empty;
		String_t* L_0 = ___title0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		NullCheck(G_B2_1);
		G_B2_1->___title_4 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___title_4), (void*)G_B2_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::SetCallback(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_SetCallback_m546C0EEF61664E6B0B4A0318044A16BBBA0B5179 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* ___callback0, const RuntimeMethod* method) 
{
	{
		// this.callback = callback;
		ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* L_0 = ___callback0;
		__this->___callback_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callback_10), (void*)L_0);
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddTarget(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_AddTarget_m115A3444918C4130A6BE25218E8966C131784FE5 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if( !string.IsNullOrEmpty( androidPackageName ) )
		String_t* L_0 = ___androidPackageName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0071;
		}
	}
	{
		// if( androidClassName == null )
		String_t* L_2 = ___androidClassName1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		// androidClassName = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___androidClassName1 = L_3;
	}

IL_0012:
	{
		// bool isUnique = true;
		V_0 = (bool)1;
		// for( int i = 0; i < targetPackages.Count; i++ )
		V_1 = 0;
		goto IL_0048;
	}

IL_0018:
	{
		// if( targetPackages[i] == androidPackageName && targetClasses[i] == androidClassName )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___targetPackages_6;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_7 = ___androidPackageName0;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = __this->___targetClasses_7;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_9, L_10, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_12 = ___androidClassName1;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		// isUnique = false;
		V_0 = (bool)0;
		// break;
		goto IL_0056;
	}

IL_0044:
	{
		// for( int i = 0; i < targetPackages.Count; i++ )
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		// for( int i = 0; i < targetPackages.Count; i++ )
		int32_t L_15 = V_1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = __this->___targetPackages_6;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_16, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0018;
		}
	}

IL_0056:
	{
		// if( isUnique )
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_0071;
		}
	}
	{
		// targetPackages.Add( androidPackageName );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->___targetPackages_6;
		String_t* L_20 = ___androidPackageName0;
		NullCheck(L_19);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_19, L_20, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// targetClasses.Add( androidClassName );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___targetClasses_7;
		String_t* L_22 = ___androidClassName1;
		NullCheck(L_21);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_21, L_22, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0071:
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_AddFile_m2B6FF1B19C51E3229002A8430D253C1EFC0DD240 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, String_t* ___filePath0, String_t* ___mime1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_1 = NULL;
	{
		// if( !string.IsNullOrEmpty( filePath ) && File.Exists( filePath ) )
		String_t* L_0 = ___filePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_2 = ___filePath0;
		bool L_3;
		L_3 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// files.Add( filePath );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = __this->___files_8;
		String_t* L_5 = ___filePath0;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, L_5, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// mimes.Add( mime ?? string.Empty );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___mimes_9;
		String_t* L_7 = ___mime1;
		String_t* L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = L_6;
		if (L_8)
		{
			G_B4_0 = L_8;
			G_B4_1 = L_6;
			goto IL_002c;
		}
	}
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_002c:
	{
		NullCheck(G_B4_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B4_1, G_B4_0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0043;
	}

IL_0033:
	{
		// Debug.LogError( "Share Error: file does not exist at path or permission denied: " + filePath );
		String_t* L_10 = ___filePath0;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAFF4CC9F1E1AA16CF56E4F5C85A3BDCA0CB896FB, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
	}

IL_0043:
	{
		// return this;
		return __this;
	}
}
// NativeShare NativeShare::AddFile(UnityEngine.Texture2D,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* NativeShare_AddFile_mC5ACFA1C5FF14D4662ED40BC85658C004D303CC5 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, String_t* ___createdFileName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B12_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* G_B13_2 = NULL;
	{
		// if( !texture )
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___texture0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError( "Share Error: Texture does not exist!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEB70548E100BA47AF6084FE872DCFC01E2DFFEBB, NULL);
		goto IL_0091;
	}

IL_0014:
	{
		// if( string.IsNullOrEmpty( createdFileName ) )
		String_t* L_2 = ___createdFileName1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// createdFileName = "Image.png";
		___createdFileName1 = _stringLiteralF37E86612B08131A4171D70D9CCCAF41191D0B4F;
	}

IL_0023:
	{
		// if( createdFileName.EndsWith( ".jpeg", System.StringComparison.OrdinalIgnoreCase ) || createdFileName.EndsWith( ".jpg", System.StringComparison.OrdinalIgnoreCase ) )
		String_t* L_4 = ___createdFileName1;
		NullCheck(L_4);
		bool L_5;
		L_5 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_4, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = ___createdFileName1;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_6, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}

IL_003f:
	{
		// saveAsJpeg = true;
		V_0 = (bool)1;
		goto IL_0060;
	}

IL_0043:
	{
		// if( !createdFileName.EndsWith( ".png", System.StringComparison.OrdinalIgnoreCase ) )
		String_t* L_8 = ___createdFileName1;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_EndsWith_m5E5D307CA6AEB7C08CE782B4693B19D07ADC9075(L_8, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, NULL);
		if (L_9)
		{
			goto IL_005e;
		}
	}
	{
		// createdFileName += ".png";
		String_t* L_10 = ___createdFileName1;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		___createdFileName1 = L_11;
	}

IL_005e:
	{
		// saveAsJpeg = false;
		V_0 = (bool)0;
	}

IL_0060:
	{
		// string filePath = Path.Combine( Application.temporaryCachePath, createdFileName );
		String_t* L_12;
		L_12 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		String_t* L_13 = ___createdFileName1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_12, L_13, NULL);
		V_1 = L_14;
		// File.WriteAllBytes( filePath, GetTextureBytes( texture, saveAsJpeg ) );
		String_t* L_15 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = ___texture0;
		bool L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = NativeShare_GetTextureBytes_m5E2AE3535B50014A6BC5C326F6202FC7E2BEFB9C(__this, L_16, L_17, NULL);
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_15, L_18, NULL);
		// AddFile( filePath, saveAsJpeg ? "image/jpeg" : "image/png" );
		String_t* L_19 = V_1;
		bool L_20 = V_0;
		G_B11_0 = L_19;
		G_B11_1 = __this;
		if (L_20)
		{
			G_B12_0 = L_19;
			G_B12_1 = __this;
			goto IL_0086;
		}
	}
	{
		G_B13_0 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_008b;
	}

IL_0086:
	{
		G_B13_0 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_008b:
	{
		NullCheck(G_B13_2);
		NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* L_21;
		L_21 = NativeShare_AddFile_m2B6FF1B19C51E3229002A8430D253C1EFC0DD240(G_B13_2, G_B13_1, G_B13_0, NULL);
	}

IL_0091:
	{
		// return this;
		return __this;
	}
}
// System.Void NativeShare::Share()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare_Share_m3DB5879D819C16FC4325D124E296F6C6CD9C13DD (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD1A5066AD876BBA7B4C0BF57BA82BAB5878D3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( files.Count == 0 && subject.Length == 0 && text.Length == 0 && url.Length == 0 )
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___files_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_0, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_2 = __this->___subject_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_4 = __this->___text_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		String_t* L_6 = __this->___url_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogWarning( "Share Error: attempting to share nothing!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral537DA31EA009D26D0F870996AEBF3B39A97F284F, NULL);
		// return;
		return;
	}

IL_003f:
	{
		// AJC.CallStatic( "Share", Context, new NSShareResultCallbackAndroid( callback ), targetPackages.ToArray(), targetClasses.ToArray(), files.ToArray(), mimes.ToArray(), subject, CombineURLWithText(), title );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_8;
		L_8 = NativeShare_get_AJC_m1C14E58171DD5A13FBE24EAF7595B6A9E5C995DE(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = NativeShare_get_Context_m3C66BE92A6E8B48B0E3A6F3E153A22A68F778446(NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* L_13 = __this->___callback_10;
		NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0* L_14 = (NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0*)il2cpp_codegen_object_new(NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		NSShareResultCallbackAndroid__ctor_mDCC938DDD0A5E1FED036520B61D9F430EC3BB25F(L_14, L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = __this->___targetPackages_6;
		NullCheck(L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17;
		L_17 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_16, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = __this->___targetClasses_7;
		NullCheck(L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_19, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_18;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = __this->___files_8;
		NullCheck(L_22);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23;
		L_23 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_22, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_21;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_25 = __this->___mimes_9;
		NullCheck(L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26;
		L_26 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_25, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_24;
		String_t* L_28 = __this->___subject_2;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
		String_t* L_30;
		L_30 = NativeShare_CombineURLWithText_mBD3218FD4796ACD1E82A56023ACFD1D50E0B3E6D(__this, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		String_t* L_32 = __this->___title_4;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_32);
		NullCheck(L_8);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_8, _stringLiteralABD1A5066AD876BBA7B4C0BF57BA82BAB5878D3B, L_31, NULL);
		// }
		return;
	}
}
// System.Boolean NativeShare::TargetExists(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_TargetExists_mD182ABC83C00CF5FBCC07E80ED2AC9128C84B285 (String_t* ___androidPackageName0, String_t* ___androidClassName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8244F442D9E98513F33B514C419F2B86C8FC8CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( string.IsNullOrEmpty( androidPackageName ) )
		String_t* L_0 = ___androidPackageName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if( androidClassName == null )
		String_t* L_2 = ___androidClassName1;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// androidClassName = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___androidClassName1 = L_3;
	}

IL_0014:
	{
		// return AJC.CallStatic<bool>( "TargetExists", Context, androidPackageName, androidClassName );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4;
		L_4 = NativeShare_get_AJC_m1C14E58171DD5A13FBE24EAF7595B6A9E5C995DE(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = NativeShare_get_Context_m3C66BE92A6E8B48B0E3A6F3E153A22A68F778446(NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___androidPackageName0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___androidClassName1;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		NullCheck(L_4);
		bool L_12;
		L_12 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_4, _stringLiteralA8244F442D9E98513F33B514C419F2B86C8FC8CC, L_10, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_12;
	}
}
// System.Boolean NativeShare::FindTarget(System.String&,System.String&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeShare_FindTarget_m848E039C88ACA928EE1440B0F788D011426402ED (String_t** ___androidPackageName0, String_t** ___androidClassName1, String_t* ___packageNameRegex2, String_t* ___classNameRegex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF11FDD7A8BE90D32FAADFD0EF114AE0F6B18F0B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// androidPackageName = null;
		String_t** L_0 = ___androidPackageName0;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// androidClassName = null;
		String_t** L_1 = ___androidClassName1;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		// if( string.IsNullOrEmpty( packageNameRegex ) )
		String_t* L_2 = ___packageNameRegex2;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if( classNameRegex == null )
		String_t* L_4 = ___classNameRegex3;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		// classNameRegex = string.Empty;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___classNameRegex3 = L_5;
	}

IL_001a:
	{
		// string result = AJC.CallStatic<string>( "FindMatchingTarget", Context, packageNameRegex, classNameRegex );
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6;
		L_6 = NativeShare_get_AJC_m1C14E58171DD5A13FBE24EAF7595B6A9E5C995DE(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = NativeShare_get_Context_m3C66BE92A6E8B48B0E3A6F3E153A22A68F778446(NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		String_t* L_11 = ___packageNameRegex2;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		String_t* L_13 = ___classNameRegex3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		NullCheck(L_6);
		String_t* L_14;
		L_14 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_6, _stringLiteralFF11FDD7A8BE90D32FAADFD0EF114AE0F6B18F0B, L_12, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		V_0 = L_14;
		// if( string.IsNullOrEmpty( result ) )
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// int splitIndex = result.IndexOf( '>' );
		String_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_17, ((int32_t)62), NULL);
		V_1 = L_18;
		// if( splitIndex <= 0 || splitIndex >= result.Length - 1 )
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_20 = V_1;
		String_t* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))
		{
			goto IL_0064;
		}
	}

IL_0062:
	{
		// return false;
		return (bool)0;
	}

IL_0064:
	{
		// androidPackageName = result.Substring( 0, splitIndex );
		String_t** L_23 = ___androidPackageName0;
		String_t* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_24, 0, L_25, NULL);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_26);
		// androidClassName = result.Substring( splitIndex + 1 );
		String_t** L_27 = ___androidClassName1;
		String_t* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_28, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_30;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_30);
		// return true;
		return (bool)1;
	}
}
// System.String NativeShare::GetURLWithScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_GetURLWithScheme_mFB311627815D47656BEB6DBC2C131D8E64668CD4 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ( url.Length == 0 || url.Contains( "://" ) ) ? url : ( "https://" + url );
		String_t* L_0 = __this->___url_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_2 = __this->___url_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4 = __this->___url_5;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, L_4, NULL);
		return L_5;
	}

IL_0030:
	{
		String_t* L_6 = __this->___url_5;
		return L_6;
	}
}
// System.String NativeShare::CombineURLWithText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeShare_CombineURLWithText_mBD3218FD4796ACD1E82A56023ACFD1D50E0B3E6D (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( url.Length == 0 || text.IndexOf( url, System.StringComparison.OrdinalIgnoreCase ) >= 0 )
		String_t* L_0 = __this->___url_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_2 = __this->___text_3;
		String_t* L_3 = __this->___url_5;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_2, L_3, 5, NULL);
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}

IL_0022:
	{
		// return text;
		String_t* L_5 = __this->___text_3;
		return L_5;
	}

IL_0029:
	{
		// else if( text.Length == 0 )
		String_t* L_6 = __this->___text_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return GetURLWithScheme();
		String_t* L_8;
		L_8 = NativeShare_GetURLWithScheme_mFB311627815D47656BEB6DBC2C131D8E64668CD4(__this, NULL);
		return L_8;
	}

IL_003d:
	{
		// return string.Concat( text, " ", GetURLWithScheme() );
		String_t* L_9 = __this->___text_3;
		String_t* L_10;
		L_10 = NativeShare_GetURLWithScheme_mFB311627815D47656BEB6DBC2C131D8E64668CD4(__this, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_10, NULL);
		return L_11;
	}
}
// System.Byte[] NativeShare::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytes_m5E2AE3535B50014A6BC5C326F6202FC7E2BEFB9C (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	try
	{// begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b_1;
			}
		}
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = ___texture0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
			L_2 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_1, NULL);
			G_B3_0 = L_2;
			goto IL_0013_1;
		}

IL_000b_1:
		{
			Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ___texture0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_3, ((int32_t)100), NULL);
			G_B3_0 = L_4;
		}

IL_0013_1:
		{
			V_0 = G_B3_0;
			goto IL_002e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NativeShare_GetTextureBytesFromCopy_m20CFC5B48E34BBC8518FD78B6D69216E7D494DA5(__this, L_5, L_6, NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	}// end catch (depth: 1)

CATCH_0022:
	{// begin catch(System.ArgumentException)
		// catch( System.ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = NativeShare_GetTextureBytesFromCopy_m20CFC5B48E34BBC8518FD78B6D69216E7D494DA5(__this, L_8, L_9, NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002e;
	}// end catch (depth: 1)

IL_002e:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeShare::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeShare_GetTextureBytesFromCopy_m20CFC5B48E34BBC8518FD78B6D69216E7D494DA5 (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, bool ___isJpeg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6307B090E7219A907073428ED745FD41EFA179DE);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Sharing non-readable textures is slower than sharing readable textures" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral6307B090E7219A907073428ED745FD41EFA179DE, NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = RenderTexture_GetTemporary_m82379FD4C767A36F0677CAF4E68319EAE16ADF7F(L_1, L_3, NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5;
		L_5 = RenderTexture_get_active_mA4434B3E79DEF2C01CAE0A53061598B16443C9E7(NULL);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				// RenderTexture.active = activeRT;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_2;
				RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_6, NULL);
				// RenderTexture.ReleaseTemporary( rt );
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_1;
				RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_7, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// Graphics.Blit( texture, rt );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = ___texture0;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_1;
					il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
					Graphics_Blit_m8D99E16B74C7D3C8F79F4F142C59DB6B38114504(L_8, L_9, NULL);
					// RenderTexture.active = rt;
					RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = V_1;
					RenderTexture_set_active_m5EE8E2327EF9B306C1425014CC34C41A8384E7AB(L_10, NULL);
					// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = ___texture0;
					NullCheck(L_11);
					int32_t L_12;
					L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = ___texture0;
					NullCheck(L_13);
					int32_t L_14;
					L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
					bool L_15 = ___isJpeg1;
					G_B2_0 = L_14;
					G_B2_1 = L_12;
					if (L_15)
					{
						G_B3_0 = L_14;
						G_B3_1 = L_12;
						goto IL_0043_2;
					}
				}
				{
					G_B4_0 = 4;
					G_B4_1 = G_B2_0;
					G_B4_2 = G_B2_1;
					goto IL_0044_2;
				}

IL_0043_2:
				{
					G_B4_0 = 3;
					G_B4_1 = G_B3_0;
					G_B4_2 = G_B3_1;
				}

IL_0044_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_16, G_B4_2, G_B4_1, G_B4_0, (bool)0, NULL);
					V_0 = L_16;
					// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_17 = V_0;
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = ___texture0;
					NullCheck(L_18);
					int32_t L_19;
					L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = ___texture0;
					NullCheck(L_20);
					int32_t L_21;
					L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
					Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
					memset((&L_22), 0, sizeof(L_22));
					Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_22), (0.0f), (0.0f), ((float)L_19), ((float)L_21), /*hidden argument*/NULL);
					NullCheck(L_17);
					Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_17, L_22, 0, 0, (bool)0, NULL);
					// sourceTexReadable.Apply( false, false );
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23 = V_0;
					NullCheck(L_23);
					Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_23, (bool)0, (bool)0, NULL);
					// }
					goto IL_0097;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_007b_1;
				}
				throw e;
			}

CATCH_007b_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24 = V_0;
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_24, NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0097:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b7:
			{// begin finally (depth: 1)
				// Object.DestroyImmediate( sourceTexReadable );
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_25, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
					bool L_26 = ___isJpeg1;
					if (L_26)
					{
						goto IL_00a3_2;
					}
				}
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
					L_28 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_27, NULL);
					G_B11_0 = L_28;
					goto IL_00ab_2;
				}

IL_00a3_2:
				{
					Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_0;
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30;
					L_30 = ImageConversion_EncodeToJPG_mD0307B5DFF32A3FF39488E97B467F11AFE501F6F(L_29, ((int32_t)100), NULL);
					G_B11_0 = L_30;
				}

IL_00ab_2:
				{
					V_3 = G_B11_0;
					goto IL_00be;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00ae_1;
				}
				throw e;
			}

CATCH_00ae_1:
			{// begin catch(System.Exception)
				// Debug.LogException( e );
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
				// return null;
				V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00be;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		return L_31;
	}
}
// System.Void NativeShare::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeShare__ctor_m7808C679AB06B9BE0BFF3FA5FF0F7FD06C51BE6E (NativeShare_t89B79EA6B0A34E197A0FF3815CEE1B970D30960B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string subject = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___subject_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subject_2), (void*)L_0);
		// private string text = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___text_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_3), (void*)L_1);
		// private string title = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___title_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___title_4), (void*)L_2);
		// private string url = string.Empty;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___url_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___url_5), (void*)L_3);
		// private readonly List<string> targetPackages = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_4, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___targetPackages_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetPackages_6), (void*)L_4);
		// private readonly List<string> targetClasses = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_5, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___targetClasses_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetClasses_7), (void*)L_5);
		// private readonly List<string> files = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_6, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___files_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___files_8), (void*)L_6);
		// private readonly List<string> mimes = new List<string>( 0 );
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF(L_7, 0, List_1__ctor_m1A062F45FE926079CE2D4FD38A3BF15F7AEB89AF_RuntimeMethod_var);
		__this->___mimes_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mimes_9), (void*)L_7);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_Multicast(ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* currentDelegate = reinterpret_cast<ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___result0, ___shareTarget1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_OpenInst(ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, ___shareTarget1, method);
}
void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_OpenStatic(ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___result0, ___shareTarget1, method);
}
void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_OpenStaticInvoker(ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___result0, ___shareTarget1);
}
void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_ClosedStaticInvoker(ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___result0, ___shareTarget1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5 (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___shareTarget1' to native representation
	char* ____shareTarget1_marshaled = NULL;
	____shareTarget1_marshaled = il2cpp_codegen_marshal_string(___shareTarget1);

	// Native function invocation
	il2cppPInvokeFunc(___result0, ____shareTarget1_marshaled);

	// Marshaling cleanup of parameter '___shareTarget1' native representation
	il2cpp_codegen_marshal_free(____shareTarget1_marshaled);
	____shareTarget1_marshaled = NULL;

}
// System.Void NativeShare/ShareResultCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback__ctor_m916C36D840FC04394DB3549444BFA1E4C79F8AD4 (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_Multicast;
}
// System.Void NativeShare/ShareResultCallback::Invoke(NativeShare/ShareResult,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, ___shareTarget1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeShare/ShareResultCallback::BeginInvoke(NativeShare/ShareResult,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShareResultCallback_BeginInvoke_m0B2F88E15A556434DF44FE85B2FD5B41280C8809 (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShareResult_t2D0F0DD75A0DAD3506F82AC32C648A14B220EBFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(ShareResult_t2D0F0DD75A0DAD3506F82AC32C648A14B220EBFB_il2cpp_TypeInfo_var, &___result0);
	__d_args[1] = ___shareTarget1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NativeShare/ShareResultCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShareResultCallback_EndInvoke_m71774DE46FB1BA955B2A07A024B787E90FEB02B4 (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeShareNamespace.NSCallbackHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_Awake_mE096BE13BE6023721C84A801540268A09772B6F3 (NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad( gameObject );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_Update_mEB333F45B6422247B0A7BBD25BBE2AED04D8A3D9 (NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( resultReceived )
		bool L_0 = __this->___resultReceived_7;
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		// resultReceived = false;
		__this->___resultReceived_7 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				// Destroy( gameObject );
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
				L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if( callback != null )
				ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* L_2 = __this->___callback_4;
				if (!L_2)
				{
					goto IL_002e_1;
				}
			}
			{
				// callback( result, shareTarget );
				ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* L_3 = __this->___callback_4;
				int32_t L_4 = __this->___result_5;
				String_t* L_5 = __this->___shareTarget_6;
				NullCheck(L_3);
				ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_inline(L_3, L_4, L_5, NULL);
			}

IL_002e_1:
			{
				// }
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_OnApplicationFocus_m96B1F903D775ACBF5D48883C1EE8DA1E23F17EAF (NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* __this, bool ___focus0, const RuntimeMethod* method) 
{
	{
		// if( focus )
		bool L_0 = ___focus0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// resultReceived = true;
		__this->___resultReceived_7 = (bool)1;
	}

IL_000a:
	{
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::OnShareCompleted(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper_OnShareCompleted_mF30592E3A6A8637EEC2E8B1000CF1DE6DB88C2CD (NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* __this, int32_t ___resultRaw0, String_t* ___shareTarget1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// NativeShare.ShareResult shareResult = (NativeShare.ShareResult) resultRaw;
		int32_t L_0 = ___resultRaw0;
		V_0 = L_0;
		// if( result == NativeShare.ShareResult.Unknown )
		int32_t L_1 = __this->___result_5;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// result = shareResult;
		int32_t L_2 = V_0;
		__this->___result_5 = L_2;
		// this.shareTarget = shareTarget;
		String_t* L_3 = ___shareTarget1;
		__this->___shareTarget_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_3);
		goto IL_005f;
	}

IL_001a:
	{
		// else if( result == NativeShare.ShareResult.NotShared )
		int32_t L_4 = __this->___result_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		// if( shareResult == NativeShare.ShareResult.Shared )
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		// result = NativeShare.ShareResult.Shared;
		__this->___result_5 = 1;
		// this.shareTarget = shareTarget;
		String_t* L_6 = ___shareTarget1;
		__this->___shareTarget_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_6);
		goto IL_005f;
	}

IL_0037:
	{
		// else if( shareResult == NativeShare.ShareResult.NotShared && !string.IsNullOrEmpty( shareTarget ) )
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_8 = ___shareTarget1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_005f;
		}
	}
	{
		// this.shareTarget = shareTarget;
		String_t* L_10 = ___shareTarget1;
		__this->___shareTarget_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_10);
		goto IL_005f;
	}

IL_004c:
	{
		// if( shareResult == NativeShare.ShareResult.Shared && !string.IsNullOrEmpty( shareTarget ) )
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_12 = ___shareTarget1;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		// this.shareTarget = shareTarget;
		String_t* L_14 = ___shareTarget1;
		__this->___shareTarget_6 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shareTarget_6), (void*)L_14);
	}

IL_005f:
	{
		// resultReceived = true;
		__this->___resultReceived_7 = (bool)1;
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSCallbackHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSCallbackHelper__ctor_m69F2D020849D79E79D08CDDB4A574884DAFFD73D (NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NativeShareNamespace.NSShareResultCallbackAndroid::.ctor(NativeShare/ShareResultCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackAndroid__ctor_mDCC938DDD0A5E1FED036520B61D9F430EC3BB25F (NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0* __this, ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C_m1E9F27E768DFBB2218FAE6B03CF0F19659020A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40A8B44E40C6BC69E14DD32CBDD74FEAF5D4AAE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC9C8771A1E0FC481BB963F3BFB8DAEF6EEAF9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NSShareResultCallbackAndroid( NativeShare.ShareResultCallback callback ) : base( "com.yasirkula.unity.NativeShareResultReceiver" )
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral40A8B44E40C6BC69E14DD32CBDD74FEAF5D4AAE6, NULL);
		// callbackHelper = new GameObject( "NSCallbackHelper" ).AddComponent<NSCallbackHelper>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral5AC9C8771A1E0FC481BB963F3BFB8DAEF6EEAF9F, NULL);
		NullCheck(L_0);
		NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* L_1;
		L_1 = GameObject_AddComponent_TisNSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C_m1E9F27E768DFBB2218FAE6B03CF0F19659020A03(L_0, GameObject_AddComponent_TisNSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C_m1E9F27E768DFBB2218FAE6B03CF0F19659020A03_RuntimeMethod_var);
		__this->___callbackHelper_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackHelper_4), (void*)L_1);
		// callbackHelper.callback = callback;
		NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* L_2 = __this->___callbackHelper_4;
		ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* L_3 = ___callback0;
		NullCheck(L_2);
		L_2->___callback_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___callback_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void NativeShareNamespace.NSShareResultCallbackAndroid::OnShareCompleted(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSShareResultCallbackAndroid_OnShareCompleted_m4C2B684FE5B331D18A956A1B51E3028A6771DAFE (NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CB1C46094BA01F2C62E9A0EFE0F859DE17AED1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( !callbackHelper )
		NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* L_0 = __this->___callbackHelper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.LogWarning( "NSCallbackHelper is destroyed!" );
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD3CB1C46094BA01F2C62E9A0EFE0F859DE17AED1, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// callbackHelper.OnShareCompleted( result, shareTarget );
		NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* L_2 = __this->___callbackHelper_4;
		int32_t L_3 = ___result0;
		String_t* L_4 = ___shareTarget1;
		NullCheck(L_2);
		NSCallbackHelper_OnShareCompleted_mF30592E3A6A8637EEC2E8B1000CF1DE6DB88C2CD(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean NativeShareNamespace.NSShareResultCallbackAndroid::HasManagedCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSShareResultCallbackAndroid_HasManagedCallback_m3D87E08AB3A27B4F9DF1EFB2F1C925AAAEA7FF08 (NSShareResultCallbackAndroid_t70A5A1AEE38FC283E6B2D2F3D9FB87A08B60CFB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return callbackHelper && callbackHelper.callback != null;
		NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* L_0 = __this->___callbackHelper_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		NSCallbackHelper_t0FE98DE6D6CF554080E07CC69C0C7AD59C49824C* L_2 = __this->___callbackHelper_4;
		NullCheck(L_2);
		ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* L_3 = L_2->___callback_4;
		return (bool)((!(((RuntimeObject*)(ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ShareResultCallback_Invoke_mD1BF5CCE67D2D8A0C4930E3344896606BF4E9F6A_inline (ShareResultCallback_t9BEF49D9F4FF6C26758394EA70E84DD6339733C5* __this, int32_t ___result0, String_t* ___shareTarget1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___result0, ___shareTarget1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
