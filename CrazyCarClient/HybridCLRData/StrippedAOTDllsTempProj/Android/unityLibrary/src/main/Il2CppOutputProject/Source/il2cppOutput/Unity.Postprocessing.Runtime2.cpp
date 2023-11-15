#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>
struct Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232;
// System.Collections.Generic.Dictionary`2<UnityEngine.Shader,UnityEngine.Rendering.PostProcessing.PropertySheet>
struct Dictionary_2_t02150DAF80DD1F49C7D778D850960419D8DF445A;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.RenderTextureFormat>
struct KeyCollection_t9A9C42D197B12107BDA92805EF1F796FCC760732;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.RenderTextureFormat>
struct ValueCollection_t8D12F468CADE655C2F49E97F8F3ACC0CBA569ADF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Boolean>[]
struct EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.RenderTextureFormat>[]
struct EntryU5BU5D_tB35BD67B4E02E95C4F2984FDEEF40DE6EDE4ACCC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Rendering.PostProcessing.AutoExposure
struct AutoExposure_t3DC0981C2B844D7B8E12CE9C8C731F4387846F5C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Rendering.PostProcessing.LogHistogram
struct LogHistogram_tFD0177A61EF64A4720A90B188FB18B1AEAC02A24;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.ObsoleteAttribute
struct ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A;
// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer
struct PostProcessDebugLayer_tD1025B624D67FB5F369C673972D2219EFF179D02;
// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7;
// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D;
// UnityEngine.Rendering.PostProcessing.PropertySheet
struct PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397;
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Rendering.PostProcessing.Spline
struct Spline_tD8C641273FEAA3A7958A261C41D694636049CB21;
// System.String
struct String_t;
// UnityEngine.Rendering.PostProcessing.TargetPool
struct TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C;
// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing
struct TemporalAntialiasing_t66F588EBDAB51F3C7094E5495132B8256CB0C644;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Texture3D
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1;
// UnityEngine.Rendering.PostProcessing.TextureLerper
struct TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
struct ComputeShaders_t8F1C8B34C544DEC3B4D302509211C37989AAC39F;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts
struct SMAALuts_t62105E31B4A58EC4A668D9C79B9720F7CD5C3CB2;
// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
struct Shaders_t2934A1A9726776BE88E31A97A67A9BD9ACEED86B;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3E63EA4D6F8144DD6406580EE9A7B6F874A529E4;
IL2CPP_EXTERN_C String_t* _stringLiteral4F889A7069FB348E59778EC4C275B6A09FE34752;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED45B85ADA1AFA9C8962A3063BC0DB7FA04521E;
IL2CPP_EXTERN_C String_t* _stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A;
IL2CPP_EXTERN_C String_t* _stringLiteral96AFB5CB3B476CE64056EF8716AEA14B385714ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9C7F6CFACBA60E7454344DA7A7EB629EB0C4A8F2;
IL2CPP_EXTERN_C String_t* _stringLiteralADD218EEEC60165FC319ED66CAD59FFB5160614D;
IL2CPP_EXTERN_C String_t* _stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB;
IL2CPP_EXTERN_C String_t* _stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m7D68C17F2EFEADA12A803841CFD7C5A8D3ED159B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAEC79FC89BB27663084F0D041157806C2B4858B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m164E41C28FA43F25F51C417135CF61976ECF3B69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFD8C82612D4654B884F2F68C8C1D93B56A1E0081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureFormatUtilities_GetUncompressedRenderTextureFormat_mCA81A8A50F7AF487D8D4E2AC8363A5FA6D1ECA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6E8F51999B5C2D1A5E09B1963CF042E7B5CAA500* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t66E188B36DF8E1A23EBDA7253CDCE978CD3EF298* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t95D69F17F87935E5166EE0E3C174BB8A8F051F5B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>
struct Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB35BD67B4E02E95C4F2984FDEEF40DE6EDE4ACCC* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9A9C42D197B12107BDA92805EF1F796FCC760732* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8D12F468CADE655C2F49E97F8F3ACC0CBA569ADF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.RenderTexture>
struct List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderTextureU5BU5D_t9C963C4B9AAD862BBE402147E82F7BEBF699F6A6* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Rendering.PostProcessing.PropertySheet
struct PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397  : public RuntimeObject
{
	// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.PostProcessing.PropertySheet::<properties>k__BackingField
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___U3CpropertiesU3Ek__BackingField_0;
	// UnityEngine.Material UnityEngine.Rendering.PostProcessing.PropertySheet::<material>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CmaterialU3Ek__BackingField_1;
};

// UnityEngine.Rendering.PostProcessing.PropertySheetFactory
struct PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Shader,UnityEngine.Rendering.PostProcessing.PropertySheet> UnityEngine.Rendering.PostProcessing.PropertySheetFactory::m_Sheets
	Dictionary_2_t02150DAF80DD1F49C7D778D850960419D8DF445A* ___m_Sheets_0;
};

// UnityEngine.Rendering.PostProcessing.ShaderIDs
struct ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99  : public RuntimeObject
{
};

struct ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_StaticFields
{
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MainTex
	int32_t ___MainTex_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Jitter
	int32_t ___Jitter_1;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Sharpness
	int32_t ___Sharpness_2;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FinalBlendParameters
	int32_t ___FinalBlendParameters_3;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HistoryTex
	int32_t ___HistoryTex_4;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SMAA_Flip
	int32_t ___SMAA_Flip_5;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SMAA_Flop
	int32_t ___SMAA_Flop_6;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AOParams
	int32_t ___AOParams_7;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AOColor
	int32_t ___AOColor_8;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::OcclusionTexture1
	int32_t ___OcclusionTexture1_9;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::OcclusionTexture2
	int32_t ___OcclusionTexture2_10;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SAOcclusionTexture
	int32_t ___SAOcclusionTexture_11;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MSVOcclusionTexture
	int32_t ___MSVOcclusionTexture_12;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthCopy
	int32_t ___DepthCopy_13;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LinearDepth
	int32_t ___LinearDepth_14;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth1
	int32_t ___LowDepth1_15;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth2
	int32_t ___LowDepth2_16;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth3
	int32_t ___LowDepth3_17;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LowDepth4
	int32_t ___LowDepth4_18;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth1
	int32_t ___TiledDepth1_19;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth2
	int32_t ___TiledDepth2_20;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth3
	int32_t ___TiledDepth3_21;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TiledDepth4
	int32_t ___TiledDepth4_22;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion1
	int32_t ___Occlusion1_23;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion2
	int32_t ___Occlusion2_24;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion3
	int32_t ___Occlusion3_25;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Occlusion4
	int32_t ___Occlusion4_26;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined1
	int32_t ___Combined1_27;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined2
	int32_t ___Combined2_28;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Combined3
	int32_t ___Combined3_29;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SSRResolveTemp
	int32_t ___SSRResolveTemp_30;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Noise
	int32_t ___Noise_31;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Test
	int32_t ___Test_32;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Resolve
	int32_t ___Resolve_33;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::History
	int32_t ___History_34;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ViewMatrix
	int32_t ___ViewMatrix_35;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InverseViewMatrix
	int32_t ___InverseViewMatrix_36;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ScreenSpaceProjectionMatrix
	int32_t ___ScreenSpaceProjectionMatrix_37;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Params2
	int32_t ___Params2_38;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FogColor
	int32_t ___FogColor_39;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::FogParams
	int32_t ___FogParams_40;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VelocityScale
	int32_t ___VelocityScale_41;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MaxBlurRadius
	int32_t ___MaxBlurRadius_42;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpMaxBlurRadius
	int32_t ___RcpMaxBlurRadius_43;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VelocityTex
	int32_t ___VelocityTex_44;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile2RT
	int32_t ___Tile2RT_45;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile4RT
	int32_t ___Tile4RT_46;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Tile8RT
	int32_t ___Tile8RT_47;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileMaxOffs
	int32_t ___TileMaxOffs_48;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileMaxLoop
	int32_t ___TileMaxLoop_49;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TileVRT
	int32_t ___TileVRT_50;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::NeighborMaxTex
	int32_t ___NeighborMaxTex_51;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LoopCount
	int32_t ___LoopCount_52;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthOfFieldTemp
	int32_t ___DepthOfFieldTemp_53;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthOfFieldTex
	int32_t ___DepthOfFieldTex_54;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distance
	int32_t ___Distance_55;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LensCoeff
	int32_t ___LensCoeff_56;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MaxCoC
	int32_t ___MaxCoC_57;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpMaxCoC
	int32_t ___RcpMaxCoC_58;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RcpAspect
	int32_t ___RcpAspect_59;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::CoCTex
	int32_t ___CoCTex_60;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TaaParams
	int32_t ___TaaParams_61;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::AutoExposureTex
	int32_t ___AutoExposureTex_62;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HistogramBuffer
	int32_t ___HistogramBuffer_63;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Params
	int32_t ___Params_64;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ScaleOffsetRes
	int32_t ___ScaleOffsetRes_65;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::BloomTex
	int32_t ___BloomTex_66;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::SampleScale
	int32_t ___SampleScale_67;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Threshold
	int32_t ___Threshold_68;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorIntensity
	int32_t ___ColorIntensity_69;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_DirtTex
	int32_t ___Bloom_DirtTex_70;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_Settings
	int32_t ___Bloom_Settings_71;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_Color
	int32_t ___Bloom_Color_72;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Bloom_DirtTileOffset
	int32_t ___Bloom_DirtTileOffset_73;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChromaticAberration_Amount
	int32_t ___ChromaticAberration_Amount_74;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChromaticAberration_SpectralLut
	int32_t ___ChromaticAberration_SpectralLut_75;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distortion_CenterScale
	int32_t ___Distortion_CenterScale_76;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Distortion_Amount
	int32_t ___Distortion_Amount_77;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut2D
	int32_t ___Lut2D_78;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut3D
	int32_t ___Lut3D_79;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut3D_Params
	int32_t ___Lut3D_Params_80;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lut2D_Params
	int32_t ___Lut2D_Params_81;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UserLut2D_Params
	int32_t ___UserLut2D_Params_82;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::PostExposure
	int32_t ___PostExposure_83;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorBalance
	int32_t ___ColorBalance_84;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ColorFilter
	int32_t ___ColorFilter_85;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HueSatCon
	int32_t ___HueSatCon_86;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Brightness
	int32_t ___Brightness_87;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerRed
	int32_t ___ChannelMixerRed_88;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerGreen
	int32_t ___ChannelMixerGreen_89;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ChannelMixerBlue
	int32_t ___ChannelMixerBlue_90;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Lift
	int32_t ___Lift_91;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::InvGamma
	int32_t ___InvGamma_92;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Gain
	int32_t ___Gain_93;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Curves
	int32_t ___Curves_94;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::CustomToneCurve
	int32_t ___CustomToneCurve_95;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ToeSegmentA
	int32_t ___ToeSegmentA_96;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ToeSegmentB
	int32_t ___ToeSegmentB_97;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MidSegmentA
	int32_t ___MidSegmentA_98;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::MidSegmentB
	int32_t ___MidSegmentB_99;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ShoSegmentA
	int32_t ___ShoSegmentA_100;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::ShoSegmentB
	int32_t ___ShoSegmentB_101;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Color
	int32_t ___Vignette_Color_102;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Center
	int32_t ___Vignette_Center_103;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Settings
	int32_t ___Vignette_Settings_104;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Mask
	int32_t ___Vignette_Mask_105;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Opacity
	int32_t ___Vignette_Opacity_106;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Vignette_Mode
	int32_t ___Vignette_Mode_107;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Grain_Params1
	int32_t ___Grain_Params1_108;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Grain_Params2
	int32_t ___Grain_Params2_109;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::GrainTex
	int32_t ___GrainTex_110;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Phase
	int32_t ___Phase_111;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::GrainNoiseParameters
	int32_t ___GrainNoiseParameters_112;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::LumaInAlpha
	int32_t ___LumaInAlpha_113;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DitheringTex
	int32_t ___DitheringTex_114;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Dithering_Coords
	int32_t ___Dithering_Coords_115;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::From
	int32_t ___From_116;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::To
	int32_t ___To_117;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::Interp
	int32_t ___Interp_118;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::TargetColor
	int32_t ___TargetColor_119;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::HalfResFinalCopy
	int32_t ___HalfResFinalCopy_120;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::WaveformSource
	int32_t ___WaveformSource_121;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::WaveformBuffer
	int32_t ___WaveformBuffer_122;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::VectorscopeBuffer
	int32_t ___VectorscopeBuffer_123;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::RenderViewportScaleFactor
	int32_t ___RenderViewportScaleFactor_124;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UVTransform
	int32_t ___UVTransform_125;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::DepthSlice
	int32_t ___DepthSlice_126;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::UVScaleOffset
	int32_t ___UVScaleOffset_127;
	// System.Int32 UnityEngine.Rendering.PostProcessing.ShaderIDs::PosScaleOffset
	int32_t ___PosScaleOffset_128;
};

// UnityEngine.Rendering.PostProcessing.Spline
struct Spline_tD8C641273FEAA3A7958A261C41D694636049CB21  : public RuntimeObject
{
	// UnityEngine.AnimationCurve UnityEngine.Rendering.PostProcessing.Spline::curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve_2;
	// System.Boolean UnityEngine.Rendering.PostProcessing.Spline::m_Loop
	bool ___m_Loop_3;
	// System.Single UnityEngine.Rendering.PostProcessing.Spline::m_ZeroValue
	float ___m_ZeroValue_4;
	// System.Single UnityEngine.Rendering.PostProcessing.Spline::m_Range
	float ___m_Range_5;
	// UnityEngine.AnimationCurve UnityEngine.Rendering.PostProcessing.Spline::m_InternalLoopingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_InternalLoopingCurve_6;
	// System.Int32 UnityEngine.Rendering.PostProcessing.Spline::frameCount
	int32_t ___frameCount_7;
	// System.Single[] UnityEngine.Rendering.PostProcessing.Spline::cachedData
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___cachedData_8;
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

// UnityEngine.Rendering.PostProcessing.TargetPool
struct TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Rendering.PostProcessing.TargetPool::m_Pool
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Pool_0;
	// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::m_Current
	int32_t ___m_Current_1;
};

// UnityEngine.Rendering.PostProcessing.TextureFormatUtilities
struct TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D  : public RuntimeObject
{
};

struct TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_FormatAliasMap
	Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* ___s_FormatAliasMap_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_SupportedRenderTextureFormats
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___s_SupportedRenderTextureFormats_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::s_SupportedTextureFormats
	Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* ___s_SupportedTextureFormats_2;
};

// UnityEngine.Rendering.PostProcessing.TextureLerper
struct TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424  : public RuntimeObject
{
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.TextureLerper::m_Command
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_Command_1;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.TextureLerper::m_PropertySheets
	PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* ___m_PropertySheets_2;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.TextureLerper::m_Resources
	PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* ___m_Resources_3;
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityEngine.Rendering.PostProcessing.TextureLerper::m_Recycled
	List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* ___m_Recycled_4;
	// System.Collections.Generic.List`1<UnityEngine.RenderTexture> UnityEngine.Rendering.PostProcessing.TextureLerper::m_Actives
	List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* ___m_Actives_5;
};

struct TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_StaticFields
{
	// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::m_Instance
	TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* ___m_Instance_0;
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

// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders
struct ComputeShaders_t8F1C8B34C544DEC3B4D302509211C37989AAC39F  : public RuntimeObject
{
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::autoExposure
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___autoExposure_0;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::exposureHistogram
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___exposureHistogram_1;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::lut3DBaker
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___lut3DBaker_2;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::texture3dLerp
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___texture3dLerp_3;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::gammaHistogram
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___gammaHistogram_4;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::waveform
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___waveform_5;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::vectorscope
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___vectorscope_6;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAODownsample1
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___multiScaleAODownsample1_7;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAODownsample2
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___multiScaleAODownsample2_8;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAORender
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___multiScaleAORender_9;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::multiScaleAOUpsample
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___multiScaleAOUpsample_10;
	// UnityEngine.ComputeShader UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders::gaussianDownsample
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___gaussianDownsample_11;
};

// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders
struct Shaders_t2934A1A9726776BE88E31A97A67A9BD9ACEED86B  : public RuntimeObject
{
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::bloom
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___bloom_0;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copy
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___copy_1;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStd
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___copyStd_2;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStdFromTexArray
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___copyStdFromTexArray_3;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::copyStdFromDoubleWide
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___copyStdFromDoubleWide_4;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::discardAlpha
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___discardAlpha_5;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::depthOfField
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___depthOfField_6;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::finalPass
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___finalPass_7;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::grainBaker
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___grainBaker_8;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::motionBlur
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___motionBlur_9;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::temporalAntialiasing
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___temporalAntialiasing_10;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::subpixelMorphologicalAntialiasing
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___subpixelMorphologicalAntialiasing_11;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::texture2dLerp
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___texture2dLerp_12;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::uber
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___uber_13;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::lut2DBaker
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___lut2DBaker_14;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::lightMeter
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___lightMeter_15;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::gammaHistogram
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___gammaHistogram_16;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::waveform
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___waveform_17;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::vectorscope
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___vectorscope_18;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::debugOverlays
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___debugOverlays_19;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::deferredFog
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___deferredFog_20;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::scalableAO
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___scalableAO_21;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::multiScaleAO
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___multiScaleAO_22;
	// UnityEngine.Shader UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders::screenSpaceReflections
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___screenSpaceReflections_23;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>
struct Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ____current_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// System.ObsoleteAttribute
struct ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;
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

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tE536C13103641FC6425E75BF920C347C0C2F39A0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tE536C13103641FC6425E75BF920C347C0C2F39A0__padding[20];
	};
};
#pragma pack(pop, tp)

// System.Nullable`1<UnityEngine.Rect>
struct Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t60D390955C994A4CAC0539E533ED349C64C34EF4  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t60D390955C994A4CAC0539E533ED349C64C34EF4_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BEE794DBCD4CBBBF1C7DAF41EF192F0C8543F2C04DCD5D88F445D71BB75FC08A
	__StaticArrayInitTypeSizeU3D20_tE536C13103641FC6425E75BF920C347C0C2F39A0 ___BEE794DBCD4CBBBF1C7DAF41EF192F0C8543F2C04DCD5D88F445D71BB75FC08A_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.ComputeShader
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext
struct PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7  : public RuntimeObject
{
	// UnityEngine.Camera UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_0;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<command>k__BackingField
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___U3CcommandU3Ek__BackingField_1;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<source>k__BackingField
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___U3CsourceU3Ek__BackingField_2;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<destination>k__BackingField
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___U3CdestinationU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<sourceFormat>k__BackingField
	int32_t ___U3CsourceFormatU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<flip>k__BackingField
	bool ___U3CflipU3Ek__BackingField_5;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<resources>k__BackingField
	PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* ___U3CresourcesU3Ek__BackingField_6;
	// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<propertySheets>k__BackingField
	PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* ___U3CpropertySheetsU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<userData>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CuserDataU3Ek__BackingField_8;
	// UnityEngine.Rendering.PostProcessing.PostProcessDebugLayer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<debugLayer>k__BackingField
	PostProcessDebugLayer_tD1025B624D67FB5F369C673972D2219EFF179D02* ___U3CdebugLayerU3Ek__BackingField_9;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_10;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<stereoActive>k__BackingField
	bool ___U3CstereoActiveU3Ek__BackingField_12;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<xrActiveEye>k__BackingField
	int32_t ___U3CxrActiveEyeU3Ek__BackingField_13;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<numberOfEyes>k__BackingField
	int32_t ___U3CnumberOfEyesU3Ek__BackingField_14;
	// UnityEngine.Rendering.PostProcessing.PostProcessRenderContext/StereoRenderingMode UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<stereoRenderingMode>k__BackingField
	int32_t ___U3CstereoRenderingModeU3Ek__BackingField_15;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<screenWidth>k__BackingField
	int32_t ___U3CscreenWidthU3Ek__BackingField_16;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<screenHeight>k__BackingField
	int32_t ___U3CscreenHeightU3Ek__BackingField_17;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<isSceneView>k__BackingField
	bool ___U3CisSceneViewU3Ek__BackingField_18;
	// UnityEngine.Rendering.PostProcessing.PostProcessLayer/Antialiasing UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<antialiasing>k__BackingField
	int32_t ___U3CantialiasingU3Ek__BackingField_19;
	// UnityEngine.Rendering.PostProcessing.TemporalAntialiasing UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::<temporalAntialiasing>k__BackingField
	TemporalAntialiasing_t66F588EBDAB51F3C7094E5495132B8256CB0C644* ___U3CtemporalAntialiasingU3Ek__BackingField_20;
	// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::uberSheet
	PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* ___uberSheet_21;
	// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::autoExposureTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___autoExposureTexture_22;
	// UnityEngine.Rendering.PostProcessing.LogHistogram UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::logHistogram
	LogHistogram_tFD0177A61EF64A4720A90B188FB18B1AEAC02A24* ___logHistogram_23;
	// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::logLut
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___logLut_24;
	// UnityEngine.Rendering.PostProcessing.AutoExposure UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::autoExposure
	AutoExposure_t3DC0981C2B844D7B8E12CE9C8C731F4387846F5C* ___autoExposure_25;
	// System.Int32 UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::bloomBufferNameID
	int32_t ___bloomBufferNameID_26;
	// System.Boolean UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::physicalCamera
	bool ___physicalCamera_27;
	// UnityEngine.RenderTextureDescriptor UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::m_sourceDescriptor
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___m_sourceDescriptor_28;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rendering.PostProcessing.PostProcessResources
struct PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D[] UnityEngine.Rendering.PostProcessing.PostProcessResources::blueNoise64
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___blueNoise64_4;
	// UnityEngine.Texture2D[] UnityEngine.Rendering.PostProcessing.PostProcessResources::blueNoise256
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___blueNoise256_5;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/SMAALuts UnityEngine.Rendering.PostProcessing.PostProcessResources::smaaLuts
	SMAALuts_t62105E31B4A58EC4A668D9C79B9720F7CD5C3CB2* ___smaaLuts_6;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/Shaders UnityEngine.Rendering.PostProcessing.PostProcessResources::shaders
	Shaders_t2934A1A9726776BE88E31A97A67A9BD9ACEED86B* ___shaders_7;
	// UnityEngine.Rendering.PostProcessing.PostProcessResources/ComputeShaders UnityEngine.Rendering.PostProcessing.PostProcessResources::computeShaders
	ComputeShaders_t8F1C8B34C544DEC3B4D302509211C37989AAC39F* ___computeShaders_8;
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture3D
struct Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.ObsoleteAttribute[]
struct ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6  : public RuntimeArray
{
	ALIGN_FIELD (8) ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* m_Items[1];

	inline ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9C7A828C0B5419633EB1A5AA73FC2E06284E639E_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_gshared (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___key0, bool* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Keyframe::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::set_keys(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_Evaluate_m908B44D36171764274B429D923E47F36BF972516 (Spline_tD8C641273FEAA3A7958A261C41D694636049CB21* __this, float ___t0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_renderedFrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_renderedFrameCount_m65102648E50AC7B110E619C91D1B67DEA53D7DBE (const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m0547F5C89835B0586BE4B46593AD5A388FF434B0 (TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m3E7EF2A9C513F78863718A8237F3A0277A33DC1A (TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___index0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::.ctor()
inline void Dictionary_2__ctor_mAEC79FC89BB27663084F0D041157806C2B4858B4 (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232*, const RuntimeMethod*))Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, const RuntimeMethod*))Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsObsolete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsObsolete_m6196F51252D89FDE496B58689F62279DD86D23BC (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48 (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool, const RuntimeMethod*))Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.SystemInfo::SupportsTextureFormat(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsTextureFormat_m833B0ABED13B5B8D0D4BCF082F3EFA51A3B5C860 (int32_t ___format0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.RenderTextureFormat>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m7D68C17F2EFEADA12A803841CFD7C5A8D3ED159B (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232*, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m9C7A828C0B5419633EB1A5AA73FC2E06284E639E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* __this, int32_t ___key0, bool* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*, int32_t, bool*, const RuntimeMethod*))Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper__ctor_m326A48946F64C5733E75607AE62A9D247FC7E67D (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::.ctor()
inline void List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49 (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Rendering.CommandBuffer UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_command()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* PostProcessRenderContext_get_command_m028BE33B6194640A1DE901A6F935658034A3E2CD_inline (PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.PostProcessing.PropertySheetFactory UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_propertySheets()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* PostProcessRenderContext_get_propertySheets_m60E7825143611FEC183803150D8F7C2785514D79_inline (PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* __this, const RuntimeMethod* method) ;
// UnityEngine.Rendering.PostProcessing.PostProcessResources UnityEngine.Rendering.PostProcessing.PostProcessRenderContext::get_resources()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* PostProcessRenderContext_get_resources_m89879DF69E4B910F9EE3008AB8DC60B732ABF02A_inline (PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Count()
inline int32_t List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_inline (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RenderTexture>::GetEnumerator()
inline Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::Dispose()
inline void Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4 (Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::get_Current()
inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_inline (Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693* __this, const RuntimeMethod* method)
{
	return ((  RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*) (Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtilities_Destroy_m88860DDA45529FA1193643863F052D709087B493 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RenderTexture>::MoveNext()
inline bool Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5 (Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Clear()
inline void List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_inline (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::Add(T)
inline void List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_inline (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.RenderTexture>::get_Item(System.Int32)
inline RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* List_1_get_Item_mFD8C82612D4654B884F2F68C8C1D93B56A1E0081 (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.RenderTexture::get_volumeDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_volumeDepth_m049340EE670E9632FC824B640A5570B5D3FCFEBF (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::get_enableRandomWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_get_enableRandomWrite_m64B49A97B19ACC25765E27F8F8A39F625D4D20CD (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_volumeDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_enableRandomWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_enableRandomWrite_m1F1B5E033802C193449803411560DB4D5D4AEEAB (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RenderTexture>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m164E41C28FA43F25F51C417135CF61976ECF3B69 (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Texture3D::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture3D_get_depth_m08A40112C90FB3346068195C2B83FEB544313169 (Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TextureLerper::Get(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureLerper_Get_mD700555241B9F131B78A0302883C35AD0936F120 (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, int32_t ___format0, int32_t ___w1, int32_t ___h2, int32_t ___d3, bool ___enableRandomWrite4, bool ___force3D5, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ComputeShader_FindKernel_m3BA5C50794FA6AF4C432E55FBBD7CB266532F659 (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeVectorParam(UnityEngine.ComputeShader,System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeVectorParam_mCB04E8C59D63D6CDCA0E8EDA362BE1CB7BF49709 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___computeShader0, String_t* ___name1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___val2, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___tex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetComputeTextureParam(UnityEngine.ComputeShader,System.Int32,System.String,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetComputeTextureParam_m4EE2EFCF46096652EA2D3D14C0DE3D1252CD2174 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___computeShader0, int32_t ___kernelIndex1, String_t* ___name2, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rt3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ComputeShader::GetKernelThreadGroupSizes(System.Int32,System.UInt32&,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComputeShader_GetKernelThreadGroupSizes_m693428494DB1FD3CFC69FCE4E0093A2C4AAE1CBE (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* __this, int32_t ___kernelIndex0, uint32_t* ___x1, uint32_t* ___y2, uint32_t* ___z3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DispatchCompute(UnityEngine.ComputeShader,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DispatchCompute_mF9F5605B77F0480FD4B8C3BCAEC2FC59A24E31A2 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___computeShader0, int32_t ___kernelIndex1, int32_t ___threadGroupsX2, int32_t ___threadGroupsY3, int32_t ___threadGroupsZ4, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::GetUncompressedRenderTextureFormat(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_mCA81A8A50F7AF487D8D4E2AC8363A5FA6D1ECA1A (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.PostProcessing.PropertySheet UnityEngine.Rendering.PostProcessing.PropertySheetFactory::Get(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* PropertySheetFactory_Get_mCFDB007DD001F66FCC0EAD7549B63C74857569FC (PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// UnityEngine.MaterialPropertyBlock UnityEngine.Rendering.PostProcessing.PropertySheet::get_properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* PropertySheet_get_properties_m3F54B6A690186CF8AE8CCD585068A4DB80AA50F5_inline (PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m39F531D3F35D6C5B661A7B4F07DD7B8ACC22627F (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.PostProcessing.RuntimeUtilities::BlitFullscreenTriangle(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.PostProcessing.PropertySheet,System.Int32,System.Boolean,System.Nullable`1<UnityEngine.Rect>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeUtilities_BlitFullscreenTriangle_m5E84F777CA552E3540C83CDAEB6C2075F8406E16 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cmd0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___destination2, PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* ___propertySheet3, int32_t ___pass4, bool ___clear5, Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440 ___viewport6, bool ___preserveDepth7, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVector_m22B010D99231EF5684063F4A07F5948854D590B3 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.PostProcessing.Spline::.ctor(UnityEngine.AnimationCurve,System.Single,System.Boolean,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline__ctor_mF4CB5FE207BD36B6A8B1425A3CEC164DD61B74B3 (Spline_tD8C641273FEAA3A7958A261C41D694636049CB21* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve0, float ___zeroValue1, bool ___loop2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bounds3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int frameCount = -1;
		__this->___frameCount_7 = (-1);
		// public Spline(AnimationCurve curve, float zeroValue, bool loop, Vector2 bounds)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.curve = curve;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___curve0;
		__this->___curve_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curve_2), (void*)L_0);
		// m_ZeroValue = zeroValue;
		float L_1 = ___zeroValue1;
		__this->___m_ZeroValue_4 = L_1;
		// m_Loop = loop;
		bool L_2 = ___loop2;
		__this->___m_Loop_3 = L_2;
		// m_Range = bounds.magnitude;
		float L_3;
		L_3 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&___bounds3), NULL);
		__this->___m_Range_5 = L_3;
		// cachedData = new float[k_Precision];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		__this->___cachedData_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedData_8), (void*)L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.Spline::Cache(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Cache_mF98EF50CC2A26EC6716EB5452FD4B88641A7F833 (Spline_tD8C641273FEAA3A7958A261C41D694636049CB21* __this, int32_t ___frame0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (frame == frameCount)
		int32_t L_0 = ___frame0;
		int32_t L_1 = __this->___frameCount_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// var length = curve.length;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_2 = __this->___curve_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_2, NULL);
		V_0 = L_3;
		// if (m_Loop && length > 1)
		bool L_4 = __this->___m_Loop_3;
		if (!L_4)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_00af;
		}
	}
	{
		// if (m_InternalLoopingCurve == null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_6 = __this->___m_InternalLoopingCurve_6;
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		// m_InternalLoopingCurve = new AnimationCurve();
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_7, NULL);
		__this->___m_InternalLoopingCurve_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InternalLoopingCurve_6), (void*)L_7);
	}

IL_003b:
	{
		// var prev = curve[length - 1];
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___curve_2;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_10;
		L_10 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_8, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
		V_1 = L_10;
		// prev.time -= m_Range;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_11 = (&V_1);
		float L_12;
		L_12 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661(L_11, NULL);
		float L_13 = __this->___m_Range_5;
		Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6(L_11, ((float)il2cpp_codegen_subtract(L_12, L_13)), NULL);
		// var next = curve[0];
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_14 = __this->___curve_2;
		NullCheck(L_14);
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_15;
		L_15 = AnimationCurve_get_Item_mD4E73EE674F7A82673F1A9CEB8E5EF86BA47E64B(L_14, 0, NULL);
		V_2 = L_15;
		// next.time += m_Range;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_16 = (&V_2);
		float L_17;
		L_17 = Keyframe_get_time_mB8886F64CBB373936C0C25C4C68397C05779F661(L_16, NULL);
		float L_18 = __this->___m_Range_5;
		Keyframe_set_time_m98F165193486C0DF1611B562016595B18052A2D6(L_16, ((float)il2cpp_codegen_add(L_17, L_18)), NULL);
		// m_InternalLoopingCurve.keys = curve.keys;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_19 = __this->___m_InternalLoopingCurve_6;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_20 = __this->___curve_2;
		NullCheck(L_20);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_21;
		L_21 = AnimationCurve_get_keys_m34452C69464AB459C04BFFEA4F541F06B419AC4E(L_20, NULL);
		NullCheck(L_19);
		AnimationCurve_set_keys_mBE1284B44CDBB1D8381177A3D581A6E71467F95C(L_19, L_21, NULL);
		// m_InternalLoopingCurve.AddKey(prev);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_22 = __this->___m_InternalLoopingCurve_6;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_23 = V_1;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_22, L_23, NULL);
		// m_InternalLoopingCurve.AddKey(next);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___m_InternalLoopingCurve_6;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = AnimationCurve_AddKey_mBB48B2229D76098019DDAA1F2BAAEFE59F47CCCC(L_25, L_26, NULL);
	}

IL_00af:
	{
		// for (int i = 0; i < k_Precision; i++)
		V_3 = 0;
		goto IL_00ce;
	}

IL_00b3:
	{
		// cachedData[i] = Evaluate((float)i * k_Step, length);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = __this->___cachedData_8;
		int32_t L_29 = V_3;
		int32_t L_30 = V_3;
		int32_t L_31 = V_0;
		float L_32;
		L_32 = Spline_Evaluate_m908B44D36171764274B429D923E47F36BF972516(__this, ((float)il2cpp_codegen_multiply(((float)L_30), (0.0078125f))), L_31, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (float)L_32);
		// for (int i = 0; i < k_Precision; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ce:
	{
		// for (int i = 0; i < k_Precision; i++)
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)128))))
		{
			goto IL_00b3;
		}
	}
	{
		// frameCount = Time.renderedFrameCount;
		int32_t L_35;
		L_35 = Time_get_renderedFrameCount_m65102648E50AC7B110E619C91D1B67DEA53D7DBE(NULL);
		__this->___frameCount_7 = L_35;
		// }
		return;
	}
}
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_Evaluate_m908B44D36171764274B429D923E47F36BF972516 (Spline_tD8C641273FEAA3A7958A261C41D694636049CB21* __this, float ___t0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		// if (length == 0)
		int32_t L_0 = ___length1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return m_ZeroValue;
		float L_1 = __this->___m_ZeroValue_4;
		return L_1;
	}

IL_000a:
	{
		// if (!m_Loop || length == 1)
		bool L_2 = __this->___m_Loop_3;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}

IL_0016:
	{
		// return curve.Evaluate(t);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = __this->___curve_2;
		float L_5 = ___t0;
		NullCheck(L_4);
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_4, L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		// return m_InternalLoopingCurve.Evaluate(t);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___m_InternalLoopingCurve_6;
		float L_8 = ___t0;
		NullCheck(L_7);
		float L_9;
		L_9 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_7, L_8, NULL);
		return L_9;
	}
}
// System.Single UnityEngine.Rendering.PostProcessing.Spline::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_Evaluate_m782264B22BBC1BADE12ED2E0A0C4CD1DE9A79BBC (Spline_tD8C641273FEAA3A7958A261C41D694636049CB21* __this, float ___t0, const RuntimeMethod* method) 
{
	{
		// return Evaluate(t, curve.length);
		float L_0 = ___t0;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_1 = __this->___curve_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_1, NULL);
		float L_3;
		L_3 = Spline_Evaluate_m908B44D36171764274B429D923E47F36BF972516(__this, L_0, L_2, NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.Spline::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spline_GetHashCode_mF43C4207D64C2A5725F5341460012D79371FBFD7 (Spline_tD8C641273FEAA3A7958A261C41D694636049CB21* __this, const RuntimeMethod* method) 
{
	{
		// int hash = 17;
		// hash = hash * 23 + curve.GetHashCode(); // Not implemented in Unity, so it'll always return the same value :(
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = __this->___curve_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)17), ((int32_t)23))), L_1));
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
// System.Void UnityEngine.Rendering.PostProcessing.TargetPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetPool__ctor_m00A7A8FD2FB5F0FD7BF02F424D32A9FB6B365199 (TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal TargetPool()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Pool = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_Pool_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Pool_0), (void*)L_0);
		// Get(); // Pre-warm with a default target to avoid black frame on first frame
		int32_t L_1;
		L_1 = TargetPool_Get_m0547F5C89835B0586BE4B46593AD5A388FF434B0(__this, NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m0547F5C89835B0586BE4B46593AD5A388FF434B0 (TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C* __this, const RuntimeMethod* method) 
{
	{
		// int ret = Get(m_Current);
		int32_t L_0 = __this->___m_Current_1;
		int32_t L_1;
		L_1 = TargetPool_Get_m3E7EF2A9C513F78863718A8237F3A0277A33DC1A(__this, L_0, NULL);
		// m_Current++;
		int32_t L_2 = __this->___m_Current_1;
		__this->___m_Current_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// return ret;
		return L_1;
	}
}
// System.Int32 UnityEngine.Rendering.PostProcessing.TargetPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TargetPool_Get_m3E7EF2A9C513F78863718A8237F3A0277A33DC1A (TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD218EEEC60165FC319ED66CAD59FFB5160614D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_Pool.Count > i)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___m_Pool_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_2 = ___i0;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_003e;
		}
	}
	{
		// ret = m_Pool[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___m_Pool_0;
		int32_t L_4 = ___i0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_3, L_4, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0059;
	}

IL_001d:
	{
		// m_Pool.Add(Shader.PropertyToID("_TargetPool" + i));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = __this->___m_Pool_0;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___i0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralADD218EEEC60165FC319ED66CAD59FFB5160614D, L_7, NULL);
		int32_t L_9;
		L_9 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_8, NULL);
		NullCheck(L_6);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, L_9, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_003e:
	{
		// while (m_Pool.Count <= i)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = __this->___m_Pool_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_10, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_12 = ___i0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_001d;
		}
	}
	{
		// ret = m_Pool[i];
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___m_Pool_0;
		int32_t L_14 = ___i0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, L_14, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_15;
	}

IL_0059:
	{
		// return ret;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TargetPool::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetPool_Reset_m2D79A232CECE4951254E2EDA0529F0C877B97BB3 (TargetPool_t88FB94A9290BBADD9DDE613ED91F1FE23203C06C* __this, const RuntimeMethod* method) 
{
	{
		// m_Current = 0;
		__this->___m_Current_1 = 0;
		// }
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
// System.Void UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFormatUtilities__cctor_m38CEE5DD353AAD05D0AC95A00B923120A2706EC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAEC79FC89BB27663084F0D041157806C2B4858B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		// s_FormatAliasMap = new Dictionary<int, RenderTextureFormat>
		// {
		//     { (int)TextureFormat.Alpha8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ARGB4444, RenderTextureFormat.ARGB4444 },
		//     { (int)TextureFormat.RGB24, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RGBA32, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ARGB32, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RGB565, RenderTextureFormat.RGB565 },
		//     { (int)TextureFormat.R16, RenderTextureFormat.RHalf },
		//     { (int)TextureFormat.DXT1, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.DXT5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RGBA4444, RenderTextureFormat.ARGB4444 },
		//     { (int)TextureFormat.BGRA32, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.RHalf, RenderTextureFormat.RHalf },
		//     { (int)TextureFormat.RGHalf, RenderTextureFormat.RGHalf },
		//     { (int)TextureFormat.RGBAHalf, RenderTextureFormat.ARGBHalf },
		//     { (int)TextureFormat.RFloat, RenderTextureFormat.RFloat },
		//     { (int)TextureFormat.RGFloat, RenderTextureFormat.RGFloat },
		//     { (int)TextureFormat.RGBAFloat, RenderTextureFormat.ARGBFloat },
		//     { (int)TextureFormat.RGB9e5Float, RenderTextureFormat.ARGBHalf },
		//     { (int)TextureFormat.BC4, RenderTextureFormat.R8 },
		//     { (int)TextureFormat.BC5, RenderTextureFormat.RGHalf },
		//     { (int)TextureFormat.BC6H, RenderTextureFormat.ARGBHalf },
		//     { (int)TextureFormat.BC7, RenderTextureFormat.ARGB32 },
		// #if !UNITY_IOS && !UNITY_TVOS
		//     { (int)TextureFormat.DXT1Crunched, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.DXT5Crunched, RenderTextureFormat.ARGB32 },
		// #endif
		//     { (int)TextureFormat.PVRTC_RGB2, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.PVRTC_RGBA2, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.PVRTC_RGB4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.PVRTC_RGBA4, RenderTextureFormat.ARGB32 },
		// #if !UNITY_2018_1_OR_NEWER
		//     { (int)TextureFormat.ATC_RGB4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ATC_RGBA8, RenderTextureFormat.ARGB32 },
		// #endif
		//     { (int)TextureFormat.ETC_RGB4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC2_RGB, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC2_RGBA1, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC2_RGBA8, RenderTextureFormat.ARGB32 },
		// #if UNITY_2019_1_OR_NEWER
		//     { (int)TextureFormat.ASTC_4x4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_5x5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_6x6, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_8x8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_10x10, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_12x12, RenderTextureFormat.ARGB32 },
		// #else
		//     { (int)TextureFormat.ASTC_RGB_4x4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_5x5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_6x6, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_8x8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_10x10, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGB_12x12, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_4x4, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_5x5, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_6x6, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_8x8, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_10x10, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ASTC_RGBA_12x12, RenderTextureFormat.ARGB32 },
		// #endif
		// #if !UNITY_2018_3_OR_NEWER
		//     { (int)TextureFormat.ETC_RGB4_3DS, RenderTextureFormat.ARGB32 },
		//     { (int)TextureFormat.ETC_RGBA8_3DS, RenderTextureFormat.ARGB32 }
		// #endif
		// };
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_0 = (Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232*)il2cpp_codegen_object_new(Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mAEC79FC89BB27663084F0D041157806C2B4858B4(L_0, Dictionary_2__ctor_mAEC79FC89BB27663084F0D041157806C2B4858B4_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_1, 1, 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_2, 2, 5, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_3, 3, 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_4, 4, 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_5, 5, 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_6, 7, 4, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_7, ((int32_t)9), ((int32_t)15), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_8, ((int32_t)10), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_9, ((int32_t)12), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_10, ((int32_t)13), 5, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_11, ((int32_t)14), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_12 = L_11;
		NullCheck(L_12);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_12, ((int32_t)15), ((int32_t)15), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_13 = L_12;
		NullCheck(L_13);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_13, ((int32_t)16), ((int32_t)13), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_14 = L_13;
		NullCheck(L_14);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_14, ((int32_t)17), 2, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_15 = L_14;
		NullCheck(L_15);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_15, ((int32_t)18), ((int32_t)14), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_16 = L_15;
		NullCheck(L_16);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_16, ((int32_t)19), ((int32_t)12), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_17 = L_16;
		NullCheck(L_17);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_17, ((int32_t)20), ((int32_t)11), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_18 = L_17;
		NullCheck(L_18);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_18, ((int32_t)22), 2, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_19 = L_18;
		NullCheck(L_19);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_19, ((int32_t)26), ((int32_t)16), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_20 = L_19;
		NullCheck(L_20);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_20, ((int32_t)27), ((int32_t)13), Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_21 = L_20;
		NullCheck(L_21);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_21, ((int32_t)24), 2, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_22 = L_21;
		NullCheck(L_22);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_22, ((int32_t)25), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_23 = L_22;
		NullCheck(L_23);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_23, ((int32_t)28), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_24 = L_23;
		NullCheck(L_24);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_24, ((int32_t)29), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_25 = L_24;
		NullCheck(L_25);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_25, ((int32_t)30), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_26 = L_25;
		NullCheck(L_26);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_26, ((int32_t)31), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_27 = L_26;
		NullCheck(L_27);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_27, ((int32_t)32), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_28 = L_27;
		NullCheck(L_28);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_28, ((int32_t)33), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_29 = L_28;
		NullCheck(L_29);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_29, ((int32_t)34), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_30 = L_29;
		NullCheck(L_30);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_30, ((int32_t)45), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_31 = L_30;
		NullCheck(L_31);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_31, ((int32_t)46), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_32 = L_31;
		NullCheck(L_32);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_32, ((int32_t)47), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_33 = L_32;
		NullCheck(L_33);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_33, ((int32_t)48), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_34 = L_33;
		NullCheck(L_34);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_34, ((int32_t)49), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_35 = L_34;
		NullCheck(L_35);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_35, ((int32_t)50), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_36 = L_35;
		NullCheck(L_36);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_36, ((int32_t)51), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_37 = L_36;
		NullCheck(L_37);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_37, ((int32_t)52), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_38 = L_37;
		NullCheck(L_38);
		Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B(L_38, ((int32_t)53), 0, Dictionary_2_Add_mB42BBFF37C46EBCEAD373E5A37B9B75AB942084B_RuntimeMethod_var);
		((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_FormatAliasMap_0 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_FormatAliasMap_0), (void*)L_38);
		// s_SupportedRenderTextureFormats = new Dictionary<int, bool>();
		Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_39 = (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*)il2cpp_codegen_object_new(Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024(L_39, Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_RuntimeMethod_var);
		((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedRenderTextureFormats_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedRenderTextureFormats_1), (void*)L_39);
		// var values = Enum.GetValues(typeof(RenderTextureFormat));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_42;
		L_42 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_41, NULL);
		// foreach (var format in values)
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_42, NULL);
		V_0 = L_43;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c2:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_44 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_44, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_01d2;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck(L_46);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_46);
				}

IL_01d2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01b8_1;
			}

IL_0183_1:
			{
				// foreach (var format in values)
				RuntimeObject* L_47 = V_0;
				NullCheck(L_47);
				RuntimeObject* L_48;
				L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_47);
				V_1 = L_48;
				// if ((int)format < 0) // Safe guard, negative values are deprecated stuff
				RuntimeObject* L_49 = V_1;
				if ((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_49, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) < ((int32_t)0)))
				{
					goto IL_01b8_1;
				}
			}
			{
				// if (IsObsolete(format))
				RuntimeObject* L_50 = V_1;
				bool L_51;
				L_51 = TextureFormatUtilities_IsObsolete_m6196F51252D89FDE496B58689F62279DD86D23BC(L_50, NULL);
				if (L_51)
				{
					goto IL_01b8_1;
				}
			}
			{
				// bool supported = SystemInfo.SupportsRenderTextureFormat((RenderTextureFormat)format);
				RuntimeObject* L_52 = V_1;
				bool L_53;
				L_53 = SystemInfo_SupportsRenderTextureFormat_mCCC3C69578A2C5B7367F73999E6938C315A98201(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_52, RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F_il2cpp_TypeInfo_var)))), NULL);
				V_2 = L_53;
				// s_SupportedRenderTextureFormats[(int)format] = supported;
				Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_54 = ((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedRenderTextureFormats_1;
				RuntimeObject* L_55 = V_1;
				bool L_56 = V_2;
				NullCheck(L_54);
				Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48(L_54, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_55, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), L_56, Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_RuntimeMethod_var);
			}

IL_01b8_1:
			{
				// foreach (var format in values)
				RuntimeObject* L_57 = V_0;
				NullCheck(L_57);
				bool L_58;
				L_58 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_57);
				if (L_58)
				{
					goto IL_0183_1;
				}
			}
			{
				goto IL_01d3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01d3:
	{
		// s_SupportedTextureFormats = new Dictionary<int, bool>();
		Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_59 = (Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682*)il2cpp_codegen_object_new(Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024(L_59, Dictionary_2__ctor_m1AE7A14FE6CF65276434BAC094AE2F7269D06024_RuntimeMethod_var);
		((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedTextureFormats_2 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedTextureFormats_2), (void*)L_59);
		// var values = Enum.GetValues(typeof(TextureFormat));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_62;
		L_62 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_61, NULL);
		// foreach (var format in values)
		NullCheck(L_62);
		RuntimeObject* L_63;
		L_63 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_62, NULL);
		V_0 = L_63;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_023a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_64 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_64, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_65 = V_3;
					if (!L_65)
					{
						goto IL_024a;
					}
				}
				{
					RuntimeObject* L_66 = V_3;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_66);
				}

IL_024a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0230_1;
			}

IL_01f4_1:
			{
				// foreach (var format in values)
				RuntimeObject* L_67 = V_0;
				NullCheck(L_67);
				RuntimeObject* L_68;
				L_68 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_67);
				V_4 = L_68;
				// if ((int)format < 0) // Crashes the runtime otherwise (!)
				RuntimeObject* L_69 = V_4;
				if ((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_69, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) < ((int32_t)0)))
				{
					goto IL_0230_1;
				}
			}
			{
				// if (IsObsolete(format))
				RuntimeObject* L_70 = V_4;
				bool L_71;
				L_71 = TextureFormatUtilities_IsObsolete_m6196F51252D89FDE496B58689F62279DD86D23BC(L_70, NULL);
				if (L_71)
				{
					goto IL_0230_1;
				}
			}
			{
				// bool supported = SystemInfo.SupportsTextureFormat((TextureFormat)format);
				RuntimeObject* L_72 = V_4;
				bool L_73;
				L_73 = SystemInfo_SupportsTextureFormat_m833B0ABED13B5B8D0D4BCF082F3EFA51A3B5C860(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_72, TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var)))), NULL);
				V_5 = L_73;
				// s_SupportedTextureFormats[(int)format] = supported;
				Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_74 = ((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedTextureFormats_2;
				RuntimeObject* L_75 = V_4;
				bool L_76 = V_5;
				NullCheck(L_74);
				Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48(L_74, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_75, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), L_76, Dictionary_2_set_Item_m266E81996A1E6BFCB7C91E78EC0DB1253655AD48_RuntimeMethod_var);
			}

IL_0230_1:
			{
				// foreach (var format in values)
				RuntimeObject* L_77 = V_0;
				NullCheck(L_77);
				bool L_78;
				L_78 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_77);
				if (L_78)
				{
					goto IL_01f4_1;
				}
			}
			{
				goto IL_024b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_024b:
	{
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsObsolete(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsObsolete_m6196F51252D89FDE496B58689F62279DD86D23BC (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6* V_0 = NULL;
	{
		// var fieldInfo = value.GetType().GetField(value.ToString());
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		RuntimeObject* L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		FieldInfo_t* L_4;
		L_4 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_1, L_3, NULL);
		// var attributes = (ObsoleteAttribute[])fieldInfo.GetCustomAttributes(typeof(ObsoleteAttribute), false);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ObsoleteAttribute_tF4885B281E932B8B87A5B9AA1C24D46DEEA8FD8A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_4, L_6, (bool)0);
		V_0 = ((ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6*)Castclass((RuntimeObject*)L_7, ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6_il2cpp_TypeInfo_var));
		// return attributes != null && attributes.Length > 0;
		ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		ObsoleteAttributeU5BU5D_tCEEAC50D326AEA0B2122C2F48969D6B97C6ABEA6* L_9 = V_0;
		NullCheck(L_9);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_9)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// UnityEngine.RenderTextureFormat UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::GetUncompressedRenderTextureFormat(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureFormatUtilities_GetUncompressedRenderTextureFormat_mCA81A8A50F7AF487D8D4E2AC8363A5FA6D1ECA1A (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m7D68C17F2EFEADA12A803841CFD7C5A8D3ED159B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (texture is RenderTexture)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___texture0;
		if (!((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		// return (texture as RenderTexture).format;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___texture0;
		NullCheck(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)));
		int32_t L_2;
		L_2 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_1, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}

IL_0014:
	{
		// if (texture is Texture2D)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___texture0;
		if (!((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)IsInstSealed((RuntimeObject*)L_3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		// var inFormat = ((Texture2D)texture).format;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___texture0;
		NullCheck(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_4, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_4, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_5;
		// if (!s_FormatAliasMap.TryGetValue((int)inFormat, out outFormat))
		il2cpp_codegen_runtime_class_init_inline(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		Dictionary_2_tB5BCF24B77495C576D9ECE31C959C276F5128232* L_6 = ((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_FormatAliasMap_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m7D68C17F2EFEADA12A803841CFD7C5A8D3ED159B(L_6, L_7, (&V_1), Dictionary_2_TryGetValue_m7D68C17F2EFEADA12A803841CFD7C5A8D3ED159B_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		// throw new NotSupportedException("Texture format not supported");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96AFB5CB3B476CE64056EF8716AEA14B385714ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureFormatUtilities_GetUncompressedRenderTextureFormat_mCA81A8A50F7AF487D8D4E2AC8363A5FA6D1ECA1A_RuntimeMethod_var)));
	}

IL_0042:
	{
		// return outFormat;
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0044:
	{
		// return RenderTextureFormat.Default;
		return (int32_t)(7);
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsSupported(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsSupported_mB19AE8F3F583E6286877F54F90E0A90676EBA173 (int32_t ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// s_SupportedRenderTextureFormats.TryGetValue((int)format, out supported);
		il2cpp_codegen_runtime_class_init_inline(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_0 = ((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedRenderTextureFormats_1;
		int32_t L_1 = ___format0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_RuntimeMethod_var);
		// return supported;
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Rendering.PostProcessing.TextureFormatUtilities::IsSupported(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureFormatUtilities_IsSupported_m36A432AF0FF57C130ACB43EC4FDE96452003CE5B (int32_t ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// s_SupportedTextureFormats.TryGetValue((int)format, out supported);
		il2cpp_codegen_runtime_class_init_inline(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		Dictionary_2_t01224C8DBCCFE276E97D2BF52F4D7B10D3642682* L_0 = ((TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_StaticFields*)il2cpp_codegen_static_fields_for(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var))->___s_SupportedTextureFormats_2;
		int32_t L_1 = ___format0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mB76129E352C910CA78BB17FF72AA4864B1A385CF_RuntimeMethod_var);
		// return supported;
		bool L_3 = V_0;
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
// UnityEngine.Rendering.PostProcessing.TextureLerper UnityEngine.Rendering.PostProcessing.TextureLerper::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* TextureLerper_get_instance_m9FBD47F5E67E2E692847BCD402084526D6AF8F37 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Instance == null)
		TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* L_0 = ((TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var))->___m_Instance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// m_Instance = new TextureLerper();
		TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* L_1 = (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424*)il2cpp_codegen_object_new(TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TextureLerper__ctor_m326A48946F64C5733E75607AE62A9D247FC7E67D(L_1, NULL);
		((TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var))->___m_Instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var))->___m_Instance_0), (void*)L_1);
	}

IL_0011:
	{
		// return m_Instance;
		TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* L_2 = ((TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_StaticFields*)il2cpp_codegen_static_fields_for(TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424_il2cpp_TypeInfo_var))->___m_Instance_0;
		return L_2;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper__ctor_m326A48946F64C5733E75607AE62A9D247FC7E67D (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextureLerper()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Recycled = new List<RenderTexture>();
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_0 = (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*)il2cpp_codegen_object_new(List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49(L_0, List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49_RuntimeMethod_var);
		__this->___m_Recycled_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Recycled_4), (void*)L_0);
		// m_Actives = new List<RenderTexture>();
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_1 = (List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B*)il2cpp_codegen_object_new(List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49(L_1, List_1__ctor_mD0891E1C91B860AD22385685DAAFF9988CA4CB49_RuntimeMethod_var);
		__this->___m_Actives_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Actives_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::BeginFrame(UnityEngine.Rendering.PostProcessing.PostProcessRenderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper_BeginFrame_mF2957CC10D96B1A568D284E0A7DA7F4E0CFE0558 (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* ___context0, const RuntimeMethod* method) 
{
	{
		// m_Command = context.command;
		PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* L_0 = ___context0;
		NullCheck(L_0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1;
		L_1 = PostProcessRenderContext_get_command_m028BE33B6194640A1DE901A6F935658034A3E2CD_inline(L_0, NULL);
		__this->___m_Command_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Command_1), (void*)L_1);
		// m_PropertySheets = context.propertySheets;
		PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* L_2 = ___context0;
		NullCheck(L_2);
		PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* L_3;
		L_3 = PostProcessRenderContext_get_propertySheets_m60E7825143611FEC183803150D8F7C2785514D79_inline(L_2, NULL);
		__this->___m_PropertySheets_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PropertySheets_2), (void*)L_3);
		// m_Resources = context.resources;
		PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* L_4 = ___context0;
		NullCheck(L_4);
		PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* L_5;
		L_5 = PostProcessRenderContext_get_resources_m89879DF69E4B910F9EE3008AB8DC60B732ABF02A_inline(L_4, NULL);
		__this->___m_Resources_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Resources_3), (void*)L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::EndFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper_EndFrame_m827E01313363D563B9D08D245272A162D1872745 (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	{
		// if (m_Recycled.Count > 0)
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_0 = __this->___m_Recycled_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_inline(L_0, List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// foreach (var rt in m_Recycled)
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_2 = __this->___m_Recycled_4;
		NullCheck(L_2);
		Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 L_3;
		L_3 = List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A(L_2, List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4((&V_0), Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_001c_1:
			{
				// foreach (var rt in m_Recycled)
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
				L_4 = Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_inline((&V_0), Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var);
				// RuntimeUtilities.Destroy(rt);
				il2cpp_codegen_runtime_class_init_inline(RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
				RuntimeUtilities_Destroy_m88860DDA45529FA1193643863F052D709087B493(L_4, NULL);
			}

IL_0028_1:
			{
				// foreach (var rt in m_Recycled)
				bool L_5;
				L_5 = Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5((&V_0), Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// m_Recycled.Clear();
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_6 = __this->___m_Recycled_4;
		NullCheck(L_6);
		List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_inline(L_6, List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var);
	}

IL_004c:
	{
		// if (m_Actives.Count > 0)
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_7 = __this->___m_Actives_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_inline(L_7, List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		// foreach (var rt in m_Actives)
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_9 = __this->___m_Actives_5;
		NullCheck(L_9);
		Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 L_10;
		L_10 = List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A(L_9, List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var);
		V_0 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4((&V_0), Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007c_1;
			}

IL_0068_1:
			{
				// foreach (var rt in m_Actives)
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
				L_11 = Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_inline((&V_0), Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var);
				V_1 = L_11;
				// m_Recycled.Add(rt);
				List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_12 = __this->___m_Recycled_4;
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = V_1;
				NullCheck(L_12);
				List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_inline(L_12, L_13, List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_RuntimeMethod_var);
			}

IL_007c_1:
			{
				// foreach (var rt in m_Actives)
				bool L_14;
				L_14 = Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5((&V_0), Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0068_1;
				}
			}
			{
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		// m_Actives.Clear();
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_15 = __this->___m_Actives_5;
		NullCheck(L_15);
		List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_inline(L_15, List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var);
	}

IL_00a0:
	{
		// }
		return;
	}
}
// UnityEngine.RenderTexture UnityEngine.Rendering.PostProcessing.TextureLerper::Get(UnityEngine.RenderTextureFormat,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* TextureLerper_Get_mD700555241B9F131B78A0302883C35AD0936F120 (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, int32_t ___format0, int32_t ___w1, int32_t ___h2, int32_t ___d3, bool ___enableRandomWrite4, bool ___force3D5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m164E41C28FA43F25F51C417135CF61976ECF3B69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFD8C82612D4654B884F2F68C8C1D93B56A1E0081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t G_B15_0 = 0;
	{
		// RenderTexture rt = null;
		V_0 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		// int i, len = m_Recycled.Count;
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_0 = __this->___m_Recycled_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_inline(L_0, List_1_get_Count_mDF53F5D42E96D7FDE797826D3902F54BB8B80221_RuntimeMethod_var);
		V_2 = L_1;
		// for (i = 0; i < len; i++)
		V_1 = 0;
		goto IL_0063;
	}

IL_0012:
	{
		// var r = m_Recycled[i];
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_2 = __this->___m_Recycled_4;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4;
		L_4 = List_1_get_Item_mFD8C82612D4654B884F2F68C8C1D93B56A1E0081(L_2, L_3, List_1_get_Item_mFD8C82612D4654B884F2F68C8C1D93B56A1E0081_RuntimeMethod_var);
		V_3 = L_4;
		// if (r.width == w && r.height == h && r.volumeDepth == d && r.format == format && r.enableRandomWrite == enableRandomWrite && (!force3D || (r.dimension == TextureDimension.Tex3D)))
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		int32_t L_7 = ___w1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_005f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		int32_t L_10 = ___h2;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_005f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = RenderTexture_get_volumeDepth_m049340EE670E9632FC824B640A5570B5D3FCFEBF(L_11, NULL);
		int32_t L_13 = ___d3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_14, NULL);
		int32_t L_16 = ___format0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_005f;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_17 = V_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = RenderTexture_get_enableRandomWrite_m64B49A97B19ACC25765E27F8F8A39F625D4D20CD(L_17, NULL);
		bool L_19 = ___enableRandomWrite4;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_005f;
		}
	}
	{
		bool L_20 = ___force3D5;
		if (!L_20)
		{
			goto IL_005b;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* UnityEngine.Rendering.TextureDimension UnityEngine.Texture::get_dimension() */, L_21);
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_005f;
		}
	}

IL_005b:
	{
		// rt = r;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23 = V_3;
		V_0 = L_23;
		// break;
		goto IL_0067;
	}

IL_005f:
	{
		// for (i = 0; i < len; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0063:
	{
		// for (i = 0; i < len; i++)
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0012;
		}
	}

IL_0067:
	{
		// if (rt == null)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_27 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_00c0;
		}
	}
	{
		// var dimension = (d > 1) || force3D
		//     ? TextureDimension.Tex3D
		//     : TextureDimension.Tex2D;
		int32_t L_29 = ___d3;
		bool L_30 = ___force3D5;
		if (((int32_t)(((((int32_t)L_29) > ((int32_t)1))? 1 : 0)|(int32_t)L_30)))
		{
			goto IL_007d;
		}
	}
	{
		G_B15_0 = 2;
		goto IL_007e;
	}

IL_007d:
	{
		G_B15_0 = 3;
	}

IL_007e:
	{
		V_4 = G_B15_0;
		// rt = new RenderTexture(w, h, 0, format)
		// {
		//     dimension = dimension,
		//     filterMode = FilterMode.Bilinear,
		//     wrapMode = TextureWrapMode.Clamp,
		//     anisoLevel = 0,
		//     volumeDepth = d,
		//     enableRandomWrite = enableRandomWrite
		// };
		int32_t L_31 = ___w1;
		int32_t L_32 = ___h2;
		int32_t L_33 = ___format0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_34, L_31, L_32, 0, L_33, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = L_34;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		VirtualActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Texture::set_dimension(UnityEngine.Rendering.TextureDimension) */, L_35, L_36);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = L_35;
		NullCheck(L_37);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9(L_37, 1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_38 = L_37;
		NullCheck(L_38);
		Texture_set_wrapMode_m1F74A690E3883EC9C5C371D502D09642F15D0F7E(L_38, 1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = L_38;
		NullCheck(L_39);
		Texture_set_anisoLevel_m768759DE9D6BE15FCE995F5FC468980B904B9D1F(L_39, 0, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40 = L_39;
		int32_t L_41 = ___d3;
		NullCheck(L_40);
		RenderTexture_set_volumeDepth_mD9B1E6BA4BE6B1741427B34A23B9D48BA9493633(L_40, L_41, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = L_40;
		bool L_43 = ___enableRandomWrite4;
		NullCheck(L_42);
		RenderTexture_set_enableRandomWrite_m1F1B5E033802C193449803411560DB4D5D4AEEAB(L_42, L_43, NULL);
		V_0 = L_42;
		// rt.Create();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_0;
		NullCheck(L_44);
		bool L_45;
		L_45 = RenderTexture_Create_mA6E4D3CCC84AC3F68E85AA0D6609E1692C672AD2(L_44, NULL);
		goto IL_00cc;
	}

IL_00c0:
	{
		// else m_Recycled.RemoveAt(i);
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_46 = __this->___m_Recycled_4;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		List_1_RemoveAt_m164E41C28FA43F25F51C417135CF61976ECF3B69(L_46, L_47, List_1_RemoveAt_m164E41C28FA43F25F51C417135CF61976ECF3B69_RuntimeMethod_var);
	}

IL_00cc:
	{
		// m_Actives.Add(rt);
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_48 = __this->___m_Actives_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_49 = V_0;
		NullCheck(L_48);
		List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_inline(L_48, L_49, List_1_Add_m9F1BA8EEA06819CC244EC23459573BB8E8D32C78_RuntimeMethod_var);
		// return rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_0;
		return L_50;
	}
}
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Texture,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLerper_Lerp_m675AC3EF5BB02D904E0988F874D1F6F9AF9FB257 (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___from0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___to1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F889A7069FB348E59778EC4C275B6A09FE34752);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED45B85ADA1AFA9C8962A3063BC0DB7FA04521E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* V_2 = NULL;
	int32_t V_3 = 0;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* V_4 = NULL;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (from == to)
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___from0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000b;
		}
	}
	{
		// return from;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___from0;
		return L_3;
	}

IL_000b:
	{
		// if (t <= 0f) return from;
		float L_4 = ___t2;
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0015;
		}
	}
	{
		// if (t <= 0f) return from;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = ___from0;
		return L_5;
	}

IL_0015:
	{
		// if (t >= 1f) return to;
		float L_6 = ___t2;
		if ((!(((float)L_6) >= ((float)(1.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (t >= 1f) return to;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___to1;
		return L_7;
	}

IL_001f:
	{
		// bool is3D = from is Texture3D
		//     || (from is RenderTexture && ((RenderTexture)from).volumeDepth > 1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___from0;
		if (((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)IsInstSealed((RuntimeObject*)L_8, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)))
		{
			goto IL_0042;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = ___from0;
		if (!((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_9, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)))
		{
			goto IL_003f;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_10 = ___from0;
		NullCheck(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_10, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)));
		int32_t L_11;
		L_11 = RenderTexture_get_volumeDepth_m049340EE670E9632FC824B640A5570B5D3FCFEBF(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_10, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)), NULL);
		G_B11_0 = ((((int32_t)L_11) > ((int32_t)1))? 1 : 0);
		goto IL_0043;
	}

IL_003f:
	{
		G_B11_0 = 0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B11_0 = 1;
	}

IL_0043:
	{
		// if (is3D)
		if (!G_B11_0)
		{
			goto IL_016e;
		}
	}
	{
		// int dpth = @from is Texture3D ? ((Texture3D)@from).depth : ((RenderTexture)@from).volumeDepth;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = ___from0;
		if (((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)IsInstSealed((RuntimeObject*)L_12, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___from0;
		NullCheck(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_13, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)));
		int32_t L_14;
		L_14 = RenderTexture_get_volumeDepth_m049340EE670E9632FC824B640A5570B5D3FCFEBF(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_13, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)), NULL);
		G_B15_0 = L_14;
		goto IL_0068;
	}

IL_005d:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_15 = ___from0;
		NullCheck(((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)CastclassSealed((RuntimeObject*)L_15, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)));
		int32_t L_16;
		L_16 = Texture3D_get_depth_m08A40112C90FB3346068195C2B83FEB544313169(((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)CastclassSealed((RuntimeObject*)L_15, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)), NULL);
		G_B15_0 = L_16;
	}

IL_0068:
	{
		V_3 = G_B15_0;
		// int size = Mathf.Max(from.width, from.height);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_17 = ___from0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19 = ___from0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		int32_t L_21;
		L_21 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_18, L_20, NULL);
		// size = Mathf.Max(size, dpth);
		int32_t L_22 = V_3;
		int32_t L_23;
		L_23 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_21, L_22, NULL);
		// rt = Get(RenderTextureFormat.ARGBHalf, from.width, from.height, dpth, true, true);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24 = ___from0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_26 = ___from0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_26);
		int32_t L_28 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29;
		L_29 = TextureLerper_Get_mD700555241B9F131B78A0302883C35AD0936F120(__this, 2, L_25, L_27, L_28, (bool)1, (bool)1, NULL);
		V_0 = L_29;
		// var compute = m_Resources.computeShaders.texture3dLerp;
		PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* L_30 = __this->___m_Resources_3;
		NullCheck(L_30);
		ComputeShaders_t8F1C8B34C544DEC3B4D302509211C37989AAC39F* L_31 = L_30->___computeShaders_8;
		NullCheck(L_31);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_32 = L_31->___texture3dLerp_3;
		V_4 = L_32;
		// int kernel = compute.FindKernel("KTexture3DLerp");
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = ComputeShader_FindKernel_m3BA5C50794FA6AF4C432E55FBBD7CB266532F659(L_33, _stringLiteral4F889A7069FB348E59778EC4C275B6A09FE34752, NULL);
		V_5 = L_34;
		// m_Command.SetComputeVectorParam(compute, "_DimensionsAndLerp", new Vector4(from.width, from.height, dpth, t));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_35 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_36 = V_4;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_37 = ___from0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_37);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_39 = ___from0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_39);
		int32_t L_41 = V_3;
		float L_42 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_43), ((float)L_38), ((float)L_40), ((float)L_41), L_42, /*hidden argument*/NULL);
		NullCheck(L_35);
		CommandBuffer_SetComputeVectorParam_mCB04E8C59D63D6CDCA0E8EDA362BE1CB7BF49709(L_35, L_36, _stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB, L_43, NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_Output", rt);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_44 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_45 = V_4;
		int32_t L_46 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_47 = V_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_48;
		L_48 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_47, NULL);
		NullCheck(L_44);
		CommandBuffer_SetComputeTextureParam_m4EE2EFCF46096652EA2D3D14C0DE3D1252CD2174(L_44, L_45, L_46, _stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A, L_48, NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_From", from);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_49 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_50 = V_4;
		int32_t L_51 = V_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52 = ___from0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_53;
		L_53 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_52, NULL);
		NullCheck(L_49);
		CommandBuffer_SetComputeTextureParam_m4EE2EFCF46096652EA2D3D14C0DE3D1252CD2174(L_49, L_50, L_51, _stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C, L_53, NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_To", to);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_54 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_55 = V_4;
		int32_t L_56 = V_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_57 = ___to1;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_58;
		L_58 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_57, NULL);
		NullCheck(L_54);
		CommandBuffer_SetComputeTextureParam_m4EE2EFCF46096652EA2D3D14C0DE3D1252CD2174(L_54, L_55, L_56, _stringLiteral5ED45B85ADA1AFA9C8962A3063BC0DB7FA04521E, L_58, NULL);
		// compute.GetKernelThreadGroupSizes(kernel, out tgsX, out tgsY, out tgsZ);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_59 = V_4;
		int32_t L_60 = V_5;
		NullCheck(L_59);
		ComputeShader_GetKernelThreadGroupSizes_m693428494DB1FD3CFC69FCE4E0093A2C4AAE1CBE(L_59, L_60, (&V_6), (&V_7), (&V_8), NULL);
		// int groupSizeXY = Mathf.CeilToInt(size / (float)tgsX);
		int32_t L_61 = L_23;
		uint32_t L_62 = V_6;
		int32_t L_63;
		L_63 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)L_61)/((float)((double)(uint32_t)L_62)))), NULL);
		V_9 = L_63;
		// int groupSizeZ = Mathf.CeilToInt(size / (float)tgsZ);
		uint32_t L_64 = V_8;
		int32_t L_65;
		L_65 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)L_61)/((float)((double)(uint32_t)L_64)))), NULL);
		V_10 = L_65;
		// m_Command.DispatchCompute(compute, kernel, groupSizeXY, groupSizeXY, groupSizeZ);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_66 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_67 = V_4;
		int32_t L_68 = V_5;
		int32_t L_69 = V_9;
		int32_t L_70 = V_9;
		int32_t L_71 = V_10;
		NullCheck(L_66);
		CommandBuffer_DispatchCompute_mF9F5605B77F0480FD4B8C3BCAEC2FC59A24E31A2(L_66, L_67, L_68, L_69, L_70, L_71, NULL);
		// return rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_72 = V_0;
		return L_72;
	}

IL_016e:
	{
		// var format = TextureFormatUtilities.GetUncompressedRenderTextureFormat(to);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_73 = ___to1;
		il2cpp_codegen_runtime_class_init_inline(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		int32_t L_74;
		L_74 = TextureFormatUtilities_GetUncompressedRenderTextureFormat_mCA81A8A50F7AF487D8D4E2AC8363A5FA6D1ECA1A(L_73, NULL);
		V_1 = L_74;
		// rt = Get(format, to.width, to.height);
		int32_t L_75 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_76 = ___to1;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_76);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_78 = ___to1;
		NullCheck(L_78);
		int32_t L_79;
		L_79 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_78);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_80;
		L_80 = TextureLerper_Get_mD700555241B9F131B78A0302883C35AD0936F120(__this, L_75, L_77, L_79, 1, (bool)0, (bool)0, NULL);
		V_0 = L_80;
		// var sheet = m_PropertySheets.Get(m_Resources.shaders.texture2dLerp);
		PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* L_81 = __this->___m_PropertySheets_2;
		PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* L_82 = __this->___m_Resources_3;
		NullCheck(L_82);
		Shaders_t2934A1A9726776BE88E31A97A67A9BD9ACEED86B* L_83 = L_82->___shaders_7;
		NullCheck(L_83);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_84 = L_83->___texture2dLerp_12;
		NullCheck(L_81);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_85;
		L_85 = PropertySheetFactory_Get_mCFDB007DD001F66FCC0EAD7549B63C74857569FC(L_81, L_84, NULL);
		V_2 = L_85;
		// sheet.properties.SetTexture(ShaderIDs.To, to);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_86 = V_2;
		NullCheck(L_86);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_87;
		L_87 = PropertySheet_get_properties_m3F54B6A690186CF8AE8CCD585068A4DB80AA50F5_inline(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var);
		int32_t L_88 = ((ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var))->___To_117;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_89 = ___to1;
		NullCheck(L_87);
		MaterialPropertyBlock_SetTexture_m39F531D3F35D6C5B661A7B4F07DD7B8ACC22627F(L_87, L_88, L_89, NULL);
		// sheet.properties.SetFloat(ShaderIDs.Interp, t);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_90 = V_2;
		NullCheck(L_90);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_91;
		L_91 = PropertySheet_get_properties_m3F54B6A690186CF8AE8CCD585068A4DB80AA50F5_inline(L_90, NULL);
		int32_t L_92 = ((ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var))->___Interp_118;
		float L_93 = ___t2;
		NullCheck(L_91);
		MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267(L_91, L_92, L_93, NULL);
		// m_Command.BlitFullscreenTriangle(from, rt, sheet, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_94 = __this->___m_Command_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_95 = ___from0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_96;
		L_96 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_95, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_98;
		L_98 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_97, NULL);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_99 = V_2;
		il2cpp_codegen_initobj((&V_11), sizeof(Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440));
		Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440 L_100 = V_11;
		il2cpp_codegen_runtime_class_init_inline(RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m5E84F777CA552E3540C83CDAEB6C2075F8406E16(L_94, L_96, L_98, L_99, 0, (bool)0, L_100, (bool)0, NULL);
		// return rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_0;
		return L_101;
	}
}
// UnityEngine.Texture UnityEngine.Rendering.PostProcessing.TextureLerper::Lerp(UnityEngine.Texture,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureLerper_Lerp_mF45DC5D430B5C7B0C0067B55F390910DE27232DA (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___from0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___to1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E63EA4D6F8144DD6406580EE9A7B6F874A529E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C7F6CFACBA60E7454344DA7A7EB629EB0C4A8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t V_1 = 0;
	PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* V_2 = NULL;
	int32_t V_3 = 0;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B7_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// if (t < 0.00001)
		float L_0 = ___t2;
		if ((!(((double)((double)L_0)) < ((double)(1.0000000000000001E-05)))))
		{
			goto IL_000f;
		}
	}
	{
		// return from;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___from0;
		return L_1;
	}

IL_000f:
	{
		// bool is3D = from is Texture3D
		//     || (from is RenderTexture && ((RenderTexture)from).volumeDepth > 1);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___from0;
		if (((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)IsInstSealed((RuntimeObject*)L_2, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___from0;
		if (!((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)IsInstClass((RuntimeObject*)L_3, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4 = ___from0;
		NullCheck(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_4, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = RenderTexture_get_volumeDepth_m049340EE670E9632FC824B640A5570B5D3FCFEBF(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_4, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)), NULL);
		G_B7_0 = ((((int32_t)L_5) > ((int32_t)1))? 1 : 0);
		goto IL_0033;
	}

IL_002f:
	{
		G_B7_0 = 0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B7_0 = 1;
	}

IL_0033:
	{
		// if (is3D)
		if (!G_B7_0)
		{
			goto IL_0157;
		}
	}
	{
		// int dpth = @from is Texture3D ? ((Texture3D)@from).depth : ((RenderTexture)@from).volumeDepth;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_6 = ___from0;
		if (((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)IsInstSealed((RuntimeObject*)L_6, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)))
		{
			goto IL_004d;
		}
	}
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = ___from0;
		NullCheck(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_7, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)));
		int32_t L_8;
		L_8 = RenderTexture_get_volumeDepth_m049340EE670E9632FC824B640A5570B5D3FCFEBF(((RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)CastclassClass((RuntimeObject*)L_7, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var)), NULL);
		G_B11_0 = L_8;
		goto IL_0058;
	}

IL_004d:
	{
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_9 = ___from0;
		NullCheck(((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)CastclassSealed((RuntimeObject*)L_9, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)));
		int32_t L_10;
		L_10 = Texture3D_get_depth_m08A40112C90FB3346068195C2B83FEB544313169(((Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1*)CastclassSealed((RuntimeObject*)L_9, Texture3D_tDC30A0F19B6055086859D1ABC098D6E6762000E1_il2cpp_TypeInfo_var)), NULL);
		G_B11_0 = L_10;
	}

IL_0058:
	{
		V_3 = G_B11_0;
		// int size = Mathf.Max(from.width, from.height);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = ___from0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_13 = ___from0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		int32_t L_15;
		L_15 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_12, L_14, NULL);
		// size = Mathf.Max(size, dpth);
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_15, L_16, NULL);
		// rt = Get(RenderTextureFormat.ARGBHalf, from.width, from.height, dpth, true, true);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_18 = ___from0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20 = ___from0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_20);
		int32_t L_22 = V_3;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_23;
		L_23 = TextureLerper_Get_mD700555241B9F131B78A0302883C35AD0936F120(__this, 2, L_19, L_21, L_22, (bool)1, (bool)1, NULL);
		V_0 = L_23;
		// var compute = m_Resources.computeShaders.texture3dLerp;
		PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* L_24 = __this->___m_Resources_3;
		NullCheck(L_24);
		ComputeShaders_t8F1C8B34C544DEC3B4D302509211C37989AAC39F* L_25 = L_24->___computeShaders_8;
		NullCheck(L_25);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_26 = L_25->___texture3dLerp_3;
		V_4 = L_26;
		// int kernel = compute.FindKernel("KTexture3DLerpToColor");
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_27 = V_4;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = ComputeShader_FindKernel_m3BA5C50794FA6AF4C432E55FBBD7CB266532F659(L_27, _stringLiteral9C7F6CFACBA60E7454344DA7A7EB629EB0C4A8F2, NULL);
		V_5 = L_28;
		// m_Command.SetComputeVectorParam(compute, "_DimensionsAndLerp", new Vector4(from.width, from.height, dpth, t));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_29 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_30 = V_4;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_31 = ___from0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_31);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = ___from0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_33);
		int32_t L_35 = V_3;
		float L_36 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_37), ((float)L_32), ((float)L_34), ((float)L_35), L_36, /*hidden argument*/NULL);
		NullCheck(L_29);
		CommandBuffer_SetComputeVectorParam_mCB04E8C59D63D6CDCA0E8EDA362BE1CB7BF49709(L_29, L_30, _stringLiteralD754031EB09A4061A82F00A1E77A9972C831A1FB, L_37, NULL);
		// m_Command.SetComputeVectorParam(compute, "_TargetColor", new Vector4(to.r, to.g, to.b, to.a));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_38 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_39 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = ___to1;
		float L_41 = L_40.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = ___to1;
		float L_43 = L_42.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___to1;
		float L_45 = L_44.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = ___to1;
		float L_47 = L_46.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_48), L_41, L_43, L_45, L_47, /*hidden argument*/NULL);
		NullCheck(L_38);
		CommandBuffer_SetComputeVectorParam_mCB04E8C59D63D6CDCA0E8EDA362BE1CB7BF49709(L_38, L_39, _stringLiteral3E63EA4D6F8144DD6406580EE9A7B6F874A529E4, L_48, NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_Output", rt);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_49 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_50 = V_4;
		int32_t L_51 = V_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_52 = V_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_53;
		L_53 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_52, NULL);
		NullCheck(L_49);
		CommandBuffer_SetComputeTextureParam_m4EE2EFCF46096652EA2D3D14C0DE3D1252CD2174(L_49, L_50, L_51, _stringLiteral6067E93B7ED6BC9634C2207045961FBB1126B92A, L_53, NULL);
		// m_Command.SetComputeTextureParam(compute, kernel, "_From", from);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_54 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_55 = V_4;
		int32_t L_56 = V_5;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_57 = ___from0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_58;
		L_58 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_57, NULL);
		NullCheck(L_54);
		CommandBuffer_SetComputeTextureParam_m4EE2EFCF46096652EA2D3D14C0DE3D1252CD2174(L_54, L_55, L_56, _stringLiteralF51190EEE90545F9CD168B86B0A73EF3C85E3A2C, L_58, NULL);
		// int groupSize = Mathf.CeilToInt(size / 4f);
		int32_t L_59;
		L_59 = Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline(((float)(((float)L_17)/(4.0f))), NULL);
		V_6 = L_59;
		// m_Command.DispatchCompute(compute, kernel, groupSize, groupSize, groupSize);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_60 = __this->___m_Command_1;
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_61 = V_4;
		int32_t L_62 = V_5;
		int32_t L_63 = V_6;
		int32_t L_64 = V_6;
		int32_t L_65 = V_6;
		NullCheck(L_60);
		CommandBuffer_DispatchCompute_mF9F5605B77F0480FD4B8C3BCAEC2FC59A24E31A2(L_60, L_61, L_62, L_63, L_64, L_65, NULL);
		// return rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_66 = V_0;
		return L_66;
	}

IL_0157:
	{
		// var format = TextureFormatUtilities.GetUncompressedRenderTextureFormat(from);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_67 = ___from0;
		il2cpp_codegen_runtime_class_init_inline(TextureFormatUtilities_t68E492E14F6DE04D603579FC02F042ED0174572D_il2cpp_TypeInfo_var);
		int32_t L_68;
		L_68 = TextureFormatUtilities_GetUncompressedRenderTextureFormat_mCA81A8A50F7AF487D8D4E2AC8363A5FA6D1ECA1A(L_67, NULL);
		V_1 = L_68;
		// rt = Get(format, from.width, from.height);
		int32_t L_69 = V_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_70 = ___from0;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_70);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_72 = ___from0;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_72);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_74;
		L_74 = TextureLerper_Get_mD700555241B9F131B78A0302883C35AD0936F120(__this, L_69, L_71, L_73, 1, (bool)0, (bool)0, NULL);
		V_0 = L_74;
		// var sheet = m_PropertySheets.Get(m_Resources.shaders.texture2dLerp);
		PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* L_75 = __this->___m_PropertySheets_2;
		PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* L_76 = __this->___m_Resources_3;
		NullCheck(L_76);
		Shaders_t2934A1A9726776BE88E31A97A67A9BD9ACEED86B* L_77 = L_76->___shaders_7;
		NullCheck(L_77);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_78 = L_77->___texture2dLerp_12;
		NullCheck(L_75);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_79;
		L_79 = PropertySheetFactory_Get_mCFDB007DD001F66FCC0EAD7549B63C74857569FC(L_75, L_78, NULL);
		V_2 = L_79;
		// sheet.properties.SetVector(ShaderIDs.TargetColor, new Vector4(to.r, to.g, to.b, to.a));
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_80 = V_2;
		NullCheck(L_80);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_81;
		L_81 = PropertySheet_get_properties_m3F54B6A690186CF8AE8CCD585068A4DB80AA50F5_inline(L_80, NULL);
		il2cpp_codegen_runtime_class_init_inline(ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var);
		int32_t L_82 = ((ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var))->___TargetColor_119;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83 = ___to1;
		float L_84 = L_83.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = ___to1;
		float L_86 = L_85.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = ___to1;
		float L_88 = L_87.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89 = ___to1;
		float L_90 = L_89.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_91), L_84, L_86, L_88, L_90, /*hidden argument*/NULL);
		NullCheck(L_81);
		MaterialPropertyBlock_SetVector_m22B010D99231EF5684063F4A07F5948854D590B3(L_81, L_82, L_91, NULL);
		// sheet.properties.SetFloat(ShaderIDs.Interp, t);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_92 = V_2;
		NullCheck(L_92);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_93;
		L_93 = PropertySheet_get_properties_m3F54B6A690186CF8AE8CCD585068A4DB80AA50F5_inline(L_92, NULL);
		int32_t L_94 = ((ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_StaticFields*)il2cpp_codegen_static_fields_for(ShaderIDs_t5ECE3A5347F3C559BCA977BD590CC3CB8228BD99_il2cpp_TypeInfo_var))->___Interp_118;
		float L_95 = ___t2;
		NullCheck(L_93);
		MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267(L_93, L_94, L_95, NULL);
		// m_Command.BlitFullscreenTriangle(from, rt, sheet, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_96 = __this->___m_Command_1;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_97 = ___from0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_98;
		L_98 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_97, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_99 = V_0;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_100;
		L_100 = RenderTargetIdentifier_op_Implicit_mBF13C6AE62DCEDDEFDC1C7305BE646FE99D2F24C(L_99, NULL);
		PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* L_101 = V_2;
		il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440));
		Nullable_1_t13F9968C978BAF968F02BA5B41ABB481321A5440 L_102 = V_7;
		il2cpp_codegen_runtime_class_init_inline(RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
		RuntimeUtilities_BlitFullscreenTriangle_m5E84F777CA552E3540C83CDAEB6C2075F8406E16(L_96, L_98, L_100, L_101, 1, (bool)0, L_102, (bool)0, NULL);
		// return rt;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_103 = V_0;
		return L_103;
	}
}
// System.Void UnityEngine.Rendering.PostProcessing.TextureLerper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureLerper_Clear_mF79AC272E135A60DFE6AB2012B81905934090214 (TextureLerper_t3EAB762818E71EC9F4627D4BF1C4428DF9570424* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var rt in m_Actives)
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_0 = __this->___m_Actives_5;
		NullCheck(L_0);
		Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 L_1;
		L_1 = List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A(L_0, List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4((&V_0), Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var rt in m_Actives)
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2;
				L_2 = Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_inline((&V_0), Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var);
				// RuntimeUtilities.Destroy(rt);
				il2cpp_codegen_runtime_class_init_inline(RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
				RuntimeUtilities_Destroy_m88860DDA45529FA1193643863F052D709087B493(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var rt in m_Actives)
				bool L_3;
				L_3 = Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5((&V_0), Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
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
		// foreach (var rt in m_Recycled)
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_4 = __this->___m_Recycled_4;
		NullCheck(L_4);
		Enumerator_tF357B3332520AE13BF09CAC75EB1CF64734C9693 L_5;
		L_5 = List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A(L_4, List_1_GetEnumerator_m267422B31574DBAB05F061FC47A56C46671B278A_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4((&V_0), Enumerator_Dispose_m0BD79377444E12888C74A351C865A99A54DA23A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004d_1;
			}

IL_0041_1:
			{
				// foreach (var rt in m_Recycled)
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6;
				L_6 = Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_inline((&V_0), Enumerator_get_Current_m62EDA921433856AC26651F6AFD54E11642E37555_RuntimeMethod_var);
				// RuntimeUtilities.Destroy(rt);
				il2cpp_codegen_runtime_class_init_inline(RuntimeUtilities_t275B86E9EF6FD2FCA0688D1C65BCE9BEC09BCBB6_il2cpp_TypeInfo_var);
				RuntimeUtilities_Destroy_m88860DDA45529FA1193643863F052D709087B493(L_6, NULL);
			}

IL_004d_1:
			{
				// foreach (var rt in m_Recycled)
				bool L_7;
				L_7 = Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5((&V_0), Enumerator_MoveNext_mAE1E268534DD3049C788ABE6BB7512784F3EE2A5_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// m_Actives.Clear();
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_8 = __this->___m_Actives_5;
		NullCheck(L_8);
		List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_inline(L_8, List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var);
		// m_Recycled.Clear();
		List_1_tF20988DD2863E9321EB7427D9B83C337053F1C8B* L_9 = __this->___m_Recycled_4;
		NullCheck(L_9);
		List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_inline(L_9, List_1_Clear_m251977459109D48D068772EA3624051434EB6DB0_RuntimeMethod_var);
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* PostProcessRenderContext_get_command_m028BE33B6194640A1DE901A6F935658034A3E2CD_inline (PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* __this, const RuntimeMethod* method) 
{
	{
		// public CommandBuffer command { get; set; }
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = __this->___U3CcommandU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* PostProcessRenderContext_get_propertySheets_m60E7825143611FEC183803150D8F7C2785514D79_inline (PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* __this, const RuntimeMethod* method) 
{
	{
		// public PropertySheetFactory propertySheets { get; internal set; }
		PropertySheetFactory_t5ABFD70669DCB136C812072371B67AD83FCDD19D* L_0 = __this->___U3CpropertySheetsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* PostProcessRenderContext_get_resources_m89879DF69E4B910F9EE3008AB8DC60B732ABF02A_inline (PostProcessRenderContext_t7A95408B72564734295D248DE20A301815141FD7* __this, const RuntimeMethod* method) 
{
	{
		// public PostProcessResources resources { get; internal set; }
		PostProcessResources_t300E967CDD9643AE04457DA4FFC5B1100885048D* L_0 = __this->___U3CresourcesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_mF2BF9F4261B3431DC20E10A46CFEEED103C48963_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* PropertySheet_get_properties_m3F54B6A690186CF8AE8CCD585068A4DB80AA50F5_inline (PropertySheet_tBA80DF63DC9A09D98B5F30A781448F77410D4397* __this, const RuntimeMethod* method) 
{
	{
		// public MaterialPropertyBlock properties { get; private set; }
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = __this->___U3CpropertiesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
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
