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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct AsyncUnityEventHandler_1_t312305416F85C749103CA86E65B1221416907D10;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.Object>
struct AsyncUnityEventHandler_1_tBF4AA24502C96346BDE45E2E41553EA862F49C72;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>
struct AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// Cysharp.Threading.Tasks.IAsyncDeselectEventHandler`1<System.String>
struct IAsyncDeselectEventHandler_1_t5927F6EB830E90BFF1C8B07D11C3BD8ACB807810;
// Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<System.String>
struct IAsyncEndEditEventHandler_1_tC21C2E23F48855CCCD3E97845EEB2292BDE75D72;
// Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IAsyncEndTextSelectionEventHandler_1_t828B720D6B3AD04EACDE472485F7E95EA4042F23;
// Cysharp.Threading.Tasks.IAsyncSelectEventHandler`1<System.String>
struct IAsyncSelectEventHandler_1_t20E1794A55656823DA168CC570D09E31B6B0BC03;
// Cysharp.Threading.Tasks.IAsyncSubmitEventHandler`1<System.String>
struct IAsyncSubmitEventHandler_1_tD1A6CAFA96AB6BF5747FFA10D28E95625034D4A0;
// Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IAsyncTextSelectionEventHandler_1_t45D03483FE3EC3CD13F6FF7617C00823624C1F71;
// Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<System.String>
struct IAsyncValueChangedEventHandler_1_t0E1D3ACD8410456F84B516DDBDA78755FA6B060C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IUniTaskAsyncEnumerable_1_t24A15F8AC4DFD0B806C2ED61703475E66CA2383C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>
struct IUniTaskAsyncEnumerable_1_t21D24EBF280887A400D5CD091891484C9FEDCB46;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String>
struct IUniTaskAsyncEnumerator_1_t058895947612B2AD5A420DB762043693B3564270;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct IUniTaskSource_1_tDE9BE65E417B26ACEE9F6C9B93CDA8F743499325;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct IUniTaskSource_1_t5D1B77E67F7B6BF0C5D85A062D530CA8DF65DE2E;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.String>
struct IUniTaskSource_1_tCBAA40E65C80D31C0F2DD3EF54A91677A718EC59;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityAction_1_tA61D95BF82C024ADDB8DDD1D151E4539994BA882;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`3<System.String,System.Int32,System.Int32>
struct UnityAction_3_t7A7A6102F3358E3083226D4228E8083EFD40EFE6;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct UnityEventHandlerAsyncEnumerable_1_t637B8CE3816C8BAF89BAD21486699C7E13965258;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.Object>
struct UnityEventHandlerAsyncEnumerable_1_t3C37171D8285700B3211BDD1557FE5696E0D7DE5;
// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.String>
struct UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8;
// UnityEngine.Events.UnityEvent`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct UnityEvent_1_t71B2F3E323D47839E9CB01838553A2148DDF3D41;
// UnityEngine.Events.UnityEvent`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_t5EE2DC870C12CB60384C5FCBB0DAD36392E701AD;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// Cysharp.Threading.Tasks.TextSelectionEventConverter
struct TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerable_1_t21D24EBF280887A400D5CD091891484C9FEDCB46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerator_1_t058895947612B2AD5A420DB762043693B3564270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBindToCoreU3Ed__2_MoveNext_m119E3D49E7322ACCE2EC1ED1E461768FDBD0425E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3138D5C22D82B5F9C894CEA317B64DB77A12B5D6 
{
};
struct Il2CppArrayBounds;

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
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

// Cysharp.Threading.Tasks.TextMeshProAsyncExtensions
struct TextMeshProAsyncExtensions_t6A0687F3B1FD1939F0C7948CBE1DBC5C3E6A54E0  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.String>
struct UniTaskCompletionSourceCore_1_t707E8C6503EDF6F9CF2D366EDBA406613909E51C 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	String_t* ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.String>
struct UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	String_t* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// UnityEngine.Events.UnityEvent`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>
struct UnityEvent_3_t5EE2DC870C12CB60384C5FCBB0DAD36392E701AD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`3<System.Object,System.Int32,System.Int32>
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	// T1 System.ValueTuple`3::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;
};

// System.ValueTuple`3<System.String,System.Int32,System.Int32>
struct ValueTuple_3_tBB9758362F3B990D56B4DB3C2871056A845EE676 
{
	// T1 System.ValueTuple`3::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UniTaskCompletionSourceCore_1_tE203360E8C54C6AAE1ADE0A0DC05A7BB9515B91C 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_3_tBB9758362F3B990D56B4DB3C2871056A845EE676 ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct UniTask_1_tD279F3941863B1275904B202780F0381D0BFCB6E 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ValueTuple_3_tBB9758362F3B990D56B4DB3C2871056A845EE676 ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495  : public RuntimeObject
{
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::unityEvent
	UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F* ___unityEvent_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_1;
};

// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.String>
struct UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8  : public RuntimeObject
{
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::unityEvent
	UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* ___unityEvent_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_1;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Cysharp.Threading.Tasks.TextSelectionEventConverter
struct TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2  : public UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F
{
	// UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32> Cysharp.Threading.Tasks.TextSelectionEventConverter::innerEvent
	UnityEvent_3_t5EE2DC870C12CB60384C5FCBB0DAD36392E701AD* ___innerEvent_4;
	// UnityEngine.Events.UnityAction`3<System.String,System.Int32,System.Int32> Cysharp.Threading.Tasks.TextSelectionEventConverter::invokeDelegate
	UnityAction_3_t7A7A6102F3358E3083226D4228E8083EFD40EFE6* ___invokeDelegate_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401  : public UnityEvent_3_t5EE2DC870C12CB60384C5FCBB0DAD36392E701AD
{
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>
struct AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B  : public RuntimeObject
{
	// UnityEngine.Events.UnityAction`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::action
	UnityAction_1_tA61D95BF82C024ADDB8DDD1D151E4539994BA882* ___action_1;
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::unityEvent
	UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F* ___unityEvent_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::registration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___registration_4;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::isDisposed
	bool ___isDisposed_5;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::callOnce
	bool ___callOnce_6;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::core
	UniTaskCompletionSourceCore_1_tE203360E8C54C6AAE1ADE0A0DC05A7BB9515B91C ___core_7;
};

struct AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___cancellationCallback_0;
};

// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>
struct AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D  : public RuntimeObject
{
	// UnityEngine.Events.UnityAction`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::action
	UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___action_1;
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::unityEvent
	UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* ___unityEvent_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::registration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___registration_4;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::isDisposed
	bool ___isDisposed_5;
	// System.Boolean Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::callOnce
	bool ___callOnce_6;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::core
	UniTaskCompletionSourceCore_1_t707E8C6503EDF6F9CF2D366EDBA406613909E51C ___core_7;
};

struct AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___cancellationCallback_0;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2
struct U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C 
{
	// System.Int32 Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Boolean Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::rebindOnError
	bool ___rebindOnError_4;
	// TMPro.TMP_Text Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::text
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text_5;
	// System.Boolean Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<repeat>5__2
	bool ___U3CrepeatU3E5__2_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<e>5__3
	RuntimeObject* ___U3CeU3E5__3_7;
	// System.Object Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_8;
	// System.Int32 Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<>u__1
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD_gshared (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.Object>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUnityEventHandler_1__ctor_m542E5D6C601E14E33B89B44000CE0970E418F74E_gshared (AsyncUnityEventHandler_1_tBF4AA24502C96346BDE45E2E41553EA862F49C72* __this, UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.Object>::OnInvokeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 AsyncUnityEventHandler_1_OnInvokeAsync_m2BD7111217367FD459220AF3B77CE50B6FDAF8EB_gshared (AsyncUnityEventHandler_1_tBF4AA24502C96346BDE45E2E41553EA862F49C72* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.Object>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventHandlerAsyncEnumerable_1__ctor_mB03700023963927ACFD0B02DDF9F12C1B64BFCF4_gshared (UnityEventHandlerAsyncEnumerable_1_t3C37171D8285700B3211BDD1557FE5696E0D7DE5* __this, UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUnityEventHandler_1__ctor_m0A05C3F298C4C26D1A08AC29DAE0A477AE9EA4EC_gshared (AsyncUnityEventHandler_1_t312305416F85C749103CA86E65B1221416907D10* __this, UnityEvent_1_t71B2F3E323D47839E9CB01838553A2148DDF3D41* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>::OnInvokeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tD279F3941863B1275904B202780F0381D0BFCB6E AsyncUnityEventHandler_1_OnInvokeAsync_mD85A764AB0EFB3BA2DA99E2070116EAF67BE0984_gshared (AsyncUnityEventHandler_1_t312305416F85C749103CA86E65B1221416907D10* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventHandlerAsyncEnumerable_1__ctor_m651AB127DB3278E62AFF2A63B40C1D4F6718500D_gshared (UnityEventHandlerAsyncEnumerable_1_t637B8CE3816C8BAF89BAD21486699C7E13965258* __this, UnityEvent_1_t71B2F3E323D47839E9CB01838553A2148DDF3D41* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine1, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;

// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___component0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindToCore(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 TextMeshProAsyncExtensions_BindToCore_mB4130881C44A5E83E08C4823FBDA0514B325EF12 (RuntimeObject* ___source0, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, bool ___rebindOnError3, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskVoid::Forget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255 (UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2>(TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD_gshared)(__this, ___stateMachine0, method);
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken,System.Boolean)
inline void AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767 (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* __this, UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method)
{
	((  void (*) (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*, UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool, const RuntimeMethod*))AsyncUnityEventHandler_1__ctor_m542E5D6C601E14E33B89B44000CE0970E418F74E_gshared)(__this, ___unityEvent0, ___cancellationToken1, ___callOnce2, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.String>::OnInvokeAsync()
inline UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0 (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C (*) (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*, const RuntimeMethod*))AsyncUnityEventHandler_1_OnInvokeAsync_m2BD7111217367FD459220AF3B77CE50B6FDAF8EB_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.String>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
inline void UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56 (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* __this, UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	((  void (*) (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*, UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UnityEventHandlerAsyncEnumerable_1__ctor_mB03700023963927ACFD0B02DDF9F12C1B64BFCF4_gshared)(__this, ___unityEvent0, ___cancellationToken1, method);
}
// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::get_onEndEdit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::get_onEndTextSelection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.TextSelectionEventConverter::.ctor(UnityEngine.Events.UnityEvent`3<System.String,System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3 (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* __this, UnityEvent_3_t5EE2DC870C12CB60384C5FCBB0DAD36392E701AD* ___unityEvent0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken,System.Boolean)
inline void AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* __this, UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, bool ___callOnce2, const RuntimeMethod* method)
{
	((  void (*) (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*, UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool, const RuntimeMethod*))AsyncUnityEventHandler_1__ctor_m0A05C3F298C4C26D1A08AC29DAE0A477AE9EA4EC_gshared)(__this, ___unityEvent0, ___cancellationToken1, ___callOnce2, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>::OnInvokeAsync()
inline UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4 (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 (*) (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*, const RuntimeMethod*))AsyncUnityEventHandler_1_OnInvokeAsync_mD85A764AB0EFB3BA2DA99E2070116EAF67BE0984_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>>::.ctor(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
inline void UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB (UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495* __this, UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F* ___unityEvent0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method)
{
	((  void (*) (UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495*, UnityEvent_1_t9AC5B62184CECE6AC791117C4F20D0E22DF2481F*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UnityEventHandlerAsyncEnumerable_1__ctor_m651AB127DB3278E62AFF2A63B40C1D4F6718500D_gshared)(__this, ___unityEvent0, ___cancellationToken1, method);
}
// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::get_onTextSelection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::get_onDeselect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::get_onSelect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::get_onSubmit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, const RuntimeMethod*))Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_gshared_inline)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__2_MoveNext_m119E3D49E7322ACCE2EC1ED1E461768FDBD0425E (U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__2_SetStateMachine_m5692002FE313522B3B72DF72C72F717FCBC4372E (U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddContinuation(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0 (int32_t ___timing0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation1, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskScheduler::PublishUnobservedTaskException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3 (Exception_t* ___ex0, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___task0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline)(__this, ___task0, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
inline int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*, const RuntimeMethod*))UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline)(__this, ___continuation0, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindTo(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshProAsyncExtensions_BindTo_mF5E7735C319065F4DEDA5E02C71905A7028C1405 (RuntimeObject* ___source0, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text1, bool ___rebindOnError2, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, text.GetCancellationTokenOnDestroy(), rebindOnError).Forget();
		RuntimeObject* L_0 = ___source0;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = ___text1;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = ___text1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		bool L_4 = ___rebindOnError2;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_5;
		L_5 = TextMeshProAsyncExtensions_BindToCore_mB4130881C44A5E83E08C4823FBDA0514B325EF12(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindTo(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMeshProAsyncExtensions_BindTo_mCA75232F60C1CF20A3414D53EDC38C41FBF7481E (RuntimeObject* ___source0, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, bool ___rebindOnError3, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, cancellationToken, rebindOnError).Forget();
		RuntimeObject* L_0 = ___source0;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = ___text1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken2;
		bool L_3 = ___rebindOnError3;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_4;
		L_4 = TextMeshProAsyncExtensions_BindToCore_mB4130881C44A5E83E08C4823FBDA0514B325EF12(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::BindToCore(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>,TMPro.TMP_Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 TextMeshProAsyncExtensions_BindToCore_mB4130881C44A5E83E08C4823FBDA0514B325EF12 (RuntimeObject* ___source0, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___text1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, bool ___rebindOnError3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		RuntimeObject* L_1 = ___source0;
		(&V_0)->___source_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___source_2), (void*)L_1);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = ___text1;
		(&V_0)->___text_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text_5), (void*)L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken2;
		(&V_0)->___cancellationToken_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_3))->____source_0), (void*)NULL);
		bool L_4 = ___rebindOnError3;
		(&V_0)->___rebindOnError_4 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD(L_5, (&V_0), AsyncUniTaskVoidMethodBuilder_Start_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m32B977B15E4FA7ADED7DD5FD65958F5CBC4E20CD_RuntimeMethod_var);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_7;
		L_7 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_6, NULL);
		return L_7;
	}
}
// Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncValueChangedEventHandler_m1EDBB4C86AFC7522BACDF1C114ADFF604EDA38B5 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_1;
		L_1 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncValueChangedEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncValueChangedEventHandler_m39CE7BD5C42EB255C0AEE5BF1F3B2DAD8C55A4A7 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_1;
		L_1 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnValueChangedAsync_mFF6914B841C9164E13839790A761BCB1A29BA161 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_1;
		L_1 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnValueChangedAsync_mB3472823796F8ED566C86760400118B998241F4D (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onValueChanged, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_1;
		L_1 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_3, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnValueChangedAsAsyncEnumerable_mCB44A220AF6B4C0545D69A49F10B5ECCFFFD61B2 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onValueChanged, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_1;
		L_1 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_4 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_4, L_1, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnValueChangedAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnValueChangedAsAsyncEnumerable_mF70C0A9D6138E51A396BA440CFCC2CEB6A40D2EA (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onValueChanged, cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_1;
		L_1 = TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_3 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_3, L_1, L_2, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndEditEventHandler_mD934CB550D761B8211C206F794CB39CC826DCEA9 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndEditEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndEditEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndEditEventHandler_mD844E5D3AA26E156898105ABF5CE8E441556C832 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnEndEditAsync_m221CC07D0F1F26FB86BF668110A83F8764049C81 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnEndEditAsync_m0DC02EE0FB250C391412854CACBDA5C281F83743 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onEndEdit, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_3, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndEditAsAsyncEnumerable_m1F6AC0ED08FB8FD49E6A27E6A081A1564E98BD44 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onEndEdit, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_4 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_4, L_1, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndEditAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndEditAsAsyncEnumerable_m700079E7632D768083538B827CA36119B026D778 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onEndEdit, cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_3 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_3, L_1, L_2, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndTextSelectionEventHandler_mF0AB4F1C74D6C6389E4143070B32D777D7928508 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_3, NULL);
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_5 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_5, L_2, L_4, (bool)0, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncEndTextSelectionEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncEndTextSelectionEventHandler_mFFE084E98BC12A712B2FB277A25CA4AF976085DE (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_4 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_4, L_2, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 TextMeshProAsyncExtensions_OnEndTextSelectionAsync_m4F0A800695F37DB06E8C57BD69B4C37B10621B3B (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_3, NULL);
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_5 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_5, L_2, L_4, (bool)1, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		NullCheck(L_5);
		UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 L_6;
		L_6 = AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4(L_5, AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 TextMeshProAsyncExtensions_OnEndTextSelectionAsync_m42A7A0AF8A7D274E648BDFCD7E20DC55E052464F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_4 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_4, L_2, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndTextSelectionAsAsyncEnumerable_mDFDD9357DEA4544F60125F22990F25658796DB76 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_3, NULL);
		UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495* L_5 = (UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB(L_5, L_2, L_4, UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnEndTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnEndTextSelectionAsAsyncEnumerable_m0AFAA86FFFD338AADF022A19C33802122283BE7C (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onEndTextSelection), cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495* L_4 = (UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB(L_4, L_2, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncTextSelectionEventHandler_mDDBBB72B2531ED202D77A5E3DA773CDD5D623A21 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_3, NULL);
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_5 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_5, L_2, L_4, (bool)0, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncTextSelectionEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncTextSelectionEventHandler_m2742A988C7C9CA07760211D191F5D54F482B3A11 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_4 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_4, L_2, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 TextMeshProAsyncExtensions_OnTextSelectionAsync_m81A110F175F841EC55FACFC23E45C250CE97A228 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_3, NULL);
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_5 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_5, L_2, L_4, (bool)1, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		NullCheck(L_5);
		UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 L_6;
		L_6 = AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4(L_5, AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		return L_6;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 TextMeshProAsyncExtensions_OnTextSelectionAsync_mAFC01F2B2019FBAC290F9DBE7810C9BAE4F01B8A (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B* L_4 = (AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tC5013224BBB9521C78AFDD092F488A1E4156C10B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB(L_4, L_2, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_m55C7F90A19C8499860FFB1C3126F4968850863DB_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_t0C9C2EF0BFCB14F0FC1973EA4219EE892BC118A2 L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m9EF7786FEA6B5937AECE7ABDA224CC6D22DE21D4_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnTextSelectionAsAsyncEnumerable_mBB84C1175FC8E06F951D227C23196B17ACE3A30F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_3, NULL);
		UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495* L_5 = (UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB(L_5, L_2, L_4, UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.ValueTuple`3<System.String,System.Int32,System.Int32>> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnTextSelectionAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnTextSelectionAsAsyncEnumerable_m316158776CE646D034A5A0D65F6D6E75E23FA281 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<(string, int, int)>(new TextSelectionEventConverter(inputField.onTextSelection), cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_1;
		L_1 = TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline(L_0, NULL);
		TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2* L_2 = (TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2*)il2cpp_codegen_object_new(TextSelectionEventConverter_t1897BDEDB645ABF9636A3373CD48BE40139BFEF2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TextSelectionEventConverter__ctor_mA2BF172D12BAEF40B4F49E10A6A96016F099EAE3(L_2, L_1, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495* L_4 = (UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_t234726AC2784C9929B75A957401046C965189495_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB(L_4, L_2, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m8A33F18109F5448EFA115F4C603D26BDB5C13EAB_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncDeselectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncDeselectEventHandler_mF5C8C5776172DD617A2EAEC0890902009D92CFC8 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncDeselectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncDeselectEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncDeselectEventHandler_m303F27DE69122E6CCC83C23A19C0E902E7A62A34 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnDeselectAsync_m6C5FD2DFF31A0FCB22E6702C0EC3AA79AF6DD3BD (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnDeselectAsync_m7480BDD03EC03883695A554F4CDCE22BBB43973E (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onDeselect, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_3, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnDeselectAsAsyncEnumerable_mFE01015BE121BECFC144FBADD1F7F362DF0FB879 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onDeselect, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_4 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_4, L_1, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnDeselectAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnDeselectAsAsyncEnumerable_mEBBECCF4997CB02D8AC68F65EC11245C5DAF5101 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onDeselect, cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_3 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_3, L_1, L_2, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.IAsyncSelectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSelectEventHandler_m751DF892F2E1278B55739D007DC2D3BDB4147F80 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncSelectEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSelectEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSelectEventHandler_mF6B72F4CE43338C3BF4AE95BA97383FD29513782 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnSelectAsync_m881BC723DCF9F0D761A73110FCD00B701389FB64 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnSelectAsync_mC0DCE01BDC120EC83F0EE6B107137D96E04EF65F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSelect, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_3, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSelectAsAsyncEnumerable_mF78590DE21EB48820B2A2749C3C75A1247E8ED82 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSelect, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_4 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_4, L_1, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSelectAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSelectAsAsyncEnumerable_m3DBC0C08757CC4781A68FA489319256D7E24B560 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSelect, cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_1;
		L_1 = TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_3 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_3, L_1, L_2, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.IAsyncSubmitEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSubmitEventHandler_m55E030225634C7BD790B54008EF331DE0FB868DE (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, inputField.GetCancellationTokenOnDestroy(), false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IAsyncSubmitEventHandler`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::GetAsyncSubmitEventHandler(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_GetAsyncSubmitEventHandler_m1611505E75254CDB63EE0E71F415316887E15140 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, cancellationToken, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)0, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsync(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnSubmitAsync_mA7C5175807D713EAC7D9762E0B2BC6C7FCD02CAA (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, inputField.GetCancellationTokenOnDestroy(), true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_4 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_4, L_1, L_3, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_4);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_5;
		L_5 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_4, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_5;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsync(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C TextMeshProAsyncExtensions_OnSubmitAsync_mCB1E8E85D98E9268C3DB50E89E83F706BCD5817F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AsyncUnityEventHandler<string>(inputField.onSubmit, cancellationToken, true).OnInvokeAsync();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D* L_3 = (AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D*)il2cpp_codegen_object_new(AsyncUnityEventHandler_1_tDD3813AA870F2A5366F5632D562AA8BDC8857D5D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767(L_3, L_1, L_2, (bool)1, AsyncUnityEventHandler_1__ctor_mB996086EF184E2C3866F27E280EDFF1E5AAE2767_RuntimeMethod_var);
		NullCheck(L_3);
		UniTask_1_tDBCAAB162E8F2F3F130A0597516FDA3113B7BB9C L_4;
		L_4 = AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0(L_3, AsyncUnityEventHandler_1_OnInvokeAsync_m16D21B1878417C8DBACD4765263BF7DFD8F230F0_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSubmitAsAsyncEnumerable_mD8EFB2760025D70842C9451675F6ADFFD04C799F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSubmit, inputField.GetCancellationTokenOnDestroy());
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline(L_0, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___inputField0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B(L_2, NULL);
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_4 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_4, L_1, L_3, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		return L_4;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String> Cysharp.Threading.Tasks.TextMeshProAsyncExtensions::OnSubmitAsAsyncEnumerable(TMPro.TMP_InputField,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextMeshProAsyncExtensions_OnSubmitAsAsyncEnumerable_mBA982E911A0BD97E996628C949116C7C3E9AAE07 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___inputField0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityEventHandlerAsyncEnumerable<string>(inputField.onSubmit, cancellationToken);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___inputField0;
		NullCheck(L_0);
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_1;
		L_1 = TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline(L_0, NULL);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___cancellationToken1;
		UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8* L_3 = (UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8*)il2cpp_codegen_object_new(UnityEventHandlerAsyncEnumerable_1_tF944B16F76D09ABE21739E81B71A29E36EE747F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56(L_3, L_1, L_2, UnityEventHandlerAsyncEnumerable_1__ctor_m03340B254266B9F1E49ED0E6D23DB43E97951F56_RuntimeMethod_var);
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
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__2_MoveNext_m119E3D49E7322ACCE2EC1ED1E461768FDBD0425E (U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerable_1_t21D24EBF280887A400D5CD091891484C9FEDCB46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerator_1_t058895947612B2AD5A420DB762043693B3564270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 3> __active_exceptions;
	Exception_t* G_B32_0 = NULL;
	Exception_t* G_B31_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_003d_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_015c_1;
			}
		}
		{
			// var repeat = false;
			__this->___U3CrepeatU3E5__2_6 = (bool)0;
		}

IL_0018_1:
		{
			// var e = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_3 = __this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken_3;
			NullCheck(L_3);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.String>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IUniTaskAsyncEnumerable_1_t21D24EBF280887A400D5CD091891484C9FEDCB46_il2cpp_TypeInfo_var, L_3, L_4);
			__this->___U3CeU3E5__3_7 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)L_5);
			__this->___U3CU3E7__wrap3_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_8), (void*)NULL);
			__this->___U3CU3E7__wrap4_9 = 0;
		}

IL_003d_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_6 = V_0;
			}

IL_0040_2:
			{
			}
			try
			{// begin try (depth: 3)
				{
					int32_t L_7 = V_0;
					if (!L_7)
					{
						goto IL_0084_3;
					}
				}
				{
					// moveNext = await e.MoveNextAsync();
					RuntimeObject* L_8 = __this->___U3CeU3E5__3_7;
					NullCheck(L_8);
					UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
					L_9 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String>::MoveNextAsync() */, IUniTaskAsyncEnumerator_1_t058895947612B2AD5A420DB762043693B3564270_il2cpp_TypeInfo_var, L_8);
					V_3 = L_9;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
					L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_3), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
					V_2 = L_10;
					bool L_11;
					L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_2), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_00a0_3;
					}
				}
				{
					int32_t L_12 = 0;
					V_0 = L_12;
					__this->___U3CU3E1__state_0 = L_12;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_13 = V_2;
					__this->___U3CU3Eu__1_10 = L_13;
					Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_10))->___task_0))->___source_0), (void*)NULL);
					AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_14 = (&__this->___U3CU3Et__builder_1);
					AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_inline(L_14, (&V_2), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_RuntimeMethod_var);
					goto IL_0204;
				}

IL_0084_3:
				{
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_15 = __this->___U3CU3Eu__1_10;
					V_2 = L_15;
					Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_16 = (&__this->___U3CU3Eu__1_10);
					il2cpp_codegen_initobj(L_16, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
					int32_t L_17 = (-1);
					V_0 = L_17;
					__this->___U3CU3E1__state_0 = L_17;
				}

IL_00a0_3:
				{
					bool L_18;
					L_18 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_2), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
					V_1 = L_18;
					// repeat = false;
					__this->___U3CrepeatU3E5__2_6 = (bool)0;
					// }
					goto IL_00d5_2;
				}
			}// end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_00b1_2;
				}
				throw e;
			}

CATCH_00b1_2:
			{// begin catch(System.Exception)
				{
					// if (ex is OperationCanceledException) return;
					if (!((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))))
					{
						goto IL_00ba_2;
					}
				}
				{
					// if (ex is OperationCanceledException) return;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00fc_2;
				}

IL_00ba_2:
				{
					// if (rebindOnError && !repeat)
					bool L_19 = __this->___rebindOnError_4;
					if (!L_19)
					{
						goto IL_00d3_2;
					}
				}
				{
					bool L_20 = __this->___U3CrepeatU3E5__2_6;
					if (L_20)
					{
						goto IL_00d3_2;
					}
				}
				{
					// repeat = true;
					__this->___U3CrepeatU3E5__2_6 = (bool)1;
					// goto BIND_AGAIN;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00f3_2;
				}

IL_00d3_2:
				{
					// throw;
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				}
			}// end catch (depth: 3)

IL_00d5_2:
			{
				// if (!moveNext) return;
				bool L_21 = V_1;
				if (!L_21)
				{
					goto IL_00fc_2;
				}
			}
			{
				// text.text = e.Current;
				TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_22 = __this->___text_5;
				RuntimeObject* L_23 = __this->___U3CeU3E5__3_7;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.String>::get_Current() */, IUniTaskAsyncEnumerator_1_t058895947612B2AD5A420DB762043693B3564270_il2cpp_TypeInfo_var, L_23);
				NullCheck(L_22);
				VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_22, L_24);
				// while (true)
				goto IL_0040_2;
			}

IL_00f3_2:
			{
				__this->___U3CU3E7__wrap4_9 = 1;
				goto IL_0111_1;
			}

IL_00fc_2:
			{
				__this->___U3CU3E7__wrap4_9 = 2;
				goto IL_0111_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0105_1;
			}
			throw e;
		}

CATCH_0105_1:
		{// begin catch(System.Object)
			V_4 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_25 = V_4;
			__this->___U3CU3E7__wrap3_8 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_8), (void*)L_25);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0111_1;
		}// end catch (depth: 2)

IL_0111_1:
		{
			// if (e != null)
			RuntimeObject* L_26 = __this->___U3CeU3E5__3_7;
			if (!L_26)
			{
				goto IL_0180_1;
			}
		}
		{
			// await e.DisposeAsync();
			RuntimeObject* L_27 = __this->___U3CeU3E5__3_7;
			NullCheck(L_27);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_28;
			L_28 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, L_27);
			V_6 = L_28;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_29;
			L_29 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_6), NULL);
			V_5 = L_29;
			bool L_30;
			L_30 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_5), NULL);
			if (L_30)
			{
				goto IL_0179_1;
			}
		}
		{
			int32_t L_31 = 1;
			V_0 = L_31;
			__this->___U3CU3E1__state_0 = L_31;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_32 = V_5;
			__this->___U3CU3Eu__2_11 = L_32;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_11))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_33 = (&__this->___U3CU3Et__builder_1);
			AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_inline(L_33, (&V_5), __this, AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_RuntimeMethod_var);
			goto IL_0204;
		}

IL_015c_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_34 = __this->___U3CU3Eu__2_11;
			V_5 = L_34;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_35 = (&__this->___U3CU3Eu__2_11);
			il2cpp_codegen_initobj(L_35, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_36 = (-1);
			V_0 = L_36;
			__this->___U3CU3E1__state_0 = L_36;
		}

IL_0179_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_5), NULL);
		}

IL_0180_1:
		{
			RuntimeObject* L_37 = __this->___U3CU3E7__wrap3_8;
			V_4 = L_37;
			RuntimeObject* L_38 = V_4;
			if (!L_38)
			{
				goto IL_01a3_1;
			}
		}
		{
			RuntimeObject* L_39 = V_4;
			Exception_t* L_40 = ((Exception_t*)IsInstClass((RuntimeObject*)L_39, Exception_t_il2cpp_TypeInfo_var));
			G_B31_0 = L_40;
			if (L_40)
			{
				G_B32_0 = L_40;
				goto IL_0199_1;
			}
		}
		{
			RuntimeObject* L_41 = V_4;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBindToCoreU3Ed__2_MoveNext_m119E3D49E7322ACCE2EC1ED1E461768FDBD0425E_RuntimeMethod_var)));
		}

IL_0199_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_42;
			L_42 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B32_0, NULL);
			NullCheck(L_42);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_42, NULL);
		}

IL_01a3_1:
		{
			int32_t L_43 = __this->___U3CU3E7__wrap4_9;
			V_7 = L_43;
			int32_t L_44 = V_7;
			if ((((int32_t)L_44) == ((int32_t)1)))
			{
				goto IL_0018_1;
			}
		}
		{
			int32_t L_45 = V_7;
			if ((!(((uint32_t)L_45) == ((uint32_t)2))))
			{
				goto IL_01ba_1;
			}
		}
		{
			goto IL_01ea;
		}

IL_01ba_1:
		{
			__this->___U3CU3E7__wrap3_8 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_8), (void*)NULL);
			__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
			goto IL_01ea;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01ca;
		}
		throw e;
	}

CATCH_01ca:
	{// begin catch(System.Exception)
		V_8 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_46 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_47 = V_8;
		AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline(L_46, L_47, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0204;
	}// end catch (depth: 1)

IL_01ea:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_7 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_7), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_48 = (&__this->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline(L_48, NULL);
	}

IL_0204:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CBindToCoreU3Ed__2_MoveNext_m119E3D49E7322ACCE2EC1ED1E461768FDBD0425E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*>(__this + _offset);
	U3CBindToCoreU3Ed__2_MoveNext_m119E3D49E7322ACCE2EC1ED1E461768FDBD0425E(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.TextMeshProAsyncExtensions/<BindToCore>d__2::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBindToCoreU3Ed__2_SetStateMachine_m5692002FE313522B3B72DF72C72F717FCBC4372E (U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncUniTaskVoidMethodBuilder_SetStateMachine_mF9EBFE4E8FBA7ABFE21AC2390B9C3748DCA0FC2C(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CBindToCoreU3Ed__2_SetStateMachine_m5692002FE313522B3B72DF72C72F717FCBC4372E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*>(__this + _offset);
	U3CBindToCoreU3Ed__2_SetStateMachine_m5692002FE313522B3B72DF72C72F717FCBC4372E(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* TMP_InputField_get_onValueChanged_m407B5F5BFD1F4B04032F6B90B06F5072F5993407_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public OnChangeEvent onValueChanged { get { return m_OnValueChanged; } set { SetPropertyUtility.SetClass(ref m_OnValueChanged, value); } }
		OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* L_0 = __this->___m_OnValueChanged_54;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* TMP_InputField_get_onEndEdit_m0CE9718C71A834CC279430E20DC7FF4F42114FD3_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public SubmitEvent onEndEdit { get { return m_OnEndEdit; } set { SetPropertyUtility.SetClass(ref m_OnEndEdit, value); } }
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_0 = __this->___m_OnEndEdit_48;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* TMP_InputField_get_onEndTextSelection_mB01ED58A536B3DCC323A974C27C50337EAC7CAD5_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public TextSelectionEvent onEndTextSelection { get { return m_OnEndTextSelection; } set { SetPropertyUtility.SetClass(ref m_OnEndTextSelection, value); } }
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_0 = __this->___m_OnEndTextSelection_53;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* TMP_InputField_get_onTextSelection_mEBA14AF8E2BAF100DE885B78385F510A8E978A33_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public TextSelectionEvent onTextSelection { get { return m_OnTextSelection; } set { SetPropertyUtility.SetClass(ref m_OnTextSelection, value); } }
		TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* L_0 = __this->___m_OnTextSelection_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* TMP_InputField_get_onDeselect_mC9429495032728AEE8FCB818D61EDFB5DC7F9B0A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public SelectionEvent onDeselect { get { return m_OnDeselect; } set { SetPropertyUtility.SetClass(ref m_OnDeselect, value); } }
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_0 = __this->___m_OnDeselect_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* TMP_InputField_get_onSelect_m6762226148A4B3265EE5FD70ED894BBE8DE86AF0_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public SelectionEvent onSelect { get { return m_OnSelect; } set { SetPropertyUtility.SetClass(ref m_OnSelect, value); } }
		SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* L_0 = __this->___m_OnSelect_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* TMP_InputField_get_onSubmit_mAA494FA0B3CFFB2916B399BD5D87C2E1AA637B90_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// public SubmitEvent onSubmit { get { return m_OnSubmit; } set { SetPropertyUtility.SetClass(ref m_OnSubmit, value); } }
		SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* L_0 = __this->___m_OnSubmit_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetException_m7492DE9DAE6EEC3DA2D1792A7B937F6CF61C6EB5_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_1 = __this->___runner_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		// UniTaskScheduler.PublishUnobservedTaskException(exception);
		Exception_t* L_3 = ___exception0;
		il2cpp_codegen_runtime_class_init_inline(UniTaskScheduler_t84B2A751057D2E43EF3E850768DC45E753B495D2_il2cpp_TypeInfo_var);
		UniTaskScheduler_PublishUnobservedTaskException_m9F6352174ED5654B0A9FB5562B6FF25A788B27D3(L_3, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_SetResult_m12336C298D2F8CED07AAB85C3DD67815E8343947_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner != null)
		RuntimeObject* L_0 = __this->___runner_0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// PlayerLoopHelper.AddContinuation(PlayerLoopTiming.LastPostLateUpdate, runner.ReturnAction);
		RuntimeObject* L_1 = __this->___runner_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2;
		L_2 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_ReturnAction() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddContinuation_m5B8F03E45A820D91B17CFA56AA93E7444BEC17E0(((int32_t)13), L_2, NULL);
		// runner = null;
		__this->___runner_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runner_0), (void*)(RuntimeObject*)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m2B81E32001DFE4FB57CDCDC8C62A3A756FC16885_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___awaiter0, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runner_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runner_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runner_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_3 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		bool L_4 = (bool)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_6 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C_m60B278598B29476A859B89F1B4651E61143B53DE_gshared_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___awaiter0, U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runner == null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runner_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTaskVoid<TStateMachine>.SetStateMachine(ref stateMachine, ref runner);
		U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C* L_1 = ___stateMachine1;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runner_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CBindToCoreU3Ed__2_t2BC07C64C5E405865F1ABF7EAEF0177C2138F75C*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runner.MoveNext);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_3 = ___awaiter0;
		RuntimeObject* L_4 = (RuntimeObject*)__this->___runner_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner::get_MoveNext() */, IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148_il2cpp_TypeInfo_var, L_4);
		Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___task0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___status0, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___status0;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m6C4775F8F4F2BEFB8118EBBA1EA621440CE84D62_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null)
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___continuation0;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0014:
	{
		// task.source.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_3 = (&__this->___task_0);
		RuntimeObject* L_4 = L_3->___source_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_7 = (&__this->___task_0);
		int16_t L_8 = L_7->___token_1;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mF4949CBF2DF2157DF862781779243C71F012C8BE_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* ___task0, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = ___task0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = (*(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m910CAB14584D75D32BB1441832737CABFEC86EB4_gshared_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_gshared_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_0 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___continuation0;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___continuation0;
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* L_7 = (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
