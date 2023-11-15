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
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<UnityEngine.UIElements.UIR.RenderChainCommand>
struct Action_1_t6CEFBD00BC7F3417CE2B5085F1C6192707A1F6DC;
// UnityEngine.UIElements.UIR.BasicNodePool`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNodePool_1_tEF610BEFE1094E5737DC6F71292C727C8FFD0828;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.UIElements.TextureId>
struct Dictionary_2_t2E14D8B0F76748B5AE00AF497CE45177082B7DA6;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.VisualElement,UnityEngine.Vector2>
struct Dictionary_2_t2E2FD115F34FFA7AE5B80FD5398843049FCBF05E;
// System.Func`1<UnityEngine.UIElements.UIR.RenderChainCommand>
struct Func_1_t6C71C14DB1034DB5664878D0DB8C07DE9B04EBC1;
// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree>
struct LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7;
// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle>
struct LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851;
// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.RenderChainCommand>
struct LinkedPool_1_t2089E962DBA7DCED47F5B21A93012A52E885E94F;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>>
struct List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>>
struct List_1_tA79C35FB5E50135962B53960CB758B9262700632;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>
struct List_1_t7524385702B2ADF442BBE71121A26B337005726D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.BitmapAllocator32/Page>
struct List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain/RenderNodeData>
struct List_1_tAF3B3F03351330B5C2EA012DB4C7E417DC6551AB;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TextureRegistry/TextureInfo>
struct List_1_t33D0D5DC1CC999D9E66584CFA3E5F86E9C719E8C;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Collections.Generic.Stack`1<UnityEngine.UIElements.TextureId>
struct Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UIElements.GradientSettings[]
struct GradientSettingsU5BU5D_t5A316EDE81269563C087800A519341276F98AF9C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UIElements.UIR.RenderChain[]
struct RenderChainU5BU5D_tD86D2A262F4A03450C368D8058A1D058E63C87FF;
// UnityEngine.UIElements.UIR.RenderChainTextEntry[]
struct RenderChainTextEntryU5BU5D_tD38698D193EAB301825EAD81C1D10280631FBD62;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIElements.TextureId[]
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.UIElements.VectorImageVertex[]
struct VectorImageVertexU5BU5D_tA19C37074824265F1A5684A6F2C156559455C1C4;
// UnityEngine.UIElements.Vertex[]
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
// UnityEngine.UIElements.UIR.MeshBuilder/VertexClipEdge[]
struct VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA;
// UnityEngine.UIElements.UIR.Tessellation/Edges[]
struct EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UIElements.AtlasBase
struct AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC;
// UnityEngine.UIElements.UIR.BaseShaderInfoStorage
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.UIR.DrawParams
struct DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// UnityEngine.UIElements.MeshWriteData
struct MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UIElements.UIR.Page
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChain
struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UIElements.TextureRegistry
struct TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B;
// UnityEngine.UIElements.UIR.TextureSlotManager
struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D;
// UnityEngine.UIElements.UIR.Implementation.UIRStylePainter
struct UIRStylePainter_t406D6C9F30B975CCE0D55D800B5A97504F26FEC8;
// UnityEngine.UIElements.UIR.Implementation.UIRTextUpdatePainter
struct UIRTextUpdatePainter_t4C6DD44519F677FBCFCB2B6D38C129BB8E21460F;
// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
// UnityEngine.UIElements.VectorImage
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
// UnityEngine.UIElements.UIR.VectorImageManager
struct VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// UnityEngine.UIElements.UIR.RenderChain/<>c
struct U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator
struct Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7524385702B2ADF442BBE71121A26B337005726D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t03ED7C6DFD030F64BE095A77446098CAA515B661____2658253827592C8000DF6C48FD5487B674D9E695DB670A56FDEAB2B7F291523E_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0ADC594ACFE7CADF74F62778AEE939E06CE5837F;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC794DABBF58EC754946493A7249124D49ADF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral465727E7041A2140650559A4295CA9E1A3B84BD0;
IL2CPP_EXTERN_C String_t* _stringLiteral46B2C5194353B68813203D9EC7AFC20016EC23A3;
IL2CPP_EXTERN_C String_t* _stringLiteral5A3F4927E051746A9F30454F0F92269F4430E7C1;
IL2CPP_EXTERN_C String_t* _stringLiteral63C5C5D442C5A443C7776D7EBEE0F610DE2248B1;
IL2CPP_EXTERN_C String_t* _stringLiteral7C183899E3EA23EE9E6CA02A616D7E7DCBB4AD2C;
IL2CPP_EXTERN_C String_t* _stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214;
IL2CPP_EXTERN_C String_t* _stringLiteralB8940764EF74E36BFE702FA01C2AD7A3D820A8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralC1CDC83732501CFE500298C45C45DE38FD47B516;
IL2CPP_EXTERN_C String_t* _stringLiteralD48662FD50B014F07EAFB4712AE2F90C3AF0BB5A;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4F13B6BBBCEB7A4650B35737854BA4584BC931CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mBD0E046855051C95C6F60B84C31E0F276730D92A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m487D573029A34C484E237A844D3AAD9B0BFB5978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC51695DFAFC29F4B5685D76B45BC442D452542F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9D430824B0739628DB4BBEA6168580B462031C28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_MakeVectorGraphicsStretchBackground_m7F6993CF84251938FE33076968FC50C1684C6FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_RectClip_m2EE47B978E3359FC6D01EEAE37979EDBE3F3F6E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_RuntimeMethod_var;
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct VectorImageVertexU5BU5D_tA19C37074824265F1A5684A6F2C156559455C1C4;
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185;
struct VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA;
struct EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIElements.UIR.LinkedPoolItem`1<UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>>
struct LinkedPoolItem_1_t9085777154DBD9371E246BEFC117069B654E71FD  : public RuntimeObject
{
	// T UnityEngine.UIElements.UIR.LinkedPoolItem`1::poolNext
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___poolNext_0;
};

// UnityEngine.UIElements.UIR.LinkedPoolItem`1<UnityEngine.UIElements.UIR.MeshHandle>
struct LinkedPoolItem_1_t77597E722F28CEC15E53E9638992FDC40508EB75  : public RuntimeObject
{
	// T UnityEngine.UIElements.UIR.LinkedPoolItem`1::poolNext
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___poolNext_0;
};

// UnityEngine.UIElements.UIR.LinkedPoolItem`1<UnityEngine.UIElements.UIR.RenderChainCommand>
struct LinkedPoolItem_1_t0846BE403C5CD2D4DD84BFF16FEB0636BB9118C9  : public RuntimeObject
{
	// T UnityEngine.UIElements.UIR.LinkedPoolItem`1::poolNext
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___poolNext_0;
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

// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>
struct List_1_t7524385702B2ADF442BBE71121A26B337005726D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderChainU5BU5D_tD86D2A262F4A03450C368D8058A1D058E63C87FF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7524385702B2ADF442BBE71121A26B337005726D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderChainU5BU5D_tD86D2A262F4A03450C368D8058A1D058E63C87FF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RenderChainTextEntryU5BU5D_tD38698D193EAB301825EAD81C1D10280631FBD62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RenderChainTextEntryU5BU5D_tD38698D193EAB301825EAD81C1D10280631FBD62* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
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

// UnityEngine.UIElements.TextureRegistry
struct TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TextureRegistry/TextureInfo> UnityEngine.UIElements.TextureRegistry::m_Textures
	List_1_t33D0D5DC1CC999D9E66584CFA3E5F86E9C719E8C* ___m_Textures_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Texture,UnityEngine.UIElements.TextureId> UnityEngine.UIElements.TextureRegistry::m_TextureToId
	Dictionary_2_t2E14D8B0F76748B5AE00AF497CE45177082B7DA6* ___m_TextureToId_1;
	// System.Collections.Generic.Stack`1<UnityEngine.UIElements.TextureId> UnityEngine.UIElements.TextureRegistry::m_FreeIds
	Stack_1_t3B750F239246A65B0BACFB807CBA1961CA8DE0A6* ___m_FreeIds_2;
};

struct TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_StaticFields
{
	// UnityEngine.UIElements.TextureRegistry UnityEngine.UIElements.TextureRegistry::<instance>k__BackingField
	TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* ___U3CinstanceU3Ek__BackingField_4;
};

// UnityEngine.UIElements.UIR.TextureSlotManager
struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D  : public RuntimeObject
{
	// UnityEngine.UIElements.TextureId[] UnityEngine.UIElements.UIR.TextureSlotManager::m_Textures
	TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* ___m_Textures_3;
	// System.Int32[] UnityEngine.UIElements.UIR.TextureSlotManager::m_Tickets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_Tickets_4;
	// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::m_CurrentTicket
	int32_t ___m_CurrentTicket_5;
	// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::m_FirstUsedTicket
	int32_t ___m_FirstUsedTicket_6;
	// UnityEngine.Vector4[] UnityEngine.UIElements.UIR.TextureSlotManager::m_GpuTextures
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_GpuTextures_7;
	// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::<FreeSlots>k__BackingField
	int32_t ___U3CFreeSlotsU3Ek__BackingField_8;
	// UnityEngine.UIElements.TextureRegistry UnityEngine.UIElements.UIR.TextureSlotManager::textureRegistry
	TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* ___textureRegistry_9;
};

struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields
{
	// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::k_SlotCount
	int32_t ___k_SlotCount_0;
	// System.Int32[] UnityEngine.UIElements.UIR.TextureSlotManager::slotIds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___slotIds_1;
	// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::textureTableId
	int32_t ___textureTableId_2;
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

// UnityEngine.UIElements.UIR.RenderChain/<>c
struct U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F  : public RuntimeObject
{
};

struct U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_StaticFields
{
	// UnityEngine.UIElements.UIR.RenderChain/<>c UnityEngine.UIElements.UIR.RenderChain/<>c::<>9
	U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F* ___U3CU3E9_0;
	// System.Func`1<UnityEngine.UIElements.UIR.RenderChainCommand> UnityEngine.UIElements.UIR.RenderChain/<>c::<>9__37_0
	Func_1_t6C71C14DB1034DB5664878D0DB8C07DE9B04EBC1* ___U3CU3E9__37_0_1;
	// System.Action`1<UnityEngine.UIElements.UIR.RenderChainCommand> UnityEngine.UIElements.UIR.RenderChain/<>c::<>9__37_1
	Action_1_t6CEFBD00BC7F3417CE2B5085F1C6192707A1F6DC* ___U3CU3E9__37_1_2;
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

// Unity.Collections.NativeArray`1<UnityEngine.UIElements.UIR.Transform3x4>
struct NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4>
struct NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<System.UInt16>
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.Vector4>
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.UIR.Alloc
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE 
{
	// System.UInt32 UnityEngine.UIElements.UIR.Alloc::start
	uint32_t ___start_0;
	// System.UInt32 UnityEngine.UIElements.UIR.Alloc::size
	uint32_t ___size_1;
	// System.Object UnityEngine.UIElements.UIR.Alloc::handle
	RuntimeObject* ___handle_2;
	// System.Boolean UnityEngine.UIElements.UIR.Alloc::shortLived
	bool ___shortLived_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.Alloc
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_pinvoke
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	Il2CppIUnknown* ___handle_2;
	int32_t ___shortLived_3;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.Alloc
struct Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE_marshaled_com
{
	uint32_t ___start_0;
	uint32_t ___size_1;
	Il2CppIUnknown* ___handle_2;
	int32_t ___shortLived_3;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.UIElements.UIR.BitmapAllocator32
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 
{
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32::m_PageHeight
	int32_t ___m_PageHeight_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.BitmapAllocator32/Page> UnityEngine.UIElements.UIR.BitmapAllocator32::m_Pages
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages_1;
	// System.Collections.Generic.List`1<System.UInt32> UnityEngine.UIElements.UIR.BitmapAllocator32::m_AllocMap
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap_2;
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32::m_EntryWidth
	int32_t ___m_EntryWidth_3;
	// System.Int32 UnityEngine.UIElements.UIR.BitmapAllocator32::m_EntryHeight
	int32_t ___m_EntryHeight_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.BitmapAllocator32
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke
{
	int32_t ___m_PageHeight_0;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages_1;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap_2;
	int32_t ___m_EntryWidth_3;
	int32_t ___m_EntryHeight_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.BitmapAllocator32
struct BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com
{
	int32_t ___m_PageHeight_0;
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ___m_Pages_1;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_AllocMap_2;
	int32_t ___m_EntryWidth_3;
	int32_t ___m_EntryHeight_4;
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

// UnityEngine.UIElements.UIR.ChainBuilderStats
struct ChainBuilderStats_t6E755490CE0B312AE16FEBC6734C7F2836A8067C 
{
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::elementsAdded
	uint32_t ___elementsAdded_0;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::elementsRemoved
	uint32_t ___elementsRemoved_1;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveClipUpdates
	uint32_t ___recursiveClipUpdates_2;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveClipUpdatesExpanded
	uint32_t ___recursiveClipUpdatesExpanded_3;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::nonRecursiveClipUpdates
	uint32_t ___nonRecursiveClipUpdates_4;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveTransformUpdates
	uint32_t ___recursiveTransformUpdates_5;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveTransformUpdatesExpanded
	uint32_t ___recursiveTransformUpdatesExpanded_6;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveOpacityUpdates
	uint32_t ___recursiveOpacityUpdates_7;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveOpacityUpdatesExpanded
	uint32_t ___recursiveOpacityUpdatesExpanded_8;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::colorUpdates
	uint32_t ___colorUpdates_9;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::colorUpdatesExpanded
	uint32_t ___colorUpdatesExpanded_10;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveVisualUpdates
	uint32_t ___recursiveVisualUpdates_11;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::recursiveVisualUpdatesExpanded
	uint32_t ___recursiveVisualUpdatesExpanded_12;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::nonRecursiveVisualUpdates
	uint32_t ___nonRecursiveVisualUpdates_13;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::dirtyProcessed
	uint32_t ___dirtyProcessed_14;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::nudgeTransformed
	uint32_t ___nudgeTransformed_15;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::boneTransformed
	uint32_t ___boneTransformed_16;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::skipTransformed
	uint32_t ___skipTransformed_17;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::visualUpdateTransformed
	uint32_t ___visualUpdateTransformed_18;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::updatedMeshAllocations
	uint32_t ___updatedMeshAllocations_19;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::newMeshAllocations
	uint32_t ___newMeshAllocations_20;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::groupTransformElementsChanged
	uint32_t ___groupTransformElementsChanged_21;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::immedateRenderersActive
	uint32_t ___immedateRenderersActive_22;
	// System.UInt32 UnityEngine.UIElements.UIR.ChainBuilderStats::textUpdates
	uint32_t ___textUpdates_23;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
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

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
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

// UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11 
{
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainTextEntry::command
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___command_0;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainTextEntry::firstVertex
	int32_t ___firstVertex_1;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainTextEntry::vertexCount
	int32_t ___vertexCount_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_pinvoke
{
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___command_0;
	int32_t ___firstVertex_1;
	int32_t ___vertexCount_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainTextEntry
struct RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_com
{
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___command_0;
	int32_t ___firstVertex_1;
	int32_t ___vertexCount_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.TextureId
struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 
{
	// System.Int32 UnityEngine.UIElements.TextureId::m_Index
	int32_t ___m_Index_0;
};

struct TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields
{
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.TextureId::invalid
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___invalid_1;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts
struct ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC 
{
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts::firstClippedIndex
	int32_t ___firstClippedIndex_0;
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts::firstDegenerateIndex
	int32_t ___firstDegenerateIndex_1;
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts::lastClippedIndex
	int32_t ___lastClippedIndex_2;
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts::clippedTriangles
	int32_t ___clippedTriangles_3;
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts::addedTriangles
	int32_t ___addedTriangles_4;
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts::degenerateTriangles
	int32_t ___degenerateTriangles_5;
};

// UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::heads
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::tails
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails_1;
	// System.Int32[] UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::minDepths
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___minDepths_2;
	// System.Int32[] UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::maxDepths
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___maxDepths_3;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::dirtyID
	uint32_t ___dirtyID_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_pinvoke
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads_0;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails_1;
	Il2CppSafeArray/*NONE*/* ___minDepths_2;
	Il2CppSafeArray/*NONE*/* ___maxDepths_3;
	uint32_t ___dirtyID_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_com
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___heads_0;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___tails_1;
	Il2CppSafeArray/*NONE*/* ___minDepths_2;
	Il2CppSafeArray/*NONE*/* ___maxDepths_3;
	uint32_t ___dirtyID_4;
};

// UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator
struct RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F 
{
	union
	{
		struct
		{
		};
		uint8_t RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F__padding[1];
	};
};

struct RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain> UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator::renderChains
	List_1_t7524385702B2ADF442BBE71121A26B337005726D* ___renderChains_0;
};

// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics
struct DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F 
{
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::currentFrameIndex
	int32_t ___currentFrameIndex_0;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::totalIndices
	uint32_t ___totalIndices_1;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::commandCount
	uint32_t ___commandCount_2;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawCommandCount
	uint32_t ___drawCommandCount_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::materialSetCount
	uint32_t ___materialSetCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCount
	uint32_t ___drawRangeCount_5;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCallCount
	uint32_t ___drawRangeCallCount_6;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::immediateDraws
	uint32_t ___immediateDraws_7;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::stencilRefChanges
	uint32_t ___stencilRefChanges_8;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// UnityEngine.UIElements.ColorPage
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 
{
	// System.Boolean UnityEngine.UIElements.ColorPage::isValid
	bool ___isValid_0;
	// UnityEngine.Color32 UnityEngine.UIElements.ColorPage::pageAndID
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ColorPage
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke
{
	int32_t ___isValid_0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ColorPage
struct ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com
{
	int32_t ___isValid_0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___pageAndID_1;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E  : public LinkedPoolItem_1_t77597E722F28CEC15E53E9638992FDC40508EB75
{
	// UnityEngine.UIElements.UIR.Alloc UnityEngine.UIElements.UIR.MeshHandle::allocVerts
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___allocVerts_1;
	// UnityEngine.UIElements.UIR.Alloc UnityEngine.UIElements.UIR.MeshHandle::allocIndices
	Alloc_t78312CFE58F38082281E80E297AE6176BD2BD8AE ___allocIndices_2;
	// System.UInt32 UnityEngine.UIElements.UIR.MeshHandle::triangleCount
	uint32_t ___triangleCount_3;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.MeshHandle::allocPage
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___allocPage_4;
	// System.UInt32 UnityEngine.UIElements.UIR.MeshHandle::allocTime
	uint32_t ___allocTime_5;
	// System.UInt32 UnityEngine.UIElements.UIR.MeshHandle::updateAllocID
	uint32_t ___updateAllocID_6;
};

// UnityEngine.TextCore.Text.MeshInfo
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F 
{
	// System.Int32 UnityEngine.TextCore.Text.MeshInfo::vertexCount
	int32_t ___vertexCount_1;
	// UnityEngine.Vector3[] UnityEngine.TextCore.Text.MeshInfo::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_2;
	// UnityEngine.Vector2[] UnityEngine.TextCore.Text.MeshInfo::uvs0
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0_3;
	// UnityEngine.Vector2[] UnityEngine.TextCore.Text.MeshInfo::uvs2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs2_4;
	// UnityEngine.Color32[] UnityEngine.TextCore.Text.MeshInfo::colors32
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___colors32_5;
	// System.Int32[] UnityEngine.TextCore.Text.MeshInfo::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_6;
	// UnityEngine.Material UnityEngine.TextCore.Text.MeshInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_7;
};

struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_StaticFields
{
	// UnityEngine.Color32 UnityEngine.TextCore.Text.MeshInfo::k_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___k_DefaultColor_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.Text.MeshInfo
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_pinvoke
{
	int32_t ___vertexCount_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_5;
	Il2CppSafeArray/*NONE*/* ___triangles_6;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_7;
};
// Native definition for COM marshalling of UnityEngine.TextCore.Text.MeshInfo
struct MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F_marshaled_com
{
	int32_t ___vertexCount_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___vertices_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs0_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___uvs2_4;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___colors32_5;
	Il2CppSafeArray/*NONE*/* ___triangles_6;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_7;
};

// UnityEngine.UIElements.MeshWriteData
struct MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9  : public RuntimeObject
{
	// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex> UnityEngine.UIElements.MeshWriteData::m_Vertices
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___m_Vertices_0;
	// Unity.Collections.NativeSlice`1<System.UInt16> UnityEngine.UIElements.MeshWriteData::m_Indices
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___m_Indices_1;
	// UnityEngine.Rect UnityEngine.UIElements.MeshWriteData::m_UVRegion
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRegion_2;
	// System.Int32 UnityEngine.UIElements.MeshWriteData::currentIndex
	int32_t ___currentIndex_3;
	// System.Int32 UnityEngine.UIElements.MeshWriteData::currentVertex
	int32_t ___currentVertex_4;
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

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UIElements.UIR.State
struct State_tC241510131965D8DE1919EB16A3650E397E5AEAB 
{
	// UnityEngine.Material UnityEngine.UIElements.UIR.State::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.State::font
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___font_1;
	// System.Single UnityEngine.UIElements.UIR.State::fontTexSDFScale
	float ___fontTexSDFScale_2;
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.UIR.State::texture
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_3;
	// System.Int32 UnityEngine.UIElements.UIR.State::stencilRef
	int32_t ___stencilRef_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.State
struct State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___font_1;
	float ___fontTexSDFScale_2;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_3;
	int32_t ___stencilRef_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.State
struct State_tC241510131965D8DE1919EB16A3650E397E5AEAB_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___font_1;
	float ___fontTexSDFScale_2;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___texture_3;
	int32_t ___stencilRef_4;
};

// UnityEngine.UIElements.UIR.TextCoreSettings
struct TextCoreSettings_t3D724CD0811298B5AB1EA2041CE799CC25CDD115 
{
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextCoreSettings::faceColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___faceColor_0;
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextCoreSettings::outlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor_1;
	// System.Single UnityEngine.UIElements.UIR.TextCoreSettings::outlineWidth
	float ___outlineWidth_2;
	// UnityEngine.Color UnityEngine.UIElements.UIR.TextCoreSettings::underlayColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___underlayColor_3;
	// UnityEngine.Vector2 UnityEngine.UIElements.UIR.TextCoreSettings::underlayOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___underlayOffset_4;
	// System.Single UnityEngine.UIElements.UIR.TextCoreSettings::underlaySoftness
	float ___underlaySoftness_5;
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

// UnityEngine.UIElements.UIR.TextureEntry
struct TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128 
{
	// UnityEngine.Texture UnityEngine.UIElements.UIR.TextureEntry::source
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source_0;
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.UIR.TextureEntry::actual
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___actual_1;
	// System.Boolean UnityEngine.UIElements.UIR.TextureEntry::replaced
	bool ___replaced_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.TextureEntry
struct TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_pinvoke
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source_0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___actual_1;
	int32_t ___replaced_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.TextureEntry
struct TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_com
{
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source_0;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___actual_1;
	int32_t ___replaced_2;
};

// UnityEngine.UIElements.VectorImageVertex
struct VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 
{
	// UnityEngine.Vector3 UnityEngine.UIElements.VectorImageVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Color32 UnityEngine.UIElements.VectorImageVertex::tint
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_1;
	// UnityEngine.Vector2 UnityEngine.UIElements.VectorImageVertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_2;
	// System.UInt32 UnityEngine.UIElements.VectorImageVertex::settingIndex
	uint32_t ___settingIndex_3;
};

// UnityEngine.UIElements.Vertex
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	// UnityEngine.Vector3 UnityEngine.UIElements.Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_1;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::tint
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint_2;
	// UnityEngine.Vector2 UnityEngine.UIElements.Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_3;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::xformClipPages
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages_4;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::ids
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids_5;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::flags
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags_6;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::opacityColorPages
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages_7;
	// UnityEngine.Vector4 UnityEngine.UIElements.Vertex::circle
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle_8;
	// System.Single UnityEngine.UIElements.Vertex::textureId
	float ___textureId_9;
};

struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	// System.Single UnityEngine.UIElements.Vertex::nearZ
	float ___nearZ_0;
};

// UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
struct AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 
{
	// UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::alloc
	Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* ___alloc_0;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_1;
	// UnityEngine.UIElements.TextureId UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::svgTexture
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___svgTexture_2;
	// UnityEngine.Material UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// UnityEngine.UIElements.MeshGenerationContext/MeshFlags UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::flags
	int32_t ___flags_4;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::colorAlloc
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorAlloc_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
struct AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_pinvoke
{
	Il2CppMethodPointer ___alloc_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_1;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___svgTexture_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___flags_4;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorAlloc_5;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
struct AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_com
{
	Il2CppMethodPointer ___alloc_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_1;
	TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___svgTexture_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___flags_4;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorAlloc_5;
};

// UnityEngine.UIElements.UIR.MeshBuilder/VertexClipEdge
struct VertexClipEdge_tACFA4DFFDEF445CE66AD530BEC0B5A1977C02705 
{
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder/VertexClipEdge::value__
	int32_t ___value___2;
};

// UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE 
{
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::standardMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::initialMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	// UnityEngine.MaterialPropertyBlock UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::matPropBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	// UnityEngine.UIElements.UIR.UIRenderDevice UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::device
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::vectorAtlas
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	// UnityEngine.Texture UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::shaderInfoAtlas
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	// System.Single UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::dpiScale
	float ___dpiScale_7;
	// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.Transform3x4> UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::transformConstants
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector4> UnityEngine.UIElements.UIR.RenderChain/RenderNodeData::clipRectConstants
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___standardMaterial_0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___initialMaterial_1;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___matPropBlock_2;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_3;
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___device_4;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___vectorAtlas_5;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___shaderInfoAtlas_6;
	float ___dpiScale_7;
	NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___transformConstants_8;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___clipRectConstants_9;
};

// UnityEngine.UIElements.UIR.Tessellation/Edges
struct Edges_t4C0794B352DB7BE9AD20390306F0B2DC0860F5C5 
{
	// System.Int32 UnityEngine.UIElements.UIR.Tessellation/Edges::value__
	int32_t ___value___2;
};

// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB  : public LinkedPoolItem_1_t9085777154DBD9371E246BEFC117069B654E71FD
{
	// UnityEngine.UIElements.UIR.BasicNode`1<T> UnityEngine.UIElements.UIR.BasicNode`1::next
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___next_1;
	// T UnityEngine.UIElements.UIR.BasicNode`1::data
	TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128 ___data_2;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.UIElements.UIR.MeshBuilder
struct MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F  : public RuntimeObject
{
};

struct MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.MeshBuilder::s_VectorGraphics9Slice
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_VectorGraphics9Slice_0;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.MeshBuilder::s_VectorGraphicsSplitTriangle
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_VectorGraphicsSplitTriangle_1;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.MeshBuilder::s_VectorGraphicsScaleTriangle
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_VectorGraphicsScaleTriangle_2;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.MeshBuilder::s_VectorGraphicsStretch
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_VectorGraphicsStretch_3;
	// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder::s_MaxTextMeshVertices
	int32_t ___s_MaxTextMeshVertices_4;
	// System.UInt16[] UnityEngine.UIElements.UIR.MeshBuilder::slicedQuadIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___slicedQuadIndices_5;
	// System.Single[] UnityEngine.UIElements.UIR.MeshBuilder::k_TexCoordSlicesX
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___k_TexCoordSlicesX_6;
	// System.Single[] UnityEngine.UIElements.UIR.MeshBuilder::k_TexCoordSlicesY
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___k_TexCoordSlicesY_7;
	// System.Single[] UnityEngine.UIElements.UIR.MeshBuilder::k_PositionSlicesX
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___k_PositionSlicesX_8;
	// System.Single[] UnityEngine.UIElements.UIR.MeshBuilder::k_PositionSlicesY
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___k_PositionSlicesY_9;
	// UnityEngine.UIElements.UIR.MeshBuilder/VertexClipEdge[] UnityEngine.UIElements.UIR.MeshBuilder::s_AllClipEdges
	VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* ___s_AllClipEdges_10;
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

// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727  : public LinkedPoolItem_1_t0846BE403C5CD2D4DD84BFF16FEB0636BB9118C9
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainCommand::owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___owner_1;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainCommand::prev
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___prev_2;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainCommand::next
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___next_3;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainCommand::closing
	bool ___closing_4;
	// UnityEngine.UIElements.UIR.CommandType UnityEngine.UIElements.UIR.RenderChainCommand::type
	int32_t ___type_5;
	// UnityEngine.UIElements.UIR.State UnityEngine.UIElements.UIR.RenderChainCommand::state
	State_tC241510131965D8DE1919EB16A3650E397E5AEAB ___state_6;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainCommand::mesh
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___mesh_7;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainCommand::indexOffset
	int32_t ___indexOffset_8;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainCommand::indexCount
	int32_t ___indexCount_9;
	// System.Action UnityEngine.UIElements.UIR.RenderChainCommand::callback
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback_10;
};

struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727_StaticFields
{
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainCommand::k_ID_MainTex
	int32_t ___k_ID_MainTex_11;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChainCommand::s_ImmediateOverheadMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ImmediateOverheadMarker_12;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.UIElements.UIR.Tessellation
struct Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31  : public RuntimeObject
{
};

struct Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields
{
	// System.Single UnityEngine.UIElements.UIR.Tessellation::kEpsilon
	float ___kEpsilon_0;
	// System.Single UnityEngine.UIElements.UIR.Tessellation::kUnusedArc
	float ___kUnusedArc_1;
	// System.UInt16 UnityEngine.UIElements.UIR.Tessellation::kSubdivisions
	uint16_t ___kSubdivisions_2;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Tessellation::s_MarkerTessellateRect
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTessellateRect_3;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Tessellation::s_MarkerTessellateBorder
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTessellateBorder_4;
	// UnityEngine.UIElements.UIR.Tessellation/Edges[] UnityEngine.UIElements.UIR.Tessellation::s_AllEdges
	EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* ___s_AllEdges_5;
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

// UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF 
{
	// UnityEngine.UIElements.UIR.BaseShaderInfoStorage UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_Storage
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage_0;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_TransformAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_TransformAllocator_1;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_ClipRectAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_ClipRectAllocator_2;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_OpacityAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_OpacityAllocator_3;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_ColorAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_ColorAllocator_4;
	// UnityEngine.UIElements.UIR.BitmapAllocator32 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_TextSettingsAllocator
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73 ___m_TextSettingsAllocator_5;
	// System.Boolean UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_StorageReallyCreated
	bool ___m_StorageReallyCreated_6;
	// System.Boolean UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_VertexTexturingEnabled
	bool ___m_VertexTexturingEnabled_7;
	// Unity.Collections.NativeArray`1<UnityEngine.UIElements.UIR.Transform3x4> UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_Transforms
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms_8;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::m_ClipRects
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects_9;
};

struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___identityTransformTexel_10;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::infiniteClipRectTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___infiniteClipRectTexel_11;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::fullOpacityTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___fullOpacityTexel_12;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::clearColorTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___clearColorTexel_13;
	// UnityEngine.Vector2Int UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::defaultTextCoreSettingsTexel
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___defaultTextCoreSettingsTexel_14;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformValue
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityTransformValue_15;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformRow0Value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___identityTransformRow0Value_16;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformRow1Value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___identityTransformRow1Value_17;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransformRow2Value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___identityTransformRow2Value_18;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::infiniteClipRectValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___infiniteClipRectValue_19;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::fullOpacityValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___fullOpacityValue_20;
	// UnityEngine.Vector4 UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::clearColorValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clearColorValue_21;
	// UnityEngine.UIElements.UIR.TextCoreSettings UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::defaultTextCoreSettingsValue
	TextCoreSettings_t3D724CD0811298B5AB1EA2041CE799CC25CDD115 ___defaultTextCoreSettingsValue_22;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::identityTransform
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___identityTransform_23;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::infiniteClipRect
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___infiniteClipRect_24;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::fullOpacity
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___fullOpacity_25;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::clearColor
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clearColor_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator::defaultTextCoreSettings
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___defaultTextCoreSettings_27;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshaled_pinvoke
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage_0;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_TransformAllocator_1;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_ClipRectAllocator_2;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_OpacityAllocator_3;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_ColorAllocator_4;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_pinvoke ___m_TextSettingsAllocator_5;
	int32_t ___m_StorageReallyCreated_6;
	int32_t ___m_VertexTexturingEnabled_7;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms_8;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects_9;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
struct UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF_marshaled_com
{
	BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* ___m_Storage_0;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_TransformAllocator_1;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_ClipRectAllocator_2;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_OpacityAllocator_3;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_ColorAllocator_4;
	BitmapAllocator32_t87110600670688D0E149D61E1BDA8F45ADC59C73_marshaled_com ___m_TextSettingsAllocator_5;
	int32_t ___m_StorageReallyCreated_6;
	int32_t ___m_VertexTexturingEnabled_7;
	NativeArray_1_t7E7FEB7601A0E8158B43F2495CB02DBB211ADF51 ___m_Transforms_8;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_ClipRects_9;
};

// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302  : public RuntimeObject
{
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_MockDevice
	bool ___m_MockDevice_0;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_DefaultStencilState
	intptr_t ___m_DefaultStencilState_1;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_VertexDecl
	intptr_t ___m_VertexDecl_2;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.UIRenderDevice::m_FirstPage
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___m_FirstPage_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextPageVertexCount
	uint32_t ___m_NextPageVertexCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_LargeMeshVertexCount
	uint32_t ___m_LargeMeshVertexCount_5;
	// System.Single UnityEngine.UIElements.UIR.UIRenderDevice::m_IndexToVertexCountRatio
	float ___m_IndexToVertexCountRatio_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeferredFrees
	List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210* ___m_DeferredFrees_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>> UnityEngine.UIElements.UIR.UIRenderDevice::m_Updates
	List_1_tA79C35FB5E50135962B53960CB758B9262700632* ___m_Updates_8;
	// System.UInt32[] UnityEngine.UIElements.UIR.UIRenderDevice::m_Fences
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Fences_9;
	// UnityEngine.MaterialPropertyBlock UnityEngine.UIElements.UIR.UIRenderDevice::m_StandardMatProps
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_StandardMatProps_10;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_FrameIndex
	uint32_t ___m_FrameIndex_11;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextUpdateID
	uint32_t ___m_NextUpdateID_12;
	// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawStats
	DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F ___m_DrawStats_13;
	// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle> UnityEngine.UIElements.UIR.UIRenderDevice::m_MeshHandles
	LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851* ___m_MeshHandles_14;
	// UnityEngine.UIElements.UIR.DrawParams UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawParams
	DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443* ___m_DrawParams_15;
	// UnityEngine.UIElements.UIR.TextureSlotManager UnityEngine.UIElements.UIR.UIRenderDevice::m_TextureSlotManager
	TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* ___m_TextureSlotManager_16;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::<maxVerticesPerPage>k__BackingField
	uint32_t ___U3CmaxVerticesPerPageU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<breakBatches>k__BackingField
	bool ___U3CbreakBatchesU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_39;
};

struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_StaticFields
{
	// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeviceFreeQueue
	LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7* ___m_DeviceFreeQueue_17;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::m_ActiveDeviceCount
	int32_t ___m_ActiveDeviceCount_18;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SubscribedToNotifications
	bool ___m_SubscribedToNotifications_19;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SynchronousFree
	bool ___m_SynchronousFree_20;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexPropID
	int32_t ___s_FontTexPropID_21;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexSDFScaleID
	int32_t ___s_FontTexSDFScaleID_22;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_GradientSettingsTexID
	int32_t ___s_GradientSettingsTexID_23;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderInfoTexID
	int32_t ___s_ShaderInfoTexID_24;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_TransformsPropID
	int32_t ___s_TransformsPropID_25;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipRectsPropID
	int32_t ___s_ClipRectsPropID_26;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipSpaceParamsID
	int32_t ___s_ClipSpaceParamsID_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAllocate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAllocate_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFree
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFree_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAdvanceFrame
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAdvanceFrame_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFence
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFence_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerBeforeDraw
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerBeforeDraw_32;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_VertexTexturingIsAvailable
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_VertexTexturingIsAvailable_33;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderModelIs35
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_ShaderModelIs35_34;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexFloat
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexFloat_37;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexARGB8
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexARGB8_38;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_7;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_8;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_15;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_16;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_19;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_20;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_28;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_29;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_32;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_33;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_34;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_35;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_36;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_37;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_38;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_39;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_40;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_41;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_42;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_44;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_45;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_47;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_49;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_53;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_55;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_57;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_58;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_61;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_62;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_6;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_10;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_11;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_30;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_46;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_48;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_56;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_60;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_63;
};

// UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams
struct BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 
{
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::playmodeTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_1;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::leftColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor_2;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::topColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor_3;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::rightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor_4;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::bottomColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor_5;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::leftWidth
	float ___leftWidth_6;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::topWidth
	float ___topWidth_7;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::rightWidth
	float ___rightWidth_8;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::bottomWidth
	float ___bottomWidth_9;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::topLeftRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius_10;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::topRightRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius_11;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::bottomRightRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius_12;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::bottomLeftRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius_13;
	// UnityEngine.Material UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_14;
	// UnityEngine.UIElements.ColorPage UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::leftColorPage
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage_15;
	// UnityEngine.UIElements.ColorPage UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::topColorPage
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage_16;
	// UnityEngine.UIElements.ColorPage UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::rightColorPage
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___rightColorPage_17;
	// UnityEngine.UIElements.ColorPage UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams::bottomColorPage
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___bottomColorPage_18;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams
struct BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor_5;
	float ___leftWidth_6;
	float ___topWidth_7;
	float ___rightWidth_8;
	float ___bottomWidth_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius_11;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius_13;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_14;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___leftColorPage_15;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___topColorPage_16;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___rightColorPage_17;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___bottomColorPage_18;
};
// Native definition for COM marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams
struct BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___leftColor_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topColor_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rightColor_4;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomColor_5;
	float ___leftWidth_6;
	float ___topWidth_7;
	float ___rightWidth_8;
	float ___bottomWidth_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius_11;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius_12;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius_13;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_14;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___leftColorPage_15;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___topColorPage_16;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___rightColorPage_17;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___bottomColorPage_18;
};

// UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams
struct RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B 
{
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::uv
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	// UnityEngine.Texture UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
	// UnityEngine.Sprite UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_4;
	// UnityEngine.UIElements.VectorImage UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::vectorImage
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___vectorImage_5;
	// UnityEngine.Material UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// UnityEngine.ScaleMode UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::scaleMode
	int32_t ___scaleMode_7;
	// UnityEngine.Color UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::playmodeTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_8;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::topLeftRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius_9;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::topRightRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius_10;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::bottomRightRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius_11;
	// UnityEngine.Vector2 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::bottomLeftRadius
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius_12;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::leftSlice
	int32_t ___leftSlice_13;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::topSlice
	int32_t ___topSlice_14;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::rightSlice
	int32_t ___rightSlice_15;
	// System.Int32 UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::bottomSlice
	int32_t ___bottomSlice_16;
	// System.Single UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::sliceScale
	float ___sliceScale_17;
	// UnityEngine.Rect UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::spriteGeomRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect_18;
	// UnityEngine.UIElements.ColorPage UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::colorPage
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage_19;
	// UnityEngine.UIElements.MeshGenerationContext/MeshFlags UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::meshFlags
	int32_t ___meshFlags_20;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams
struct RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshaled_pinvoke
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_4;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___vectorImage_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	int32_t ___scaleMode_7;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius_11;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius_12;
	int32_t ___leftSlice_13;
	int32_t ___topSlice_14;
	int32_t ___rightSlice_15;
	int32_t ___bottomSlice_16;
	float ___sliceScale_17;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect_18;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_pinvoke ___colorPage_19;
	int32_t ___meshFlags_20;
};
// Native definition for COM marshalling of UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams
struct RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B_marshaled_com
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uv_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture_3;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_4;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___vectorImage_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	int32_t ___scaleMode_7;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___playmodeTintColor_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topLeftRadius_9;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___topRightRadius_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomRightRadius_11;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bottomLeftRadius_12;
	int32_t ___leftSlice_13;
	int32_t ___topSlice_14;
	int32_t ___rightSlice_15;
	int32_t ___bottomSlice_16;
	float ___sliceScale_17;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___spriteGeomRect_18;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0_marshaled_com ___colorPage_19;
	int32_t ___meshFlags_20;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.UIElements.UIR.RenderChain
struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363  : public RuntimeObject
{
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChain::m_FirstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___m_FirstCommand_0;
	// UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking UnityEngine.UIElements.UIR.RenderChain::m_DirtyTracker
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4 ___m_DirtyTracker_1;
	// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.RenderChainCommand> UnityEngine.UIElements.UIR.RenderChain::m_CommandPool
	LinkedPool_1_t2089E962DBA7DCED47F5B21A93012A52E885E94F* ___m_CommandPool_2;
	// UnityEngine.UIElements.UIR.BasicNodePool`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChain::m_TexturePool
	BasicNodePool_1_tEF610BEFE1094E5737DC6F71292C727C8FFD0828* ___m_TexturePool_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain/RenderNodeData> UnityEngine.UIElements.UIR.RenderChain::m_RenderNodesData
	List_1_tAF3B3F03351330B5C2EA012DB4C7E417DC6551AB* ___m_RenderNodesData_4;
	// UnityEngine.Shader UnityEngine.UIElements.UIR.RenderChain::m_DefaultShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultShader_5;
	// UnityEngine.Shader UnityEngine.UIElements.UIR.RenderChain::m_DefaultWorldSpaceShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultWorldSpaceShader_6;
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain::m_DefaultMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultMat_7;
	// UnityEngine.Material UnityEngine.UIElements.UIR.RenderChain::m_DefaultWorldSpaceMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_DefaultWorldSpaceMat_8;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::m_BlockDirtyRegistration
	bool ___m_BlockDirtyRegistration_9;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_StaticIndex
	int32_t ___m_StaticIndex_10;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_ActiveRenderNodes
	int32_t ___m_ActiveRenderNodes_11;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_CustomMaterialCommands
	int32_t ___m_CustomMaterialCommands_12;
	// UnityEngine.UIElements.UIR.ChainBuilderStats UnityEngine.UIElements.UIR.RenderChain::m_Stats
	ChainBuilderStats_t6E755490CE0B312AE16FEBC6734C7F2836A8067C ___m_Stats_13;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChain::m_StatsElementsAdded
	uint32_t ___m_StatsElementsAdded_14;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChain::m_StatsElementsRemoved
	uint32_t ___m_StatsElementsRemoved_15;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChain::m_FirstTextElement
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_FirstTextElement_16;
	// UnityEngine.UIElements.UIR.Implementation.UIRTextUpdatePainter UnityEngine.UIElements.UIR.RenderChain::m_TextUpdatePainter
	UIRTextUpdatePainter_t4C6DD44519F677FBCFCB2B6D38C129BB8E21460F* ___m_TextUpdatePainter_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_TextElementCount
	int32_t ___m_TextElementCount_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_DirtyTextStartIndex
	int32_t ___m_DirtyTextStartIndex_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChain::m_DirtyTextRemaining
	int32_t ___m_DirtyTextRemaining_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::m_FontWasReset
	bool ___m_FontWasReset_21;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.VisualElement,UnityEngine.Vector2> UnityEngine.UIElements.UIR.RenderChain::m_LastGroupTransformElementScale
	Dictionary_2_t2E2FD115F34FFA7AE5B80FD5398843049FCBF05E* ___m_LastGroupTransformElementScale_22;
	// UnityEngine.UIElements.TextureRegistry UnityEngine.UIElements.UIR.RenderChain::m_TextureRegistry
	TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* ___m_TextureRegistry_23;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_31;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.UIR.RenderChain::<panel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CpanelU3Ek__BackingField_33;
	// UnityEngine.UIElements.UIR.UIRenderDevice UnityEngine.UIElements.UIR.RenderChain::<device>k__BackingField
	UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* ___U3CdeviceU3Ek__BackingField_34;
	// UnityEngine.UIElements.AtlasBase UnityEngine.UIElements.UIR.RenderChain::<atlas>k__BackingField
	AtlasBase_t196C45243F41C19DC6258965057BBAA150D278BC* ___U3CatlasU3Ek__BackingField_35;
	// UnityEngine.UIElements.UIR.VectorImageManager UnityEngine.UIElements.UIR.RenderChain::<vectorImageManager>k__BackingField
	VectorImageManager_tBABA8290D62F9BDB5DCE3CC8FDA877915D1DBFED* ___U3CvectorImageManagerU3Ek__BackingField_36;
	// UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator UnityEngine.UIElements.UIR.RenderChain::shaderInfoAllocator
	UIRVEShaderInfoAllocator_t7A9BCF1924EA027462B8DBBAC7B15BCBCB5CC3BF ___shaderInfoAllocator_37;
	// UnityEngine.UIElements.UIR.Implementation.UIRStylePainter UnityEngine.UIElements.UIR.RenderChain::<painter>k__BackingField
	UIRStylePainter_t406D6C9F30B975CCE0D55D800B5A97504F26FEC8* ___U3CpainterU3Ek__BackingField_38;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::<drawStats>k__BackingField
	bool ___U3CdrawStatsU3Ek__BackingField_39;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChain::<drawInCameras>k__BackingField
	bool ___U3CdrawInCamerasU3Ek__BackingField_40;
};

struct RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerProcess
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerProcess_24;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerClipProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerClipProcessing_25;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerOpacityProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerOpacityProcessing_26;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerColorsProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerColorsProcessing_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerTransformProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTransformProcessing_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerVisualsProcessing
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerVisualsProcessing_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.RenderChain::s_MarkerTextRegen
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTextRegen_30;
	// System.Action UnityEngine.UIElements.UIR.RenderChain::OnPreRender
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnPreRender_32;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.UIElements.VectorImage
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D UnityEngine.UIElements.VectorImage::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_4;
	// UnityEngine.UIElements.VectorImageVertex[] UnityEngine.UIElements.VectorImage::vertices
	VectorImageVertexU5BU5D_tA19C37074824265F1A5684A6F2C156559455C1C4* ___vertices_5;
	// System.UInt16[] UnityEngine.UIElements.VectorImage::indices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices_6;
	// UnityEngine.UIElements.GradientSettings[] UnityEngine.UIElements.VectorImage::settings
	GradientSettingsU5BU5D_t5A316EDE81269563C087800A519341276F98AF9C* ___settings_7;
	// UnityEngine.Vector2 UnityEngine.UIElements.VectorImage::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_8;
};

// UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator
struct Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
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
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.Vertex[]
struct VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 m_Items[1];

	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.VectorImageVertex[]
struct VectorImageVertexU5BU5D_tA19C37074824265F1A5684A6F2C156559455C1C4  : public RuntimeArray
{
	ALIGN_FIELD (8) VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 m_Items[1];

	inline VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.UIR.MeshBuilder/VertexClipEdge[]
struct VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA  : public RuntimeArray
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
// UnityEngine.UIElements.TextureId[]
struct TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 m_Items[1];

	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIElements.UIR.Tessellation/Edges[]
struct EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918  : public RuntimeArray
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


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, int32_t ___index0, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___value1, const RuntimeMethod* method) ;
// T Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<UnityEngine.UIElements.Vertex>(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_gshared (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___thisSlice0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<System.UInt16>(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___thisSlice0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// T Unity.Collections.NativeSlice`1<System.UInt16>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<System.UInt16>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29_gshared (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, int32_t ___index0, uint16_t ___value1, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Add(T)
inline void List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Count()
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::EnsureFits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_EnsureFits_mA40B328BCCF3E635059F1107E2996046913C0C0D (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, int32_t ___maxDepth0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___condition0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Item(System.Int32)
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::set_Item(System.Int32,T)
inline void List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___index0, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, int32_t, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::RegisterDirty(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.UIR.RenderDataDirtyTypes,UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_RegisterDirty_mA05BD098B12E91FCD1E35BE02443AC0FB1B923B3 (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ve0, int32_t ___dirtyTypes1, int32_t ___dirtyTypeClass2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::ClearDirty(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.UIR.RenderDataDirtyTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_ClearDirty_m66CB5F7F44F12DAC7A0047327EF41C147A72A879 (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ve0, int32_t ___dirtyTypesInverse1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_Reset_mBE958F05647E78766DD9422442D41B1DE0B4823C (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>::IndexOf(T)
inline int32_t List_1_IndexOf_mBD0E046855051C95C6F60B84C31E0F276730D92A (List_1_t7524385702B2ADF442BBE71121A26B337005726D* __this, RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7524385702B2ADF442BBE71121A26B337005726D*, RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>::set_Item(System.Int32,T)
inline void List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785 (List_1_t7524385702B2ADF442BBE71121A26B337005726D* __this, int32_t ___index0, RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7524385702B2ADF442BBE71121A26B337005726D*, int32_t, RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>::get_Count()
inline int32_t List_1_get_Count_mC51695DFAFC29F4B5685D76B45BC442D452542F5_inline (List_1_t7524385702B2ADF442BBE71121A26B337005726D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7524385702B2ADF442BBE71121A26B337005726D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>::Add(T)
inline void List_1_Add_m4F13B6BBBCEB7A4650B35737854BA4584BC931CF_inline (List_1_t7524385702B2ADF442BBE71121A26B337005726D* __this, RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7524385702B2ADF442BBE71121A26B337005726D*, RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>::get_Item(System.Int32)
inline RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* List_1_get_Item_m9D430824B0739628DB4BBEA6168580B462031C28 (List_1_t7524385702B2ADF442BBE71121A26B337005726D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* (*) (List_1_t7524385702B2ADF442BBE71121A26B337005726D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChain>::.ctor(System.Int32)
inline void List_1__ctor_m487D573029A34C484E237A844D3AAD9B0BFB5978 (List_1_t7524385702B2ADF442BBE71121A26B337005726D* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7524385702B2ADF442BBE71121A26B337005726D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4C2ADA9EDB62AAE44752E97EBEB51FD541B0420B (U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.RenderChainCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderChainCommand__ctor_m305982AFE24A773C052036C022B909ABC9FC6A1E (RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::get_lastClosingOrLastCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* RenderChainVEData_get_lastClosingOrLastCommand_mAF0E6BC5EDFE45CBF164F09688F4BFFF5E87EB8B (RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UIR.BMPAlloc::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BMPAlloc_IsValid_m648020D59EAA7E536876AD2E5774E91417A65BB2 (BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateBorder(UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateBorder_mFB532850EDA95480873CF193C67BA16857DC0DC6 (BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 ___borderParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams::HasRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectangleParams_HasRadius_mD5FCED05D5C5D320D0C3925667105DEFD0EDFC02 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* __this, float ___epsilon0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_m104C6E756E047921A2465E80732402920D968A29 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRect(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRect_m397D4BD73C8683BE9FA34DBA7EABFAEE10E3BAE7 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, bool ___computeUVs3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeQuad(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Color,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,UnityEngine.UIElements.ColorPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeQuad_mECA8030C1B4C490260452207F7BF876B260794A4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rcPosition0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rcTexCoord1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___posZ3, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeSlicedQuad(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams&,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeSlicedQuad_mF45C7A014855B61109445AF16038B1E443683CBB (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder::LimitTextVertices(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshBuilder_LimitTextVertices_mF8043A07B00C72B6B6C1C60DF0B05BD287B10DE7 (int32_t ___vertexCount0, bool ___logTruncation1, const RuntimeMethod* method) ;
// UnityEngine.UIElements.MeshWriteData UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::Allocate(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2 (AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, const RuntimeMethod* method) ;
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::ConvertTextVertexToUIRVertex(UnityEngine.TextCore.Text.MeshInfo,System.Int32,UnityEngine.Vector2,UnityEngine.UIElements.UIR.VertexFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_ConvertTextVertexToUIRVertex_m56B1A622BB3E92A7738DCFAFFDCECE410C7E059F (MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F ___info0, int32_t ___index1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset2, int32_t ___flags3, bool ___isDynamicColor4, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.MeshWriteData::SetNextVertex(UnityEngine.UIElements.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841 (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* __this, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___vertex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.MeshWriteData::SetNextIndex(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3 (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* __this, uint16_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::ConvertTextVertexToUIRVertex(UnityEngine.UIElements.TextVertex,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_ConvertTextVertexToUIRVertex_mDF83C6C2A53E005CA1765602AA87E116CF8B5364 (TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 ___textVertex0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>::get_Length()
inline int32_t NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2 (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, const RuntimeMethod*))NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>::set_Item(System.Int32,T)
inline void NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, int32_t ___index0, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___value1, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, int32_t, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7, const RuntimeMethod*))NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_gshared)(__this, ___index0, ___value1, method);
}
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.UIElements.MeshWriteData::get_uvRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D MeshWriteData_get_uvRegion_m6E543500740DE690E1C3DB46DACA44DE9F785353 (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.MeshWriteData::SetAllIndices(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshWriteData_SetAllIndices_m243F1994B53722F1B42639704E5194AC07309CC4 (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeVectorGraphicsStretchBackground(UnityEngine.UIElements.Vertex[],System.UInt16[],System.Single,System.Single,UnityEngine.Rect,UnityEngine.Rect,UnityEngine.ScaleMode,UnityEngine.Color,System.Int32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeVectorGraphicsStretchBackground_m7F6993CF84251938FE33076968FC50C1684C6FA3 (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___svgVertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___svgIndices1, float ___svgWidth2, float ___svgHeight3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect4, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___sourceUV5, int32_t ___scaleMode6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint7, int32_t ___settingIndexOffset8, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc9, int32_t* ___finalVertexCount10, int32_t* ___finalIndexCount11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeVectorGraphics9SliceBackground(UnityEngine.UIElements.Vertex[],System.UInt16[],System.Single,System.Single,UnityEngine.Rect,UnityEngine.Vector4,System.Boolean,UnityEngine.Color,System.Int32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146 (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___svgVertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___svgIndices1, float ___svgWidth2, float ___svgHeight3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sliceLTRB5, bool ___stretch6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint7, int32_t ___settingIndexOffset8, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc9, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) ;
// UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts UnityEngine.UIElements.UIR.MeshBuilder::UpperBoundApproximateRectClippingResults(UnityEngine.UIElements.Vertex[],System.UInt16[],UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC MeshBuilder_UpperBoundApproximateRectClippingResults_m56B7E6ACB2F05BEFD9E5631522FB2523A2062ABF (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___vertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipRectMinMax2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.MeshWriteData UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator::Invoke(System.UInt32,System.UInt32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_inline (Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::RectClip(UnityEngine.UIElements.Vertex[],System.UInt16[],UnityEngine.Vector4,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_RectClip_m2EE47B978E3359FC6D01EEAE37979EDBE3F3F6E9 (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___vertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipRectMinMax2, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mwd3, ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC ___cc4, int32_t* ___newVertexCount5, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// T Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>::get_Item(System.Int32)
inline Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*, int32_t, const RuntimeMethod*))NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.UIElements.MeshWriteData::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshWriteData_get_vertexCount_mC7F08B0C2375FE64C467AB543850F262EB0E5F23 (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.MeshWriteData::get_indexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshWriteData_get_indexCount_m72A293A2983CF6CA09F2C066B71E227D8C9447F3 (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::LerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::LerpUnclamped(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::SplitTriangle(UnityEngine.UIElements.Vertex*,System.UInt16*,System.Int32&,System.Int32,System.Int32&,System.Single,System.Single,UnityEngine.Vector4,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vertices0, uint16_t* ___indices1, int32_t* ___vertexCount2, int32_t ___indexToProcess3, int32_t* ___indexCount4, float ___svgWidth5, float ___svgHeight6, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sliceLTRB7, int32_t ___sliceIndex8, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::ScaleSplittedTriangles(UnityEngine.UIElements.Vertex*,System.Int32,System.Single,System.Single,UnityEngine.Rect,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_ScaleSplittedTriangles_m3A2C3C563708C686D06663BB7B367D927E87E679 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vertices0, int32_t ___vertexCount1, float ___svgWidth2, float ___svgHeight3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sliceLTRB5, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::RectClipTriangle(UnityEngine.UIElements.Vertex*,System.UInt16*,UnityEngine.Vector4,UnityEngine.UIElements.MeshWriteData,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, uint16_t* ___it1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipRectMinMax2, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mwd3, uint16_t* ___nextNewVertex4, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<UnityEngine.UIElements.Vertex>(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8 (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___thisSlice0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 (*) (NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t, int32_t, const RuntimeMethod*))NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_gshared)(___thisSlice0, ___start1, ___length2, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<System.UInt16>(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0 (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___thisSlice0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t, int32_t, const RuntimeMethod*))NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_gshared)(___thisSlice0, ___start1, ___length2, method);
}
// UnityEngine.Vector3 UnityEngine.UIElements.UIR.MeshBuilder::GetVertexBaryCentricCoordinates(UnityEngine.UIElements.Vertex*,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshBuilder_GetVertexBaryCentricCoordinates_m53FD39E6E64880162354E8141090DE063DA66C17 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, float ___x1, float ___y2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::InterpolateVertexInTriangle(UnityEngine.UIElements.Vertex*,System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_InterpolateVertexInTriangle_mA62F286B6C128064812E5EFFDC9D19DED24C3F8D (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, float ___x1, float ___y2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___uvw3, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.UIR.MeshBuilder::IntersectSegments(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshBuilder_IntersectSegments_mC8F693B9F4F4C7183F6FC2FF5E60364355F5BB62 (float ___ax0, float ___ay1, float ___bx2, float ___by3, float ___cx4, float ___cy5, float ___dx6, float ___dy7, const RuntimeMethod* method) ;
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::InterpolateVertexInTriangleEdge(UnityEngine.UIElements.Vertex*,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_InterpolateVertexInTriangleEdge_mEF393B5D7F6842244D01A9CEB4899024A5493F8F (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, int32_t ___e01, int32_t ___e12, float ___t3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::get_shaderModelIs35()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIRenderDevice_get_shaderModelIs35_mB1DC4A0F22A69064E426271B7AB568046A1342D6 (const RuntimeMethod* method) ;
// UnityEngine.UIElements.TextureRegistry UnityEngine.UIElements.TextureRegistry::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* TextureRegistry_get_instance_m4E974FC5F20C8DD77920F121ECD4F26FAC01385F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager_Reset_m43FECB6D32D307D151C8173B6223C7E2BF4484F2 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::set_FreeSlots(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureSlotManager_set_FreeSlots_m7400CBFEF9DC81345E311C521163C76973DC4255_inline (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.TextureId::get_index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureId_get_index_m4EA4D8C27C1A2E568803548A40905B45C5626C27 (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::get_FreeSlots()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureSlotManager_get_FreeSlots_m07D624EAB6ED9D3B1F4B4EF33DB2FAB1545871D2_inline (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.UIElements.TextureRegistry::GetTexture(UnityEngine.UIElements.TextureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* TextureRegistry_GetTexture_mB02C07261977269B6661D7A6D95ED757178676AE (TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___id0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::MarkUsed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureSlotManager_MarkUsed_m6012C3110EBDC75E7B970C814CAA7147D9378126_inline (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, int32_t ___slotIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.TextureId::ConvertToGpu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TextureId_ConvertToGpu_m7631D660D6ACC5564194AE253544BE092BE83CC3 (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m39F531D3F35D6C5B661A7B4F07DD7B8ACC22627F (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.Int32,UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m5C0A3017A7EA9EE5F01295E346EA72D70A8BD682 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___values1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Min(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedCorners(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams&,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedCorners_mE4FDA1334E9D9572F36DE80E751A2F38471F65E6 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* ___rectParams0, float ___posZ1, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh2, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage3, uint16_t* ___vertexCount4, uint16_t* ___indexCount5, bool ___countOnly6, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::ComputeUVs(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_ComputeUVs_m32B3A1353CB1347FAFEF073B93338348CC8ADC5E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___tessellatedRect0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___textureRect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uvRegion2, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdges1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color2, float ___posZ3, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, uint16_t* ___vertexCount6, uint16_t* ___indexCount7, bool ___countOnly8, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedBorders(UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams&,System.Single,UnityEngine.UIElements.MeshWriteData,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedBorders_m7E0DC93672B14F9B3029482C59EE76E85A9C390F (BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* ___border0, float ___posZ1, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh2, uint16_t* ___vertexCount3, uint16_t* ___indexCount4, bool ___countOnly5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedCorner(UnityEngine.Rect,UnityEngine.Color32,System.Single,UnityEngine.Vector2,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedCorner_m432D266D245B98E45E1C566F33265F912773E062 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, float ___posZ2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius3, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, uint16_t* ___vertexCount6, uint16_t* ___indexCount7, bool ___countOnly8, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::MirrorVertices(UnityEngine.Rect,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices1, int32_t ___vertexStart2, int32_t ___vertexCount3, bool ___flipHorizontal4, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::FlipWinding(Unity.Collections.NativeSlice`1<System.UInt16>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_FlipWinding_mEB8CE9D883238F9540490218B02DE9D782D52962 (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices0, int32_t ___indexStart1, int32_t ___indexCount2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedBorder(UnityEngine.Rect,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedBorder_mCC519D9B6BDD483BDC356ED3377A05B82D3357F2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor2, float ___posZ3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius4, float ___leftWidth5, float ___topWidth6, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh7, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage9, uint16_t* ___vertexCount10, uint16_t* ___indexCount11, bool ___countOnly12, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateFilledFan(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateFilledFan_m271D00C508777D21DF8A27A6185E2DB572DA2653 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___miterOffset2, float ___leftWidth3, float ___topWidth4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor5, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor6, float ___posZ7, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage9, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage10, uint16_t* ___vertexCount11, uint16_t* ___indexCount12, bool ___countOnly13, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateStraightBorder(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,System.Single,UnityEngine.Color,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateStraightBorder_m59F60FA5C0C807ADDAA029B68D0A663245683313 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdge1, float ___miterOffset2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, float ___posZ4, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh5, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage6, uint16_t* ___vertexCount7, uint16_t* ___indexCount8, bool ___countOnly9, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.UIR.Tessellation::LooseCompare(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60 (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateBorderedFan(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateBorderedFan_mCA1CD428750B3AC0DDE19DF24691875CB13C1621 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___outerRadius1, float ___leftWidth2, float ___topWidth3, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor5, float ___posZ6, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh7, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage9, uint16_t* ___vertexCount10, uint16_t* ___indexCount11, bool ___countOnly12, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateComplexBorderCorner(UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius1, float ___leftWidth2, float ___topWidth3, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor5, float ___posZ6, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh7, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage9, uint16_t* ___vertexCount10, uint16_t* ___indexCount11, bool ___countOnly12, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UIElements.UIR.Tessellation::IntersectLines(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tessellation_IntersectLines_mA35A2C85B7A42DDE7189849A10B174D9B052F419 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p22, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p33, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,UnityEngine.Vector2*,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdges1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___offsets2, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color3, float ___posZ4, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh5, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage6, uint16_t* ___vertexCount7, uint16_t* ___indexCount8, bool ___countOnly9, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.Rect,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_mBA95C4CE57032539D4CF761969DBADEACC2D66D2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, float ___posZ2, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh3, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage4, uint16_t* ___vertexCount5, uint16_t* ___indexCount6, bool ___countOnly7, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.UIR.Tessellation::EdgesCount(UnityEngine.UIElements.UIR.Tessellation/Edges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellation_EdgesCount_m67F074A06762653A4C2CA96C3F4308075873BBC4 (int32_t ___edges0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuadSingleEdge(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuadSingleEdge_m667E57661D5938E4A0F4A52352A3565D7F684238 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdge1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color2, float ___posZ3, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, uint16_t* ___vertexCount6, uint16_t* ___indexCount7, bool ___countOnly8, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::EncodeStraightArc(UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_EncodeStraightArc_m7C2D08A8CB1138E3A897C0FFC6F82911D2CAB404 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v00, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v11, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___center2, float ___radius3, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::ExpandTriangle(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_ExpandTriangle_m04E6E8DC041BCF5555631AD7B71F56E585310EB7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___v11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center2, float ___factor3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.UIElements.UIR.Tessellation::GetInterpolatedCircle(UnityEngine.Vector2,UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v01, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v12, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v23, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Tessellation::ComputeBarycentricCoordinates(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_ComputeBarycentricCoordinates_m3B250566AFA7401F66D9B6B610F1E2EBD62F80E8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c3, float* ___u4, float* ___v5, float* ___w6, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// T Unity.Collections.NativeSlice`1<System.UInt16>::get_Item(System.Int32)
inline uint16_t NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*, int32_t, const RuntimeMethod*))NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D_gshared)(__this, ___index0, method);
}
// System.Void Unity.Collections.NativeSlice`1<System.UInt16>::set_Item(System.Int32,T)
inline void NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29 (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* __this, int32_t ___index0, uint16_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*, int32_t, uint16_t, const RuntimeMethod*))NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29_gshared)(__this, ___index0, ___value1, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke(const DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4& unmarshaled, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___heads_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'heads' of type 'DepthOrderedDirtyTracking'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___heads_0Exception, NULL);
}
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_back(const DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_pinvoke& marshaled, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4& unmarshaled)
{
	Exception_t* ___heads_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'heads' of type 'DepthOrderedDirtyTracking'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___heads_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_pinvoke_cleanup(DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_com(const DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4& unmarshaled, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_com& marshaled)
{
	Exception_t* ___heads_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'heads' of type 'DepthOrderedDirtyTracking'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___heads_0Exception, NULL);
}
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_com_back(const DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_com& marshaled, DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4& unmarshaled)
{
	Exception_t* ___heads_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'heads' of type 'DepthOrderedDirtyTracking'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___heads_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
IL2CPP_EXTERN_C void DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshal_com_cleanup(DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::EnsureFits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_EnsureFits_mA40B328BCCF3E635059F1107E2996046913C0C0D (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, int32_t ___maxDepth0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		goto IL_001f;
	}

IL_0003:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_0 = __this->___heads_0;
		NullCheck(L_0);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_0, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_1 = __this->___tails_1;
		NullCheck(L_1);
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_1, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
	}

IL_001f:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_2 = __this->___heads_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_2, List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		int32_t L_4 = ___maxDepth0;
		V_0 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void DepthOrderedDirtyTracking_EnsureFits_mA40B328BCCF3E635059F1107E2996046913C0C0D_AdjustorThunk (RuntimeObject* __this, int32_t ___maxDepth0, const RuntimeMethod* method)
{
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4*>(__this + _offset);
	DepthOrderedDirtyTracking_EnsureFits_mA40B328BCCF3E635059F1107E2996046913C0C0D(_thisAdjusted, ___maxDepth0, method);
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::RegisterDirty(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.UIR.RenderDataDirtyTypes,UnityEngine.UIElements.UIR.RenderDataDirtyTypeClasses)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_RegisterDirty_mA05BD098B12E91FCD1E35BE02443AC0FB1B923B3 (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ve0, int32_t ___dirtyTypes1, int32_t ___dirtyTypeClass2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_4 = NULL;
	int32_t G_B2_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* G_B6_2 = NULL;
	{
		int32_t L_0 = ___dirtyTypes1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0), NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___ve0;
		NullCheck(L_1);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_2 = (&L_1->___renderChainData_21);
		int32_t L_3 = L_2->___hierarchyDepth_6;
		V_0 = L_3;
		int32_t L_4 = ___dirtyTypeClass2;
		V_1 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___minDepths_2;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___minDepths_2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		G_B1_0 = L_6;
		G_B1_1 = L_5;
		if ((((int32_t)L_7) < ((int32_t)L_11)))
		{
			G_B2_0 = L_6;
			G_B2_1 = L_5;
			goto IL_0035;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___minDepths_2;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B3_0 = L_15;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0036;
	}

IL_0035:
	{
		int32_t L_16 = V_0;
		G_B3_0 = L_16;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0036:
	{
		NullCheck(G_B3_2);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (int32_t)G_B3_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___maxDepths_3;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->___maxDepths_3;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		G_B4_0 = L_18;
		G_B4_1 = L_17;
		if ((((int32_t)L_19) > ((int32_t)L_23)))
		{
			G_B5_0 = L_18;
			G_B5_1 = L_17;
			goto IL_0053;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->___maxDepths_3;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		G_B6_0 = L_27;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0054;
	}

IL_0053:
	{
		int32_t L_28 = V_0;
		G_B6_0 = L_28;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0054:
	{
		NullCheck(G_B6_2);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (int32_t)G_B6_0);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_29 = ___ve0;
		NullCheck(L_29);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_30 = (&L_29->___renderChainData_21);
		int32_t L_31 = L_30->___dirtiedValues_7;
		V_2 = (bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0);
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_007a;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33 = ___ve0;
		NullCheck(L_33);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_34 = (&L_33->___renderChainData_21);
		int32_t* L_35 = (&L_34->___dirtiedValues_7);
		int32_t* L_36 = L_35;
		int32_t L_37 = *((int32_t*)L_36);
		int32_t L_38 = ___dirtyTypes1;
		*((int32_t*)L_36) = (int32_t)((int32_t)(L_37|(int32_t)L_38));
		goto IL_00f9;
	}

IL_007a:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39 = ___ve0;
		NullCheck(L_39);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_40 = (&L_39->___renderChainData_21);
		int32_t L_41 = ___dirtyTypes1;
		L_40->___dirtiedValues_7 = L_41;
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_42 = __this->___tails_1;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44;
		L_44 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_42, L_43, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		V_3 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_44) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_45 = V_3;
		if (!L_45)
		{
			goto IL_00d9;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_46 = __this->___tails_1;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48;
		L_48 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_46, L_47, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		NullCheck(L_48);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_49 = (&L_48->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_50 = ___ve0;
		L_49->___nextDirty_5 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->___nextDirty_5), (void*)L_50);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = ___ve0;
		NullCheck(L_51);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_52 = (&L_51->___renderChainData_21);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_53 = __this->___tails_1;
		int32_t L_54 = V_0;
		NullCheck(L_53);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55;
		L_55 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_53, L_54, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		L_52->___prevDirty_4 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&L_52->___prevDirty_4), (void*)L_55);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_56 = __this->___tails_1;
		int32_t L_57 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58 = ___ve0;
		NullCheck(L_56);
		List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71(L_56, L_57, L_58, List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
		goto IL_00f9;
	}

IL_00d9:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_59 = __this->___heads_0;
		int32_t L_60 = V_0;
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_61 = __this->___tails_1;
		int32_t L_62 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = ___ve0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_64 = L_63;
		V_4 = L_64;
		NullCheck(L_61);
		List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71(L_61, L_62, L_64, List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65 = V_4;
		NullCheck(L_59);
		List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71(L_59, L_60, L_65, List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
	}

IL_00f9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void DepthOrderedDirtyTracking_RegisterDirty_mA05BD098B12E91FCD1E35BE02443AC0FB1B923B3_AdjustorThunk (RuntimeObject* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ve0, int32_t ___dirtyTypes1, int32_t ___dirtyTypeClass2, const RuntimeMethod* method)
{
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4*>(__this + _offset);
	DepthOrderedDirtyTracking_RegisterDirty_mA05BD098B12E91FCD1E35BE02443AC0FB1B923B3(_thisAdjusted, ___ve0, ___dirtyTypes1, ___dirtyTypeClass2, method);
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::ClearDirty(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.UIR.RenderDataDirtyTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_ClearDirty_m66CB5F7F44F12DAC7A0047327EF41C147A72A879 (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ve0, int32_t ___dirtyTypesInverse1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_5 = NULL;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___ve0;
		NullCheck(L_0);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_1 = (&L_0->___renderChainData_21);
		int32_t L_2 = L_1->___dirtiedValues_7;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0), NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = ___ve0;
		NullCheck(L_3);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_4 = (&L_3->___renderChainData_21);
		int32_t* L_5 = (&L_4->___dirtiedValues_7);
		int32_t* L_6 = L_5;
		int32_t L_7 = *((int32_t*)L_6);
		int32_t L_8 = ___dirtyTypesInverse1;
		*((int32_t*)L_6) = (int32_t)((int32_t)(L_7&(int32_t)L_8));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = ___ve0;
		NullCheck(L_9);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_10 = (&L_9->___renderChainData_21);
		int32_t L_11 = L_10->___dirtiedValues_7;
		V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_0168;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = ___ve0;
		NullCheck(L_13);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_14 = (&L_13->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = L_14->___prevDirty_4;
		V_1 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17 = ___ve0;
		NullCheck(L_17);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_18 = (&L_17->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = L_18->___prevDirty_4;
		NullCheck(L_19);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_20 = (&L_19->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_21 = ___ve0;
		NullCheck(L_21);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_22 = (&L_21->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = L_22->___nextDirty_5;
		L_20->___nextDirty_5 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___nextDirty_5), (void*)L_23);
	}

IL_006d:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = ___ve0;
		NullCheck(L_24);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_25 = (&L_24->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = L_25->___nextDirty_5;
		V_2 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_26) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_009f;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = ___ve0;
		NullCheck(L_28);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_29 = (&L_28->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = L_29->___nextDirty_5;
		NullCheck(L_30);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_31 = (&L_30->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_32 = ___ve0;
		NullCheck(L_32);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_33 = (&L_32->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_34 = L_33->___prevDirty_4;
		L_31->___prevDirty_4 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___prevDirty_4), (void*)L_34);
	}

IL_009f:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_35 = __this->___tails_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = ___ve0;
		NullCheck(L_36);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_37 = (&L_36->___renderChainData_21);
		int32_t L_38 = L_37->___hierarchyDepth_6;
		NullCheck(L_35);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39;
		L_39 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_35, L_38, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = ___ve0;
		V_3 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_39) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_40))? 1 : 0);
		bool L_41 = V_3;
		if (!L_41)
		{
			goto IL_00f4;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = ___ve0;
		NullCheck(L_42);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_43 = (&L_42->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44 = L_43->___nextDirty_5;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_44) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), NULL);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_45 = __this->___tails_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_46 = ___ve0;
		NullCheck(L_46);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_47 = (&L_46->___renderChainData_21);
		int32_t L_48 = L_47->___hierarchyDepth_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = ___ve0;
		NullCheck(L_49);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_50 = (&L_49->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = L_50->___prevDirty_4;
		NullCheck(L_45);
		List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71(L_45, L_48, L_51, List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
	}

IL_00f4:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_52 = __this->___heads_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = ___ve0;
		NullCheck(L_53);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_54 = (&L_53->___renderChainData_21);
		int32_t L_55 = L_54->___hierarchyDepth_6;
		NullCheck(L_52);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_56;
		L_56 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_52, L_55, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_57 = ___ve0;
		V_4 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_56) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_57))? 1 : 0);
		bool L_58 = V_4;
		if (!L_58)
		{
			goto IL_014b;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = ___ve0;
		NullCheck(L_59);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_60 = (&L_59->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = L_60->___prevDirty_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_61) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), NULL);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_62 = __this->___heads_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = ___ve0;
		NullCheck(L_63);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_64 = (&L_63->___renderChainData_21);
		int32_t L_65 = L_64->___hierarchyDepth_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = ___ve0;
		NullCheck(L_66);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_67 = (&L_66->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_68 = L_67->___nextDirty_5;
		NullCheck(L_62);
		List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71(L_62, L_65, L_68, List_1_set_Item_mCA792DD275D3805B46BC088A4D746C15921A8F71_RuntimeMethod_var);
	}

IL_014b:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_69 = ___ve0;
		NullCheck(L_69);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_70 = (&L_69->___renderChainData_21);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_71 = ___ve0;
		NullCheck(L_71);
		RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* L_72 = (&L_71->___renderChainData_21);
		V_5 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
		L_72->___nextDirty_5 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_72->___nextDirty_5), (void*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_73 = V_5;
		L_70->___prevDirty_4 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&L_70->___prevDirty_4), (void*)L_73);
	}

IL_0168:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void DepthOrderedDirtyTracking_ClearDirty_m66CB5F7F44F12DAC7A0047327EF41C147A72A879_AdjustorThunk (RuntimeObject* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___ve0, int32_t ___dirtyTypesInverse1, const RuntimeMethod* method)
{
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4*>(__this + _offset);
	DepthOrderedDirtyTracking_ClearDirty_m66CB5F7F44F12DAC7A0047327EF41C147A72A879(_thisAdjusted, ___ve0, ___dirtyTypesInverse1, method);
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthOrderedDirtyTracking_Reset_mBE958F05647E78766DD9422442D41B1DE0B4823C (DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_0005:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___minDepths_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)((int32_t)2147483647LL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___maxDepths_3;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)((int32_t)-2147483648LL));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0025:
	{
		int32_t L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___minDepths_2;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void DepthOrderedDirtyTracking_Reset_mBE958F05647E78766DD9422442D41B1DE0B4823C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DepthOrderedDirtyTracking_t7972148BB4524E0E788C8D94A005C3BAF8C189A4*>(__this + _offset);
	DepthOrderedDirtyTracking_Reset_mBE958F05647E78766DD9422442D41B1DE0B4823C(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator::AllocateIndex(UnityEngine.UIElements.UIR.RenderChain)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderChainStaticIndexAllocator_AllocateIndex_mBF976AD6DA6D147117B24802C8EDE76AC7D59368 (RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* ___renderChain0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4F13B6BBBCEB7A4650B35737854BA4584BC931CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mBD0E046855051C95C6F60B84C31E0F276730D92A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC51695DFAFC29F4B5685D76B45BC442D452542F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_0 = ((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_IndexOf_mBD0E046855051C95C6F60B84C31E0F276730D92A(L_0, (RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363*)NULL, List_1_IndexOf_mBD0E046855051C95C6F60B84C31E0F276730D92A_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_4 = ((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0;
		int32_t L_5 = V_0;
		RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* L_6 = ___renderChain0;
		NullCheck(L_4);
		List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785(L_4, L_5, L_6, List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785_RuntimeMethod_var);
		goto IL_0040;
	}

IL_0027:
	{
		il2cpp_codegen_runtime_class_init_inline(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_7 = ((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mC51695DFAFC29F4B5685D76B45BC442D452542F5_inline(L_7, List_1_get_Count_mC51695DFAFC29F4B5685D76B45BC442D452542F5_RuntimeMethod_var);
		V_0 = L_8;
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_9 = ((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0;
		RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* L_10 = ___renderChain0;
		NullCheck(L_9);
		List_1_Add_m4F13B6BBBCEB7A4650B35737854BA4584BC931CF_inline(L_9, L_10, List_1_Add_m4F13B6BBBCEB7A4650B35737854BA4584BC931CF_RuntimeMethod_var);
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_0044;
	}

IL_0044:
	{
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator::FreeIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderChainStaticIndexAllocator_FreeIndex_m57AA0D2E3D14295C47E050129470C56A8EBA4870 (int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_0 = ((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785(L_0, L_1, (RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363*)NULL, List_1_set_Item_m26DF065D5048D6A31DEFF667B2BC3EFBF166B785_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.UIElements.UIR.RenderChain UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator::AccessIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* RenderChainStaticIndexAllocator_AccessIndex_m2AF4DD0118F29626720B97385A935265E2A964F6 (int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9D430824B0739628DB4BBEA6168580B462031C28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_0 = ((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* L_2;
		L_2 = List_1_get_Item_m9D430824B0739628DB4BBEA6168580B462031C28(L_0, L_1, List_1_get_Item_m9D430824B0739628DB4BBEA6168580B462031C28_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RenderChain_tCCA9360D5721E675E5632E4B2F4AF7CDC453E363* L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderChainStaticIndexAllocator__cctor_mB19112E72CE7D200DFFD2B6F06C869F9577CE63B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m487D573029A34C484E237A844D3AAD9B0BFB5978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7524385702B2ADF442BBE71121A26B337005726D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7524385702B2ADF442BBE71121A26B337005726D* L_0 = (List_1_t7524385702B2ADF442BBE71121A26B337005726D*)il2cpp_codegen_object_new(List_1_t7524385702B2ADF442BBE71121A26B337005726D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m487D573029A34C484E237A844D3AAD9B0BFB5978(L_0, 4, List_1__ctor_m487D573029A34C484E237A844D3AAD9B0BFB5978_RuntimeMethod_var);
		((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_StaticFields*)il2cpp_codegen_static_fields_for(RenderChainStaticIndexAllocator_tC0548F16A13EF0B0BF4612F39E619B1A950FD26F_il2cpp_TypeInfo_var))->___renderChains_0), (void*)L_0);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke(const RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE& unmarshaled, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___standardMaterial_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'standardMaterial' of type 'RenderNodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___standardMaterial_0Exception, NULL);
}
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_back(const RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke& marshaled, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE& unmarshaled)
{
	Exception_t* ___standardMaterial_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'standardMaterial' of type 'RenderNodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___standardMaterial_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_pinvoke_cleanup(RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_com(const RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE& unmarshaled, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com& marshaled)
{
	Exception_t* ___standardMaterial_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'standardMaterial' of type 'RenderNodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___standardMaterial_0Exception, NULL);
}
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_com_back(const RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com& marshaled, RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE& unmarshaled)
{
	Exception_t* ___standardMaterial_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'standardMaterial' of type 'RenderNodeData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___standardMaterial_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
IL2CPP_EXTERN_C void RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshal_com_cleanup(RenderNodeData_t7527D1643CC280CE2B2E40AB9F5154615B7A99AE_marshaled_com& marshaled)
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
// System.Void UnityEngine.UIElements.UIR.RenderChain/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0AFFFE887DD265CB5E9700B34900DE1631165718 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F* L_0 = (U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F*)il2cpp_codegen_object_new(U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4C2ADA9EDB62AAE44752E97EBEB51FD541B0420B(L_0, NULL);
		((U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4C2ADA9EDB62AAE44752E97EBEB51FD541B0420B (U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChain/<>c::<.ctor>b__37_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* U3CU3Ec_U3C_ctorU3Eb__37_0_m28CD5A0FEAC6F10F00FDB21510D8008FF143EB66 (U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* L_0 = (RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727*)il2cpp_codegen_object_new(RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RenderChainCommand__ctor_m305982AFE24A773C052036C022B909ABC9FC6A1E(L_0, NULL);
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.RenderChain/<>c::<.ctor>b__37_1(UnityEngine.UIElements.UIR.RenderChainCommand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__37_1_m65507AEC75FF5AD250FA84F253E6756253FA85D8 (U3CU3Ec_t4CDEEB9731E45F48B958EE6F7C3F31FA54D3093F* __this, RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___cmd0, const RuntimeMethod* method) 
{
	{
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
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChainVEData
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke(const RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847& unmarshaled, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke& marshaled)
{
	Exception_t* ___prev_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prev' of type 'RenderChainVEData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prev_0Exception, NULL);
}
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_back(const RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke& marshaled, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847& unmarshaled)
{
	Exception_t* ___prev_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prev' of type 'RenderChainVEData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prev_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChainVEData
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_pinvoke_cleanup(RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChainVEData
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_com(const RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847& unmarshaled, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com& marshaled)
{
	Exception_t* ___prev_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prev' of type 'RenderChainVEData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prev_0Exception, NULL);
}
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_com_back(const RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com& marshaled, RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847& unmarshaled)
{
	Exception_t* ___prev_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prev' of type 'RenderChainVEData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prev_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChainVEData
IL2CPP_EXTERN_C void RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshal_com_cleanup(RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com& marshaled)
{
}
// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::get_lastClosingOrLastCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* RenderChainVEData_get_lastClosingOrLastCommand_mAF0E6BC5EDFE45CBF164F09688F4BFFF5E87EB8B (RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* __this, const RuntimeMethod* method) 
{
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* V_0 = NULL;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* G_B2_0 = NULL;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* G_B1_0 = NULL;
	{
		RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* L_0 = __this->___lastClosingCommand_12;
		RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0011;
		}
	}
	{
		RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* L_2 = __this->___lastCommand_10;
		G_B2_0 = L_2;
	}

IL_0011:
	{
		V_0 = G_B2_0;
		goto IL_0014;
	}

IL_0014:
	{
		RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* RenderChainVEData_get_lastClosingOrLastCommand_mAF0E6BC5EDFE45CBF164F09688F4BFFF5E87EB8B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847*>(__this + _offset);
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* _returnValue;
	_returnValue = RenderChainVEData_get_lastClosingOrLastCommand_mAF0E6BC5EDFE45CBF164F09688F4BFFF5E87EB8B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::AllocatesID(UnityEngine.UIElements.UIR.BMPAlloc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderChainVEData_AllocatesID_m68C7BDB36734B4F1633D1501DD71165DF6EB4FAA (BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___alloc0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 L_0 = ___alloc0;
		uint8_t L_1 = L_0.___ownedState_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		bool L_2;
		L_2 = BMPAlloc_IsValid_m648020D59EAA7E536876AD2E5774E91417A65BB2((&___alloc0), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::InheritsID(UnityEngine.UIElements.UIR.BMPAlloc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderChainVEData_InheritsID_mBDD22C0EE688F7A369C8B6E83BEFCA9FD29CCD46 (BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___alloc0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 L_0 = ___alloc0;
		uint8_t L_1 = L_0.___ownedState_4;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		bool L_2;
		L_2 = BMPAlloc_IsValid_m648020D59EAA7E536876AD2E5774E91417A65BB2((&___alloc0), NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
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
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChainTextEntry
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke(const RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11& unmarshaled, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_pinvoke& marshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'RenderChainTextEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL);
}
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_back(const RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_pinvoke& marshaled, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11& unmarshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'RenderChainTextEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChainTextEntry
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_pinvoke_cleanup(RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.RenderChainTextEntry
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_com(const RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11& unmarshaled, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_com& marshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'RenderChainTextEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL);
}
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_com_back(const RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_com& marshaled, RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11& unmarshaled)
{
	Exception_t* ___command_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'command' of type 'RenderChainTextEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___command_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.RenderChainTextEntry
IL2CPP_EXTERN_C void RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshal_com_cleanup(RenderChainTextEntry_t3B07A86ED897E1859552D13B1CF046F585CF9D11_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.TextureEntry
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke(const TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128& unmarshaled, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_pinvoke& marshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'TextureEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_back(const TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_pinvoke& marshaled, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128& unmarshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'TextureEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.TextureEntry
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_pinvoke_cleanup(TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.TextureEntry
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_com(const TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128& unmarshaled, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_com& marshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'TextureEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_com_back(const TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_com& marshaled, TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128& unmarshaled)
{
	Exception_t* ___source_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'source' of type 'TextureEntry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___source_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.TextureEntry
IL2CPP_EXTERN_C void TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshal_com_cleanup(TextureEntry_tDA3A5BB083FA16C7123AF227C5D7F78860665128_marshaled_com& marshaled)
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
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeBorder(UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeBorder_m41B0B67E41490CAA008DA560BBF9A5BBE9C9EA2D (BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 ___borderParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_0 = ___borderParams0;
		float L_1 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_2 = ___meshAlloc2;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateBorder_mFB532850EDA95480873CF193C67BA16857DC0DC6(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeSolidRect(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeSolidRect_m3666B25BBD1D0E5670C23A72CC18EA3580064963 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_0 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		bool L_1;
		L_1 = RectangleParams_HasRadius_mD5FCED05D5C5D320D0C3925667105DEFD0EDFC02((&___rectParams0), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_3 = ___rectParams0;
		float L_4 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_5 = ___meshAlloc2;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m104C6E756E047921A2465E80732402920D968A29(L_3, L_4, L_5, NULL);
		goto IL_0029;
	}

IL_001f:
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_6 = ___rectParams0;
		float L_7 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_8 = ___meshAlloc2;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRect_m397D4BD73C8683BE9FA34DBA7EABFAEE10E3BAE7(L_6, L_7, L_8, (bool)0, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeTexturedRect(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,UnityEngine.UIElements.ColorPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeTexturedRect_m6394823991B5F8A499597B39138C33E09B67F485 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_0 = ___rectParams0;
		int32_t L_1 = L_0.___leftSlice_13;
		if ((!(((float)((float)L_1)) <= ((float)(1.0E-30f)))))
		{
			goto IL_003e;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_2 = ___rectParams0;
		int32_t L_3 = L_2.___topSlice_14;
		if ((!(((float)((float)L_3)) <= ((float)(1.0E-30f)))))
		{
			goto IL_003e;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_4 = ___rectParams0;
		int32_t L_5 = L_4.___rightSlice_15;
		if ((!(((float)((float)L_5)) <= ((float)(1.0E-30f)))))
		{
			goto IL_003e;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_6 = ___rectParams0;
		int32_t L_7 = L_6.___bottomSlice_16;
		G_B5_0 = ((((int32_t)((!(((float)((float)L_7)) <= ((float)(1.0E-30f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 0;
	}

IL_003f:
	{
		V_0 = (bool)G_B5_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_9 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		bool L_10;
		L_10 = RectangleParams_HasRadius_mD5FCED05D5C5D320D0C3925667105DEFD0EDFC02((&___rectParams0), L_9, NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_12 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = L_12.___rect_0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_14 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15 = L_14.___uv_1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_16 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16.___color_2;
		float L_18 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_19 = ___meshAlloc2;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_20 = ___colorPage3;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_MakeQuad_mECA8030C1B4C490260452207F7BF876B260794A4(L_13, L_15, L_17, L_18, L_19, L_20, NULL);
		goto IL_007e;
	}

IL_0074:
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_21 = ___rectParams0;
		float L_22 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_23 = ___meshAlloc2;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRect_m397D4BD73C8683BE9FA34DBA7EABFAEE10E3BAE7(L_21, L_22, L_23, (bool)1, NULL);
	}

IL_007e:
	{
		goto IL_00ba;
	}

IL_0081:
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_24 = ___rectParams0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25 = L_24.___texture_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_26;
		bool L_27 = V_2;
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_28 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_29 = L_28.___rect_0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_30 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_31 = L_30.___uv_1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_32 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = L_32.___color_2;
		float L_34 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_35 = ___meshAlloc2;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_36 = ___colorPage3;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_MakeQuad_mECA8030C1B4C490260452207F7BF876B260794A4(L_29, L_31, L_33, L_34, L_35, L_36, NULL);
		goto IL_00ba;
	}

IL_00b0:
	{
		float L_37 = ___posZ1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_38 = ___meshAlloc2;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_MakeSlicedQuad_mF45C7A014855B61109445AF16038B1E443683CBB((&___rectParams0), L_37, L_38, NULL);
	}

IL_00ba:
	{
		return;
	}
}
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::ConvertTextVertexToUIRVertex(UnityEngine.TextCore.Text.MeshInfo,System.Int32,UnityEngine.Vector2,UnityEngine.UIElements.UIR.VertexFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_ConvertTextVertexToUIRVertex_m56B1A622BB3E92A7738DCFAFFDCECE410C7E059F (MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F ___info0, int32_t ___index1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset2, int32_t ___flags3, bool ___isDynamicColor4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* G_B4_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	int32_t G_B5_3 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* G_B5_4 = NULL;
	{
		V_0 = (0.0f);
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_0 = ___info0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = L_0.___uvs2_4;
		int32_t L_2 = ___index1;
		NullCheck(L_1);
		float L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->___y_1;
		V_1 = (bool)((((float)L_3) < ((float)(0.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		V_0 = (1.0f);
	}

IL_0029:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_5 = ___info0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = L_5.___vertices_2;
		int32_t L_7 = ___index1;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___offset2;
		float L_10 = L_9.___x_0;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_11 = ___info0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = L_11.___vertices_2;
		int32_t L_13 = ___index1;
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___offset2;
		float L_16 = L_15.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_8, L_10)), ((float)il2cpp_codegen_add(L_14, L_16)), (0.0f), /*hidden argument*/NULL);
		(&V_2)->___position_1 = L_17;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_18 = ___info0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = L_18.___uvs0_3;
		int32_t L_20 = ___index1;
		NullCheck(L_19);
		float L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___x_0;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_22 = ___info0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = L_22.___uvs0_3;
		int32_t L_24 = ___index1;
		NullCheck(L_23);
		float L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), L_21, L_25, /*hidden argument*/NULL);
		(&V_2)->___uv_3 = L_26;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_27 = ___info0;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_28 = L_27.___colors32_5;
		int32_t L_29 = ___index1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		(&V_2)->___tint_2 = L_31;
		int32_t L_32 = ___flags3;
		float L_33 = V_0;
		bool L_34 = ___isDynamicColor4;
		G_B3_0 = 0;
		G_B3_1 = il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_33, (255.0f))));
		G_B3_2 = ((int32_t)(uint8_t)L_32);
		G_B3_3 = (&V_2);
		if (L_34)
		{
			G_B4_0 = 0;
			G_B4_1 = il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)il2cpp_codegen_multiply(L_33, (255.0f))));
			G_B4_2 = ((int32_t)(uint8_t)L_32);
			G_B4_3 = (&V_2);
			goto IL_00c7;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_00c8;
	}

IL_00c7:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_00c8:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_35), (uint8_t)G_B5_3, (uint8_t)G_B5_2, (uint8_t)G_B5_1, (uint8_t)G_B5_0, /*hidden argument*/NULL);
		G_B5_4->___flags_6 = L_35;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_36 = V_2;
		V_3 = L_36;
		goto IL_00d6;
	}

IL_00d6:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_37 = V_3;
		return L_37;
	}
}
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::ConvertTextVertexToUIRVertex(UnityEngine.UIElements.TextVertex,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_ConvertTextVertexToUIRVertex_mDF83C6C2A53E005CA1765602AA87E116CF8B5364 (TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 ___textVertex0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, const RuntimeMethod* method) 
{
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_0 = ___textVertex0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___position_0;
		float L_2 = L_1.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___offset1;
		float L_4 = L_3.___x_0;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_5 = ___textVertex0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___position_0;
		float L_7 = L_6.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___offset1;
		float L_9 = L_8.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_add(L_2, L_4)), ((float)il2cpp_codegen_add(L_7, L_9)), (0.0f), /*hidden argument*/NULL);
		(&V_0)->___position_1 = L_10;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_11 = ___textVertex0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = L_11.___uv0_2;
		(&V_0)->___uv_3 = L_12;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_13 = ___textVertex0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = L_13.___color_1;
		(&V_0)->___tint_2 = L_14;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_15), (uint8_t)1, (uint8_t)0, (uint8_t)0, (uint8_t)0, /*hidden argument*/NULL);
		(&V_0)->___flags_6 = L_15;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_16 = V_0;
		V_1 = L_16;
		goto IL_006c;
	}

IL_006c:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_17 = V_1;
		return L_17;
	}
}
// System.Int32 UnityEngine.UIElements.UIR.MeshBuilder::LimitTextVertices(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshBuilder_LimitTextVertices_mF8043A07B00C72B6B6C1C60DF0B05BD287B10DE7 (int32_t ___vertexCount0, bool ___logTruncation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1CDC83732501CFE500298C45C45DE38FD47B516);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___vertexCount0;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_MaxTextMeshVertices_4;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = ___vertexCount0;
		V_1 = L_3;
		goto IL_003b;
	}

IL_0014:
	{
		bool L_4 = ___logTruncation1;
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		int32_t L_6 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_MaxTextMeshVertices_4;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC1CDC83732501CFE500298C45C45DE38FD47B516, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_9, NULL);
	}

IL_0033:
	{
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		int32_t L_10 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_MaxTextMeshVertices_4;
		V_1 = L_10;
		goto IL_003b;
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeText(UnityEngine.TextCore.Text.MeshInfo,UnityEngine.Vector2,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,UnityEngine.UIElements.UIR.VertexFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeText_m711A84C42C5019DEDB437A8AF3FB9D17A7872CDE (MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F ___meshInfo0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, int32_t ___flags3, bool ___isDynamicColor4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_0 = ___meshInfo0;
		int32_t L_1 = L_0.___vertexCount_1;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = MeshBuilder_LimitTextVertices_mF8043A07B00C72B6B6C1C60DF0B05BD287B10DE7(L_1, (bool)1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_3/4));
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_6;
		L_6 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc2), ((int32_t)il2cpp_codegen_multiply(L_4, 4)), ((int32_t)il2cpp_codegen_multiply(L_5, 6)), NULL);
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
		goto IL_00cc;
	}

IL_002a:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_7 = V_2;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_8 = ___meshInfo0;
		int32_t L_9 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___offset1;
		int32_t L_11 = ___flags3;
		bool L_12 = ___isDynamicColor4;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_13;
		L_13 = MeshBuilder_ConvertTextVertexToUIRVertex_m56B1A622BB3E92A7738DCFAFFDCECE410C7E059F(L_8, L_9, L_10, L_11, L_12, NULL);
		NullCheck(L_7);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_7, L_13, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_14 = V_2;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_15 = ___meshInfo0;
		int32_t L_16 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___offset1;
		int32_t L_18 = ___flags3;
		bool L_19 = ___isDynamicColor4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_20;
		L_20 = MeshBuilder_ConvertTextVertexToUIRVertex_m56B1A622BB3E92A7738DCFAFFDCECE410C7E059F(L_15, ((int32_t)il2cpp_codegen_add(L_16, 1)), L_17, L_18, L_19, NULL);
		NullCheck(L_14);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_14, L_20, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_21 = V_2;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_22 = ___meshInfo0;
		int32_t L_23 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___offset1;
		int32_t L_25 = ___flags3;
		bool L_26 = ___isDynamicColor4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_27;
		L_27 = MeshBuilder_ConvertTextVertexToUIRVertex_m56B1A622BB3E92A7738DCFAFFDCECE410C7E059F(L_22, ((int32_t)il2cpp_codegen_add(L_23, 2)), L_24, L_25, L_26, NULL);
		NullCheck(L_21);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_21, L_27, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_28 = V_2;
		MeshInfo_tE55C4A8846CC2C399CCC3FE989476D987B86AB2F L_29 = ___meshInfo0;
		int32_t L_30 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___offset1;
		int32_t L_32 = ___flags3;
		bool L_33 = ___isDynamicColor4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_34;
		L_34 = MeshBuilder_ConvertTextVertexToUIRVertex_m56B1A622BB3E92A7738DCFAFFDCECE410C7E059F(L_29, ((int32_t)il2cpp_codegen_add(L_30, 3)), L_31, L_32, L_33, NULL);
		NullCheck(L_28);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_28, L_34, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_35 = V_2;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_35, (uint16_t)((int32_t)(uint16_t)L_36), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_37 = V_2;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_37, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_38, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_39 = V_2;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_39, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_40, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_41 = V_2;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_41, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_42, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_43 = V_2;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_43, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_44, 3))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_45 = V_2;
		int32_t L_46 = V_4;
		NullCheck(L_45);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_45, (uint16_t)((int32_t)(uint16_t)L_46), NULL);
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 4));
	}

IL_00cc:
	{
		int32_t L_49 = V_3;
		int32_t L_50 = V_1;
		V_5 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_5;
		if (L_51)
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeText(Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>,UnityEngine.Vector2,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeText_m6242A075BE51F76E18878D531D2B3D101F047A00 (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 ___uiVertices0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___uiVertices0))->___m_Length_1);
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = MeshBuilder_LimitTextVertices_mF8043A07B00C72B6B6C1C60DF0B05BD287B10DE7(L_0, (bool)1, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/4));
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_5;
		L_5 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc2), ((int32_t)il2cpp_codegen_multiply(L_3, 4)), ((int32_t)il2cpp_codegen_multiply(L_4, 6)), NULL);
		V_2 = L_5;
		V_3 = 0;
		V_4 = 0;
		goto IL_00d9;
	}

IL_002b:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_6 = V_2;
		int32_t L_7 = V_4;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3, ((&___uiVertices0))->___m_Buffer_0, L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___offset1;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_10;
		L_10 = MeshBuilder_ConvertTextVertexToUIRVertex_mDF83C6C2A53E005CA1765602AA87E116CF8B5364(L_8, L_9, NULL);
		NullCheck(L_6);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_6, L_10, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_11 = V_2;
		int32_t L_12 = V_4;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3, ((&___uiVertices0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_12, 1)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___offset1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_15;
		L_15 = MeshBuilder_ConvertTextVertexToUIRVertex_mDF83C6C2A53E005CA1765602AA87E116CF8B5364(L_13, L_14, NULL);
		NullCheck(L_11);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_11, L_15, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_16 = V_2;
		int32_t L_17 = V_4;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_18;
		L_18 = IL2CPP_NATIVEARRAY_GET_ITEM(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3, ((&___uiVertices0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_17, 2)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___offset1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_20;
		L_20 = MeshBuilder_ConvertTextVertexToUIRVertex_mDF83C6C2A53E005CA1765602AA87E116CF8B5364(L_18, L_19, NULL);
		NullCheck(L_16);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_16, L_20, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_21 = V_2;
		int32_t L_22 = V_4;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_23;
		L_23 = IL2CPP_NATIVEARRAY_GET_ITEM(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3, ((&___uiVertices0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_22, 3)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___offset1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_25;
		L_25 = MeshBuilder_ConvertTextVertexToUIRVertex_mDF83C6C2A53E005CA1765602AA87E116CF8B5364(L_23, L_24, NULL);
		NullCheck(L_21);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_21, L_25, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_26 = V_2;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_26, (uint16_t)((int32_t)(uint16_t)L_27), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_28 = V_2;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_28, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_29, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_30 = V_2;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_30, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_31, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_32 = V_2;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_32, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_33, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_34 = V_2;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_34, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_35, 3))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_36 = V_2;
		int32_t L_37 = V_4;
		NullCheck(L_36);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_36, (uint16_t)((int32_t)(uint16_t)L_37), NULL);
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_39, 4));
	}

IL_00d9:
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		V_5 = (bool)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_5;
		if (L_42)
		{
			goto IL_002b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::UpdateText(Unity.Collections.NativeArray`1<UnityEngine.UIElements.TextVertex>,UnityEngine.Vector2,UnityEngine.Matrix4x4,UnityEngine.Color32,UnityEngine.Color32,UnityEngine.Color32,UnityEngine.Color32,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_UpdateText_m9203AB5020D640A6F8AFF1FBE24DCBF4F899F437 (NativeArray_1_t8B2EB0176812FFDC7FF26382470CBFDCA595A656 ___uiVertices0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset1, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform2, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages3, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags5, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPageSettingIndex6, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___uiVertices0))->___m_Length_1);
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = MeshBuilder_LimitTextVertices_mF8043A07B00C72B6B6C1C60DF0B05BD287B10DE7(L_0, (bool)0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2((&___vertices7), NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0), NULL);
		(&___flags5)->___r_1 = (uint8_t)1;
		V_1 = 0;
		goto IL_00c8;
	}

IL_002e:
	{
		int32_t L_4 = V_1;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_ITEM(TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3, ((&___uiVertices0))->___m_Buffer_0, L_4);
		V_2 = L_5;
		int32_t L_6 = V_1;
		il2cpp_codegen_initobj((&V_3), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position_0;
		float L_9 = L_8.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___offset1;
		float L_11 = L_10.___x_0;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_12 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___position_0;
		float L_14 = L_13.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___offset1;
		float L_16 = L_15.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_14, L_16)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&___transform2), L_17, NULL);
		(&V_3)->___position_1 = L_18;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_19 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = L_19.___uv0_2;
		(&V_3)->___uv_3 = L_20;
		TextVertex_tF56662BA585F7DD34D71971F1AA1D2E767946CF3 L_21 = V_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = L_21.___color_1;
		(&V_3)->___tint_2 = L_22;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_23 = ___xformClipPages3;
		(&V_3)->___xformClipPages_4 = L_23;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24 = ___ids4;
		(&V_3)->___ids_5 = L_24;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_25 = ___flags5;
		(&V_3)->___flags_6 = L_25;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_26 = ___opacityPageSettingIndex6;
		(&V_3)->___opacityColorPages_7 = L_26;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_27 = V_3;
		NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D((&___vertices7), L_6, L_27, NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c8:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		V_4 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeQuad(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Color,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,UnityEngine.UIElements.ColorPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeQuad_mECA8030C1B4C490260452207F7BF876B260794A4 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rcPosition0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rcTexCoord1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___posZ3, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, const RuntimeMethod* method) 
{
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_10;
	memset((&V_10), 0, sizeof(V_10));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_11;
	memset((&V_11), 0, sizeof(V_11));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B3_4 = NULL;
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_0;
		L_0 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc4), 4, 6, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rcPosition0), NULL);
		V_1 = L_1;
		float L_2;
		L_2 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rcPosition0), NULL);
		V_2 = L_2;
		float L_3;
		L_3 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rcPosition0), NULL);
		V_3 = L_3;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rcPosition0), NULL);
		V_4 = L_4;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_5 = V_0;
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = MeshWriteData_get_uvRegion_m6E543500740DE690E1C3DB46DACA44DE9F785353(L_5, NULL);
		V_5 = L_6;
		float L_7;
		L_7 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rcTexCoord1), NULL);
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		float L_9;
		L_9 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_5), NULL);
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9));
		float L_10;
		L_10 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rcTexCoord1), NULL);
		float L_11;
		L_11 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		float L_12;
		L_12 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_5), NULL);
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, L_11)), L_12));
		float L_13;
		L_13 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rcTexCoord1), NULL);
		float L_14;
		L_14 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		float L_15;
		L_15 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_5), NULL);
		V_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15));
		float L_16;
		L_16 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rcTexCoord1), NULL);
		float L_17;
		L_17 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		float L_18;
		L_18 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_5), NULL);
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18));
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_19 = ___colorPage5;
		bool L_20 = L_19.___isValid_0;
		G_B1_0 = 0;
		G_B1_1 = 0;
		G_B1_2 = 0;
		G_B1_3 = (&V_10);
		if (L_20)
		{
			G_B2_0 = 0;
			G_B2_1 = 0;
			G_B2_2 = 0;
			G_B2_3 = (&V_10);
			goto IL_00a9;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_00aa:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B3_4, (uint8_t)G_B3_3, (uint8_t)G_B3_2, (uint8_t)G_B3_1, (uint8_t)G_B3_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_21 = ___colorPage5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = L_21.___pageAndID_1;
		uint8_t L_23 = L_22.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_24 = ___colorPage5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_25 = L_24.___pageAndID_1;
		uint8_t L_26 = L_25.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_11), (uint8_t)0, (uint8_t)0, L_23, L_26, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_27 = ___colorPage5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28 = L_27.___pageAndID_1;
		uint8_t L_29 = L_28.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_12), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_29, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_30 = V_0;
		il2cpp_codegen_initobj((&V_13), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		float L_31 = V_1;
		float L_32 = V_3;
		float L_33 = ___posZ3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_31, L_32, L_33, /*hidden argument*/NULL);
		(&V_13)->___position_1 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = ___color2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_36;
		L_36 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_35, NULL);
		(&V_13)->___tint_2 = L_36;
		float L_37 = V_6;
		float L_38 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), L_37, L_38, /*hidden argument*/NULL);
		(&V_13)->___uv_3 = L_39;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_40 = V_10;
		(&V_13)->___flags_6 = L_40;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_41 = V_11;
		(&V_13)->___opacityColorPages_7 = L_41;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_42 = V_12;
		(&V_13)->___ids_5 = L_42;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_43 = V_13;
		NullCheck(L_30);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_30, L_43, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_44 = V_0;
		il2cpp_codegen_initobj((&V_13), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		float L_45 = V_2;
		float L_46 = V_3;
		float L_47 = ___posZ3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_45, L_46, L_47, /*hidden argument*/NULL);
		(&V_13)->___position_1 = L_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = ___color2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_50;
		L_50 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_49, NULL);
		(&V_13)->___tint_2 = L_50;
		float L_51 = V_7;
		float L_52 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), L_51, L_52, /*hidden argument*/NULL);
		(&V_13)->___uv_3 = L_53;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = V_10;
		(&V_13)->___flags_6 = L_54;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_55 = V_11;
		(&V_13)->___opacityColorPages_7 = L_55;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_56 = V_12;
		(&V_13)->___ids_5 = L_56;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_57 = V_13;
		NullCheck(L_44);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_44, L_57, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_58 = V_0;
		il2cpp_codegen_initobj((&V_13), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		float L_59 = V_1;
		float L_60 = V_4;
		float L_61 = ___posZ3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), L_59, L_60, L_61, /*hidden argument*/NULL);
		(&V_13)->___position_1 = L_62;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = ___color2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_64;
		L_64 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_63, NULL);
		(&V_13)->___tint_2 = L_64;
		float L_65 = V_6;
		float L_66 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_67), L_65, L_66, /*hidden argument*/NULL);
		(&V_13)->___uv_3 = L_67;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_68 = V_10;
		(&V_13)->___flags_6 = L_68;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_69 = V_11;
		(&V_13)->___opacityColorPages_7 = L_69;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_70 = V_12;
		(&V_13)->___ids_5 = L_70;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_71 = V_13;
		NullCheck(L_58);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_58, L_71, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_72 = V_0;
		il2cpp_codegen_initobj((&V_13), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		float L_73 = V_2;
		float L_74 = V_4;
		float L_75 = ___posZ3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_76), L_73, L_74, L_75, /*hidden argument*/NULL);
		(&V_13)->___position_1 = L_76;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77 = ___color2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_78;
		L_78 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_77, NULL);
		(&V_13)->___tint_2 = L_78;
		float L_79 = V_7;
		float L_80 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_81), L_79, L_80, /*hidden argument*/NULL);
		(&V_13)->___uv_3 = L_81;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_82 = V_10;
		(&V_13)->___flags_6 = L_82;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_83 = V_11;
		(&V_13)->___opacityColorPages_7 = L_83;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_84 = V_12;
		(&V_13)->___ids_5 = L_84;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_85 = V_13;
		NullCheck(L_72);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_72, L_85, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_86 = V_0;
		NullCheck(L_86);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_86, (uint16_t)0, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_87 = V_0;
		NullCheck(L_87);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_87, (uint16_t)2, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_88 = V_0;
		NullCheck(L_88);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_88, (uint16_t)1, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_89 = V_0;
		NullCheck(L_89);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_89, (uint16_t)1, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_90 = V_0;
		NullCheck(L_90);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_90, (uint16_t)2, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_91 = V_0;
		NullCheck(L_91);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_91, (uint16_t)3, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeSlicedQuad(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams&,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeSlicedQuad_mF45C7A014855B61109445AF16038B1E443683CBB (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	float V_21 = 0.0f;
	bool V_22 = false;
	float V_23 = 0.0f;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_27;
	memset((&V_27), 0, sizeof(V_27));
	bool V_28 = false;
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_0;
		L_0 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc2), ((int32_t)16), ((int32_t)54), NULL);
		V_0 = L_0;
		V_1 = (1.0f);
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_1 = ___rectParams0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = L_1->___texture_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		V_2 = ((float)L_3);
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_4 = ___rectParams0;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = L_4->___texture_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		V_3 = ((float)L_6);
		float L_7 = V_1;
		float L_8 = V_2;
		V_4 = ((float)(L_7/L_8));
		float L_9 = V_1;
		float L_10 = V_3;
		V_5 = ((float)(L_9/L_10));
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_11 = ___rectParams0;
		int32_t L_12 = L_11->___leftSlice_13;
		float L_13;
		L_13 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)L_12), NULL);
		V_6 = L_13;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_14 = ___rectParams0;
		int32_t L_15 = L_14->___rightSlice_15;
		float L_16;
		L_16 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)L_15), NULL);
		V_7 = L_16;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_17 = ___rectParams0;
		int32_t L_18 = L_17->___bottomSlice_16;
		float L_19;
		L_19 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)L_18), NULL);
		V_8 = L_19;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_20 = ___rectParams0;
		int32_t L_21 = L_20->___topSlice_14;
		float L_22;
		L_22 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)L_21), NULL);
		V_9 = L_22;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_23 = ___rectParams0;
		float L_24 = L_23->___sliceScale_17;
		float L_25;
		L_25 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.00999999978f), L_24, NULL);
		V_10 = L_25;
		float L_26 = V_6;
		float L_27 = V_4;
		float L_28;
		L_28 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_26, L_27)), (0.0f), (1.0f), NULL);
		V_11 = L_28;
		float L_29 = V_7;
		float L_30 = V_4;
		float L_31;
		L_31 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_29, L_30)), (0.0f), (1.0f), NULL);
		V_12 = L_31;
		float L_32 = V_8;
		float L_33 = V_5;
		float L_34;
		L_34 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_32, L_33)), (0.0f), (1.0f), NULL);
		V_13 = L_34;
		float L_35 = V_9;
		float L_36 = V_5;
		float L_37;
		L_37 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_35, L_36)), (0.0f), (1.0f), NULL);
		V_14 = L_37;
		float L_38 = V_6;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_39 = ___rectParams0;
		float L_40 = L_39->___sliceScale_17;
		V_6 = ((float)il2cpp_codegen_multiply(L_38, L_40));
		float L_41 = V_7;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_42 = ___rectParams0;
		float L_43 = L_42->___sliceScale_17;
		V_7 = ((float)il2cpp_codegen_multiply(L_41, L_43));
		float L_44 = V_8;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_45 = ___rectParams0;
		float L_46 = L_45->___sliceScale_17;
		V_8 = ((float)il2cpp_codegen_multiply(L_44, L_46));
		float L_47 = V_9;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_48 = ___rectParams0;
		float L_49 = L_48->___sliceScale_17;
		V_9 = ((float)il2cpp_codegen_multiply(L_47, L_49));
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_51 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_52 = (&L_51->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC(L_52, NULL);
		float L_54 = L_53.___x_0;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_54);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_56 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_57 = (&L_56->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC(L_57, NULL);
		float L_59 = L_58.___x_0;
		float L_60 = V_11;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_add(L_59, L_60)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_62 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_63 = (&L_62->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167(L_63, NULL);
		float L_65 = L_64.___x_0;
		float L_66 = V_12;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_subtract(L_65, L_66)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_68 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_69 = (&L_68->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167(L_69, NULL);
		float L_71 = L_70.___x_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_71);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_73 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_74 = (&L_73->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167(L_74, NULL);
		float L_76 = L_75.___y_1;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_76);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_77 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_78 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_79 = (&L_78->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167(L_79, NULL);
		float L_81 = L_80.___y_1;
		float L_82 = V_13;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_subtract(L_81, L_82)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_84 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_85 = (&L_84->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86;
		L_86 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC(L_85, NULL);
		float L_87 = L_86.___y_1;
		float L_88 = V_14;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_add(L_87, L_88)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_89 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_90 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_91 = (&L_90->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		L_92 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC(L_91, NULL);
		float L_93 = L_92.___y_1;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_93);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_94 = V_0;
		NullCheck(L_94);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_95;
		L_95 = MeshWriteData_get_uvRegion_m6E543500740DE690E1C3DB46DACA44DE9F785353(L_94, NULL);
		V_15 = L_95;
		V_18 = 0;
		goto IL_0254;
	}

IL_01ea:
	{
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_96 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		int32_t L_97 = V_18;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_98 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		int32_t L_99 = V_18;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		float L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		float L_102;
		L_102 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_15), NULL);
		float L_103;
		L_103 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_15), NULL);
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_101, L_102)), L_103)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_104 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		int32_t L_105 = V_18;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_106 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_107 = (&L_106->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		L_108 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC(L_107, NULL);
		float L_109 = L_108.___y_1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_110 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_111 = (&L_110->___uv_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112;
		L_112 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167(L_111, NULL);
		float L_113 = L_112.___y_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_114 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		int32_t L_115 = V_18;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		float L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		float L_118;
		L_118 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_15), NULL);
		float L_119;
		L_119 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_15), NULL);
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_109, L_113)), L_117)), L_118)), L_119)));
		int32_t L_120 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_0254:
	{
		int32_t L_121 = V_18;
		V_19 = (bool)((((int32_t)L_121) < ((int32_t)4))? 1 : 0);
		bool L_122 = V_19;
		if (L_122)
		{
			goto IL_01ea;
		}
	}
	{
		float L_123 = V_6;
		float L_124 = V_7;
		V_16 = ((float)il2cpp_codegen_add(L_123, L_124));
		float L_125 = V_16;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_126 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_127 = (&L_126->___rect_0);
		float L_128;
		L_128 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_127, NULL);
		V_20 = (bool)((((float)L_125) > ((float)L_128))? 1 : 0);
		bool L_129 = V_20;
		if (!L_129)
		{
			goto IL_029b;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_130 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_131 = (&L_130->___rect_0);
		float L_132;
		L_132 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_131, NULL);
		float L_133 = V_16;
		V_21 = ((float)(L_132/L_133));
		float L_134 = V_6;
		float L_135 = V_21;
		V_6 = ((float)il2cpp_codegen_multiply(L_134, L_135));
		float L_136 = V_7;
		float L_137 = V_21;
		V_7 = ((float)il2cpp_codegen_multiply(L_136, L_137));
	}

IL_029b:
	{
		float L_138 = V_8;
		float L_139 = V_9;
		V_17 = ((float)il2cpp_codegen_add(L_138, L_139));
		float L_140 = V_17;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_141 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_142 = (&L_141->___rect_0);
		float L_143;
		L_143 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_142, NULL);
		V_22 = (bool)((((float)L_140) > ((float)L_143))? 1 : 0);
		bool L_144 = V_22;
		if (!L_144)
		{
			goto IL_02d7;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_145 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_146 = (&L_145->___rect_0);
		float L_147;
		L_147 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_146, NULL);
		float L_148 = V_17;
		V_23 = ((float)(L_147/L_148));
		float L_149 = V_8;
		float L_150 = V_23;
		V_8 = ((float)il2cpp_codegen_multiply(L_149, L_150));
		float L_151 = V_9;
		float L_152 = V_23;
		V_9 = ((float)il2cpp_codegen_multiply(L_151, L_152));
	}

IL_02d7:
	{
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_153 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_154 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_155 = (&L_154->___rect_0);
		float L_156;
		L_156 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_155, NULL);
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_156);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_157 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_158 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_159 = (&L_158->___rect_0);
		float L_160;
		L_160 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_159, NULL);
		float L_161 = V_6;
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_add(L_160, L_161)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_162 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_163 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_164 = (&L_163->___rect_0);
		float L_165;
		L_165 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_164, NULL);
		float L_166 = V_7;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_subtract(L_165, L_166)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_167 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_168 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_169 = (&L_168->___rect_0);
		float L_170;
		L_170 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_169, NULL);
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_170);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_171 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_172 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_173 = (&L_172->___rect_0);
		float L_174;
		L_174 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_173, NULL);
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_174);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_175 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_176 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_177 = (&L_176->___rect_0);
		float L_178;
		L_178 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_177, NULL);
		float L_179 = V_8;
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_subtract(L_178, L_179)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_180 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_181 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_182 = (&L_181->___rect_0);
		float L_183;
		L_183 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_182, NULL);
		float L_184 = V_9;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_add(L_183, L_184)));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_185 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_186 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_187 = (&L_186->___rect_0);
		float L_188;
		L_188 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_187, NULL);
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_188);
		V_24 = 0;
		goto IL_03e8;
	}

IL_0378:
	{
		int32_t L_189 = V_24;
		V_25 = ((int32_t)(L_189%4));
		int32_t L_190 = V_24;
		V_26 = ((int32_t)(L_190/4));
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_191 = V_0;
		il2cpp_codegen_initobj((&V_27), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_192 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8;
		int32_t L_193 = V_25;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		float L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_196 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9;
		int32_t L_197 = V_26;
		NullCheck(L_196);
		int32_t L_198 = L_197;
		float L_199 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		float L_200 = ___posZ1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_201;
		memset((&L_201), 0, sizeof(L_201));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_201), L_195, L_199, L_200, /*hidden argument*/NULL);
		(&V_27)->___position_1 = L_201;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_202 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6;
		int32_t L_203 = V_25;
		NullCheck(L_202);
		int32_t L_204 = L_203;
		float L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_206 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7;
		int32_t L_207 = V_26;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		float L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_210), L_205, L_209, /*hidden argument*/NULL);
		(&V_27)->___uv_3 = L_210;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_211 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_212 = L_211->___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_213;
		L_213 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_212, NULL);
		(&V_27)->___tint_2 = L_213;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_214 = V_27;
		NullCheck(L_191);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_191, L_214, NULL);
		int32_t L_215 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_215, 1));
	}

IL_03e8:
	{
		int32_t L_216 = V_24;
		V_28 = (bool)((((int32_t)L_216) < ((int32_t)((int32_t)16)))? 1 : 0);
		bool L_217 = V_28;
		if (L_217)
		{
			goto IL_0378;
		}
	}
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_218 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_219 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___slicedQuadIndices_5;
		NullCheck(L_218);
		MeshWriteData_SetAllIndices_m243F1994B53722F1B42639704E5194AC07309CC4(L_218, L_219, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeVectorGraphics(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Int32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeVectorGraphics_m3ADD029A1FE00164A25973E96EA764B3AACD2B45 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, int32_t ___settingIndexOffset1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, int32_t* ___finalVertexCount3, int32_t* ___finalIndexCount4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* V_0 = NULL;
	int32_t V_1 = 0;
	VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* V_2 = NULL;
	int32_t V_3 = 0;
	VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B8_0 = 0;
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_0 = ___rectParams0;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_1 = L_0.___vectorImage_5;
		V_0 = L_1;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_3, NULL);
		int32_t* L_4 = ___finalVertexCount3;
		*((int32_t*)L_4) = (int32_t)0;
		int32_t* L_5 = ___finalIndexCount4;
		*((int32_t*)L_5) = (int32_t)0;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_6 = V_0;
		NullCheck(L_6);
		VectorImageVertexU5BU5D_tA19C37074824265F1A5684A6F2C156559455C1C4* L_7 = L_6->___vertices_5;
		NullCheck(L_7);
		V_1 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		int32_t L_8 = V_1;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_9 = (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*)(VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185*)SZArrayNew(VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		V_3 = 0;
		goto IL_009f;
	}

IL_0030:
	{
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_10 = V_0;
		NullCheck(L_10);
		VectorImageVertexU5BU5D_tA19C37074824265F1A5684A6F2C156559455C1C4* L_11 = L_10->___vertices_5;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_15 = V_2;
		int32_t L_16 = V_3;
		il2cpp_codegen_initobj((&V_5), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_17 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17.___position_0;
		(&V_5)->___position_1 = L_18;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_19 = V_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = L_19.___tint_1;
		(&V_5)->___tint_2 = L_20;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_21 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21.___uv_2;
		(&V_5)->___uv_3 = L_22;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_23 = V_4;
		uint32_t L_24 = L_23.___settingIndex_3;
		VectorImageVertex_t9D42377517CC059BD40E2A626ECEBE0C94CA0948 L_25 = V_4;
		uint32_t L_26 = L_25.___settingIndex_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_27), (uint8_t)0, (uint8_t)0, (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_24>>8))), (uint8_t)((int32_t)(uint8_t)L_26), /*hidden argument*/NULL);
		(&V_5)->___opacityColorPages_7 = L_27;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_28 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7)L_28);
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009f:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_0030;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_33 = ___rectParams0;
		int32_t L_34 = L_33.___leftSlice_13;
		if ((!(((float)((float)L_34)) <= ((float)(1.0E-30f)))))
		{
			goto IL_00e6;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_35 = ___rectParams0;
		int32_t L_36 = L_35.___topSlice_14;
		if ((!(((float)((float)L_36)) <= ((float)(1.0E-30f)))))
		{
			goto IL_00e6;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_37 = ___rectParams0;
		int32_t L_38 = L_37.___rightSlice_15;
		if ((!(((float)((float)L_38)) <= ((float)(1.0E-30f)))))
		{
			goto IL_00e6;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_39 = ___rectParams0;
		int32_t L_40 = L_39.___bottomSlice_16;
		G_B8_0 = ((((int32_t)((!(((float)((float)L_40)) <= ((float)(1.0E-30f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B8_0 = 0;
	}

IL_00e7:
	{
		V_7 = (bool)G_B8_0;
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_0131;
		}
	}
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_42 = V_2;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_43 = V_0;
		NullCheck(L_43);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_44 = L_43->___indices_6;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_45 = V_0;
		NullCheck(L_45);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (&L_45->___size_8);
		float L_47 = L_46->___x_0;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_48 = V_0;
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&L_48->___size_8);
		float L_50 = L_49->___y_1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_51 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_52 = L_51.___rect_0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_53 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_54 = L_53.___uv_1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_55 = ___rectParams0;
		int32_t L_56 = L_55.___scaleMode_7;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_57 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = L_57.___color_2;
		int32_t L_59 = ___settingIndexOffset1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_60 = ___meshAlloc2;
		int32_t* L_61 = ___finalVertexCount3;
		int32_t* L_62 = ___finalIndexCount4;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_MakeVectorGraphicsStretchBackground_m7F6993CF84251938FE33076968FC50C1684C6FA3(L_42, L_44, L_47, L_50, L_52, L_54, L_56, L_58, L_59, L_60, L_61, L_62, NULL);
		goto IL_018a;
	}

IL_0131:
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_63 = ___rectParams0;
		int32_t L_64 = L_63.___leftSlice_13;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_65 = ___rectParams0;
		int32_t L_66 = L_65.___topSlice_14;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_67 = ___rectParams0;
		int32_t L_68 = L_67.___rightSlice_15;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_69 = ___rectParams0;
		int32_t L_70 = L_69.___bottomSlice_16;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_8), ((float)L_64), ((float)L_66), ((float)L_68), ((float)L_70), NULL);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_71 = V_2;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_72 = V_0;
		NullCheck(L_72);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_73 = L_72->___indices_6;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_74 = V_0;
		NullCheck(L_74);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = (&L_74->___size_8);
		float L_76 = L_75->___x_0;
		VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* L_77 = V_0;
		NullCheck(L_77);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78 = (&L_77->___size_8);
		float L_79 = L_78->___y_1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_80 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_81 = L_80.___rect_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_82 = V_8;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_83 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84 = L_83.___color_2;
		int32_t L_85 = ___settingIndexOffset1;
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_86 = ___meshAlloc2;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146(L_71, L_73, L_76, L_79, L_81, L_82, (bool)1, L_84, L_85, L_86, NULL);
	}

IL_018a:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeVectorGraphicsStretchBackground(UnityEngine.UIElements.Vertex[],System.UInt16[],System.Single,System.Single,UnityEngine.Rect,UnityEngine.Rect,UnityEngine.ScaleMode,UnityEngine.Color,System.Int32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeVectorGraphicsStretchBackground_m7F6993CF84251938FE33076968FC50C1684C6FA3 (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___svgVertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___svgIndices1, float ___svgWidth2, float ___svgHeight3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect4, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___sourceUV5, int32_t ___scaleMode6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint7, int32_t ___settingIndexOffset8, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc9, int32_t* ___finalVertexCount10, int32_t* ___finalIndexCount11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_11;
	memset((&V_11), 0, sizeof(V_11));
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_12 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	bool V_21 = false;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	bool V_28 = false;
	int32_t V_29 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_30;
	memset((&V_30), 0, sizeof(V_30));
	uint32_t V_31 = 0;
	bool V_32 = false;
	int32_t V_33 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_34;
	memset((&V_34), 0, sizeof(V_34));
	uint32_t V_35 = 0;
	bool V_36 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B23_0 = 0;
	{
		float L_0 = ___svgWidth2;
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___sourceUV5), NULL);
		float L_2 = ___svgHeight3;
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___sourceUV5), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		float L_4;
		L_4 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___sourceUV5), NULL);
		float L_5 = ___svgWidth2;
		float L_6;
		L_6 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___sourceUV5), NULL);
		float L_7 = ___svgHeight3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&V_2), L_8, L_9, NULL);
		float L_10;
		L_10 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___sourceUV5), NULL);
		if ((!(((float)L_10) == ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		float L_11;
		L_11 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___sourceUV5), NULL);
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___sourceUV5), NULL);
		if ((!(((float)L_12) == ((float)(1.0f)))))
		{
			goto IL_0079;
		}
	}
	{
		float L_13;
		L_13 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___sourceUV5), NULL);
		G_B5_0 = ((((int32_t)((((float)L_13) == ((float)(1.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007a;
	}

IL_0079:
	{
		G_B5_0 = 1;
	}

IL_007a:
	{
		V_3 = (bool)G_B5_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___y_1;
		V_4 = ((float)(L_15/L_17));
		float L_18;
		L_18 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		float L_19;
		L_19 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		V_5 = ((float)(L_18/L_19));
		int32_t L_20 = ___scaleMode6;
		V_16 = L_20;
		int32_t L_21 = V_16;
		V_15 = L_21;
		int32_t L_22 = V_15;
		switch (L_22)
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_00fb;
			}
			case 2:
			{
				goto IL_0253;
			}
		}
	}
	{
		goto IL_0307;
	}

IL_00bb:
	{
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_6), (0.0f), (0.0f), NULL);
		float L_23;
		L_23 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___x_0;
		(&V_7)->___x_0 = ((float)(L_23/L_25));
		float L_26;
		L_26 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28 = L_27.___y_1;
		(&V_7)->___y_1 = ((float)(L_26/L_28));
		goto IL_030d;
	}

IL_00fb:
	{
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_6), (0.0f), (0.0f), NULL);
		float L_29 = V_5;
		float L_30 = V_4;
		V_17 = (bool)((((float)L_29) > ((float)L_30))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_019e;
		}
	}
	{
		float L_32;
		L_32 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_0;
		float L_34 = L_33.___x_0;
		float L_35 = ((float)(L_32/L_34));
		V_20 = L_35;
		(&V_7)->___y_1 = L_35;
		float L_36 = V_20;
		(&V_7)->___x_0 = L_36;
		float L_37;
		L_37 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_7;
		float L_39 = L_38.___y_1;
		V_18 = ((float)(L_37/L_39));
		float L_40;
		L_40 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		float L_41 = V_18;
		V_19 = ((float)il2cpp_codegen_subtract(((float)(L_40/(2.0f))), ((float)(L_41/(2.0f)))));
		float* L_42 = (&(&V_6)->___y_1);
		float* L_43 = L_42;
		float L_44 = *((float*)L_43);
		float L_45 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_7;
		float L_47 = L_46.___y_1;
		*((float*)L_43) = (float)((float)il2cpp_codegen_subtract(L_44, ((float)il2cpp_codegen_multiply(L_45, L_47))));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_48 = (&V_2);
		float L_49;
		L_49 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_48, NULL);
		float L_50 = V_19;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_48, ((float)il2cpp_codegen_add(L_49, L_50)), NULL);
		float L_51 = V_18;
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_2), L_51, NULL);
		V_3 = (bool)1;
		goto IL_024e;
	}

IL_019e:
	{
		float L_52 = V_5;
		float L_53 = V_4;
		V_21 = (bool)((((float)L_52) < ((float)L_53))? 1 : 0);
		bool L_54 = V_21;
		if (!L_54)
		{
			goto IL_022d;
		}
	}
	{
		float L_55;
		L_55 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_0;
		float L_57 = L_56.___y_1;
		float L_58 = ((float)(L_55/L_57));
		V_20 = L_58;
		(&V_7)->___y_1 = L_58;
		float L_59 = V_20;
		(&V_7)->___x_0 = L_59;
		float L_60;
		L_60 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_7;
		float L_62 = L_61.___x_0;
		V_22 = ((float)(L_60/L_62));
		float L_63;
		L_63 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		float L_64 = V_22;
		V_23 = ((float)il2cpp_codegen_subtract(((float)(L_63/(2.0f))), ((float)(L_64/(2.0f)))));
		float* L_65 = (&(&V_6)->___x_0);
		float* L_66 = L_65;
		float L_67 = *((float*)L_66);
		float L_68 = V_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_7;
		float L_70 = L_69.___x_0;
		*((float*)L_66) = (float)((float)il2cpp_codegen_subtract(L_67, ((float)il2cpp_codegen_multiply(L_68, L_70))));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_71 = (&V_2);
		float L_72;
		L_72 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_71, NULL);
		float L_73 = V_23;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_71, ((float)il2cpp_codegen_add(L_72, L_73)), NULL);
		float L_74 = V_22;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_2), L_74, NULL);
		V_3 = (bool)1;
		goto IL_024e;
	}

IL_022d:
	{
		float L_75;
		L_75 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = V_0;
		float L_77 = L_76.___x_0;
		float L_78 = ((float)(L_75/L_77));
		V_20 = L_78;
		(&V_7)->___y_1 = L_78;
		float L_79 = V_20;
		(&V_7)->___x_0 = L_79;
	}

IL_024e:
	{
		goto IL_030d;
	}

IL_0253:
	{
		float L_80 = V_5;
		float L_81 = V_4;
		V_24 = (bool)((((float)L_80) > ((float)L_81))? 1 : 0);
		bool L_82 = V_24;
		if (!L_82)
		{
			goto IL_02b3;
		}
	}
	{
		float L_83;
		L_83 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84 = V_0;
		float L_85 = L_84.___y_1;
		float L_86 = ((float)(L_83/L_85));
		V_20 = L_86;
		(&V_7)->___y_1 = L_86;
		float L_87 = V_20;
		(&V_7)->___x_0 = L_87;
		float L_88;
		L_88 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_0;
		float L_90 = L_89.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91 = V_7;
		float L_92 = L_91.___x_0;
		(&V_6)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_88, ((float)il2cpp_codegen_multiply(L_90, L_92)))), (0.5f)));
		(&V_6)->___y_1 = (0.0f);
		goto IL_0305;
	}

IL_02b3:
	{
		float L_93;
		L_93 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = V_0;
		float L_95 = L_94.___x_0;
		float L_96 = ((float)(L_93/L_95));
		V_20 = L_96;
		(&V_7)->___y_1 = L_96;
		float L_97 = V_20;
		(&V_7)->___x_0 = L_97;
		(&V_6)->___x_0 = (0.0f);
		float L_98;
		L_98 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_0;
		float L_100 = L_99.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_7;
		float L_102 = L_101.___y_1;
		(&V_6)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_98, ((float)il2cpp_codegen_multiply(L_100, L_102)))), (0.5f)));
	}

IL_0305:
	{
		goto IL_030d;
	}

IL_0307:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_103 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_103);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_103, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshBuilder_MakeVectorGraphicsStretchBackground_m7F6993CF84251938FE33076968FC50C1684C6FA3_RuntimeMethod_var)));
	}

IL_030d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107;
		L_107 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_105, L_106, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		L_108 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_104, L_107, NULL);
		V_6 = L_108;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_109 = ___svgVertices0;
		NullCheck(L_109);
		V_8 = ((int32_t)(((RuntimeArray*)L_109)->max_length));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_110 = ___svgIndices1;
		NullCheck(L_110);
		V_9 = ((int32_t)(((RuntimeArray*)L_110)->max_length));
		il2cpp_codegen_initobj((&V_10), sizeof(ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_111;
		L_111 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_11 = L_111;
		bool L_112 = V_3;
		V_25 = L_112;
		bool L_113 = V_25;
		if (!L_113)
		{
			goto IL_03d5;
		}
	}
	{
		float L_114;
		L_114 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_2), NULL);
		if ((((float)L_114) <= ((float)(0.0f))))
		{
			goto IL_0363;
		}
	}
	{
		float L_115;
		L_115 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_2), NULL);
		G_B23_0 = ((((int32_t)((!(((float)L_115) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0364;
	}

IL_0363:
	{
		G_B23_0 = 1;
	}

IL_0364:
	{
		V_26 = (bool)G_B23_0;
		bool L_116 = V_26;
		if (!L_116)
		{
			goto IL_037c;
		}
	}
	{
		int32_t* L_117 = ___finalVertexCount10;
		int32_t* L_118 = ___finalIndexCount11;
		int32_t L_119 = 0;
		V_27 = L_119;
		*((int32_t*)L_118) = (int32_t)L_119;
		int32_t L_120 = V_27;
		*((int32_t*)L_117) = (int32_t)L_120;
		goto IL_06b0;
	}

IL_037c:
	{
		float L_121;
		L_121 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_2), NULL);
		float L_122;
		L_122 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_2), NULL);
		float L_123;
		L_123 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_2), NULL);
		float L_124;
		L_124 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_2), NULL);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_11), L_121, L_122, L_123, L_124, NULL);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_125 = ___svgVertices0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_126 = ___svgIndices1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_127 = V_11;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_128;
		L_128 = MeshBuilder_UpperBoundApproximateRectClippingResults_m56B7E6ACB2F05BEFD9E5631522FB2523A2062ABF(L_125, L_126, L_127, NULL);
		V_10 = L_128;
		int32_t L_129 = V_8;
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_130 = V_10;
		int32_t L_131 = L_130.___clippedTriangles_3;
		V_8 = ((int32_t)il2cpp_codegen_add(L_129, ((int32_t)il2cpp_codegen_multiply(L_131, 6))));
		int32_t L_132 = V_9;
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_133 = V_10;
		int32_t L_134 = L_133.___addedTriangles_4;
		V_9 = ((int32_t)il2cpp_codegen_add(L_132, ((int32_t)il2cpp_codegen_multiply(L_134, 3))));
		int32_t L_135 = V_9;
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_136 = V_10;
		int32_t L_137 = L_136.___degenerateTriangles_5;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_135, ((int32_t)il2cpp_codegen_multiply(L_137, 3))));
	}

IL_03d5:
	{
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_138 = ___meshAlloc9;
		Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* L_139 = L_138.___alloc_0;
		int32_t L_140 = V_8;
		int32_t L_141 = V_9;
		NullCheck(L_139);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_142;
		L_142 = Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_inline(L_139, L_140, L_141, (&___meshAlloc9), NULL);
		V_12 = L_142;
		bool L_143 = V_3;
		V_28 = L_143;
		bool L_144 = V_28;
		if (!L_144)
		{
			goto IL_0402;
		}
	}
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_145 = ___svgVertices0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_146 = ___svgIndices1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_147 = V_11;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_148 = V_12;
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_149 = V_10;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_RectClip_m2EE47B978E3359FC6D01EEAE37979EDBE3F3F6E9(L_145, L_146, L_147, L_148, L_149, (&V_8), NULL);
		goto IL_040b;
	}

IL_0402:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_150 = V_12;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_151 = ___svgIndices1;
		NullCheck(L_150);
		MeshWriteData_SetAllIndices_m243F1994B53722F1B42639704E5194AC07309CC4(L_150, L_151, NULL);
	}

IL_040b:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_152 = V_12;
		NullCheck(L_152);
		int32_t L_153 = L_152->___currentVertex_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_153) == ((int32_t)0))? 1 : 0), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_154 = V_12;
		NullCheck(L_154);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_155;
		L_155 = MeshWriteData_get_uvRegion_m6E543500740DE690E1C3DB46DACA44DE9F785353(L_154, NULL);
		V_13 = L_155;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_156 = ___svgVertices0;
		NullCheck(L_156);
		V_14 = ((int32_t)(((RuntimeArray*)L_156)->max_length));
		V_29 = 0;
		goto IL_0550;
	}

IL_0431:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_157 = ___svgVertices0;
		int32_t L_158 = V_29;
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		V_30 = L_160;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_161 = (&(&V_30)->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_162 = V_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = L_162.___position_1;
		float L_164 = L_163.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165 = V_7;
		float L_166 = L_165.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167 = V_6;
		float L_168 = L_167.___x_0;
		L_161->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_164, L_166)), L_168));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_169 = (&(&V_30)->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_170 = V_30;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171 = L_170.___position_1;
		float L_172 = L_171.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_173 = V_7;
		float L_174 = L_173.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_175 = V_6;
		float L_176 = L_175.___y_1;
		L_169->___y_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_172, L_174)), L_176));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_177 = (&(&V_30)->___uv_3);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_178 = V_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_179 = L_178.___uv_3;
		float L_180 = L_179.___x_0;
		float L_181;
		L_181 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_13), NULL);
		float L_182;
		L_182 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_13), NULL);
		L_177->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_180, L_181)), L_182));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_183 = (&(&V_30)->___uv_3);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_184 = V_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_185 = L_184.___uv_3;
		float L_186 = L_185.___y_1;
		float L_187;
		L_187 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_13), NULL);
		float L_188;
		L_188 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_13), NULL);
		L_183->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_186, L_187)), L_188));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_189 = (&(&V_30)->___tint_2);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_190 = L_189;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_191 = (*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_190);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_192;
		L_192 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_191, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_193 = ___tint7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_194;
		L_194 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_192, L_193, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_195;
		L_195 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_194, NULL);
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_190 = L_195;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_196 = V_30;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_197 = L_196.___opacityColorPages_7;
		uint8_t L_198 = L_197.___b_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_199 = V_30;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_200 = L_199.___opacityColorPages_7;
		uint8_t L_201 = L_200.___a_4;
		int32_t L_202 = ___settingIndexOffset8;
		V_31 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_198<<8))|(int32_t)L_201)), L_202));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_203 = (&(&V_30)->___opacityColorPages_7);
		uint32_t L_204 = V_31;
		L_203->___b_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_204>>8)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_205 = (&(&V_30)->___opacityColorPages_7);
		uint32_t L_206 = V_31;
		L_205->___a_4 = (uint8_t)((int32_t)(uint8_t)L_206);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_207 = V_12;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_208 = V_30;
		NullCheck(L_207);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_207, L_208, NULL);
		int32_t L_209 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_209, 1));
	}

IL_0550:
	{
		int32_t L_210 = V_29;
		int32_t L_211 = V_14;
		V_32 = (bool)((((int32_t)L_210) < ((int32_t)L_211))? 1 : 0);
		bool L_212 = V_32;
		if (L_212)
		{
			goto IL_0431;
		}
	}
	{
		int32_t L_213 = V_14;
		V_33 = L_213;
		goto IL_068d;
	}

IL_0568:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_214 = V_12;
		NullCheck(L_214);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* L_215 = (&L_214->___m_Vertices_0);
		int32_t L_216 = V_33;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_217;
		L_217 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE(L_215, L_216, NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		V_34 = L_217;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_218 = (&(&V_34)->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_219 = V_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = L_219.___position_1;
		float L_221 = L_220.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_222 = V_7;
		float L_223 = L_222.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_224 = V_6;
		float L_225 = L_224.___x_0;
		L_218->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_221, L_223)), L_225));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_226 = (&(&V_34)->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_227 = V_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228 = L_227.___position_1;
		float L_229 = L_228.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_230 = V_7;
		float L_231 = L_230.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_232 = V_6;
		float L_233 = L_232.___y_1;
		L_226->___y_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_229, L_231)), L_233));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_234 = (&(&V_34)->___uv_3);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_235 = V_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_236 = L_235.___uv_3;
		float L_237 = L_236.___x_0;
		float L_238;
		L_238 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_13), NULL);
		float L_239;
		L_239 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_13), NULL);
		L_234->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_237, L_238)), L_239));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_240 = (&(&V_34)->___uv_3);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_241 = V_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_242 = L_241.___uv_3;
		float L_243 = L_242.___y_1;
		float L_244;
		L_244 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_13), NULL);
		float L_245;
		L_245 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_13), NULL);
		L_240->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_243, L_244)), L_245));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_246 = (&(&V_34)->___tint_2);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_247 = L_246;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_248 = (*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_247);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_249;
		L_249 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_248, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_250 = ___tint7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_251;
		L_251 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_249, L_250, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_252;
		L_252 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_251, NULL);
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_247 = L_252;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_253 = V_34;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_254 = L_253.___opacityColorPages_7;
		uint8_t L_255 = L_254.___b_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_256 = V_34;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_257 = L_256.___opacityColorPages_7;
		uint8_t L_258 = L_257.___a_4;
		int32_t L_259 = ___settingIndexOffset8;
		V_35 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_255<<8))|(int32_t)L_258)), L_259));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_260 = (&(&V_34)->___opacityColorPages_7);
		uint32_t L_261 = V_35;
		L_260->___b_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_261>>8)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_262 = (&(&V_34)->___opacityColorPages_7);
		uint32_t L_263 = V_35;
		L_262->___a_4 = (uint8_t)((int32_t)(uint8_t)L_263);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_264 = V_12;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_265 = V_34;
		NullCheck(L_264);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_264, L_265, NULL);
		int32_t L_266 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_266, 1));
	}

IL_068d:
	{
		int32_t L_267 = V_33;
		int32_t L_268 = V_8;
		V_36 = (bool)((((int32_t)L_267) < ((int32_t)L_268))? 1 : 0);
		bool L_269 = V_36;
		if (L_269)
		{
			goto IL_0568;
		}
	}
	{
		int32_t* L_270 = ___finalVertexCount10;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_271 = V_12;
		NullCheck(L_271);
		int32_t L_272;
		L_272 = MeshWriteData_get_vertexCount_mC7F08B0C2375FE64C467AB543850F262EB0E5F23(L_271, NULL);
		*((int32_t*)L_270) = (int32_t)L_272;
		int32_t* L_273 = ___finalIndexCount11;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_274 = V_12;
		NullCheck(L_274);
		int32_t L_275;
		L_275 = MeshWriteData_get_indexCount_m72A293A2983CF6CA09F2C066B71E227D8C9447F3(L_274, NULL);
		*((int32_t*)L_273) = (int32_t)L_275;
	}

IL_06b0:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::SplitTriangle(UnityEngine.UIElements.Vertex*,System.UInt16*,System.Int32&,System.Int32,System.Int32&,System.Single,System.Single,UnityEngine.Vector4,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vertices0, uint16_t* ___indices1, int32_t* ___vertexCount2, int32_t ___indexToProcess3, int32_t* ___indexCount4, float ___svgWidth5, float ___svgHeight6, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sliceLTRB7, int32_t ___sliceIndex8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool* V_2 = NULL;
	float V_3 = 0.0f;
	int32_t* V_4 = NULL;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_5 = NULL;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_6 = NULL;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** V_17 = NULL;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_21;
	memset((&V_21), 0, sizeof(V_21));
	int32_t V_22 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_23 = NULL;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_27;
	memset((&V_27), 0, sizeof(V_27));
	int32_t V_28 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	int32_t V_32 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B17_0 = 0;
	{
		int32_t L_0 = ___sliceIndex8;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___sliceIndex8;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000d;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_000e;
	}

IL_000d:
	{
		G_B4_0 = 0;
	}

IL_000e:
	{
		V_0 = G_B4_0;
		V_1 = 0;
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)3));
		memset(L_2, 0, ((uintptr_t)3));
		V_2 = (bool*)(L_2);
		bool* L_3 = V_2;
		*((int8_t*)L_3) = (int8_t)0;
		bool* L_4 = V_2;
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_4, 1))) = (int8_t)0;
		bool* L_5 = V_2;
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_5, 2))) = (int8_t)0;
		int32_t L_6 = ___sliceIndex8;
		float L_7;
		L_7 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB7), L_6, NULL);
		V_3 = L_7;
		int32_t L_8 = ___sliceIndex8;
		V_8 = (bool)((((int32_t)L_8) == ((int32_t)3))? 1 : 0);
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		float L_10 = ___svgHeight6;
		float L_11 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		goto IL_0053;
	}

IL_0041:
	{
		int32_t L_12 = ___sliceIndex8;
		V_9 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		bool L_13 = V_9;
		if (!L_13)
		{
			goto IL_0053;
		}
	}
	{
		float L_14 = ___svgWidth5;
		float L_15 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_0053:
	{
		int8_t* L_16 = (int8_t*) alloca(((uintptr_t)((int32_t)12)));
		memset(L_16, 0, ((uintptr_t)((int32_t)12)));
		V_4 = (int32_t*)(L_16);
		int32_t* L_17 = V_4;
		uint16_t* L_18 = ___indices1;
		int32_t L_19 = ___indexToProcess3;
		int32_t L_20 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_19), 2)))));
		*((int32_t*)L_17) = (int32_t)L_20;
		int32_t* L_21 = V_4;
		uint16_t* L_22 = ___indices1;
		int32_t L_23 = ___indexToProcess3;
		int32_t L_24 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_23, 1))), 2)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, 4))) = (int32_t)L_24;
		int32_t* L_25 = V_4;
		uint16_t* L_26 = ___indices1;
		int32_t L_27 = ___indexToProcess3;
		int32_t L_28 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_27, 2))), 2)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4))))) = (int32_t)L_28;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_29 = ___vertices0;
		int32_t* L_30 = V_4;
		int32_t L_31 = *((int32_t*)L_30);
		uint32_t L_32 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		V_5 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((uintptr_t)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), (int32_t)L_32)))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_33 = ___vertices0;
		int32_t* L_34 = V_4;
		int32_t L_35 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, 4)));
		uint32_t L_36 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		V_6 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((uintptr_t)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_33, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_35), (int32_t)L_36)))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_37 = ___vertices0;
		int32_t* L_38 = V_4;
		int32_t L_39 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 4)))));
		uint32_t L_40 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		V_7 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((uintptr_t)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_39), (int32_t)L_40)))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_41 = V_5;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&L_41->___position_1);
		int32_t L_43 = V_0;
		float L_44;
		L_44 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_42, L_43, NULL);
		float L_45 = V_3;
		V_10 = (bool)((((float)L_44) < ((float)L_45))? 1 : 0);
		bool L_46 = V_10;
		if (!L_46)
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		bool* L_48 = V_2;
		*((int8_t*)L_48) = (int8_t)1;
	}

IL_00d9:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_49 = V_6;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&L_49->___position_1);
		int32_t L_51 = V_0;
		float L_52;
		L_52 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_50, L_51, NULL);
		float L_53 = V_3;
		V_11 = (bool)((((float)L_52) < ((float)L_53))? 1 : 0);
		bool L_54 = V_11;
		if (!L_54)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		bool* L_56 = V_2;
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_56, 1))) = (int8_t)1;
	}

IL_00fa:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_57 = V_7;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = (&L_57->___position_1);
		int32_t L_59 = V_0;
		float L_60;
		L_60 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_58, L_59, NULL);
		float L_61 = V_3;
		V_12 = (bool)((((float)L_60) < ((float)L_61))? 1 : 0);
		bool L_62 = V_12;
		if (!L_62)
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		bool* L_64 = V_2;
		*((int8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_64, 2))) = (int8_t)1;
	}

IL_011b:
	{
		int32_t L_65 = V_1;
		if ((((int32_t)L_65) == ((int32_t)1)))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_66 = V_1;
		G_B17_0 = ((((int32_t)L_66) == ((int32_t)2))? 1 : 0);
		goto IL_0126;
	}

IL_0125:
	{
		G_B17_0 = 1;
	}

IL_0126:
	{
		V_13 = (bool)G_B17_0;
		bool L_67 = V_13;
		if (!L_67)
		{
			goto IL_05bd;
		}
	}
	{
		V_14 = 0;
		bool* L_68 = V_2;
		int32_t L_69 = *((uint8_t*)L_68);
		bool* L_70 = V_2;
		int32_t L_71 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_70, 1)));
		V_30 = (bool)((((int32_t)L_69) == ((int32_t)L_71))? 1 : 0);
		bool L_72 = V_30;
		if (!L_72)
		{
			goto IL_0148;
		}
	}
	{
		V_14 = 2;
		goto IL_015b;
	}

IL_0148:
	{
		bool* L_73 = V_2;
		int32_t L_74 = *((uint8_t*)L_73);
		bool* L_75 = V_2;
		int32_t L_76 = *((uint8_t*)((bool*)il2cpp_codegen_add((intptr_t)L_75, 2)));
		V_31 = (bool)((((int32_t)L_74) == ((int32_t)L_76))? 1 : 0);
		bool L_77 = V_31;
		if (!L_77)
		{
			goto IL_015b;
		}
	}
	{
		V_14 = 1;
	}

IL_015b:
	{
		int32_t L_78 = V_14;
		V_15 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_78, 1))%3));
		int32_t L_79 = V_14;
		V_16 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_79, 2))%3));
		uint32_t L_80 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		if ((uintptr_t)((uintptr_t)3) * (uintptr_t)L_80 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72_RuntimeMethod_var);
		int8_t* L_81 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)3), (int32_t)L_80)));
		memset(L_81, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)3), (int32_t)L_80)));
		V_17 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)(L_81);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_82 = V_17;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_83 = V_5;
		*((intptr_t*)L_82) = (intptr_t)L_83;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_84 = V_17;
		uint32_t L_85 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_86 = V_6;
		*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_84, (int32_t)L_85))) = (intptr_t)L_86;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_87 = V_17;
		uint32_t L_88 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_89 = V_7;
		*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_88))))) = (intptr_t)L_89;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_90 = V_17;
		int32_t L_91 = V_15;
		uint32_t L_92 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_93 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_91), (int32_t)L_92)))))))->___position_1);
		int32_t L_94 = V_0;
		float L_95;
		L_95 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_93, L_94, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_96 = V_17;
		int32_t L_97 = V_14;
		uint32_t L_98 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_96, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_97), (int32_t)L_98)))))))->___position_1);
		int32_t L_100 = V_0;
		float L_101;
		L_101 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_99, L_100, NULL);
		V_18 = ((float)il2cpp_codegen_subtract(L_95, L_101));
		float L_102 = V_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_103 = V_17;
		int32_t L_104 = V_14;
		uint32_t L_105 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_104), (int32_t)L_105)))))))->___position_1);
		int32_t L_107 = V_0;
		float L_108;
		L_108 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_106, L_107, NULL);
		V_19 = ((float)il2cpp_codegen_subtract(L_102, L_108));
		float L_109 = V_19;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_110;
		L_110 = fabsf(L_109);
		float L_111 = V_18;
		float L_112;
		L_112 = fabsf(L_111);
		V_20 = ((float)(L_110/L_112));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_113 = V_17;
		int32_t L_114 = V_15;
		uint32_t L_115 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_113, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_114), (int32_t)L_115)))))))->___position_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_117 = V_17;
		int32_t L_118 = V_14;
		uint32_t L_119 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_117, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_118), (int32_t)L_119)))))))->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_116, L_120, NULL);
		float L_122 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_121, L_122, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_124 = V_17;
		int32_t L_125 = V_14;
		uint32_t L_126 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_124, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_125), (int32_t)L_126)))))))->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_123, L_127, NULL);
		V_21 = L_128;
		int32_t* L_129 = ___vertexCount2;
		int32_t* L_130 = ___vertexCount2;
		int32_t L_131 = *((int32_t*)L_130);
		V_32 = L_131;
		int32_t L_132 = V_32;
		*((int32_t*)L_129) = (int32_t)((int32_t)il2cpp_codegen_add(L_132, 1));
		int32_t L_133 = V_32;
		V_22 = L_133;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_134 = ___vertices0;
		int32_t L_135 = V_22;
		uint32_t L_136 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		V_23 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((uintptr_t)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_134, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_135), (int32_t)L_136)))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_137 = V_23;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_138 = V_17;
		int32_t L_139 = V_14;
		uint32_t L_140 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_141 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_138, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_139), (int32_t)L_140)))))));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_137 = L_141;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_142 = V_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = V_21;
		NullCheck(L_142);
		L_142->___position_1 = L_143;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_144 = V_23;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_145 = V_17;
		int32_t L_146 = V_14;
		uint32_t L_147 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_148 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_145, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_146), (int32_t)L_147)))))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_149;
		L_149 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_148, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_150 = V_17;
		int32_t L_151 = V_15;
		uint32_t L_152 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_153 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_154;
		L_154 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_153, NULL);
		float L_155 = V_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156;
		L_156 = Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline(L_149, L_154, L_155, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_157;
		L_157 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_156, NULL);
		NullCheck(L_144);
		L_144->___tint_2 = L_157;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_158 = V_23;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_159 = V_17;
		int32_t L_160 = V_14;
		uint32_t L_161 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_159, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_160), (int32_t)L_161)))))))->___uv_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_163 = V_17;
		int32_t L_164 = V_15;
		uint32_t L_165 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_166 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_164), (int32_t)L_165)))))))->___uv_3;
		float L_167 = V_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_168;
		L_168 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_162, L_166, L_167, NULL);
		NullCheck(L_158);
		L_158->___uv_3 = L_168;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_169 = V_23;
		NullCheck(L_169);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_170 = (&L_169->___opacityColorPages_7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_171 = V_17;
		int32_t L_172 = V_14;
		uint32_t L_173 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_174 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_171, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_172), (int32_t)L_173)))))))->___opacityColorPages_7);
		uint8_t L_175 = L_174->___a_4;
		L_170->___a_4 = L_175;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_176 = V_23;
		NullCheck(L_176);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_177 = (&L_176->___opacityColorPages_7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_178 = V_17;
		int32_t L_179 = V_14;
		uint32_t L_180 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_181 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_178, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_179), (int32_t)L_180)))))))->___opacityColorPages_7);
		uint8_t L_182 = L_181->___b_3;
		L_177->___b_3 = L_182;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_183 = V_17;
		int32_t L_184 = V_16;
		uint32_t L_185 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_186 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_183, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_184), (int32_t)L_185)))))))->___position_1);
		int32_t L_187 = V_0;
		float L_188;
		L_188 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_186, L_187, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_189 = V_17;
		int32_t L_190 = V_14;
		uint32_t L_191 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_192 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_189, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_190), (int32_t)L_191)))))))->___position_1);
		int32_t L_193 = V_0;
		float L_194;
		L_194 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_192, L_193, NULL);
		V_24 = ((float)il2cpp_codegen_subtract(L_188, L_194));
		float L_195 = V_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_196 = V_17;
		int32_t L_197 = V_14;
		uint32_t L_198 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_199 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_196, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_197), (int32_t)L_198)))))))->___position_1);
		int32_t L_200 = V_0;
		float L_201;
		L_201 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_199, L_200, NULL);
		V_25 = ((float)il2cpp_codegen_subtract(L_195, L_201));
		float L_202 = V_25;
		float L_203;
		L_203 = fabsf(L_202);
		float L_204 = V_24;
		float L_205;
		L_205 = fabsf(L_204);
		V_26 = ((float)(L_203/L_205));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_206 = V_17;
		int32_t L_207 = V_16;
		uint32_t L_208 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_206, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_207), (int32_t)L_208)))))))->___position_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_210 = V_17;
		int32_t L_211 = V_14;
		uint32_t L_212 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_210, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_211), (int32_t)L_212)))))))->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214;
		L_214 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_209, L_213, NULL);
		float L_215 = V_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_216;
		L_216 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_214, L_215, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_217 = V_17;
		int32_t L_218 = V_14;
		uint32_t L_219 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_217, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_218), (int32_t)L_219)))))))->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_221;
		L_221 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_216, L_220, NULL);
		V_27 = L_221;
		int32_t* L_222 = ___vertexCount2;
		int32_t* L_223 = ___vertexCount2;
		int32_t L_224 = *((int32_t*)L_223);
		V_32 = L_224;
		int32_t L_225 = V_32;
		*((int32_t*)L_222) = (int32_t)((int32_t)il2cpp_codegen_add(L_225, 1));
		int32_t L_226 = V_32;
		V_28 = L_226;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_227 = ___vertices0;
		int32_t L_228 = V_28;
		uint32_t L_229 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		V_29 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((uintptr_t)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_227, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_228), (int32_t)L_229)))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_230 = V_29;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_231 = V_17;
		int32_t L_232 = V_14;
		uint32_t L_233 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_234 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_231, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_232), (int32_t)L_233)))))));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_230 = L_234;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_235 = V_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_236 = V_27;
		NullCheck(L_235);
		L_235->___position_1 = L_236;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_237 = V_29;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_238 = V_17;
		int32_t L_239 = V_14;
		uint32_t L_240 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_241 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_238, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_239), (int32_t)L_240)))))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_242;
		L_242 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_241, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_243 = V_17;
		int32_t L_244 = V_16;
		uint32_t L_245 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_246 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_243, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_244), (int32_t)L_245)))))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_247;
		L_247 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_246, NULL);
		float L_248 = V_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_249;
		L_249 = Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline(L_242, L_247, L_248, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_250;
		L_250 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_249, NULL);
		NullCheck(L_237);
		L_237->___tint_2 = L_250;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_251 = V_29;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_252 = V_17;
		int32_t L_253 = V_14;
		uint32_t L_254 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_255 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_252, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_253), (int32_t)L_254)))))))->___uv_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_256 = V_17;
		int32_t L_257 = V_16;
		uint32_t L_258 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_259 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_256, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_257), (int32_t)L_258)))))))->___uv_3;
		float L_260 = V_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_261;
		L_261 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_255, L_259, L_260, NULL);
		NullCheck(L_251);
		L_251->___uv_3 = L_261;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_262 = V_29;
		NullCheck(L_262);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_263 = (&L_262->___opacityColorPages_7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_264 = V_17;
		int32_t L_265 = V_14;
		uint32_t L_266 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_267 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_264, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_265), (int32_t)L_266)))))))->___opacityColorPages_7);
		uint8_t L_268 = L_267->___a_4;
		L_263->___a_4 = L_268;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_269 = V_29;
		NullCheck(L_269);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_270 = (&L_269->___opacityColorPages_7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7** L_271 = V_17;
		int32_t L_272 = V_14;
		uint32_t L_273 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_274 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(*((intptr_t*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7**)il2cpp_codegen_add((intptr_t)L_271, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_272), (int32_t)L_273)))))))->___opacityColorPages_7);
		uint8_t L_275 = L_274->___b_3;
		L_270->___b_3 = L_275;
		uint16_t* L_276 = ___indices1;
		int32_t L_277 = ___indexToProcess3;
		int32_t L_278 = V_22;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_276, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_277), 2))))) = (int16_t)((int32_t)(uint16_t)L_278);
		uint16_t* L_279 = ___indices1;
		int32_t L_280 = ___indexToProcess3;
		int32_t* L_281 = V_4;
		int32_t L_282 = V_15;
		int32_t L_283 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_281, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_282), 4)))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_279, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_280, 1))), 2))))) = (int16_t)((int32_t)(uint16_t)L_283);
		uint16_t* L_284 = ___indices1;
		int32_t L_285 = ___indexToProcess3;
		int32_t* L_286 = V_4;
		int32_t L_287 = V_16;
		int32_t L_288 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_286, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_287), 4)))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_284, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_285, 2))), 2))))) = (int16_t)((int32_t)(uint16_t)L_288);
		uint16_t* L_289 = ___indices1;
		int32_t* L_290 = ___indexCount4;
		int32_t* L_291 = ___indexCount4;
		int32_t L_292 = *((int32_t*)L_291);
		V_32 = L_292;
		int32_t L_293 = V_32;
		*((int32_t*)L_290) = (int32_t)((int32_t)il2cpp_codegen_add(L_293, 1));
		int32_t L_294 = V_32;
		int32_t* L_295 = V_4;
		int32_t L_296 = V_16;
		int32_t L_297 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_295, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_296), 4)))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_289, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_294), 2))))) = (int16_t)((int32_t)(uint16_t)L_297);
		uint16_t* L_298 = ___indices1;
		int32_t* L_299 = ___indexCount4;
		int32_t* L_300 = ___indexCount4;
		int32_t L_301 = *((int32_t*)L_300);
		V_32 = L_301;
		int32_t L_302 = V_32;
		*((int32_t*)L_299) = (int32_t)((int32_t)il2cpp_codegen_add(L_302, 1));
		int32_t L_303 = V_32;
		int32_t L_304 = V_28;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_298, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_303), 2))))) = (int16_t)((int32_t)(uint16_t)L_304);
		uint16_t* L_305 = ___indices1;
		int32_t* L_306 = ___indexCount4;
		int32_t* L_307 = ___indexCount4;
		int32_t L_308 = *((int32_t*)L_307);
		V_32 = L_308;
		int32_t L_309 = V_32;
		*((int32_t*)L_306) = (int32_t)((int32_t)il2cpp_codegen_add(L_309, 1));
		int32_t L_310 = V_32;
		int32_t L_311 = V_22;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_305, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_310), 2))))) = (int16_t)((int32_t)(uint16_t)L_311);
		uint16_t* L_312 = ___indices1;
		int32_t* L_313 = ___indexCount4;
		int32_t* L_314 = ___indexCount4;
		int32_t L_315 = *((int32_t*)L_314);
		V_32 = L_315;
		int32_t L_316 = V_32;
		*((int32_t*)L_313) = (int32_t)((int32_t)il2cpp_codegen_add(L_316, 1));
		int32_t L_317 = V_32;
		int32_t L_318 = V_22;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_312, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_317), 2))))) = (int16_t)((int32_t)(uint16_t)L_318);
		uint16_t* L_319 = ___indices1;
		int32_t* L_320 = ___indexCount4;
		int32_t* L_321 = ___indexCount4;
		int32_t L_322 = *((int32_t*)L_321);
		V_32 = L_322;
		int32_t L_323 = V_32;
		*((int32_t*)L_320) = (int32_t)((int32_t)il2cpp_codegen_add(L_323, 1));
		int32_t L_324 = V_32;
		int32_t L_325 = V_28;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_319, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_324), 2))))) = (int16_t)((int32_t)(uint16_t)L_325);
		uint16_t* L_326 = ___indices1;
		int32_t* L_327 = ___indexCount4;
		int32_t* L_328 = ___indexCount4;
		int32_t L_329 = *((int32_t*)L_328);
		V_32 = L_329;
		int32_t L_330 = V_32;
		*((int32_t*)L_327) = (int32_t)((int32_t)il2cpp_codegen_add(L_330, 1));
		int32_t L_331 = V_32;
		int32_t* L_332 = V_4;
		int32_t L_333 = V_14;
		int32_t L_334 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_332, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_333), 4)))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_326, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_331), 2))))) = (int16_t)((int32_t)(uint16_t)L_334);
	}

IL_05bd:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::ScaleSplittedTriangles(UnityEngine.UIElements.Vertex*,System.Int32,System.Single,System.Single,UnityEngine.Rect,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_ScaleSplittedTriangles_m3A2C3C563708C686D06663BB7B367D927E87E679 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vertices0, int32_t ___vertexCount1, float ___svgWidth2, float ___svgHeight3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sliceLTRB5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_25 = NULL;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___sliceLTRB5;
		float L_1 = L_0.___x_1;
		V_0 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___sliceLTRB5;
		float L_3 = L_2.___z_3;
		V_1 = L_3;
		float L_4 = ___svgWidth2;
		float L_5 = V_0;
		float L_6 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_4, ((float)il2cpp_codegen_add(L_5, L_6))));
		float L_7 = ___svgWidth2;
		V_3 = L_7;
		float L_8 = V_3;
		float L_9 = V_2;
		V_4 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		V_5 = (1.0f);
		V_6 = (1.0f);
		V_7 = (0.0f);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		float L_11 = V_4;
		V_20 = (bool)((((float)L_10) < ((float)L_11))? 1 : 0);
		bool L_12 = V_20;
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		V_6 = (0.0f);
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		float L_14 = V_4;
		V_5 = ((float)(L_13/L_14));
		goto IL_0092;
	}

IL_005b:
	{
		float L_15 = V_2;
		V_21 = (bool)((((float)L_15) < ((float)(0.00100000005f)))? 1 : 0);
		bool L_16 = V_21;
		if (!L_16)
		{
			goto IL_0081;
		}
	}
	{
		V_6 = (1.0f);
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		float L_18 = V_4;
		V_7 = ((float)il2cpp_codegen_subtract(L_17, L_18));
		goto IL_0091;
	}

IL_0081:
	{
		float L_19;
		L_19 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___targetRect4), NULL);
		float L_20 = V_4;
		float L_21 = V_2;
		V_6 = ((float)(((float)il2cpp_codegen_subtract(L_19, L_20))/L_21));
	}

IL_0091:
	{
	}

IL_0092:
	{
		float L_22 = V_0;
		float L_23 = V_5;
		V_8 = ((float)il2cpp_codegen_multiply(L_22, L_23));
		float L_24 = V_0;
		float L_25 = V_5;
		float L_26 = V_2;
		float L_27 = V_6;
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_26, L_27))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = ___sliceLTRB5;
		float L_29 = L_28.___y_2;
		V_10 = L_29;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = ___sliceLTRB5;
		float L_31 = L_30.___w_4;
		V_11 = L_31;
		float L_32 = ___svgHeight3;
		float L_33 = V_10;
		float L_34 = V_11;
		V_12 = ((float)il2cpp_codegen_subtract(L_32, ((float)il2cpp_codegen_add(L_33, L_34))));
		float L_35 = ___svgHeight3;
		V_13 = L_35;
		float L_36 = V_13;
		float L_37 = V_12;
		V_14 = ((float)il2cpp_codegen_subtract(L_36, L_37));
		V_15 = (1.0f);
		V_16 = (1.0f);
		V_17 = (0.0f);
		float L_38;
		L_38 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		float L_39 = V_14;
		V_22 = (bool)((((float)L_38) < ((float)L_39))? 1 : 0);
		bool L_40 = V_22;
		if (!L_40)
		{
			goto IL_0105;
		}
	}
	{
		V_16 = (0.0f);
		float L_41;
		L_41 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		float L_42 = V_14;
		V_15 = ((float)(L_41/L_42));
		goto IL_013e;
	}

IL_0105:
	{
		float L_43 = V_12;
		V_23 = (bool)((((float)L_43) < ((float)(0.00100000005f)))? 1 : 0);
		bool L_44 = V_23;
		if (!L_44)
		{
			goto IL_012c;
		}
	}
	{
		V_16 = (1.0f);
		float L_45;
		L_45 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		float L_46 = V_14;
		V_17 = ((float)il2cpp_codegen_subtract(L_45, L_46));
		goto IL_013d;
	}

IL_012c:
	{
		float L_47;
		L_47 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___targetRect4), NULL);
		float L_48 = V_14;
		float L_49 = V_12;
		V_16 = ((float)(((float)il2cpp_codegen_subtract(L_47, L_48))/L_49));
	}

IL_013d:
	{
	}

IL_013e:
	{
		float L_50 = V_10;
		float L_51 = V_15;
		V_18 = ((float)il2cpp_codegen_multiply(L_50, L_51));
		float L_52 = V_10;
		float L_53 = V_15;
		float L_54 = V_12;
		float L_55 = V_16;
		V_19 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_52, L_53)), ((float)il2cpp_codegen_multiply(L_54, L_55))));
		V_24 = 0;
		goto IL_02da;
	}

IL_015a:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_56 = ___vertices0;
		int32_t L_57 = V_24;
		uint32_t L_58 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		V_25 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((uintptr_t)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_56, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_57), (int32_t)L_58)))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_59 = V_25;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_60 = (&L_59->___position_1);
		float L_61 = L_60->___x_2;
		float L_62 = V_0;
		V_26 = (bool)((((float)L_61) < ((float)L_62))? 1 : 0);
		bool L_63 = V_26;
		if (!L_63)
		{
			goto IL_01a6;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_64 = V_25;
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = (&L_64->___position_1);
		float L_66;
		L_66 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___targetRect4), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_67 = V_25;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68 = (&L_67->___position_1);
		float L_69 = L_68->___x_2;
		float L_70 = V_5;
		L_65->___x_2 = ((float)il2cpp_codegen_add(L_66, ((float)il2cpp_codegen_multiply(L_69, L_70))));
		goto IL_021b;
	}

IL_01a6:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_71 = V_25;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = (&L_71->___position_1);
		float L_73 = L_72->___x_2;
		float L_74 = V_0;
		float L_75 = V_2;
		V_27 = (bool)((((float)L_73) < ((float)((float)il2cpp_codegen_add(L_74, L_75))))? 1 : 0);
		bool L_76 = V_27;
		if (!L_76)
		{
			goto IL_01ec;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_77 = V_25;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78 = (&L_77->___position_1);
		float L_79;
		L_79 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___targetRect4), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_80 = V_25;
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = (&L_80->___position_1);
		float L_82 = L_81->___x_2;
		float L_83 = V_0;
		float L_84 = V_6;
		float L_85 = V_8;
		float L_86 = V_7;
		L_78->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_79, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_82, L_83)), L_84)))), L_85)), L_86));
		goto IL_021b;
	}

IL_01ec:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_87 = V_25;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_88 = (&L_87->___position_1);
		float L_89;
		L_89 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___targetRect4), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_90 = V_25;
		NullCheck(L_90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_91 = (&L_90->___position_1);
		float L_92 = L_91->___x_2;
		float L_93 = V_0;
		float L_94 = V_2;
		float L_95 = V_5;
		float L_96 = V_9;
		float L_97 = V_7;
		L_88->___x_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_89, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_92, ((float)il2cpp_codegen_add(L_93, L_94)))), L_95)))), L_96)), L_97));
	}

IL_021b:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_98 = V_25;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = (&L_98->___position_1);
		float L_100 = L_99->___y_3;
		float L_101 = V_10;
		V_28 = (bool)((((float)L_100) < ((float)L_101))? 1 : 0);
		bool L_102 = V_28;
		if (!L_102)
		{
			goto IL_0259;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_103 = V_25;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = (&L_103->___position_1);
		float L_105;
		L_105 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___targetRect4), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_106 = V_25;
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_107 = (&L_106->___position_1);
		float L_108 = L_107->___y_3;
		float L_109 = V_15;
		L_104->___y_3 = ((float)il2cpp_codegen_add(L_105, ((float)il2cpp_codegen_multiply(L_108, L_109))));
		goto IL_02d3;
	}

IL_0259:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_110 = V_25;
		NullCheck(L_110);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_111 = (&L_110->___position_1);
		float L_112 = L_111->___y_3;
		float L_113 = V_10;
		float L_114 = V_12;
		V_29 = (bool)((((float)L_112) < ((float)((float)il2cpp_codegen_add(L_113, L_114))))? 1 : 0);
		bool L_115 = V_29;
		if (!L_115)
		{
			goto IL_02a2;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_116 = V_25;
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_117 = (&L_116->___position_1);
		float L_118;
		L_118 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___targetRect4), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_119 = V_25;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_120 = (&L_119->___position_1);
		float L_121 = L_120->___y_3;
		float L_122 = V_10;
		float L_123 = V_16;
		float L_124 = V_18;
		float L_125 = V_17;
		L_117->___y_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_118, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_121, L_122)), L_123)))), L_124)), L_125));
		goto IL_02d3;
	}

IL_02a2:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_126 = V_25;
		NullCheck(L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_127 = (&L_126->___position_1);
		float L_128;
		L_128 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___targetRect4), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_129 = V_25;
		NullCheck(L_129);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_130 = (&L_129->___position_1);
		float L_131 = L_130->___y_3;
		float L_132 = V_10;
		float L_133 = V_12;
		float L_134 = V_15;
		float L_135 = V_19;
		float L_136 = V_17;
		L_127->___y_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_128, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_131, ((float)il2cpp_codegen_add(L_132, L_133)))), L_134)))), L_135)), L_136));
	}

IL_02d3:
	{
		int32_t L_137 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_02da:
	{
		int32_t L_138 = V_24;
		int32_t L_139 = ___vertexCount1;
		V_30 = (bool)((((int32_t)L_138) < ((int32_t)L_139))? 1 : 0);
		bool L_140 = V_30;
		if (L_140)
		{
			goto IL_015a;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::MakeVectorGraphics9SliceBackground(UnityEngine.UIElements.Vertex[],System.UInt16[],System.Single,System.Single,UnityEngine.Rect,UnityEngine.Vector4,System.Boolean,UnityEngine.Color,System.Int32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146 (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___svgVertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___svgIndices1, float ___svgWidth2, float ___svgHeight3, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___targetRect4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___sliceLTRB5, bool ___stretch6, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tint7, int32_t ___settingIndexOffset8, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_5 = NULL;
	uint16_t* V_6 = NULL;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_21;
	memset((&V_21), 0, sizeof(V_21));
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	int32_t V_30 = 0;
	uint32_t V_31 = 0;
	bool V_32 = false;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	int32_t V_40 = 0;
	bool V_41 = false;
	int32_t V_42 = 0;
	bool V_43 = false;
	{
		bool L_0 = ___stretch6;
		V_12 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_12;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_2 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0ADC594ACFE7CADF74F62778AEE939E06CE5837F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var)));
	}

IL_0017:
	{
		V_13 = 0;
		goto IL_0041;
	}

IL_001c:
	{
		int32_t L_3 = V_13;
		int32_t L_4 = V_13;
		float L_5;
		L_5 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_5, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline((&___sliceLTRB5), L_3, L_6, NULL);
		int32_t L_7 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0041:
	{
		int32_t L_8 = V_13;
		V_14 = (bool)((((int32_t)L_8) < ((int32_t)4))? 1 : 0);
		bool L_9 = V_14;
		if (L_9)
		{
			goto IL_001c;
		}
	}
	{
		float L_10;
		L_10 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), 0, NULL);
		float L_11 = ___svgWidth2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_10, L_11, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline((&___sliceLTRB5), 0, L_12, NULL);
		float L_13;
		L_13 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), 1, NULL);
		float L_14 = ___svgHeight3;
		float L_15;
		L_15 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_13, L_14, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline((&___sliceLTRB5), 1, L_15, NULL);
		float L_16;
		L_16 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), 2, NULL);
		float L_17 = ___svgWidth2;
		float L_18;
		L_18 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), 0, NULL);
		float L_19;
		L_19 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_16, ((float)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline((&___sliceLTRB5), 2, L_19, NULL);
		float L_20;
		L_20 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), 3, NULL);
		float L_21 = ___svgHeight3;
		float L_22;
		L_22 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___sliceLTRB5), 1, NULL);
		float L_23;
		L_23 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_20, ((float)il2cpp_codegen_subtract(L_21, L_22)), NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline((&___sliceLTRB5), 3, L_23, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = ___svgIndices1;
		NullCheck(L_24);
		V_0 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
		V_1 = 0;
		V_2 = 0;
		V_3 = ((int32_t)243);
		int32_t L_25 = V_3;
		if ((uintptr_t)((uintptr_t)L_25) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var);
		int8_t* L_26 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_25), 2)));
		memset(L_26, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_25), 2)));
		V_4 = (uint16_t*)(L_26);
		int32_t L_27 = V_3;
		uint32_t L_28 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		if ((uintptr_t)((uintptr_t)L_27) * (uintptr_t)L_28 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var);
		int8_t* L_29 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_27), (int32_t)L_28)));
		memset(L_29, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_27), (int32_t)L_28)));
		V_5 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(L_29);
		V_15 = 0;
		goto IL_01bb;
	}

IL_00e5:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_30 = ___svgIndices1;
		int32_t L_31 = V_15;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint16_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_16 = L_33;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_34 = ___svgIndices1;
		int32_t L_35 = V_15;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		uint16_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_17 = L_37;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38 = ___svgIndices1;
		int32_t L_39 = V_15;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 2));
		uint16_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_18 = L_41;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_42 = ___svgVertices0;
		int32_t L_43 = V_16;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_19 = L_45;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_46 = ___svgVertices0;
		int32_t L_47 = V_17;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_20 = L_49;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_50 = ___svgVertices0;
		int32_t L_51 = V_18;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_21 = L_53;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_54 = V_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_55 = V_19;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_54 = L_55;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_56 = V_5;
		uint32_t L_57 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_58 = V_20;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_56, (int32_t)L_57)) = L_58;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_59 = V_5;
		uint32_t L_60 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_61 = V_21;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_59, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_60)))) = L_61;
		uint16_t* L_62 = V_4;
		*((int16_t*)L_62) = (int16_t)0;
		uint16_t* L_63 = V_4;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_63, 2))) = (int16_t)1;
		uint16_t* L_64 = V_4;
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_64, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))))) = (int16_t)2;
		V_22 = 3;
		V_23 = 3;
		V_24 = 0;
		goto IL_019f;
	}

IL_0164:
	{
		int32_t L_65 = V_23;
		V_25 = L_65;
		V_26 = 0;
		goto IL_018c;
	}

IL_016e:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_66 = V_5;
		uint16_t* L_67 = V_4;
		int32_t L_68 = V_26;
		float L_69 = ___svgWidth2;
		float L_70 = ___svgHeight3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_71 = ___sliceLTRB5;
		int32_t L_72 = V_24;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72(L_66, L_67, (&V_22), L_68, (&V_23), L_69, L_70, L_71, L_72, NULL);
		int32_t L_73 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_73, 3));
	}

IL_018c:
	{
		int32_t L_74 = V_26;
		int32_t L_75 = V_25;
		V_27 = (bool)((((int32_t)L_74) < ((int32_t)L_75))? 1 : 0);
		bool L_76 = V_27;
		if (L_76)
		{
			goto IL_016e;
		}
	}
	{
		int32_t L_77 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_019f:
	{
		int32_t L_78 = V_24;
		V_28 = (bool)((((int32_t)L_78) < ((int32_t)4))? 1 : 0);
		bool L_79 = V_28;
		if (L_79)
		{
			goto IL_0164;
		}
	}
	{
		int32_t L_80 = V_1;
		int32_t L_81 = V_22;
		V_1 = ((int32_t)il2cpp_codegen_add(L_80, L_81));
		int32_t L_82 = V_2;
		int32_t L_83 = V_23;
		V_2 = ((int32_t)il2cpp_codegen_add(L_82, L_83));
		int32_t L_84 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_84, 3));
	}

IL_01bb:
	{
		int32_t L_85 = V_15;
		int32_t L_86 = V_0;
		V_29 = (bool)((((int32_t)L_85) < ((int32_t)L_86))? 1 : 0);
		bool L_87 = V_29;
		if (L_87)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t L_88 = V_2;
		if ((uintptr_t)((uintptr_t)L_88) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var);
		int8_t* L_89 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_88), 2)));
		memset(L_89, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_88), 2)));
		V_6 = (uint16_t*)(L_89);
		int32_t L_90 = V_1;
		uint32_t L_91 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)L_91 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_MakeVectorGraphics9SliceBackground_mFB1AD6D2B49DE6BC297FD2B3A3B04D8E11A40146_RuntimeMethod_var);
		int8_t* L_92 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), (int32_t)L_91)));
		memset(L_92, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), (int32_t)L_91)));
		V_7 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(L_92);
		V_30 = 0;
		goto IL_0274;
	}

IL_01e6:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_93 = V_7;
		int32_t L_94 = V_30;
		uint32_t L_95 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_96 = ___svgVertices0;
		int32_t L_97 = V_30;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), (int32_t)L_95)))) = L_99;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_100 = V_7;
		int32_t L_101 = V_30;
		uint32_t L_102 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_100, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_101), (int32_t)L_102)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_103 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_100, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_101), (int32_t)L_102))))->___opacityColorPages_7);
		uint8_t L_104 = L_103->___b_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_105 = V_7;
		int32_t L_106 = V_30;
		uint32_t L_107 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_106), (int32_t)L_107)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_108 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_106), (int32_t)L_107))))->___opacityColorPages_7);
		uint8_t L_109 = L_108->___a_4;
		int32_t L_110 = ___settingIndexOffset8;
		V_31 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_104<<8))|(int32_t)L_109)), L_110));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_111 = V_7;
		int32_t L_112 = V_30;
		uint32_t L_113 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_111, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_112), (int32_t)L_113)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_114 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_111, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_112), (int32_t)L_113))))->___opacityColorPages_7);
		uint32_t L_115 = V_31;
		L_114->___b_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_115>>8)));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_116 = V_7;
		int32_t L_117 = V_30;
		uint32_t L_118 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), (int32_t)L_118)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_119 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_116, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_117), (int32_t)L_118))))->___opacityColorPages_7);
		uint32_t L_120 = V_31;
		L_119->___a_4 = (uint8_t)((int32_t)(uint8_t)L_120);
		int32_t L_121 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_0274:
	{
		int32_t L_122 = V_30;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_123 = ___svgVertices0;
		NullCheck(L_123);
		V_32 = (bool)((((int32_t)L_122) < ((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length))))? 1 : 0);
		bool L_124 = V_32;
		if (L_124)
		{
			goto IL_01e6;
		}
	}
	{
		V_8 = 0;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_125 = ___svgVertices0;
		NullCheck(L_125);
		V_9 = ((int32_t)(((RuntimeArray*)L_125)->max_length));
		V_10 = 0;
		V_33 = 0;
		goto IL_0329;
	}

IL_0297:
	{
		int32_t L_126 = V_8;
		V_10 = L_126;
		uint16_t* L_127 = V_6;
		int32_t L_128 = V_8;
		int32_t L_129 = L_128;
		V_8 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_130 = ___svgIndices1;
		int32_t L_131 = V_33;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		uint16_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_129), 2))))) = (int16_t)L_133;
		uint16_t* L_134 = V_6;
		int32_t L_135 = V_8;
		int32_t L_136 = L_135;
		V_8 = ((int32_t)il2cpp_codegen_add(L_136, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_137 = ___svgIndices1;
		int32_t L_138 = V_33;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		uint16_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_134, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 2))))) = (int16_t)L_140;
		uint16_t* L_141 = V_6;
		int32_t L_142 = V_8;
		int32_t L_143 = L_142;
		V_8 = ((int32_t)il2cpp_codegen_add(L_143, 1));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_144 = ___svgIndices1;
		int32_t L_145 = V_33;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_add(L_145, 2));
		uint16_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_141, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_143), 2))))) = (int16_t)L_147;
		V_34 = 0;
		goto IL_0317;
	}

IL_02db:
	{
		int32_t L_148 = V_8;
		V_35 = L_148;
		int32_t L_149 = V_10;
		V_36 = L_149;
		goto IL_0304;
	}

IL_02e6:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_150 = V_7;
		uint16_t* L_151 = V_6;
		int32_t L_152 = V_36;
		float L_153 = ___svgWidth2;
		float L_154 = ___svgHeight3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_155 = ___sliceLTRB5;
		int32_t L_156 = V_34;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_SplitTriangle_m92A8946C0B4CA9BC61429B8112D120CE52F83C72(L_150, L_151, (&V_9), L_152, (&V_8), L_153, L_154, L_155, L_156, NULL);
		int32_t L_157 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_157, 3));
	}

IL_0304:
	{
		int32_t L_158 = V_36;
		int32_t L_159 = V_35;
		V_37 = (bool)((((int32_t)L_158) < ((int32_t)L_159))? 1 : 0);
		bool L_160 = V_37;
		if (L_160)
		{
			goto IL_02e6;
		}
	}
	{
		int32_t L_161 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0317:
	{
		int32_t L_162 = V_34;
		V_38 = (bool)((((int32_t)L_162) < ((int32_t)4))? 1 : 0);
		bool L_163 = V_38;
		if (L_163)
		{
			goto IL_02db;
		}
	}
	{
		int32_t L_164 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_164, 3));
	}

IL_0329:
	{
		int32_t L_165 = V_33;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_166 = ___svgIndices1;
		NullCheck(L_166);
		V_39 = (bool)((((int32_t)L_165) < ((int32_t)((int32_t)(((RuntimeArray*)L_166)->max_length))))? 1 : 0);
		bool L_167 = V_39;
		if (L_167)
		{
			goto IL_0297;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_168 = V_7;
		int32_t L_169 = V_9;
		float L_170 = ___svgWidth2;
		float L_171 = ___svgHeight3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_172 = ___targetRect4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_173 = ___sliceLTRB5;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_ScaleSplittedTriangles_m3A2C3C563708C686D06663BB7B367D927E87E679(L_168, L_169, L_170, L_171, L_172, L_173, NULL);
		AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 L_174 = ___meshAlloc9;
		Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* L_175 = L_174.___alloc_0;
		int32_t L_176 = V_9;
		int32_t L_177 = V_8;
		NullCheck(L_175);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_178;
		L_178 = Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_inline(L_175, L_176, L_177, (&___meshAlloc9), NULL);
		V_11 = L_178;
		V_40 = 0;
		goto IL_037b;
	}

IL_0362:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_179 = V_11;
		uint16_t* L_180 = V_6;
		int32_t L_181 = V_40;
		int32_t L_182 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_180, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_181), 2)))));
		NullCheck(L_179);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_179, (uint16_t)L_182, NULL);
		int32_t L_183 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_183, 1));
	}

IL_037b:
	{
		int32_t L_184 = V_40;
		int32_t L_185 = V_8;
		V_41 = (bool)((((int32_t)L_184) < ((int32_t)L_185))? 1 : 0);
		bool L_186 = V_41;
		if (L_186)
		{
			goto IL_0362;
		}
	}
	{
		V_42 = 0;
		goto IL_03ae;
	}

IL_038c:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_187 = V_11;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_188 = V_7;
		int32_t L_189 = V_42;
		uint32_t L_190 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_191 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_188, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_189), (int32_t)L_190)))));
		NullCheck(L_187);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_187, L_191, NULL);
		int32_t L_192 = V_42;
		V_42 = ((int32_t)il2cpp_codegen_add(L_192, 1));
	}

IL_03ae:
	{
		int32_t L_193 = V_42;
		int32_t L_194 = V_9;
		V_43 = (bool)((((int32_t)L_193) < ((int32_t)L_194))? 1 : 0);
		bool L_195 = V_43;
		if (L_195)
		{
			goto IL_038c;
		}
	}
	{
		return;
	}
}
// UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts UnityEngine.UIElements.UIR.MeshBuilder::UpperBoundApproximateRectClippingResults(UnityEngine.UIElements.Vertex[],System.UInt16[],UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC MeshBuilder_UpperBoundApproximateRectClippingResults_m56B7E6ACB2F05BEFD9E5631522FB2523A2062ABF (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___vertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipRectMinMax2, const RuntimeMethod* method) 
{
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B3_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B4_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B6_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B7_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B9_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B10_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B12_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B13_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B15_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B14_0 = NULL;
	float G_B16_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B16_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B18_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B17_0 = NULL;
	float G_B19_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B19_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B21_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B20_0 = NULL;
	float G_B22_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B22_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B24_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B23_0 = NULL;
	float G_B25_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B25_1 = NULL;
	int32_t G_B30_0 = 0;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC* G_B34_0 = NULL;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC* G_B33_0 = NULL;
	int32_t G_B35_0 = 0;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC* G_B35_1 = NULL;
	int32_t G_B40_0 = 0;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC* G_B43_0 = NULL;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC* G_B42_0 = NULL;
	int32_t G_B44_0 = 0;
	ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC* G_B44_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC));
		(&V_0)->___firstClippedIndex_0 = ((int32_t)2147483647LL);
		(&V_0)->___firstDegenerateIndex_1 = (-1);
		(&V_0)->___lastClippedIndex_2 = (-1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___indices1;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_2 = 0;
		goto IL_02a5;
	}

IL_0030:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_1 = ___vertices0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = ___indices1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___position_1;
		V_3 = L_6;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_7 = ___vertices0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = ___indices1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint16_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___position_1;
		V_4 = L_12;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_13 = ___vertices0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_14 = ___indices1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 2));
		uint16_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___position_1;
		V_5 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_3;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_4;
		float L_22 = L_21.___x_2;
		G_B2_0 = (&V_6);
		if ((((float)L_20) < ((float)L_22)))
		{
			G_B3_0 = (&V_6);
			goto IL_007e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		float L_24 = L_23.___x_2;
		G_B4_0 = L_24;
		G_B4_1 = G_B2_0;
		goto IL_0084;
	}

IL_007e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = L_25.___x_2;
		G_B4_0 = L_26;
		G_B4_1 = G_B3_0;
	}

IL_0084:
	{
		G_B4_1->___x_1 = G_B4_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = V_6;
		float L_28 = L_27.___x_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_5;
		float L_30 = L_29.___x_2;
		G_B5_0 = (&V_6);
		if ((((float)L_28) < ((float)L_30)))
		{
			G_B6_0 = (&V_6);
			goto IL_00a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_5;
		float L_32 = L_31.___x_2;
		G_B7_0 = L_32;
		G_B7_1 = G_B5_0;
		goto IL_00ab;
	}

IL_00a4:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = V_6;
		float L_34 = L_33.___x_1;
		G_B7_0 = L_34;
		G_B7_1 = G_B6_0;
	}

IL_00ab:
	{
		G_B7_1->___x_1 = G_B7_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_3;
		float L_36 = L_35.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		float L_38 = L_37.___y_3;
		G_B8_0 = (&V_6);
		if ((((float)L_36) < ((float)L_38)))
		{
			G_B9_0 = (&V_6);
			goto IL_00ca;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		float L_40 = L_39.___y_3;
		G_B10_0 = L_40;
		G_B10_1 = G_B8_0;
		goto IL_00d0;
	}

IL_00ca:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_3;
		float L_42 = L_41.___y_3;
		G_B10_0 = L_42;
		G_B10_1 = G_B9_0;
	}

IL_00d0:
	{
		G_B10_1->___y_2 = G_B10_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43 = V_6;
		float L_44 = L_43.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_5;
		float L_46 = L_45.___y_3;
		G_B11_0 = (&V_6);
		if ((((float)L_44) < ((float)L_46)))
		{
			G_B12_0 = (&V_6);
			goto IL_00f0;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_5;
		float L_48 = L_47.___y_3;
		G_B13_0 = L_48;
		G_B13_1 = G_B11_0;
		goto IL_00f7;
	}

IL_00f0:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_49 = V_6;
		float L_50 = L_49.___y_2;
		G_B13_0 = L_50;
		G_B13_1 = G_B12_0;
	}

IL_00f7:
	{
		G_B13_1->___y_2 = G_B13_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_3;
		float L_52 = L_51.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_4;
		float L_54 = L_53.___x_2;
		G_B14_0 = (&V_6);
		if ((((float)L_52) > ((float)L_54)))
		{
			G_B15_0 = (&V_6);
			goto IL_0116;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_4;
		float L_56 = L_55.___x_2;
		G_B16_0 = L_56;
		G_B16_1 = G_B14_0;
		goto IL_011c;
	}

IL_0116:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_3;
		float L_58 = L_57.___x_2;
		G_B16_0 = L_58;
		G_B16_1 = G_B15_0;
	}

IL_011c:
	{
		G_B16_1->___z_3 = G_B16_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_59 = V_6;
		float L_60 = L_59.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_5;
		float L_62 = L_61.___x_2;
		G_B17_0 = (&V_6);
		if ((((float)L_60) > ((float)L_62)))
		{
			G_B18_0 = (&V_6);
			goto IL_013c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_5;
		float L_64 = L_63.___x_2;
		G_B19_0 = L_64;
		G_B19_1 = G_B17_0;
		goto IL_0143;
	}

IL_013c:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_65 = V_6;
		float L_66 = L_65.___z_3;
		G_B19_0 = L_66;
		G_B19_1 = G_B18_0;
	}

IL_0143:
	{
		G_B19_1->___z_3 = G_B19_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_3;
		float L_68 = L_67.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_4;
		float L_70 = L_69.___y_3;
		G_B20_0 = (&V_6);
		if ((((float)L_68) > ((float)L_70)))
		{
			G_B21_0 = (&V_6);
			goto IL_0162;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_4;
		float L_72 = L_71.___y_3;
		G_B22_0 = L_72;
		G_B22_1 = G_B20_0;
		goto IL_0168;
	}

IL_0162:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_3;
		float L_74 = L_73.___y_3;
		G_B22_0 = L_74;
		G_B22_1 = G_B21_0;
	}

IL_0168:
	{
		G_B22_1->___w_4 = G_B22_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_75 = V_6;
		float L_76 = L_75.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_5;
		float L_78 = L_77.___y_3;
		G_B23_0 = (&V_6);
		if ((((float)L_76) > ((float)L_78)))
		{
			G_B24_0 = (&V_6);
			goto IL_0188;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_5;
		float L_80 = L_79.___y_3;
		G_B25_0 = L_80;
		G_B25_1 = G_B23_0;
		goto IL_018f;
	}

IL_0188:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81 = V_6;
		float L_82 = L_81.___w_4;
		G_B25_0 = L_82;
		G_B25_1 = G_B24_0;
	}

IL_018f:
	{
		G_B25_1->___w_4 = G_B25_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_83 = V_6;
		float L_84 = L_83.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85 = ___clipRectMinMax2;
		float L_86 = L_85.___x_1;
		if ((!(((float)L_84) >= ((float)L_86))))
		{
			goto IL_01d5;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_87 = V_6;
		float L_88 = L_87.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89 = ___clipRectMinMax2;
		float L_90 = L_89.___z_3;
		if ((!(((float)L_88) <= ((float)L_90))))
		{
			goto IL_01d5;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_91 = V_6;
		float L_92 = L_91.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_93 = ___clipRectMinMax2;
		float L_94 = L_93.___y_2;
		if ((!(((float)L_92) >= ((float)L_94))))
		{
			goto IL_01d5;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_95 = V_6;
		float L_96 = L_95.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_97 = ___clipRectMinMax2;
		float L_98 = L_97.___w_4;
		G_B30_0 = ((((int32_t)((!(((float)L_96) <= ((float)L_98)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01d6;
	}

IL_01d5:
	{
		G_B30_0 = 0;
	}

IL_01d6:
	{
		V_7 = (bool)G_B30_0;
		bool L_99 = V_7;
		if (!L_99)
		{
			goto IL_01ea;
		}
	}
	{
		(&V_0)->___firstDegenerateIndex_1 = (-1);
		goto IL_02a1;
	}

IL_01ea:
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_100 = V_0;
		int32_t L_101 = L_100.___firstClippedIndex_0;
		int32_t L_102 = V_2;
		G_B33_0 = (&V_0);
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			G_B34_0 = (&V_0);
			goto IL_01f8;
		}
	}
	{
		int32_t L_103 = V_2;
		G_B35_0 = L_103;
		G_B35_1 = G_B33_0;
		goto IL_01fe;
	}

IL_01f8:
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_104 = V_0;
		int32_t L_105 = L_104.___firstClippedIndex_0;
		G_B35_0 = L_105;
		G_B35_1 = G_B34_0;
	}

IL_01fe:
	{
		G_B35_1->___firstClippedIndex_0 = G_B35_0;
		int32_t L_106 = V_2;
		(&V_0)->___lastClippedIndex_2 = ((int32_t)il2cpp_codegen_add(L_106, 2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_107 = V_6;
		float L_108 = L_107.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_109 = ___clipRectMinMax2;
		float L_110 = L_109.___z_3;
		if ((((float)L_108) >= ((float)L_110)))
		{
			goto IL_024e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_111 = V_6;
		float L_112 = L_111.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_113 = ___clipRectMinMax2;
		float L_114 = L_113.___x_1;
		if ((((float)L_112) <= ((float)L_114)))
		{
			goto IL_024e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_115 = V_6;
		float L_116 = L_115.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_117 = ___clipRectMinMax2;
		float L_118 = L_117.___w_4;
		if ((((float)L_116) >= ((float)L_118)))
		{
			goto IL_024e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_119 = V_6;
		float L_120 = L_119.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_121 = ___clipRectMinMax2;
		float L_122 = L_121.___y_2;
		G_B40_0 = ((((int32_t)((!(((float)L_120) <= ((float)L_122)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_024f;
	}

IL_024e:
	{
		G_B40_0 = 1;
	}

IL_024f:
	{
		V_8 = (bool)G_B40_0;
		bool L_123 = V_8;
		if (!L_123)
		{
			goto IL_027e;
		}
	}
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_124 = V_0;
		int32_t L_125 = L_124.___firstDegenerateIndex_1;
		G_B42_0 = (&V_0);
		if ((((int32_t)L_125) == ((int32_t)(-1))))
		{
			G_B43_0 = (&V_0);
			goto IL_0269;
		}
	}
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_126 = V_0;
		int32_t L_127 = L_126.___firstDegenerateIndex_1;
		G_B44_0 = L_127;
		G_B44_1 = G_B42_0;
		goto IL_026a;
	}

IL_0269:
	{
		int32_t L_128 = V_2;
		G_B44_0 = L_128;
		G_B44_1 = G_B43_0;
	}

IL_026a:
	{
		G_B44_1->___firstDegenerateIndex_1 = G_B44_0;
		int32_t* L_129 = (&(&V_0)->___degenerateTriangles_5);
		int32_t* L_130 = L_129;
		int32_t L_131 = *((int32_t*)L_130);
		*((int32_t*)L_130) = (int32_t)((int32_t)il2cpp_codegen_add(L_131, 1));
		goto IL_0288;
	}

IL_027e:
	{
		(&V_0)->___firstDegenerateIndex_1 = (-1);
	}

IL_0288:
	{
		int32_t* L_132 = (&(&V_0)->___clippedTriangles_3);
		int32_t* L_133 = L_132;
		int32_t L_134 = *((int32_t*)L_133);
		*((int32_t*)L_133) = (int32_t)((int32_t)il2cpp_codegen_add(L_134, 1));
		int32_t* L_135 = (&(&V_0)->___addedTriangles_4);
		int32_t* L_136 = L_135;
		int32_t L_137 = *((int32_t*)L_136);
		*((int32_t*)L_136) = (int32_t)((int32_t)il2cpp_codegen_add(L_137, 4));
	}

IL_02a1:
	{
		int32_t L_138 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_138, 3));
	}

IL_02a5:
	{
		int32_t L_139 = V_2;
		int32_t L_140 = V_1;
		V_9 = (bool)((((int32_t)L_139) < ((int32_t)L_140))? 1 : 0);
		bool L_141 = V_9;
		if (L_141)
		{
			goto IL_0030;
		}
	}
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_142 = V_0;
		V_10 = L_142;
		goto IL_02b7;
	}

IL_02b7:
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_143 = V_10;
		return L_143;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::RectClip(UnityEngine.UIElements.Vertex[],System.UInt16[],UnityEngine.Vector4,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.UIR.MeshBuilder/ClipCounts,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_RectClip_m2EE47B978E3359FC6D01EEAE37979EDBE3F3F6E9 (VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* ___vertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___indices1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipRectMinMax2, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mwd3, ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC ___cc4, int32_t* ___newVertexCount5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_RectClip_m2EE47B978E3359FC6D01EEAE37979EDBE3F3F6E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t* V_2 = NULL;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t G_B3_0 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B11_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B10_0 = NULL;
	float G_B12_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B12_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B14_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B13_0 = NULL;
	float G_B15_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B15_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B17_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B16_0 = NULL;
	float G_B18_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B18_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B20_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B19_0 = NULL;
	float G_B21_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B21_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B23_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B22_0 = NULL;
	float G_B24_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B24_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B26_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B25_0 = NULL;
	float G_B27_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B27_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B29_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B28_0 = NULL;
	float G_B30_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B30_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B32_0 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B31_0 = NULL;
	float G_B33_0 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* G_B33_1 = NULL;
	int32_t G_B38_0 = 0;
	int32_t G_B45_0 = 0;
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_0 = ___cc4;
		int32_t L_1 = L_0.___lastClippedIndex_2;
		V_0 = L_1;
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_2 = ___cc4;
		int32_t L_3 = L_2.___firstDegenerateIndex_1;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_001f;
		}
	}
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_4 = ___cc4;
		int32_t L_5 = L_4.___firstDegenerateIndex_1;
		int32_t L_6 = V_0;
		G_B3_0 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_5 = (bool)G_B3_0;
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_8 = ___cc4;
		int32_t L_9 = L_8.___firstDegenerateIndex_1;
		V_0 = L_9;
	}

IL_002e:
	{
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_10 = ___vertices0;
		NullCheck(L_10);
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_6 = 0;
		goto IL_0049;
	}

IL_0038:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_11 = ___mwd3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___indices1;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint16_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_11, L_15, NULL);
		int32_t L_16 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0049:
	{
		int32_t L_17 = V_6;
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_18 = ___cc4;
		int32_t L_19 = L_18.___firstClippedIndex_0;
		V_7 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0038;
		}
	}
	{
		int8_t* L_21 = (int8_t*) alloca(((uintptr_t)6));
		memset(L_21, 0, ((uintptr_t)6));
		V_2 = (uint16_t*)(L_21);
		uint32_t L_22 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		if ((uintptr_t)((uintptr_t)3) * (uintptr_t)L_22 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_RectClip_m2EE47B978E3359FC6D01EEAE37979EDBE3F3F6E9_RuntimeMethod_var);
		int8_t* L_23 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)3), (int32_t)L_22)));
		memset(L_23, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)3), (int32_t)L_22)));
		V_3 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(L_23);
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_24 = ___cc4;
		int32_t L_25 = L_24.___firstClippedIndex_0;
		V_8 = L_25;
		goto IL_03c4;
	}

IL_0079:
	{
		uint16_t* L_26 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_27 = ___indices1;
		int32_t L_28 = V_8;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint16_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		*((int16_t*)L_26) = (int16_t)L_30;
		uint16_t* L_31 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = ___indices1;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint16_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_31, 2))) = (int16_t)L_35;
		uint16_t* L_36 = V_2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_37 = ___indices1;
		int32_t L_38 = V_8;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint16_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2))))) = (int16_t)L_40;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_41 = V_3;
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_42 = ___vertices0;
		uint16_t* L_43 = V_2;
		int32_t L_44 = *((uint16_t*)L_43);
		NullCheck(L_42);
		int32_t L_45 = L_44;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_41 = L_46;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_47 = V_3;
		uint32_t L_48 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_49 = ___vertices0;
		uint16_t* L_50 = V_2;
		int32_t L_51 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_50, 2)));
		NullCheck(L_49);
		int32_t L_52 = L_51;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)L_48)) = L_53;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_54 = V_3;
		uint32_t L_55 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		VertexU5BU5D_t2C3F4FF6AFD6D7E9DD7E1D69446FD8E8FC033185* L_56 = ___vertices0;
		uint16_t* L_57 = V_2;
		int32_t L_58 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_55)))) = L_60;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_61 = V_3;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_62 = (&L_61->___position_1);
		float L_63 = L_62->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_64 = V_3;
		uint32_t L_65 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_64, (int32_t)L_65)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_64, (int32_t)L_65))->___position_1);
		float L_67 = L_66->___x_2;
		G_B10_0 = (&V_9);
		if ((((float)L_63) < ((float)L_67)))
		{
			G_B11_0 = (&V_9);
			goto IL_010e;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_68 = V_3;
		uint32_t L_69 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_68, (int32_t)L_69)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_68, (int32_t)L_69))->___position_1);
		float L_71 = L_70->___x_2;
		G_B12_0 = L_71;
		G_B12_1 = G_B10_0;
		goto IL_0119;
	}

IL_010e:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_72 = V_3;
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_73 = (&L_72->___position_1);
		float L_74 = L_73->___x_2;
		G_B12_0 = L_74;
		G_B12_1 = G_B11_0;
	}

IL_0119:
	{
		G_B12_1->___x_1 = G_B12_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_75 = V_9;
		float L_76 = L_75.___x_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_77 = V_3;
		uint32_t L_78 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_78)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_79 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_77, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_78))))->___position_1);
		float L_80 = L_79->___x_2;
		G_B13_0 = (&V_9);
		if ((((float)L_76) < ((float)L_80)))
		{
			G_B14_0 = (&V_9);
			goto IL_0155;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_81 = V_3;
		uint32_t L_82 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_82)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_82))))->___position_1);
		float L_84 = L_83->___x_2;
		G_B15_0 = L_84;
		G_B15_1 = G_B13_0;
		goto IL_015c;
	}

IL_0155:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85 = V_9;
		float L_86 = L_85.___x_1;
		G_B15_0 = L_86;
		G_B15_1 = G_B14_0;
	}

IL_015c:
	{
		G_B15_1->___x_1 = G_B15_0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_87 = V_3;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_88 = (&L_87->___position_1);
		float L_89 = L_88->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_90 = V_3;
		uint32_t L_91 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_90, (int32_t)L_91)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_90, (int32_t)L_91))->___position_1);
		float L_93 = L_92->___y_3;
		G_B16_0 = (&V_9);
		if ((((float)L_89) < ((float)L_93)))
		{
			G_B17_0 = (&V_9);
			goto IL_0196;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_94 = V_3;
		uint32_t L_95 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_94, (int32_t)L_95)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_96 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_94, (int32_t)L_95))->___position_1);
		float L_97 = L_96->___y_3;
		G_B18_0 = L_97;
		G_B18_1 = G_B16_0;
		goto IL_01a1;
	}

IL_0196:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_98 = V_3;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_99 = (&L_98->___position_1);
		float L_100 = L_99->___y_3;
		G_B18_0 = L_100;
		G_B18_1 = G_B17_0;
	}

IL_01a1:
	{
		G_B18_1->___y_2 = G_B18_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_101 = V_9;
		float L_102 = L_101.___y_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_103 = V_3;
		uint32_t L_104 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_104)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_105 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_104))))->___position_1);
		float L_106 = L_105->___y_3;
		G_B19_0 = (&V_9);
		if ((((float)L_102) < ((float)L_106)))
		{
			G_B20_0 = (&V_9);
			goto IL_01dd;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_107 = V_3;
		uint32_t L_108 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_107, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_108)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_109 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_107, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_108))))->___position_1);
		float L_110 = L_109->___y_3;
		G_B21_0 = L_110;
		G_B21_1 = G_B19_0;
		goto IL_01e4;
	}

IL_01dd:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_111 = V_9;
		float L_112 = L_111.___y_2;
		G_B21_0 = L_112;
		G_B21_1 = G_B20_0;
	}

IL_01e4:
	{
		G_B21_1->___y_2 = G_B21_0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_113 = V_3;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_114 = (&L_113->___position_1);
		float L_115 = L_114->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_116 = V_3;
		uint32_t L_117 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_116, (int32_t)L_117)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_118 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_116, (int32_t)L_117))->___position_1);
		float L_119 = L_118->___x_2;
		G_B22_0 = (&V_9);
		if ((((float)L_115) > ((float)L_119)))
		{
			G_B23_0 = (&V_9);
			goto IL_021e;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_120 = V_3;
		uint32_t L_121 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_120, (int32_t)L_121)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_122 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_120, (int32_t)L_121))->___position_1);
		float L_123 = L_122->___x_2;
		G_B24_0 = L_123;
		G_B24_1 = G_B22_0;
		goto IL_0229;
	}

IL_021e:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_124 = V_3;
		NullCheck(L_124);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_125 = (&L_124->___position_1);
		float L_126 = L_125->___x_2;
		G_B24_0 = L_126;
		G_B24_1 = G_B23_0;
	}

IL_0229:
	{
		G_B24_1->___z_3 = G_B24_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_127 = V_9;
		float L_128 = L_127.___z_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_129 = V_3;
		uint32_t L_130 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_130)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_131 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_130))))->___position_1);
		float L_132 = L_131->___x_2;
		G_B25_0 = (&V_9);
		if ((((float)L_128) > ((float)L_132)))
		{
			G_B26_0 = (&V_9);
			goto IL_0265;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_133 = V_3;
		uint32_t L_134 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_133, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_134)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_135 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_133, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_134))))->___position_1);
		float L_136 = L_135->___x_2;
		G_B27_0 = L_136;
		G_B27_1 = G_B25_0;
		goto IL_026c;
	}

IL_0265:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_137 = V_9;
		float L_138 = L_137.___z_3;
		G_B27_0 = L_138;
		G_B27_1 = G_B26_0;
	}

IL_026c:
	{
		G_B27_1->___z_3 = G_B27_0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_139 = V_3;
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_140 = (&L_139->___position_1);
		float L_141 = L_140->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_142 = V_3;
		uint32_t L_143 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_142, (int32_t)L_143)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_144 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_142, (int32_t)L_143))->___position_1);
		float L_145 = L_144->___y_3;
		G_B28_0 = (&V_9);
		if ((((float)L_141) > ((float)L_145)))
		{
			G_B29_0 = (&V_9);
			goto IL_02a6;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_146 = V_3;
		uint32_t L_147 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_146, (int32_t)L_147)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_148 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_146, (int32_t)L_147))->___position_1);
		float L_149 = L_148->___y_3;
		G_B30_0 = L_149;
		G_B30_1 = G_B28_0;
		goto IL_02b1;
	}

IL_02a6:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_150 = V_3;
		NullCheck(L_150);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_151 = (&L_150->___position_1);
		float L_152 = L_151->___y_3;
		G_B30_0 = L_152;
		G_B30_1 = G_B29_0;
	}

IL_02b1:
	{
		G_B30_1->___w_4 = G_B30_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_153 = V_9;
		float L_154 = L_153.___w_4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_155 = V_3;
		uint32_t L_156 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_155, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_156)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_157 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_155, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_156))))->___position_1);
		float L_158 = L_157->___y_3;
		G_B31_0 = (&V_9);
		if ((((float)L_154) > ((float)L_158)))
		{
			G_B32_0 = (&V_9);
			goto IL_02ed;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_159 = V_3;
		uint32_t L_160 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_159, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_160)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_161 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_159, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_160))))->___position_1);
		float L_162 = L_161->___y_3;
		G_B33_0 = L_162;
		G_B33_1 = G_B31_0;
		goto IL_02f4;
	}

IL_02ed:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_163 = V_9;
		float L_164 = L_163.___w_4;
		G_B33_0 = L_164;
		G_B33_1 = G_B32_0;
	}

IL_02f4:
	{
		G_B33_1->___w_4 = G_B33_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_165 = V_9;
		float L_166 = L_165.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_167 = ___clipRectMinMax2;
		float L_168 = L_167.___x_1;
		if ((!(((float)L_166) >= ((float)L_168))))
		{
			goto IL_033a;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_169 = V_9;
		float L_170 = L_169.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_171 = ___clipRectMinMax2;
		float L_172 = L_171.___z_3;
		if ((!(((float)L_170) <= ((float)L_172))))
		{
			goto IL_033a;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_173 = V_9;
		float L_174 = L_173.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_175 = ___clipRectMinMax2;
		float L_176 = L_175.___y_2;
		if ((!(((float)L_174) >= ((float)L_176))))
		{
			goto IL_033a;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_177 = V_9;
		float L_178 = L_177.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_179 = ___clipRectMinMax2;
		float L_180 = L_179.___w_4;
		G_B38_0 = ((((int32_t)((!(((float)L_178) <= ((float)L_180)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_033b;
	}

IL_033a:
	{
		G_B38_0 = 0;
	}

IL_033b:
	{
		V_10 = (bool)G_B38_0;
		bool L_181 = V_10;
		if (!L_181)
		{
			goto IL_0366;
		}
	}
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_182 = ___mwd3;
		uint16_t* L_183 = V_2;
		int32_t L_184 = *((uint16_t*)L_183);
		NullCheck(L_182);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_182, (uint16_t)L_184, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_185 = ___mwd3;
		uint16_t* L_186 = V_2;
		int32_t L_187 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_186, 2)));
		NullCheck(L_185);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_185, (uint16_t)L_187, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_188 = ___mwd3;
		uint16_t* L_189 = V_2;
		int32_t L_190 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_189, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		NullCheck(L_188);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_188, (uint16_t)L_190, NULL);
		goto IL_03be;
	}

IL_0366:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_191 = V_9;
		float L_192 = L_191.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_193 = ___clipRectMinMax2;
		float L_194 = L_193.___z_3;
		if ((((float)L_192) >= ((float)L_194)))
		{
			goto IL_03a7;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_195 = V_9;
		float L_196 = L_195.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_197 = ___clipRectMinMax2;
		float L_198 = L_197.___x_1;
		if ((((float)L_196) <= ((float)L_198)))
		{
			goto IL_03a7;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_199 = V_9;
		float L_200 = L_199.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_201 = ___clipRectMinMax2;
		float L_202 = L_201.___w_4;
		if ((((float)L_200) >= ((float)L_202)))
		{
			goto IL_03a7;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_203 = V_9;
		float L_204 = L_203.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_205 = ___clipRectMinMax2;
		float L_206 = L_205.___y_2;
		G_B45_0 = ((((int32_t)((!(((float)L_204) <= ((float)L_206)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03a8;
	}

IL_03a7:
	{
		G_B45_0 = 1;
	}

IL_03a8:
	{
		V_11 = (bool)G_B45_0;
		bool L_207 = V_11;
		if (!L_207)
		{
			goto IL_03b1;
		}
	}
	{
		goto IL_03be;
	}

IL_03b1:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_208 = V_3;
		uint16_t* L_209 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_210 = ___clipRectMinMax2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_211 = ___mwd3;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102(L_208, L_209, L_210, L_211, (&V_1), NULL);
	}

IL_03be:
	{
		int32_t L_212 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_212, 3));
	}

IL_03c4:
	{
		int32_t L_213 = V_8;
		int32_t L_214 = V_0;
		V_12 = (bool)((((int32_t)L_213) < ((int32_t)L_214))? 1 : 0);
		bool L_215 = V_12;
		if (L_215)
		{
			goto IL_0079;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_216 = ___indices1;
		NullCheck(L_216);
		V_4 = ((int32_t)(((RuntimeArray*)L_216)->max_length));
		ClipCounts_tA13B47CA84D741D6AA98C60E95935D3526F83CDC L_217 = ___cc4;
		int32_t L_218 = L_217.___lastClippedIndex_2;
		V_13 = ((int32_t)il2cpp_codegen_add(L_218, 1));
		goto IL_03f5;
	}

IL_03e4:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_219 = ___mwd3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_220 = ___indices1;
		int32_t L_221 = V_13;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		uint16_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		NullCheck(L_219);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_219, L_223, NULL);
		int32_t L_224 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_03f5:
	{
		int32_t L_225 = V_13;
		int32_t L_226 = V_4;
		V_14 = (bool)((((int32_t)L_225) < ((int32_t)L_226))? 1 : 0);
		bool L_227 = V_14;
		if (L_227)
		{
			goto IL_03e4;
		}
	}
	{
		int32_t* L_228 = ___newVertexCount5;
		uint16_t L_229 = V_1;
		*((int32_t*)L_228) = (int32_t)L_229;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_230 = ___mwd3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_231 = ___mwd3;
		NullCheck(L_231);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_232 = L_231->___m_Vertices_0;
		int32_t* L_233 = ___newVertexCount5;
		int32_t L_234 = *((int32_t*)L_233);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_235;
		L_235 = NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8(L_232, 0, L_234, NativeSliceExtensions_Slice_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mC340C2ABEA2EC5CF29A25C4305EBA75B0A7A6EA8_RuntimeMethod_var);
		NullCheck(L_230);
		L_230->___m_Vertices_0 = L_235;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_236 = ___mwd3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_237 = ___mwd3;
		NullCheck(L_237);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_238 = L_237->___m_Indices_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_239 = ___mwd3;
		NullCheck(L_239);
		int32_t L_240 = L_239->___currentIndex_3;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_241;
		L_241 = NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0(L_238, 0, L_240, NativeSliceExtensions_Slice_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8C003428C63E7D5CEFE423856A5C7DBAB9C048F0_RuntimeMethod_var);
		NullCheck(L_236);
		L_236->___m_Indices_1 = L_241;
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::RectClipTriangle(UnityEngine.UIElements.Vertex*,System.UInt16*,UnityEngine.Vector4,UnityEngine.UIElements.MeshWriteData,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, uint16_t* ___it1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipRectMinMax2, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mwd3, uint16_t* ___nextNewVertex4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* V_0 = NULL;
	int32_t* V_1 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float* V_8 = NULL;
	int32_t* V_9 = NULL;
	uint32_t V_10 = 0;
	uint16_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_30;
	memset((&V_30), 0, sizeof(V_30));
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	float V_33 = 0.0f;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	int32_t V_39 = 0;
	bool V_40 = false;
	bool V_41 = false;
	int32_t V_42 = 0;
	int32_t V_43 = 0;
	float V_44 = 0.0f;
	int32_t V_45 = 0;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	int32_t V_49 = 0;
	bool V_50 = false;
	int32_t V_51 = 0;
	int32_t V_52 = 0;
	int32_t V_53 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_54;
	memset((&V_54), 0, sizeof(V_54));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_55;
	memset((&V_55), 0, sizeof(V_55));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_56;
	memset((&V_56), 0, sizeof(V_56));
	bool V_57 = false;
	float V_58 = 0.0f;
	float V_59 = 0.0f;
	bool V_60 = false;
	bool V_61 = false;
	bool V_62 = false;
	int32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B57_0 = 0;
	int32_t G_B82_0 = 0;
	{
		uint32_t L_0 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		if ((uintptr_t)((uintptr_t)((int32_t)13)) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102_RuntimeMethod_var);
		int8_t* L_1 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)((int32_t)13)), (int32_t)L_0)));
		memset(L_1, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)((int32_t)13)), (int32_t)L_0)));
		V_0 = (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)(L_1);
		int8_t* L_2 = (int8_t*) alloca(((uintptr_t)((int32_t)12)));
		memset(L_2, 0, ((uintptr_t)((int32_t)12)));
		V_1 = (int32_t*)(L_2);
		uint32_t L_3 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_3 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102_RuntimeMethod_var);
		int8_t* L_4 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_3)));
		memset(L_4, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_3)));
		V_2 = (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)(L_4);
		V_3 = 0;
		V_15 = 0;
		goto IL_0117;
	}

IL_002a:
	{
		V_16 = 0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_5 = ___vt0;
		int32_t L_6 = V_15;
		uint32_t L_7 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), (int32_t)L_7)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), (int32_t)L_7))))->___position_1);
		float L_9 = L_8->___x_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___clipRectMinMax2;
		float L_11 = L_10.___x_1;
		V_17 = (bool)((((float)L_9) < ((float)L_11))? 1 : 0);
		bool L_12 = V_17;
		if (!L_12)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_13 = V_16;
		V_16 = ((int32_t)((int32_t)L_13|1));
	}

IL_0058:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_14 = ___vt0;
		int32_t L_15 = V_15;
		uint32_t L_16 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16))))->___position_1);
		float L_18 = L_17->___y_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = ___clipRectMinMax2;
		float L_20 = L_19.___y_2;
		V_18 = (bool)((((float)L_18) < ((float)L_20))? 1 : 0);
		bool L_21 = V_18;
		if (!L_21)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_22 = V_16;
		V_16 = ((int32_t)((int32_t)L_22|2));
	}

IL_0082:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_23 = ___vt0;
		int32_t L_24 = V_15;
		uint32_t L_25 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), (int32_t)L_25)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_24), (int32_t)L_25))))->___position_1);
		float L_27 = L_26->___x_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_28 = ___clipRectMinMax2;
		float L_29 = L_28.___z_3;
		V_19 = (bool)((((float)L_27) > ((float)L_29))? 1 : 0);
		bool L_30 = V_19;
		if (!L_30)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_31 = V_16;
		V_16 = ((int32_t)((int32_t)L_31|4));
	}

IL_00ac:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_32 = ___vt0;
		int32_t L_33 = V_15;
		uint32_t L_34 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), (int32_t)L_34)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_33), (int32_t)L_34))))->___position_1);
		float L_36 = L_35->___y_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_37 = ___clipRectMinMax2;
		float L_38 = L_37.___w_4;
		V_20 = (bool)((((float)L_36) > ((float)L_38))? 1 : 0);
		bool L_39 = V_20;
		if (!L_39)
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_40 = V_16;
		V_16 = ((int32_t)((int32_t)L_40|8));
	}

IL_00d6:
	{
		int32_t L_41 = V_16;
		V_21 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_21;
		if (!L_42)
		{
			goto IL_0106;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_43 = V_0;
		int32_t L_44 = V_3;
		int32_t L_45 = L_44;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		uint32_t L_46 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_47 = ___vt0;
		int32_t L_48 = V_15;
		uint32_t L_49 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_50 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_47, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_48), (int32_t)L_49)))));
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_43, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), (int32_t)L_46)))) = L_50;
	}

IL_0106:
	{
		int32_t* L_51 = V_1;
		int32_t L_52 = V_15;
		int32_t L_53 = V_16;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 4))))) = (int32_t)L_53;
		int32_t L_54 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0117:
	{
		int32_t L_55 = V_15;
		V_22 = (bool)((((int32_t)L_55) < ((int32_t)3))? 1 : 0);
		bool L_56 = V_22;
		if (L_56)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_57 = V_3;
		V_23 = (bool)((((int32_t)L_57) == ((int32_t)3))? 1 : 0);
		bool L_58 = V_23;
		if (!L_58)
		{
			goto IL_0157;
		}
	}
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_59 = ___mwd3;
		uint16_t* L_60 = ___it1;
		int32_t L_61 = *((uint16_t*)L_60);
		NullCheck(L_59);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_59, (uint16_t)L_61, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_62 = ___mwd3;
		uint16_t* L_63 = ___it1;
		int32_t L_64 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_63, 2)));
		NullCheck(L_62);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_62, (uint16_t)L_64, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_65 = ___mwd3;
		uint16_t* L_66 = ___it1;
		int32_t L_67 = *((uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		NullCheck(L_65);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_65, (uint16_t)L_67, NULL);
		goto IL_0883;
	}

IL_0157:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_68 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69 = ___clipRectMinMax2;
		float L_70 = L_69.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_71 = ___clipRectMinMax2;
		float L_72 = L_71.___y_2;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = MeshBuilder_GetVertexBaryCentricCoordinates_m53FD39E6E64880162354E8141090DE063DA66C17(L_68, L_70, L_72, NULL);
		V_4 = L_73;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_74 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_75 = ___clipRectMinMax2;
		float L_76 = L_75.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_77 = ___clipRectMinMax2;
		float L_78 = L_77.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = MeshBuilder_GetVertexBaryCentricCoordinates_m53FD39E6E64880162354E8141090DE063DA66C17(L_74, L_76, L_78, NULL);
		V_5 = L_79;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_80 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_81 = ___clipRectMinMax2;
		float L_82 = L_81.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_83 = ___clipRectMinMax2;
		float L_84 = L_83.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = MeshBuilder_GetVertexBaryCentricCoordinates_m53FD39E6E64880162354E8141090DE063DA66C17(L_80, L_82, L_84, NULL);
		V_6 = L_85;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_86 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_87 = ___clipRectMinMax2;
		float L_88 = L_87.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_89 = ___clipRectMinMax2;
		float L_90 = L_89.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = MeshBuilder_GetVertexBaryCentricCoordinates_m53FD39E6E64880162354E8141090DE063DA66C17(L_86, L_88, L_90, NULL);
		V_7 = L_91;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_4;
		float L_93 = L_92.___x_2;
		if ((!(((float)L_93) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_0203;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_4;
		float L_95 = L_94.___x_2;
		if ((!(((float)L_95) <= ((float)(1.00000012f)))))
		{
			goto IL_0203;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_4;
		float L_97 = L_96.___y_3;
		if ((!(((float)L_97) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_0203;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_4;
		float L_99 = L_98.___y_3;
		if ((!(((float)L_99) <= ((float)(1.00000012f)))))
		{
			goto IL_0203;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_4;
		float L_101 = L_100.___z_4;
		if ((!(((float)L_101) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_0200;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_4;
		float L_103 = L_102.___z_4;
		G_B22_0 = ((((int32_t)((!(((float)L_103) <= ((float)(1.00000012f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0201;
	}

IL_0200:
	{
		G_B22_0 = 0;
	}

IL_0201:
	{
		G_B24_0 = G_B22_0;
		goto IL_0204;
	}

IL_0203:
	{
		G_B24_0 = 0;
	}

IL_0204:
	{
		V_24 = (bool)G_B24_0;
		bool L_104 = V_24;
		if (!L_104)
		{
			goto IL_0232;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_105 = V_0;
		int32_t L_106 = V_3;
		int32_t L_107 = L_106;
		V_3 = ((int32_t)il2cpp_codegen_add(L_107, 1));
		uint32_t L_108 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_109 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_110 = ___clipRectMinMax2;
		float L_111 = L_110.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_112 = ___clipRectMinMax2;
		float L_113 = L_112.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_4;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_115;
		L_115 = MeshBuilder_InterpolateVertexInTriangle_mA62F286B6C128064812E5EFFDC9D19DED24C3F8D(L_109, L_111, L_113, L_114, NULL);
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_105, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_107), (int32_t)L_108)))) = L_115;
	}

IL_0232:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_5;
		float L_117 = L_116.___x_2;
		if ((!(((float)L_117) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_028e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_5;
		float L_119 = L_118.___x_2;
		if ((!(((float)L_119) <= ((float)(1.00000012f)))))
		{
			goto IL_028e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_5;
		float L_121 = L_120.___y_3;
		if ((!(((float)L_121) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_028e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122 = V_5;
		float L_123 = L_122.___y_3;
		if ((!(((float)L_123) <= ((float)(1.00000012f)))))
		{
			goto IL_028e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = V_5;
		float L_125 = L_124.___z_4;
		if ((!(((float)L_125) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_028b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = V_5;
		float L_127 = L_126.___z_4;
		G_B33_0 = ((((int32_t)((!(((float)L_127) <= ((float)(1.00000012f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_028c;
	}

IL_028b:
	{
		G_B33_0 = 0;
	}

IL_028c:
	{
		G_B35_0 = G_B33_0;
		goto IL_028f;
	}

IL_028e:
	{
		G_B35_0 = 0;
	}

IL_028f:
	{
		V_25 = (bool)G_B35_0;
		bool L_128 = V_25;
		if (!L_128)
		{
			goto IL_02bd;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_129 = V_0;
		int32_t L_130 = V_3;
		int32_t L_131 = L_130;
		V_3 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		uint32_t L_132 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_133 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_134 = ___clipRectMinMax2;
		float L_135 = L_134.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_136 = ___clipRectMinMax2;
		float L_137 = L_136.___y_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_5;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_139;
		L_139 = MeshBuilder_InterpolateVertexInTriangle_mA62F286B6C128064812E5EFFDC9D19DED24C3F8D(L_133, L_135, L_137, L_138, NULL);
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_131), (int32_t)L_132)))) = L_139;
	}

IL_02bd:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = V_6;
		float L_141 = L_140.___x_2;
		if ((!(((float)L_141) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_0319;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_6;
		float L_143 = L_142.___x_2;
		if ((!(((float)L_143) <= ((float)(1.00000012f)))))
		{
			goto IL_0319;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_6;
		float L_145 = L_144.___y_3;
		if ((!(((float)L_145) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_0319;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = V_6;
		float L_147 = L_146.___y_3;
		if ((!(((float)L_147) <= ((float)(1.00000012f)))))
		{
			goto IL_0319;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_6;
		float L_149 = L_148.___z_4;
		if ((!(((float)L_149) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_0316;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = V_6;
		float L_151 = L_150.___z_4;
		G_B44_0 = ((((int32_t)((!(((float)L_151) <= ((float)(1.00000012f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0317;
	}

IL_0316:
	{
		G_B44_0 = 0;
	}

IL_0317:
	{
		G_B46_0 = G_B44_0;
		goto IL_031a;
	}

IL_0319:
	{
		G_B46_0 = 0;
	}

IL_031a:
	{
		V_26 = (bool)G_B46_0;
		bool L_152 = V_26;
		if (!L_152)
		{
			goto IL_0348;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_153 = V_0;
		int32_t L_154 = V_3;
		int32_t L_155 = L_154;
		V_3 = ((int32_t)il2cpp_codegen_add(L_155, 1));
		uint32_t L_156 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_157 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_158 = ___clipRectMinMax2;
		float L_159 = L_158.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_160 = ___clipRectMinMax2;
		float L_161 = L_160.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162 = V_6;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_163;
		L_163 = MeshBuilder_InterpolateVertexInTriangle_mA62F286B6C128064812E5EFFDC9D19DED24C3F8D(L_157, L_159, L_161, L_162, NULL);
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_153, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_155), (int32_t)L_156)))) = L_163;
	}

IL_0348:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = V_7;
		float L_165 = L_164.___x_2;
		if ((!(((float)L_165) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_03a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = V_7;
		float L_167 = L_166.___x_2;
		if ((!(((float)L_167) <= ((float)(1.00000012f)))))
		{
			goto IL_03a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168 = V_7;
		float L_169 = L_168.___y_3;
		if ((!(((float)L_169) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_03a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170 = V_7;
		float L_171 = L_170.___y_3;
		if ((!(((float)L_171) <= ((float)(1.00000012f)))))
		{
			goto IL_03a4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172 = V_7;
		float L_173 = L_172.___z_4;
		if ((!(((float)L_173) >= ((float)(-1.00000001E-07f)))))
		{
			goto IL_03a1;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = V_7;
		float L_175 = L_174.___z_4;
		G_B55_0 = ((((int32_t)((!(((float)L_175) <= ((float)(1.00000012f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_03a2;
	}

IL_03a1:
	{
		G_B55_0 = 0;
	}

IL_03a2:
	{
		G_B57_0 = G_B55_0;
		goto IL_03a5;
	}

IL_03a4:
	{
		G_B57_0 = 0;
	}

IL_03a5:
	{
		V_27 = (bool)G_B57_0;
		bool L_176 = V_27;
		if (!L_176)
		{
			goto IL_03d3;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_177 = V_0;
		int32_t L_178 = V_3;
		int32_t L_179 = L_178;
		V_3 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		uint32_t L_180 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_181 = ___vt0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_182 = ___clipRectMinMax2;
		float L_183 = L_182.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_184 = ___clipRectMinMax2;
		float L_185 = L_184.___w_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186 = V_7;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_187;
		L_187 = MeshBuilder_InterpolateVertexInTriangle_mA62F286B6C128064812E5EFFDC9D19DED24C3F8D(L_181, L_183, L_185, L_186, NULL);
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_179), (int32_t)L_180)))) = L_187;
	}

IL_03d3:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_188 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_189 = ___clipRectMinMax2;
		float L_190 = L_189.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_191 = ___clipRectMinMax2;
		float L_192 = L_191.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_193 = ___clipRectMinMax2;
		float L_194 = L_193.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_195 = ___clipRectMinMax2;
		float L_196 = L_195.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_197;
		memset((&L_197), 0, sizeof(L_197));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_197), L_190, L_192, L_194, L_196, /*hidden argument*/NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_188 = L_197;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_198 = V_2;
		uint32_t L_199 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_200 = ___clipRectMinMax2;
		float L_201 = L_200.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_202 = ___clipRectMinMax2;
		float L_203 = L_202.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_204 = ___clipRectMinMax2;
		float L_205 = L_204.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_206 = ___clipRectMinMax2;
		float L_207 = L_206.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_208;
		memset((&L_208), 0, sizeof(L_208));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_208), L_201, L_203, L_205, L_207, /*hidden argument*/NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)il2cpp_codegen_add((intptr_t)L_198, (int32_t)L_199)) = L_208;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_209 = V_2;
		uint32_t L_210 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_211 = ___clipRectMinMax2;
		float L_212 = L_211.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_213 = ___clipRectMinMax2;
		float L_214 = L_213.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_215 = ___clipRectMinMax2;
		float L_216 = L_215.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_217 = ___clipRectMinMax2;
		float L_218 = L_217.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_219;
		memset((&L_219), 0, sizeof(L_219));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_219), L_212, L_214, L_216, L_218, /*hidden argument*/NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)il2cpp_codegen_add((intptr_t)L_209, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_210)))) = L_219;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_220 = V_2;
		uint32_t L_221 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_222 = ___clipRectMinMax2;
		float L_223 = L_222.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_224 = ___clipRectMinMax2;
		float L_225 = L_224.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_226 = ___clipRectMinMax2;
		float L_227 = L_226.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_228 = ___clipRectMinMax2;
		float L_229 = L_228.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_230;
		memset((&L_230), 0, sizeof(L_230));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_230), L_223, L_225, L_227, L_229, /*hidden argument*/NULL);
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)il2cpp_codegen_add((intptr_t)L_220, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_221)))) = L_230;
		V_28 = 0;
		goto IL_059d;
	}

IL_0482:
	{
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_231 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_AllClipEdges_10;
		int32_t L_232 = V_28;
		NullCheck(L_231);
		int32_t L_233 = L_232;
		int32_t L_234 = (int32_t)(L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		V_29 = L_234;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_235 = V_2;
		int32_t L_236 = V_28;
		uint32_t L_237 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_238 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)il2cpp_codegen_add((intptr_t)L_235, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_236), (int32_t)L_237)))));
		V_30 = L_238;
		V_31 = 0;
		goto IL_0588;
	}

IL_04a8:
	{
		int32_t L_239 = V_31;
		V_32 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_239, 1))%3));
		int32_t* L_240 = V_1;
		int32_t L_241 = V_31;
		int32_t L_242 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_240, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_241), 4)))));
		int32_t L_243 = V_29;
		int32_t* L_244 = V_1;
		int32_t L_245 = V_32;
		int32_t L_246 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_244, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_245), 4)))));
		int32_t L_247 = V_29;
		V_34 = (bool)((((int32_t)((int32_t)(L_242&(int32_t)L_243))) == ((int32_t)((int32_t)(L_246&(int32_t)L_247))))? 1 : 0);
		bool L_248 = V_34;
		if (!L_248)
		{
			goto IL_04d4;
		}
	}
	{
		goto IL_0582;
	}

IL_04d4:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_249 = ___vt0;
		int32_t L_250 = V_31;
		uint32_t L_251 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_249, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_250), (int32_t)L_251)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_252 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_249, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_250), (int32_t)L_251))))->___position_1);
		float L_253 = L_252->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_254 = ___vt0;
		int32_t L_255 = V_31;
		uint32_t L_256 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_254, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_255), (int32_t)L_256)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_257 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_254, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_255), (int32_t)L_256))))->___position_1);
		float L_258 = L_257->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_259 = ___vt0;
		int32_t L_260 = V_32;
		uint32_t L_261 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_260), (int32_t)L_261)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_262 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_259, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_260), (int32_t)L_261))))->___position_1);
		float L_263 = L_262->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_264 = ___vt0;
		int32_t L_265 = V_32;
		uint32_t L_266 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_264, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_265), (int32_t)L_266)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_267 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_264, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_265), (int32_t)L_266))))->___position_1);
		float L_268 = L_267->___y_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_269 = V_30;
		float L_270 = L_269.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_271 = V_30;
		float L_272 = L_271.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_273 = V_30;
		float L_274 = L_273.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_275 = V_30;
		float L_276 = L_275.___w_4;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		float L_277;
		L_277 = MeshBuilder_IntersectSegments_mC8F693B9F4F4C7183F6FC2FF5E60364355F5BB62(L_253, L_258, L_263, L_268, L_270, L_272, L_274, L_276, NULL);
		V_33 = L_277;
		float L_278 = V_33;
		V_35 = (bool)((((int32_t)((((float)L_278) == ((float)((std::numeric_limits<float>::max)())))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_279 = V_35;
		if (!L_279)
		{
			goto IL_0581;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_280 = V_0;
		int32_t L_281 = V_3;
		int32_t L_282 = L_281;
		V_3 = ((int32_t)il2cpp_codegen_add(L_282, 1));
		uint32_t L_283 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_284 = ___vt0;
		int32_t L_285 = V_31;
		int32_t L_286 = V_32;
		float L_287 = V_33;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_288;
		L_288 = MeshBuilder_InterpolateVertexInTriangleEdge_mEF393B5D7F6842244D01A9CEB4899024A5493F8F(L_284, L_285, L_286, L_287, NULL);
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_280, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_282), (int32_t)L_283)))) = L_288;
	}

IL_0581:
	{
	}

IL_0582:
	{
		int32_t L_289 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_289, 1));
	}

IL_0588:
	{
		int32_t L_290 = V_31;
		V_36 = (bool)((((int32_t)L_290) < ((int32_t)3))? 1 : 0);
		bool L_291 = V_36;
		if (L_291)
		{
			goto IL_04a8;
		}
	}
	{
		int32_t L_292 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_292, 1));
	}

IL_059d:
	{
		int32_t L_293 = V_28;
		il2cpp_codegen_runtime_class_init_inline(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_294 = ((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_AllClipEdges_10;
		NullCheck(L_294);
		V_37 = (bool)((((int32_t)L_293) < ((int32_t)((int32_t)(((RuntimeArray*)L_294)->max_length))))? 1 : 0);
		bool L_295 = V_37;
		if (L_295)
		{
			goto IL_0482;
		}
	}
	{
		int32_t L_296 = V_3;
		V_38 = (bool)((((int32_t)L_296) == ((int32_t)0))? 1 : 0);
		bool L_297 = V_38;
		if (!L_297)
		{
			goto IL_05c0;
		}
	}
	{
		goto IL_0883;
	}

IL_05c0:
	{
		int32_t L_298 = V_3;
		if ((uintptr_t)((uintptr_t)L_298) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102_RuntimeMethod_var);
		int8_t* L_299 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_298), 4)));
		memset(L_299, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_298), 4)));
		V_8 = (float*)(L_299);
		float* L_300 = V_8;
		*((float*)L_300) = (float)(0.0f);
		V_39 = 1;
		goto IL_0659;
	}

IL_05d8:
	{
		float* L_301 = V_8;
		int32_t L_302 = V_39;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_303 = V_0;
		int32_t L_304 = V_39;
		uint32_t L_305 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_303, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_304), (int32_t)L_305)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_306 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_303, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_304), (int32_t)L_305))))->___position_1);
		float L_307 = L_306->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_308 = V_0;
		NullCheck(L_308);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_309 = (&L_308->___position_1);
		float L_310 = L_309->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_311 = V_0;
		int32_t L_312 = V_39;
		uint32_t L_313 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_311, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_312), (int32_t)L_313)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_314 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_311, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_312), (int32_t)L_313))))->___position_1);
		float L_315 = L_314->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_316 = V_0;
		NullCheck(L_316);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_317 = (&L_316->___position_1);
		float L_318 = L_317->___x_2;
		float L_319;
		L_319 = atan2f(((float)il2cpp_codegen_subtract(L_307, L_310)), ((float)il2cpp_codegen_subtract(L_315, L_318)));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_301, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_302), 4))))) = (float)L_319;
		float* L_320 = V_8;
		int32_t L_321 = V_39;
		float L_322 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_320, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_321), 4)))));
		V_40 = (bool)((((float)L_322) < ((float)(0.0f)))? 1 : 0);
		bool L_323 = V_40;
		if (!L_323)
		{
			goto IL_0652;
		}
	}
	{
		float* L_324 = V_8;
		int32_t L_325 = V_39;
		float* L_326 = ((float*)il2cpp_codegen_add((intptr_t)L_324, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_325), 4))));
		float L_327 = *((float*)L_326);
		*((float*)L_326) = (float)((float)il2cpp_codegen_add(L_327, (6.28318548f)));
	}

IL_0652:
	{
		int32_t L_328 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_328, 1));
	}

IL_0659:
	{
		int32_t L_329 = V_39;
		int32_t L_330 = V_3;
		V_41 = (bool)((((int32_t)L_329) < ((int32_t)L_330))? 1 : 0);
		bool L_331 = V_41;
		if (L_331)
		{
			goto IL_05d8;
		}
	}
	{
		int32_t L_332 = V_3;
		if ((uintptr_t)((uintptr_t)L_332) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MeshBuilder_RectClipTriangle_m01F7519FF4EE69F44378FAFC7F0DD98428C0F102_RuntimeMethod_var);
		int8_t* L_333 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_332), 4)));
		memset(L_333, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_332), 4)));
		V_9 = (int32_t*)(L_333);
		int32_t* L_334 = V_9;
		*((int32_t*)L_334) = (int32_t)0;
		V_10 = 0;
		V_42 = 1;
		goto IL_06f1;
	}

IL_067b:
	{
		V_43 = (-1);
		V_44 = ((std::numeric_limits<float>::max)());
		V_45 = 1;
		goto IL_06c8;
	}

IL_068b:
	{
		uint32_t L_335 = V_10;
		int32_t L_336 = V_45;
		if (((int64_t)(((int64_t)(uint64_t)L_335)&((int64_t)((int32_t)(1<<((int32_t)(L_336&((int32_t)31)))))))))
		{
			goto IL_06a9;
		}
	}
	{
		float* L_337 = V_8;
		int32_t L_338 = V_45;
		float L_339 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_337, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_338), 4)))));
		float L_340 = V_44;
		G_B82_0 = ((((float)L_339) < ((float)L_340))? 1 : 0);
		goto IL_06aa;
	}

IL_06a9:
	{
		G_B82_0 = 0;
	}

IL_06aa:
	{
		V_46 = (bool)G_B82_0;
		bool L_341 = V_46;
		if (!L_341)
		{
			goto IL_06c1;
		}
	}
	{
		float* L_342 = V_8;
		int32_t L_343 = V_45;
		float L_344 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_342, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_343), 4)))));
		V_44 = L_344;
		int32_t L_345 = V_45;
		V_43 = L_345;
	}

IL_06c1:
	{
		int32_t L_346 = V_45;
		V_45 = ((int32_t)il2cpp_codegen_add(L_346, 1));
	}

IL_06c8:
	{
		int32_t L_347 = V_45;
		int32_t L_348 = V_3;
		V_47 = (bool)((((int32_t)L_347) < ((int32_t)L_348))? 1 : 0);
		bool L_349 = V_47;
		if (L_349)
		{
			goto IL_068b;
		}
	}
	{
		int32_t* L_350 = V_9;
		int32_t L_351 = V_42;
		int32_t L_352 = V_43;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_350, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_351), 4))))) = (int32_t)L_352;
		uint32_t L_353 = V_10;
		int32_t L_354 = V_43;
		V_10 = ((int32_t)((int32_t)L_353|((int32_t)(1<<((int32_t)(L_354&((int32_t)31)))))));
		int32_t L_355 = V_42;
		V_42 = ((int32_t)il2cpp_codegen_add(L_355, 1));
	}

IL_06f1:
	{
		int32_t L_356 = V_42;
		int32_t L_357 = V_3;
		V_48 = (bool)((((int32_t)L_356) < ((int32_t)L_357))? 1 : 0);
		bool L_358 = V_48;
		if (L_358)
		{
			goto IL_067b;
		}
	}
	{
		uint16_t* L_359 = ___nextNewVertex4;
		int32_t L_360 = *((uint16_t*)L_359);
		V_11 = (uint16_t)L_360;
		V_49 = 0;
		goto IL_0738;
	}

IL_0709:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_361 = ___mwd3;
		NullCheck(L_361);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* L_362 = (&L_361->___m_Vertices_0);
		uint16_t L_363 = V_11;
		int32_t L_364 = V_49;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_365 = V_0;
		int32_t* L_366 = V_9;
		int32_t L_367 = V_49;
		int32_t L_368 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_366, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_367), 4)))));
		uint32_t L_369 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_370 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_365, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_368), (int32_t)L_369)))));
		NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D(L_362, ((int32_t)il2cpp_codegen_add((int32_t)L_363, L_364)), L_370, NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		int32_t L_371 = V_49;
		V_49 = ((int32_t)il2cpp_codegen_add(L_371, 1));
	}

IL_0738:
	{
		int32_t L_372 = V_49;
		int32_t L_373 = V_3;
		V_50 = (bool)((((int32_t)L_372) < ((int32_t)L_373))? 1 : 0);
		bool L_374 = V_50;
		if (L_374)
		{
			goto IL_0709;
		}
	}
	{
		uint16_t* L_375 = ___nextNewVertex4;
		uint16_t* L_376 = ___nextNewVertex4;
		int32_t L_377 = *((uint16_t*)L_376);
		int32_t L_378 = V_3;
		*((int16_t*)L_375) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_377, ((int32_t)(uint16_t)L_378))));
		int32_t L_379 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_379, 2));
		V_13 = (bool)0;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_380 = ___mwd3;
		NullCheck(L_380);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* L_381 = (&L_380->___m_Vertices_0);
		uint16_t L_382 = V_11;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_383;
		L_383 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE(L_381, L_382, NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_384 = L_383.___position_1;
		V_14 = L_384;
		V_51 = 0;
		goto IL_0874;
	}

IL_0771:
	{
		uint16_t L_385 = V_11;
		int32_t L_386 = V_51;
		V_52 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_385, L_386)), 1));
		uint16_t L_387 = V_11;
		int32_t L_388 = V_51;
		V_53 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_387, L_388)), 2));
		bool L_389 = V_13;
		V_57 = (bool)((((int32_t)L_389) == ((int32_t)0))? 1 : 0);
		bool L_390 = V_57;
		if (!L_390)
		{
			goto IL_07e1;
		}
	}
	{
		float* L_391 = V_8;
		int32_t* L_392 = V_9;
		int32_t L_393 = V_51;
		int32_t L_394 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_392, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_393, 1))), 4)))));
		float L_395 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_391, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_394), 4)))));
		V_58 = L_395;
		float* L_396 = V_8;
		int32_t* L_397 = V_9;
		int32_t L_398 = V_51;
		int32_t L_399 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_397, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_398, 2))), 4)))));
		float L_400 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_396, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_399), 4)))));
		V_59 = L_400;
		float L_401 = V_59;
		float L_402 = V_58;
		V_60 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_401, L_402))) >= ((float)(3.14159274f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_403 = V_60;
		if (!L_403)
		{
			goto IL_07e0;
		}
	}
	{
		uint16_t L_404 = V_11;
		V_52 = ((int32_t)il2cpp_codegen_add((int32_t)L_404, 1));
		uint16_t L_405 = V_11;
		int32_t L_406 = V_3;
		V_53 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_405, L_406)), 1));
		V_13 = (bool)1;
	}

IL_07e0:
	{
	}

IL_07e1:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_407 = ___mwd3;
		NullCheck(L_407);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* L_408 = (&L_407->___m_Vertices_0);
		int32_t L_409 = V_52;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_410;
		L_410 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE(L_408, L_409, NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_411 = L_410.___position_1;
		V_54 = L_411;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_412 = ___mwd3;
		NullCheck(L_412);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* L_413 = (&L_412->___m_Vertices_0);
		int32_t L_414 = V_53;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_415;
		L_415 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE(L_413, L_414, NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_416 = L_415.___position_1;
		V_55 = L_416;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_417 = V_54;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_418 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_419;
		L_419 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_417, L_418, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_420 = V_55;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_421 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_422;
		L_422 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_420, L_421, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_423;
		L_423 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_419, L_422, NULL);
		V_56 = L_423;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_424 = ___mwd3;
		uint16_t L_425 = V_11;
		NullCheck(L_424);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_424, L_425, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_426 = V_56;
		float L_427 = L_426.___z_4;
		V_61 = (bool)((((float)L_427) < ((float)(0.0f)))? 1 : 0);
		bool L_428 = V_61;
		if (!L_428)
		{
			goto IL_0857;
		}
	}
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_429 = ___mwd3;
		int32_t L_430 = V_53;
		NullCheck(L_429);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_429, (uint16_t)((int32_t)(uint16_t)L_430), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_431 = ___mwd3;
		int32_t L_432 = V_52;
		NullCheck(L_431);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_431, (uint16_t)((int32_t)(uint16_t)L_432), NULL);
		goto IL_086d;
	}

IL_0857:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_433 = ___mwd3;
		int32_t L_434 = V_52;
		NullCheck(L_433);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_433, (uint16_t)((int32_t)(uint16_t)L_434), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_435 = ___mwd3;
		int32_t L_436 = V_53;
		NullCheck(L_435);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_435, (uint16_t)((int32_t)(uint16_t)L_436), NULL);
	}

IL_086d:
	{
		int32_t L_437 = V_51;
		V_51 = ((int32_t)il2cpp_codegen_add(L_437, 1));
	}

IL_0874:
	{
		int32_t L_438 = V_51;
		int32_t L_439 = V_12;
		V_62 = (bool)((((int32_t)L_438) < ((int32_t)L_439))? 1 : 0);
		bool L_440 = V_62;
		if (L_440)
		{
			goto IL_0771;
		}
	}

IL_0883:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.UIElements.UIR.MeshBuilder::GetVertexBaryCentricCoordinates(UnityEngine.UIElements.Vertex*,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshBuilder_GetVertexBaryCentricCoordinates_m53FD39E6E64880162354E8141090DE063DA66C17 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, float ___x1, float ___y2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___vt0;
		uint32_t L_1 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_0, (int32_t)L_1))->___position_1);
		float L_3 = L_2->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4 = ___vt0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&L_4->___position_1);
		float L_6 = L_5->___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_7 = ___vt0;
		uint32_t L_8 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)L_8))->___position_1);
		float L_10 = L_9->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_11 = ___vt0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___position_1);
		float L_13 = L_12->___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_10, L_13));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_14 = ___vt0;
		uint32_t L_15 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_15)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_15))))->___position_1);
		float L_17 = L_16->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_18 = ___vt0;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&L_18->___position_1);
		float L_20 = L_19->___x_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_17, L_20));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_21 = ___vt0;
		uint32_t L_22 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_22)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_22))))->___position_1);
		float L_24 = L_23->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_25 = ___vt0;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&L_25->___position_1);
		float L_27 = L_26->___y_3;
		V_3 = ((float)il2cpp_codegen_subtract(L_24, L_27));
		float L_28 = ___x1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_29 = ___vt0;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&L_29->___position_1);
		float L_31 = L_30->___x_2;
		V_4 = ((float)il2cpp_codegen_subtract(L_28, L_31));
		float L_32 = ___y2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_33 = ___vt0;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&L_33->___position_1);
		float L_35 = L_34->___y_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_32, L_35));
		float L_36 = V_0;
		float L_37 = V_0;
		float L_38 = V_1;
		float L_39 = V_1;
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_36, L_37)), ((float)il2cpp_codegen_multiply(L_38, L_39))));
		float L_40 = V_0;
		float L_41 = V_2;
		float L_42 = V_1;
		float L_43 = V_3;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_40, L_41)), ((float)il2cpp_codegen_multiply(L_42, L_43))));
		float L_44 = V_2;
		float L_45 = V_2;
		float L_46 = V_3;
		float L_47 = V_3;
		V_8 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_44, L_45)), ((float)il2cpp_codegen_multiply(L_46, L_47))));
		float L_48 = V_4;
		float L_49 = V_0;
		float L_50 = V_5;
		float L_51 = V_1;
		V_9 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_48, L_49)), ((float)il2cpp_codegen_multiply(L_50, L_51))));
		float L_52 = V_4;
		float L_53 = V_2;
		float L_54 = V_5;
		float L_55 = V_3;
		V_10 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_52, L_53)), ((float)il2cpp_codegen_multiply(L_54, L_55))));
		float L_56 = V_6;
		float L_57 = V_8;
		float L_58 = V_7;
		float L_59 = V_7;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_56, L_57)), ((float)il2cpp_codegen_multiply(L_58, L_59))));
		float L_60 = V_8;
		float L_61 = V_9;
		float L_62 = V_7;
		float L_63 = V_10;
		float L_64 = V_11;
		(&V_12)->___y_3 = ((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_60, L_61)), ((float)il2cpp_codegen_multiply(L_62, L_63))))/L_64));
		float L_65 = V_6;
		float L_66 = V_10;
		float L_67 = V_7;
		float L_68 = V_9;
		float L_69 = V_11;
		(&V_12)->___z_4 = ((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_65, L_66)), ((float)il2cpp_codegen_multiply(L_67, L_68))))/L_69));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_12;
		float L_71 = L_70.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_12;
		float L_73 = L_72.___z_4;
		(&V_12)->___x_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_71)), L_73));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_12;
		V_13 = L_74;
		goto IL_012b;
	}

IL_012b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_13;
		return L_75;
	}
}
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::InterpolateVertexInTriangle(UnityEngine.UIElements.Vertex*,System.Single,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_InterpolateVertexInTriangle_mA62F286B6C128064812E5EFFDC9D19DED24C3F8D (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, float ___x1, float ___y2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___uvw3, const RuntimeMethod* method) 
{
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___vt0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_1 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_0);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&(&V_0)->___position_1);
		float L_3 = ___x1;
		L_2->___x_2 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&(&V_0)->___position_1);
		float L_5 = ___y2;
		L_4->___y_3 = L_5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6 = ___vt0;
		NullCheck(L_6);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = L_6->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___uvw3;
		float L_10 = L_9.___x_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_8, L_10, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_12 = ___vt0;
		uint32_t L_13 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)L_13)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_12, (int32_t)L_13))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___uvw3;
		float L_17 = L_16.___y_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_15, L_17, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_11, L_18, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_20 = ___vt0;
		uint32_t L_21 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_21)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_21))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___uvw3;
		float L_25 = L_24.___z_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_23, L_25, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_19, L_26, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_27, NULL);
		(&V_0)->___tint_2 = L_28;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_29 = ___vt0;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = L_29->___uv_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___uvw3;
		float L_32 = L_31.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_30, L_32, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_34 = ___vt0;
		uint32_t L_35 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_34, (int32_t)L_35)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_34, (int32_t)L_35))->___uv_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___uvw3;
		float L_38 = L_37.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_36, L_38, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_33, L_39, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_41 = ___vt0;
		uint32_t L_42 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_42)))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_42))))->___uv_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___uvw3;
		float L_45 = L_44.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_43, L_45, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_40, L_46, NULL);
		(&V_0)->___uv_3 = L_47;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_48 = V_0;
		V_1 = L_48;
		goto IL_00e4;
	}

IL_00e4:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_49 = V_1;
		return L_49;
	}
}
// UnityEngine.UIElements.Vertex UnityEngine.UIElements.UIR.MeshBuilder::InterpolateVertexInTriangleEdge(UnityEngine.UIElements.Vertex*,System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 MeshBuilder_InterpolateVertexInTriangleEdge_mEF393B5D7F6842244D01A9CEB4899024A5493F8F (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___vt0, int32_t ___e01, int32_t ___e12, float ___t3, const RuntimeMethod* method) 
{
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___vt0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_1 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)L_0);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&(&V_0)->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_3 = ___vt0;
		int32_t L_4 = ___e01;
		uint32_t L_5 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), (int32_t)L_5))))->___position_1);
		float L_7 = L_6->___x_2;
		float L_8 = ___t3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_9 = ___vt0;
		int32_t L_10 = ___e12;
		uint32_t L_11 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), (int32_t)L_11)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_10), (int32_t)L_11))))->___position_1);
		float L_13 = L_12->___x_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_14 = ___vt0;
		int32_t L_15 = ___e01;
		uint32_t L_16 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_14, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_15), (int32_t)L_16))))->___position_1);
		float L_18 = L_17->___x_2;
		L_2->___x_2 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_8, ((float)il2cpp_codegen_subtract(L_13, L_18))))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&(&V_0)->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_20 = ___vt0;
		int32_t L_21 = ___e01;
		uint32_t L_22 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), (int32_t)L_22)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_21), (int32_t)L_22))))->___position_1);
		float L_24 = L_23->___y_3;
		float L_25 = ___t3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_26 = ___vt0;
		int32_t L_27 = ___e12;
		uint32_t L_28 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), (int32_t)L_28)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_27), (int32_t)L_28))))->___position_1);
		float L_30 = L_29->___y_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_31 = ___vt0;
		int32_t L_32 = ___e01;
		uint32_t L_33 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), (int32_t)L_33)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_32), (int32_t)L_33))))->___position_1);
		float L_35 = L_34->___y_3;
		L_19->___y_3 = ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(L_25, ((float)il2cpp_codegen_subtract(L_30, L_35))))));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_36 = ___vt0;
		int32_t L_37 = ___e01;
		uint32_t L_38 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), (int32_t)L_38)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_36, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_37), (int32_t)L_38))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_39, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_41 = ___vt0;
		int32_t L_42 = ___e12;
		uint32_t L_43 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), (int32_t)L_43)))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_44 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_42), (int32_t)L_43))))->___tint_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		L_45 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_44, NULL);
		float L_46 = ___t3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		L_47 = Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline(L_40, L_45, L_46, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_48;
		L_48 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_47, NULL);
		(&V_0)->___tint_2 = L_48;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_49 = ___vt0;
		int32_t L_50 = ___e01;
		uint32_t L_51 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), (int32_t)L_51)))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), (int32_t)L_51))))->___uv_3;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_53 = ___vt0;
		int32_t L_54 = ___e12;
		uint32_t L_55 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		NullCheck(((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_54), (int32_t)L_55)))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = ((Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)il2cpp_codegen_add((intptr_t)L_53, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_54), (int32_t)L_55))))->___uv_3;
		float L_57 = ___t3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_52, L_56, L_57, NULL);
		(&V_0)->___uv_3 = L_58;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_59 = V_0;
		V_1 = L_59;
		goto IL_0113;
	}

IL_0113:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_60 = V_1;
		return L_60;
	}
}
// System.Single UnityEngine.UIElements.UIR.MeshBuilder::IntersectSegments(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshBuilder_IntersectSegments_mC8F693B9F4F4C7183F6FC2FF5E60364355F5BB62 (float ___ax0, float ___ay1, float ___bx2, float ___by3, float ___cx4, float ___cy5, float ___dx6, float ___dy7, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	float V_5 = 0.0f;
	bool V_6 = false;
	{
		float L_0 = ___ax0;
		float L_1 = ___dx6;
		float L_2 = ___by3;
		float L_3 = ___dy7;
		float L_4 = ___ay1;
		float L_5 = ___dy7;
		float L_6 = ___bx2;
		float L_7 = ___dx6;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_subtract(L_2, L_3)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, L_5)), ((float)il2cpp_codegen_subtract(L_6, L_7))))));
		float L_8 = ___ax0;
		float L_9 = ___cx4;
		float L_10 = ___by3;
		float L_11 = ___cy5;
		float L_12 = ___ay1;
		float L_13 = ___cy5;
		float L_14 = ___bx2;
		float L_15 = ___cx4;
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_8, L_9)), ((float)il2cpp_codegen_subtract(L_10, L_11)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), ((float)il2cpp_codegen_subtract(L_14, L_15))))));
		float L_16 = V_0;
		float L_17 = V_1;
		V_4 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_multiply(L_16, L_17))) >= ((float)(-9.99999975E-06f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0045;
		}
	}
	{
		V_5 = ((std::numeric_limits<float>::max)());
		goto IL_0084;
	}

IL_0045:
	{
		float L_19 = ___cx4;
		float L_20 = ___ax0;
		float L_21 = ___dy7;
		float L_22 = ___ay1;
		float L_23 = ___cy5;
		float L_24 = ___ay1;
		float L_25 = ___dx6;
		float L_26 = ___ax0;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_20)), ((float)il2cpp_codegen_subtract(L_21, L_22)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_23, L_24)), ((float)il2cpp_codegen_subtract(L_25, L_26))))));
		float L_27 = V_2;
		float L_28 = V_1;
		float L_29 = V_0;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_27, L_28)), L_29));
		float L_30 = V_2;
		float L_31 = V_3;
		V_6 = (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_multiply(L_30, L_31))) >= ((float)(-9.99999975E-06f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_007b;
		}
	}
	{
		V_5 = ((std::numeric_limits<float>::max)());
		goto IL_0084;
	}

IL_007b:
	{
		float L_33 = V_2;
		float L_34 = V_2;
		float L_35 = V_3;
		V_5 = ((float)(L_33/((float)il2cpp_codegen_subtract(L_34, L_35))));
		goto IL_0084;
	}

IL_0084:
	{
		float L_36 = V_5;
		return L_36;
	}
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshBuilder__cctor_m96711E018AD4C049FFD86FF97186AEC9454C0DCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t03ED7C6DFD030F64BE095A77446098CAA515B661____2658253827592C8000DF6C48FD5487B674D9E695DB670A56FDEAB2B7F291523E_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A3F4927E051746A9F30454F0F92269F4430E7C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63C5C5D442C5A443C7776D7EBEE0F610DE2248B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C183899E3EA23EE9E6CA02A616D7E7DCBB4AD2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD48662FD50B014F07EAFB4712AE2F90C3AF0BB5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral5A3F4927E051746A9F30454F0F92269F4430E7C1, /*hidden argument*/NULL);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_VectorGraphics9Slice_0 = L_0;
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteral63C5C5D442C5A443C7776D7EBEE0F610DE2248B1, /*hidden argument*/NULL);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_VectorGraphicsSplitTriangle_1 = L_1;
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_2;
		memset((&L_2), 0, sizeof(L_2));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_2), _stringLiteral7C183899E3EA23EE9E6CA02A616D7E7DCBB4AD2C, /*hidden argument*/NULL);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_VectorGraphicsScaleTriangle_2 = L_2;
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_3;
		memset((&L_3), 0, sizeof(L_3));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_3), _stringLiteralD48662FD50B014F07EAFB4712AE2F90C3AF0BB5A, /*hidden argument*/NULL);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_VectorGraphicsStretch_3 = L_3;
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_MaxTextMeshVertices_4 = ((int32_t)49152);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)54));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t03ED7C6DFD030F64BE095A77446098CAA515B661____2658253827592C8000DF6C48FD5487B674D9E695DB670A56FDEAB2B7F291523E_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___slicedQuadIndices_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___slicedQuadIndices_5), (void*)L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesX_6), (void*)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_TexCoordSlicesY_7), (void*)L_8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesX_8), (void*)L_9);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___k_PositionSlicesY_9), (void*)L_10);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_11 = (VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA*)(VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA*)SZArrayNew(VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA_il2cpp_TypeInfo_var, (uint32_t)4);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)4);
		VertexClipEdgeU5BU5D_t996146320A0ACC313D3EF0F5791237A90C2E34AA* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)8);
		((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_AllClipEdges_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_StaticFields*)il2cpp_codegen_static_fields_for(MeshBuilder_t73D46F57E528BF26B22D710789F8E63D0F966A1F_il2cpp_TypeInfo_var))->___s_AllClipEdges_10), (void*)L_15);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke(const AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0& unmarshaled, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___alloc_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'alloc' of type 'AllocMeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___alloc_0Exception, NULL);
}
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_back(const AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_pinvoke& marshaled, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0& unmarshaled)
{
	Exception_t* ___alloc_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'alloc' of type 'AllocMeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___alloc_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_pinvoke_cleanup(AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_com(const AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0& unmarshaled, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_com& marshaled)
{
	Exception_t* ___alloc_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'alloc' of type 'AllocMeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___alloc_0Exception, NULL);
}
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_com_back(const AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_com& marshaled, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0& unmarshaled)
{
	Exception_t* ___alloc_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'alloc' of type 'AllocMeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___alloc_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData
IL2CPP_EXTERN_C void AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshal_com_cleanup(AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0_marshaled_com& marshaled)
{
}
// UnityEngine.UIElements.MeshWriteData UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData::Allocate(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2 (AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, const RuntimeMethod* method) 
{
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_0 = NULL;
	{
		Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* L_0 = __this->___alloc_0;
		uint32_t L_1 = ___vertexCount0;
		uint32_t L_2 = ___indexCount1;
		NullCheck(L_0);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_3;
		L_3 = Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_inline(L_0, L_1, L_2, __this, NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2_AdjustorThunk (RuntimeObject* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, const RuntimeMethod* method)
{
	AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0*>(__this + _offset);
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* _returnValue;
	_returnValue = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2(_thisAdjusted, ___vertexCount0, ___indexCount1, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_Multicast(Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* currentDelegate = reinterpret_cast<Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3*>(delegatesToInvoke[i]);
		typedef MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* (*FunctionPointerType) (RuntimeObject*, uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___vertexCount0, ___indexCount1, ___allocatorData2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_OpenInst(Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method)
{
	typedef MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* (*FunctionPointerType) (uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___vertexCount0, ___indexCount1, ___allocatorData2, method);
}
MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_OpenStatic(Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method)
{
	typedef MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* (*FunctionPointerType) (uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___vertexCount0, ___indexCount1, ___allocatorData2, method);
}
MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_OpenStaticInvoker(Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9*, uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* >::Invoke(__this->___method_ptr_0, method, NULL, ___vertexCount0, ___indexCount1, ___allocatorData2);
}
MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_ClosedStaticInvoker(Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9*, RuntimeObject*, uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___vertexCount0, ___indexCount1, ___allocatorData2);
}
// System.Void UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Allocator__ctor_m9AAA6A0F5FC11C644C1039BE774BA6500D962B32 (Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_Multicast;
}
// UnityEngine.UIElements.MeshWriteData UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData/Allocator::Invoke(System.UInt32,System.UInt32,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7 (Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method) 
{
	typedef MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* (*FunctionPointerType) (RuntimeObject*, uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___vertexCount0, ___indexCount1, ___allocatorData2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager__cctor_m6EBD10C130A38DB855B43C7F40A4BB9E2DBB4EB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BC794DABBF58EC754946493A7249124D49ADF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465727E7041A2140650559A4295CA9E1A3B84BD0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral3BC794DABBF58EC754946493A7249124D49ADF5A, NULL);
		((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___textureTableId_2 = L_0;
		il2cpp_codegen_runtime_class_init_inline(UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = UIRenderDevice_get_shaderModelIs35_mB1DC4A0F22A69064E426271B7AB568046A1342D6(NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 4;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 8;
	}

IL_001b:
	{
		((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0 = G_B3_0;
		int32_t L_2 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___slotIds_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___slotIds_1), (void*)L_3);
		V_0 = 0;
		goto IL_0053;
	}

IL_0033:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___slotIds_1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral465727E7041A2140650559A4295CA9E1A3B84BD0, L_8, NULL);
		int32_t L_10;
		L_10 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_9, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (int32_t)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager__ctor_mEBC84CCC93A32AAAF79D89198EE985B002C5C794 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		int32_t L_0 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		__this->___U3CFreeSlotsU3Ek__BackingField_8 = L_0;
		il2cpp_codegen_runtime_class_init_inline(TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_il2cpp_TypeInfo_var);
		TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* L_1;
		L_1 = TextureRegistry_get_instance_m4E974FC5F20C8DD77920F121ECD4F26FAC01385F_inline(NULL);
		__this->___textureRegistry_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureRegistry_9), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_2 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_3 = (TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A*)(TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A*)SZArrayNew(TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___m_Textures_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Textures_3), (void*)L_3);
		int32_t L_4 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___m_Tickets_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tickets_4), (void*)L_5);
		int32_t L_6 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___m_GpuTextures_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GpuTextures_7), (void*)L_7);
		TextureSlotManager_Reset_m43FECB6D32D307D151C8173B6223C7E2BF4484F2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager_Reset_m43FECB6D32D307D151C8173B6223C7E2BF4484F2 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		__this->___m_CurrentTicket_5 = 0;
		__this->___m_FirstUsedTicket_6 = 0;
		V_0 = 0;
		goto IL_0058;
	}

IL_0013:
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_0 = __this->___m_Textures_3;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var);
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_2 = ((TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_StaticFields*)il2cpp_codegen_static_fields_for(TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58_il2cpp_TypeInfo_var))->___invalid_1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___m_Tickets_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)(-1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = __this->___m_GpuTextures_7;
		int32_t L_6 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_7), (-1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0058:
	{
		int32_t L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		int32_t L_10 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		V_1 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::StartNewBatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager_StartNewBatch_mF47EF4AC21E2781DC4B92F3FA46859FB48713EDD (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_CurrentTicket_5;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___m_CurrentTicket_5 = L_1;
		int32_t L_2 = V_0;
		__this->___m_FirstUsedTicket_6 = L_2;
		il2cpp_codegen_runtime_class_init_inline(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		int32_t L_3 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		TextureSlotManager_set_FreeSlots_m7400CBFEF9DC81345E311C521163C76973DC4255_inline(__this, L_3, NULL);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::IndexOf(UnityEngine.UIElements.TextureId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSlotManager_IndexOf_m53C156E4C78E731B3035E593E64C2AF517BC9091 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_002b;
	}

IL_0005:
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_0 = __this->___m_Textures_3;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = TextureId_get_index_m4EA4D8C27C1A2E568803548A40905B45C5626C27(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		int32_t L_3;
		L_3 = TextureId_get_index_m4EA4D8C27C1A2E568803548A40905B45C5626C27((&___id0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_003b;
	}

IL_0027:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		int32_t L_8 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (-1);
		goto IL_003b;
	}

IL_003b:
	{
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::MarkUsed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager_MarkUsed_m6012C3110EBDC75E7B970C814CAA7147D9378126 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, int32_t ___slotIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_Tickets_4;
		int32_t L_1 = ___slotIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___m_FirstUsedTicket_6;
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7;
		L_7 = TextureSlotManager_get_FreeSlots_m07D624EAB6ED9D3B1F4B4EF33DB2FAB1545871D2_inline(__this, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = V_2;
		TextureSlotManager_set_FreeSlots_m7400CBFEF9DC81345E311C521163C76973DC4255_inline(__this, L_8, NULL);
	}

IL_0028:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___m_Tickets_4;
		int32_t L_10 = ___slotIndex0;
		int32_t L_11 = __this->___m_CurrentTicket_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		__this->___m_CurrentTicket_5 = L_12;
		int32_t L_13 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_13);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::get_FreeSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSlotManager_get_FreeSlots_m07D624EAB6ED9D3B1F4B4EF33DB2FAB1545871D2 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFreeSlotsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::set_FreeSlots(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager_set_FreeSlots_m7400CBFEF9DC81345E311C521163C76973DC4255 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFreeSlotsU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.UIElements.UIR.TextureSlotManager::FindOldestSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSlotManager_FindOldestSlot_m671207D54F6A42A0D547BBDC3E4FBC584E38C597 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_Tickets_4;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		V_1 = 0;
		V_2 = 1;
		goto IL_0032;
	}

IL_0010:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___m_Tickets_4;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_0;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___m_Tickets_4;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		int32_t L_13 = V_2;
		V_1 = L_13;
	}

IL_002d:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0032:
	{
		int32_t L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		int32_t L_16 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___k_SlotCount_0;
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_18 = V_1;
		V_5 = L_18;
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_19 = V_5;
		return L_19;
	}
}
// System.Void UnityEngine.UIElements.UIR.TextureSlotManager::Bind(UnityEngine.UIElements.TextureId,System.Int32,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSlotManager_Bind_m43AA141013C559BD295A0B70B4C64C111B72EE80 (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 ___id0, int32_t ___slot1, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___mat2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_0 = NULL;
	bool V_1 = false;
	{
		TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* L_0 = __this->___textureRegistry_9;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_1 = ___id0;
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2;
		L_2 = TextureRegistry_GetTexture_mB02C07261977269B6661D7A6D95ED757178676AE(L_0, L_1, NULL);
		V_0 = L_2;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6;
		L_6 = Texture2D_get_whiteTexture_m3A243ED388F9EF0EC515015A6E0E50FD261D2FA1(NULL);
		V_0 = L_6;
	}

IL_001f:
	{
		TextureIdU5BU5D_t03041DBB5C72B7E6F5F694A36DC5FEA75432188A* L_7 = __this->___m_Textures_3;
		int32_t L_8 = ___slot1;
		TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58 L_9 = ___id0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (TextureId_tFF4B4AAE53408AB10B0B89CCA5F7B50CF2535E58)L_9);
		int32_t L_10 = ___slot1;
		TextureSlotManager_MarkUsed_m6012C3110EBDC75E7B970C814CAA7147D9378126_inline(__this, L_10, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = __this->___m_GpuTextures_7;
		int32_t L_12 = ___slot1;
		float L_13;
		L_13 = TextureId_ConvertToGpu_m7631D660D6ACC5564194AE253544BE092BE83CC3((&___id0), NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_18), L_13, ((float)((1.0f)/((float)L_15))), ((float)((1.0f)/((float)L_17))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_18);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_19 = ___mat2;
		il2cpp_codegen_runtime_class_init_inline(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___slotIds_1;
		int32_t L_21 = ___slot1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24 = V_0;
		NullCheck(L_19);
		MaterialPropertyBlock_SetTexture_m39F531D3F35D6C5B661A7B4F07DD7B8ACC22627F(L_19, L_23, L_24, NULL);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_25 = ___mat2;
		int32_t L_26 = ((TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_StaticFields*)il2cpp_codegen_static_fields_for(TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D_il2cpp_TypeInfo_var))->___textureTableId_2;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_27 = __this->___m_GpuTextures_7;
		NullCheck(L_25);
		MaterialPropertyBlock_SetVectorArray_m5C0A3017A7EA9EE5F01295E346EA72D70A8BD682(L_25, L_26, L_27, NULL);
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
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRect(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRect_m397D4BD73C8683BE9FA34DBA7EABFAEE10E3BAE7 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, bool ___computeUVs3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&(&___rectParams0)->___rect_0);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_2 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_1) < ((float)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = (&(&___rectParams0)->___rect_0);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_5 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_4) < ((float)L_5))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_012f;
	}

IL_0035:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&(&___rectParams0)->___rect_0);
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_7, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&(&___rectParams0)->___rect_0);
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_9, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_8, (0.5f))), ((float)il2cpp_codegen_multiply(L_10, (0.5f))), NULL);
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_11 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = L_11.___topLeftRadius_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_12, L_13, NULL);
		(&___rectParams0)->___topLeftRadius_9 = L_14;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_15 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = L_15.___topRightRadius_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_16, L_17, NULL);
		(&___rectParams0)->___topRightRadius_10 = L_18;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_19 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = L_19.___bottomRightRadius_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_20, L_21, NULL);
		(&___rectParams0)->___bottomRightRadius_11 = L_22;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_23 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = L_23.___bottomLeftRadius_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_24, L_25, NULL);
		(&___rectParams0)->___bottomLeftRadius_12 = L_26;
		V_1 = (uint16_t)0;
		V_2 = (uint16_t)0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_27 = ___rectParams0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_28 = L_27.___colorPage_19;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedCorners_mE4FDA1334E9D9572F36DE80E751A2F38471F65E6((&___rectParams0), (0.0f), (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9*)NULL, L_28, (&V_1), (&V_2), (bool)1, NULL);
		uint16_t L_29 = V_1;
		uint16_t L_30 = V_2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_31;
		L_31 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc2), L_29, L_30, NULL);
		V_3 = L_31;
		V_1 = (uint16_t)0;
		V_2 = (uint16_t)0;
		float L_32 = ___posZ1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_33 = V_3;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_34 = ___rectParams0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_35 = L_34.___colorPage_19;
		Tessellation_TessellateRoundedCorners_mE4FDA1334E9D9572F36DE80E751A2F38471F65E6((&___rectParams0), L_32, L_33, L_35, (&V_1), (&V_2), (bool)0, NULL);
		bool L_36 = ___computeUVs3;
		V_5 = L_36;
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_0111;
		}
	}
	{
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_38 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_39 = L_38.___rect_0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_40 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_41 = L_40.___uv_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_42 = V_3;
		NullCheck(L_42);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_43;
		L_43 = MeshWriteData_get_uvRegion_m6E543500740DE690E1C3DB46DACA44DE9F785353(L_42, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_44 = V_3;
		NullCheck(L_44);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_45 = L_44->___m_Vertices_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_ComputeUVs_m32B3A1353CB1347FAFEF073B93338348CC8ADC5E(L_39, L_41, L_43, L_45, NULL);
	}

IL_0111:
	{
		uint16_t L_46 = V_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = MeshWriteData_get_vertexCount_mC7F08B0C2375FE64C467AB543850F262EB0E5F23(L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_46) == ((int32_t)L_48))? 1 : 0), NULL);
		uint16_t L_49 = V_2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_50 = V_3;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = MeshWriteData_get_indexCount_m72A293A2983CF6CA09F2C066B71E227D8C9447F3(L_50, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_49) == ((int32_t)L_51))? 1 : 0), NULL);
	}

IL_012f:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_m104C6E756E047921A2465E80732402920D968A29 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B ___rectParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&(&___rectParams0)->___rect_0);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_2 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_1) < ((float)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = (&(&___rectParams0)->___rect_0);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_5 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_4) < ((float)L_5))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_3 = (bool)G_B3_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_00ac;
	}

IL_0030:
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_7 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = L_7.___rect_0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_9 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9.___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		L_11 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_10, NULL);
		float L_12 = ___posZ1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_13 = ___rectParams0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_14 = L_13.___colorPage_19;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0(L_8, ((int32_t)15), L_11, L_12, (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9*)NULL, L_14, (&V_0), (&V_1), (bool)1, NULL);
		uint16_t L_15 = V_0;
		uint16_t L_16 = V_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_17;
		L_17 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc2), L_15, L_16, NULL);
		V_2 = L_17;
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_18 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19 = L_18.___rect_0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_20 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20.___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22;
		L_22 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_21, NULL);
		float L_23 = ___posZ1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_24 = V_2;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B L_25 = ___rectParams0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_26 = L_25.___colorPage_19;
		Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0(L_19, ((int32_t)15), L_22, L_23, L_24, L_26, (&V_0), (&V_1), (bool)0, NULL);
		uint16_t L_27 = V_0;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = MeshWriteData_get_vertexCount_mC7F08B0C2375FE64C467AB543850F262EB0E5F23(L_28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_27) == ((int32_t)L_29))? 1 : 0), NULL);
		uint16_t L_30 = V_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = MeshWriteData_get_indexCount_m72A293A2983CF6CA09F2C066B71E227D8C9447F3(L_31, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_30) == ((int32_t)L_32))? 1 : 0), NULL);
	}

IL_00ac:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateBorder(UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams,System.Single,UnityEngine.UIElements.UIR.MeshBuilder/AllocMeshData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateBorder_mFB532850EDA95480873CF193C67BA16857DC0DC6 (BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 ___borderParams0, float ___posZ1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0 ___meshAlloc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_0 = (&(&___borderParams0)->___rect_0);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_2 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_1) < ((float)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_3 = (&(&___borderParams0)->___rect_0);
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_5 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_4) < ((float)L_5))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		V_4 = (bool)G_B3_0;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_015e;
	}

IL_0035:
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&(&___borderParams0)->___rect_0);
		float L_8;
		L_8 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_7, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&(&___borderParams0)->___rect_0);
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_9, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_8, (0.5f))), ((float)il2cpp_codegen_multiply(L_10, (0.5f))), NULL);
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_11 = ___borderParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = L_11.___topLeftRadius_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_12, L_13, NULL);
		(&___borderParams0)->___topLeftRadius_10 = L_14;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_15 = ___borderParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = L_15.___topRightRadius_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_16, L_17, NULL);
		(&___borderParams0)->___topRightRadius_11 = L_18;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_19 = ___borderParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = L_19.___bottomRightRadius_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_20, L_21, NULL);
		(&___borderParams0)->___bottomRightRadius_12 = L_22;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_23 = ___borderParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = L_23.___bottomLeftRadius_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline(L_24, L_25, NULL);
		(&___borderParams0)->___bottomLeftRadius_13 = L_26;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_27 = ___borderParams0;
		float L_28 = L_27.___leftWidth_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_0;
		float L_30 = L_29.___x_0;
		float L_31;
		L_31 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_28, L_30, NULL);
		(&___borderParams0)->___leftWidth_6 = L_31;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_32 = ___borderParams0;
		float L_33 = L_32.___topWidth_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___y_1;
		float L_36;
		L_36 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_33, L_35, NULL);
		(&___borderParams0)->___topWidth_7 = L_36;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_37 = ___borderParams0;
		float L_38 = L_37.___rightWidth_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_0;
		float L_40 = L_39.___x_0;
		float L_41;
		L_41 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_38, L_40, NULL);
		(&___borderParams0)->___rightWidth_8 = L_41;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80 L_42 = ___borderParams0;
		float L_43 = L_42.___bottomWidth_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_0;
		float L_45 = L_44.___y_1;
		float L_46;
		L_46 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_43, L_45, NULL);
		(&___borderParams0)->___bottomWidth_9 = L_46;
		V_1 = (uint16_t)0;
		V_2 = (uint16_t)0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedBorders_m7E0DC93672B14F9B3029482C59EE76E85A9C390F((&___borderParams0), (0.0f), (MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9*)NULL, (&V_1), (&V_2), (bool)1, NULL);
		uint16_t L_47 = V_1;
		uint16_t L_48 = V_2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_49;
		L_49 = AllocMeshData_Allocate_mB77ABF867C6F021BDA7422E84B2A790D1DB395F2((&___meshAlloc2), L_47, L_48, NULL);
		V_3 = L_49;
		V_1 = (uint16_t)0;
		V_2 = (uint16_t)0;
		float L_50 = ___posZ1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_51 = V_3;
		Tessellation_TessellateRoundedBorders_m7E0DC93672B14F9B3029482C59EE76E85A9C390F((&___borderParams0), L_50, L_51, (&V_1), (&V_2), (bool)0, NULL);
		uint16_t L_52 = V_1;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_53 = V_3;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = MeshWriteData_get_vertexCount_mC7F08B0C2375FE64C467AB543850F262EB0E5F23(L_53, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_52) == ((int32_t)L_54))? 1 : 0), NULL);
		uint16_t L_55 = V_2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_56 = V_3;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = MeshWriteData_get_indexCount_m72A293A2983CF6CA09F2C066B71E227D8C9447F3(L_56, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)L_55) == ((int32_t)L_57))? 1 : 0), NULL);
	}

IL_015e:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedCorners(UnityEngine.UIElements.MeshGenerationContextUtils/RectangleParams&,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedCorners_mE4FDA1334E9D9572F36DE80E751A2F38471F65E6 (RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* ___rectParams0, float ___posZ1, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh2, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage3, uint16_t* ___vertexCount4, uint16_t* ___indexCount5, bool ___countOnly6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_0 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&L_0->___rect_0);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_1, NULL);
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_3 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&L_3->___rect_0);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_4, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_multiply(L_2, (0.5f))), ((float)il2cpp_codegen_multiply(L_5, (0.5f))), NULL);
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_6 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&L_6->___rect_0);
		float L_8;
		L_8 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_7, NULL);
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_9 = ___rectParams0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = (&L_9->___rect_0);
		float L_11;
		L_11 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = L_14.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), L_8, L_11, L_13, L_15, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_3;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_17 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17->___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19;
		L_19 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_18, NULL);
		float L_20 = ___posZ1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_21 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = L_21->___topLeftRadius_9;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_23 = ___mesh2;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_24 = ___colorPage3;
		uint16_t* L_25 = ___vertexCount4;
		uint16_t* L_26 = ___indexCount5;
		bool L_27 = ___countOnly6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedCorner_m432D266D245B98E45E1C566F33265F912773E062(L_16, L_19, L_20, L_22, L_23, L_24, L_25, L_26, L_27, NULL);
		uint16_t* L_28 = ___vertexCount4;
		int32_t L_29 = *((uint16_t*)L_28);
		V_0 = (uint16_t)L_29;
		uint16_t* L_30 = ___indexCount5;
		int32_t L_31 = *((uint16_t*)L_30);
		V_1 = (uint16_t)L_31;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_32 = V_3;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_33 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = L_33->___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_35;
		L_35 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_34, NULL);
		float L_36 = ___posZ1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_37 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = L_37->___topRightRadius_10;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_39 = ___mesh2;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_40 = ___colorPage3;
		uint16_t* L_41 = ___vertexCount4;
		uint16_t* L_42 = ___indexCount5;
		bool L_43 = ___countOnly6;
		Tessellation_TessellateRoundedCorner_m432D266D245B98E45E1C566F33265F912773E062(L_32, L_35, L_36, L_38, L_39, L_40, L_41, L_42, L_43, NULL);
		bool L_44 = ___countOnly6;
		V_4 = (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_4;
		if (!L_45)
		{
			goto IL_00d4;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_46 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_47 = ___mesh2;
		NullCheck(L_47);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_48 = L_47->___m_Vertices_0;
		uint16_t L_49 = V_0;
		uint16_t* L_50 = ___vertexCount4;
		int32_t L_51 = *((uint16_t*)L_50);
		uint16_t L_52 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_46, L_48, L_49, ((int32_t)il2cpp_codegen_subtract(L_51, (int32_t)L_52)), (bool)1, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_53 = ___mesh2;
		NullCheck(L_53);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_54 = L_53->___m_Indices_1;
		uint16_t L_55 = V_1;
		uint16_t* L_56 = ___indexCount5;
		int32_t L_57 = *((uint16_t*)L_56);
		uint16_t L_58 = V_1;
		Tessellation_FlipWinding_mEB8CE9D883238F9540490218B02DE9D782D52962(L_54, L_55, ((int32_t)il2cpp_codegen_subtract(L_57, (int32_t)L_58)), NULL);
	}

IL_00d4:
	{
		uint16_t* L_59 = ___vertexCount4;
		int32_t L_60 = *((uint16_t*)L_59);
		V_0 = (uint16_t)L_60;
		uint16_t* L_61 = ___indexCount5;
		int32_t L_62 = *((uint16_t*)L_61);
		V_1 = (uint16_t)L_62;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_63 = V_3;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_64 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65 = L_64->___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_66;
		L_66 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_65, NULL);
		float L_67 = ___posZ1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_68 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = L_68->___bottomRightRadius_11;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_70 = ___mesh2;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_71 = ___colorPage3;
		uint16_t* L_72 = ___vertexCount4;
		uint16_t* L_73 = ___indexCount5;
		bool L_74 = ___countOnly6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedCorner_m432D266D245B98E45E1C566F33265F912773E062(L_63, L_66, L_67, L_69, L_70, L_71, L_72, L_73, L_74, NULL);
		bool L_75 = ___countOnly6;
		V_5 = (bool)((((int32_t)L_75) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_5;
		if (!L_76)
		{
			goto IL_0132;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_77 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_78 = ___mesh2;
		NullCheck(L_78);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_79 = L_78->___m_Vertices_0;
		uint16_t L_80 = V_0;
		uint16_t* L_81 = ___vertexCount4;
		int32_t L_82 = *((uint16_t*)L_81);
		uint16_t L_83 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_77, L_79, L_80, ((int32_t)il2cpp_codegen_subtract(L_82, (int32_t)L_83)), (bool)1, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_84 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_85 = ___mesh2;
		NullCheck(L_85);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_86 = L_85->___m_Vertices_0;
		uint16_t L_87 = V_0;
		uint16_t* L_88 = ___vertexCount4;
		int32_t L_89 = *((uint16_t*)L_88);
		uint16_t L_90 = V_0;
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_84, L_86, L_87, ((int32_t)il2cpp_codegen_subtract(L_89, (int32_t)L_90)), (bool)0, NULL);
	}

IL_0132:
	{
		uint16_t* L_91 = ___vertexCount4;
		int32_t L_92 = *((uint16_t*)L_91);
		V_0 = (uint16_t)L_92;
		uint16_t* L_93 = ___indexCount5;
		int32_t L_94 = *((uint16_t*)L_93);
		V_1 = (uint16_t)L_94;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_95 = V_3;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_96 = ___rectParams0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97 = L_96->___color_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_98;
		L_98 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_97, NULL);
		float L_99 = ___posZ1;
		RectangleParams_t0B5A63548DC33EE252AF81E242B719118C235A4B* L_100 = ___rectParams0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = L_100->___bottomLeftRadius_12;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_102 = ___mesh2;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_103 = ___colorPage3;
		uint16_t* L_104 = ___vertexCount4;
		uint16_t* L_105 = ___indexCount5;
		bool L_106 = ___countOnly6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedCorner_m432D266D245B98E45E1C566F33265F912773E062(L_95, L_98, L_99, L_101, L_102, L_103, L_104, L_105, L_106, NULL);
		bool L_107 = ___countOnly6;
		V_6 = (bool)((((int32_t)L_107) == ((int32_t)0))? 1 : 0);
		bool L_108 = V_6;
		if (!L_108)
		{
			goto IL_018e;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_109 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_110 = ___mesh2;
		NullCheck(L_110);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_111 = L_110->___m_Vertices_0;
		uint16_t L_112 = V_0;
		uint16_t* L_113 = ___vertexCount4;
		int32_t L_114 = *((uint16_t*)L_113);
		uint16_t L_115 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_109, L_111, L_112, ((int32_t)il2cpp_codegen_subtract(L_114, (int32_t)L_115)), (bool)0, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_116 = ___mesh2;
		NullCheck(L_116);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_117 = L_116->___m_Indices_1;
		uint16_t L_118 = V_1;
		uint16_t* L_119 = ___indexCount5;
		int32_t L_120 = *((uint16_t*)L_119);
		uint16_t L_121 = V_1;
		Tessellation_FlipWinding_mEB8CE9D883238F9540490218B02DE9D782D52962(L_117, L_118, ((int32_t)il2cpp_codegen_subtract(L_120, (int32_t)L_121)), NULL);
	}

IL_018e:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedBorders(UnityEngine.UIElements.MeshGenerationContextUtils/BorderParams&,System.Single,UnityEngine.UIElements.MeshWriteData,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedBorders_m7E0DC93672B14F9B3029482C59EE76E85A9C390F (BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* ___border0, float ___posZ1, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh2, uint16_t* ___vertexCount3, uint16_t* ___indexCount4, bool ___countOnly5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_6;
	memset((&V_6), 0, sizeof(V_6));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		V_0 = (uint16_t)0;
		V_1 = (uint16_t)0;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_0 = ___border0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&L_0->___rect_0);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_1, NULL);
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_3 = ___border0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&L_3->___rect_0);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_4, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_multiply(L_2, (0.5f))), ((float)il2cpp_codegen_multiply(L_5, (0.5f))), NULL);
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_6 = ___border0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_7 = (&L_6->___rect_0);
		float L_8;
		L_8 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_7, NULL);
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_9 = ___border0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_10 = (&L_9->___rect_0);
		float L_11;
		L_11 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_2;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		float L_15 = L_14.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_3), L_8, L_11, L_13, L_15, NULL);
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_16 = ___border0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16->___leftColor_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18;
		L_18 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_17, NULL);
		V_4 = L_18;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_19 = ___border0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = L_19->___topColor_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_21;
		L_21 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_20, NULL);
		V_5 = L_21;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_22 = ___border0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22->___bottomColor_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24;
		L_24 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_23, NULL);
		V_6 = L_24;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_25 = ___border0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = L_25->___rightColor_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_27;
		L_27 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_26, NULL);
		V_7 = L_27;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29 = V_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30 = V_5;
		float L_31 = ___posZ1;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_32 = ___border0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = L_32->___topLeftRadius_10;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_34 = ___border0;
		float L_35 = L_34->___leftWidth_6;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_36 = ___border0;
		float L_37 = L_36->___topWidth_7;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_38 = ___mesh2;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_39 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_40 = L_39->___leftColorPage_15;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_41 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_42 = L_41->___topColorPage_16;
		uint16_t* L_43 = ___vertexCount3;
		uint16_t* L_44 = ___indexCount4;
		bool L_45 = ___countOnly5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedBorder_mCC519D9B6BDD483BDC356ED3377A05B82D3357F2(L_28, L_29, L_30, L_31, L_33, L_35, L_37, L_38, L_40, L_42, L_43, L_44, L_45, NULL);
		uint16_t* L_46 = ___vertexCount3;
		int32_t L_47 = *((uint16_t*)L_46);
		V_0 = (uint16_t)L_47;
		uint16_t* L_48 = ___indexCount4;
		int32_t L_49 = *((uint16_t*)L_48);
		V_1 = (uint16_t)L_49;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_50 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_51 = V_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_52 = V_5;
		float L_53 = ___posZ1;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_54 = ___border0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = L_54->___topRightRadius_11;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_56 = ___border0;
		float L_57 = L_56->___rightWidth_8;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_58 = ___border0;
		float L_59 = L_58->___topWidth_7;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_60 = ___mesh2;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_61 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_62 = L_61->___rightColorPage_17;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_63 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_64 = L_63->___topColorPage_16;
		uint16_t* L_65 = ___vertexCount3;
		uint16_t* L_66 = ___indexCount4;
		bool L_67 = ___countOnly5;
		Tessellation_TessellateRoundedBorder_mCC519D9B6BDD483BDC356ED3377A05B82D3357F2(L_50, L_51, L_52, L_53, L_55, L_57, L_59, L_60, L_62, L_64, L_65, L_66, L_67, NULL);
		bool L_68 = ___countOnly5;
		V_8 = (bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0);
		bool L_69 = V_8;
		if (!L_69)
		{
			goto IL_0124;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_70 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_71 = ___mesh2;
		NullCheck(L_71);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_72 = L_71->___m_Vertices_0;
		uint16_t L_73 = V_0;
		uint16_t* L_74 = ___vertexCount3;
		int32_t L_75 = *((uint16_t*)L_74);
		uint16_t L_76 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_70, L_72, L_73, ((int32_t)il2cpp_codegen_subtract(L_75, (int32_t)L_76)), (bool)1, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_77 = ___mesh2;
		NullCheck(L_77);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_78 = L_77->___m_Indices_1;
		uint16_t L_79 = V_1;
		uint16_t* L_80 = ___indexCount4;
		int32_t L_81 = *((uint16_t*)L_80);
		uint16_t L_82 = V_1;
		Tessellation_FlipWinding_mEB8CE9D883238F9540490218B02DE9D782D52962(L_78, L_79, ((int32_t)il2cpp_codegen_subtract(L_81, (int32_t)L_82)), NULL);
	}

IL_0124:
	{
		uint16_t* L_83 = ___vertexCount3;
		int32_t L_84 = *((uint16_t*)L_83);
		V_0 = (uint16_t)L_84;
		uint16_t* L_85 = ___indexCount4;
		int32_t L_86 = *((uint16_t*)L_85);
		V_1 = (uint16_t)L_86;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_87 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_88 = V_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_89 = V_6;
		float L_90 = ___posZ1;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_91 = ___border0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = L_91->___bottomRightRadius_12;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_93 = ___border0;
		float L_94 = L_93->___rightWidth_8;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_95 = ___border0;
		float L_96 = L_95->___bottomWidth_9;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_97 = ___mesh2;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_98 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_99 = L_98->___rightColorPage_17;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_100 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_101 = L_100->___bottomColorPage_18;
		uint16_t* L_102 = ___vertexCount3;
		uint16_t* L_103 = ___indexCount4;
		bool L_104 = ___countOnly5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedBorder_mCC519D9B6BDD483BDC356ED3377A05B82D3357F2(L_87, L_88, L_89, L_90, L_92, L_94, L_96, L_97, L_99, L_101, L_102, L_103, L_104, NULL);
		bool L_105 = ___countOnly5;
		V_9 = (bool)((((int32_t)L_105) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_9;
		if (!L_106)
		{
			goto IL_018e;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_107 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_108 = ___mesh2;
		NullCheck(L_108);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_109 = L_108->___m_Vertices_0;
		uint16_t L_110 = V_0;
		uint16_t* L_111 = ___vertexCount3;
		int32_t L_112 = *((uint16_t*)L_111);
		uint16_t L_113 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_107, L_109, L_110, ((int32_t)il2cpp_codegen_subtract(L_112, (int32_t)L_113)), (bool)1, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_114 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_115 = ___mesh2;
		NullCheck(L_115);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_116 = L_115->___m_Vertices_0;
		uint16_t L_117 = V_0;
		uint16_t* L_118 = ___vertexCount3;
		int32_t L_119 = *((uint16_t*)L_118);
		uint16_t L_120 = V_0;
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_114, L_116, L_117, ((int32_t)il2cpp_codegen_subtract(L_119, (int32_t)L_120)), (bool)0, NULL);
	}

IL_018e:
	{
		uint16_t* L_121 = ___vertexCount3;
		int32_t L_122 = *((uint16_t*)L_121);
		V_0 = (uint16_t)L_122;
		uint16_t* L_123 = ___indexCount4;
		int32_t L_124 = *((uint16_t*)L_123);
		V_1 = (uint16_t)L_124;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_125 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_126 = V_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_127 = V_6;
		float L_128 = ___posZ1;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_129 = ___border0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = L_129->___bottomLeftRadius_13;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_131 = ___border0;
		float L_132 = L_131->___leftWidth_6;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_133 = ___border0;
		float L_134 = L_133->___bottomWidth_9;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_135 = ___mesh2;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_136 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_137 = L_136->___leftColorPage_15;
		BorderParams_t66CC80A4CCAC5C52D6384BE4E66A3230C7099B80* L_138 = ___border0;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_139 = L_138->___bottomColorPage_18;
		uint16_t* L_140 = ___vertexCount3;
		uint16_t* L_141 = ___indexCount4;
		bool L_142 = ___countOnly5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateRoundedBorder_mCC519D9B6BDD483BDC356ED3377A05B82D3357F2(L_125, L_126, L_127, L_128, L_130, L_132, L_134, L_135, L_137, L_139, L_140, L_141, L_142, NULL);
		bool L_143 = ___countOnly5;
		V_10 = (bool)((((int32_t)L_143) == ((int32_t)0))? 1 : 0);
		bool L_144 = V_10;
		if (!L_144)
		{
			goto IL_01f7;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_145 = V_3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_146 = ___mesh2;
		NullCheck(L_146);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_147 = L_146->___m_Vertices_0;
		uint16_t L_148 = V_0;
		uint16_t* L_149 = ___vertexCount3;
		int32_t L_150 = *((uint16_t*)L_149);
		uint16_t L_151 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39(L_145, L_147, L_148, ((int32_t)il2cpp_codegen_subtract(L_150, (int32_t)L_151)), (bool)0, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_152 = ___mesh2;
		NullCheck(L_152);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_153 = L_152->___m_Indices_1;
		uint16_t L_154 = V_1;
		uint16_t* L_155 = ___indexCount4;
		int32_t L_156 = *((uint16_t*)L_155);
		uint16_t L_157 = V_1;
		Tessellation_FlipWinding_mEB8CE9D883238F9540490218B02DE9D782D52962(L_153, L_154, ((int32_t)il2cpp_codegen_subtract(L_156, (int32_t)L_157)), NULL);
	}

IL_01f7:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedCorner(UnityEngine.Rect,UnityEngine.Color32,System.Single,UnityEngine.Vector2,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedCorner_m432D266D245B98E45E1C566F33265F912773E062 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, float ___posZ2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius3, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, uint16_t* ___vertexCount6, uint16_t* ___indexCount7, bool ___countOnly8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	float G_B7_0 = 0.0f;
	float G_B7_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* G_B7_2 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B8_2 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* G_B8_3 = NULL;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(NULL);
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_6;
		L_6 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_4, L_5, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___rect0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___color1;
		float L_10 = ___posZ2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_11 = ___mesh4;
		il2cpp_codegen_initobj((&V_3), sizeof(ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0));
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_12 = V_3;
		uint16_t* L_13 = ___vertexCount6;
		uint16_t* L_14 = ___indexCount7;
		bool L_15 = ___countOnly8;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0(L_8, 3, L_9, L_10, L_11, L_12, L_13, L_14, L_15, NULL);
		goto IL_013a;
	}

IL_0045:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = ___color1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = ___color1;
		float L_21 = ___posZ2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_22 = ___mesh4;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_23 = ___colorPage5;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_24 = ___colorPage5;
		uint16_t* L_25 = ___vertexCount6;
		uint16_t* L_26 = ___indexCount7;
		bool L_27 = ___countOnly8;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateFilledFan_m271D00C508777D21DF8A27A6185E2DB572DA2653(L_16, L_17, L_18, (0.0f), (0.0f), L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___radius3;
		float L_29 = L_28.___x_0;
		float L_30;
		L_30 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		V_4 = (bool)((((float)L_29) < ((float)L_30))? 1 : 0);
		bool L_31 = V_4;
		if (!L_31)
		{
			goto IL_00c7;
		}
	}
	{
		float L_32;
		L_32 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___radius3;
		float L_34 = L_33.___x_0;
		float L_35;
		L_35 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_36;
		L_36 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___radius3;
		float L_38 = L_37.___x_0;
		float L_39;
		L_39 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_add(L_32, L_34)), L_35, ((float)il2cpp_codegen_subtract(L_36, L_38)), L_39, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_40 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_41 = ___color1;
		float L_42 = ___posZ2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_43 = ___mesh4;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_44 = ___colorPage5;
		uint16_t* L_45 = ___vertexCount6;
		uint16_t* L_46 = ___indexCount7;
		bool L_47 = ___countOnly8;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0(L_40, 2, L_41, L_42, L_43, L_44, L_45, L_46, L_47, NULL);
	}

IL_00c7:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___radius3;
		float L_49 = L_48.___y_1;
		float L_50;
		L_50 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		V_5 = (bool)((((float)L_49) < ((float)L_50))? 1 : 0);
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_013a;
		}
	}
	{
		float L_52;
		L_52 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_53;
		L_53 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = ___radius3;
		float L_55 = L_54.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = ___radius3;
		float L_57 = L_56.___x_0;
		float L_58;
		L_58 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		G_B6_0 = ((float)il2cpp_codegen_add(L_53, L_55));
		G_B6_1 = L_52;
		G_B6_2 = (&V_1);
		if ((((float)L_57) < ((float)L_58)))
		{
			G_B7_0 = ((float)il2cpp_codegen_add(L_53, L_55));
			G_B7_1 = L_52;
			G_B7_2 = (&V_1);
			goto IL_010c;
		}
	}
	{
		float L_59;
		L_59 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		G_B8_0 = L_59;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_0112;
	}

IL_010c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = ___radius3;
		float L_61 = L_60.___x_0;
		G_B8_0 = L_61;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_0112:
	{
		float L_62;
		L_62 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = ___radius3;
		float L_64 = L_63.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23(G_B8_3, G_B8_2, G_B8_1, G_B8_0, ((float)il2cpp_codegen_subtract(L_62, L_64)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_65 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_66 = ___color1;
		float L_67 = ___posZ2;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_68 = ___mesh4;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_69 = ___colorPage5;
		uint16_t* L_70 = ___vertexCount6;
		uint16_t* L_71 = ___indexCount7;
		bool L_72 = ___countOnly8;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0(L_65, 1, L_66, L_67, L_68, L_69, L_70, L_71, L_72, NULL);
	}

IL_013a:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateRoundedBorder(UnityEngine.Rect,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateRoundedBorder_mCC519D9B6BDD483BDC356ED3377A05B82D3357F2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor2, float ___posZ3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius4, float ___leftWidth5, float ___topWidth6, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh7, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage9, uint16_t* ___vertexCount10, uint16_t* ___indexCount11, bool ___countOnly12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		float L_0 = ___leftWidth5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_1 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		float L_2 = ___topWidth6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_3 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_2) < ((float)L_3))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_02da;
	}

IL_001f:
	{
		float L_5 = ___leftWidth5;
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_5, NULL);
		___leftWidth5 = L_6;
		float L_7 = ___topWidth6;
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), L_7, NULL);
		___topWidth6 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___radius4;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, (0.0f), L_11, NULL);
		(&___radius4)->___x_0 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___radius4;
		float L_14 = L_13.___y_1;
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		float L_16;
		L_16 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_14, (0.0f), L_15, NULL);
		(&___radius4)->___y_1 = L_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___radius4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_18, NULL);
		V_0 = L_19;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		L_20 = Rect_get_zero_m5341D8B63DEF1F4C308A685EEC8CFEA12A396C8D(NULL);
		V_1 = L_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___radius4;
		float L_22 = L_21.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_23 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_22) < ((float)L_23)))
		{
			goto IL_00ac;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___radius4;
		float L_25 = L_24.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_26 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B8_0 = ((((float)L_25) < ((float)L_26))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B8_0 = 1;
	}

IL_00ad:
	{
		V_4 = (bool)G_B8_0;
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_0150;
		}
	}
	{
		float L_28 = ___leftWidth5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_29 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		V_5 = (bool)((((float)L_28) > ((float)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_0101;
		}
	}
	{
		float L_31;
		L_31 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_32;
		L_32 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_33 = ___leftWidth5;
		float L_34;
		L_34 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_31, L_32, L_33, L_34, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35 = V_1;
		float L_36 = ___topWidth6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_37 = ___leftColor1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		L_38 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_37, NULL);
		float L_39 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_40 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_41 = ___leftColorPage8;
		uint16_t* L_42 = ___vertexCount10;
		uint16_t* L_43 = ___indexCount11;
		bool L_44 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateStraightBorder_m59F60FA5C0C807ADDAA029B68D0A663245683313(L_35, 1, L_36, L_38, L_39, L_40, L_41, L_42, L_43, L_44, NULL);
	}

IL_0101:
	{
		float L_45 = ___topWidth6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_46 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		V_6 = (bool)((((float)L_45) > ((float)L_46))? 1 : 0);
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_014b;
		}
	}
	{
		float L_48;
		L_48 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_49;
		L_49 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_50;
		L_50 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_51 = ___topWidth6;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_48, L_49, L_50, L_51, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_52 = V_1;
		float L_53 = ___leftWidth5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = ___topColor2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_54, NULL);
		float L_56 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_57 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_58 = ___topColorPage9;
		uint16_t* L_59 = ___vertexCount10;
		uint16_t* L_60 = ___indexCount11;
		bool L_61 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateStraightBorder_m59F60FA5C0C807ADDAA029B68D0A663245683313(L_52, 2, L_53, L_55, L_56, L_57, L_58, L_59, L_60, L_61, NULL);
	}

IL_014b:
	{
		goto IL_02da;
	}

IL_0150:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = ___radius4;
		float L_63 = L_62.___x_0;
		float L_64 = ___leftWidth5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_0173;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = ___radius4;
		float L_67 = L_66.___y_1;
		float L_68 = ___topWidth6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_69;
		L_69 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_67, L_68, NULL);
		G_B17_0 = ((((int32_t)L_69) == ((int32_t)0))? 1 : 0);
		goto IL_0174;
	}

IL_0173:
	{
		G_B17_0 = 0;
	}

IL_0174:
	{
		V_7 = (bool)G_B17_0;
		bool L_70 = V_7;
		if (!L_70)
		{
			goto IL_01a2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = ___radius4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		float L_74 = ___leftWidth5;
		float L_75 = ___topWidth6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_76 = ___leftColor1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_77 = ___topColor2;
		float L_78 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_79 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_80 = ___leftColorPage8;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_81 = ___topColorPage9;
		uint16_t* L_82 = ___vertexCount10;
		uint16_t* L_83 = ___indexCount11;
		bool L_84 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateFilledFan_m271D00C508777D21DF8A27A6185E2DB572DA2653(L_71, L_72, L_73, L_74, L_75, L_76, L_77, L_78, L_79, L_80, L_81, L_82, L_83, L_84, NULL);
		goto IL_023c;
	}

IL_01a2:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85 = ___radius4;
		float L_86 = L_85.___x_0;
		float L_87 = ___leftWidth5;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_88;
		L_88 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_86, L_87, NULL);
		if ((((int32_t)L_88) <= ((int32_t)0)))
		{
			goto IL_01c6;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = ___radius4;
		float L_90 = L_89.___y_1;
		float L_91 = ___topWidth6;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_92;
		L_92 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_90, L_91, NULL);
		G_B22_0 = ((((int32_t)L_92) > ((int32_t)0))? 1 : 0);
		goto IL_01c7;
	}

IL_01c6:
	{
		G_B22_0 = 0;
	}

IL_01c7:
	{
		V_8 = (bool)G_B22_0;
		bool L_93 = V_8;
		if (!L_93)
		{
			goto IL_01ed;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = ___radius4;
		float L_96 = ___leftWidth5;
		float L_97 = ___topWidth6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_98 = ___leftColor1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_99 = ___topColor2;
		float L_100 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_101 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_102 = ___leftColorPage8;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_103 = ___topColorPage9;
		uint16_t* L_104 = ___vertexCount10;
		uint16_t* L_105 = ___indexCount11;
		bool L_106 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateBorderedFan_mCA1CD428750B3AC0DDE19DF24691875CB13C1621(L_94, L_95, L_96, L_97, L_98, L_99, L_100, L_101, L_102, L_103, L_104, L_105, L_106, NULL);
		goto IL_023c;
	}

IL_01ed:
	{
		float L_107;
		L_107 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_108;
		L_108 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109 = ___radius4;
		float L_110 = L_109.___x_0;
		float L_111 = ___leftWidth5;
		float L_112;
		L_112 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_110, L_111, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113 = ___radius4;
		float L_114 = L_113.___y_1;
		float L_115 = ___topWidth6;
		float L_116;
		L_116 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_114, L_115, NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_107, L_108, L_112, L_116, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_117 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = ___radius4;
		float L_119 = ___leftWidth5;
		float L_120 = ___topWidth6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_121 = ___leftColor1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_122 = ___topColor2;
		float L_123 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_124 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_125 = ___leftColorPage8;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_126 = ___topColorPage9;
		uint16_t* L_127 = ___vertexCount10;
		uint16_t* L_128 = ___indexCount11;
		bool L_129 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A(L_117, L_118, L_119, L_120, L_121, L_122, L_123, L_124, L_125, L_126, L_127, L_128, L_129, NULL);
	}

IL_023c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = ___radius4;
		float L_131 = L_130.___y_1;
		float L_132 = ___topWidth6;
		float L_133;
		L_133 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_131, L_132, NULL);
		V_2 = L_133;
		float L_134;
		L_134 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_135;
		L_135 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_136 = V_2;
		float L_137 = ___leftWidth5;
		float L_138;
		L_138 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		float L_139 = V_2;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), L_134, ((float)il2cpp_codegen_add(L_135, L_136)), L_137, ((float)il2cpp_codegen_subtract(L_138, L_139)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_140 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_141 = ___leftColor1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_142;
		L_142 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_141, NULL);
		float L_143 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_144 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_145 = ___leftColorPage8;
		uint16_t* L_146 = ___vertexCount10;
		uint16_t* L_147 = ___indexCount11;
		bool L_148 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateStraightBorder_m59F60FA5C0C807ADDAA029B68D0A663245683313(L_140, 1, (0.0f), L_142, L_143, L_144, L_145, L_146, L_147, L_148, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149 = ___radius4;
		float L_150 = L_149.___x_0;
		float L_151 = ___leftWidth5;
		float L_152;
		L_152 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_150, L_151, NULL);
		V_2 = L_152;
		float L_153;
		L_153 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_154 = V_2;
		float L_155;
		L_155 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_156;
		L_156 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_157 = V_2;
		float L_158 = ___topWidth6;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_add(L_153, L_154)), L_155, ((float)il2cpp_codegen_subtract(L_156, L_157)), L_158, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_159 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_160 = ___topColor2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_161;
		L_161 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_160, NULL);
		float L_162 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_163 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_164 = ___topColorPage9;
		uint16_t* L_165 = ___vertexCount10;
		uint16_t* L_166 = ___indexCount11;
		bool L_167 = ___countOnly12;
		Tessellation_TessellateStraightBorder_m59F60FA5C0C807ADDAA029B68D0A663245683313(L_159, 2, (0.0f), L_161, L_162, L_163, L_164, L_165, L_166, L_167, NULL);
	}

IL_02da:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.UIElements.UIR.Tessellation::IntersectLines(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Tessellation_IntersectLines_mA35A2C85B7A42DDE7189849A10B174D9B052F419 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p11, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p22, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p33, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___p22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___p22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___p00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___p11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___p00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_2 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_2;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_2;
		float L_14 = L_13.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		float L_16 = L_15.___y_1;
		V_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_10, L_12)), ((float)il2cpp_codegen_multiply(L_14, L_16))));
		float L_17 = V_3;
		bool L_18;
		L_18 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_17, (0.0f), NULL);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0059;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (std::numeric_limits<float>::quiet_NaN()), (std::numeric_limits<float>::quiet_NaN()), /*hidden argument*/NULL);
		V_8 = L_20;
		goto IL_0092;
	}

IL_0059:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_1;
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		float L_26 = L_25.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28 = L_27.___y_1;
		V_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_22, L_24)), ((float)il2cpp_codegen_multiply(L_26, L_28))));
		float L_29 = V_4;
		float L_30 = V_3;
		V_5 = ((float)(L_29/L_30));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___p00;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_2;
		float L_33 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_32, L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_31, L_34, NULL);
		V_6 = L_35;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_6;
		V_8 = L_36;
		goto IL_0092;
	}

IL_0092:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_8;
		return L_37;
	}
}
// System.Int32 UnityEngine.UIElements.UIR.Tessellation::LooseCompare(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60 (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_2 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		V_0 = (bool)((((float)L_0) < ((float)((float)il2cpp_codegen_subtract(L_1, L_2))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (-1);
		goto IL_0029;
	}

IL_0013:
	{
		float L_4 = ___a0;
		float L_5 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_6 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		V_2 = (bool)((((float)L_4) > ((float)((float)il2cpp_codegen_add(L_5, L_6))))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		V_1 = 1;
		goto IL_0029;
	}

IL_0025:
	{
		V_1 = 0;
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateComplexBorderCorner(UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius1, float ___leftWidth2, float ___topWidth3, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor5, float ___posZ6, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh7, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage9, uint16_t* ___vertexCount10, uint16_t* ___indexCount11, bool ___countOnly12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_11 = NULL;
	bool V_12 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_14 = NULL;
	bool V_15 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_17 = NULL;
	bool V_18 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* V_20 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	{
		float L_0;
		L_0 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_1 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_3 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_2) < ((float)L_3))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_6 = (bool)G_B3_0;
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_03ad;
	}

IL_002b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___radius1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_5, L_6, NULL);
		V_0 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_1 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___radius1;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___radius1;
		float L_12 = L_11.___y_1;
		V_2 = ((float)(L_10/L_12));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___radius1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		V_3 = L_15;
		float L_16 = ___leftWidth2;
		float L_17 = ___topWidth3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_16, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___radius1;
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (0.0f), L_21, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___radius1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Tessellation_IntersectLines_mA35A2C85B7A42DDE7189849A10B174D9B052F419(L_18, L_19, L_22, L_23, NULL);
		V_5 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_5;
		float L_26 = L_25.___x_0;
		if ((!(((float)L_26) >= ((float)(0.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_5;
		float L_28 = L_27.___x_0;
		float L_29 = ___leftWidth2;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_30;
		L_30 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_28, L_29, NULL);
		G_B8_0 = ((((int32_t)((((int32_t)L_30) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B8_0 = 0;
	}

IL_009d:
	{
		V_7 = (bool)G_B8_0;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00c2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___x_0;
		float L_36;
		L_36 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0f), ((float)il2cpp_codegen_subtract(L_33, L_35)), NULL);
		(&V_1)->___x_0 = L_36;
	}

IL_00c2:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___radius1;
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), L_40, (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___radius1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Tessellation_IntersectLines_mA35A2C85B7A42DDE7189849A10B174D9B052F419(L_37, L_38, L_41, L_42, NULL);
		V_5 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_5;
		float L_45 = L_44.___y_1;
		if ((!(((float)L_45) >= ((float)(0.0f)))))
		{
			goto IL_0100;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_5;
		float L_47 = L_46.___y_1;
		float L_48 = ___topWidth3;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_47, L_48, NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_49) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0101;
	}

IL_0100:
	{
		G_B13_0 = 0;
	}

IL_0101:
	{
		V_8 = (bool)G_B13_0;
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0126;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_5;
		float L_52 = L_51.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = V_0;
		float L_54 = L_53.___y_1;
		float L_55;
		L_55 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((0.0f), ((float)il2cpp_codegen_subtract(L_52, L_54)), NULL);
		(&V_1)->___y_1 = L_55;
	}

IL_0126:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = ___radius1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_1;
		float L_59 = ___leftWidth2;
		float L_60 = ___topWidth3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_61 = ___leftColor4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_62 = ___topColor5;
		float L_63 = ___posZ6;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_64 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_65 = ___leftColorPage8;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_66 = ___topColorPage9;
		uint16_t* L_67 = ___vertexCount10;
		uint16_t* L_68 = ___indexCount11;
		bool L_69 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateFilledFan_m271D00C508777D21DF8A27A6185E2DB572DA2653(L_56, L_57, L_58, L_59, L_60, L_61, L_62, L_63, L_64, L_65, L_66, L_67, L_68, L_69, NULL);
		float L_70;
		L_70 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = ___radius1;
		float L_72 = L_71.___y_1;
		int32_t L_73;
		L_73 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_70, L_72, NULL);
		V_9 = (bool)((((int32_t)L_73) > ((int32_t)0))? 1 : 0);
		bool L_74 = V_9;
		if (!L_74)
		{
			goto IL_01e4;
		}
	}
	{
		float L_75;
		L_75 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_76;
		L_76 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = ___radius1;
		float L_78 = L_77.___y_1;
		float L_79 = ___leftWidth2;
		float L_80;
		L_80 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = ___radius1;
		float L_82 = L_81.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_10), L_75, ((float)il2cpp_codegen_add(L_76, L_78)), L_79, ((float)il2cpp_codegen_subtract(L_80, L_82)), NULL);
		uint32_t L_83 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_83 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A_RuntimeMethod_var);
		int8_t* L_84 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_83)));
		memset(L_84, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_83)));
		V_11 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_84);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = V_11;
		uint32_t L_86 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = ___radius1;
		float L_88 = L_87.___x_0;
		float L_89 = ___leftWidth2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = V_1;
		float L_91 = L_90.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_1;
		float L_93 = L_92.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_94), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_88, L_89)), L_91)), L_93, /*hidden argument*/NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_86)))) = L_94;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_95 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_96 = V_11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_97 = ___leftColor4;
		float L_98 = ___posZ6;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_99 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_100 = ___leftColorPage8;
		uint16_t* L_101 = ___vertexCount10;
		uint16_t* L_102 = ___indexCount11;
		bool L_103 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD(L_95, 5, L_96, L_97, L_98, L_99, L_100, L_101, L_102, L_103, NULL);
		goto IL_0270;
	}

IL_01e4:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = V_1;
		float L_105 = L_104.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_106 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		V_12 = (bool)((((float)L_105) < ((float)((-L_106))))? 1 : 0);
		bool L_107 = V_12;
		if (!L_107)
		{
			goto IL_0270;
		}
	}
	{
		float L_108;
		L_108 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_109;
		L_109 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = ___radius1;
		float L_111 = L_110.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = V_1;
		float L_113 = L_112.___y_1;
		float L_114 = ___leftWidth2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115 = V_1;
		float L_116 = L_115.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_13), L_108, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_109, L_111)), L_113)), L_114, ((-L_116)), NULL);
		uint32_t L_117 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_117 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A_RuntimeMethod_var);
		int8_t* L_118 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_117)));
		memset(L_118, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_117)));
		V_14 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_118);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_119 = V_14;
		uint32_t L_120 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121 = ___radius1;
		float L_122 = L_121.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123 = V_1;
		float L_124 = L_123.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125;
		memset((&L_125), 0, sizeof(L_125));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_125), ((float)il2cpp_codegen_add(L_122, L_124)), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_119, (int32_t)L_120)) = L_125;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_126 = V_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_127 = V_14;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_128 = ___leftColor4;
		float L_129 = ___posZ6;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_130 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_131 = ___leftColorPage8;
		uint16_t* L_132 = ___vertexCount10;
		uint16_t* L_133 = ___indexCount11;
		bool L_134 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD(L_126, 4, L_127, L_128, L_129, L_130, L_131, L_132, L_133, L_134, NULL);
	}

IL_0270:
	{
		float L_135;
		L_135 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_136 = ___radius1;
		float L_137 = L_136.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_138;
		L_138 = Tessellation_LooseCompare_mB4E48C7EF6A3BF49D2C1483077B83B94C3AFBE60(L_135, L_137, NULL);
		V_15 = (bool)((((int32_t)L_138) > ((int32_t)0))? 1 : 0);
		bool L_139 = V_15;
		if (!L_139)
		{
			goto IL_0305;
		}
	}
	{
		float L_140;
		L_140 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141 = ___radius1;
		float L_142 = L_141.___x_0;
		float L_143;
		L_143 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_144;
		L_144 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_145 = ___radius1;
		float L_146 = L_145.___x_0;
		float L_147 = ___topWidth3;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_16), ((float)il2cpp_codegen_add(L_140, L_142)), L_143, ((float)il2cpp_codegen_subtract(L_144, L_146)), L_147, NULL);
		uint32_t L_148 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_148 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A_RuntimeMethod_var);
		int8_t* L_149 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_148)));
		memset(L_149, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_148)));
		V_17 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_149);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_150 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151 = V_1;
		float L_152 = L_151.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153 = ___radius1;
		float L_154 = L_153.___y_1;
		float L_155 = ___topWidth3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_156 = V_1;
		float L_157 = L_156.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158;
		memset((&L_158), 0, sizeof(L_158));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_158), L_152, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_154, L_155)), L_157)), /*hidden argument*/NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_150 = L_158;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_159 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_160 = V_17;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_161 = ___topColor5;
		float L_162 = ___posZ6;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_163 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_164 = ___topColorPage9;
		uint16_t* L_165 = ___vertexCount10;
		uint16_t* L_166 = ___indexCount11;
		bool L_167 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD(L_159, ((int32_t)10), L_160, L_161, L_162, L_163, L_164, L_165, L_166, L_167, NULL);
		goto IL_03ad;
	}

IL_0305:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_168 = V_1;
		float L_169 = L_168.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_170 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		V_18 = (bool)((((float)L_169) < ((float)((-L_170))))? 1 : 0);
		bool L_171 = V_18;
		if (!L_171)
		{
			goto IL_03ad;
		}
	}
	{
		float L_172;
		L_172 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_173 = ___radius1;
		float L_174 = L_173.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_175 = V_1;
		float L_176 = L_175.___x_0;
		float L_177;
		L_177 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_178 = V_1;
		float L_179 = L_178.___x_0;
		float L_180 = ___topWidth3;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_19), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_172, L_174)), L_176)), L_177, ((-L_179)), L_180, NULL);
		uint32_t L_181 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_181 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tessellation_TessellateComplexBorderCorner_m4C30A6B2EBEC3006F3A3C2AECE353B99587F611A_RuntimeMethod_var);
		int8_t* L_182 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_181)));
		memset(L_182, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_181)));
		V_20 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_182);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_183 = V_20;
		float L_184 = ___leftWidth2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_185 = ___radius1;
		float L_186 = L_185.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_187 = V_1;
		float L_188 = L_187.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_189), ((float)il2cpp_codegen_subtract(L_184, ((float)il2cpp_codegen_add(L_186, L_188)))), (0.0f), /*hidden argument*/NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_183 = L_189;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_190 = V_20;
		uint32_t L_191 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_192 = ___radius1;
		float L_193 = L_192.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_194;
		memset((&L_194), 0, sizeof(L_194));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_194), (0.0f), L_193, /*hidden argument*/NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_190, (int32_t)L_191)) = L_194;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_195 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_196 = V_20;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_197 = ___topColor5;
		float L_198 = ___posZ6;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_199 = ___mesh7;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_200 = ___topColorPage9;
		uint16_t* L_201 = ___vertexCount10;
		uint16_t* L_202 = ___indexCount11;
		bool L_203 = ___countOnly12;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD(L_195, 8, L_196, L_197, L_198, L_199, L_200, L_201, L_202, L_203, NULL);
	}

IL_03ad:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.Rect,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_mBA95C4CE57032539D4CF761969DBADEACC2D66D2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color1, float ___posZ2, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh3, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage4, uint16_t* ___vertexCount5, uint16_t* ___indexCount6, bool ___countOnly7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B9_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B8_3 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B10_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B10_4 = NULL;
	{
		float L_0;
		L_0 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_1 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_3 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_2) < ((float)L_3))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_7 = (bool)G_B3_0;
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0236;
	}

IL_002b:
	{
		bool L_5 = ___countOnly7;
		V_8 = L_5;
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		uint16_t* L_7 = ___vertexCount5;
		uint16_t* L_8 = ___vertexCount5;
		int32_t L_9 = *((uint16_t*)L_8);
		*((int16_t*)L_7) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_9, 4)));
		uint16_t* L_10 = ___indexCount6;
		uint16_t* L_11 = ___indexCount6;
		int32_t L_12 = *((uint16_t*)L_11);
		*((int16_t*)L_10) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_12, 6)));
		goto IL_0236;
	}

IL_004b:
	{
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_13 = ___colorPage4;
		bool L_14 = L_13.___isValid_0;
		G_B8_0 = 0;
		G_B8_1 = 0;
		G_B8_2 = 0;
		G_B8_3 = (&V_0);
		if (L_14)
		{
			G_B9_0 = 0;
			G_B9_1 = 0;
			G_B9_2 = 0;
			G_B9_3 = (&V_0);
			goto IL_005c;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		G_B10_4 = G_B8_3;
		goto IL_005d;
	}

IL_005c:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
		G_B10_4 = G_B9_3;
	}

IL_005d:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B10_4, (uint8_t)G_B10_3, (uint8_t)G_B10_2, (uint8_t)G_B10_1, (uint8_t)G_B10_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_15 = ___colorPage4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16 = L_15.___pageAndID_1;
		uint8_t L_17 = L_16.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_18 = ___colorPage4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = L_18.___pageAndID_1;
		uint8_t L_20 = L_19.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_1), (uint8_t)0, (uint8_t)0, L_17, L_20, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_21 = ___colorPage4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = L_21.___pageAndID_1;
		uint8_t L_23 = L_22.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_2), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_23, NULL);
		float L_24;
		L_24 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_25;
		L_25 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_26 = ___posZ2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_24, L_25, L_26, NULL);
		float L_27;
		L_27 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		float L_28;
		L_28 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_29 = ___posZ2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_4), L_27, L_28, L_29, NULL);
		float L_30;
		L_30 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_31;
		L_31 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		float L_32 = ___posZ2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), L_30, L_31, L_32, NULL);
		float L_33;
		L_33 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		float L_34;
		L_34 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		float L_35 = ___posZ2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), L_33, L_34, L_35, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_36 = ___mesh3;
		il2cpp_codegen_initobj((&V_9), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_3;
		(&V_9)->___position_1 = L_37;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_38 = ___color1;
		(&V_9)->___tint_2 = L_38;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = V_0;
		(&V_9)->___flags_6 = L_39;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_40 = V_1;
		(&V_9)->___opacityColorPages_7 = L_40;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_41 = V_2;
		(&V_9)->___ids_5 = L_41;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_42 = V_9;
		NullCheck(L_36);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_36, L_42, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_43 = ___mesh3;
		il2cpp_codegen_initobj((&V_9), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_4;
		(&V_9)->___position_1 = L_44;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_45 = ___color1;
		(&V_9)->___tint_2 = L_45;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_46 = V_0;
		(&V_9)->___flags_6 = L_46;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_47 = V_1;
		(&V_9)->___opacityColorPages_7 = L_47;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_48 = V_2;
		(&V_9)->___ids_5 = L_48;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_49 = V_9;
		NullCheck(L_43);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_43, L_49, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_50 = ___mesh3;
		il2cpp_codegen_initobj((&V_9), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_5;
		(&V_9)->___position_1 = L_51;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_52 = ___color1;
		(&V_9)->___tint_2 = L_52;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_53 = V_0;
		(&V_9)->___flags_6 = L_53;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = V_1;
		(&V_9)->___opacityColorPages_7 = L_54;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_55 = V_2;
		(&V_9)->___ids_5 = L_55;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_56 = V_9;
		NullCheck(L_50);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_50, L_56, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_57 = ___mesh3;
		il2cpp_codegen_initobj((&V_9), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_6;
		(&V_9)->___position_1 = L_58;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_59 = ___color1;
		(&V_9)->___tint_2 = L_59;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_60 = V_0;
		(&V_9)->___flags_6 = L_60;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_61 = V_1;
		(&V_9)->___opacityColorPages_7 = L_61;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_62 = V_2;
		(&V_9)->___ids_5 = L_62;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_63 = V_9;
		NullCheck(L_57);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_57, L_63, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_64 = ___mesh3;
		uint16_t* L_65 = ___vertexCount5;
		int32_t L_66 = *((uint16_t*)L_65);
		NullCheck(L_64);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_64, (uint16_t)((int32_t)(uint16_t)L_66), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_67 = ___mesh3;
		uint16_t* L_68 = ___vertexCount5;
		int32_t L_69 = *((uint16_t*)L_68);
		NullCheck(L_67);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_67, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_69, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_70 = ___mesh3;
		uint16_t* L_71 = ___vertexCount5;
		int32_t L_72 = *((uint16_t*)L_71);
		NullCheck(L_70);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_70, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_72, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_73 = ___mesh3;
		uint16_t* L_74 = ___vertexCount5;
		int32_t L_75 = *((uint16_t*)L_74);
		NullCheck(L_73);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_73, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_75, 3))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_76 = ___mesh3;
		uint16_t* L_77 = ___vertexCount5;
		int32_t L_78 = *((uint16_t*)L_77);
		NullCheck(L_76);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_76, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_78, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_79 = ___mesh3;
		uint16_t* L_80 = ___vertexCount5;
		int32_t L_81 = *((uint16_t*)L_80);
		NullCheck(L_79);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_79, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_81, 1))), NULL);
		uint16_t* L_82 = ___vertexCount5;
		uint16_t* L_83 = ___vertexCount5;
		int32_t L_84 = *((uint16_t*)L_83);
		*((int16_t*)L_82) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_84, 4)));
		uint16_t* L_85 = ___indexCount6;
		uint16_t* L_86 = ___indexCount6;
		int32_t L_87 = *((uint16_t*)L_86);
		*((int16_t*)L_85) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_87, 6)));
	}

IL_0236:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_m6B63774B3DE5A20731274D516DC806B1305BF4C0 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdges1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color2, float ___posZ3, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, uint16_t* ___vertexCount6, uint16_t* ___indexCount7, bool ___countOnly8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___rect0;
		int32_t L_1 = ___smoothedEdges1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___color2;
		float L_3 = ___posZ3;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_4 = ___mesh4;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_5 = ___colorPage5;
		uint16_t* L_6 = ___vertexCount6;
		uint16_t* L_7 = ___indexCount7;
		bool L_8 = ___countOnly8;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD(L_0, L_1, (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((uintptr_t)0), L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Int32 UnityEngine.UIElements.UIR.Tessellation::EdgesCount(UnityEngine.UIElements.UIR.Tessellation/Edges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tessellation_EdgesCount_m67F074A06762653A4C2CA96C3F4308075873BBC4 (int32_t ___edges0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0020;
	}

IL_0007:
	{
		int32_t L_0 = ___edges0;
		int32_t L_1 = V_1;
		V_2 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)(1<<((int32_t)(L_1&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001b:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0020:
	{
		int32_t L_5 = V_1;
		V_3 = (bool)((((int32_t)L_5) < ((int32_t)4))? 1 : 0);
		bool L_6 = V_3;
		if (L_6)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_7 = V_0;
		V_4 = L_7;
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_8 = V_4;
		return L_8;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuad(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,UnityEngine.Vector2*,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdges1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___offsets2, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color3, float ___posZ4, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh5, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage6, uint16_t* ___vertexCount7, uint16_t* ___indexCount8, bool ___countOnly9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint16_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	bool V_22 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B22_3 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B21_3 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B23_4 = NULL;
	{
		float L_0;
		L_0 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_1 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_3 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B3_0 = ((((float)L_2) < ((float)L_3))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_6 = (bool)G_B3_0;
		bool L_4 = V_6;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		goto IL_0483;
	}

IL_002b:
	{
		int32_t L_5 = ___smoothedEdges1;
		if (L_5)
		{
			goto IL_0035;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = ___offsets2;
		G_B8_0 = ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		goto IL_0036;
	}

IL_0035:
	{
		G_B8_0 = 0;
	}

IL_0036:
	{
		V_7 = (bool)G_B8_0;
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8 = ___rect0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___color3;
		float L_10 = ___posZ4;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_11 = ___mesh5;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_12 = ___colorPage6;
		uint16_t* L_13 = ___vertexCount7;
		uint16_t* L_14 = ___indexCount8;
		bool L_15 = ___countOnly9;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuad_mBA95C4CE57032539D4CF761969DBADEACC2D66D2(L_8, L_9, L_10, L_11, L_12, L_13, L_14, L_15, NULL);
		goto IL_0483;
	}

IL_0056:
	{
		int32_t L_16 = ___smoothedEdges1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Tessellation_EdgesCount_m67F074A06762653A4C2CA96C3F4308075873BBC4(L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = ___offsets2;
		G_B13_0 = ((((intptr_t)L_18) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		goto IL_0067;
	}

IL_0066:
	{
		G_B13_0 = 0;
	}

IL_0067:
	{
		V_8 = (bool)G_B13_0;
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0088;
		}
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20 = ___rect0;
		int32_t L_21 = ___smoothedEdges1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = ___color3;
		float L_23 = ___posZ4;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_24 = ___mesh5;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_25 = ___colorPage6;
		uint16_t* L_26 = ___vertexCount7;
		uint16_t* L_27 = ___indexCount8;
		bool L_28 = ___countOnly9;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_TessellateQuadSingleEdge_m667E57661D5938E4A0F4A52352A3565D7F684238(L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		goto IL_0483;
	}

IL_0088:
	{
		bool L_29 = ___countOnly9;
		V_9 = L_29;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00aa;
		}
	}
	{
		uint16_t* L_31 = ___vertexCount7;
		uint16_t* L_32 = ___vertexCount7;
		int32_t L_33 = *((uint16_t*)L_32);
		*((int16_t*)L_31) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_33, ((int32_t)12))));
		uint16_t* L_34 = ___indexCount8;
		uint16_t* L_35 = ___indexCount8;
		int32_t L_36 = *((uint16_t*)L_35);
		*((int16_t*)L_34) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_36, ((int32_t)12))));
		goto IL_0483;
	}

IL_00aa:
	{
		uint32_t L_37 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_37 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Tessellation_TessellateQuad_m9A52089B601E873D294205DFD98A1718B15036AD_RuntimeMethod_var);
		int8_t* L_38 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_37)));
		memset(L_38, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_37)));
		V_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = V_0;
		float L_40;
		L_40 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___rect0), NULL);
		float L_41;
		L_41 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		float L_42 = ___posZ4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), L_40, L_41, L_42, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = V_0;
		uint32_t L_45 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		float L_46;
		L_46 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___rect0), NULL);
		float L_47;
		L_47 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___rect0), NULL);
		float L_48 = ___posZ4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_49), L_46, L_47, L_48, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_44, (int32_t)L_45)) = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = V_0;
		uint32_t L_51 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		float L_52;
		L_52 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		float L_53;
		L_53 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___rect0), NULL);
		float L_54 = ___posZ4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), L_52, L_53, L_54, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_51)))) = L_55;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_56 = V_0;
		uint32_t L_57 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		float L_58;
		L_58 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		float L_59;
		L_59 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		float L_60 = ___posZ4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_61), L_58, L_59, L_60, /*hidden argument*/NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_56, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_57)))) = L_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_62;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63 = ___offsets2;
		V_10 = (bool)((((int32_t)((((intptr_t)L_63) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_64 = V_10;
		if (!L_64)
		{
			goto IL_0262;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = L_65;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_66);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_68 = ___offsets2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_67, L_70, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_66 = L_71;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = V_0;
		uint32_t L_73 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_72, (int32_t)L_73));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_74);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = ___offsets2;
		uint32_t L_77 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_76, (int32_t)L_77)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_78, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_75, L_79, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_74 = L_80;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = V_0;
		uint32_t L_82 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_81, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_82))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_83);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_85 = ___offsets2;
		uint32_t L_86 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_86)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_84, L_88, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_83 = L_89;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = V_0;
		uint32_t L_91 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_91))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = ___offsets2;
		uint32_t L_95 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_94, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_95)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_96, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_97, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_92 = L_98;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_100 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_99, L_101, NULL);
		V_1 = L_102;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = V_0;
		uint32_t L_105 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_104, (int32_t)L_105)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_103, L_106, NULL);
		V_1 = L_107;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_109 = V_0;
		uint32_t L_110 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_109, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_110)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_108, L_111, NULL);
		V_1 = L_112;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_114 = V_0;
		uint32_t L_115 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_115)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_113, L_116, NULL);
		V_1 = L_117;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_118, (4.0f), NULL);
		V_1 = L_119;
		float L_120 = ___posZ4;
		(&V_1)->___z_4 = L_120;
		goto IL_0295;
	}

IL_0262:
	{
		float L_121;
		L_121 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___rect0), NULL);
		float L_122;
		L_122 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_123;
		L_123 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___rect0), NULL);
		float L_124;
		L_124 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		float L_125 = ___posZ4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_add(L_121, ((float)(L_122/(2.0f))))), ((float)il2cpp_codegen_add(L_123, ((float)(L_124/(2.0f))))), L_125, NULL);
	}

IL_0295:
	{
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_126 = ___colorPage6;
		bool L_127 = L_126.___isValid_0;
		G_B21_0 = 0;
		G_B21_1 = 0;
		G_B21_2 = 0;
		G_B21_3 = (&V_2);
		if (L_127)
		{
			G_B22_0 = 0;
			G_B22_1 = 0;
			G_B22_2 = 0;
			G_B22_3 = (&V_2);
			goto IL_02a6;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		goto IL_02a7;
	}

IL_02a6:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
	}

IL_02a7:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B23_4, (uint8_t)G_B23_3, (uint8_t)G_B23_2, (uint8_t)G_B23_1, (uint8_t)G_B23_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_128 = ___colorPage6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_129 = L_128.___pageAndID_1;
		uint8_t L_130 = L_129.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_131 = ___colorPage6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_132 = L_131.___pageAndID_1;
		uint8_t L_133 = L_132.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_3), (uint8_t)0, (uint8_t)0, L_130, L_133, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_134 = ___colorPage6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_135 = L_134.___pageAndID_1;
		uint8_t L_136 = L_135.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_4), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_136, NULL);
		uint16_t* L_137 = ___vertexCount7;
		int32_t L_138 = *((uint16_t*)L_137);
		V_5 = (uint16_t)L_138;
		V_11 = 0;
		goto IL_045b;
	}

IL_02f0:
	{
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_139 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___s_AllEdges_5;
		int32_t L_140 = V_11;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		int32_t L_142 = (int32_t)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		V_12 = L_142;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_143 = V_0;
		int32_t L_144 = V_11;
		uint32_t L_145 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_143, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_144), (int32_t)L_145)))));
		V_13 = L_146;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_147 = V_0;
		int32_t L_148 = V_11;
		uint32_t L_149 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_147, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_148, 1))%4))), (int32_t)L_149)))));
		V_14 = L_150;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153;
		L_153 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_151, L_152, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_153, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156;
		L_156 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_154, L_155, NULL);
		V_19 = L_156;
		float L_157;
		L_157 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_19), NULL);
		V_15 = L_157;
		il2cpp_codegen_initobj((&V_20), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = V_13;
		(&V_20)->___position_1 = L_158;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_159 = ___color3;
		(&V_20)->___tint_2 = L_159;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_160 = V_2;
		(&V_20)->___flags_6 = L_160;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_161 = V_3;
		(&V_20)->___opacityColorPages_7 = L_161;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_162 = V_4;
		(&V_20)->___ids_5 = L_162;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_163 = V_20;
		V_16 = L_163;
		il2cpp_codegen_initobj((&V_20), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164 = V_14;
		(&V_20)->___position_1 = L_164;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_165 = ___color3;
		(&V_20)->___tint_2 = L_165;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_166 = V_2;
		(&V_20)->___flags_6 = L_166;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_167 = V_3;
		(&V_20)->___opacityColorPages_7 = L_167;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_168 = V_4;
		(&V_20)->___ids_5 = L_168;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_169 = V_20;
		V_17 = L_169;
		il2cpp_codegen_initobj((&V_20), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170 = V_1;
		(&V_20)->___position_1 = L_170;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_171 = ___color3;
		(&V_20)->___tint_2 = L_171;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_172 = V_2;
		(&V_20)->___flags_6 = L_172;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_173 = V_3;
		(&V_20)->___opacityColorPages_7 = L_173;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_174 = V_4;
		(&V_20)->___ids_5 = L_174;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_175 = V_20;
		V_18 = L_175;
		int32_t L_176 = ___smoothedEdges1;
		int32_t L_177 = V_12;
		int32_t L_178 = V_12;
		V_21 = (bool)((((int32_t)((int32_t)((int32_t)L_176&(int32_t)L_177))) == ((int32_t)L_178))? 1 : 0);
		bool L_179 = V_21;
		if (!L_179)
		{
			goto IL_0406;
		}
	}
	{
		float L_180 = V_15;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_EncodeStraightArc_m7C2D08A8CB1138E3A897C0FFC6F82911D2CAB404((&V_16), (&V_17), (&V_18), L_180, NULL);
	}

IL_0406:
	{
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_181 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_182 = V_16;
		NullCheck(L_181);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_181, L_182, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_183 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_184 = V_17;
		NullCheck(L_183);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_183, L_184, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_185 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_186 = V_18;
		NullCheck(L_185);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_185, L_186, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_187 = ___mesh5;
		uint16_t L_188 = V_5;
		uint16_t L_189 = L_188;
		V_5 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_189, 1)));
		NullCheck(L_187);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_187, L_189, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_190 = ___mesh5;
		uint16_t L_191 = V_5;
		uint16_t L_192 = L_191;
		V_5 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_192, 1)));
		NullCheck(L_190);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_190, L_192, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_193 = ___mesh5;
		uint16_t L_194 = V_5;
		uint16_t L_195 = L_194;
		V_5 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_195, 1)));
		NullCheck(L_193);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_193, L_195, NULL);
		int32_t L_196 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_196, 1));
	}

IL_045b:
	{
		int32_t L_197 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_198 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___s_AllEdges_5;
		NullCheck(L_198);
		V_22 = (bool)((((int32_t)L_197) < ((int32_t)((int32_t)(((RuntimeArray*)L_198)->max_length))))? 1 : 0);
		bool L_199 = V_22;
		if (L_199)
		{
			goto IL_02f0;
		}
	}
	{
		uint16_t* L_200 = ___vertexCount7;
		uint16_t* L_201 = ___vertexCount7;
		int32_t L_202 = *((uint16_t*)L_201);
		*((int16_t*)L_200) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_202, ((int32_t)12))));
		uint16_t* L_203 = ___indexCount8;
		uint16_t* L_204 = ___indexCount8;
		int32_t L_205 = *((uint16_t*)L_204);
		*((int16_t*)L_203) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_205, ((int32_t)12))));
	}

IL_0483:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::EncodeStraightArc(UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_EncodeStraightArc_m7C2D08A8CB1138E3A897C0FFC6F82911D2CAB404 (Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v00, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v11, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___center2, float ___radius3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_0 = ___v00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&L_0->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_2 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&L_2->___position_1);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4 = ___center2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_ExpandTriangle_m04E6E8DC041BCF5555631AD7B71F56E585310EB7(L_1, L_3, L_5, (2.0f), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_6 = ___v00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___position_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_8 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_10, (2.0f), NULL);
		V_0 = L_11;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_12 = ___center2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		V_1 = L_15;
		float L_16;
		L_16 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		V_2 = L_16;
		float L_17 = V_2;
		float L_18 = ___radius3;
		V_3 = ((float)(L_17/L_18));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_19 = ___center2;
		float L_20 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_21 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_22), (0.0f), (0.0f), L_20, L_21, /*hidden argument*/NULL);
		L_19->___circle_8 = L_22;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_23 = ___v00;
		float L_24 = V_3;
		float L_25 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_26 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_27), L_24, (0.0f), L_25, L_26, /*hidden argument*/NULL);
		L_23->___circle_8 = L_27;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_28 = ___v11;
		float L_29 = V_3;
		float L_30 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_31 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_32), L_29, (0.0f), L_30, L_31, /*hidden argument*/NULL);
		L_28->___circle_8 = L_32;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_33 = ___v00;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_34 = (&L_33->___flags_6);
		L_34->___b_3 = (uint8_t)1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_35 = ___v11;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_36 = (&L_35->___flags_6);
		L_36->___b_3 = (uint8_t)1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_37 = ___center2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_38 = (&L_37->___flags_6);
		L_38->___b_3 = (uint8_t)1;
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::ExpandTriangle(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_ExpandTriangle_m04E6E8DC041BCF5555631AD7B71F56E585310EB7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___v00, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___v11, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center2, float ___factor3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___v00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___v00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___v00;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___center2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_0 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_8 = ___factor3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_9, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___v11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___center2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_16, NULL);
		V_0 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_19 = ___factor3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_20, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11 = L_21;
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateQuadSingleEdge(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateQuadSingleEdge_m667E57661D5938E4A0F4A52352A3565D7F684238 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdge1, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color2, float ___posZ3, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh4, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage5, uint16_t* ___vertexCount6, uint16_t* ___indexCount7, bool ___countOnly8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_10;
	memset((&V_10), 0, sizeof(V_10));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_11;
	memset((&V_11), 0, sizeof(V_11));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_12;
	memset((&V_12), 0, sizeof(V_12));
	uint16_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B13_3 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B12_3 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B14_4 = NULL;
	{
		bool L_0 = ___countOnly8;
		V_14 = L_0;
		bool L_1 = V_14;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint16_t* L_2 = ___vertexCount6;
		uint16_t* L_3 = ___vertexCount6;
		int32_t L_4 = *((uint16_t*)L_3);
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_4, 4)));
		uint16_t* L_5 = ___indexCount7;
		uint16_t* L_6 = ___indexCount7;
		int32_t L_7 = *((uint16_t*)L_6);
		*((int16_t*)L_5) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_7, 6)));
		goto IL_0495;
	}

IL_0021:
	{
		float L_8;
		L_8 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_9;
		L_9 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_10 = ___posZ3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_8, L_9, L_10, NULL);
		float L_11;
		L_11 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_13;
		L_13 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_14 = ___posZ3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), ((float)il2cpp_codegen_add(L_11, L_12)), L_13, L_14, NULL);
		float L_15;
		L_15 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_16;
		L_16 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_17;
		L_17 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_18;
		L_18 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		float L_19 = ___posZ3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((float)il2cpp_codegen_add(L_15, L_16)), ((float)il2cpp_codegen_add(L_17, L_18)), L_19, NULL);
		float L_20;
		L_20 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		float L_21;
		L_21 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		float L_22;
		L_22 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		float L_23 = ___posZ3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_20, ((float)il2cpp_codegen_add(L_21, L_22)), L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		float L_28;
		L_28 = fabsf(((float)il2cpp_codegen_subtract(L_25, L_27)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		float L_30 = L_29.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___y_3;
		float L_33;
		L_33 = fabsf(((float)il2cpp_codegen_subtract(L_30, L_32)));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_28, L_33, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_4;
		float L_35 = L_34.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_4;
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_4;
		float L_39 = L_38.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_4;
		float L_41 = L_40.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), ((float)(((float)il2cpp_codegen_add(L_35, (2.0f)))/L_37)), ((float)(((float)il2cpp_codegen_add(L_39, (2.0f)))/L_41)), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42;
		L_42 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_6 = L_42;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_43;
		L_43 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_7 = L_43;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_44;
		L_44 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_8 = L_44;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_45;
		L_45 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_9 = L_45;
		int32_t L_46 = ___smoothedEdge1;
		V_16 = L_46;
		int32_t L_47 = V_16;
		V_15 = L_47;
		int32_t L_48 = V_15;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_48, 1)))
		{
			case 0:
			{
				goto IL_0140;
			}
			case 1:
			{
				goto IL_01a5;
			}
			case 2:
			{
				goto IL_02ce;
			}
			case 3:
			{
				goto IL_020a;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_0133:
	{
		int32_t L_49 = V_15;
		if ((((int32_t)L_49) == ((int32_t)8)))
		{
			goto IL_026c;
		}
	}
	{
		goto IL_02ce;
	}

IL_0140:
	{
		float* L_50 = (&(&V_0)->___x_2);
		float* L_51 = L_50;
		float L_52 = *((float*)L_51);
		*((float*)L_51) = (float)((float)il2cpp_codegen_subtract(L_52, (2.0f)));
		float* L_53 = (&(&V_3)->___x_2);
		float* L_54 = L_53;
		float L_55 = *((float*)L_54);
		*((float*)L_54) = (float)((float)il2cpp_codegen_subtract(L_55, (2.0f)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_5;
		float L_57 = L_56.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_58 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_59 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_9), L_57, (0.0f), L_58, L_59, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_60 = V_9;
		V_6 = L_60;
		float L_61 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_62 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_8), (0.0f), (0.0f), L_61, L_62, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_63 = V_8;
		V_7 = L_63;
		goto IL_02d0;
	}

IL_01a5:
	{
		float* L_64 = (&(&V_0)->___y_3);
		float* L_65 = L_64;
		float L_66 = *((float*)L_65);
		*((float*)L_65) = (float)((float)il2cpp_codegen_subtract(L_66, (2.0f)));
		float* L_67 = (&(&V_1)->___y_3);
		float* L_68 = L_67;
		float L_69 = *((float*)L_68);
		*((float*)L_68) = (float)((float)il2cpp_codegen_subtract(L_69, (2.0f)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_5;
		float L_71 = L_70.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_72 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_73 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_7), (0.0f), L_71, L_72, L_73, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = V_7;
		V_6 = L_74;
		float L_75 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_76 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_9), (0.0f), (0.0f), L_75, L_76, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_77 = V_9;
		V_8 = L_77;
		goto IL_02d0;
	}

IL_020a:
	{
		float* L_78 = (&(&V_1)->___x_2);
		float* L_79 = L_78;
		float L_80 = *((float*)L_79);
		*((float*)L_79) = (float)((float)il2cpp_codegen_add(L_80, (2.0f)));
		float* L_81 = (&(&V_2)->___x_2);
		float* L_82 = L_81;
		float L_83 = *((float*)L_82);
		*((float*)L_82) = (float)((float)il2cpp_codegen_add(L_83, (2.0f)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84 = V_5;
		float L_85 = L_84.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_86 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_87 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_8), L_85, (0.0f), L_86, L_87, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88 = V_8;
		V_7 = L_88;
		float L_89 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_90 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_9), (0.0f), (0.0f), L_89, L_90, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_91 = V_9;
		V_6 = L_91;
		goto IL_02d0;
	}

IL_026c:
	{
		float* L_92 = (&(&V_2)->___y_3);
		float* L_93 = L_92;
		float L_94 = *((float*)L_93);
		*((float*)L_93) = (float)((float)il2cpp_codegen_add(L_94, (2.0f)));
		float* L_95 = (&(&V_3)->___y_3);
		float* L_96 = L_95;
		float L_97 = *((float*)L_96);
		*((float*)L_96) = (float)((float)il2cpp_codegen_add(L_97, (2.0f)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = V_5;
		float L_99 = L_98.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_100 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_101 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_9), (0.0f), L_99, L_100, L_101, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_102 = V_9;
		V_8 = L_102;
		float L_103 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_104 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_7), (0.0f), (0.0f), L_103, L_104, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105 = V_7;
		V_6 = L_105;
		goto IL_02d0;
	}

IL_02ce:
	{
		goto IL_02d0;
	}

IL_02d0:
	{
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_106 = ___colorPage5;
		bool L_107 = L_106.___isValid_0;
		G_B12_0 = 1;
		G_B12_1 = 0;
		G_B12_2 = 0;
		G_B12_3 = (&V_10);
		if (L_107)
		{
			G_B13_0 = 1;
			G_B13_1 = 0;
			G_B13_2 = 0;
			G_B13_3 = (&V_10);
			goto IL_02e1;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_02e2;
	}

IL_02e1:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_02e2:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B14_4, (uint8_t)G_B14_3, (uint8_t)G_B14_2, (uint8_t)G_B14_1, (uint8_t)G_B14_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_108 = ___colorPage5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_109 = L_108.___pageAndID_1;
		uint8_t L_110 = L_109.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_111 = ___colorPage5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_112 = L_111.___pageAndID_1;
		uint8_t L_113 = L_112.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_11), (uint8_t)0, (uint8_t)0, L_110, L_113, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_114 = ___colorPage5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_115 = L_114.___pageAndID_1;
		uint8_t L_116 = L_115.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_12), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_116, NULL);
		uint16_t* L_117 = ___vertexCount6;
		int32_t L_118 = *((uint16_t*)L_117);
		V_13 = (uint16_t)L_118;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_119 = ___mesh4;
		il2cpp_codegen_initobj((&V_17), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = V_0;
		(&V_17)->___position_1 = L_120;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_121 = ___color2;
		(&V_17)->___tint_2 = L_121;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_122 = V_10;
		(&V_17)->___flags_6 = L_122;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_123 = V_6;
		(&V_17)->___circle_8 = L_123;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_124 = V_11;
		(&V_17)->___opacityColorPages_7 = L_124;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_125 = V_12;
		(&V_17)->___ids_5 = L_125;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_126 = V_17;
		NullCheck(L_119);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_119, L_126, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_127 = ___mesh4;
		il2cpp_codegen_initobj((&V_17), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_1;
		(&V_17)->___position_1 = L_128;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_129 = ___color2;
		(&V_17)->___tint_2 = L_129;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_130 = V_10;
		(&V_17)->___flags_6 = L_130;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_131 = V_7;
		(&V_17)->___circle_8 = L_131;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_132 = V_11;
		(&V_17)->___opacityColorPages_7 = L_132;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_133 = V_12;
		(&V_17)->___ids_5 = L_133;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_134 = V_17;
		NullCheck(L_127);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_127, L_134, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_135 = ___mesh4;
		il2cpp_codegen_initobj((&V_17), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_2;
		(&V_17)->___position_1 = L_136;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_137 = ___color2;
		(&V_17)->___tint_2 = L_137;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_138 = V_10;
		(&V_17)->___flags_6 = L_138;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_139 = V_8;
		(&V_17)->___circle_8 = L_139;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_140 = V_11;
		(&V_17)->___opacityColorPages_7 = L_140;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_141 = V_12;
		(&V_17)->___ids_5 = L_141;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_142 = V_17;
		NullCheck(L_135);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_135, L_142, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_143 = ___mesh4;
		il2cpp_codegen_initobj((&V_17), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_3;
		(&V_17)->___position_1 = L_144;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_145 = ___color2;
		(&V_17)->___tint_2 = L_145;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_146 = V_10;
		(&V_17)->___flags_6 = L_146;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_147 = V_9;
		(&V_17)->___circle_8 = L_147;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_148 = V_11;
		(&V_17)->___opacityColorPages_7 = L_148;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_149 = V_12;
		(&V_17)->___ids_5 = L_149;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_150 = V_17;
		NullCheck(L_143);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_143, L_150, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_151 = ___mesh4;
		uint16_t L_152 = V_13;
		NullCheck(L_151);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_151, L_152, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_153 = ___mesh4;
		uint16_t L_154 = V_13;
		NullCheck(L_153);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_153, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_154, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_155 = ___mesh4;
		uint16_t L_156 = V_13;
		NullCheck(L_155);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_155, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_156, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_157 = ___mesh4;
		uint16_t L_158 = V_13;
		NullCheck(L_157);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_157, L_158, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_159 = ___mesh4;
		uint16_t L_160 = V_13;
		NullCheck(L_159);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_159, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_160, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_161 = ___mesh4;
		uint16_t L_162 = V_13;
		NullCheck(L_161);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_161, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_162, 3))), NULL);
		uint16_t* L_163 = ___vertexCount6;
		uint16_t* L_164 = ___vertexCount6;
		int32_t L_165 = *((uint16_t*)L_164);
		*((int16_t*)L_163) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_165, 4)));
		uint16_t* L_166 = ___indexCount7;
		uint16_t* L_167 = ___indexCount7;
		int32_t L_168 = *((uint16_t*)L_167);
		*((int16_t*)L_166) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_168, 6)));
	}

IL_0495:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateStraightBorder(UnityEngine.Rect,UnityEngine.UIElements.UIR.Tessellation/Edges,System.Single,UnityEngine.Color,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateStraightBorder_m59F60FA5C0C807ADDAA029B68D0A663245683313 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, int32_t ___smoothedEdge1, float ___miterOffset2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, float ___posZ4, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh5, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___colorPage6, uint16_t* ___vertexCount7, uint16_t* ___indexCount8, bool ___countOnly9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_6;
	memset((&V_6), 0, sizeof(V_6));
	uint16_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_23;
	memset((&V_23), 0, sizeof(V_23));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_24;
	memset((&V_24), 0, sizeof(V_24));
	float V_25 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_26;
	memset((&V_26), 0, sizeof(V_26));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_27;
	memset((&V_27), 0, sizeof(V_27));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_28;
	memset((&V_28), 0, sizeof(V_28));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_29;
	memset((&V_29), 0, sizeof(V_29));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_30;
	memset((&V_30), 0, sizeof(V_30));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_31;
	memset((&V_31), 0, sizeof(V_31));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_32;
	memset((&V_32), 0, sizeof(V_32));
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B12_3 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B11_3 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B13_4 = NULL;
	{
		int32_t L_0 = ___smoothedEdge1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___smoothedEdge1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = 1;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_3 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		if ((((float)L_2) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_5 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0;
		G_B6_0 = ((((float)L_4) < ((float)L_5))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 1;
	}

IL_0031:
	{
		V_8 = (bool)G_B6_0;
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0611;
	}

IL_003c:
	{
		bool L_7 = ___countOnly9;
		V_9 = L_7;
		bool L_8 = V_9;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		uint16_t* L_9 = ___vertexCount7;
		uint16_t* L_10 = ___vertexCount7;
		int32_t L_11 = *((uint16_t*)L_10);
		*((int16_t*)L_9) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_11, 4)));
		uint16_t* L_12 = ___indexCount8;
		uint16_t* L_13 = ___indexCount8;
		int32_t L_14 = *((uint16_t*)L_13);
		*((int16_t*)L_12) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_14, 6)));
		goto IL_0611;
	}

IL_005c:
	{
		float L_15;
		L_15 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___rect0), NULL);
		float L_16;
		L_16 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___rect0), NULL);
		float L_17 = ___posZ4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_15, L_16, L_17, NULL);
		float L_18;
		L_18 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		float L_19;
		L_19 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___rect0), NULL);
		float L_20 = ___posZ4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_18, L_19, L_20, NULL);
		float L_21;
		L_21 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		float L_22;
		L_22 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		float L_23 = ___posZ4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_21, L_22, L_23, NULL);
		float L_24;
		L_24 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___rect0), NULL);
		float L_25;
		L_25 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		float L_26 = ___posZ4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_24, L_25, L_26, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_27 = ___colorPage6;
		bool L_28 = L_27.___isValid_0;
		G_B11_0 = 1;
		G_B11_1 = 0;
		G_B11_2 = 0;
		G_B11_3 = (&V_4);
		if (L_28)
		{
			G_B12_0 = 1;
			G_B12_1 = 0;
			G_B12_2 = 0;
			G_B12_3 = (&V_4);
			goto IL_00c9;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		G_B13_4 = G_B11_3;
		goto IL_00ca;
	}

IL_00c9:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
	}

IL_00ca:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B13_4, (uint8_t)G_B13_3, (uint8_t)G_B13_2, (uint8_t)G_B13_1, (uint8_t)G_B13_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_29 = ___colorPage6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_30 = L_29.___pageAndID_1;
		uint8_t L_31 = L_30.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_32 = ___colorPage6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_33 = L_32.___pageAndID_1;
		uint8_t L_34 = L_33.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_5), (uint8_t)0, (uint8_t)0, L_31, L_34, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_35 = ___colorPage6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_36 = L_35.___pageAndID_1;
		uint8_t L_37 = L_36.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_6), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_37, NULL);
		int32_t L_38 = ___smoothedEdge1;
		V_10 = (bool)((((int32_t)L_38) == ((int32_t)1))? 1 : 0);
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_0365;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_0;
		V_11 = L_40;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_1;
		V_12 = L_41;
		float* L_42 = (&(&V_0)->___x_2);
		float* L_43 = L_42;
		float L_44 = *((float*)L_43);
		*((float*)L_43) = (float)((float)il2cpp_codegen_subtract(L_44, (2.0f)));
		float* L_45 = (&(&V_1)->___x_2);
		float* L_46 = L_45;
		float L_47 = *((float*)L_46);
		*((float*)L_46) = (float)((float)il2cpp_codegen_add(L_47, (2.0f)));
		float* L_48 = (&(&V_2)->___x_2);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		*((float*)L_49) = (float)((float)il2cpp_codegen_add(L_50, (2.0f)));
		float* L_51 = (&(&V_3)->___x_2);
		float* L_52 = L_51;
		float L_53 = *((float*)L_52);
		*((float*)L_52) = (float)((float)il2cpp_codegen_subtract(L_53, (2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
		float L_55 = L_54.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_0;
		float L_57 = L_56.___x_2;
		V_13 = ((float)il2cpp_codegen_subtract(L_55, L_57));
		float L_58 = V_13;
		float L_59;
		L_59 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		float L_60 = V_13;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_14), ((float)(L_58/((float)il2cpp_codegen_add(L_59, (2.0f))))), (0.0f), ((float)(L_60/(2.0f))), (0.0f), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61;
		L_61 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_15 = L_61;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_0;
		(&V_21)->___position_1 = L_62;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_64;
		L_64 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_63, NULL);
		(&V_21)->___tint_2 = L_64;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_65 = V_4;
		(&V_21)->___flags_6 = L_65;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_66 = V_14;
		(&V_21)->___circle_8 = L_66;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_67 = V_5;
		(&V_21)->___opacityColorPages_7 = L_67;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_68 = V_6;
		(&V_21)->___ids_5 = L_68;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_69 = V_21;
		V_16 = L_69;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = V_1;
		(&V_21)->___position_1 = L_70;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_72;
		L_72 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_71, NULL);
		(&V_21)->___tint_2 = L_72;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_73 = V_4;
		(&V_21)->___flags_6 = L_73;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74 = V_15;
		(&V_21)->___circle_8 = L_74;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_75 = V_5;
		(&V_21)->___opacityColorPages_7 = L_75;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_76 = V_6;
		(&V_21)->___ids_5 = L_76;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_77 = V_21;
		V_17 = L_77;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = V_2;
		(&V_21)->___position_1 = L_78;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_80;
		L_80 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_79, NULL);
		(&V_21)->___tint_2 = L_80;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_81 = V_4;
		(&V_21)->___flags_6 = L_81;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_82 = V_15;
		(&V_21)->___circle_8 = L_82;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_83 = V_5;
		(&V_21)->___opacityColorPages_7 = L_83;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_84 = V_6;
		(&V_21)->___ids_5 = L_84;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_85 = V_21;
		V_18 = L_85;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_3;
		(&V_21)->___position_1 = L_86;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_88;
		L_88 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_87, NULL);
		(&V_21)->___tint_2 = L_88;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_89 = V_4;
		(&V_21)->___flags_6 = L_89;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_90 = V_14;
		(&V_21)->___circle_8 = L_90;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_91 = V_5;
		(&V_21)->___opacityColorPages_7 = L_91;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_92 = V_6;
		(&V_21)->___ids_5 = L_92;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_93 = V_21;
		V_19 = L_93;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_11;
		V_0 = L_94;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = V_12;
		V_1 = L_95;
		float* L_96 = (&(&V_1)->___y_3);
		float* L_97 = L_96;
		float L_98 = *((float*)L_97);
		float L_99 = ___miterOffset2;
		*((float*)L_97) = (float)((float)il2cpp_codegen_add(L_98, L_99));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_100, L_101, NULL);
		V_22 = L_102;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_22), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_103, (1.41419995f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_104, (2.0f), NULL);
		V_20 = L_105;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_106, L_107, NULL);
		V_0 = L_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = V_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_109, L_110, NULL);
		V_1 = L_111;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_112, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_114;
		L_114 = Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139(L_113, (&V_16), (&V_17), (&V_18), NULL);
		(&V_16)->___circle_8 = L_114;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_0;
		(&V_16)->___position_1 = L_115;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_117;
		L_117 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_116, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_118;
		L_118 = Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139(L_117, (&V_16), (&V_17), (&V_18), NULL);
		(&V_17)->___circle_8 = L_118;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_1;
		(&V_17)->___position_1 = L_119;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_120 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_121 = V_16;
		NullCheck(L_120);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_120, L_121, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_122 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_123 = V_17;
		NullCheck(L_122);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_122, L_123, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_124 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_125 = V_18;
		NullCheck(L_124);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_124, L_125, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_126 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_127 = V_19;
		NullCheck(L_126);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_126, L_127, NULL);
		goto IL_05b2;
	}

IL_0365:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = V_0;
		V_23 = L_128;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = V_3;
		V_24 = L_129;
		float* L_130 = (&(&V_0)->___y_3);
		float* L_131 = L_130;
		float L_132 = *((float*)L_131);
		*((float*)L_131) = (float)((float)il2cpp_codegen_subtract(L_132, (2.0f)));
		float* L_133 = (&(&V_1)->___y_3);
		float* L_134 = L_133;
		float L_135 = *((float*)L_134);
		*((float*)L_134) = (float)((float)il2cpp_codegen_subtract(L_135, (2.0f)));
		float* L_136 = (&(&V_2)->___y_3);
		float* L_137 = L_136;
		float L_138 = *((float*)L_137);
		*((float*)L_137) = (float)((float)il2cpp_codegen_add(L_138, (2.0f)));
		float* L_139 = (&(&V_3)->___y_3);
		float* L_140 = L_139;
		float L_141 = *((float*)L_140);
		*((float*)L_140) = (float)((float)il2cpp_codegen_add(L_141, (2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_3;
		float L_143 = L_142.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_0;
		float L_145 = L_144.___y_3;
		V_25 = ((float)il2cpp_codegen_subtract(L_143, L_145));
		float L_146 = V_25;
		float L_147;
		L_147 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		float L_148 = V_25;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_26), (0.0f), ((float)(L_146/((float)il2cpp_codegen_add(L_147, (2.0f))))), (0.0f), ((float)(L_148/(2.0f))), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_149;
		L_149 = Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline(NULL);
		V_27 = L_149;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = V_0;
		(&V_21)->___position_1 = L_150;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_152;
		L_152 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_151, NULL);
		(&V_21)->___tint_2 = L_152;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_153 = V_4;
		(&V_21)->___flags_6 = L_153;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_154 = V_26;
		(&V_21)->___circle_8 = L_154;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_155 = V_5;
		(&V_21)->___opacityColorPages_7 = L_155;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_156 = V_6;
		(&V_21)->___ids_5 = L_156;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_157 = V_21;
		V_28 = L_157;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158 = V_1;
		(&V_21)->___position_1 = L_158;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_159 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_160;
		L_160 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_159, NULL);
		(&V_21)->___tint_2 = L_160;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_161 = V_4;
		(&V_21)->___flags_6 = L_161;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_162 = V_26;
		(&V_21)->___circle_8 = L_162;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_163 = V_5;
		(&V_21)->___opacityColorPages_7 = L_163;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_164 = V_6;
		(&V_21)->___ids_5 = L_164;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_165 = V_21;
		V_29 = L_165;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = V_2;
		(&V_21)->___position_1 = L_166;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_167 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_168;
		L_168 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_167, NULL);
		(&V_21)->___tint_2 = L_168;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_169 = V_4;
		(&V_21)->___flags_6 = L_169;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_170 = V_27;
		(&V_21)->___circle_8 = L_170;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_171 = V_5;
		(&V_21)->___opacityColorPages_7 = L_171;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_172 = V_6;
		(&V_21)->___ids_5 = L_172;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_173 = V_21;
		V_30 = L_173;
		il2cpp_codegen_initobj((&V_21), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = V_3;
		(&V_21)->___position_1 = L_174;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_175 = ___color3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_176;
		L_176 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_175, NULL);
		(&V_21)->___tint_2 = L_176;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_177 = V_4;
		(&V_21)->___flags_6 = L_177;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_178 = V_27;
		(&V_21)->___circle_8 = L_178;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_179 = V_5;
		(&V_21)->___opacityColorPages_7 = L_179;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_180 = V_6;
		(&V_21)->___ids_5 = L_180;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_181 = V_21;
		V_31 = L_181;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182 = V_23;
		V_0 = L_182;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183 = V_24;
		V_3 = L_183;
		float* L_184 = (&(&V_3)->___x_2);
		float* L_185 = L_184;
		float L_186 = *((float*)L_185);
		float L_187 = ___miterOffset2;
		*((float*)L_185) = (float)((float)il2cpp_codegen_add(L_186, L_187));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_188 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190;
		L_190 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_188, L_189, NULL);
		V_22 = L_190;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_191;
		L_191 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_22), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192;
		L_192 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_191, (1.41419995f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_192, (2.0f), NULL);
		V_32 = L_193;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_194 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_195 = V_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_196;
		L_196 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_194, L_195, NULL);
		V_0 = L_196;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_198 = V_32;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_199;
		L_199 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_197, L_198, NULL);
		V_3 = L_199;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_200 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_201;
		L_201 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_200, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_202;
		L_202 = Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139(L_201, (&V_28), (&V_29), (&V_30), NULL);
		(&V_28)->___circle_8 = L_202;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = V_0;
		(&V_28)->___position_1 = L_203;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_205;
		L_205 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_204, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_206;
		L_206 = Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139(L_205, (&V_28), (&V_29), (&V_30), NULL);
		(&V_31)->___circle_8 = L_206;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207 = V_3;
		(&V_31)->___position_1 = L_207;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_208 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_209 = V_28;
		NullCheck(L_208);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_208, L_209, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_210 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_211 = V_29;
		NullCheck(L_210);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_210, L_211, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_212 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_213 = V_30;
		NullCheck(L_212);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_212, L_213, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_214 = ___mesh5;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_215 = V_31;
		NullCheck(L_214);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_214, L_215, NULL);
	}

IL_05b2:
	{
		uint16_t* L_216 = ___vertexCount7;
		int32_t L_217 = *((uint16_t*)L_216);
		V_7 = (uint16_t)L_217;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_218 = ___mesh5;
		uint16_t L_219 = V_7;
		NullCheck(L_218);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_218, L_219, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_220 = ___mesh5;
		uint16_t L_221 = V_7;
		NullCheck(L_220);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_220, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_221, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_222 = ___mesh5;
		uint16_t L_223 = V_7;
		NullCheck(L_222);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_222, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_223, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_224 = ___mesh5;
		uint16_t L_225 = V_7;
		NullCheck(L_224);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_224, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_225, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_226 = ___mesh5;
		uint16_t L_227 = V_7;
		NullCheck(L_226);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_226, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_227, 3))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_228 = ___mesh5;
		uint16_t L_229 = V_7;
		NullCheck(L_228);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_228, L_229, NULL);
		uint16_t* L_230 = ___vertexCount7;
		uint16_t* L_231 = ___vertexCount7;
		int32_t L_232 = *((uint16_t*)L_231);
		*((int16_t*)L_230) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_232, 4)));
		uint16_t* L_233 = ___indexCount8;
		uint16_t* L_234 = ___indexCount8;
		int32_t L_235 = *((uint16_t*)L_234);
		*((int16_t*)L_233) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_235, 6)));
	}

IL_0611:
	{
		return;
	}
}
// UnityEngine.Vector4 UnityEngine.UIElements.UIR.Tessellation::GetInterpolatedCircle(UnityEngine.Vector2,UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&,UnityEngine.UIElements.Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v01, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v12, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* ___v23, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p0;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_1 = ___v01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_4 = ___v12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_5, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_7 = ___v23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Tessellation_ComputeBarycentricCoordinates_m3B250566AFA7401F66D9B6B610F1E2EBD62F80E8(L_0, L_3, L_6, L_9, (&V_0), (&V_1), (&V_2), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_10 = ___v01;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = L_10->___circle_8;
		float L_12 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_11, L_12, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_14 = ___v12;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = L_14->___circle_8;
		float L_16 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_15, L_16, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18;
		L_18 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_13, L_17, NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7* L_19 = ___v23;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = L_19->___circle_8;
		float L_21 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_22;
		L_22 = Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline(L_20, L_21, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23;
		L_23 = Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline(L_18, L_22, NULL);
		V_3 = L_23;
		goto IL_0060;
	}

IL_0060:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = V_3;
		return L_24;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::ComputeBarycentricCoordinates(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_ComputeBarycentricCoordinates_m3B250566AFA7401F66D9B6B610F1E2EBD62F80E8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c3, float* ___u4, float* ___v5, float* ___w6, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___b2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___a1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___c3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___p0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___a1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_2 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11;
		L_11 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_9, L_10, NULL);
		V_3 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14;
		L_14 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_12, L_13, NULL);
		V_4 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17;
		L_17 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_15, L_16, NULL);
		V_5 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		float L_20;
		L_20 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_18, L_19, NULL);
		V_6 = L_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		float L_23;
		L_23 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_21, L_22, NULL);
		V_7 = L_23;
		float L_24 = V_3;
		float L_25 = V_5;
		float L_26 = V_4;
		float L_27 = V_4;
		V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_24, L_25)), ((float)il2cpp_codegen_multiply(L_26, L_27))));
		float* L_28 = ___v5;
		float L_29 = V_5;
		float L_30 = V_6;
		float L_31 = V_4;
		float L_32 = V_7;
		float L_33 = V_8;
		*((float*)L_28) = (float)((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_29, L_30)), ((float)il2cpp_codegen_multiply(L_31, L_32))))/L_33));
		float* L_34 = ___w6;
		float L_35 = V_3;
		float L_36 = V_7;
		float L_37 = V_4;
		float L_38 = V_6;
		float L_39 = V_8;
		*((float*)L_34) = (float)((float)(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_35, L_36)), ((float)il2cpp_codegen_multiply(L_37, L_38))))/L_39));
		float* L_40 = ___u4;
		float* L_41 = ___v5;
		float L_42 = *((float*)L_41);
		float* L_43 = ___w6;
		float L_44 = *((float*)L_43);
		*((float*)L_40) = (float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((1.0f), L_42)), L_44));
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateFilledFan(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateFilledFan_m271D00C508777D21DF8A27A6185E2DB572DA2653 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___miterOffset2, float ___leftWidth3, float ___topWidth4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor5, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor6, float ___posZ7, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage9, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage10, uint16_t* ___vertexCount11, uint16_t* ___indexCount12, bool ___countOnly13, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B4_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	int32_t G_B5_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B7_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	int32_t G_B8_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B8_4 = NULL;
	{
		bool L_0 = ___countOnly13;
		V_12 = L_0;
		bool L_1 = V_12;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint16_t* L_2 = ___vertexCount11;
		uint16_t* L_3 = ___vertexCount11;
		int32_t L_4 = *((uint16_t*)L_3);
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_4, 6)));
		uint16_t* L_5 = ___indexCount12;
		uint16_t* L_6 = ___indexCount12;
		int32_t L_7 = *((uint16_t*)L_6);
		*((int16_t*)L_5) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_7, 6)));
		goto IL_0392;
	}

IL_0021:
	{
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_8 = ___leftColorPage9;
		bool L_9 = L_8.___isValid_0;
		G_B3_0 = 1;
		G_B3_1 = 0;
		G_B3_2 = 0;
		G_B3_3 = (&V_0);
		if (L_9)
		{
			G_B4_0 = 1;
			G_B4_1 = 0;
			G_B4_2 = 0;
			G_B4_3 = (&V_0);
			goto IL_0032;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_0033;
	}

IL_0032:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_0033:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B5_4, (uint8_t)G_B5_3, (uint8_t)G_B5_2, (uint8_t)G_B5_1, (uint8_t)G_B5_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_10 = ___leftColorPage9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = L_10.___pageAndID_1;
		uint8_t L_12 = L_11.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_13 = ___leftColorPage9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14 = L_13.___pageAndID_1;
		uint8_t L_15 = L_14.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_1), (uint8_t)0, (uint8_t)0, L_12, L_15, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_16 = ___leftColorPage9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = L_16.___pageAndID_1;
		uint8_t L_18 = L_17.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_2), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_18, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_19 = ___topColorPage10;
		bool L_20 = L_19.___isValid_0;
		G_B6_0 = 1;
		G_B6_1 = 0;
		G_B6_2 = 0;
		G_B6_3 = (&V_3);
		if (L_20)
		{
			G_B7_0 = 1;
			G_B7_1 = 0;
			G_B7_2 = 0;
			G_B7_3 = (&V_3);
			goto IL_0080;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0081;
	}

IL_0080:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0081:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B8_4, (uint8_t)G_B8_3, (uint8_t)G_B8_2, (uint8_t)G_B8_1, (uint8_t)G_B8_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_21 = ___topColorPage10;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_22 = L_21.___pageAndID_1;
		uint8_t L_23 = L_22.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_24 = ___topColorPage10;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_25 = L_24.___pageAndID_1;
		uint8_t L_26 = L_25.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_4), (uint8_t)0, (uint8_t)0, L_23, L_26, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_27 = ___topColorPage10;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28 = L_27.___pageAndID_1;
		uint8_t L_29 = L_28.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_5), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_29, NULL);
		il2cpp_codegen_initobj((&V_6), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_30 = V_6;
		V_7 = L_30;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_31 = V_6;
		V_8 = L_31;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_32 = V_6;
		V_9 = L_32;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___center0;
		float L_34 = L_33.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___center0;
		float L_36 = L_35.___y_1;
		float L_37 = ___posZ7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_38), L_34, L_36, L_37, /*hidden argument*/NULL);
		(&V_6)->___position_1 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___center0;
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = ___radius1;
		float L_42 = L_41.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ___center0;
		float L_44 = L_43.___y_1;
		float L_45 = ___posZ7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), ((float)il2cpp_codegen_subtract(L_40, L_42)), L_44, L_45, /*hidden argument*/NULL);
		(&V_7)->___position_1 = L_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = ___center0;
		float L_48 = L_47.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___radius1;
		float L_50 = L_49.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = ___center0;
		float L_52 = L_51.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___radius1;
		float L_54 = L_53.___y_1;
		float L_55 = ___posZ7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_56), ((float)il2cpp_codegen_subtract(L_48, L_50)), ((float)il2cpp_codegen_subtract(L_52, L_54)), L_55, /*hidden argument*/NULL);
		(&V_8)->___position_1 = L_56;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = ___center0;
		float L_58 = L_57.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = ___center0;
		float L_60 = L_59.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = ___radius1;
		float L_62 = L_61.___y_1;
		float L_63 = ___posZ7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_64), L_58, ((float)il2cpp_codegen_subtract(L_60, L_62)), L_63, /*hidden argument*/NULL);
		(&V_9)->___position_1 = L_64;
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		float L_65 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_66 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_67), (0.0f), (0.0f), L_65, L_66, /*hidden argument*/NULL);
		(&V_6)->___circle_8 = L_67;
		float L_68 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_69 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_70), (1.0f), (0.0f), L_68, L_69, /*hidden argument*/NULL);
		(&V_7)->___circle_8 = L_70;
		float L_71 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_72 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_73;
		memset((&L_73), 0, sizeof(L_73));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_73), (1.0f), (1.0f), L_71, L_72, /*hidden argument*/NULL);
		(&V_8)->___circle_8 = L_73;
		float L_74 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		float L_75 = ((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_76), (0.0f), (1.0f), L_74, L_75, /*hidden argument*/NULL);
		(&V_9)->___circle_8 = L_76;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = ___miterOffset2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_79;
		L_79 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_77, L_78, NULL);
		V_13 = L_79;
		bool L_80 = V_13;
		if (!L_80)
		{
			goto IL_021e;
		}
	}
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_81 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = L_81.___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = ___miterOffset2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_82, L_84, NULL);
		V_14 = L_85;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		L_87 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_86, NULL);
		il2cpp_codegen_runtime_class_init_inline(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_88;
		L_88 = Tessellation_GetInterpolatedCircle_m2B7E3BE9EA9FE5BE79AFB885718D96D24C82A139(L_87, (&V_6), (&V_7), (&V_8), NULL);
		(&V_6)->___circle_8 = L_88;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_14;
		(&V_6)->___position_1 = L_89;
	}

IL_021e:
	{
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_90 = V_8;
		V_10 = L_90;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_91 = V_6;
		V_11 = L_91;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_92 = ___leftColor5;
		(&V_6)->___tint_2 = L_92;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_93 = ___leftColor5;
		(&V_7)->___tint_2 = L_93;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_94 = ___leftColor5;
		(&V_10)->___tint_2 = L_94;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_95 = ___topColor6;
		(&V_8)->___tint_2 = L_95;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_96 = ___topColor6;
		(&V_9)->___tint_2 = L_96;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_97 = ___topColor6;
		(&V_11)->___tint_2 = L_97;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_98 = V_0;
		(&V_6)->___flags_6 = L_98;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_99 = V_1;
		(&V_6)->___opacityColorPages_7 = L_99;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_100 = V_2;
		(&V_6)->___ids_5 = L_100;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_101 = V_0;
		(&V_7)->___flags_6 = L_101;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_102 = V_1;
		(&V_7)->___opacityColorPages_7 = L_102;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_103 = V_2;
		(&V_7)->___ids_5 = L_103;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_104 = V_0;
		(&V_10)->___flags_6 = L_104;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_105 = V_1;
		(&V_10)->___opacityColorPages_7 = L_105;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_106 = V_2;
		(&V_10)->___ids_5 = L_106;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_107 = V_3;
		(&V_8)->___flags_6 = L_107;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_108 = V_4;
		(&V_8)->___opacityColorPages_7 = L_108;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_109 = V_5;
		(&V_8)->___ids_5 = L_109;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_110 = V_3;
		(&V_9)->___flags_6 = L_110;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_111 = V_4;
		(&V_9)->___opacityColorPages_7 = L_111;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_112 = V_5;
		(&V_9)->___ids_5 = L_112;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_113 = V_3;
		(&V_11)->___flags_6 = L_113;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_114 = V_4;
		(&V_11)->___opacityColorPages_7 = L_114;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_115 = V_5;
		(&V_11)->___ids_5 = L_115;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_116 = ___mesh8;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_117 = V_6;
		NullCheck(L_116);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_116, L_117, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_118 = ___mesh8;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_119 = V_7;
		NullCheck(L_118);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_118, L_119, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_120 = ___mesh8;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_121 = V_10;
		NullCheck(L_120);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_120, L_121, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_122 = ___mesh8;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_123 = V_8;
		NullCheck(L_122);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_122, L_123, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_124 = ___mesh8;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_125 = V_9;
		NullCheck(L_124);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_124, L_125, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_126 = ___mesh8;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_127 = V_11;
		NullCheck(L_126);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_126, L_127, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_128 = ___mesh8;
		uint16_t* L_129 = ___vertexCount11;
		int32_t L_130 = *((uint16_t*)L_129);
		NullCheck(L_128);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_128, (uint16_t)((int32_t)(uint16_t)L_130), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_131 = ___mesh8;
		uint16_t* L_132 = ___vertexCount11;
		int32_t L_133 = *((uint16_t*)L_132);
		NullCheck(L_131);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_131, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_133, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_134 = ___mesh8;
		uint16_t* L_135 = ___vertexCount11;
		int32_t L_136 = *((uint16_t*)L_135);
		NullCheck(L_134);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_134, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_136, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_137 = ___mesh8;
		uint16_t* L_138 = ___vertexCount11;
		int32_t L_139 = *((uint16_t*)L_138);
		NullCheck(L_137);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_137, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_139, 3))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_140 = ___mesh8;
		uint16_t* L_141 = ___vertexCount11;
		int32_t L_142 = *((uint16_t*)L_141);
		NullCheck(L_140);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_140, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_142, 4))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_143 = ___mesh8;
		uint16_t* L_144 = ___vertexCount11;
		int32_t L_145 = *((uint16_t*)L_144);
		NullCheck(L_143);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_143, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_145, 5))), NULL);
		uint16_t* L_146 = ___vertexCount11;
		uint16_t* L_147 = ___vertexCount11;
		int32_t L_148 = *((uint16_t*)L_147);
		*((int16_t*)L_146) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_148, 6)));
		uint16_t* L_149 = ___indexCount12;
		uint16_t* L_150 = ___indexCount12;
		int32_t L_151 = *((uint16_t*)L_150);
		*((int16_t*)L_149) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_151, 6)));
	}

IL_0392:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::TessellateBorderedFan(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,UnityEngine.Color32,UnityEngine.Color32,System.Single,UnityEngine.UIElements.MeshWriteData,UnityEngine.UIElements.ColorPage,UnityEngine.UIElements.ColorPage,System.UInt16&,System.UInt16&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_TessellateBorderedFan_mCA1CD428750B3AC0DDE19DF24691875CB13C1621 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___outerRadius1, float ___leftWidth2, float ___topWidth3, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___leftColor4, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___topColor5, float ___posZ6, MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* ___mesh7, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___leftColorPage8, ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 ___topColorPage9, uint16_t* ___vertexCount10, uint16_t* ___indexCount11, bool ___countOnly12, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B4_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	int32_t G_B5_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B7_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B7_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	int32_t G_B8_2 = 0;
	int32_t G_B8_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* G_B8_4 = NULL;
	{
		bool L_0 = ___countOnly12;
		V_14 = L_0;
		bool L_1 = V_14;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		uint16_t* L_2 = ___vertexCount10;
		uint16_t* L_3 = ___vertexCount10;
		int32_t L_4 = *((uint16_t*)L_3);
		*((int16_t*)L_2) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_4, 6)));
		uint16_t* L_5 = ___indexCount11;
		uint16_t* L_6 = ___indexCount11;
		int32_t L_7 = *((uint16_t*)L_6);
		*((int16_t*)L_5) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_7, 6)));
		goto IL_0374;
	}

IL_0021:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___outerRadius1;
		float L_9 = L_8.___x_0;
		float L_10 = ___leftWidth2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___outerRadius1;
		float L_12 = L_11.___y_1;
		float L_13 = ___topWidth3;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(L_9, L_10)), ((float)il2cpp_codegen_subtract(L_12, L_13)), NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_14 = ___leftColorPage8;
		bool L_15 = L_14.___isValid_0;
		G_B3_0 = 1;
		G_B3_1 = 0;
		G_B3_2 = 0;
		G_B3_3 = (&V_1);
		if (L_15)
		{
			G_B4_0 = 1;
			G_B4_1 = 0;
			G_B4_2 = 0;
			G_B4_3 = (&V_1);
			goto IL_0049;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_004a;
	}

IL_0049:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_004a:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B5_4, (uint8_t)G_B5_3, (uint8_t)G_B5_2, (uint8_t)G_B5_1, (uint8_t)G_B5_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_16 = ___leftColorPage8;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = L_16.___pageAndID_1;
		uint8_t L_18 = L_17.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_19 = ___leftColorPage8;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_20 = L_19.___pageAndID_1;
		uint8_t L_21 = L_20.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_2), (uint8_t)0, (uint8_t)0, L_18, L_21, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_22 = ___leftColorPage8;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_23 = L_22.___pageAndID_1;
		uint8_t L_24 = L_23.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_3), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_24, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_25 = ___topColorPage9;
		bool L_26 = L_25.___isValid_0;
		G_B6_0 = 1;
		G_B6_1 = 0;
		G_B6_2 = 0;
		G_B6_3 = (&V_4);
		if (L_26)
		{
			G_B7_0 = 1;
			G_B7_1 = 0;
			G_B7_2 = 0;
			G_B7_3 = (&V_4);
			goto IL_0097;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0098;
	}

IL_0097:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0098:
	{
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline(G_B8_4, (uint8_t)G_B8_3, (uint8_t)G_B8_2, (uint8_t)G_B8_1, (uint8_t)G_B8_0, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_27 = ___topColorPage9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28 = L_27.___pageAndID_1;
		uint8_t L_29 = L_28.___r_1;
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_30 = ___topColorPage9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_31 = L_30.___pageAndID_1;
		uint8_t L_32 = L_31.___g_2;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_5), (uint8_t)0, (uint8_t)0, L_29, L_32, NULL);
		ColorPage_t7C2B8995DE8D27CED5E55F7BFE4E6C70C971FAE0 L_33 = ___topColorPage9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_34 = L_33.___pageAndID_1;
		uint8_t L_35 = L_34.___b_3;
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&V_6), (uint8_t)0, (uint8_t)0, (uint8_t)0, L_35, NULL);
		il2cpp_codegen_initobj((&V_7), sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7));
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_36 = V_7;
		V_8 = L_36;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_37 = V_7;
		V_9 = L_37;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_38 = V_7;
		V_10 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___center0;
		float L_40 = L_39.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = ___center0;
		float L_42 = L_41.___y_1;
		float L_43 = ___posZ6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_40, L_42, L_43, /*hidden argument*/NULL);
		(&V_7)->___position_1 = L_44;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = ___center0;
		float L_46 = L_45.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = ___outerRadius1;
		float L_48 = L_47.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___center0;
		float L_50 = L_49.___y_1;
		float L_51 = ___posZ6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), ((float)il2cpp_codegen_subtract(L_46, L_48)), L_50, L_51, /*hidden argument*/NULL);
		(&V_8)->___position_1 = L_52;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___center0;
		float L_54 = L_53.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = ___outerRadius1;
		float L_56 = L_55.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = ___center0;
		float L_58 = L_57.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = ___outerRadius1;
		float L_60 = L_59.___y_1;
		float L_61 = ___posZ6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_62), ((float)il2cpp_codegen_subtract(L_54, L_56)), ((float)il2cpp_codegen_subtract(L_58, L_60)), L_61, /*hidden argument*/NULL);
		(&V_9)->___position_1 = L_62;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = ___center0;
		float L_64 = L_63.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = ___center0;
		float L_66 = L_65.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = ___outerRadius1;
		float L_68 = L_67.___y_1;
		float L_69 = ___posZ6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_70), L_64, ((float)il2cpp_codegen_subtract(L_66, L_68)), L_69, /*hidden argument*/NULL);
		(&V_10)->___position_1 = L_70;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = ___outerRadius1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_71, L_72, NULL);
		V_11 = L_73;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_74), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(&V_7)->___circle_8 = L_74;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_11;
		float L_76 = L_75.___x_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_77), (1.0f), (0.0f), L_76, (0.0f), /*hidden argument*/NULL);
		(&V_8)->___circle_8 = L_77;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = V_11;
		float L_79 = L_78.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_11;
		float L_81 = L_80.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_82), (1.0f), (1.0f), L_79, L_81, /*hidden argument*/NULL);
		(&V_9)->___circle_8 = L_82;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_11;
		float L_84 = L_83.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_85), (0.0f), (1.0f), (0.0f), L_84, /*hidden argument*/NULL);
		(&V_10)->___circle_8 = L_85;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_86 = V_9;
		V_12 = L_86;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_87 = V_7;
		V_13 = L_87;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_88 = ___leftColor4;
		(&V_7)->___tint_2 = L_88;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_89 = ___leftColor4;
		(&V_8)->___tint_2 = L_89;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_90 = ___leftColor4;
		(&V_12)->___tint_2 = L_90;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_91 = ___topColor5;
		(&V_9)->___tint_2 = L_91;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_92 = ___topColor5;
		(&V_10)->___tint_2 = L_92;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_93 = ___topColor5;
		(&V_13)->___tint_2 = L_93;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_94 = V_1;
		(&V_7)->___flags_6 = L_94;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_95 = V_2;
		(&V_7)->___opacityColorPages_7 = L_95;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_96 = V_3;
		(&V_7)->___ids_5 = L_96;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_97 = V_1;
		(&V_8)->___flags_6 = L_97;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_98 = V_2;
		(&V_8)->___opacityColorPages_7 = L_98;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_99 = V_3;
		(&V_8)->___ids_5 = L_99;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_100 = V_1;
		(&V_12)->___flags_6 = L_100;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_101 = V_2;
		(&V_12)->___opacityColorPages_7 = L_101;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_102 = V_3;
		(&V_12)->___ids_5 = L_102;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_103 = V_4;
		(&V_9)->___flags_6 = L_103;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_104 = V_5;
		(&V_9)->___opacityColorPages_7 = L_104;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_105 = V_6;
		(&V_9)->___ids_5 = L_105;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_106 = V_4;
		(&V_10)->___flags_6 = L_106;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_107 = V_5;
		(&V_10)->___opacityColorPages_7 = L_107;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_108 = V_6;
		(&V_10)->___ids_5 = L_108;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_109 = V_4;
		(&V_13)->___flags_6 = L_109;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_110 = V_5;
		(&V_13)->___opacityColorPages_7 = L_110;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_111 = V_6;
		(&V_13)->___ids_5 = L_111;
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_112 = ___mesh7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_113 = V_7;
		NullCheck(L_112);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_112, L_113, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_114 = ___mesh7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_115 = V_8;
		NullCheck(L_114);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_114, L_115, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_116 = ___mesh7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_117 = V_12;
		NullCheck(L_116);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_116, L_117, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_118 = ___mesh7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_119 = V_9;
		NullCheck(L_118);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_118, L_119, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_120 = ___mesh7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_121 = V_10;
		NullCheck(L_120);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_120, L_121, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_122 = ___mesh7;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_123 = V_13;
		NullCheck(L_122);
		MeshWriteData_SetNextVertex_m120BCCC7DD2ACF1AA408166C9187500803FCF841(L_122, L_123, NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_124 = ___mesh7;
		uint16_t* L_125 = ___vertexCount10;
		int32_t L_126 = *((uint16_t*)L_125);
		NullCheck(L_124);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_124, (uint16_t)((int32_t)(uint16_t)L_126), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_127 = ___mesh7;
		uint16_t* L_128 = ___vertexCount10;
		int32_t L_129 = *((uint16_t*)L_128);
		NullCheck(L_127);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_127, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_129, 1))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_130 = ___mesh7;
		uint16_t* L_131 = ___vertexCount10;
		int32_t L_132 = *((uint16_t*)L_131);
		NullCheck(L_130);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_130, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_132, 2))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_133 = ___mesh7;
		uint16_t* L_134 = ___vertexCount10;
		int32_t L_135 = *((uint16_t*)L_134);
		NullCheck(L_133);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_133, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_135, 3))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_136 = ___mesh7;
		uint16_t* L_137 = ___vertexCount10;
		int32_t L_138 = *((uint16_t*)L_137);
		NullCheck(L_136);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_136, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_138, 4))), NULL);
		MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* L_139 = ___mesh7;
		uint16_t* L_140 = ___vertexCount10;
		int32_t L_141 = *((uint16_t*)L_140);
		NullCheck(L_139);
		MeshWriteData_SetNextIndex_m9683CE7626B8D48E7C570516C7D668D47DAC21A3(L_139, (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_141, 5))), NULL);
		uint16_t* L_142 = ___vertexCount10;
		uint16_t* L_143 = ___vertexCount10;
		int32_t L_144 = *((uint16_t*)L_143);
		*((int16_t*)L_142) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_144, 6)));
		uint16_t* L_145 = ___indexCount11;
		uint16_t* L_146 = ___indexCount11;
		int32_t L_147 = *((uint16_t*)L_146);
		*((int16_t*)L_145) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_147, 6)));
	}

IL_0374:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::MirrorVertices(UnityEngine.Rect,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_MirrorVertices_m12699A5282566AC2934D3FF10D41EB0372042C39 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices1, int32_t ___vertexStart2, int32_t ___vertexCount3, bool ___flipHorizontal4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		bool L_0 = ___flipHorizontal4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		V_1 = 0;
		goto IL_0068;
	}

IL_000c:
	{
		int32_t L_2 = ___vertexStart2;
		int32_t L_3 = V_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_4;
		L_4 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE((&___vertices1), ((int32_t)il2cpp_codegen_add(L_2, L_3)), NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		V_2 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&(&V_2)->___position_1);
		float L_6;
		L_6 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position_1;
		float L_9 = L_8.___x_2;
		float L_10;
		L_10 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___rect0), NULL);
		L_5->___x_2 = ((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_subtract(L_9, L_10))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&(&V_2)->___uv_3);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_12 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = L_12.___uv_3;
		float L_14 = L_13.___x_0;
		L_11->___x_0 = ((-L_14));
		int32_t L_15 = ___vertexStart2;
		int32_t L_16 = V_1;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_17 = V_2;
		NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D((&___vertices1), ((int32_t)il2cpp_codegen_add(L_15, L_16)), L_17, NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0068:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___vertexCount3;
		V_3 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_00e9;
	}

IL_0073:
	{
		V_4 = 0;
		goto IL_00dd;
	}

IL_0079:
	{
		int32_t L_22 = ___vertexStart2;
		int32_t L_23 = V_4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_24;
		L_24 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE((&___vertices1), ((int32_t)il2cpp_codegen_add(L_22, L_23)), NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		V_5 = L_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&(&V_5)->___position_1);
		float L_26;
		L_26 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___position_1;
		float L_29 = L_28.___y_3;
		float L_30;
		L_30 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___rect0), NULL);
		L_25->___y_3 = ((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_subtract(L_29, L_30))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&(&V_5)->___uv_3);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_32 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = L_32.___uv_3;
		float L_34 = L_33.___y_1;
		L_31->___y_1 = ((-L_34));
		int32_t L_35 = ___vertexStart2;
		int32_t L_36 = V_4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_37 = V_5;
		NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D((&___vertices1), ((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37, NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00dd:
	{
		int32_t L_39 = V_4;
		int32_t L_40 = ___vertexCount3;
		V_6 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_6;
		if (L_41)
		{
			goto IL_0079;
		}
	}
	{
	}

IL_00e9:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::FlipWinding(Unity.Collections.NativeSlice`1<System.UInt16>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_FlipWinding_mEB8CE9D883238F9540490218B02DE9D782D52962 (NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___indices0, int32_t ___indexStart1, int32_t ___indexCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0005:
	{
		int32_t L_0 = ___indexStart1;
		int32_t L_1 = V_0;
		uint16_t L_2;
		L_2 = NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D((&___indices0), ((int32_t)il2cpp_codegen_add(L_0, L_1)), NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___indexStart1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___indexStart1;
		int32_t L_6 = V_0;
		uint16_t L_7;
		L_7 = NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D((&___indices0), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_5, L_6)), 1)), NativeSlice_1_get_Item_m68B26E5D2BA77AD2C22D55743D46D2CFC1C8935D_RuntimeMethod_var);
		NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29((&___indices0), ((int32_t)il2cpp_codegen_add(L_3, L_4)), L_7, NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29_RuntimeMethod_var);
		int32_t L_8 = ___indexStart1;
		int32_t L_9 = V_0;
		uint16_t L_10 = V_1;
		NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29((&___indices0), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_8, L_9)), 1)), L_10, NativeSlice_1_set_Item_m4025885DCD245D3315FE1D5E0ABF84004032DF29_RuntimeMethod_var);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 3));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___indexCount2;
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::ComputeUVs(UnityEngine.Rect,UnityEngine.Rect,UnityEngine.Rect,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation_ComputeUVs_m32B3A1353CB1347FAFEF073B93338348CC8ADC5E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___tessellatedRect0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___textureRect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___uvRegion2, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___vertices3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&___tessellatedRect0), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___tessellatedRect0), NULL);
		float L_2;
		L_2 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___tessellatedRect0), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)((1.0f)/L_1)), ((float)((1.0f)/L_2)), NULL);
		V_2 = 0;
		goto IL_00d7;
	}

IL_0031:
	{
		int32_t L_3 = V_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_4;
		L_4 = NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE((&___vertices3), L_3, NativeSlice_1_get_Item_m08F5F8AF3DA06C1AB32A86563E2FCF3D934470AE_RuntimeMethod_var);
		V_3 = L_4;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_5 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___position_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		V_4 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_9, NULL);
		V_4 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_11, L_12, NULL);
		V_4 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&(&V_3)->___uv_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_4;
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___textureRect1), NULL);
		float L_18;
		L_18 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___textureRect1), NULL);
		float L_19;
		L_19 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___uvRegion2), NULL);
		float L_20;
		L_20 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___uvRegion2), NULL);
		L_14->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), L_18)), L_19)), L_20));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&(&V_3)->___uv_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_4;
		float L_23 = L_22.___y_1;
		float L_24;
		L_24 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___textureRect1), NULL);
		float L_25;
		L_25 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___textureRect1), NULL);
		float L_26;
		L_26 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___uvRegion2), NULL);
		float L_27;
		L_27 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___uvRegion2), NULL);
		L_21->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_23)), L_24)), L_25)), L_26)), L_27));
		int32_t L_28 = V_2;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_29 = V_3;
		NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D((&___vertices3), L_28, L_29, NativeSlice_1_set_Item_mA399DFB2E256B56A7CFF60590B546F63F036C29D_RuntimeMethod_var);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d7:
	{
		int32_t L_31 = V_2;
		int32_t L_32;
		L_32 = NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2((&___vertices3), NativeSlice_1_get_Length_m1D81D3247A86590A8FAE91D1E30F47BA2E3037C2_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_5;
		if (L_33)
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Tessellation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tessellation__cctor_m007004A9AF58FBD4B145A594E97931117C1470F5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46B2C5194353B68813203D9EC7AFC20016EC23A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8940764EF74E36BFE702FA01C2AD7A3D820A8D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kEpsilon_0 = (0.00100000005f);
		((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kUnusedArc_1 = (-9999.90039f);
		((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___kSubdivisions_2 = (uint16_t)6;
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral46B2C5194353B68813203D9EC7AFC20016EC23A3, /*hidden argument*/NULL);
		((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___s_MarkerTessellateRect_3 = L_0;
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_1), _stringLiteralB8940764EF74E36BFE702FA01C2AD7A3D820A8D3, /*hidden argument*/NULL);
		((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___s_MarkerTessellateBorder_4 = L_1;
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_2 = (EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918*)(EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918*)SZArrayNew(EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918_il2cpp_TypeInfo_var, (uint32_t)4);
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)4);
		EdgesU5BU5D_t8B9821D7220C0ECED1E7562DC152478ECC253918* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)8);
		((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___s_AllEdges_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_StaticFields*)il2cpp_codegen_static_fields_for(Tessellation_tA2DF69D94AFEDAF41B90BB1F2C5E23C57BD65A31_il2cpp_TypeInfo_var))->___s_AllEdges_5), (void*)L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m3D61F5FA9483CD9C08977D9D8852FB448B4CE6D1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* Allocator_Invoke_mCBC42ABCC9E1CDBD31724B53430EE6271DD256A7_inline (Allocator_t084692CDDE70825875BA4EC825D124E0BF9355D3* __this, uint32_t ___vertexCount0, uint32_t ___indexCount1, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0* ___allocatorData2, const RuntimeMethod* method) 
{
	typedef MeshWriteData_tE09883A6419D2A92CC453702AD6D30486B44F5F9* (*FunctionPointerType) (RuntimeObject*, uint32_t, uint32_t, AllocMeshData_t2A9D421887B81E659406F225BE007B9CD4FC1AA0*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___vertexCount0, ___indexCount1, ___allocatorData2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->___x_1;
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->___y_2;
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->___z_3;
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->___w_4;
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___r_0;
		float L_6 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___a0;
		float L_8 = L_7.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___b1;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___a0;
		float L_12 = L_11.___g_1;
		float L_13 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___a0;
		float L_15 = L_14.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___b1;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___a0;
		float L_19 = L_18.___b_2;
		float L_20 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___a0;
		float L_22 = L_21.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___b1;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___a0;
		float L_26 = L_25.___a_3;
		float L_27 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)))), /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0061;
	}

IL_0061:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___x_0;
		float L_6 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___a0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___b1;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___a0;
		float L_12 = L_11.___y_1;
		float L_13 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0035;
	}

IL_0035:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = ___value1;
		__this->___x_1 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = ___value1;
		__this->___y_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = ___value1;
		__this->___z_3 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = ___value1;
		__this->___w_4 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_RuntimeMethod_var)));
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* TextureRegistry_get_instance_m4E974FC5F20C8DD77920F121ECD4F26FAC01385F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_il2cpp_TypeInfo_var);
		TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B* L_0 = ((TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_StaticFields*)il2cpp_codegen_static_fields_for(TextureRegistry_t888D6D46880722862102416F500D6784DDA46C1B_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureSlotManager_set_FreeSlots_m7400CBFEF9DC81345E311C521163C76973DC4255_inline (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFreeSlotsU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TextureSlotManager_get_FreeSlots_m07D624EAB6ED9D3B1F4B4EF33DB2FAB1545871D2_inline (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFreeSlotsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TextureSlotManager_MarkUsed_m6012C3110EBDC75E7B970C814CAA7147D9378126_inline (TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* __this, int32_t ___slotIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___m_Tickets_4;
		int32_t L_1 = ___slotIndex0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___m_FirstUsedTicket_6;
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7;
		L_7 = TextureSlotManager_get_FreeSlots_m07D624EAB6ED9D3B1F4B4EF33DB2FAB1545871D2_inline(__this, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = V_2;
		TextureSlotManager_set_FreeSlots_m7400CBFEF9DC81345E311C521163C76973DC4255_inline(__this, L_8, NULL);
	}

IL_0028:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___m_Tickets_4;
		int32_t L_10 = ___slotIndex0;
		int32_t L_11 = __this->___m_CurrentTicket_5;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_2;
		__this->___m_CurrentTicket_5 = L_12;
		int32_t L_13 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_13);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Min_m2D222BC18ACD4F965981EC93451DDD1D7ADFDDA0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_1, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___lhs0;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___rhs1;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_6, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_4, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_002b;
	}

IL_002b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m02FE150FD7366546FC19A36B6928512376BF64E8_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
