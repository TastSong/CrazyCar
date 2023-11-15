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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB;
// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>[]
struct KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
// UnityEngine.AnimationClipPair[]
struct AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C;
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78;
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationClipPair
struct AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// UnityEngine.AvatarMask
struct AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC;
// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7;
// System.String
struct String_t;
// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;

IL2CPP_EXTERN_C RuntimeClass* AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t52BEA003F069D47A25BB7153E6DE43A372DBD56B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00F97321929E0D7989E72D633D157BD761DD173A;
IL2CPP_EXTERN_C String_t* _stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6;
IL2CPP_EXTERN_C String_t* _stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED8CAF6321ED9631D3CB63C8A7096F3AB335255;
IL2CPP_EXTERN_C String_t* _stringLiteral35525FB236D9CB0ADE03D4D22EC8AB05BBCACEA3;
IL2CPP_EXTERN_C String_t* _stringLiteral4A3C80CF84F07DA0E7531332FF2B387B07C77760;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral51A170FF50F6F987DB39394B76A00962DAAC1D32;
IL2CPP_EXTERN_C String_t* _stringLiteral70F65AEE81F97590F7F0901232AAFE6147B87BE4;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD022D19E88CF1C2E702FF8813F493923F8AC574;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralE7306902767BBF9821FC01DF5423B33158A3F6ED;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationClip_AddEvent_m7678C740737DCE2CA8ABC4DDE8508B46FE3C1655_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableBinding_CreateAnimationOutput_mAAF4FE67781A130389ADA1BD625D42215B4C55A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorOverrideController_GetOverrides_m4C9F72BECAE151033F913C00A016E7A4A8D4E860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetCurrentAnimatorClipInfo_m7C061EE420A67B7D751A2F34D38062FDFF064ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetNextAnimatorClipInfo_m376D90AA469A7F7268B8D0E5B6930CE7095185D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetParameter_m0F1E53A9845596EA75366518BEB15733FD4E124F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Animator_t8A52E42AE54F76681838FE9E632683EF3952E883_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8;;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com;;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke;
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com;;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke;
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke;;

struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67;
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F;
struct AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C;
struct AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E;
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A;
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52;
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78;
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85;
struct StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B36B9B16FF72CF5A0EBA03D2FA162E77C86534C 
{
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>
struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t54A137CFF4A510BDA3ABF488A4EAAA421A24CAEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* ___s_emptyArray_5;
};

// UnityEngine.AnimationClipPair
struct AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819  : public RuntimeObject
{
	// UnityEngine.AnimationClip UnityEngine.AnimationClipPair::originalClip
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip_0;
	// UnityEngine.AnimationClip UnityEngine.AnimationClipPair::overrideClip
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationClipPair
struct AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_pinvoke
{
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip_0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip_1;
};
// Native definition for COM marshalling of UnityEngine.AnimationClipPair
struct AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_com
{
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip_0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip_1;
};

// UnityEngine.Animations.AnimationPlayableBinding
struct AnimationPlayableBinding_t44AB912C26E38CBC1F5027F5C96A321C3B1C1612  : public RuntimeObject
{
};

// UnityEngine.Animations.AnimationPlayableExtensions
struct AnimationPlayableExtensions_t3F93F70729DACA99F423992CFC1B380C1942AD4D  : public RuntimeObject
{
};

// UnityEngine.Animations.AnimationPlayableGraphExtensions
struct AnimationPlayableGraphExtensions_tF833C072961F30409DB4D2A1B8B1B5BAE53221B3  : public RuntimeObject
{
};

// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02  : public RuntimeObject
{
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.HumanTrait
struct HumanTrait_t4EF6FC8790C40BD5BC9D36765D43202A4FAF219C  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530  : public RuntimeObject
{
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>
struct KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
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

// UnityEngine.Animations.DiscreteEvaluationAttribute
struct DiscreteEvaluationAttribute_tF23FCB5AB01B394BF5BD84623364A965C90F8BB9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 
{
	// UnityEngine.HumanBone[] UnityEngine.HumanDescription::human
	HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52* ___human_0;
	// UnityEngine.SkeletonBone[] UnityEngine.HumanDescription::skeleton
	SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85* ___skeleton_1;
	// System.Single UnityEngine.HumanDescription::m_ArmTwist
	float ___m_ArmTwist_2;
	// System.Single UnityEngine.HumanDescription::m_ForeArmTwist
	float ___m_ForeArmTwist_3;
	// System.Single UnityEngine.HumanDescription::m_UpperLegTwist
	float ___m_UpperLegTwist_4;
	// System.Single UnityEngine.HumanDescription::m_LegTwist
	float ___m_LegTwist_5;
	// System.Single UnityEngine.HumanDescription::m_ArmStretch
	float ___m_ArmStretch_6;
	// System.Single UnityEngine.HumanDescription::m_LegStretch
	float ___m_LegStretch_7;
	// System.Single UnityEngine.HumanDescription::m_FeetSpacing
	float ___m_FeetSpacing_8;
	// System.Single UnityEngine.HumanDescription::m_GlobalScale
	float ___m_GlobalScale_9;
	// System.String UnityEngine.HumanDescription::m_RootMotionBoneName
	String_t* ___m_RootMotionBoneName_10;
	// System.Boolean UnityEngine.HumanDescription::m_HasTranslationDoF
	bool ___m_HasTranslationDoF_11;
	// System.Boolean UnityEngine.HumanDescription::m_HasExtraRoot
	bool ___m_HasExtraRoot_12;
	// System.Boolean UnityEngine.HumanDescription::m_SkeletonHasParents
	bool ___m_SkeletonHasParents_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke* ___human_0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	char* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
};
// Native definition for COM marshalling of UnityEngine.HumanDescription
struct HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com
{
	HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com* ___human_0;
	SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com* ___skeleton_1;
	float ___m_ArmTwist_2;
	float ___m_ForeArmTwist_3;
	float ___m_UpperLegTwist_4;
	float ___m_LegTwist_5;
	float ___m_ArmStretch_6;
	float ___m_LegStretch_7;
	float ___m_FeetSpacing_8;
	float ___m_GlobalScale_9;
	Il2CppChar* ___m_RootMotionBoneName_10;
	int32_t ___m_HasTranslationDoF_11;
	int32_t ___m_HasExtraRoot_12;
	int32_t ___m_SkeletonHasParents_13;
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

// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t44FFD5D3B5AEBB394182D66E2198FA398087449C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.Animations.AnimationHumanStream
struct AnimationHumanStream_t31E8EAD3F7C2C29CAE7B4EFB87AA84ECC6DCC6EC 
{
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;
};

// UnityEngine.Animations.AnimationStream
struct AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A 
{
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;
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

// UnityEngine.HumanLimit
struct HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E 
{
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;
};

// UnityEngine.MatchTargetWeightMask
struct MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 
{
	// UnityEngine.Vector3 UnityEngine.MatchTargetWeightMask::m_PositionXYZWeight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionXYZWeight_0;
	// System.Single UnityEngine.MatchTargetWeightMask::m_RotationWeight
	float ___m_RotationWeight_1;
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Animations.AnimationClipPlayable
struct AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields
{
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields
{
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields
{
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields
{
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationPlayableOutput
struct AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields
{
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields
{
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields
{
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___m_NullPlayable_1;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields
{
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___m_NullPlayable_1;
};

// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AvatarMask
struct AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;
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

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};

struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493  : public RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254
{
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* ___OnOverrideControllerDirty_4;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AnimationClipPair[]
struct AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* m_Items[1];

	inline AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* value)
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
// UnityEngine.HumanBone[]
struct HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52  : public RuntimeArray
{
	ALIGN_FIELD (8) HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 m_Items[1];

	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BoneName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HumanName_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.SkeletonBone[]
struct SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85  : public RuntimeArray
{
	ALIGN_FIELD (8) SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 m_Items[1];

	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentName_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* m_Items[1];

	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78  : public RuntimeArray
{
	ALIGN_FIELD (8) ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* m_Items[1];

	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89  : public RuntimeArray
{
	ALIGN_FIELD (8) StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* m_Items[1];

	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 m_Items[1];

	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* m_Items[1];

	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E  : public RuntimeArray
{
	ALIGN_FIELD (8) AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* m_Items[1];

	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 m_Items[1];

	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled);
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled);
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m6271FC0C165CDF09C66D50E34C9525975C466B71_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m8102AF73E5A87560D6B4DE4A1B6714C4F5972E21_gshared (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m9B6DC260339CC9A611F32C3807DE4F36A1720DE6_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_m676D4538BB6C62314B256173C5F592EFCA16AAC8 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController::Internal_Create(UnityEngine.AnimatorOverrideController,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___self0, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___controller1, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::Internal_GetClipByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_Internal_GetClipByName_m31FBDF024F4A5A99130A62518DEA736CC5177FBE (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, String_t* ___name0, bool ___returnEffectiveClip1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController::Internal_SetClipByName(System.String,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_Internal_SetClipByName_m52CA560F49002766E9B61980D07312340B195B88 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, String_t* ___name0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetClip(UnityEngine.AnimationClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetClip_m55AFB27CC2D666A280D2AE7E78D82F7AC7FE8424 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, bool ___returnEffectiveClip1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController::SetClip(UnityEngine.AnimationClip,UnityEngine.AnimationClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip1, bool ___notify2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorOverrideController::get_overridesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Capacity()
inline int32_t List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1 (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, const RuntimeMethod*))List_1_get_Capacity_m6271FC0C165CDF09C66D50E34C9525975C466B71_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110 (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m8102AF73E5A87560D6B4DE4A1B6714C4F5972E21_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::Clear()
inline void List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_inline (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, const RuntimeMethod*))List_1_Clear_m9B6DC260339CC9A611F32C3807DE4F36A1720DE6_gshared_inline)(__this, method);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOriginalClip(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOverrideClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::.ctor(TKey,TValue)
inline void KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49 (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___key0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, const RuntimeMethod*))KeyValuePair_2__ctor_m0D5C3E0BE2D37252D3F4E0F0EA9A13C9458D4950_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::Add(T)
inline void List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_inline (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* __this, KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*, KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, const RuntimeMethod*))List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline)(__this, ___item0, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::get_Key()
inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_inline (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, const RuntimeMethod* method)
{
	return ((  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>::get_Value()
inline AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_inline (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9* __this, const RuntimeMethod* method)
{
	return ((  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*) (KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.AnimatorOverrideController::SendNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClipPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPair__ctor_mD70020644551CCC04857BA2D4F7F63AD3E2159ED (AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* ___ret0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AvatarMask::GetTransformWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AvatarMask_GetTransformWeight_mB0574B9F42737B0115832C96BB8F01C5AEDB7BD2 (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___outer0, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A (TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mF656EAD29AB800127963F8A663F260E89EBF2CEC (int32_t ___instanceID0, const RuntimeMethod* method) ;
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorClipInfo_get_clip_m6205DB403EBEAEAC14DB8928FFC7EBC50142E1AC (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goalPosition1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___goalPosition1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goalRotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___goalRotation1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::GetHintPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetHintPosition_mD97BF99EB5303EAD560BFE087E07AC44E1FFF42E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_m446EFD046A753C0604A5487D9606F89A362653E2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hintPosition1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___hintPosition1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___lookAtPosition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___humanId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m29A9991C7C688D3E2B6747C769358F4C935095C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___info2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* ___info1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject* ___clips2, const RuntimeMethod* method) ;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, bool ___completeMatch6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, bool ___completeMatch6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___completeMatch0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetRecorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetRecorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Rebind(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___writeDefaultValues0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::EvaluateController(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___deltaTime0, const RuntimeMethod* method) ;
// System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___self0, const RuntimeMethod* method) ;
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, float ___inTime2, int32_t ___wrapMode3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeObject* ___evt0, const RuntimeMethod* method) ;
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeArray* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_CreateHandle_mE15186AF821904AC09E8F0DC30096BF63A812D66 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_mDB6C3A766BA756328A459D4EBB356A8F8E289FD1 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0ED3A968526682B946A2D157855A91B93CDE9A13 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_CreateHandle_m27C7AEF0B9D954591B9FB7A9EF4C92CE96037518 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_m877AC3B2ED395B0C0A7FC1E2C9E44BC7A776BABF (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_Injected_m39A68EF379AFC09A9E070474CA3E19859FB41F85 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation2, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_CreateHandle_m74B2930D89DABE9160B08D8C92D6EA6622D88A1D (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, bool ___singleLayerOptimization1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_mEEEEBA10E6AD409C8CAF16BDF7F0E89E47A91FC8 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___other0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mDA82665D20D53C1638037283DDCFE7BB2B2DD035 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, uint32_t ___layerIndex1, AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* ___mask2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, uint32_t ___layerIndex0, AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* ___mask1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m052C3DAAC09B1BADE847FB348E0FFFB228B17C26 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_CreateHandle_m9804DF3694EC65E8531F6839194AB189401AE564 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mB8466F44A261B040DBCE8BA442DA8CF7153D2212 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffsetInternal_m5C095AAB7C17821144A2CD4D7DDFE562358CC5A4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffset_mBAC88E40F6A759FACA4105EF683181D43381C8E5 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTimeInternal_m44BAF0A6EE093D0E30EC8FF99423BF6E4B832CC5 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTime_mF1F57940D8DDBCC6EBCB75A27C2372BB39DED177 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTimeInternal_mC308D81D4A82EFACED882515D17935E43298E386 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTime_m3AAA1134C4D339C84EF57FE289D33100D4971ED8 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___other0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_CreateHandle_m848549F4FA09509BCBD846D85E5E2E8DFB8CBE3B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9556CCBB3F290E53A0BA8021F06C8E83232EF706 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m616455F80B4EAE4A0CD24A29630792C62872E929 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m5D1B029F6E6BFFB521CC6CB72ACBE7EA27B28715 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mAFF1C58B8D07A6A9E92042C038231D7CC873EF11 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_CreateHandle_m98DCB979893A9C4F782B2E07EF12BD69CF838A9C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_m0C404F86C8C0FDD248BED7E153F3BEFBEEA39D37 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_Injected_mD26E05A0F2676C90B7F06E718B7843167D33FE1E (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, String_t* ___name1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle2, const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8 (const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// UnityEngine.Animator UnityEngine.Animations.AnimationPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* AnimationPlayableOutput_InternalGetTarget_m3ECC05C07DEBDD5ECCAB92A2213DA9087E43B5F2 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Animator UnityEngine.Animations.AnimationPlayableOutput::GetTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* AnimationPlayableOutput_GetTarget_m2E55D32775E0B27063F697346701A0EB5424DA9D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target1, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A (String_t* ___name0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___sourceObject1, Type_t* ___sourceType2, CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___createFunction3, const RuntimeMethod* method) ;
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target2, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Implicit(UnityEngine.Animations.AnimationPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AnimationPlayableOutput_op_Implicit_mB256AA7AA6BC0577B47399941D4B42BBC5C28DA7 (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___output0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: UnityEngine.AnimationClipPair
IL2CPP_EXTERN_C void AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshal_pinvoke(const AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819& unmarshaled, AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_pinvoke& marshaled)
{
	Exception_t* ___originalClip_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalClip' of type 'AnimationClipPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalClip_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshal_pinvoke_back(const AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_pinvoke& marshaled, AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819& unmarshaled)
{
	Exception_t* ___originalClip_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalClip' of type 'AnimationClipPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalClip_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationClipPair
IL2CPP_EXTERN_C void AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshal_pinvoke_cleanup(AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimationClipPair
IL2CPP_EXTERN_C void AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshal_com(const AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819& unmarshaled, AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_com& marshaled)
{
	Exception_t* ___originalClip_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalClip' of type 'AnimationClipPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalClip_0Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshal_com_back(const AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_com& marshaled, AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819& unmarshaled)
{
	Exception_t* ___originalClip_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'originalClip' of type 'AnimationClipPair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___originalClip_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationClipPair
IL2CPP_EXTERN_C void AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshal_com_cleanup(AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationClipPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPair__ctor_mD70020644551CCC04857BA2D4F7F63AD3E2159ED (AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void UnityEngine.AnimatorOverrideController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController__ctor_mB3C6317471A40FC19527AA7731E775AFC665CE15 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	{
		RuntimeAnimatorController__ctor_m676D4538BB6C62314B256173C5F592EFCA16AAC8(__this, NULL);
		AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3(__this, (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*)NULL, NULL);
		__this->___OnOverrideControllerDirty_4 = (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnOverrideControllerDirty_4), (void*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)NULL);
		return;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::.ctor(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController__ctor_mE9C4FCBE3FCAF3CE2601CF50D3B19CC683BC47F8 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___controller0, const RuntimeMethod* method) 
{
	{
		RuntimeAnimatorController__ctor_m676D4538BB6C62314B256173C5F592EFCA16AAC8(__this, NULL);
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_0 = ___controller0;
		AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3(__this, L_0, NULL);
		__this->___OnOverrideControllerDirty_4 = (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnOverrideControllerDirty_4), (void*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)NULL);
		return;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::Internal_Create(UnityEngine.AnimatorOverrideController,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___self0, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___controller1, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_Internal_Create_mB5271F04B0FB0E2BADDF1AD4ACDC983E80D8C2C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::Internal_Create(UnityEngine.AnimatorOverrideController,UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(___self0, ___controller1);
}
// UnityEngine.RuntimeAnimatorController UnityEngine.AnimatorOverrideController::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* AnimatorOverrideController_get_runtimeAnimatorController_mA611B48488C4A645B1FD68855A84ECC0406D2DD7 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	typedef RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* (*AnimatorOverrideController_get_runtimeAnimatorController_mA611B48488C4A645B1FD68855A84ECC0406D2DD7_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*);
	static AnimatorOverrideController_get_runtimeAnimatorController_mA611B48488C4A645B1FD68855A84ECC0406D2DD7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_get_runtimeAnimatorController_mA611B48488C4A645B1FD68855A84ECC0406D2DD7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::get_runtimeAnimatorController()");
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimatorOverrideController::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_set_runtimeAnimatorController_mDE783426F6A6283710A7D7FF96ADACB524D9BF6D (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_set_runtimeAnimatorController_mDE783426F6A6283710A7D7FF96ADACB524D9BF6D_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static AnimatorOverrideController_set_runtimeAnimatorController_mDE783426F6A6283710A7D7FF96ADACB524D9BF6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_set_runtimeAnimatorController_mDE783426F6A6283710A7D7FF96ADACB524D9BF6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_get_Item_mF0A0D7B4CB2A8E1AC31D2054827D3FF8D91B806C (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1;
		L_1 = AnimatorOverrideController_Internal_GetClipByName_m31FBDF024F4A5A99130A62518DEA736CC5177FBE(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::set_Item(System.String,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_set_Item_mE99B279ADC548ADA701C80E02CE97E38E4F453F1 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, String_t* ___name0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = ___value1;
		AnimatorOverrideController_Internal_SetClipByName_m52CA560F49002766E9B61980D07312340B195B88(__this, L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::Internal_GetClipByName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_Internal_GetClipByName_m31FBDF024F4A5A99130A62518DEA736CC5177FBE (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, String_t* ___name0, bool ___returnEffectiveClip1, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorOverrideController_Internal_GetClipByName_m31FBDF024F4A5A99130A62518DEA736CC5177FBE_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, String_t*, bool);
	static AnimatorOverrideController_Internal_GetClipByName_m31FBDF024F4A5A99130A62518DEA736CC5177FBE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_Internal_GetClipByName_m31FBDF024F4A5A99130A62518DEA736CC5177FBE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::Internal_GetClipByName(System.String,System.Boolean)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this, ___name0, ___returnEffectiveClip1);
	return icallRetVal;
}
// System.Void UnityEngine.AnimatorOverrideController::Internal_SetClipByName(System.String,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_Internal_SetClipByName_m52CA560F49002766E9B61980D07312340B195B88 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, String_t* ___name0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_Internal_SetClipByName_m52CA560F49002766E9B61980D07312340B195B88_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, String_t*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimatorOverrideController_Internal_SetClipByName_m52CA560F49002766E9B61980D07312340B195B88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_Internal_SetClipByName_m52CA560F49002766E9B61980D07312340B195B88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::Internal_SetClipByName(System.String,UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___name0, ___clip1);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::get_Item(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_get_Item_m49AB9172BFD735042B422E9347B44624DB9D11DC (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, const RuntimeMethod* method) 
{
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_0 = NULL;
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___clip0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1;
		L_1 = AnimatorOverrideController_GetClip_m55AFB27CC2D666A280D2AE7E78D82F7AC7FE8424(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::set_Item(UnityEngine.AnimationClip,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_set_Item_m02FC2BE81A2A4120D202C25CB040DA19AE9BB48A (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___value1, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___clip0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = ___value1;
		AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetClip(UnityEngine.AnimationClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetClip_m55AFB27CC2D666A280D2AE7E78D82F7AC7FE8424 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, bool ___returnEffectiveClip1, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorOverrideController_GetClip_m55AFB27CC2D666A280D2AE7E78D82F7AC7FE8424_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimatorOverrideController_GetClip_m55AFB27CC2D666A280D2AE7E78D82F7AC7FE8424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_GetClip_m55AFB27CC2D666A280D2AE7E78D82F7AC7FE8424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::GetClip(UnityEngine.AnimationClip,System.Boolean)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this, ___originalClip0, ___returnEffectiveClip1);
	return icallRetVal;
}
// System.Void UnityEngine.AnimatorOverrideController::SetClip(UnityEngine.AnimationClip,UnityEngine.AnimationClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___overrideClip1, bool ___notify2, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::SetClip(UnityEngine.AnimationClip,UnityEngine.AnimationClip,System.Boolean)");
	_il2cpp_icall_func(__this, ___originalClip0, ___overrideClip1, ___notify2);
}
// System.Void UnityEngine.AnimatorOverrideController::SendNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*);
	static AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::SendNotification()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOriginalClip(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, int32_t);
	static AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::GetOriginalClip(System.Int32)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// UnityEngine.AnimationClip UnityEngine.AnimatorOverrideController::GetOverrideClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___originalClip0, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::GetOverrideClip(UnityEngine.AnimationClip)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(__this, ___originalClip0);
	return icallRetVal;
}
// System.Int32 UnityEngine.AnimatorOverrideController::get_overridesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*);
	static AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::get_overridesCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimatorOverrideController::GetOverrides(System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_GetOverrides_m4C9F72BECAE151033F913C00A016E7A4A8D4E860 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* ___overrides0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_4 = NULL;
	bool V_5 = false;
	{
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_0 = ___overrides0;
		V_1 = (bool)((((RuntimeObject*)(List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70F65AEE81F97590F7F0901232AAFE6147B87BE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorOverrideController_GetOverrides_m4C9F72BECAE151033F913C00A016E7A4A8D4E860_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3;
		L_3 = AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE(__this, NULL);
		V_0 = L_3;
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_4 = ___overrides0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1(L_4, List_1_get_Capacity_m818935F26D064D53C0C4A1810E773386464B9FB1_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_2 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_8 = ___overrides0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110(L_8, L_9, List_1_set_Capacity_m289F9AA70DC99F5CCDA3F7A6DDE81FC72E2E1110_RuntimeMethod_var);
	}

IL_0030:
	{
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_10 = ___overrides0;
		NullCheck(L_10);
		List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_inline(L_10, List_1_Clear_mD82F03B002DC21E8F22E75BB0357052EFE4C1FD3_RuntimeMethod_var);
		V_3 = 0;
		goto IL_0060;
	}

IL_003b:
	{
		int32_t L_11 = V_3;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_12;
		L_12 = AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5(__this, L_11, NULL);
		V_4 = L_12;
		List_1_t8C97BACA6AE04395A984EF3FE95CB39BB1781797* L_13 = ___overrides0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_14 = V_4;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_15 = V_4;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_16;
		L_16 = AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13(__this, L_15, NULL);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_17;
		memset((&L_17), 0, sizeof(L_17));
		KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49((&L_17), L_14, L_16, /*hidden argument*/KeyValuePair_2__ctor_m991BEFFBBFBEF60300BDC3FCD7557D21C47DBE49_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_inline(L_13, L_17, List_1_Add_m29B0BF47A772F881E7501AE348CA661236F89A03_RuntimeMethod_var);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::ApplyOverrides(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, RuntimeObject* ___overrides0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t52BEA003F069D47A25BB7153E6DE43A372DBD56B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___overrides0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral70F65AEE81F97590F7F0901232AAFE6147B87BE4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorOverrideController_ApplyOverrides_m4882D28731BA7F28095DC1994375E38255F2DA90_RuntimeMethod_var)));
	}

IL_0014:
	{
		V_1 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		RuntimeObject* L_3 = ___overrides0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_5;
		L_5 = InterfaceFuncInvoker1< KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Item(System.Int32) */, IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var, L_3, L_4);
		V_2 = L_5;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_6;
		L_6 = KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_inline((&V_2), KeyValuePair_2_get_Key_mC04D86A491ABCCDEAB4037F4ED57AAF190E1DF1C_RuntimeMethod_var);
		RuntimeObject* L_7 = ___overrides0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9 L_9;
		L_9 = InterfaceFuncInvoker1< KeyValuePair_2_t17031FB269381984C5AB10E188C72C4A33DBA0A9, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Item(System.Int32) */, IList_1_t17CB150AE927D18DEA187CD03455E6B0968C18C8_il2cpp_TypeInfo_var, L_7, L_8);
		V_2 = L_9;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_10;
		L_10 = KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_inline((&V_2), KeyValuePair_2_get_Value_mBCC73A23F3B2223D776741005CEDDBD9570E8585_RuntimeMethod_var);
		AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025(__this, L_6, L_10, (bool)0, NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		RuntimeObject* L_13 = ___overrides0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>>::get_Count() */, ICollection_1_t52BEA003F069D47A25BB7153E6DE43A372DBD56B_il2cpp_TypeInfo_var, L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0018;
		}
	}
	{
		AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A(__this, NULL);
		return;
	}
}
// UnityEngine.AnimationClipPair[] UnityEngine.AnimatorOverrideController::get_clips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* AnimatorOverrideController_get_clips_mD6E8C35C32B3418CCC8C0970A76E36E18A32E3B3 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = AnimatorOverrideController_get_overridesCount_m4A241C738A0F2F03B7578E32F2C3342F536DE9DE(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_2 = (AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C*)(AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C*)SZArrayNew(AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0046;
	}

IL_0013:
	{
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_3 = V_1;
		int32_t L_4 = V_2;
		AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* L_5 = (AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819*)il2cpp_codegen_object_new(AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationClipPair__ctor_mD70020644551CCC04857BA2D4F7F63AD3E2159ED(L_5, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819*)L_5);
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_2;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_11;
		L_11 = AnimatorOverrideController_GetOriginalClip_m10DEA1312336A51EBC45B89E0D947836CAD4EAD5(__this, L_10, NULL);
		NullCheck(L_9);
		L_9->___originalClip_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___originalClip_0), (void*)L_11);
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_20 = L_19->___originalClip_0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_21;
		L_21 = AnimatorOverrideController_GetOverrideClip_m8F7F5831ED4E5D96FC2B2EF8FD427F14BAFA2A13(__this, L_20, NULL);
		NullCheck(L_15);
		L_15->___overrideClip_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___overrideClip_1), (void*)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0046:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		V_3 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_3;
		if (L_25)
		{
			goto IL_0013;
		}
	}
	{
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_26 = V_1;
		V_4 = L_26;
		goto IL_0053;
	}

IL_0053:
	{
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_27 = V_4;
		return L_27;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::set_clips(UnityEngine.AnimationClipPair[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_set_clips_m5EA55A1B147ED78ED4FCB0FF033013CAF6E960A9 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0005:
	{
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_0 = ___value0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_4 = L_3->___originalClip_0;
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_5 = ___value0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		AnimationClipPair_t28107455BEC0C9FBE74E0CD892DFA9A261898819* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_9 = L_8->___overrideClip_1;
		AnimatorOverrideController_SetClip_m5978905B5D13EE9626CE77000F7C620C26EDF025(__this, L_4, L_9, (bool)0, NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0021:
	{
		int32_t L_11 = V_0;
		AnimationClipPairU5BU5D_t6D40D2E173501C6C37D790E9F339F9D66615229C* L_12 = ___value0;
		NullCheck(L_12);
		V_1 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_1;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		AnimatorOverrideController_SendNotification_m370030BDB9A21AF982EBF3B68012224D02D4397A(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimatorOverrideController::PerformOverrideClipListCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_PerformOverrideClipListCleanup_mE5578B170C6E70763B20A4DF6CA6DDFF83B31E41 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimatorOverrideController_PerformOverrideClipListCleanup_mE5578B170C6E70763B20A4DF6CA6DDFF83B31E41_ftn) (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493*);
	static AnimatorOverrideController_PerformOverrideClipListCleanup_mE5578B170C6E70763B20A4DF6CA6DDFF83B31E41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorOverrideController_PerformOverrideClipListCleanup_mE5578B170C6E70763B20A4DF6CA6DDFF83B31E41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorOverrideController::PerformOverrideClipListCleanup()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA6B0AA977505FDEFDD6BCA2E941FD3A18AE1AD23 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___controller0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_0 = ___controller0;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_1 = L_0->___OnOverrideControllerDirty_4;
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_3 = ___controller0;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_4 = L_3->___OnOverrideControllerDirty_4;
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline(L_4, NULL);
	}

IL_001a:
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
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* currentDelegate = reinterpret_cast<OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenInst(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA49B11AF24CB49A9B764058DB73CE221AE54E106 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_string_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
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
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___human_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledhuman_Length = (unmarshaled.___human_0)->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke>(_unmarshaledhuman_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledhuman_Length); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke((unmarshaled.___human_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.___skeleton_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledskeleton_Length = (unmarshaled.___skeleton_1)->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke>(_unmarshaledskeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledskeleton_Length); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke((unmarshaled.___skeleton_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.___m_ArmTwist_2;
	marshaled.___m_ForeArmTwist_3 = unmarshaled.___m_ForeArmTwist_3;
	marshaled.___m_UpperLegTwist_4 = unmarshaled.___m_UpperLegTwist_4;
	marshaled.___m_LegTwist_5 = unmarshaled.___m_LegTwist_5;
	marshaled.___m_ArmStretch_6 = unmarshaled.___m_ArmStretch_6;
	marshaled.___m_LegStretch_7 = unmarshaled.___m_LegStretch_7;
	marshaled.___m_FeetSpacing_8 = unmarshaled.___m_FeetSpacing_8;
	marshaled.___m_GlobalScale_9 = unmarshaled.___m_GlobalScale_9;
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string(unmarshaled.___m_RootMotionBoneName_10);
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.___m_HasTranslationDoF_11);
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.___m_HasExtraRoot_12);
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.___m_SkeletonHasParents_13);
}
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke_back(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.___human_0 == NULL)
		{
			unmarshaled.___human_0 = reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___human_0), (void*)reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___human_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.___human_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.___skeleton_1 == NULL)
		{
			unmarshaled.___skeleton_1 = reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skeleton_1), (void*)reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___skeleton_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.___skeleton_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaledm_ArmTwist_temp_2 = 0.0f;
	unmarshaledm_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.___m_ArmTwist_2 = unmarshaledm_ArmTwist_temp_2;
	float unmarshaledm_ForeArmTwist_temp_3 = 0.0f;
	unmarshaledm_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.___m_ForeArmTwist_3 = unmarshaledm_ForeArmTwist_temp_3;
	float unmarshaledm_UpperLegTwist_temp_4 = 0.0f;
	unmarshaledm_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.___m_UpperLegTwist_4 = unmarshaledm_UpperLegTwist_temp_4;
	float unmarshaledm_LegTwist_temp_5 = 0.0f;
	unmarshaledm_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.___m_LegTwist_5 = unmarshaledm_LegTwist_temp_5;
	float unmarshaledm_ArmStretch_temp_6 = 0.0f;
	unmarshaledm_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.___m_ArmStretch_6 = unmarshaledm_ArmStretch_temp_6;
	float unmarshaledm_LegStretch_temp_7 = 0.0f;
	unmarshaledm_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.___m_LegStretch_7 = unmarshaledm_LegStretch_temp_7;
	float unmarshaledm_FeetSpacing_temp_8 = 0.0f;
	unmarshaledm_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.___m_FeetSpacing_8 = unmarshaledm_FeetSpacing_temp_8;
	float unmarshaledm_GlobalScale_temp_9 = 0.0f;
	unmarshaledm_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.___m_GlobalScale_9 = unmarshaledm_GlobalScale_temp_9;
	unmarshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_RootMotionBoneName_10), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaledm_HasTranslationDoF_temp_11 = false;
	unmarshaledm_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.___m_HasTranslationDoF_11 = unmarshaledm_HasTranslationDoF_temp_11;
	bool unmarshaledm_HasExtraRoot_temp_12 = false;
	unmarshaledm_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.___m_HasExtraRoot_12 = unmarshaledm_HasExtraRoot_temp_12;
	bool unmarshaledm_SkeletonHasParents_temp_13 = false;
	unmarshaledm_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.___m_SkeletonHasParents_13 = unmarshaledm_SkeletonHasParents_temp_13;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_pinvoke_cleanup(HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_pinvoke& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}




// Conversion methods for marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled)
{
	if (unmarshaled.___human_0 != NULL)
	{
		il2cpp_array_size_t _unmarshaledhuman_Length = (unmarshaled.___human_0)->max_length;
		marshaled.___human_0 = il2cpp_codegen_marshal_allocate_array<HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com>(_unmarshaledhuman_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledhuman_Length); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com((unmarshaled.___human_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___human_0)[i]);
		}
	}
	else
	{
		marshaled.___human_0 = NULL;
	}
	if (unmarshaled.___skeleton_1 != NULL)
	{
		il2cpp_array_size_t _unmarshaledskeleton_Length = (unmarshaled.___skeleton_1)->max_length;
		marshaled.___skeleton_1 = il2cpp_codegen_marshal_allocate_array<SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com>(_unmarshaledskeleton_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaledskeleton_Length); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com((unmarshaled.___skeleton_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (marshaled.___skeleton_1)[i]);
		}
	}
	else
	{
		marshaled.___skeleton_1 = NULL;
	}
	marshaled.___m_ArmTwist_2 = unmarshaled.___m_ArmTwist_2;
	marshaled.___m_ForeArmTwist_3 = unmarshaled.___m_ForeArmTwist_3;
	marshaled.___m_UpperLegTwist_4 = unmarshaled.___m_UpperLegTwist_4;
	marshaled.___m_LegTwist_5 = unmarshaled.___m_LegTwist_5;
	marshaled.___m_ArmStretch_6 = unmarshaled.___m_ArmStretch_6;
	marshaled.___m_LegStretch_7 = unmarshaled.___m_LegStretch_7;
	marshaled.___m_FeetSpacing_8 = unmarshaled.___m_FeetSpacing_8;
	marshaled.___m_GlobalScale_9 = unmarshaled.___m_GlobalScale_9;
	marshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_RootMotionBoneName_10);
	marshaled.___m_HasTranslationDoF_11 = static_cast<int32_t>(unmarshaled.___m_HasTranslationDoF_11);
	marshaled.___m_HasExtraRoot_12 = static_cast<int32_t>(unmarshaled.___m_HasExtraRoot_12);
	marshaled.___m_SkeletonHasParents_13 = static_cast<int32_t>(unmarshaled.___m_SkeletonHasParents_13);
}
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com_back(const HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___human_0 != NULL)
	{
		if (unmarshaled.___human_0 == NULL)
		{
			unmarshaled.___human_0 = reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___human_0), (void*)reinterpret_cast<HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*>((HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52*)SZArrayNew(HumanBoneU5BU5D_t443B81D55400778CBB921DF04BE932ABF14BAA52_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___human_0)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 _marshaled____human_0_i__unmarshaled;
			memset((&_marshaled____human_0_i__unmarshaled), 0, sizeof(_marshaled____human_0_i__unmarshaled));
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back((marshaled.___human_0)[i], _marshaled____human_0_i__unmarshaled);
			(unmarshaled.___human_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____human_0_i__unmarshaled);
		}
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		if (unmarshaled.___skeleton_1 == NULL)
		{
			unmarshaled.___skeleton_1 = reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1));
			Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___skeleton_1), (void*)reinterpret_cast<SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*>((SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85*)SZArrayNew(SkeletonBoneU5BU5D_t84722CE071EF9295326D5A84492716DBC7A15A85_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.___skeleton_1)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 _marshaled____skeleton_1_i__unmarshaled;
			memset((&_marshaled____skeleton_1_i__unmarshaled), 0, sizeof(_marshaled____skeleton_1_i__unmarshaled));
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back((marshaled.___skeleton_1)[i], _marshaled____skeleton_1_i__unmarshaled);
			(unmarshaled.___skeleton_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____skeleton_1_i__unmarshaled);
		}
	}
	float unmarshaledm_ArmTwist_temp_2 = 0.0f;
	unmarshaledm_ArmTwist_temp_2 = marshaled.___m_ArmTwist_2;
	unmarshaled.___m_ArmTwist_2 = unmarshaledm_ArmTwist_temp_2;
	float unmarshaledm_ForeArmTwist_temp_3 = 0.0f;
	unmarshaledm_ForeArmTwist_temp_3 = marshaled.___m_ForeArmTwist_3;
	unmarshaled.___m_ForeArmTwist_3 = unmarshaledm_ForeArmTwist_temp_3;
	float unmarshaledm_UpperLegTwist_temp_4 = 0.0f;
	unmarshaledm_UpperLegTwist_temp_4 = marshaled.___m_UpperLegTwist_4;
	unmarshaled.___m_UpperLegTwist_4 = unmarshaledm_UpperLegTwist_temp_4;
	float unmarshaledm_LegTwist_temp_5 = 0.0f;
	unmarshaledm_LegTwist_temp_5 = marshaled.___m_LegTwist_5;
	unmarshaled.___m_LegTwist_5 = unmarshaledm_LegTwist_temp_5;
	float unmarshaledm_ArmStretch_temp_6 = 0.0f;
	unmarshaledm_ArmStretch_temp_6 = marshaled.___m_ArmStretch_6;
	unmarshaled.___m_ArmStretch_6 = unmarshaledm_ArmStretch_temp_6;
	float unmarshaledm_LegStretch_temp_7 = 0.0f;
	unmarshaledm_LegStretch_temp_7 = marshaled.___m_LegStretch_7;
	unmarshaled.___m_LegStretch_7 = unmarshaledm_LegStretch_temp_7;
	float unmarshaledm_FeetSpacing_temp_8 = 0.0f;
	unmarshaledm_FeetSpacing_temp_8 = marshaled.___m_FeetSpacing_8;
	unmarshaled.___m_FeetSpacing_8 = unmarshaledm_FeetSpacing_temp_8;
	float unmarshaledm_GlobalScale_temp_9 = 0.0f;
	unmarshaledm_GlobalScale_temp_9 = marshaled.___m_GlobalScale_9;
	unmarshaled.___m_GlobalScale_9 = unmarshaledm_GlobalScale_temp_9;
	unmarshaled.___m_RootMotionBoneName_10 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_RootMotionBoneName_10), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_RootMotionBoneName_10));
	bool unmarshaledm_HasTranslationDoF_temp_11 = false;
	unmarshaledm_HasTranslationDoF_temp_11 = static_cast<bool>(marshaled.___m_HasTranslationDoF_11);
	unmarshaled.___m_HasTranslationDoF_11 = unmarshaledm_HasTranslationDoF_temp_11;
	bool unmarshaledm_HasExtraRoot_temp_12 = false;
	unmarshaledm_HasExtraRoot_temp_12 = static_cast<bool>(marshaled.___m_HasExtraRoot_12);
	unmarshaled.___m_HasExtraRoot_12 = unmarshaledm_HasExtraRoot_temp_12;
	bool unmarshaledm_SkeletonHasParents_temp_13 = false;
	unmarshaledm_SkeletonHasParents_temp_13 = static_cast<bool>(marshaled.___m_SkeletonHasParents_13);
	unmarshaled.___m_SkeletonHasParents_13 = unmarshaledm_SkeletonHasParents_temp_13;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanDescription
IL2CPP_EXTERN_C void HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshal_com_cleanup(HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44_marshaled_com& marshaled)
{
	if (marshaled.___human_0 != NULL)
	{
		const il2cpp_array_size_t marshaled____human_0_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____human_0_CleanupLoopCount); i++)
		{
			HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup((marshaled.___human_0)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___human_0);
		marshaled.___human_0 = NULL;
	}
	if (marshaled.___skeleton_1 != NULL)
	{
		const il2cpp_array_size_t marshaled____skeleton_1_CleanupLoopCount = 1;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(marshaled____skeleton_1_CleanupLoopCount); i++)
		{
			SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup((marshaled.___skeleton_1)[i]);
		}
		il2cpp_codegen_marshal_free(marshaled.___skeleton_1);
		marshaled.___skeleton_1 = NULL;
	}
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_RootMotionBoneName_10);
	marshaled.___m_RootMotionBoneName_10 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Avatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar__ctor_mA58012D9A6FD2A7BB88D05E58703B5619536E118 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// UnityEngine.HumanDescription UnityEngine.Avatar::get_humanDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 Avatar_get_humanDescription_m8E211B52B89B57AF6793D781C69E46F6E1217E1E (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, const RuntimeMethod* method) 
{
	HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0(__this, (&V_0), NULL);
		HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0 (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* __this, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0_ftn) (Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*, HumanDescription_tAEFC8398C9AA70799C171BC0AEE07C0031B0CD44*);
	static Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Avatar_get_humanDescription_Injected_mB2DC483AC2212729E7C92641B6FFDDB4056BF3D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Avatar::get_humanDescription_Injected(UnityEngine.HumanDescription&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AvatarMask::GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AvatarMask_GetHumanoidBodyPartActive_m9CB208B9F4A6E150B0C8335FF7F86F6DBD4C9C69 (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef bool (*AvatarMask_GetHumanoidBodyPartActive_m9CB208B9F4A6E150B0C8335FF7F86F6DBD4C9C69_ftn) (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF*, int32_t);
	static AvatarMask_GetHumanoidBodyPartActive_m9CB208B9F4A6E150B0C8335FF7F86F6DBD4C9C69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_GetHumanoidBodyPartActive_m9CB208B9F4A6E150B0C8335FF7F86F6DBD4C9C69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::GetHumanoidBodyPartActive(UnityEngine.AvatarMaskBodyPart)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Int32 UnityEngine.AvatarMask::get_transformCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AvatarMask_get_transformCount_m4217FC2AAAB139DD391FE7404096BE69EC4227F7 (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AvatarMask_get_transformCount_m4217FC2AAAB139DD391FE7404096BE69EC4227F7_ftn) (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF*);
	static AvatarMask_get_transformCount_m4217FC2AAAB139DD391FE7404096BE69EC4227F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_get_transformCount_m4217FC2AAAB139DD391FE7404096BE69EC4227F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::get_transformCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.AvatarMask::GetTransformPath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AvatarMask_GetTransformPath_m63FD27A96E20C77FCE6E164D994C8666C9900CA5 (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef String_t* (*AvatarMask_GetTransformPath_m63FD27A96E20C77FCE6E164D994C8666C9900CA5_ftn) (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF*, int32_t);
	static AvatarMask_GetTransformPath_m63FD27A96E20C77FCE6E164D994C8666C9900CA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_GetTransformPath_m63FD27A96E20C77FCE6E164D994C8666C9900CA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::GetTransformPath(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Single UnityEngine.AvatarMask::GetTransformWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AvatarMask_GetTransformWeight_mB0574B9F42737B0115832C96BB8F01C5AEDB7BD2 (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef float (*AvatarMask_GetTransformWeight_mB0574B9F42737B0115832C96BB8F01C5AEDB7BD2_ftn) (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF*, int32_t);
	static AvatarMask_GetTransformWeight_mB0574B9F42737B0115832C96BB8F01C5AEDB7BD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AvatarMask_GetTransformWeight_mB0574B9F42737B0115832C96BB8F01C5AEDB7BD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AvatarMask::GetTransformWeight(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Boolean UnityEngine.AvatarMask::GetTransformActive(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AvatarMask_GetTransformActive_m72AA5B6C5707F645496E610DA69D5736396F9AF8 (AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___index0;
		float L_1;
		L_1 = AvatarMask_GetTransformWeight_mB0574B9F42737B0115832C96BB8F01C5AEDB7BD2(__this, L_0, NULL);
		V_0 = (bool)((((float)L_1) > ((float)(0.5f)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
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
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Name_0);
	marshaled.___m_Type_1 = unmarshaled.___m_Type_1;
	marshaled.___m_DefaultFloat_2 = unmarshaled.___m_DefaultFloat_2;
	marshaled.___m_DefaultInt_3 = unmarshaled.___m_DefaultInt_3;
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.___m_DefaultBool_4);
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_back(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaledm_Type_temp_1 = 0;
	unmarshaledm_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.___m_Type_1 = unmarshaledm_Type_temp_1;
	float unmarshaledm_DefaultFloat_temp_2 = 0.0f;
	unmarshaledm_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.___m_DefaultFloat_2 = unmarshaledm_DefaultFloat_temp_2;
	int32_t unmarshaledm_DefaultInt_temp_3 = 0;
	unmarshaledm_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.___m_DefaultInt_3 = unmarshaledm_DefaultInt_temp_3;
	bool unmarshaledm_DefaultBool_temp_4 = false;
	unmarshaledm_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.___m_DefaultBool_4 = unmarshaledm_DefaultBool_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_pinvoke_cleanup(AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Name_0);
	marshaled.___m_Type_1 = unmarshaled.___m_Type_1;
	marshaled.___m_DefaultFloat_2 = unmarshaled.___m_DefaultFloat_2;
	marshaled.___m_DefaultInt_3 = unmarshaled.___m_DefaultInt_3;
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.___m_DefaultBool_4);
}
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com_back(const AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02& unmarshaled)
{
	unmarshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaledm_Type_temp_1 = 0;
	unmarshaledm_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.___m_Type_1 = unmarshaledm_Type_temp_1;
	float unmarshaledm_DefaultFloat_temp_2 = 0.0f;
	unmarshaledm_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.___m_DefaultFloat_2 = unmarshaledm_DefaultFloat_temp_2;
	int32_t unmarshaledm_DefaultInt_temp_3 = 0;
	unmarshaledm_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.___m_DefaultInt_3 = unmarshaledm_DefaultInt_temp_3;
	bool unmarshaledm_DefaultBool_temp_4 = false;
	unmarshaledm_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.___m_DefaultBool_4 = unmarshaledm_DefaultBool_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
IL2CPP_EXTERN_C void AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshal_com_cleanup(AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.AnimatorControllerParameter::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AnimatorControllerParameter::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerParameter_Equals_m9FDC3900B8DB91E9F99295CADB9574F7E1C55C71 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject* L_0 = ___o0;
		V_0 = ((AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02*)IsInstClass((RuntimeObject*)L_0, AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02_il2cpp_TypeInfo_var));
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_2 = __this->___m_Name_0;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___m_Name_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___m_Type_1;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___m_Type_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0058;
		}
	}
	{
		float L_9 = __this->___m_DefaultFloat_2;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->___m_DefaultFloat_2;
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = __this->___m_DefaultInt_3;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___m_DefaultInt_3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0058;
		}
	}
	{
		bool L_15 = __this->___m_DefaultBool_4;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->___m_DefaultBool_4;
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0059;
	}

IL_0058:
	{
		G_B7_0 = 0;
	}

IL_0059:
	{
		V_1 = (bool)G_B7_0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_GetHashCode_m145EFDAFC4D2C410BB84F8290883977340E25312 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = AnimatorControllerParameter_get_name_mEB3938ADDF296A0FB37283C987AEE6EC0F4F629E(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.AnimatorControllerParameter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerParameter__ctor_m91C7057D6AC6D38ACA5EC852D5FDA829F83C8474 (AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_Name_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_m676D4538BB6C62314B256173C5F592EFCA16AAC8 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93 (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* __this, const RuntimeMethod* method) 
{
	typedef AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* (*RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93_ftn) (RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeAnimatorController_get_animationClips_mA8F51FF202C2C41A3E9C5366ABDEE35EDFBE8F93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RuntimeAnimatorController::get_animationClips()");
	AnimationClipU5BU5D_t48CE1A495BA95608745A065C735F2D5BB8DE5A0F* icallRetVal = _il2cpp_icall_func(__this);
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
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef void (*Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animation::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m717560D2F561D9E12583AB3B435E6BC996448C3E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0(__this, 0, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m5E86FA3D4C8C7F144565B6E3962FD5CF3E51F1C0 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1;
		L_1 = Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	typedef bool (*Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_mD2F0091CD4214603FE368C658A3DB28A53D6D48F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___mode0);
	return icallRetVal;
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* L_0 = (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530*)il2cpp_codegen_object_new(Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* (*Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* icallRetVal = _il2cpp_icall_func(__this, ___index0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
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
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___outer0, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = ___outer0;
		__this->___m_Outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Outer_0), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m4A17FE0020D4C8856EFC8EF531B99723FFB2B9DF (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		int32_t L_1 = __this->___m_CurrentIndex_1;
		NullCheck(L_0);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2;
		L_2 = Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82477C155D4F7CF98317C0EEC9F5070D196AA671 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___m_CurrentIndex_1;
		__this->___m_CurrentIndex_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___m_CurrentIndex_1;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m687381C45ECBBD052447FAC06ECE9760FF23DA63 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
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
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_mB18C82530ADA40EE3BC245AAB0673941D78B779E (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	{
		TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A(__this, NULL);
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


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mBC954085B1D18B436D08E7ADE3458B91E208F3B2 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_Time_0 = (0.0f);
		__this->___m_FunctionName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FunctionName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_StringParameter_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StringParameter_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_ObjectReferenceParameter_3 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReferenceParameter_3), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL);
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StateSender_8), (void*)(AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL);
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
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Motion::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Motion_get_isLooping_mD11B7C5FFEC7BC2BC5D2AB4D3B2A06D2959DFB99 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) 
{
	typedef bool (*Motion_get_isLooping_mD11B7C5FFEC7BC2BC5D2AB4D3B2A06D2959DFB99_ftn) (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC*);
	static Motion_get_isLooping_mD11B7C5FFEC7BC2BC5D2AB4D3B2A06D2959DFB99_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Motion_get_isLooping_mD11B7C5FFEC7BC2BC5D2AB4D3B2A06D2959DFB99_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Motion::get_isLooping()");
	bool icallRetVal = _il2cpp_icall_func(__this);
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
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___humanId0, const RuntimeMethod* method) 
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___humanId0);
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
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorClipInfo_get_clip_m6205DB403EBEAEAC14DB8928FFC7EBC50142E1AC (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) 
{
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* V_0 = NULL;
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->___m_ClipInstanceID_0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		int32_t L_1 = __this->___m_ClipInstanceID_0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_2;
		L_2 = AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mF656EAD29AB800127963F8A663F260E89EBF2CEC(L_1, NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorClipInfo_get_clip_m6205DB403EBEAEAC14DB8928FFC7EBC50142E1AC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03*>(__this + _offset);
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* _returnValue;
	_returnValue = AnimatorClipInfo_get_clip_m6205DB403EBEAEAC14DB8928FFC7EBC50142E1AC(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D (AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Weight_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorClipInfo_get_weight_m1CC29E2C37B30993EFFD12161059E4AD86EE287D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mF656EAD29AB800127963F8A663F260E89EBF2CEC (int32_t ___instanceID0, const RuntimeMethod* method) 
{
	typedef AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* (*AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mF656EAD29AB800127963F8A663F260E89EBF2CEC_ftn) (int32_t);
	static AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mF656EAD29AB800127963F8A663F260E89EBF2CEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorClipInfo_InstanceIDToAnimationClipPPtr_mF656EAD29AB800127963F8A663F260E89EBF2CEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)");
	AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* icallRetVal = _il2cpp_icall_func(___instanceID0);
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
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_FullPath_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F(_thisAdjusted, method);
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
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
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
// System.Boolean UnityEngine.Animator::get_isOptimizable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isOptimizable_mEFD0F96698EF9ED2D9DB8A4DA795E78EF48088C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isOptimizable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_mA39728839F19F4E103CF2599281E6F796D2AB341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isRootPositionOrRotationControlledByCurves_mC87A9D341EA194B66C41198B0273589EB6B3605A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_humanScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_humanScale()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isInitialized_m22DA9FAA80F43CBADDD6CDA73BAAE49752E03806_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isInitialized()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_m10B455A15EB343175518CCBEE2818C2497CC678A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___name0;
		float L_1;
		L_1 = Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___id0;
		float L_1;
		L_1 = Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m018FC1B8BBA989887545ABEF5FB611087F23A4C0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m3FFF291B541476DE7EB1D6432169ECDCBEC7FCD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mBC4D952885FF7504963E5923C29481A891028FD8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1;
		L_1 = Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		bool L_1 = ___value1;
		Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m8DA635E4373A1E7D649B2BA2DEF382D87EFE603C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1;
		L_1 = Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___id0;
		int32_t L_1;
		L_1 = Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m2DF2C6DE87314918C151616FD5C39EB93EE14011 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___id0;
		Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13(__this, L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mC65B475495D9A4B01BF5BD33E2899E87245375DE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mE62E4CAE2725D8AD214D59FF459F63157818C7DF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1;
		L_1 = Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_velocity_mBEC30469C1011C8C92E7991D039D06945FF263BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_angularVelocity_m69E6F9C74F6E54F43BBB945E0E8F71CDAF4820B1 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_rootPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_rootPosition_m952907486F631E7E8E0384AE7CE86D92BB3C6E71 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_rootPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootPosition_m29463566F2F73908602CFB2A59B86310A844286F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_rootRotation_mE913E618AC95BE36524C88A77D087E67579FAF46 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_rootRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootRotation_m916D8E03CAA17B4BD68343BE6CDA3307A0E43B3F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A(__this, (&___value0), NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_applyRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_linearVelocityBlending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_linearVelocityBlending_mD41FD1EE51B7E464CE370EB70F2DAF4546DF9A7F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_linearVelocityBlending()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_linearVelocityBlending_m1F47CE5FC0467A772EBD2F4610BBD6B45F92FB2D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_animatePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_animatePhysics_m4419359F5EB230CF2C6BA7986529E3F08FFC3BC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_animatePhysics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_animatePhysics_m5701A0DE6FE0D29B4746B9A1CDA307FD1E76C819 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B2_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		NullCheck(G_B3_1);
		Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_updateMode_m63C8A41D5D0F214FB5CF554B69CFBBEB6EE141DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_updateMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_updateMode_mA21CC888FEEBC5A06099E5D33A6C7ACCC266B056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasTransformHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasTransformHierarchy_m45669F672E3EFC79FCCE1179BE17B9F8095FB946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasTransformHierarchy()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_allowConstantClipSamplingOptimization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_allowConstantClipSamplingOptimization_m21D999899FCFEFB076185D84675EEF7415604080_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_allowConstantClipSamplingOptimization()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_allowConstantClipSamplingOptimization_mD15A77BF2EDA9211776455E41D0F41F2685D7AA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_gravityWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_gravityWeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPosition_m0372578D2966019ED1CE5F3AEC1DE6F74DC6EADE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPosition_m7CFDA1C974A11D5BFC52181879A25FA8AEAFFC61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotation_mAC0517419CDE876795D7AD59253E3B4F8628091F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotation_m8763282BEFDD626963D985435E3BC3FE576E27BC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetIKPosition_m626E887B0E039C8F79D0A942D469880B05A58962 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___goal0;
		Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goalPosition1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___goalPosition1;
		Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___goalPosition1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707(__this, L_0, (&___goalPosition1), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetIKRotation_mF2969E5FBD59C125EF95AB689A9B3AAB434F79FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___goal0;
		Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goalRotation1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___goalRotation1;
		Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___goalRotation1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045(__this, L_0, (&___goalRotation1), NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKPositionWeight(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeight_mA79A863ED8F5E8095FCC9545CCB55483328B3D99 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		float L_1;
		L_1 = Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)");
	float icallRetVal = _il2cpp_icall_func(__this, ___goal0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Single UnityEngine.Animator::GetIKRotationWeight(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeight_mC376AF1B02A0C1D15072AFE215B9D371B09D3059 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		float L_1;
		L_1 = Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)");
	float icallRetVal = _il2cpp_icall_func(__this, ___goal0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKHintPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetIKHintPosition_m6FDF4F6FBFD9936686F514907126422A555BE020 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___hint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_GetHintPosition_mD97BF99EB5303EAD560BFE087E07AC44E1FFF42E(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetHintPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetHintPosition_mD97BF99EB5303EAD560BFE087E07AC44E1FFF42E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___hint0;
		Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKHintPosition_m834ACA024C8824FD458A8F3A55AE40819A660A2F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hintPosition1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___hint0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___hintPosition1;
		Animator_SetHintPosition_m446EFD046A753C0604A5487D9606F89A362653E2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_m446EFD046A753C0604A5487D9606F89A362653E2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hintPosition1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___hint0;
		Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5(__this, L_0, (&___hintPosition1), NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKHintPositionWeight(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKHintPositionWeight_m2DE07F51712E11FC8D929A149D70FE40498CD75D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___hint0;
		float L_1;
		L_1 = Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintWeightPosition_mE89238F7EB821743F245E2F9EA4BC8D3B3629830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)");
	float icallRetVal = _il2cpp_icall_func(__this, ___hint0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKHintPositionWeight(UnityEngine.AvatarIKHint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionWeight_m3F123E4F07C30ED041B3BB0616CFD9D9460910E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___hint0;
		float L_1 = ___value1;
		Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetHintWeightPosition_m5BC635B929CACB43C9D5DE73AF292A423B8BF0ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)");
	_il2cpp_icall_func(__this, ___hint0, ___value1);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_m39A2C326BDE156360972C5EEDA1F9ACEBE34A8A6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition0, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lookAtPosition0;
		Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition0, const RuntimeMethod* method) 
{
	{
		Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D(__this, (&___lookAtPosition0), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mDCC8C8792E2E23C133AF3D91A96C49BEBC828F79 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___weight0;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, (0.0f), (1.0f), (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m0C4D297E270F7E852481EFBED321020E96EBD54D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, float ___bodyWeight1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, (1.0f), (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mD0D92A24E3789891D709E0DCD84524FAE614F870 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m31AE829F22900AD67FA4840D488E1FA9E0880FB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, L_3, (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m536B18C7EC83703CF0320924D9FE13CBD93CC752 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		float L_4 = ___clampWeight4;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___weight0, ___bodyWeight1, ___headWeight2, ___eyesWeight3, ___clampWeight4);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotation(UnityEngine.HumanBodyBones,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotation_m8294EB788C2BB23708025F5E0246061827321E6D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___humanBoneId0;
		int32_t L_1;
		L_1 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_0, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation1;
		Animator_SetBoneLocalRotationInternal_m29A9991C7C688D3E2B6747C769358F4C935095C7(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m29A9991C7C688D3E2B6747C769358F4C935095C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___humanBoneId0;
		Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5(__this, L_0, (&___rotation1), NULL);
		return;
	}
}
// UnityEngine.ScriptableObject UnityEngine.Animator::GetBehaviour(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	typedef ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* (*Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Type_t*);
	static Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBehaviour_mC89D3A58B66C9579FF8980C1F06F518A8C2E489D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBehaviour(System.Type)");
	ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* icallRetVal = _il2cpp_icall_func(__this, ___type0);
	return icallRetVal;
}
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehaviours(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	typedef ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* (*Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Type_t*);
	static Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehaviours_m53FE16BAE89AAB75F82132643848FCBFDD441BFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehaviours(System.Type)");
	ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* icallRetVal = _il2cpp_icall_func(__this, ___type0);
	return icallRetVal;
}
// UnityEngine.StateMachineBehaviour[] UnityEngine.Animator::GetBehaviours(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89* Animator_GetBehaviours_m0CB79D09176BD9416D24A19702EDF37575BD9048 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89* V_0 = NULL;
	{
		int32_t L_0 = ___fullPathHash0;
		int32_t L_1 = ___layerIndex1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* L_4;
		L_4 = Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F(__this, L_0, L_1, L_3, NULL);
		V_0 = ((StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89*)IsInst((RuntimeObject*)L_4, StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89_il2cpp_TypeInfo_var));
		goto IL_001b;
	}

IL_001b:
	{
		StateMachineBehaviourU5BU5D_tFCFB3EA917F60CBC05D492DEE9AAF054B3706D89* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, Type_t* ___type2, const RuntimeMethod* method) 
{
	typedef ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* (*Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, Type_t*);
	static Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehavioursByKey_m6B3048864D1DB2483F5298842E9384599FBB8E9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)");
	ScriptableObjectU5BU5D_t1176A2F52A3170D8595E55DD1A82FDE76D120D78* icallRetVal = _il2cpp_icall_func(__this, ___fullPathHash0, ___layerIndex1, ___type2);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_stabilizeFeet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_stabilizeFeet_mB1C363699D45D67276ACA07C79FB257E1BB4F5DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_stabilizeFeet()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_stabilizeFeet(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_stabilizeFeet(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Animator::GetLayerName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerName(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___layerName0, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerIndex_mE57FA9E3A7B3308B07B79307B5BCE0688AF4B38B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerIndex(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___layerName0);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___info2, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*);
	static Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___stateInfoIndex1, ___info2);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 0, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetNextAnimatorStateInfo_m4661892C3F99329907EE3EE1C1FCB7974CDA2433 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 1, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* ___info1, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*);
	static Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___info1);
}
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9(__this, L_0, (&V_0), NULL);
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_1 = V_0;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_2 = V_1;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0, ___current1);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetCurrentAnimatorClipInfoCount_mB506E49EC0B2DD764D78A21D6AE55B4E9AAB9AE4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___layerIndex0;
		int32_t L_1;
		L_1 = Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetNextAnimatorClipInfoCount_m079742F61B3A1616C4419C82F91B84BD9D5613CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___layerIndex0;
		int32_t L_1;
		L_1 = Animator_GetAnimatorClipInfoCount_m83C02F470FEC1DAF548AB88C578B64B6B3BB8E9B(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	typedef AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* (*Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorClipInfo_m963412D4118C301408B2EAFEF1E1CB5E971D5D92_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return icallRetVal;
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	typedef AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* (*Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetNextAnimatorClipInfo_mF7B457B637128DFED6BAC15CBB45A9FE75205CFE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_t202D955679134FCCD698779FBABD2530E58CD60A* icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_m7C061EE420A67B7D751A2F34D38062FDFF064ED3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___clips1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___clips1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetCurrentAnimatorClipInfo_m7C061EE420A67B7D751A2F34D38062FDFF064ED3_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___layerIndex0;
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_4 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600(__this, L_3, (bool)1, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject* ___clips2, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool, RuntimeObject*);
	static Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___isCurrent1, ___clips2);
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_m376D90AA469A7F7268B8D0E5B6930CE7095185D3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* ___clips1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_0 = ___clips1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05ACCFE2F05290DF031B27B4C6B2AD1DC43CCDC6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetNextAnimatorClipInfo_m376D90AA469A7F7268B8D0E5B6930CE7095185D3_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___layerIndex0;
		List_1_t56EDE3B12B8F9DB1D7D9A1750D981702FECA2331* L_4 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_m98028420AD065F1B6F3DC2EB4C6C2A42B8567600(__this, L_3, (bool)0, L_4, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return icallRetVal;
}
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* (*Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameters()");
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::get_parameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameterCount_m56BDA9B508904594E1B2317A451AC3E40A12943C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameterCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimatorControllerParameter UnityEngine.Animator::GetParameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* Animator_GetParameter_m0F1E53A9845596EA75366518BEB15733FD4E124F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_0;
		L_0 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ___index0;
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_3;
		L_3 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(__this, NULL);
		NullCheck(L_3);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_5;
		L_5 = Animator_get_parameters_m3DE35688D8EBD3D1526346C7B71E468436A4463B(__this, NULL);
		NullCheck(L_5);
		V_2 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A3C80CF84F07DA0E7531332FF2B387B07C77760)), L_6, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_8 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetParameter_m0F1E53A9845596EA75366518BEB15733FD4E124F_RuntimeMethod_var)));
	}

IL_0041:
	{
		AnimatorControllerParameterU5BU5D_tAB05125F5DC0D98F59351CD7D8C9880DFFA8EA21* L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		goto IL_0047;
	}

IL_0047:
	{
		AnimatorControllerParameter_t1FA67485445446540D4F2857762C960AE6980E02* L_13 = V_3;
		return L_13;
	}
}
// System.Single UnityEngine.Animator::get_feetPivotActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_feetPivotActive()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_feetPivotActive(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_feetPivotActive(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_pivotWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotWeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_pivotPosition_m2A6E669BC43633E12BEDF96ED73AB86EAACBA11B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, bool ___completeMatch6, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___targetBodyPart2;
		float L_1 = ___startNormalizedTime4;
		float L_2 = ___targetNormalizedTime5;
		bool L_3 = ___completeMatch6;
		Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7(__this, (&___matchPosition0), (&___matchRotation1), L_0, (&___weightMask3), L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mBDD980442EC44131EFEED1EDF4FEFEE11B909576 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___weightMask3, float ___startNormalizedTime4, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___matchPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___matchRotation1;
		int32_t L_2 = ___targetBodyPart2;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___weightMask3;
		float L_4 = ___startNormalizedTime4;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, (1.0f), (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_m717CF5422596B401395BE3EDC510FFD34F85D337 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___matchPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___matchRotation1;
		int32_t L_2 = ___targetBodyPart2;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___weightMask3;
		float L_4 = ___startNormalizedTime4;
		float L_5 = ___targetNormalizedTime5;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mEFA2D3248BA083F5FA823D83B38E2306336293D3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, bool ___completeMatch6, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___matchPosition0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___matchRotation1;
		int32_t L_2 = ___targetBodyPart2;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___weightMask3;
		float L_4 = ___startNormalizedTime4;
		float L_5 = ___targetNormalizedTime5;
		bool L_6 = ___completeMatch6;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_mB031E84E81E760C7A5862324B868E76B030F8EF2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___completeMatch0, const RuntimeMethod* method) 
{
	typedef void (*Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InterruptMatchTarget(System.Boolean)");
	_il2cpp_icall_func(__this, ___completeMatch0);
}
// System.Boolean UnityEngine.Animator::get_isMatchingTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isMatchingTarget()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_speed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::ForceStateNormalizedTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ForceStateNormalizedTime_mFCEEEFD9CD18C26E7128691FCD758690E87AC305 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___normalizedTime0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___normalizedTime0;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, 0, 0, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mF3F5670768653192DE1784DDAD591E73030F80AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___fixedTransitionDuration1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = V_2;
		float L_4 = V_1;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m7F12206926BAF74D1385F1F8BAD36CBD3FDA4A51 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = V_1;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mA1271920E97C315726655B0A5C31DAE69FAC6FC2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___fixedTimeOffset3;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mD3A92E42D472130EE6948AFD9C2374334B6899B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___fixedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mC0A7F0188309753098EFF103FFA511A4377EEC55 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___fixedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m0723F8EDB1F6B0CDDF1E61914BFFBF3FD14ADD8B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m31C6FDFE566373C35F8931DE921CAAC4131F1D25 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) 
{
	typedef void (*Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, int32_t, float, float);
	static Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFadeInFixedTime_m93D7442691AF96BD416878312D71B8EBD248340D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___fixedTransitionDuration1, ___layer2, ___fixedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::WriteDefaultValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_WriteDefaultValues_m28A53BD6205B7543B56F63E841AA4F8230EDD1FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::WriteDefaultValues()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m2D91D6C458B15B186365EED0C13A178342789084 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m2710B834A3D8C5C222B2CC6BF6D307B7A138055C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m9896DFE98F7DC35199C7FDEB22E6645B6F53E998 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___normalizedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___normalizedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method) 
{
	typedef void (*Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, int32_t, float, float);
	static Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___normalizedTransitionDuration1, ___layer2, ___normalizedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mAE4ED75E850B05A529EE726E314EF15A988F37DF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m140269A1067EC377112460CAE86409FD5A61104C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m877FD25F61DCAF76F4B321153E4B37B220091C73 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mAADE5EC387F7FF8FE6846E31B1EB5A6F28CC1AAF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m51356C96303FBDAE14D5D83453424F549152E2FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m8E57011DAD1D97B8071B18115E09FB2151154E21 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___fixedTime2;
		Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method) 
{
	typedef void (*Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, float);
	static Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___fixedTime2);
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m2CA86C7A32EC02BCAD4EFD0B9CD53272BF06E025 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mF3630168236FF27D0AE2212E9CFCFC3F41542C10 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_mED55F3D6ADF43C009FBD4C447126381D954C027D(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m9B1CB1A22951C0B0758AA032F2349B6DD20E96C2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___normalizedTime2;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method) 
{
	typedef void (*Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, float);
	static Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___normalizedTime2);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mA4CA3959A5DBDA56A1B20D4B0E727FE592AAAABA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, int32_t ___layer1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mBA96F0D84A982A338EC976A5EAFE886956AEDDCE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___stateNameHash0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___targetIndex0, float ___targetNormalizedTime1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)");
	_il2cpp_icall_func(__this, ___targetIndex0, ___targetNormalizedTime1);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_targetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_targetPosition_m6A682300C052714BB55F68E192B4AD778179B43D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_targetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_targetRotation_m313EC3BE0F811C7FB61C475298BABFFAA11DA1DC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::IsControlled(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsControlled_m1B8BC43EC53313ECC236FF01E01B86AE634ABCBF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*);
	static Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsBoneTransform_m8D7D99FD916A153C9560961FC918B0C87846E983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___transform0);
	return icallRetVal;
}
// UnityEngine.Transform UnityEngine.Animator::get_avatarRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatarRoot_m6942EF35F6F2ACDF787772D405E17C3131A5CA95_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatarRoot()");
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___humanBoneId0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___humanBoneId0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = ((int32_t)55);
		Il2CppFakeBox<int32_t> L_3(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var)), (&V_1));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00F97321929E0D7989E72D633D157BD761DD173A)), L_4, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_7 = ___humanBoneId0;
		int32_t L_8;
		L_8 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857(__this, L_8, NULL);
		V_2 = L_9;
		goto IL_0043;
	}

IL_0043:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
		return L_10;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* icallRetVal = _il2cpp_icall_func(__this, ___humanBoneId0);
	return icallRetVal;
}
// UnityEngine.AnimatorCullingMode UnityEngine.Animator::get_cullingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_cullingMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::StartPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::StopPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_playbackTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_playbackTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_playbackTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_playbackTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::StartRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___frameCount0, const RuntimeMethod* method) 
{
	typedef void (*Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartRecording(System.Int32)");
	_il2cpp_icall_func(__this, ___frameCount0);
}
// System.Void UnityEngine.Animator::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopRecording()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_recorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_recorderStartTime_m9CB9520E347B1520B05052E31C4D8A701462E241 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_recorderStartTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_recorderStartTime_m968547A0E4BC7849B3D7EAB1389AA9A05EC80544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStartTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_recorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_recorderStopTime_m675F4F5DC1AEDC41C456AAEE5F96F52AEA1E59A9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_recorderStopTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_recorderStopTime_m24BC4494E05B7682F3A23C5A0B0607F4D3385BE5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStopTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AnimatorRecorderMode UnityEngine.Animator::get_recorderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_recorderMode_mB34DB4C5368F0D3BF86210F41900DF17A43B2DA0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_recorderMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* (*Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_mE10F46F893A630D1AE846EF66DC2769E3ECE5AB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254*);
	static Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::ClearInternalControllerPlayable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ClearInternalControllerPlayable_mBAE8D218945AF13E7ED60D7958F3155C341C8686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ClearInternalControllerPlayable()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, int32_t ___stateID1, const RuntimeMethod* method) 
{
	typedef bool (*Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_HasState_m9E3BEAD260AAA9FD571CB0AFEDC20F278859B833_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::HasState(System.Int32,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0, ___stateID1);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___name0, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn) (String_t*);
	static Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___name0);
	return icallRetVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* (*Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_m01E445FC754BC6F4A39639EAF68D3954580EAA67_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F*);
	static Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_avatar_mF24D7962A24C1EBF3B949E712DDA24DB11B5DAC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_avatar(UnityEngine.Avatar)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Animator::GetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetStats_m264013CFF4D9B247F2C683188CE3E0C8571197EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetStats()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Animator::get_playableGraph()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E Animator_get_playableGraph_m118650892C13ED75C535C2A32CE09641C7E3BAD7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E));
		Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F(__this, (&V_0), NULL);
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = V_0;
		V_1 = L_0;
		goto IL_0016;
	}

IL_0016:
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*);
	static Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentGraph_mDDDDABBEA3E4BBD025401F92FFFE5B71DAC9486F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(__this, ___graph0);
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, float);
	static Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_m1AA50083AAAE1DFFA7FB64502EA106795D3756B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_mB1E5C90624A736A6D98D30FF5318BC1D0C494A38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___id0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, bool);
	static Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_m08A0BC6717BF5FD3E43D3EFB2509E359C1196C00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef bool (*Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m8698CB03DDD5DF7B991EC772BC424F2A649EB950_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef bool (*Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___id0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, int32_t);
	static Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m3080217346B85D69FA5A99B2ABC64BF5E4580455_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerString_m591359704EA3449A83C698CD72EBB7A6FC5F6D9D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerString(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___id0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_mCC0A74BF79A56BC1EA634641C64B8E527B0B49E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerID_mD3E0C24AC862F049622D09933E7A3A2CDE256C13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveString(System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___name0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveID_mA4A7685A97E37887738AA0959AC83557048C87A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___id0);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m81B394E6887978F4A8A92ACF1C7138B23BFC9214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, float, float);
	static Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Boolean UnityEngine.Animator::get_layersAffectMassCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layersAffectMassCenter()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_leftFeetBottomHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_leftFeetBottomHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_rightFeetBottomHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rightFeetBottomHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_supportsOnAnimatorMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_supportsOnAnimatorMove_m1E4A235DE9899F2473AAB70B86BC4A4575F90521_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_supportsOnAnimatorMove()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::OnUpdateModeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_OnUpdateModeChanged_mCE2A9940D4A0772544234F12D1E49E89A2A6B1BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::OnUpdateModeChanged()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::OnCullingModeChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_OnCullingModeChanged_mDF02FBEF0EAB7BD09F5A6446E0CFA9DD4CC1285A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::OnCullingModeChanged()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::WriteDefaultPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_WriteDefaultPose_mF05891951318F68AED1FCDF5134B3F9B0F62C101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::WriteDefaultPose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	typedef void (*Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Update_mBF5E8B2869FD05AF4A5963C39203D85BD62E8E65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Update(System.Single)");
	_il2cpp_icall_func(__this, ___deltaTime0);
}
// System.Void UnityEngine.Animator::Rebind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_m853F9E50ACB0A29D4F144FFD851E92F346195F9F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Rebind(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___writeDefaultValues0, const RuntimeMethod* method) 
{
	typedef void (*Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Rebind_mA8163C9B7150958C0FB3F071B7ED41850BE3A130_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Rebind(System.Boolean)");
	_il2cpp_icall_func(__this, ___writeDefaultValues0);
}
// System.Void UnityEngine.Animator::ApplyBuiltinRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ApplyBuiltinRootMotion_m2ED8DAFF78DC1A0CA62CF3785692074DBC51808C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ApplyBuiltinRootMotion()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::EvaluateController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_EvaluateController_mA07519A24495A1D1B33D163005E18FC52B5954B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128(__this, (0.0f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::EvaluateController(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___deltaTime0, const RuntimeMethod* method) 
{
	typedef void (*Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_EvaluateController_m5A83794E6067230ED84A707365FB70CA9EE64128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::EvaluateController(System.Single)");
	_il2cpp_icall_func(__this, ___deltaTime0);
}
// System.String UnityEngine.Animator::GetCurrentStateName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetCurrentStateName_m9B1BE9CADE479A6BED0CD48387C73ED963CA9E6F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___layerIndex0;
		String_t* L_1;
		L_1 = Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06(__this, L_0, (bool)1, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Animator::GetNextStateName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetNextStateName_mCF8EED59CECEE48A04A27EA422EA29E5C4EB8A3E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___layerIndex0;
		String_t* L_1;
		L_1 = Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06(__this, L_0, (bool)0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateName_mEA694401BD4FC9185FFCFDFFCB7C1DCD2B1B8D06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___layerIndex0, ___current1);
	return icallRetVal;
}
// System.String UnityEngine.Animator::ResolveHash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hash0, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResolveHash_mB349EC9252F07ECD3657818C08F66FACBAA53D43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResolveHash(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___hash0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_logWarnings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_logWarnings_m625FCBAF506C623F5457D22C5A704AC6727B446F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_logWarnings(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_fireEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_fireEvents_mE0311DD2BAC5EA407BD7FC02B8EC52D4E2F27668_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_fireEvents()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_fireEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_fireEvents_mBB2DAC3B84656758453B0BABB12DF7949EDDF43C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_fireEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_keepAnimatorControllerStateOnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_keepAnimatorControllerStateOnDisable_mEBEF419822017BE487B8BD5A9118C175F50A97CE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_keepAnimatorControllerStateOnDisable_mEBEF419822017BE487B8BD5A9118C175F50A97CE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_keepAnimatorControllerStateOnDisable_mEBEF419822017BE487B8BD5A9118C175F50A97CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_keepAnimatorControllerStateOnDisable_mEBEF419822017BE487B8BD5A9118C175F50A97CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_keepAnimatorControllerStateOnDisable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_keepAnimatorControllerStateOnDisable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_keepAnimatorControllerStateOnDisable_m0F15299D72F566184637745C2DCCCA712968FDC3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_keepAnimatorControllerStateOnDisable_m0F15299D72F566184637745C2DCCCA712968FDC3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_keepAnimatorControllerStateOnDisable_m0F15299D72F566184637745C2DCCCA712968FDC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_keepAnimatorControllerStateOnDisable_m0F15299D72F566184637745C2DCCCA712968FDC3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_keepAnimatorControllerStateOnDisable(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetVector(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetVector_m8BF07F4BB4DBC9031166EE48CB5E61DD7D1F90C6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetVector_mBE09ACBB9CD91B2343B91CF4C547028CD1920BC3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetVector(System.String,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetVector_mE7EA3828CF3F35015BDC012736787472773D8D12 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::SetVector(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetVector_m89C00646839A497355E264DB9E930DCC162DC3FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetQuaternion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetQuaternion_mEF3B6820436B19567A4635C3C7D0E4DFF4A5EF66 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetQuaternion(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetQuaternion_m2F43CF4CDC5D648241847A072E5C1079681B1AA3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetQuaternion(System.String,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetQuaternion_mEA2933BB9427F2AF4C0F709CC4AE67C653D6A622 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::SetQuaternion(System.Int32,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetQuaternion_mBE23DCD9EA5BFFD39A9267FD0559CC7FC54C5A95 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator__ctor_m53346EED5CF6845390B4CB8F53C9CBE9C65D5CEA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_velocity_Injected_mB47827ADE9F826A2ECA302EB7751371A9F18A57E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_angularVelocity_Injected_m316C33CD3C5CF4F7AA8E53FEB0741B7E1C3D4537_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_rootPosition_Injected_m9F65EF589C17FECC4350D1D193C20B7741BD7312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_rootRotation_Injected_m4DF71DAF4F3EE3B4D460FAB3360E00C74027F11A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___goal0, ___ret1);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___goalPosition1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalPosition1);
}
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___ret1);
}
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___goal0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___goalRotation1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalRotation1);
}
// System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintPosition_Injected_m6BE0C46FE3B057D08BA4B111DB6340F958B33FD1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___hint0, ___ret1);
}
// System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___hint0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___hintPosition1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetHintPosition_Injected_mF7843586B3EA22A800A628735583620FFDF2ADC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___hint0, ___hintPosition1);
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___lookAtPosition0, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___lookAtPosition0);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___humanBoneId0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoneLocalRotationInternal_Injected_m4A2C1DAFEE4883C6A39D33CF56E8DC015D6A0EC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___humanBoneId0, ___rotation1);
}
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___matchPosition0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, bool ___completeMatch6, const RuntimeMethod* method) 
{
	typedef void (*Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, int32_t, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25*, float, float, bool);
	static Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)");
	_il2cpp_icall_func(__this, ___matchPosition0, ___matchRotation1, ___targetBodyPart2, ___weightMask3, ___startNormalizedTime4, ___targetNormalizedTime5, ___completeMatch6);
}
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	{
		Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443(__this, NULL);
		AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___self0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_mD9BD020CC922D1E818D0C2163D543CF7BBAF6488 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, float ___time1, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		float L_1 = ___time1;
		int32_t L_2;
		L_2 = AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97(__this, NULL);
		AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904(L_0, __this, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, float ___inTime2, int32_t ___wrapMode3, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, float, int32_t);
	static AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SampleAnimation_m1707BCA02475EBB318BA0F12C857CF5503C30904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)");
	_il2cpp_icall_func(___go0, ___clip1, ___inTime2, ___wrapMode3);
}
// System.Single UnityEngine.AnimationClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_mAD91A1C134662285F26886489AC2D8E0EC79AF41_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_startTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_startTime_m276B72F71A7E8C761AD5232ACE232388879E7B9C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_startTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_stopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_stopTime_m3823D1030E16F3ADE9B646CD249F52CEFBE5FE4D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_stopTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_mBECE2AAD43501FB8CE2E5F4302BD2989066AF242_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, float);
	static AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_m68E3FF5D77738194EFEC9279F1B3FB1FCFEEED74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, String_t* ___relativePath0, Type_t* ___type1, String_t* ___propertyName2, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve3, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, Type_t*, String_t*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___relativePath0, ___type1, ___propertyName2, ___curve3);
}
// System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_EnsureQuaternionContinuity_m9D02889DCA683AA8B285BD6A26A44B8FD615A5EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::EnsureQuaternionContinuity()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationClip::ClearCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_ClearCurves_m4544088FCCDA4CA2B5B5D3336546F3893030232C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::ClearCurves()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_wrapMode_m7D79D3FE7785D25ECCD8C16ADF289654E9BCAC97_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_wrapMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, int32_t);
	static AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_wrapMode_mC6BA022CE7B92CE00A98FA757576847319788AD6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.AnimationClip::get_localBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 AnimationClip_get_localBounds_m88CCD1318AAD9B01899E41BB16A4F83D15933348 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53(__this, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AnimationClip::set_localBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_m84BA2E46FC222551E4280B4C11BDB25B5232DB09 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___value0, const RuntimeMethod* method) 
{
	{
		AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044(__this, (&___value0), NULL);
		return;
	}
}
// System.Boolean UnityEngine.AnimationClip::get_legacy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_legacy_m2ACB9171DA504B26635D0C0CFF64D5F4DEF9C82B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_legacy()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, bool);
	static AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_mA24DEDCB86CB9439005B71B6916C09C751731377_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_humanMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_humanMotion_m34334767A9BD7E78BDCF577F14AFD10B2412FE06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_humanMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_empty_mA55084A0DDBE57E75DC412FCEE2285626E76B986_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_empty()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasGenericRootTransform_mED40404C94754A7CE75E96EF8C2CE35CB71B343F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasGenericRootTransform()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionFloatCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionFloatCurves_m66FC0D4BAF9A7BEC0A19DE07CCAB97217A4D1698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionFloatCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionCurves_m36F62751D417AC698D8D60A5C43E4EAA49B4FDAF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootCurves_mD871E5382B94163A7CA3B917BBAC50F0E1405B81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootCurves()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootMotion_mF736536B45B62D56EBD402A8A033767A88CFAE3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::AddEvent(UnityEngine.AnimationEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_AddEvent_m7678C740737DCE2CA8ABC4DDE8508B46FE3C1655 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* ___evt0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_0 = ___evt0;
		V_0 = (bool)((((RuntimeObject*)(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7306902767BBF9821FC01DF5423B33158A3F6ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationClip_AddEvent_m7678C740737DCE2CA8ABC4DDE8508B46FE3C1655_RuntimeMethod_var)));
	}

IL_0014:
	{
		AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* L_3 = ___evt0;
		AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD(__this, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeObject* ___evt0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, RuntimeObject*);
	static AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_AddEventInternal_m263CAF515A649EF219602FDFF556BAC04B3D54DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::AddEventInternal(System.Object)");
	_il2cpp_icall_func(__this, ___evt0);
}
// UnityEngine.AnimationEvent[] UnityEngine.AnimationClip::get_events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* AnimationClip_get_events_m700FBB913D1FD2E715139B5C9D9D03B6D8B0078D (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* V_0 = NULL;
	{
		RuntimeArray* L_0;
		L_0 = AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F(__this, NULL);
		V_0 = ((AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E*)Castclass((RuntimeObject*)L_0, AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationClip::set_events(UnityEngine.AnimationEvent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_events_m809F2620D1F000B644AB2A1903BEA342EFC33001 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* ___value0, const RuntimeMethod* method) 
{
	{
		AnimationEventU5BU5D_t7618D98124AE2DE212E31279AD51EB4D9CEEAA9E* L_0 = ___value0;
		AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13(__this, (RuntimeArray*)L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, RuntimeArray* ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, RuntimeArray*);
	static AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetEventsInternal_m8CA32C344715FD2B5558547DDC7ABA4604EA6F13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetEventsInternal(System.Array)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	typedef RuntimeArray* (*AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_GetEventsInternal_mF2E21B70DC3E96105B7F696767FEA06400EF805F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::GetEventsInternal()");
	RuntimeArray* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_localBounds_Injected_mC0067D51DBD55799EFCD7B1EC041DEBD1B2C7F53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___value0, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_localBounds_Injected_mDB992FAF16AA2D4E92AC432F1B98162EB10F1044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
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
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mB618EFE75A50CBAA3EE6471E64A3E2CA2A2C90FD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mC1A83A4F693AF3AB51BC592A0CE525CE4F320D6B (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mC113F0B2F53847F9A6755B82D0AC53C971171CFD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m7229D5EFBA432665B9046FC3C21D463FFD281978 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m310C17694D8D1B9D60D549259A39837F22FD3240 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0CEFF9E4946BFDC4F7066BEB4C961169DBC5073F (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m384B808E3961C6C2C375DF7487EF2B49E44E6CD7 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m491D81A9A64DE4AE02415A5909B74AE947EAE1B9 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF3130BE7BDD7C8B2470303FB1986A336E47CC98C (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mD47A506ACE251A6341115CBE5607D05C01747127 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m1A01C10E754426572C7BBA7AA13044FDA372FDFC (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mCE3B4C71868B564EE6BE4B8663535058705C3B72 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller3, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0399B12419A4F990F41BD589C833E2D2C0076762 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_mF8BB1A8851B0699FC1D85F538E16EF12C08BBB93 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___controller2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD AnimationRemoveScalePlayable_Create_mABCE46803804604412781B86B321BE816649401C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		il2cpp_codegen_runtime_class_init_inline(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2;
		L_2 = AnimationRemoveScalePlayable_CreateHandle_mE15186AF821904AC09E8F0DC30096BF63A812D66(L_0, L_1, NULL);
		V_0 = L_2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3 = V_0;
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_CreateHandle_mE15186AF821904AC09E8F0DC30096BF63A812D66 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationRemoveScalePlayable_CreateHandleInternal_mDB6C3A766BA756328A459D4EBB356A8F8E289FD1(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_5, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationRemoveScalePlayable::op_Implicit(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationRemoveScalePlayable_op_Implicit_m0658568E028F0099166238728756300A839F0606 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6((&___other0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD> L_3(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327_AdjustorThunk (RuntimeObject* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___other0, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_mDB6C3A766BA756328A459D4EBB356A8F8E289FD1 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___handle1;
		il2cpp_codegen_runtime_class_init_inline(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0ED3A968526682B946A2D157855A91B93CDE9A13((&___graph0), L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m42E614B0B33898D92DFE06CA6045698BE94DE633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0ED3A968526682B946A2D157855A91B93CDE9A13 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	typedef bool (*AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0ED3A968526682B946A2D157855A91B93CDE9A13_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0ED3A968526682B946A2D157855A91B93CDE9A13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationRemoveScalePlayable_CreateHandleInternal_Injected_m0ED3A968526682B946A2D157855A91B93CDE9A13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationRemoveScalePlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
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
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		__this->___m_Handle_0 = L_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1;
		L_1 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_4;
		L_4 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_8 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_9 = ___handle0;
		__this->___m_Handle_0 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180_AdjustorThunk (RuntimeObject* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___other0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m88506D1B15D609B818DFDC6B2BCFF42ABB41B090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 AnimationOffsetPlayable_Create_mA5D6C2A6687EC937E35D758C88300F1F0056AB39 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation2;
		int32_t L_3 = ___inputCount3;
		il2cpp_codegen_runtime_class_init_inline(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = AnimationOffsetPlayable_CreateHandle_m27C7AEF0B9D954591B9FB7A9EF4C92CE96037518(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = V_0;
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD((&L_6), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0014;
	}

IL_0014:
	{
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_CreateHandle_m27C7AEF0B9D954591B9FB7A9EF4C92CE96037518 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, int32_t ___inputCount3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___rotation2;
		il2cpp_codegen_runtime_class_init_inline(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AnimationOffsetPlayable_CreateHandleInternal_m877AC3B2ED395B0C0A7FC1E2C9E44BC7A776BABF(L_1, L_2, L_3, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6;
		L_6 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_6;
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_7 = ___inputCount3;
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_7, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_8 = V_0;
		V_2 = L_8;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationOffsetPlayable::op_Implicit(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationOffsetPlayable_op_Implicit_m0718409D76954C4C3D1F02F8B55DD39C6BC66C0F (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78((&___other0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4> L_3(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270_AdjustorThunk (RuntimeObject* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___other0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_m877AC3B2ED395B0C0A7FC1E2C9E44BC7A776BABF (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___handle3;
		il2cpp_codegen_runtime_class_init_inline(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationOffsetPlayable_CreateHandleInternal_Injected_m39A68EF379AFC09A9E070474CA3E19859FB41F85((&___graph0), (&___position1), (&___rotation2), L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m6F50D35CE1FAF52BD587DD3B440CBDE34A76B096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_CreateHandleInternal_Injected_m39A68EF379AFC09A9E070474CA3E19859FB41F85 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation2, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle3, const RuntimeMethod* method) 
{
	typedef bool (*AnimationOffsetPlayable_CreateHandleInternal_Injected_m39A68EF379AFC09A9E070474CA3E19859FB41F85_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationOffsetPlayable_CreateHandleInternal_Injected_m39A68EF379AFC09A9E070474CA3E19859FB41F85_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationOffsetPlayable_CreateHandleInternal_Injected_m39A68EF379AFC09A9E070474CA3E19859FB41F85_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___position1, ___rotation2, ___handle3);
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
// System.Void UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableExtensions_SetAnimatedPropertiesInternal_m9038247416A38E252EF0DCBCCBFE990589F4C51F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___playable0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___animatedProperties1, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableExtensions_SetAnimatedPropertiesInternal_m9038247416A38E252EF0DCBCCBFE990589F4C51F_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationPlayableExtensions_SetAnimatedPropertiesInternal_m9038247416A38E252EF0DCBCCBFE990589F4C51F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableExtensions_SetAnimatedPropertiesInternal_m9038247416A38E252EF0DCBCCBFE990589F4C51F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___playable0, ___animatedProperties1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, String_t* ___name1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle2, const RuntimeMethod* method) 
{
	typedef bool (*AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
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
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4_AdjustorThunk (RuntimeObject* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___other0, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m5ED4D3FC06BC7A51D3A48B5611F759CB00F7CF54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D AnimationLayerMixerPlayable_Create_mB080375BE13D2A1159D6AD4AB45FB10C36E389FF (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, bool ___singleLayerOptimization2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D V_1;
	memset((&V_1), 0, sizeof(V_1));
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2;
		L_2 = AnimationLayerMixerPlayable_CreateHandle_m74B2930D89DABE9160B08D8C92D6EA6622D88A1D(L_0, L_1, NULL);
		V_0 = L_2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3 = V_0;
		bool L_4 = ___singleLayerOptimization2;
		AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6((&V_1), L_3, L_4, NULL);
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_5 = V_1;
		V_2 = L_5;
		goto IL_0016;
	}

IL_0016:
	{
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_6 = V_2;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_CreateHandle_m74B2930D89DABE9160B08D8C92D6EA6622D88A1D (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationLayerMixerPlayable_CreateHandleInternal_mEEEEBA10E6AD409C8CAF16BDF7F0E89E47A91FC8(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_5, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, bool ___singleLayerOptimization1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var)));
	}

IL_0026:
	{
		bool L_5 = ___singleLayerOptimization1;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB((&___handle0), L_5, NULL);
	}

IL_0030:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = ___handle0;
		__this->___m_Handle_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, bool ___singleLayerOptimization1, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6(_thisAdjusted, ___handle0, ___singleLayerOptimization1, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationLayerMixerPlayable::op_Implicit(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationLayerMixerPlayable_op_Implicit_m50234C22795358D76242C022AF5CC90DF7C0141B (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970_AdjustorThunk (RuntimeObject* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___other0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, uint32_t ___layerIndex0, AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* ___mask1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		uint32_t L_0 = ___layerIndex0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_1 = (&__this->___m_Handle_0);
		int32_t L_2;
		L_2 = PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121(L_1, NULL);
		V_0 = (bool)((((int32_t)((((int64_t)((int64_t)(uint64_t)L_0)) < ((int64_t)((int64_t)L_2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		uint32_t L_4 = ___layerIndex0;
		uint32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)), &L_5);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_7 = (&__this->___m_Handle_0);
		int32_t L_8;
		L_8 = PlayableHandle_GetInputCount_m7FE60883E4B7C9AF7D39F28A044924ADBD5E5121(L_7, NULL);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral35525FB236D9CB0ADE03D4D22EC8AB05BBCACEA3)), L_6, L_10, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51A170FF50F6F987DB39394B76A00962DAAC1D32)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280_RuntimeMethod_var)));
	}

IL_0045:
	{
		AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* L_13 = ___mask1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_16 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ED8CAF6321ED9631D3CB63C8A7096F3AB335255)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280_RuntimeMethod_var)));
	}

IL_005b:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_17 = (&__this->___m_Handle_0);
		uint32_t L_18 = ___layerIndex0;
		AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* L_19 = ___mask1;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mDA82665D20D53C1638037283DDCFE7BB2B2DD035(L_17, L_18, L_19, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280_AdjustorThunk (RuntimeObject* __this, uint32_t ___layerIndex0, AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* ___mask1, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMask_mC4BDE2B476AC13C31053100085FAF6BC86000280(_thisAdjusted, ___layerIndex0, ___mask1, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_mEEEEBA10E6AD409C8CAF16BDF7F0E89E47A91FC8 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___handle1;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m052C3DAAC09B1BADE847FB348E0FFFB228B17C26((&___graph0), L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mDA82665D20D53C1638037283DDCFE7BB2B2DD035 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, uint32_t ___layerIndex1, AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF* ___mask2, const RuntimeMethod* method) 
{
	typedef void (*AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mDA82665D20D53C1638037283DDCFE7BB2B2DD035_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, uint32_t, AvatarMask_tC1D777FFB77C952502ECF6D80FAFAD16B27B02AF*);
	static AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mDA82665D20D53C1638037283DDCFE7BB2B2DD035_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal_mDA82665D20D53C1638037283DDCFE7BB2B2DD035_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)");
	_il2cpp_icall_func(___handle0, ___layerIndex1, ___mask2);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m27A78F2EB8840FFCC84901AB4E916ACCE8D8E49B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6((&L_1), L_0, (bool)1, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m052C3DAAC09B1BADE847FB348E0FFFB228B17C26 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	typedef bool (*AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m052C3DAAC09B1BADE847FB348E0FFFB228B17C26_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m052C3DAAC09B1BADE847FB348E0FFFB228B17C26_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_CreateHandleInternal_Injected_m052C3DAAC09B1BADE847FB348E0FFFB228B17C26_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
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
// UnityEngine.Animations.AnimationClipPlayable UnityEngine.Animations.AnimationClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 AnimationClipPlayable_Create_m034A4A30AC2642E675B95A0A7C3C384F533F5C1A (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_1 = ___clip1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2;
		L_2 = AnimationClipPlayable_CreateHandle_m9804DF3694EC65E8531F6839194AB189401AE564(L_0, L_1, NULL);
		V_0 = L_2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3 = V_0;
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_CreateHandle_m9804DF3694EC65E8531F6839194AB189401AE564 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_2 = ___clip1;
		bool L_3;
		L_3 = AnimationClipPlayable_CreateHandleInternal_mB8466F44A261B040DBCE8BA442DA8CF7153D2212(L_1, L_2, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5;
		L_5 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_5;
		goto IL_0023;
	}

IL_001f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969_m9AA33A8596A6C41CAA768B0A6EF59B75658A1FB8_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD022D19E88CF1C2E702FF8813F493923F8AC574)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable__ctor_mF2EE31CC772B100F98CCAE26963059C6C722FA1A(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationClipPlayable::op_Implicit(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationClipPlayable_op_Implicit_m112BA2303DA5A9A8E24310332E3C27E13F74A0FD (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4_AdjustorThunk (RuntimeObject* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___other0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIK(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable_SetApplyFootIK_m7CBA77F56815AD21784AC53D9EBDAE18AFA48507(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffset_mBAC88E40F6A759FACA4105EF683181D43381C8E5 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AnimationClipPlayable_SetRemoveStartOffsetInternal_m5C095AAB7C17821144A2CD4D7DDFE562358CC5A4(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetRemoveStartOffset_mBAC88E40F6A759FACA4105EF683181D43381C8E5_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable_SetRemoveStartOffset_mBAC88E40F6A759FACA4105EF683181D43381C8E5(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTime_mF1F57940D8DDBCC6EBCB75A27C2372BB39DED177 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AnimationClipPlayable_SetOverrideLoopTimeInternal_m44BAF0A6EE093D0E30EC8FF99423BF6E4B832CC5(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetOverrideLoopTime_mF1F57940D8DDBCC6EBCB75A27C2372BB39DED177_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable_SetOverrideLoopTime_mF1F57940D8DDBCC6EBCB75A27C2372BB39DED177(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTime_m3AAA1134C4D339C84EF57FE289D33100D4971ED8 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AnimationClipPlayable_SetLoopTimeInternal_mC308D81D4A82EFACED882515D17935E43298E386(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationClipPlayable_SetLoopTime_m3AAA1134C4D339C84EF57FE289D33100D4971ED8_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	AnimationClipPlayable_SetLoopTime_m3AAA1134C4D339C84EF57FE289D33100D4971ED8(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_mB8466F44A261B040DBCE8BA442DA8CF7153D2212 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___clip1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_1 = ___handle2;
		bool L_2;
		L_2 = AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B((&___graph0), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetApplyFootIKInternal_m57C77DC9937F7BA02885EEBF5D7CDC1CF9412DFC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetRemoveStartOffsetInternal_m5C095AAB7C17821144A2CD4D7DDFE562358CC5A4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationClipPlayable_SetRemoveStartOffsetInternal_m5C095AAB7C17821144A2CD4D7DDFE562358CC5A4_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationClipPlayable_SetRemoveStartOffsetInternal_m5C095AAB7C17821144A2CD4D7DDFE562358CC5A4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetRemoveStartOffsetInternal_m5C095AAB7C17821144A2CD4D7DDFE562358CC5A4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetOverrideLoopTimeInternal_m44BAF0A6EE093D0E30EC8FF99423BF6E4B832CC5 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationClipPlayable_SetOverrideLoopTimeInternal_m44BAF0A6EE093D0E30EC8FF99423BF6E4B832CC5_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationClipPlayable_SetOverrideLoopTimeInternal_m44BAF0A6EE093D0E30EC8FF99423BF6E4B832CC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetOverrideLoopTimeInternal_m44BAF0A6EE093D0E30EC8FF99423BF6E4B832CC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetOverrideLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClipPlayable_SetLoopTimeInternal_mC308D81D4A82EFACED882515D17935E43298E386 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationClipPlayable_SetLoopTimeInternal_mC308D81D4A82EFACED882515D17935E43298E386_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationClipPlayable_SetLoopTimeInternal_mC308D81D4A82EFACED882515D17935E43298E386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_SetLoopTimeInternal_mC308D81D4A82EFACED882515D17935E43298E386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::SetLoopTimeInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___clip1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) 
{
	typedef bool (*AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClipPlayable_CreateHandleInternal_Injected_m4FD6B80E5194144660D7974F13F44BA0355C6E3B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___clip1, ___handle2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B((&___other0), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C> L_3(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3_AdjustorThunk (RuntimeObject* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___other0, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mFA5FE84F06C8E9A89C07190055BC898525F897C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Create(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 AnimationMotionXToDeltaPlayable_Create_m9F2C95194E1B5F76A0399BDE8FCEF33A80B77F73 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMotionXToDeltaPlayable_CreateHandle_m848549F4FA09509BCBD846D85E5E2E8DFB8CBE3B(L_0, NULL);
		V_0 = L_1;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2 = V_0;
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_3;
		memset((&L_3), 0, sizeof(L_3));
		AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940((&L_3), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_CreateHandle_m848549F4FA09509BCBD846D85E5E2E8DFB8CBE3B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9556CCBB3F290E53A0BA8021F06C8E83232EF706(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), 1, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = V_0;
		V_2 = L_5;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::op_Implicit(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationMotionXToDeltaPlayable_op_Implicit_m1AC02CC4C55FD3550D6DFFFB7ADF960BD7D6E35D (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC_AdjustorThunk (RuntimeObject* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___other0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m5D1B029F6E6BFFB521CC6CB72ACBE7EA27B28715 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m616455F80B4EAE4A0CD24A29630792C62872E929(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m5D1B029F6E6BFFB521CC6CB72ACBE7EA27B28715_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	AnimationMotionXToDeltaPlayable_SetAbsoluteMotion_m5D1B029F6E6BFFB521CC6CB72ACBE7EA27B28715(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_m9556CCBB3F290E53A0BA8021F06C8E83232EF706 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___handle1;
		il2cpp_codegen_runtime_class_init_inline(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mAFF1C58B8D07A6A9E92042C038231D7CC873EF11((&___graph0), L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m616455F80B4EAE4A0CD24A29630792C62872E929 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m616455F80B4EAE4A0CD24A29630792C62872E929_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m616455F80B4EAE4A0CD24A29630792C62872E929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMotionXToDeltaPlayable_SetAbsoluteMotionInternal_m616455F80B4EAE4A0CD24A29630792C62872E929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMotionXToDeltaPlayable::SetAbsoluteMotionInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___handle0, ___value1);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m4FC582F607F00D5E2A6B97219D2D4150AFA42AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mAFF1C58B8D07A6A9E92042C038231D7CC873EF11 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	typedef bool (*AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mAFF1C58B8D07A6A9E92042C038231D7CC873EF11_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mAFF1C58B8D07A6A9E92042C038231D7CC873EF11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected_mAFF1C58B8D07A6A9E92042C038231D7CC873EF11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
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
// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 AnimationMixerPlayable_Create_m4136E1F8A7BF26D3DE52C68111F8E1D789A7A8F3 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		il2cpp_codegen_runtime_class_init_inline(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_2;
		L_2 = AnimationMixerPlayable_CreateHandle_m98DCB979893A9C4F782B2E07EF12BD69CF838A9C(L_0, L_1, NULL);
		V_0 = L_2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3 = V_0;
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_CreateHandle_m98DCB979893A9C4F782B2E07EF12BD69CF838A9C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_0 = L_0;
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_1 = ___graph0;
		il2cpp_codegen_runtime_class_init_inline(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = AnimationMixerPlayable_CreateHandleInternal_m0C404F86C8C0FDD248BED7E153F3BEFBEEA39D37(L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		V_2 = L_4;
		goto IL_002b;
	}

IL_001e:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_5, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED((&___handle0), PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Animations.AnimationMixerPlayable::op_Implicit(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AnimationMixerPlayable_op_Implicit_m7B2D50F94CD0EE3E66478A560CC929BE7C985323 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E_AdjustorThunk (RuntimeObject* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___other0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal(UnityEngine.Playables.PlayableGraph,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_m0C404F86C8C0FDD248BED7E153F3BEFBEEA39D37 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = ___handle1;
		il2cpp_codegen_runtime_class_init_inline(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = AnimationMixerPlayable_CreateHandleInternal_Injected_mD26E05A0F2676C90B7F06E718B7843167D33FE1E((&___graph0), L_0, NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m7D67E8E778387293AF1ACB1FDBE6ADA3E456A969 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_CreateHandleInternal_Injected_mD26E05A0F2676C90B7F06E718B7843167D33FE1E (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle1, const RuntimeMethod* method) 
{
	typedef bool (*AnimationMixerPlayable_CreateHandleInternal_Injected_mD26E05A0F2676C90B7F06E718B7843167D33FE1E_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AnimationMixerPlayable_CreateHandleInternal_Injected_mD26E05A0F2676C90B7F06E718B7843167D33FE1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationMixerPlayable_CreateHandleInternal_Injected_mD26E05A0F2676C90B7F06E718B7843167D33FE1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___handle1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target2, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___name1;
		bool L_1;
		L_1 = AnimationPlayableGraphExtensions_InternalCreateAnimationOutput_m2FBE35C9ADFA39052F34E49F46E39CEBD10F4B49((&___graph0), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_3;
		L_3 = AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&V_1), L_4, NULL);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = ___target2;
		AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE((&V_1), L_5, NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793((&___handle0), PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E_mDA87D18E66EB65AFF53F5AD517C7FBA69DD6D793_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1767A709DBA16BACAD77F5ED6AF9CBBD95D35D4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_get_Null_mDF5638798B49F3E7ACCF766C266D7F776E553900 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m656E8D2549FA031DA8A2EA5B39CE3B33D75B69F8(NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Implicit(UnityEngine.Animations.AnimationPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AnimationPlayableOutput_op_Implicit_mB256AA7AA6BC0577B47399941D4B42BBC5C28DA7 (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E ___output0, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AnimationPlayableOutput_GetHandle_m2A8E2A9CBD12EDCF48FC946445AB42802083338D((&___output0), NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Animations.AnimationPlayableOutput UnityEngine.Animations.AnimationPlayableOutput::op_Explicit(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E AnimationPlayableOutput_op_Explicit_m7139943338A06A1B3DE71DF52A0D253C6DC8877E (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___output0, const RuntimeMethod* method) 
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___output0), NULL);
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPlayableOutput__ctor_mE4FB8AA6DFB2F3C18E04A9317F5CE53597A7D22A((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Animator UnityEngine.Animations.AnimationPlayableOutput::GetTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* AnimationPlayableOutput_GetTarget_m2E55D32775E0B27063F697346701A0EB5424DA9D (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, const RuntimeMethod* method) 
{
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_0 = NULL;
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = AnimationPlayableOutput_InternalGetTarget_m3ECC05C07DEBDD5ECCAB92A2213DA9087E43B5F2(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* AnimationPlayableOutput_GetTarget_m2E55D32775E0B27063F697346701A0EB5424DA9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* _returnValue;
	_returnValue = AnimationPlayableOutput_GetTarget_m2E55D32775E0B27063F697346701A0EB5424DA9D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::SetTarget(UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE (AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = ___value0;
		AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE_AdjustorThunk (RuntimeObject* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___value0, const RuntimeMethod* method)
{
	AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E*>(__this + _offset);
	AnimationPlayableOutput_SetTarget_m0F7745C4A721D76EB1E804AA48E70C9C798E0DCE(_thisAdjusted, ___value0, method);
}
// UnityEngine.Animator UnityEngine.Animations.AnimationPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* AnimationPlayableOutput_InternalGetTarget_m3ECC05C07DEBDD5ECCAB92A2213DA9087E43B5F2 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle0, const RuntimeMethod* method) 
{
	typedef Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*AnimationPlayableOutput_InternalGetTarget_m3ECC05C07DEBDD5ECCAB92A2213DA9087E43B5F2_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AnimationPlayableOutput_InternalGetTarget_m3ECC05C07DEBDD5ECCAB92A2213DA9087E43B5F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalGetTarget_m3ECC05C07DEBDD5ECCAB92A2213DA9087E43B5F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)");
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* icallRetVal = _il2cpp_icall_func(___handle0);
	return icallRetVal;
}
// System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle0, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___target1, const RuntimeMethod* method) 
{
	typedef void (*AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationPlayableOutput_InternalSetTarget_m49002BC3713A0AF76F2447A0147493F234B8E616_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)");
	_il2cpp_icall_func(___handle0, ___target1);
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
// System.Void UnityEngine.Animations.NotKeyableAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotKeyableAttribute__ctor_m818249C0E7E98C56F41B672A3140A87EA568EB84 (NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// UnityEngine.Playables.PlayableBinding UnityEngine.Animations.AnimationPlayableBinding::Create(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 AnimationPlayableBinding_Create_m3E764C5FC95E912E727275AA705701933B93C2CB (String_t* ___name0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPlayableBinding_CreateAnimationOutput_mAAF4FE67781A130389ADA1BD625D42215B4C55A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Animator_t8A52E42AE54F76681838FE9E632683EF3952E883_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___key1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_4 = (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*)il2cpp_codegen_object_new(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4(L_4, NULL, (intptr_t)((void*)AnimationPlayableBinding_CreateAnimationOutput_mAAF4FE67781A130389ADA1BD625D42215B4C55A2_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5;
		L_5 = PlayableBinding_CreateInternal_m63C8C98E659B52725E0373019ECFCEC22167A47A(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Animations.AnimationPlayableBinding::CreateAnimationOutput(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AnimationPlayableBinding_CreateAnimationOutput_mAAF4FE67781A130389ADA1BD625D42215B4C55A2 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		String_t* L_1 = ___name1;
		AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E L_2;
		L_2 = AnimationPlayableOutput_Create_m65847A70F6C74854387814C5B1D4C281B6CCCDC4(L_0, L_1, (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL, NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_3;
		L_3 = AnimationPlayableOutput_op_Implicit_mB256AA7AA6BC0577B47399941D4B42BBC5C28DA7(L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m9B6DC260339CC9A611F32C3807DE4F36A1720DE6_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, const RuntimeMethod* method) 
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
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_3 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m8DDAFA7A565FBEEB8C312BF1E890AB978D3760AE_gshared_inline (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB* __this, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___item0, const RuntimeMethod* method) 
{
	KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_1 = (KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		KeyValuePair_2U5BU5D_t105762EC2DE353037ECAD13437FC19081314CE67* L_6 = V_0;
		int32_t L_7 = V_1;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)L_8);
		return;
	}

IL_0034:
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_9 = ___item0;
		((  void (*) (List_1_t8A1639802238DEF3222B6CBBC0DEF0B4B5F350EB*, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
