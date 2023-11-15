#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616;
// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275;
// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999;
// System.Collections.CompatibleComparer
struct CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Buffers.IPinnable
struct IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0;
// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA;
// System.Collections.ArrayList/IListWrapper
struct IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187;
// System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7;
// System.Collections.BitArray/BitArrayEnumeratorSimple
struct BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB;
// System.Collections.Hashtable/HashtableEnumerator
struct HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061;
// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77;
// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5;
// System.Collections.Hashtable/ValueCollection
struct ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064;
IL2CPP_EXTERN_C String_t* _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763;
IL2CPP_EXTERN_C String_t* _stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633;
IL2CPP_EXTERN_C String_t* _stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700;
IL2CPP_EXTERN_C String_t* _stringLiteral461B901954DA68B031564E85615378AE7FACBEA9;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA;
IL2CPP_EXTERN_C String_t* _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral62EDD94B35AE1C598F9C8060E6F26AD1470D672D;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral6A42FCEEAC1D98507D8329C4992B135D890D96AB;
IL2CPP_EXTERN_C String_t* _stringLiteral71943296949CB7F897DB641231533D430DE14FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral7331C93BE0BC11AF8C588D87CB6B2725FC603354;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF22EA5A6A5A696D2456E9227B5745A698E05A8;
IL2CPP_EXTERN_C String_t* _stringLiteral916FA9BB612A639C6BF76F616B11B2D1BC0E68F2;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralB4054C6E4E11B87959DDCCED1FDA757609E47F49;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA2F88999132DA5422C607B25387A98089B3B06;
IL2CPP_EXTERN_C String_t* _stringLiteralD48F64ABB05D3F39046297B361BD8AA53451659A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE209FAE75837720CC82067C1D76DCD103784C60B;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0;
IL2CPP_EXTERN_C String_t* _stringLiteralED1269E5C23EE33C8DD1238BDFE8303F0D986C1F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_Reset_mDF974CA5DDF1B8C46C756871711697AE745E3ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_Adapter_mC0D976D7238E15899597A330071EB442B1DFE3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_CopyTo_m33769C57E9E7261A3B35788CDA6373D75D0D538C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_CopyTo_mADDECA2EF6906AA598DF77E147F0A966FD691DA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_Insert_m2A924439882971EC8795EA63607BE78847FA8246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_ReadOnly_mD661DAE1AA9ECD6211AA7338BEB4A53E54E7646F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_RemoveAt_m50F9214E068EDA2553CE6F5BBBF0FB746F4D3709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_RemoveRange_m041ED75CCA6D6C2821D9F3DFFD791D761D167E8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_Sort_mED9ACB696272FA1C5A5684C25D3A1A85CBCEE283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_ToArray_mFE4CD6D4FB1FD135D20146A9E5A69DF9B6B4029B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_set_Capacity_m0B13CB55FABE8A22C19C0C0F5BCFF42BA193E169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_set_Item_m858A91A06ECA70EDF2B230AB3D0634E1457E5784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitArrayEnumeratorSimple_MoveNext_m78F06B671AE2F393649CA3F907E0E63C768D7E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitArrayEnumeratorSimple_Reset_mAA49F677E32CAC747DADCA2C777BD3EB4369EB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BitArrayEnumeratorSimple_get_Current_mA9DDA5A7D146BFECB274232434183DEBE15A62B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Entry_m4DDDE56EB20FCAB680D4D871CF28910E6FFD7C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_Synchronized_m6C533F21D7532A6118974AE7634AB28C76765EF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_Clear_m2531723DAB48EDD240AF1684E9DA6EF53E9658C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_InsertRange_m18EE3C843D1FD0B60D92020835CEFF39FF2FC9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_RemoveRange_m7D800CCE2B77A9FDE085CBC7D9CC3A2E4312D621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_Sort_mF4D1C85C0865B0942180074EB047A7AC7FA2299B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_ToArray_m87E592A6B643C1EE45C876AA4FC178479B1A0F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IListWrapper_set_Capacity_m77C2A344F6F0AD9A78A9439045B58B473A3BA189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_AddRange_mEF6206AF924D609FE389BC245F96E219AEEBC9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_Add_m678A7B66614274CA0000B5A4232F962A7AC78148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_Clear_mFC78469FBFCCB7BB591799A3EDC73B840C7DEABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_InsertRange_m85C6EB9DC3DBC3AEF520F33615042A47E3FFF139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_Insert_mE0BAE5C31B0C86553B445FD7284587D5A5AA5C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_RemoveAt_m63D3189155E548BC750C2B02A017B727AB83409A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_RemoveRange_m40DD193E8AD2DA912E0A37F780490370E2A0C4B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_Remove_mA156265395B4E03784739D03DCC0A08D3CA51FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_Sort_m86AD85F1FC3BD7DED597C723FC0DD72CDCDE6C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_set_Capacity_m9C39F463CE13298AC650079FE6386FE9EEC97F6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArrayList_set_Item_m3434044C6507C9826AD8931C8C74C07921A37E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncHashtable_ContainsKey_m29B505232C709E842FDD2398C1B6A75C9708241E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncHashtable_GetObjectData_mCBA586B5407FEAEB6B8F5F4C6E62D6EA2EAE40D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncHashtable__ctor_mF1BBFC51ECC24E48FE77B39E9124110ADA45941A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m02C318CA8F5812C025CBEDEA07A5DE5D0FDBB25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_CopyTo_mD8B0681E6639A47EF9AFE951316CBA082381787F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A  : public RuntimeObject
{
};

struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* ___defaultComparer_0;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Buffers.Binary.BinaryPrimitives
struct BinaryPrimitives_tFEA1A3012A2BA5E1F6CD0F63173264A165CB6A7B  : public RuntimeObject
{
};

// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616  : public RuntimeObject
{
	// System.Int32[] System.Collections.BitArray::m_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_array_0;
	// System.Int32 System.Collections.BitArray::m_length
	int32_t ___m_length_1;
	// System.Int32 System.Collections.BitArray::_version
	int32_t ____version_2;
	// System.Object System.Collections.BitArray::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.CollectionExtensions
struct CollectionExtensions_t182A00BC503C9791010A3F71F412C76ABDD4D10D  : public RuntimeObject
{
};

// System.Collections.CompatibleComparer
struct CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465  : public RuntimeObject
{
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_0;
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_1;
};

// System.Collections.Generic.EnumerableHelpers
struct EnumerableHelpers_t18A53CA9FA987FA240C4777E90230115D116D29B  : public RuntimeObject
{
};

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	// System.String System.Diagnostics.Tracing.EventSource::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.Buffers.Text.FormattingHelpers
struct FormattingHelpers_t06A1B3D3DEEAE9313D177C6D62D99DBF100E151D  : public RuntimeObject
{
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Generic.IntrospectiveSortUtilities
struct IntrospectiveSortUtilities_tD784154D54CAE81D6BD1F950B40A8C89EF328402  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair
struct KeyValuePair_t7874AE3B9245A56073B459BA3A218A817370F597  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.ObjectModel.ReadOnlyDictionaryHelpers
struct ReadOnlyDictionaryHelpers_t2EE6B86AB75EFC31602291E40C3469F1C18D9278  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfoEnumerator::_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfoEnumerator::_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfoEnumerator::_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ____types_2;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_numItems
	int32_t ____numItems_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfoEnumerator::_currItem
	int32_t ____currItem_4;
	// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::_current
	bool ____current_5;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Buffers.Utilities
struct Utilities_t47DFEED0E704B42BDB4499194D7C812E763E6186  : public RuntimeObject
{
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

// System.Collections.ArrayList/ArrayListDebugView
struct ArrayListDebugView_t84F5D056AFE95B118FA2000FA00D0A58706DB6FB  : public RuntimeObject
{
};

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::_currentElement
	RuntimeObject* ____currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::_isArrayList
	bool ____isArrayList_4;
};

struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields
{
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::s_dummyObject
	RuntimeObject* ___s_dummyObject_5;
};

// System.Collections.BitArray/BitArrayEnumeratorSimple
struct BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB  : public RuntimeObject
{
	// System.Collections.BitArray System.Collections.BitArray/BitArrayEnumeratorSimple::bitarray
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___bitarray_0;
	// System.Int32 System.Collections.BitArray/BitArrayEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.BitArray/BitArrayEnumeratorSimple::version
	int32_t ___version_2;
	// System.Boolean System.Collections.BitArray/BitArrayEnumeratorSimple::currentElement
	bool ___currentElement_3;
};

// System.Collections.Hashtable/HashtableDebugView
struct HashtableDebugView_t8AC15CFAD73CC79A91528679B7EF33B72612F0AD  : public RuntimeObject
{
};

// System.Collections.Hashtable/HashtableEnumerator
struct HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_bucket
	int32_t ____bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_version
	int32_t ____version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::_current
	bool ____current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_getObjectRetType
	int32_t ____getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::_currentKey
	RuntimeObject* ____currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::_currentValue
	RuntimeObject* ____currentValue_6;
};

// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
};

// System.Collections.Hashtable/ValueCollection
struct ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
};

// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	// System.Buffers.ArrayPoolEventSource System.Buffers.ArrayPoolEventSource::Log
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log_1;
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

// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275  : public EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8
{
};

// System.Collections.Concurrent.CDSCollectionETWBCLProvider
struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

struct CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields
{
	// System.Collections.Concurrent.CDSCollectionETWBCLProvider System.Collections.Concurrent.CDSCollectionETWBCLProvider::Log
	CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* ___Log_1;
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

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B  : public EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A
{
};

// System.Collections.Concurrent.PaddedHeadAndTail
#pragma pack(push, tp, 1)
struct PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Head_0_OffsetPadding[128];
					// System.Int32 System.Collections.Concurrent.PaddedHeadAndTail::Head
					int32_t ___Head_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Head_0_OffsetPadding_forAlignmentOnly[128];
					int32_t ___Head_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Tail_1_OffsetPadding[256];
					// System.Int32 System.Collections.Concurrent.PaddedHeadAndTail::Tail
					int32_t ___Tail_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Tail_1_OffsetPadding_forAlignmentOnly[256];
					int32_t ___Tail_1_forAlignmentOnly;
				};
			};
		};
		uint8_t PaddedHeadAndTail_t1DAB41665EC6BE441A9807218EB9514A1E75B8A8__padding[384];
	};
};
#pragma pack(pop, tp)

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	// System.Int32 System.Threading.SpinWait::_count
	int32_t ____count_1;
};

struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	// System.Int32 System.Threading.SpinWait::SpinCountforSpinBeforeWait
	int32_t ___SpinCountforSpinBeforeWait_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4__padding[10];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55__padding[1018];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07__padding[1024];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5__padding[10800];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413__padding[120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284__padding[1208];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E__padding[130];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C__padding[1450];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070__padding[1472];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7__padding[15];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1__padding[152];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D__padding[1665];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155__padding[170];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6__padding[172];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6__padding[174];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355__padding[2048];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE__padding[2100];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A__padding[212];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A__padding[2176];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC__padding[2350];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630__padding[2382];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265__padding[240];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37__padding[262];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51__padding[288];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312__padding[3];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C__padding[3132];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970__padding[336];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00__padding[360];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E__padding[38];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08__padding[40];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669__padding[4096];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A__padding[42];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE__padding[44];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116__padding[48];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89__padding[52];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7__padding[56];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD__padding[5952];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B__padding[6];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109__padding[640];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE__padding[648];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC__padding[72];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61__padding[76];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3__padding[84];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B__padding[94];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E__padding[998];
	};
};
#pragma pack(pop, tp)

// System.Collections.ArrayList/IListWrapper
struct IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187  : public ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A
{
	// System.Collections.IList System.Collections.ArrayList/IListWrapper::_list
	RuntimeObject* ____list_6;
};

// System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7  : public ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A
{
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_6;
};

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5  : public Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D
{
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____table_22;
};

// System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject* ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject* ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;
};
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 ___001D686DB504E20C792EAA07FE09224A45FF328E24A80072D04D16ABC5C2B5D2_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170 <PrivateImplementationDetails>::021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8
	__StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 ___021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::07FA6E88C946B2528C09C16C2FB8E9CDA49AFFAFC601774C437FD9F2DF3ECE01
	__StaticArrayInitTypeSizeU3D56_tCF60E23359634B97A792A75277ACC2176949BCE7 ___07FA6E88C946B2528C09C16C2FB8E9CDA49AFFAFC601774C437FD9F2DF3ECE01_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D
	__StaticArrayInitTypeSizeU3D84_tD7894A8DC44B8037ABDA03237AC9ED587ED067D3 ___0C496C9AE05419BD25256D0EF4F31AFD291119F14B8BD683BF1774F91E08659D_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640 <PrivateImplementationDetails>::125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293
	__StaticArrayInitTypeSizeU3D640_t910C17DFA2BEC9D837C794531BFFFE8A70E81109 ___125CF2084D7EEC18DC9795BE4BAA221655C0EABAB89E90A74FB0370378A60293_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100 <PrivateImplementationDetails>::12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78
	__StaticArrayInitTypeSizeU3D2100_t88D645A2CDCA331608377780128DA8BFC74942DE ___12D518BA10F3DD1A331E65FBD4C330930C0A0BD9F50F37BE0BDF596E964B9A78_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446
	__StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF ___195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 ___1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450 <PrivateImplementationDetails>::1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687
	__StaticArrayInitTypeSizeU3D1450_t1FAC416BA849625CD3D95A1981F559A2F2DE0E7C ___1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
	__StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 ___1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49
	__StaticArrayInitTypeSizeU3D10_t5C0BD3C2F2400B4CC3D119A9A4D6BE6F36BED9B4 ___215E3E0B11A214B3198654E87B3D953AC8FB1ABC7045AF841A7C4892624BDE49_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::24CB9F17C8326D8BB8EC908716519DF7F265AE825F0DD13BB04E03A90B07D90E
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___24CB9F17C8326D8BB8EC908716519DF7F265AE825F0DD13BB04E03A90B07D90E_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5
	__StaticArrayInitTypeSizeU3D3132_tF0F1005A79A2387D724DFD9EE4EDC366B0A4914C ___25E3E48132FBDBE9B7C0C6C54D7C10A5DE12A105AA3E5DE2A0DC808BF245B7A5_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF
	__StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B ___44D066BAE9848B4A4B2C31F1854666526A32D0588635569423BDA1DA303C97DF_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___4623CA5867960AA898AA1F65E720CD5ECD3552542E0C6F6FB65B21D14DD1CBC2_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
	__StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 ___4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
	__StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 ___4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___508085E0DDEEA9CE48BFAE98CEC779F8D06301AE973555D37680D08190CAFA70_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA
	__StaticArrayInitTypeSizeU3D20_t548A67B8FAEBE929F5BE1C5FA92A7708E5A34C85 ___533B8C444F951E83EFF7305E3807B66CE0005DE0A2D0A44873C130895A3BE6AA_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___55D0BF716B334D123E0088CFB3F8E2FEA17AF5025BB527F95EEB09BA978EA329_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800 <PrivateImplementationDetails>::56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854
	__StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 ___56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31
	__StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B ___61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::62E6F13B53D67FDD780E20D89A6E8EE503B197AC16AC3F1D2571C147FDD324C9
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___62E6F13B53D67FDD780E20D89A6E8EE503B197AC16AC3F1D2571C147FDD324C9_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::668BB69E184E0C32DC3BC488001C506C87EE5A95C7E7B6B87D24C3A6DC779956
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 ___668BB69E184E0C32DC3BC488001C506C87EE5A95C7E7B6B87D24C3A6DC779956_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::6708B572BDBE5D5E79701DBB9744AF74B50FED7608218F2D7BF1B5D87E5A53ED
	__StaticArrayInitTypeSizeU3D48_tB7BA0D45E70CDE989C734E0E5B52A7C3038E5116 ___6708B572BDBE5D5E79701DBB9744AF74B50FED7608218F2D7BF1B5D87E5A53ED_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648 <PrivateImplementationDetails>::67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955
	__StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE ___67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::73F5D95C401726B2C92EC96A696BA15F0E5A5C6DD9AC6BEB3736A81772A11531
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 ___73F5D95C401726B2C92EC96A696BA15F0E5A5C6DD9AC6BEB3736A81772A11531_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___74EF7306E7452D6859B6463CE496B8DF30925F69E1B2969E1F3F34BBC9C6AF04_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::78AD7906208AA1E531D0C1100062DE3D252210B1E4214061294A0BB7C94762B8
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___78AD7906208AA1E531D0C1100062DE3D252210B1E4214061294A0BB7C94762B8_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472 <PrivateImplementationDetails>::7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
	__StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 ___7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780_54;
	// System.Int64 <PrivateImplementationDetails>::819B40F8CF7DC49B4275955A17C10239F1BBBB3BF96E26E25ED844B96B645D7F
	int64_t ___819B40F8CF7DC49B4275955A17C10239F1BBBB3BF96E26E25ED844B96B645D7F_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_56;
	// System.Int64 <PrivateImplementationDetails>::82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21
	int64_t ___82B100804CE219CD73E155C7C6457FCF04EA539DE5B19F4736E800098714EB21_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73
	__StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E ___86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73_59;
	// System.Int64 <PrivateImplementationDetails>::8BFD94DEAAC0F168DC8B50A00AC120A113B550B68FEF344F807D503D1A6E5DED
	int64_t ___8BFD94DEAAC0F168DC8B50A00AC120A113B550B68FEF344F807D503D1A6E5DED_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665 <PrivateImplementationDetails>::8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF
	__StaticArrayInitTypeSizeU3D1665_t4CB4CE1056FC98C5BAB53D5F6D5F1F0B8CEBA06D ___8CCE27079B32C13BB310169A6AD26AE419CDC98B7E2EFD3CC9997257F4BC1DEF_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952 <PrivateImplementationDetails>::9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115
	__StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD ___9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336 <PrivateImplementationDetails>::93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6
	__StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 ___93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07
	__StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 ___964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15 <PrivateImplementationDetails>::96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6
	__StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 ___96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___9960C7FC60CDD325C8A2A00995BE7064EAC3F6295C6A5C4E797D2281846131E4_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F
	__StaticArrayInitTypeSizeU3D44_t16AF03EDFEC5FF23E410BCDD3A07378E36AB6EFE ___99E66DACA3EFF94776AF1258E0E5B2F4DF2900E4EA32351B0DF37A87F2426B1F_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B
	__StaticArrayInitTypeSizeU3D120_tD5C6CE4469120025887663C1D22BD39721D06413 ___A2DFDF9C2CED8BB1C0B9B06064345ACC9C22DFE5FEC9976FF061F0994451519B_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 ___A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::B215DD70A77190680641703C6DF73729B4583E285AF8B51ACF9086655FB2D0F3
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___B215DD70A77190680641703C6DF73729B4583E285AF8B51ACF9086655FB2D0F3_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176 <PrivateImplementationDetails>::B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838
	__StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A ___B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___BABD01C34E7E65E57E4C431281E782B4101CE0644A8090AD6E501F1C6CF2C9DF_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___C250CAD28060A4EB63B4C4A643DDA196CCD35FD2FC67FB749ADF4BAC6D62E1A0_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___C2D8E5EED6CBEBD8625FC18F81486A7733C04F9B0129FFBE974C68B90308B4F2_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3
	__StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 ___C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_85;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063
	__StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E ___C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658
	__StaticArrayInitTypeSizeU3D36_t5C0EDBE11BB2C6682A10956FD7BD0D97A46E3BA4 ___CAFFFC9D15E4037EE8FBDB1A45DFE456F0936BDC7310F1882EAF14B706A76658_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::CE11D6DEAFFC6D6EF6030E30E7444C933E6261F32AA737064EF0446C219ECE22
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___CE11D6DEAFFC6D6EF6030E30E7444C933E6261F32AA737064EF0446C219ECE22_89;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::D3B16F8D71CB719B941527D5A1ADA7ED83F4EB967FEE117DDA2FE4021E1D283F
	__StaticArrayInitTypeSizeU3D6_t2D20738447B6F1222D7EE2D5D686783F1457713B ___D3B16F8D71CB719B941527D5A1ADA7ED83F4EB967FEE117DDA2FE4021E1D283F_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_92;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172 <PrivateImplementationDetails>::D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15
	__StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 ___D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15_93;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::D870074914025E855AA5985A2D6778F1E277036BF9C9F03DEC61F3C496FEC35C
	__StaticArrayInitTypeSizeU3D2048_t629933D99218856BC762A592B03108640E9B0355 ___D870074914025E855AA5985A2D6778F1E277036BF9C9F03DEC61F3C496FEC35C_94;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___D896D464C3726A21162F271ACB711464AD07EA9C9CE78E0297FD0DE934471FA6_95;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_96;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_97;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C
	__StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC ___DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C_98;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D
	__StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 ___DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D_99;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_100;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::E148B2057CF0C1595155635E761FB66AAE634C40D8FABC4CE79A2DB8886525D4
	__StaticArrayInitTypeSizeU3D4096_tBC12C9D01469CC5942ED025E4769CBD57E2A3669 ___E148B2057CF0C1595155635E761FB66AAE634C40D8FABC4CE79A2DB8886525D4_101;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598
	__StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E ___E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598_102;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8_103;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92_104;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B
	__StaticArrayInitTypeSizeU3D64_t902DC2FD85EE7E9E3E2AC6CEB41D6E2EDF8C6BC5 ___E768EDCAE10BAB68BB5DF102FDBB8CF4F31B9D60159B44DA3F33ABC36388308B_105;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092
	__StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 ___E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092_106;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___EBE07C3718876777F609CD22058F4C3A6CCCC695F5BDE90998DC1E12E0CBE63D_107;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE_108;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EF39C5A882F9477B2A250BA257247825CEB07FC53C3C984385F2C2E5F8222431
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___EF39C5A882F9477B2A250BA257247825CEB07FC53C3C984385F2C2E5F8222431_109;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9_110;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB_111;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 ___F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5_112;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8_113;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_114;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3_115;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_116;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208 <PrivateImplementationDetails>::FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD
	__StaticArrayInitTypeSizeU3D1208_t448FE03E395F60069921A133A51971348403E284 ___FB2089AF82E09593374B65EC2440779FDCF5DD6DA07D26E57AF6790667B937CD_117;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___FD68700E95459C5E7A49C5830F8BD0A9BA4BD171252663D8066B09E7768C5C5D_118;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB_119;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Diagnostics.Tracing.EventSource/EventData
struct EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D 
{
	// System.IntPtr System.Diagnostics.Tracing.EventSource/EventData::<DataPointer>k__BackingField
	intptr_t ___U3CDataPointerU3Ek__BackingField_0;
	// System.Int32 System.Diagnostics.Tracing.EventSource/EventData::<Size>k__BackingField
	int32_t ___U3CSizeU3Ek__BackingField_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource/EventData::<Reserved>k__BackingField
	int32_t ___U3CReservedU3Ek__BackingField_2;
};

// System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD 
{
	// System.Void* System.Buffers.MemoryHandle::_pointer
	void* ____pointer_0;
	// System.Runtime.InteropServices.GCHandle System.Buffers.MemoryHandle::_handle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	// System.Buffers.IPinnable System.Buffers.MemoryHandle::_pinnable
	RuntimeObject* ____pinnable_2;
};
// Native definition for P/Invoke marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke
{
	void* ____pointer_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	RuntimeObject* ____pinnable_2;
};
// Native definition for COM marshalling of System.Buffers.MemoryHandle
struct MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com
{
	void* ____pointer_0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____handle_1;
	RuntimeObject* ____pinnable_2;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_t98574FADF548B70B1F425B46CC940CEC3C38FB5F  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587  : public RuntimeArray
{
	ALIGN_FIELD (8) bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E m_Items[1];

	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___val_1), (void*)NULL);
		#endif
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___val_1), (void*)NULL);
		#endif
	}
};
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m153BCA24E1AB65004A192DD74C0506DE22FE5349_gshared (RuntimeObject** ___target0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.BitArray::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArray_Get_mEA89545FA6F822DAB3D059BF36E8B829A70E4AD3 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList/IListWrapper::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper__ctor_m85C8036358BC3A4F6B6D102D04A1653989F28D7A (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___min0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_mA7DFA2E913CA86E09777E3E8693C98459803E38D (RuntimeArray* ___array0, RuntimeObject* ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList__ctor_mC08FEC5D3AAA674F15A1E6910385B8387B9A4B70 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___l0, const RuntimeMethod* method) ;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_mE8B389D13D4164C9E66801A729CF714EDEB512E6 (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>>(T&)
inline ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858** ___target0, const RuntimeMethod* method)
{
	return ((  ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858**, const RuntimeMethod*))LazyInitializer_EnsureInitialized_TisRuntimeObject_m153BCA24E1AB65004A192DD74C0506DE22FE5349_gshared)(___target0, method);
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___min0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, RuntimeObject* ___equalityComparer2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Hashtable::Insert(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___nvalue1, bool ___add2, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::UpdateVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.UInt32 System.Collections.Hashtable::InitHash(System.Object,System.Int32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, int32_t ___hashsize1, uint32_t* ___seed2, uint32_t* ___incr3, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::CopyEntries(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyEntries_m5AA0C8FC1FE9E5F6DC2AEB98D18C00919783040B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___oldSize0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::rehash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___newsize0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::putEntry(System.Collections.Hashtable/bucket[],System.Object,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ___newBuckets0, RuntimeObject* ___key1, RuntimeObject* ___nvalue2, int32_t ___hashcode3, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/HashtableEnumerator::.ctor(System.Collections.Hashtable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, int32_t ___getObjRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/KeyCollection::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m2F5EB768C82E9BCAA0CAB8823EFE996749ABFDDD (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/ValueCollection::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m9EE64DC0395F01EB90DC1A0863F4B41A2501E226 (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::expand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::rehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable__ctor_mFFE7535A50219583B15ACC748FE3E7CB6B52EEAA (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___table0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Collections.IComparer System.Collections.CompatibleComparer::get_Comparer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) ;
// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::get_HashCodeProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::CopyKeys(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::CopyValues(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m52370B9D7DEAF095B34C6AE27338067A3A1CF886 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single System.Runtime.Serialization.SerializationInfo::GetSingle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6 (SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.CompatibleComparer::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompatibleComparer__ctor_mD070CC744D2BA684391418B77E61E24F8E735492 (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, RuntimeObject* ___hashCodeProvider0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Remove(TKey)
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m51E45FAFE5B1D6E9FDA123477422367F1F215DE6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Hashtable::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m53109B9F270C606C6DBA73405F134DA215440A36 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bool ___trash0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD50422D7B9D147207A33AB5BDC0B7CE963A51056 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* Hashtable_Synchronized_m6C533F21D7532A6118974AE7634AB28C76765EF5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___table0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___level0, int64_t ___keywords1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m8609472BD078A398CF4CA9DBF4BBDA1C454096A6 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___eventId0, int32_t ___arg11, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Buffer::IndexOfByte(System.Byte*,System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_IndexOfByte_mF43902211DC955885C828233F0D46BAC239B0ECC (uint8_t* ___src0, uint8_t ___value1, int32_t ___index2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
inline void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8*, const RuntimeMethod*))EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.String>::.ctor()
inline void EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A*, const RuntimeMethod*))EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared)(__this, method);
}
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130 (Guid_t* __this, int32_t ___a0, int16_t ___b1, int16_t ___c2, uint8_t ___d3, uint8_t ___e4, uint8_t ___f5, uint8_t ___g6, uint8_t ___h7, uint8_t ___i8, uint8_t ___j9, uint8_t ___k10, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor(System.Guid,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mA6FB74138AB52C540333000C0CEAD367D5072083 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, Guid_t ___eventSourceGuid0, String_t* ___eventSourceName1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Size(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_DataPointer(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource/EventData::set_Reserved(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEventCore(System.Int32,System.Int32,System.Diagnostics.Tracing.EventSource/EventData*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___eventId0, int32_t ___eventDataCount1, EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* ___data2, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___eventId0, int32_t ___arg11, int32_t ___arg22, int32_t ___arg33, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_mF3DADFC0459BB9C89B17BCECE51A57C3F4ED7D88 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___eventId0, int32_t ___arg11, int32_t ___arg22, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.MemoryHandle::.ctor(System.Void*,System.Runtime.InteropServices.GCHandle,System.Buffers.IPinnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, void* ___pointer0, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle1, RuntimeObject* ___pinnable2, const RuntimeMethod* method) ;
// System.Void* System.Buffers.MemoryHandle::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_inline (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.MemoryHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_m1F3EAA54B49EACFC7E489AEF1FF630553FEBE229 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.BitArray/BitArrayEnumeratorSimple::.ctor(System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArrayEnumeratorSimple__ctor_m162E753A341657FAE610C27B4407F942B01AE226 (BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB* __this, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___bitarray0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_0 = ___bitarray0;
		__this->___bitarray_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bitarray_0), (void*)L_0);
		__this->___index_1 = (-1);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___bitarray0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		__this->___version_2 = L_2;
		return;
	}
}
// System.Object System.Collections.BitArray/BitArrayEnumeratorSimple::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BitArrayEnumeratorSimple_Clone_m790AEE6EF5964EDEF5F2C307553BF8DC0C57F740 (BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.BitArray/BitArrayEnumeratorSimple::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitArrayEnumeratorSimple_MoveNext_m78F06B671AE2F393649CA3F907E0E63C768D7E02 (BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_0 = __this->___bitarray_0;
		V_0 = L_0;
		int32_t L_1 = __this->___version_2;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_2 = __this->___bitarray_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->____version_2;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitArrayEnumeratorSimple_MoveNext_m78F06B671AE2F393649CA3F907E0E63C768D7E02_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = __this->___index_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_8 = __this->___index_1;
		__this->___index_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_9 = __this->___bitarray_0;
		int32_t L_10 = __this->___index_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = BitArray_Get_mEA89545FA6F822DAB3D059BF36E8B829A70E4AD3(L_9, L_10, NULL);
		__this->___currentElement_3 = L_11;
		return (bool)1;
	}

IL_005c:
	{
		RuntimeObject* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_12);
		__this->___index_1 = L_13;
		return (bool)0;
	}
}
// System.Object System.Collections.BitArray/BitArrayEnumeratorSimple::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BitArrayEnumeratorSimple_get_Current_mA9DDA5A7D146BFECB274232434183DEBE15A62B4 (BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___index_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitArrayEnumeratorSimple_get_Current_mA9DDA5A7D146BFECB274232434183DEBE15A62B4_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = __this->___index_1;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_3 = __this->___bitarray_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) < ((int32_t)L_4)))
		{
			goto IL_0032;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitArrayEnumeratorSimple_get_Current_mA9DDA5A7D146BFECB274232434183DEBE15A62B4_RuntimeMethod_var)));
	}

IL_0032:
	{
		bool L_6 = __this->___currentElement_3;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.Void System.Collections.BitArray/BitArrayEnumeratorSimple::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArrayEnumeratorSimple_Reset_mAA49F677E32CAC747DADCA2C777BD3EB4369EB64 (BitArrayEnumeratorSimple_tEEF5BBAF661AB0D3C48CC63E815CEC29EDE0ECAB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version_2;
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = __this->___bitarray_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitArrayEnumeratorSimple_Reset_mAA49F677E32CAC747DADCA2C777BD3EB4369EB64_RuntimeMethod_var)));
	}

IL_001e:
	{
		__this->___index_1 = (-1);
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
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____items_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral461B901954DA68B031564E85615378AE7FACBEA9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_3 = ___capacity0;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____items_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_4);
		return;
	}

IL_0033:
	{
		int32_t L_5 = ___capacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____items_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_6);
		return;
	}
}
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___c0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11_RuntimeMethod_var)));
	}

IL_0019:
	{
		RuntimeObject* L_2 = ___c0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		__this->____items_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_5);
		return;
	}

IL_002f:
	{
		int32_t L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->____items_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_7);
		RuntimeObject* L_8 = ___c0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(30 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, __this, L_8);
		return;
	}
}
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_set_Capacity_m0B13CB55FABE8A22C19C0C0F5BCFF42BA193E169 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->____size_1;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_set_Capacity_m0B13CB55FABE8A22C19C0C0F5BCFF42BA193E169_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___value0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5 = ___value0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_6 = ___value0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		int32_t L_8 = __this->____size_1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		int32_t L_11 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_004c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		__this->____items_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_12);
		return;
	}

IL_0054:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____items_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_13);
	}

IL_0060:
	{
		return;
	}
}
// System.Int32 System.Collections.ArrayList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_get_Count_m0C8A956B9AADFEF064360B3A8EDF25487A00B62B (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_get_IsFixedSize_mC6BB8129ECB203917DD0F1E205F339DFA923C54C (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_get_IsReadOnly_m5D17B1E11EA4CEBBDD7A7D7DC9CE4D8ACDF8F8D4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_get_IsSynchronized_m14E8CA76FD3249CBE98138A520C17CACF376C9F7 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object System.Collections.ArrayList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_get_SyncRoot_mF2A9D7F8C12B832BE65E0EABB4DD53F916469482 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_3;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_3);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_3;
		return L_4;
	}
}
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82_RuntimeMethod_var)));
	}

IL_001d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_set_Item_m858A91A06ECA70EDF2B230AB3D0634E1457E5784 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_set_Item_m858A91A06ECA70EDF2B230AB3D0634E1457E5784_RuntimeMethod_var)));
	}

IL_001d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		int32_t L_5 = ___index0;
		RuntimeObject* L_6 = ___value1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_6);
		int32_t L_7 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
// System.Collections.ArrayList System.Collections.ArrayList::Adapter(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ArrayList_Adapter_mC0D976D7238E15899597A330071EB442B1DFE3DF (RuntimeObject* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___list0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_Adapter_mC0D976D7238E15899597A330071EB442B1DFE3DF_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___list0;
		IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* L_3 = (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187*)il2cpp_codegen_object_new(IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		IListWrapper__ctor_m85C8036358BC3A4F6B6D102D04A1653989F28D7A(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Int32 System.Collections.ArrayList::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_Add_mDE1DE6105251401C1C54A9E1B9423CC258F4B370 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_0;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size_1;
		ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_0;
		int32_t L_4 = __this->____size_1;
		RuntimeObject* L_5 = ___value0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = __this->____size_1;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_AddRange_m2D5837BD97F926C79820D9E4F1ACAE8651BDA89F (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		RuntimeObject* L_1 = ___c0;
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(40 /* System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection) */, __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ArrayList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Clear_mC2EFEE814314A2BB15316852444B6F5877F5DA07 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_0;
		int32_t L_2 = __this->____size_1;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size_1 = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// System.Object System.Collections.ArrayList::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_Clone_m4F7BE074DFF28EA5E8D8076A67AFAD53949212C4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_1, L_0, NULL);
		V_0 = L_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = V_0;
		int32_t L_3 = __this->____size_1;
		NullCheck(L_2);
		L_2->____size_1 = L_3;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		int32_t L_5 = __this->____version_2;
		NullCheck(L_4);
		L_4->____version_2 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		NullCheck(L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____items_0;
		int32_t L_9 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_10 = V_0;
		return L_10;
	}
}
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayList_Contains_m1892F05118EF9C353954B020324CFCACA77434F4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___item0;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0007:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		V_1 = 0;
		goto IL_0046;
	}

IL_0026:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		RuntimeObject* L_16 = ___item0;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_15, L_16);
		if (!L_17)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0046:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = __this->____size_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_CopyTo_mF4205A2B958D85E79075C4841FF020B9565D9A15 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeArray* ___array0, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___array0;
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, __this, L_0, 0);
		return;
	}
}
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_CopyTo_mADDECA2EF6906AA598DF77E147F0A966FD691DA5 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___array0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray* L_1 = ___array0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_CopyTo_mADDECA2EF6906AA598DF77E147F0A966FD691DA5_RuntimeMethod_var)));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		RuntimeArray* L_5 = ___array0;
		int32_t L_6 = ___arrayIndex1;
		int32_t L_7 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_CopyTo_m33769C57E9E7261A3B35788CDA6373D75D0D538C (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, RuntimeArray* ___array1, int32_t ___arrayIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		int32_t L_1 = ___index0;
		int32_t L_2 = ___count3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) >= ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_CopyTo_m33769C57E9E7261A3B35788CDA6373D75D0D538C_RuntimeMethod_var)));
	}

IL_0017:
	{
		RuntimeArray* L_4 = ___array1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeArray* L_5 = ___array1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_CopyTo_m33769C57E9E7261A3B35788CDA6373D75D0D538C_RuntimeMethod_var)));
	}

IL_0033:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items_0;
		int32_t L_9 = ___index0;
		RuntimeArray* L_10 = ___array1;
		int32_t L_11 = ___arrayIndex2;
		int32_t L_12 = ___count3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, L_10, L_11, L_12, NULL);
		return;
	}
}
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___min0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items_0;
		NullCheck(L_0);
		int32_t L_1 = ___min0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items_0;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_0;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___min0;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___min0;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Collections.ArrayList::set_Capacity(System.Int32) */, __this, L_8);
	}

IL_003d:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_GetEnumerator_m805139F78BF3FEAE1E5C64339010BFE215EEC208 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* L_0 = (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA*)il2cpp_codegen_object_new(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_IndexOf_m43C4451177F92C838C7D4D95B06A27785F919760 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items_0;
		RuntimeObject* L_1 = ___value0;
		int32_t L_2 = __this->____size_1;
		int32_t L_3;
		L_3 = Array_IndexOf_mA7DFA2E913CA86E09777E3E8693C98459803E38D((RuntimeArray*)L_0, L_1, 0, L_2, NULL);
		return L_3;
	}
}
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Insert_m2A924439882971EC8795EA63607BE78847FA8246 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral916FA9BB612A639C6BF76F616B11B2D1BC0E68F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_Insert_m2A924439882971EC8795EA63607BE78847FA8246_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items_0;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->____size_1;
		ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
	}

IL_003b:
	{
		int32_t L_7 = ___index0;
		int32_t L_8 = __this->____size_1;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0061;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items_0;
		int32_t L_10 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items_0;
		int32_t L_12 = ___index0;
		int32_t L_13 = __this->____size_1;
		int32_t L_14 = ___index0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0061:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____items_0;
		int32_t L_16 = ___index0;
		RuntimeObject* L_17 = ___value1;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_17);
		int32_t L_18 = __this->____size_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, RuntimeObject* ___c1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___c1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___index0;
		int32_t L_4 = __this->____size_1;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_InsertRange_mA570D0D0E9E2CDF00D7405DB79FF08FA5AE50769_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___c1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_9 = __this->____size_1;
		int32_t L_10 = V_0;
		ArrayList_EnsureCapacity_m7939538F9439FE4C927992FA68DF44491A583F45(__this, ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		int32_t L_11 = ___index0;
		int32_t L_12 = __this->____size_1;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_006f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items_0;
		int32_t L_14 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____items_0;
		int32_t L_16 = ___index0;
		int32_t L_17 = V_0;
		int32_t L_18 = __this->____size_1;
		int32_t L_19 = ___index0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_13, L_14, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), NULL);
	}

IL_006f:
	{
		int32_t L_20 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_1 = L_21;
		RuntimeObject* L_22 = ___c1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_1;
		NullCheck(L_22);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_22, (RuntimeArray*)L_23, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = __this->____items_0;
		int32_t L_26 = ___index0;
		NullCheck((RuntimeArray*)L_24);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_24, (RuntimeArray*)L_25, L_26, NULL);
		int32_t L_27 = __this->____size_1;
		int32_t L_28 = V_0;
		__this->____size_1 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		int32_t L_29 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a7:
	{
		return;
	}
}
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ArrayList_ReadOnly_mD661DAE1AA9ECD6211AA7338BEB4A53E54E7646F (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_ReadOnly_mD661DAE1AA9ECD6211AA7338BEB4A53E54E7646F_RuntimeMethod_var)));
	}

IL_000e:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = ___list0;
		ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* L_3 = (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7*)il2cpp_codegen_object_new(ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ReadOnlyArrayList__ctor_mC08FEC5D3AAA674F15A1E6910385B8387B9A4B70(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void System.Collections.ArrayList::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Remove_m3B0F41422C022DB515CA68B086B0E075D5819BC2 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___obj0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(38 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, __this, L_3);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_RemoveAt_m50F9214E068EDA2553CE6F5BBBF0FB746F4D3709 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_RemoveAt_m50F9214E068EDA2553CE6F5BBBF0FB746F4D3709_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = __this->____size_1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = ___index0;
		int32_t L_6 = __this->____size_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items_0;
		int32_t L_8 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items_0;
		int32_t L_10 = ___index0;
		int32_t L_11 = __this->____size_1;
		int32_t L_12 = ___index0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0051:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items_0;
		int32_t L_14 = __this->____size_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, NULL);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)NULL);
		int32_t L_15 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// System.Void System.Collections.ArrayList::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_RemoveRange_m041ED75CCA6D6C2821D9F3DFFD791D761D167E8C (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_RemoveRange_m041ED75CCA6D6C2821D9F3DFFD791D761D167E8C_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___count1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_RemoveRange_m041ED75CCA6D6C2821D9F3DFFD791D761D167E8C_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_4 = __this->____size_1;
		int32_t L_5 = ___index0;
		int32_t L_6 = ___count1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_RemoveRange_m041ED75CCA6D6C2821D9F3DFFD791D761D167E8C_RuntimeMethod_var)));
	}

IL_003e:
	{
		int32_t L_8 = ___count1;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_9 = __this->____size_1;
		V_0 = L_9;
		int32_t L_10 = __this->____size_1;
		int32_t L_11 = ___count1;
		__this->____size_1 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		int32_t L_12 = ___index0;
		int32_t L_13 = __this->____size_1;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_008c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items_0;
		int32_t L_15 = ___index0;
		int32_t L_16 = ___count1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____items_0;
		int32_t L_18 = ___index0;
		int32_t L_19 = __this->____size_1;
		int32_t L_20 = ___index0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (RuntimeArray*)L_17, L_18, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		goto IL_008c;
	}

IL_007f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = __this->____items_0;
		int32_t L_22 = V_0;
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		V_0 = L_23;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, NULL);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (RuntimeObject*)NULL);
	}

IL_008c:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = __this->____size_1;
		if ((((int32_t)L_24) > ((int32_t)L_25)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_26 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a3:
	{
		return;
	}
}
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Sort_m8F3FEF9D21535B4FC362A876A92D0271DF5E0341 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, __this);
		RuntimeObject* L_1 = ___comparer0;
		VirtualActionInvoker3< int32_t, int32_t, RuntimeObject* >::Invoke(45 /* System.Void System.Collections.ArrayList::Sort(System.Int32,System.Int32,System.Collections.IComparer) */, __this, 0, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ArrayList::Sort(System.Int32,System.Int32,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList_Sort_mED9ACB696272FA1C5A5684C25D3A1A85CBCEE283 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, int32_t ___count1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_Sort_mED9ACB696272FA1C5A5684C25D3A1A85CBCEE283_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___count1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_Sort_mED9ACB696272FA1C5A5684C25D3A1A85CBCEE283_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_4 = __this->____size_1;
		int32_t L_5 = ___index0;
		int32_t L_6 = ___count1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_Sort_mED9ACB696272FA1C5A5684C25D3A1A85CBCEE283_RuntimeMethod_var)));
	}

IL_003e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items_0;
		int32_t L_9 = ___index0;
		int32_t L_10 = ___count1;
		RuntimeObject* L_11 = ___comparer2;
		Array_Sort_mE8B389D13D4164C9E66801A729CF714EDEB512E6((RuntimeArray*)L_8, L_9, L_10, L_11, NULL);
		int32_t L_12 = __this->____version_2;
		__this->____version_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
// System.Object[] System.Collections.ArrayList::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ArrayList_ToArray_m3FA9DC2B8EB238BB7895EDEAD45B0D69B1CAC9F5 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		return L_7;
	}
}
// System.Array System.Collections.ArrayList::ToArray(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* ArrayList_ToArray_mFE4CD6D4FB1FD135D20146A9E5A69DF9B6B4029B (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_ToArray_mFE4CD6D4FB1FD135D20146A9E5A69DF9B6B4029B_RuntimeMethod_var)));
	}

IL_0014:
	{
		Type_t* L_3 = ___type0;
		int32_t L_4 = __this->____size_1;
		RuntimeArray* L_5;
		L_5 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_3, L_4, NULL);
		V_0 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items_0;
		RuntimeArray* L_7 = V_0;
		int32_t L_8 = __this->____size_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, L_7, 0, L_8, NULL);
		RuntimeArray* L_9 = V_0;
		return L_9;
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
// System.Void System.Collections.ArrayList/IListWrapper::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper__ctor_m85C8036358BC3A4F6B6D102D04A1653989F28D7A (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___list0, const RuntimeMethod* method) 
{
	{
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(__this, NULL);
		RuntimeObject* L_0 = ___list0;
		__this->____list_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_6), (void*)L_0);
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = 0;
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_set_Capacity_m77C2A344F6F0AD9A78A9439045B58B473A3BA189 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, __this);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_set_Capacity_m77C2A344F6F0AD9A78A9439045B58B473A3BA189_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
// System.Int32 System.Collections.ArrayList/IListWrapper::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IListWrapper_get_Count_mFCCC29BCEE90AA93AF1DE1A6148260DAE2C999F4 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.ArrayList/IListWrapper::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IListWrapper_get_IsReadOnly_m15F57CFB6FFDC8408E5461F7E95B2645D0F249C7 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.ArrayList/IListWrapper::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IListWrapper_get_IsFixedSize_mE73C7E3CC37F0041D3F09F594A15630FF6CFF87F (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.ArrayList/IListWrapper::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IListWrapper_get_IsSynchronized_m7BC7435B64A5D7D2DE3ED72E9BD763847252D8A0 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object System.Collections.ArrayList/IListWrapper::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IListWrapper_get_Item_mB153A71228139538945E112C2C99C674B9380233 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_set_Item_m9C4ABF73B67E35BBBCE49634A308F3805ED50991 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		int32_t L_1 = ___index0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		int32_t L_3 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// System.Object System.Collections.ArrayList/IListWrapper::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IListWrapper_get_SyncRoot_mC47CBC4027BE6B0A793FB2CC742FCAB525605140 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ArrayList/IListWrapper::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IListWrapper_Add_m72AF88B00BB20A50AE19A8CA7E8F40BAFC0B289E (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::AddRange(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_AddRange_m2B43E92D24705A4A24E528BF3EB006EEAFDD138F (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, __this);
		RuntimeObject* L_1 = ___c0;
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(40 /* System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection) */, __this, L_0, L_1);
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_Clear_m2531723DAB48EDD240AF1684E9DA6EF53E9658C9 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7331C93BE0BC11AF8C588D87CB6B2725FC603354)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_Clear_m2531723DAB48EDD240AF1684E9DA6EF53E9658C9_RuntimeMethod_var)));
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->____list_6;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_3);
		int32_t L_4 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		return;
	}
}
// System.Object System.Collections.ArrayList/IListWrapper::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IListWrapper_Clone_m8055F167E5C2193884DBBDDF24FF57D39CA59308 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* L_1 = (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187*)il2cpp_codegen_object_new(IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		IListWrapper__ctor_m85C8036358BC3A4F6B6D102D04A1653989F28D7A(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.ArrayList/IListWrapper::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IListWrapper_Contains_mE431DF2A9209002984370403DFBC4F03D0370784 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_CopyTo_m6767F246F664661B5082B1BCDF5551B2A2305FEA (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, RuntimeArray* ___array1, int32_t ___arrayIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B7_0 = NULL;
	{
		RuntimeArray* L_0 = ___array1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___arrayIndex2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___index0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_6 = ___count3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var)));
	}

IL_0046:
	{
		RuntimeArray* L_8 = ___array1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		int32_t L_10 = ___arrayIndex2;
		int32_t L_11 = ___count3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_005d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var)));
	}

IL_005d:
	{
		RuntimeArray* L_13 = ___array1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var)));
	}

IL_0076:
	{
		RuntimeObject* L_16 = __this->____list_6;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_16);
		int32_t L_18 = ___index0;
		int32_t L_19 = ___count3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_0092;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_CopyTo_m79B3F6EB20E2BD8734CA1ABE99043B88D7A01FB1_RuntimeMethod_var)));
	}

IL_0092:
	{
		int32_t L_21 = ___index0;
		V_0 = L_21;
		goto IL_00b2;
	}

IL_0096:
	{
		RuntimeArray* L_22 = ___array1;
		RuntimeObject* L_23 = __this->____list_6;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_23, L_24);
		int32_t L_26 = ___arrayIndex2;
		int32_t L_27 = L_26;
		___arrayIndex2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		NullCheck(L_22);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_22, L_25, L_27, NULL);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b2:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = ___index0;
		int32_t L_31 = ___count3;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_add(L_30, L_31)))))
		{
			goto IL_0096;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ArrayList/IListWrapper::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IListWrapper_GetEnumerator_m0D70BD979236635C664E012A17646FC9A68A8EE9 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ArrayList/IListWrapper::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IListWrapper_IndexOf_m7798FBC7BD2A6248FB42A347C37D83A067408229 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_Insert_m6CD0164FBB8E4B11E1FBA712456682908CC15A2A (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		int32_t L_1 = ___index0;
		RuntimeObject* L_2 = ___obj1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		int32_t L_3 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_InsertRange_m18EE3C843D1FD0B60D92020835CEFF39FF2FC9B3 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, RuntimeObject* ___c1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___c1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23A1E49ECE323ABF0A2F834678904E1415CBBB18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_InsertRange_m18EE3C843D1FD0B60D92020835CEFF39FF2FC9B3_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, __this);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_InsertRange_m18EE3C843D1FD0B60D92020835CEFF39FF2FC9B3_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___c1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_8 = __this->____list_6;
		V_0 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_8, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_10 = V_0;
		int32_t L_11 = ___index0;
		RuntimeObject* L_12 = ___c1;
		NullCheck(L_10);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(40 /* System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection) */, L_10, L_11, L_12);
		goto IL_007a;
	}

IL_0052:
	{
		RuntimeObject* L_13 = ___c1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_13);
		V_1 = L_14;
		goto IL_0072;
	}

IL_005b:
	{
		RuntimeObject* L_15 = __this->____list_6;
		int32_t L_16 = ___index0;
		int32_t L_17 = L_16;
		___index0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		RuntimeObject* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_15);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_15, L_17, L_19);
	}

IL_0072:
	{
		RuntimeObject* L_20 = V_1;
		NullCheck(L_20);
		bool L_21;
		L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
		if (L_21)
		{
			goto IL_005b;
		}
	}

IL_007a:
	{
		int32_t L_22 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0088:
	{
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_Remove_mC50253ABEF7C2C8310FED62081F6564AA263E480 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(38 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, __this, L_3);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_RemoveAt_mBA4AC5A8BD5984AF21B69B4724CA789E17B0C6BD (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____list_6;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_2 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_RemoveRange_m7D800CCE2B77A9FDE085CBC7D9CC3A2E4312D621 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B5_0 = NULL;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___count1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0008:
	{
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		G_B5_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626));
		goto IL_0018;
	}

IL_0013:
	{
		G_B5_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0018:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_RemoveRange_m7D800CCE2B77A9FDE085CBC7D9CC3A2E4312D621_RuntimeMethod_var)));
	}

IL_0023:
	{
		RuntimeObject* L_4 = __this->____list_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = ___index0;
		int32_t L_7 = ___count1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_RemoveRange_m7D800CCE2B77A9FDE085CBC7D9CC3A2E4312D621_RuntimeMethod_var)));
	}

IL_003e:
	{
		int32_t L_9 = ___count1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_10 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0063;
	}

IL_0052:
	{
		RuntimeObject* L_11 = __this->____list_6;
		int32_t L_12 = ___index0;
		NullCheck(L_11);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_11, L_12);
		int32_t L_13 = ___count1;
		___count1 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_0063:
	{
		int32_t L_14 = ___count1;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.ArrayList/IListWrapper::Sort(System.Int32,System.Int32,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IListWrapper_Sort_mF4D1C85C0865B0942180074EB047A7AC7FA2299B (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, int32_t ___index0, int32_t ___count1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B5_0 = NULL;
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___count1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_0008:
	{
		int32_t L_2 = ___index0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		G_B5_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626));
		goto IL_0018;
	}

IL_0013:
	{
		G_B5_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
	}

IL_0018:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, G_B5_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_Sort_mF4D1C85C0865B0942180074EB047A7AC7FA2299B_RuntimeMethod_var)));
	}

IL_0023:
	{
		RuntimeObject* L_4 = __this->____list_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = ___index0;
		int32_t L_7 = ___count1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_Sort_mF4D1C85C0865B0942180074EB047A7AC7FA2299B_RuntimeMethod_var)));
	}

IL_003e:
	{
		int32_t L_9 = ___count1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_0 = L_10;
		int32_t L_11 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		int32_t L_13 = ___count1;
		VirtualActionInvoker4< int32_t, RuntimeArray*, int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32) */, __this, L_11, (RuntimeArray*)L_12, 0, L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		int32_t L_15 = ___count1;
		RuntimeObject* L_16 = ___comparer2;
		Array_Sort_mE8B389D13D4164C9E66801A729CF714EDEB512E6((RuntimeArray*)L_14, 0, L_15, L_16, NULL);
		V_1 = 0;
		goto IL_0071;
	}

IL_005c:
	{
		RuntimeObject* L_17 = __this->____list_6;
		int32_t L_18 = V_1;
		int32_t L_19 = ___index0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_17, ((int32_t)il2cpp_codegen_add(L_18, L_19)), L_23);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0071:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = ___count1;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_27 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2;
		((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)__this)->____version_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		return;
	}
}
// System.Object[] System.Collections.ArrayList/IListWrapper::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* IListWrapper_ToArray_m74851542FB182B1396E95ADE31C13E49BDE06182 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		return L_1;
	}

IL_000e:
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, __this);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = __this->____list_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4, (RuntimeArray*)L_5, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		return L_6;
	}
}
// System.Array System.Collections.ArrayList/IListWrapper::ToArray(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* IListWrapper_ToArray_m87E592A6B643C1EE45C876AA4FC178479B1A0F94 (IListWrapper_t1FD5B0D395FB706E97477DB0619F9656DED13187* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeArray* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IListWrapper_ToArray_m87E592A6B643C1EE45C876AA4FC178479B1A0F94_RuntimeMethod_var)));
	}

IL_0014:
	{
		Type_t* L_3 = ___type0;
		RuntimeObject* L_4 = __this->____list_6;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		RuntimeArray* L_6;
		L_6 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_3, L_5, NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = __this->____list_6;
		RuntimeArray* L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_7, L_8, 0);
		RuntimeArray* L_9 = V_0;
		return L_9;
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
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList__ctor_mC08FEC5D3AAA674F15A1E6910385B8387B9A4B70 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___l0, const RuntimeMethod* method) 
{
	{
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___l0;
		__this->____list_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_6), (void*)L_0);
		return;
	}
}
// System.Int32 System.Collections.ArrayList/ReadOnlyArrayList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArrayList_get_Count_mAAB6ACA6F36C6A682DCCE909A4BC14DE364D9B8C (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayList_get_IsReadOnly_m56AB99FCF0C386900918DEB163312CBBB25CE599 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayList_get_IsFixedSize_m74595184E6C3CD538500C7D61559CB6E7D6A31EA (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayList_get_IsSynchronized_mFA3B3FF3B171907564038AF4381309C110A27FF6 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Collections.ArrayList::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.ArrayList/ReadOnlyArrayList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArrayList_get_Item_mE86D105FB5617FBA89C88A684329161158BAAE46 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_set_Item_m3434044C6507C9826AD8931C8C74C07921A37E11 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_set_Item_m3434044C6507C9826AD8931C8C74C07921A37E11_RuntimeMethod_var)));
	}
}
// System.Object System.Collections.ArrayList/ReadOnlyArrayList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArrayList_get_SyncRoot_m354B4618B3B71AE2A81DEF8BDCA9F3BEFEF46CF7 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(26 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ArrayList/ReadOnlyArrayList::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArrayList_Add_m678A7B66614274CA0000B5A4232F962A7AC78148 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_Add_m678A7B66614274CA0000B5A4232F962A7AC78148_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::AddRange(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_AddRange_mEF6206AF924D609FE389BC245F96E219AEEBC9D1 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_AddRange_mEF6206AF924D609FE389BC245F96E219AEEBC9D1_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_set_Capacity_m9C39F463CE13298AC650079FE6386FE9EEC97F6C (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_set_Capacity_m9C39F463CE13298AC650079FE6386FE9EEC97F6C_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_Clear_mFC78469FBFCCB7BB591799A3EDC73B840C7DEABF (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_Clear_mFC78469FBFCCB7BB591799A3EDC73B840C7DEABF_RuntimeMethod_var)));
	}
}
// System.Object System.Collections.ArrayList/ReadOnlyArrayList::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArrayList_Clone_m9360D48F2A6B9335D55AEFB550A969E8649B932F (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* L_1 = (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7*)il2cpp_codegen_object_new(ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyArrayList__ctor_mC08FEC5D3AAA674F15A1E6910385B8387B9A4B70(L_1, L_0, NULL);
		ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* L_2 = L_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->____list_6;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(32 /* System.Object System.Collections.ArrayList::Clone() */, L_3);
		NullCheck(L_2);
		L_2->____list_6 = ((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_4, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____list_6), (void*)((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_4, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Boolean System.Collections.ArrayList/ReadOnlyArrayList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayList_Contains_m12EA4F37224B608753964536173E82DB509D6C31 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(33 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_CopyTo_m3F7E370006657A10D3529AFEEA462AA00F7ADA12 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_CopyTo_m3E296546EC07D25187674425904946DA47AD1EA1 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, RuntimeArray* ___array1, int32_t ___arrayIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		int32_t L_1 = ___index0;
		RuntimeArray* L_2 = ___array1;
		int32_t L_3 = ___arrayIndex2;
		int32_t L_4 = ___count3;
		NullCheck(L_0);
		VirtualActionInvoker4< int32_t, RuntimeArray*, int32_t, int32_t >::Invoke(36 /* System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.ArrayList/ReadOnlyArrayList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArrayList_GetEnumerator_m9809EEA24859AB0C5C6507EEAACDCA2EE54DA7F3 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.ArrayList/ReadOnlyArrayList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArrayList_IndexOf_m06AA8E5BA9187096542025D7F0DC1949FF0D484A (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(38 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_Insert_mE0BAE5C31B0C86553B445FD7284587D5A5AA5C51 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_Insert_mE0BAE5C31B0C86553B445FD7284587D5A5AA5C51_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::InsertRange(System.Int32,System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_InsertRange_m85C6EB9DC3DBC3AEF520F33615042A47E3FFF139 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, RuntimeObject* ___c1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_InsertRange_m85C6EB9DC3DBC3AEF520F33615042A47E3FFF139_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_Remove_mA156265395B4E03784739D03DCC0A08D3CA51FF7 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_Remove_mA156265395B4E03784739D03DCC0A08D3CA51FF7_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_RemoveAt_m63D3189155E548BC750C2B02A017B727AB83409A (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_RemoveAt_m63D3189155E548BC750C2B02A017B727AB83409A_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_RemoveRange_m40DD193E8AD2DA912E0A37F780490370E2A0C4B2 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_RemoveRange_m40DD193E8AD2DA912E0A37F780490370E2A0C4B2_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.ArrayList/ReadOnlyArrayList::Sort(System.Int32,System.Int32,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArrayList_Sort_m86AD85F1FC3BD7DED597C723FC0DD72CDCDE6C8B (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, int32_t ___index0, int32_t ___count1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7AF8BCE7F42000322C784E007AAB43CA3E3D9AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyArrayList_Sort_m86AD85F1FC3BD7DED597C723FC0DD72CDCDE6C8B_RuntimeMethod_var)));
	}
}
// System.Object[] System.Collections.ArrayList/ReadOnlyArrayList::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ReadOnlyArrayList_ToArray_m9E212B7E9388D4A0F21CEBC9C47CB3FF1C4F2BC3 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = VirtualFuncInvoker0< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_0);
		return L_1;
	}
}
// System.Array System.Collections.ArrayList/ReadOnlyArrayList::ToArray(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* ReadOnlyArrayList_ToArray_m8F6338C760B9E293DC38E76A456CC0207B042230 (ReadOnlyArrayList_t8BE44A98B45F512DBD83604A0D468C79822107E7* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_6;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		RuntimeArray* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeArray*, Type_t* >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
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
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		__this->____index_1 = (-1);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___list0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		__this->____version_2 = L_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = ___list0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		__this->____isArrayList_4 = L_7;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_8);
		return;
	}
}
// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayListEnumeratorSimple_Clone_mB8CAE8F92F790B72257148726FF453F8833228AB (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->____isArrayList_4;
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_5 = __this->____index_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->____list_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____size_1;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0060;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8 = __this->____list_0;
		NullCheck(L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____items_0;
		int32_t L_10 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_0;
		__this->____index_1 = L_11;
		int32_t L_12 = V_0;
		NullCheck(L_9);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->____currentElement_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_14);
		return (bool)1;
	}

IL_0060:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_15);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = __this->____list_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->____size_1;
		__this->____index_1 = L_17;
		return (bool)0;
	}

IL_007e:
	{
		int32_t L_18 = __this->____index_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_19 = __this->____list_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_19);
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_00b7;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = __this->____list_0;
		int32_t L_22 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_0;
		__this->____index_1 = L_23;
		int32_t L_24 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_21, L_24);
		__this->____currentElement_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_25);
		return (bool)1;
	}

IL_00b7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_26 = __this->____list_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_26);
		__this->____index_1 = L_27;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_28);
		return (bool)0;
	}
}
// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____currentElement_3;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		RuntimeObject* L_2 = V_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->____index_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var)));
	}

IL_0023:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var)));
	}

IL_002e:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple_Reset_mDF974CA5DDF1B8C46C756871711697AE745E3ABD (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____version_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = __this->____list_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_Reset_mDF974CA5DDF1B8C46C756871711697AE745E3ABD_RuntimeMethod_var)));
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_4);
		__this->____index_1 = (-1);
		return;
	}
}
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__cctor_mBEC9A7DC7A482D2F74844D36DB12A98BF18B5CEA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5), (void*)L_0);
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
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF((&((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields*)il2cpp_codegen_static_fields_for(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var))->___s_serializationInfoTable_21), LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_m86148F5434156C4EBFE958A775770256FDFA12CF_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m53109B9F270C606C6DBA73405F134DA215440A36 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bool ___trash0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, 0, (1.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m9E0D56D6ADE284D20176076FACBFA1628DD8EE80 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, L_0, (1.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t G_B10_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_001a:
	{
		float L_2 = ___loadFactor1;
		if ((!(((float)L_2) >= ((float)(0.100000001f)))))
		{
			goto IL_002a;
		}
	}
	{
		float L_3 = ___loadFactor1;
		if ((((float)L_3) <= ((float)(1.0f))))
		{
			goto IL_005b;
		}
	}

IL_002a:
	{
		double L_4 = (0.10000000000000001);
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_4);
		double L_6 = (1.0);
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE209FAE75837720CC82067C1D76DCD103784C60B)), L_5, L_7, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED1269E5C23EE33C8DD1238BDFE8303F0D986C1F)), L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_005b:
	{
		float L_10 = ___loadFactor1;
		__this->____loadFactor_14 = ((float)il2cpp_codegen_multiply((0.720000029f), L_10));
		int32_t L_11 = ___capacity0;
		float L_12 = __this->____loadFactor_14;
		V_0 = ((double)((float)(((float)L_11)/L_12)));
		double L_13 = V_0;
		if ((!(((double)L_13) > ((double)(2147483647.0)))))
		{
			goto IL_008f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_008f:
	{
		double L_15 = V_0;
		if ((((double)L_15) > ((double)(3.0))))
		{
			goto IL_009e;
		}
	}
	{
		G_B10_0 = 3;
		goto IL_00a5;
	}

IL_009e:
	{
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(il2cpp_codegen_cast_double_to_int<int32_t>(L_16), NULL);
		G_B10_0 = L_17;
	}

IL_00a5:
	{
		V_1 = G_B10_0;
		int32_t L_18 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_19 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->____buckets_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_10), (void*)L_19);
		float L_20 = __this->____loadFactor_14;
		int32_t L_21 = V_1;
		__this->____loadsize_13 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_20, ((float)L_21))));
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, RuntimeObject* ___equalityComparer2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		float L_1 = ___loadFactor1;
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___equalityComparer2;
		__this->____keycomparer_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_19), (void*)L_2);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m1F7298B21166D6C35BD6C6EC9F71BAC05981B164 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___equalityComparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___equalityComparer0;
		Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB(__this, 0, (1.0f), L_0, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		RuntimeObject* L_1 = ___equalityComparer1;
		Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB(__this, L_0, (1.0f), L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD50422D7B9D147207A33AB5BDC0B7CE963A51056 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, __this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.UInt32 System.Collections.Hashtable::InitHash(System.Object,System.Int32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, int32_t ___hashsize1, uint32_t* ___seed2, uint32_t* ___incr3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(32 /* System.Int32 System.Collections.Hashtable::GetHash(System.Object) */, __this, L_0);
		V_0 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		uint32_t* L_2 = ___seed2;
		uint32_t L_3 = V_0;
		*((int32_t*)L_2) = (int32_t)L_3;
		uint32_t* L_4 = ___incr3;
		uint32_t* L_5 = ___seed2;
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = ___hashsize1;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(1, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)101)))%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Add_mF9DD33B30614D8CCA5392AE6D00A040A7F0F19D5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_0, L_1, (bool)1, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Clear_m189F8A2E5FE36FEC069049240660F447B22F58A1 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count_11;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->____occupancy_12;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		V_0 = 0;
		goto IL_0058;
	}

IL_001e:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___hash_coll_2 = 0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = __this->____buckets_10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___key_0), (void*)NULL);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_6 = __this->____buckets_10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___val_1), (void*)NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0058:
	{
		int32_t L_9 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_10 = __this->____buckets_10;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		__this->____count_11 = 0;
		__this->____occupancy_12 = 0;
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}
}
// System.Object System.Collections.Hashtable::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_Clone_mB2563D44229924F89AE7F351E657CDF87CD7BF7B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		int32_t L_1 = __this->____count_11;
		RuntimeObject* L_2 = __this->____keycomparer_19;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_3, L_1, L_2, NULL);
		V_1 = L_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = V_1;
		int32_t L_5 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_4);
		il2cpp_codegen_memory_barrier();
		L_4->____version_15 = L_5;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_6 = V_1;
		float L_7 = __this->____loadFactor_14;
		NullCheck(L_6);
		L_6->____loadFactor_14 = L_7;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_8 = V_1;
		NullCheck(L_8);
		L_8->____count_11 = 0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		NullCheck(L_9);
		V_2 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		goto IL_006d;
	}

IL_0042:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___key_0;
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_15 = V_3;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_16 = V_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = V_1;
		RuntimeObject* L_18 = V_3;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_19 = V_0;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		RuntimeObject* L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___val_1;
		NullCheck(L_17);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_18, L_21);
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_23 = V_1;
		return L_23;
	}
}
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_Contains_m096438B2D1B051BAF09EEA1BB6A590A12DC1CA12 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, __this, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0_RuntimeMethod_var)));
	}

IL_0013:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		V_2 = L_2;
		RuntimeObject* L_3 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = V_2;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (&V_0), (&V_1), NULL);
		V_3 = L_5;
		V_4 = 0;
		uint32_t L_6 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = V_2;
		NullCheck(L_7);
		V_6 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
	}

IL_0033:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = V_2;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_12 = V_5;
		RuntimeObject* L_13 = L_12.___key_0;
		if (L_13)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_5;
		int32_t L_15 = L_14.___hash_coll_2;
		uint32_t L_16 = V_3;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_15&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_16)))))
		{
			goto IL_006c;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_17 = V_5;
		RuntimeObject* L_18 = L_17.___key_0;
		RuntimeObject* L_19 = ___key0;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(36 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_18, L_19);
		if (!L_20)
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		int32_t L_21 = V_6;
		uint32_t L_22 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_23 = V_2;
		NullCheck(L_23);
		V_6 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_21), ((int64_t)(uint64_t)L_22)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_24 = V_5;
		int32_t L_25 = L_24.___hash_coll_2;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_4 = L_27;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = V_2;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0090:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Hashtable::CopyKeys(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_0033;
	}

IL_000d:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key_0;
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeArray* L_8 = ___array0;
		RuntimeObject* L_9 = V_2;
		int32_t L_10 = ___arrayIndex1;
		int32_t L_11 = L_10;
		___arrayIndex1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		NullCheck(L_8);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_9, L_11, NULL);
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_1 = L_13;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Hashtable::CopyEntries(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyEntries_m5AA0C8FC1FE9E5F6DC2AEB98D18C00919783040B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_004c;
	}

IL_000d:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key_0;
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_7)))
		{
			goto IL_004c;
		}
	}
	{
		RuntimeObject* L_8 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___val_1;
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&V_3), L_8, L_11, NULL);
		RuntimeArray* L_12 = ___array0;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_13 = V_3;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14 = L_13;
		RuntimeObject* L_15 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_14);
		int32_t L_16 = ___arrayIndex1;
		int32_t L_17 = L_16;
		___arrayIndex1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_15, L_17, NULL);
	}

IL_004c:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_1 = L_19;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCAA2F88999132DA5422C607B25387A98089B3B06)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_5 = ___arrayIndex1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_0040:
	{
		RuntimeArray* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___arrayIndex1;
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 System.Collections.Hashtable::get_Count() */, __this);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_CopyTo_mF64638BD6F1A7003B362A0A410FCFC5B5304A989_RuntimeMethod_var)));
	}

IL_005b:
	{
		RuntimeArray* L_12 = ___array0;
		int32_t L_13 = ___arrayIndex1;
		Hashtable_CopyEntries_m5AA0C8FC1FE9E5F6DC2AEB98D18C00919783040B(__this, L_12, L_13, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::CopyValues(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		V_0 = L_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_003e;
	}

IL_000d:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___key_0;
		V_2 = L_4;
		RuntimeObject* L_5 = V_2;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_6 = V_2;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		RuntimeArray* L_8 = ___array0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___val_1;
		int32_t L_12 = ___arrayIndex1;
		int32_t L_13 = L_12;
		___arrayIndex1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		NullCheck(L_8);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_8, L_11, L_13, NULL);
	}

IL_003e:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		V_1 = L_15;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Object System.Collections.Hashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925_RuntimeMethod_var)));
	}

IL_0013:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		V_2 = L_2;
		RuntimeObject* L_3 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = V_2;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (&V_0), (&V_1), NULL);
		V_3 = L_5;
		V_4 = 0;
		uint32_t L_6 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = V_2;
		NullCheck(L_7);
		V_6 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
	}

IL_0033:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_003b:
	{
		int32_t L_8 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		V_7 = L_8;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_2;
		int32_t L_10 = V_6;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		bool L_13 = __this->____isWriterInProgress_16;
		il2cpp_codegen_memory_barrier();
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = V_7;
		int32_t L_15 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_006e;
		}
	}

IL_0065:
	{
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_8), NULL);
		goto IL_003b;
	}

IL_006e:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_16 = V_5;
		RuntimeObject* L_17 = L_16.___key_0;
		if (L_17)
		{
			goto IL_0079;
		}
	}
	{
		return NULL;
	}

IL_0079:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_18 = V_5;
		int32_t L_19 = L_18.___hash_coll_2;
		uint32_t L_20 = V_3;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_19&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_20)))))
		{
			goto IL_00a3;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_21 = V_5;
		RuntimeObject* L_22 = L_21.___key_0;
		RuntimeObject* L_23 = ___key0;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(36 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_22, L_23);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_25 = V_5;
		RuntimeObject* L_26 = L_25.___val_1;
		return L_26;
	}

IL_00a3:
	{
		int32_t L_27 = V_6;
		uint32_t L_28 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_29 = V_2;
		NullCheck(L_29);
		V_6 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_27), ((int64_t)(uint64_t)L_28)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_30 = V_5;
		int32_t L_31 = L_30.___hash_coll_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_32 = V_4;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		V_4 = L_33;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_34 = V_2;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_00ca:
	{
		return NULL;
	}
}
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_set_Item_mDF3D54BA5F202F104D31EFAE9065380FEF8859EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::expand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		NullCheck(L_0);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688(__this, L_2, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::rehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		NullCheck(L_0);
		Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::UpdateVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_15;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____version_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void System.Collections.Hashtable::rehash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___newsize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		__this->____occupancy_12 = 0;
		int32_t L_0 = ___newsize0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_005a;
	}

IL_0012:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_10;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = V_2;
		RuntimeObject* L_7 = L_6.___key_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_8 = V_2;
		RuntimeObject* L_9 = L_8.___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_10 = __this->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = V_2;
		int32_t L_12 = L_11.___hash_coll_2;
		V_3 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_13 = V_0;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_2;
		RuntimeObject* L_15 = L_14.___key_0;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_16 = V_2;
		RuntimeObject* L_17 = L_16.___val_1;
		int32_t L_18 = V_3;
		Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B(__this, L_13, L_15, L_17, L_18, NULL);
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005a:
	{
		int32_t L_20 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_21 = __this->____buckets_10;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_22 = V_0;
		__this->____buckets_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_10), (void*)L_22);
		float L_23 = __this->____loadFactor_14;
		int32_t L_24 = ___newsize0;
		__this->____loadsize_13 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_23, ((float)L_24))));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_System_Collections_IEnumerable_GetEnumerator_m1E7D435C0370CE614C891A645773762D0D04EC86 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_0 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_0, __this, 3, NULL);
		return L_0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_GetEnumerator_mFDC4AC74F7AB0A9DBDFC66B6A4A4EFFC8E33A453 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_0 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_0, __this, 3, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hashtable_GetHash_m459113F6E61C0DB4A4C015283CD15653D518E05A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____keycomparer_19;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____keycomparer_19;
		RuntimeObject* L_2 = ___key0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___key0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		return L_5;
	}
}
// System.Boolean System.Collections.Hashtable::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_get_IsReadOnly_m9355FDC2EFDC7DC7B450B08D1B7E701325CBAD3A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Hashtable::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_get_IsFixedSize_m0907A4D0CBA4817F22E1081870BCA5A5DA6515BB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_get_IsSynchronized_m21992E264BFB1D7F0B7A12BA9AA847136DDEA849 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_KeyEquals_m95D23B7F952AA10E9127A936B01A64995ACE54F6 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___item0, RuntimeObject* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		RuntimeObject* L_1 = ___item0;
		if ((!(((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___item0;
		RuntimeObject* L_3 = ___key1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		RuntimeObject* L_4 = __this->____keycomparer_19;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_5 = __this->____keycomparer_19;
		RuntimeObject* L_6 = ___item0;
		RuntimeObject* L_7 = ___key1;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return L_8;
	}

IL_0027:
	{
		RuntimeObject* L_9 = ___item0;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_10 = ___item0;
		RuntimeObject* L_11 = ___key1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		return L_12;
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Keys_mA9014B9C2DC73105DF8D383EDD50438A82E67D10 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____keys_17;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* L_1 = (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77*)il2cpp_codegen_object_new(KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		KeyCollection__ctor_m2F5EB768C82E9BCAA0CAB8823EFE996749ABFDDD(L_1, __this, NULL);
		__this->____keys_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys_17), (void*)L_1);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->____keys_17;
		return L_2;
	}
}
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Values_m7ABC6924A8E924B2CE1EBEBBB90D2EE393B2A88E (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____values_18;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* L_1 = (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F*)il2cpp_codegen_object_new(ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ValueCollection__ctor_m9EE64DC0395F01EB90DC1A0863F4B41A2501E226(L_1, __this, NULL);
		__this->____values_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_18), (void*)L_1);
	}

IL_0014:
	{
		RuntimeObject* L_2 = __this->____values_18;
		return L_2;
	}
}
// System.Void System.Collections.Hashtable::Insert(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___nvalue1, bool ___add2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____count_11;
		int32_t L_3 = __this->____loadsize_13;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937(__this, NULL);
		goto IL_0047;
	}

IL_0029:
	{
		int32_t L_4 = __this->____occupancy_12;
		int32_t L_5 = __this->____loadsize_13;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->____count_11;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0047;
		}
	}
	{
		Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5(__this, NULL);
	}

IL_0047:
	{
		RuntimeObject* L_7 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = __this->____buckets_10;
		NullCheck(L_8);
		uint32_t L_9;
		L_9 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), (&V_0), (&V_1), NULL);
		V_2 = L_9;
		V_3 = 0;
		V_4 = (-1);
		uint32_t L_10 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = __this->____buckets_10;
		NullCheck(L_11);
		V_5 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
	}

IL_006c:
	{
		int32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_13 = __this->____buckets_10;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		RuntimeObject* L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_16 = __this->____buckets_10;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_16))))
		{
			goto IL_00a4;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_17 = __this->____buckets_10;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hash_coll_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_20 = V_5;
		V_4 = L_20;
	}

IL_00a4:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_21 = __this->____buckets_10;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		RuntimeObject* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___key_0;
		if (!L_23)
		{
			goto IL_00f1;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_24 = __this->____buckets_10;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		RuntimeObject* L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_27 = __this->____buckets_10;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_27))))
		{
			goto IL_015e;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = __this->____buckets_10;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___hash_coll_2;
		if (((int64_t)(((int64_t)L_30)&((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL))))))
		{
			goto IL_015e;
		}
	}

IL_00f1:
	{
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_32 = V_4;
		V_5 = L_32;
	}

IL_00fa:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_33 = __this->____buckets_10;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		RuntimeObject* L_35 = ___nvalue1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___val_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___val_1), (void*)L_35);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_10;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		RuntimeObject* L_38 = ___key0;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___key_0 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___key_0), (void*)L_38);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_39 = __this->____buckets_10;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		int32_t* L_41 = (&((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___hash_coll_2);
		int32_t* L_42 = L_41;
		int32_t L_43 = *((int32_t*)L_42);
		uint32_t L_44 = V_2;
		*((int32_t*)L_42) = (int32_t)((int32_t)(L_43|(int32_t)L_44));
		int32_t L_45 = __this->____count_11;
		__this->____count_11 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_015e:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_46 = __this->____buckets_10;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		int32_t L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___hash_coll_2;
		uint32_t L_49 = V_2;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_48&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_49)))))
		{
			goto IL_01e8;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_50 = __this->____buckets_10;
		int32_t L_51 = V_5;
		NullCheck(L_50);
		RuntimeObject* L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___key_0;
		RuntimeObject* L_53 = ___key0;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(36 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_52, L_53);
		if (!L_54)
		{
			goto IL_01e8;
		}
	}
	{
		bool L_55 = ___add2;
		if (!L_55)
		{
			goto IL_01bc;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_56 = __this->____buckets_10;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		RuntimeObject* L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___key_0;
		RuntimeObject* L_59 = ___key0;
		String_t* L_60;
		L_60 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62EDD94B35AE1C598F9C8060E6F26AD1470D672D)), L_58, L_59, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_61);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}

IL_01bc:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_62 = __this->____buckets_10;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		RuntimeObject* L_64 = ___nvalue1;
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___val_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___val_1), (void*)L_64);
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_01e8:
	{
		int32_t L_65 = V_4;
		if ((!(((uint32_t)L_65) == ((uint32_t)(-1)))))
		{
			goto IL_022b;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_66 = __this->____buckets_10;
		int32_t L_67 = V_5;
		NullCheck(L_66);
		int32_t L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___hash_coll_2;
		if ((((int32_t)L_68) < ((int32_t)0)))
		{
			goto IL_022b;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_69 = __this->____buckets_10;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t* L_71 = (&((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_70)))->___hash_coll_2);
		int32_t* L_72 = L_71;
		int32_t L_73 = *((int32_t*)L_72);
		*((int32_t*)L_72) = (int32_t)((int32_t)(L_73|((int32_t)-2147483648LL)));
		int32_t L_74 = __this->____occupancy_12;
		__this->____occupancy_12 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_022b:
	{
		int32_t L_75 = V_5;
		uint32_t L_76 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_77 = __this->____buckets_10;
		NullCheck(L_77);
		V_5 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_75), ((int64_t)(uint64_t)L_76)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))));
		int32_t L_78 = V_3;
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		V_3 = L_79;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_80 = __this->____buckets_10;
		NullCheck(L_80);
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_81 = V_4;
		if ((((int32_t)L_81) == ((int32_t)(-1))))
		{
			goto IL_02b9;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_82 = __this->____buckets_10;
		int32_t L_83 = V_4;
		NullCheck(L_82);
		RuntimeObject* L_84 = ___nvalue1;
		((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))->___val_1 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))->___val_1), (void*)L_84);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_85 = __this->____buckets_10;
		int32_t L_86 = V_4;
		NullCheck(L_85);
		RuntimeObject* L_87 = ___key0;
		((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___key_0 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___key_0), (void*)L_87);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_88 = __this->____buckets_10;
		int32_t L_89 = V_4;
		NullCheck(L_88);
		int32_t* L_90 = (&((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89)))->___hash_coll_2);
		int32_t* L_91 = L_90;
		int32_t L_92 = *((int32_t*)L_91);
		uint32_t L_93 = V_2;
		*((int32_t*)L_91) = (int32_t)((int32_t)(L_92|(int32_t)L_93));
		int32_t L_94 = __this->____count_11;
		__this->____count_11 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_02b9:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_95 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_95);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_95, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD48F64ABB05D3F39046297B361BD8AA53451659A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Hashtable::putEntry(System.Collections.Hashtable/bucket[],System.Object,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ___newBuckets0, RuntimeObject* ___key1, RuntimeObject* ___nvalue2, int32_t ___hashcode3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___hashcode3;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = ___newBuckets0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)101)))%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1))))));
		uint32_t L_3 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = ___newBuckets0;
		NullCheck(L_4);
		V_2 = ((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
	}

IL_0016:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_5 = ___newBuckets0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___key_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = ___newBuckets0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		RuntimeObject* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = __this->____buckets_10;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_11))))
		{
			goto IL_0065;
		}
	}

IL_0038:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_12 = ___newBuckets0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		RuntimeObject* L_14 = ___nvalue2;
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___val_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___val_1), (void*)L_14);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_15 = ___newBuckets0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___key1;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key_0), (void*)L_17);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_18 = ___newBuckets0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t* L_20 = (&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hash_coll_2);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = ___hashcode3;
		*((int32_t*)L_21) = (int32_t)((int32_t)(L_22|L_23));
		return;
	}

IL_0065:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_24 = ___newBuckets0;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___hash_coll_2;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_27 = ___newBuckets0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t* L_29 = (&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___hash_coll_2);
		int32_t* L_30 = L_29;
		int32_t L_31 = *((int32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)(L_31|((int32_t)-2147483648LL)));
		int32_t L_32 = __this->____occupancy_12;
		__this->____occupancy_12 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0097:
	{
		int32_t L_33 = V_2;
		uint32_t L_34 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_35 = ___newBuckets0;
		NullCheck(L_35);
		V_2 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_33), ((int64_t)(uint64_t)L_34)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))));
		goto IL_0016;
	}
}
// System.Void System.Collections.Hashtable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Remove_mE9F11255E490CB42E8F6D9F659EA5F3B9A3A6D1F_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_3 = __this->____buckets_10;
		NullCheck(L_3);
		uint32_t L_4;
		L_4 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), (&V_0), (&V_1), NULL);
		V_2 = L_4;
		V_3 = 0;
		uint32_t L_5 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_6 = __this->____buckets_10;
		NullCheck(L_6);
		V_5 = ((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
	}

IL_0035:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = __this->____buckets_10;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = V_4;
		int32_t L_12 = L_11.___hash_coll_2;
		uint32_t L_13 = V_2;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_12&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_13)))))
		{
			goto IL_0102;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_4;
		RuntimeObject* L_15 = L_14.___key_0;
		RuntimeObject* L_16 = ___key0;
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(36 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_15, L_16);
		if (!L_17)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_18 = __this->____buckets_10;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		int32_t* L_20 = (&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___hash_coll_2);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		*((int32_t*)L_21) = (int32_t)((int32_t)(L_22&((int32_t)-2147483648LL)));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_23 = __this->____buckets_10;
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___hash_coll_2;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_26 = __this->____buckets_10;
		int32_t L_27 = V_5;
		NullCheck(L_26);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = __this->____buckets_10;
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key_0 = (RuntimeObject*)L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___key_0), (void*)(RuntimeObject*)L_28);
		goto IL_00d1;
	}

IL_00be:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_29 = __this->____buckets_10;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___key_0), (void*)NULL);
	}

IL_00d1:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_31 = __this->____buckets_10;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___val_1), (void*)NULL);
		int32_t L_33 = __this->____count_11;
		__this->____count_11 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_16 = (bool)0;
		return;
	}

IL_0102:
	{
		int32_t L_34 = V_5;
		uint32_t L_35 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_10;
		NullCheck(L_36);
		V_5 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_34), ((int64_t)(uint64_t)L_35)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_37 = V_4;
		int32_t L_38 = L_37.___hash_coll_2;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_39 = V_3;
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		V_3 = L_40;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_41 = __this->____buckets_10;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0035;
		}
	}

IL_0131:
	{
		return;
	}
}
// System.Object System.Collections.Hashtable::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_SyncRoot_mED003D6ED8C083913A6EC414AB950AE4EE42ED4F (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_20;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_20);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_20;
		return L_4;
	}
}
// System.Int32 System.Collections.Hashtable::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hashtable_get_Count_mA7BE8DF97C45F9046C93AC8F0C57EA31F1257999 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_11;
		return L_0;
	}
}
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* Hashtable_Synchronized_m6C533F21D7532A6118974AE7634AB28C76765EF5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___table0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___table0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4054C6E4E11B87959DDCCED1FDA757609E47F49)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Synchronized_m6C533F21D7532A6118974AE7634AB28C76765EF5_RuntimeMethod_var)));
	}

IL_000e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = ___table0;
		SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* L_3 = (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5*)il2cpp_codegen_object_new(SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SyncHashtable__ctor_mFFE7535A50219583B15ACC748FE3E7CB6B52EEAA(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* V_6 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, __this);
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0169:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0172;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_4, NULL);
				}

IL_0172:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_5, (&V_1), NULL);
				int32_t L_6 = __this->____version_15;
				il2cpp_codegen_memory_barrier();
				V_2 = L_6;
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = ___info0;
				float L_8 = __this->____loadFactor_14;
				NullCheck(L_7);
				SerializationInfo_AddValue_m6237DBFE29011A85D27E76E64BD806D7BFC4D46C(L_7, _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB, L_8, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___info0;
				int32_t L_10 = __this->____version_15;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_9);
				SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_9, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_10, NULL);
				RuntimeObject* L_11 = __this->____keycomparer_19;
				V_3 = L_11;
				RuntimeObject* L_12 = V_3;
				if (L_12)
				{
					goto IL_0084_1;
				}
			}
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_13 = ___info0;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				NullCheck(L_13);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_13, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL, L_15, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_16 = ___info0;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				NullCheck(L_16);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_16, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, NULL, L_18, NULL);
				goto IL_00e4_1;
			}

IL_0084_1:
			{
				RuntimeObject* L_19 = V_3;
				if (!((CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465*)IsInstSealed((RuntimeObject*)L_19, CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var)))
				{
					goto IL_00ce_1;
				}
			}
			{
				RuntimeObject* L_20 = V_3;
				V_6 = ((CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465*)IsInstSealed((RuntimeObject*)L_20, CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var));
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_21 = ___info0;
				CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* L_22 = V_6;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36_inline(L_22, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
				NullCheck(L_21);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_21, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_23, L_25, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = ___info0;
				CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* L_27 = V_6;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599_inline(L_27, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
				Type_t* L_30;
				L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
				NullCheck(L_26);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_26, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, L_28, L_30, NULL);
				goto IL_00e4_1;
			}

IL_00ce_1:
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_31 = ___info0;
				RuntimeObject* L_32 = V_3;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				NullCheck(L_31);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_31, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_32, L_34, NULL);
			}

IL_00e4_1:
			{
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_35 = ___info0;
				bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_10;
				NullCheck(L_36);
				NullCheck(L_35);
				SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_35, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, ((int32_t)(((RuntimeArray*)L_36)->max_length)), NULL);
				int32_t L_37 = __this->____count_11;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_37);
				V_4 = L_38;
				int32_t L_39 = __this->____count_11;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_39);
				V_5 = L_40;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_4;
				Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4(__this, (RuntimeArray*)L_41, 0, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_5;
				Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF(__this, (RuntimeArray*)L_42, 0, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_43 = ___info0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				NullCheck(L_43);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_43, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, (RuntimeObject*)L_44, L_46, NULL);
				SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_47 = ___info0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
				Type_t* L_50;
				L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
				NullCheck(L_47);
				SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_47, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, (RuntimeObject*)L_48, L_50, NULL);
				int32_t L_51 = __this->____version_15;
				il2cpp_codegen_memory_barrier();
				int32_t L_52 = V_2;
				if ((((int32_t)L_51) == ((int32_t)L_52)))
				{
					goto IL_0167_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_53 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				NullCheck(L_53);
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_53, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_GetObjectData_m1BD67716932F63BD5EBD6A946564D4C7E2C573D9_RuntimeMethod_var)));
			}

IL_0167_1:
			{
				goto IL_0173;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0173:
	{
		return;
	}
}
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_5 = NULL;
	SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* V_6 = NULL;
	String_t* V_7 = NULL;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_1;
		L_1 = Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_1, __this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_4 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_0025:
	{
		V_1 = 0;
		V_2 = (RuntimeObject*)NULL;
		V_3 = (RuntimeObject*)NULL;
		V_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		V_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_6;
		L_6 = SerializationInfo_GetEnumerator_m5230A1D4E4B612E90B10E2034C638CD42F667EA6(L_5, NULL);
		V_6 = L_6;
		goto IL_020e;
	}

IL_003e:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_7 = V_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = SerializationInfoEnumerator_get_Name_m58B6D682B6C829258730C1E952E9099ACDDAE734(L_7, NULL);
		V_7 = L_8;
		String_t* L_9 = V_7;
		uint32_t L_10;
		L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m52370B9D7DEAF095B34C6AE27338067A3A1CF886(L_9, NULL);
		V_8 = L_10;
		uint32_t L_11 = V_8;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1613443821)))))
		{
			goto IL_007f;
		}
	}
	{
		uint32_t L_12 = V_8;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)891156946))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_13 = V_8;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1228509323))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_14 = V_8;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)1613443821))))
		{
			goto IL_0125;
		}
	}
	{
		goto IL_020e;
	}

IL_007f:
	{
		uint32_t L_15 = V_8;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-1810657867)))))
		{
			goto IL_00a2;
		}
	}
	{
		uint32_t L_16 = V_8;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1924324773))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_8;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1810657867))))
		{
			goto IL_010f;
		}
	}
	{
		goto IL_020e;
	}

IL_00a2:
	{
		uint32_t L_18 = V_8;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-938822048))))
		{
			goto IL_00cd;
		}
	}
	{
		uint32_t L_19 = V_8;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)-811751054)))))
		{
			goto IL_020e;
		}
	}
	{
		String_t* L_20 = V_7;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB, NULL);
		if (L_21)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_020e;
	}

IL_00cd:
	{
		String_t* L_22 = V_7;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		if (L_23)
		{
			goto IL_0167;
		}
	}
	{
		goto IL_020e;
	}

IL_00e3:
	{
		String_t* L_24 = V_7;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, NULL);
		if (L_25)
		{
			goto IL_0178;
		}
	}
	{
		goto IL_020e;
	}

IL_00f9:
	{
		String_t* L_26 = V_7;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, NULL);
		if (L_27)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_020e;
	}

IL_010f:
	{
		String_t* L_28 = V_7;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, NULL);
		if (L_29)
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_020e;
	}

IL_0125:
	{
		String_t* L_30 = V_7;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, NULL);
		if (L_31)
		{
			goto IL_01d4;
		}
	}
	{
		goto IL_020e;
	}

IL_013b:
	{
		String_t* L_32 = V_7;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, NULL);
		if (L_33)
		{
			goto IL_01f2;
		}
	}
	{
		goto IL_020e;
	}

IL_0151:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_34 = V_0;
		NullCheck(L_34);
		float L_35;
		L_35 = SerializationInfo_GetSingle_mD3CE2233BB3DE5DC90F2AE4F24C5DBD0C74A4037(L_34, _stringLiteral539E8D7071DA3C24DE80E9DDA3E12DBCDC283FBB, NULL);
		__this->____loadFactor_14 = L_35;
		goto IL_020e;
	}

IL_0167:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_36, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_1 = L_37;
		goto IL_020e;
	}

IL_0178:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		NullCheck(L_38);
		RuntimeObject* L_41;
		L_41 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_38, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_40, NULL);
		__this->____keycomparer_19 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_19), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_41, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		goto IL_020e;
	}

IL_019a:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		NullCheck(L_42);
		RuntimeObject* L_45;
		L_45 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_42, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_44, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_45, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var));
		goto IL_020e;
	}

IL_01b7:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		NullCheck(L_46);
		RuntimeObject* L_49;
		L_49 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_46, _stringLiteralA87F2ACE872ABEBEB39F138C43E3F9DFA255BDB1, L_48, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_49, IHashCodeProvider_t666BBC3F1EA6821F808B7D2D7B98808A5863D139_il2cpp_TypeInfo_var));
		goto IL_020e;
	}

IL_01d4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_50 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		NullCheck(L_50);
		RuntimeObject* L_53;
		L_53 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_50, _stringLiteral11F27A23993F7FC4801D0240B7C41D835B44B745, L_52, NULL);
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_53, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		goto IL_020e;
	}

IL_01f2:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		NullCheck(L_54);
		RuntimeObject* L_57;
		L_57 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_54, _stringLiteral12B3B315E8F60BA82CD3BA50FEE2FE5C0949B763, L_56, NULL);
		V_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_57, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
	}

IL_020e:
	{
		SerializationInfoEnumerator_t810DE600E5F6AA4F2B66A7F56074277CCD8F1540* L_58 = V_6;
		NullCheck(L_58);
		bool L_59;
		L_59 = SerializationInfoEnumerator_MoveNext_m4F052C960AE85EFED1048CAAAC538AB3714078A6(L_58, NULL);
		if (L_59)
		{
			goto IL_003e;
		}
	}
	{
		float L_60 = __this->____loadFactor_14;
		int32_t L_61 = V_1;
		__this->____loadsize_13 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_60, ((float)L_61))));
		RuntimeObject* L_62 = __this->____keycomparer_19;
		if (L_62)
		{
			goto IL_0245;
		}
	}
	{
		RuntimeObject* L_63 = V_2;
		if (L_63)
		{
			goto IL_0238;
		}
	}
	{
		RuntimeObject* L_64 = V_3;
		if (!L_64)
		{
			goto IL_0245;
		}
	}

IL_0238:
	{
		RuntimeObject* L_65 = V_3;
		RuntimeObject* L_66 = V_2;
		CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* L_67 = (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465*)il2cpp_codegen_object_new(CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		CompatibleComparer__ctor_mD070CC744D2BA684391418B77E61E24F8E735492(L_67, L_65, L_66, NULL);
		__this->____keycomparer_19 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_19), (void*)L_67);
	}

IL_0245:
	{
		int32_t L_68 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_69 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_68);
		__this->____buckets_10 = L_69;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_10), (void*)L_69);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_70 = V_4;
		if (L_70)
		{
			goto IL_0260;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_71 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_71);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_71, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_0260:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = V_5;
		if (L_72)
		{
			goto IL_026f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_73 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_73);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB85B9BFFDE3135B37337A7491E104BC8493E6C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_026f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_74 = V_4;
		NullCheck(L_74);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_75 = V_5;
		NullCheck(L_75);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
		{
			goto IL_0284;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_76 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_76);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_76, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AF22EA5A6A5A696D2456E9227B5745A698E05A8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_0284:
	{
		V_9 = 0;
		goto IL_02b2;
	}

IL_0289:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = V_4;
		int32_t L_78 = V_9;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		RuntimeObject* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		if (L_80)
		{
			goto IL_029b;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_81 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_81);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_81, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A42FCEEAC1D98507D8329C4992B135D890D96AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_OnDeserialization_mF74C1F7E5BC49CB2FDD0955B7B82D1B663344565_RuntimeMethod_var)));
	}

IL_029b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = V_4;
		int32_t L_83 = V_9;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86 = V_5;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		RuntimeObject* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_85, L_89, (bool)1, NULL);
		int32_t L_90 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_02b2:
	{
		int32_t L_91 = V_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = V_4;
		NullCheck(L_92);
		if ((((int32_t)L_91) < ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length)))))
		{
			goto IL_0289;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94;
		L_94 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_93, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____version_15 = L_94;
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_95;
		L_95 = Hashtable_get_SerializationInfoTable_m29B0EBA91904F2C579B7F3BE6A791DE9F1F6C8BC(NULL);
		NullCheck(L_95);
		bool L_96;
		L_96 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_95, __this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			marshaled.___key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___key_0));
			(marshaled.___key_0)->AddRef();
		}
		else
		{
			marshaled.___key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___key_0);
		}
	}
	else
	{
		marshaled.___key_0 = NULL;
	}
	if (unmarshaled.___val_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			marshaled.___val_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___val_1));
			(marshaled.___val_1)->AddRef();
		}
		else
		{
			marshaled.___val_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___val_1);
		}
	}
	else
	{
		marshaled.___val_1 = NULL;
	}
	marshaled.___hash_coll_2 = unmarshaled.___hash_coll_2;
}
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___key_0 != NULL)
	{
		unmarshaled.___key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___key_0), Il2CppIUnknown::IID, marshaled.___key_0);
		}
	}
	else
	{
		unmarshaled.___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)NULL);
	}
	if (marshaled.___val_1 != NULL)
	{
		unmarshaled.___val_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___val_1), Il2CppIUnknown::IID, marshaled.___val_1);
		}
	}
	else
	{
		unmarshaled.___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)NULL);
	}
	int32_t unmarshaledhash_coll_temp_2 = 0;
	unmarshaledhash_coll_temp_2 = marshaled.___hash_coll_2;
	unmarshaled.___hash_coll_2 = unmarshaledhash_coll_temp_2;
}
// Conversion method for clean up from marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled)
{
	if (marshaled.___key_0 != NULL)
	{
		(marshaled.___key_0)->Release();
		marshaled.___key_0 = NULL;
	}
	if (marshaled.___val_1 != NULL)
	{
		(marshaled.___val_1)->Release();
		marshaled.___val_1 = NULL;
	}
}
// Conversion methods for marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled)
{
	if (unmarshaled.___key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			marshaled.___key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___key_0));
			(marshaled.___key_0)->AddRef();
		}
		else
		{
			marshaled.___key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___key_0);
		}
	}
	else
	{
		marshaled.___key_0 = NULL;
	}
	if (unmarshaled.___val_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			marshaled.___val_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___val_1));
			(marshaled.___val_1)->AddRef();
		}
		else
		{
			marshaled.___val_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___val_1);
		}
	}
	else
	{
		marshaled.___val_1 = NULL;
	}
	marshaled.___hash_coll_2 = unmarshaled.___hash_coll_2;
}
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com_back(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___key_0 != NULL)
	{
		unmarshaled.___key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___key_0), Il2CppIUnknown::IID, marshaled.___key_0);
		}
	}
	else
	{
		unmarshaled.___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)NULL);
	}
	if (marshaled.___val_1 != NULL)
	{
		unmarshaled.___val_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___val_1), Il2CppIUnknown::IID, marshaled.___val_1);
		}
	}
	else
	{
		unmarshaled.___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)NULL);
	}
	int32_t unmarshaledhash_coll_temp_2 = 0;
	unmarshaledhash_coll_temp_2 = marshaled.___hash_coll_2;
	unmarshaled.___hash_coll_2 = unmarshaledhash_coll_temp_2;
}
// Conversion method for clean up from marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com_cleanup(bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled)
{
	if (marshaled.___key_0 != NULL)
	{
		(marshaled.___key_0)->Release();
		marshaled.___key_0 = NULL;
	}
	if (marshaled.___val_1 != NULL)
	{
		(marshaled.___val_1)->Release();
		marshaled.___val_1 = NULL;
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
// System.Void System.Collections.Hashtable/KeyCollection::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m2F5EB768C82E9BCAA0CAB8823EFE996749ABFDDD (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___hashtable0;
		__this->____hashtable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashtable_0), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.Hashtable/KeyCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8 (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___arrayIndex1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_003b:
	{
		RuntimeArray* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___arrayIndex1;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = __this->____hashtable_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->____count_11;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_11)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyCollection_CopyTo_m5062910D0AF077DE093FA9C67E7E9DF942792AF8_RuntimeMethod_var)));
	}

IL_005b:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_13 = __this->____hashtable_0;
		RuntimeArray* L_14 = ___array0;
		int32_t L_15 = ___arrayIndex1;
		NullCheck(L_13);
		Hashtable_CopyKeys_mDD7A5AE7064B9845366D9116BC670A210A1C5AA4(L_13, L_14, L_15, NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable/KeyCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_GetEnumerator_mB5D64FA7602FCDC338B3B14FAB7728BC7BFF1B66 (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_1 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_1, L_0, 1, NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable/KeyCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyCollection_get_IsSynchronized_m95B7B4A1A0DAA534532D2EAEDC6EF0C0CA37B27A (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Collections.Hashtable::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Hashtable/KeyCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeyCollection_get_SyncRoot_m6F13C08AEF47BF3A079CE95E1E0CC3B8E205C30E (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.Hashtable/KeyCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyCollection_get_Count_mE0D7DA771777A99DBC8D6C477465529BCB0DBC4B (KeyCollection_tBB3F4721A1C8F423C471AC11D255D44189022E77* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count_11;
		return L_1;
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
// System.Void System.Collections.Hashtable/ValueCollection::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m9EE64DC0395F01EB90DC1A0863F4B41A2501E226 (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___hashtable0;
		__this->____hashtable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashtable_0), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.Hashtable/ValueCollection::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_mD8B0681E6639A47EF9AFE951316CBA082381787F (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mD8B0681E6639A47EF9AFE951316CBA082381787F_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mD8B0681E6639A47EF9AFE951316CBA082381787F_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___arrayIndex1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mD8B0681E6639A47EF9AFE951316CBA082381787F_RuntimeMethod_var)));
	}

IL_003b:
	{
		RuntimeArray* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		int32_t L_9 = ___arrayIndex1;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = __this->____hashtable_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->____count_11;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_11)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueCollection_CopyTo_mD8B0681E6639A47EF9AFE951316CBA082381787F_RuntimeMethod_var)));
	}

IL_005b:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_13 = __this->____hashtable_0;
		RuntimeArray* L_14 = ___array0;
		int32_t L_15 = ___arrayIndex1;
		NullCheck(L_13);
		Hashtable_CopyValues_mBF30183D730BBFCA6D6313FF616834605B49D8CF(L_13, L_14, L_15, NULL);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable/ValueCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_GetEnumerator_mBDFC1F0690282E5BCE3FF63FB3909DEBEE1524E2 (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_1 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_1, L_0, 2, NULL);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable/ValueCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_get_IsSynchronized_mBC63B8B1C2CDC6E49AEE47B0D33FB90DB436159A (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Collections.Hashtable::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Object System.Collections.Hashtable/ValueCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_get_SyncRoot_m2D031ED71B7959EDCB633851C895BA5E0FE03D38 (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Collections.Hashtable/ValueCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m4CB5B72CAB617E0835BCAD9AAD8FEE3F4F51684B (ValueCollection_tC43990EDD17B7EDE8FCE3674B9537163DCDA557F* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____hashtable_0;
		NullCheck(L_0);
		int32_t L_1 = L_0->____count_11;
		return L_1;
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
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable__ctor_mFFE7535A50219583B15ACC748FE3E7CB6B52EEAA (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___table0, const RuntimeMethod* method) 
{
	{
		Hashtable__ctor_m53109B9F270C606C6DBA73405F134DA215440A36(__this, (bool)0, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___table0;
		__this->____table_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____table_22), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable__ctor_mF1BBFC51ECC24E48FE77B39E9124110ADA45941A (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		Hashtable__ctor_mD50422D7B9D147207A33AB5BDC0B7CE963A51056(__this, L_0, L_1, NULL);
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_2 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SyncHashtable__ctor_mF1BBFC51ECC24E48FE77B39E9124110ADA45941A_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_GetObjectData_mCBA586B5407FEAEB6B8F5F4C6E62D6EA2EAE40D2 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SyncHashtable_GetObjectData_mCBA586B5407FEAEB6B8F5F4C6E62D6EA2EAE40D2_RuntimeMethod_var)));
	}
}
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncHashtable_get_Count_m5124D18EEE5DF7E5187361FD0C897E8E13A3C7D3 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncHashtable_get_IsReadOnly_mA4AF243CE8CABC312F7477D40105F4786CF3CE3E (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Collections.Hashtable::get_IsReadOnly() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncHashtable_get_IsFixedSize_m1FC57C41F0352C74C207CB0BA3836E7CCC77BDF6 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(34 /* System.Boolean System.Collections.Hashtable::get_IsFixedSize() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncHashtable_get_IsSynchronized_m08DD70FD0CCD633593D5F8BA7F330A0984E2B0A0 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_get_Item_m3FD7FADA73BF581BE038A6EB7E9C0FD6E4183DDB (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_set_Item_mD2CE57C5A07260D04739928629F028426874396E (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			RuntimeObject* L_6 = ___key0;
			RuntimeObject* L_7 = ___value1;
			NullCheck(L_5);
			VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_5, L_6, L_7);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_get_SyncRoot_mBB85DA844F4D144DFB2EC51719A992317A523332 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_Add_m7DAEAA3D6D859C82AB6ABF0D2E1345A817E155F0 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			RuntimeObject* L_6 = ___key0;
			RuntimeObject* L_7 = ___value1;
			NullCheck(L_5);
			VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_5, L_6, L_7);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_Clear_m4FE30F7F4DCD01B8DD8B81B9D8E764386EB42A3A (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			NullCheck(L_5);
			VirtualActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_5);
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncHashtable_Contains_m2D6FBF36B8C645D0BA6D66E3C69B82C47CB071FA (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncHashtable_ContainsKey_m29B505232C709E842FDD2398C1B6A75C9708241E (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SyncHashtable_ContainsKey_m29B505232C709E842FDD2398C1B6A75C9708241E_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = __this->____table_22;
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(27 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_CopyTo_mB6352034856CABEA5D821354EBCFA238E697C4D6 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeArray* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			RuntimeArray* L_6 = ___array0;
			int32_t L_7 = ___arrayIndex1;
			NullCheck(L_5);
			VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(28 /* System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32) */, L_5, L_6, L_7);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		return;
	}
}
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_Clone_mB1FECA47604E8960DC3BE39E5226FAFEA0F05493 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0037;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(25 /* System.Object System.Collections.Hashtable::Clone() */, L_5);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7;
			L_7 = Hashtable_Synchronized_m6C533F21D7532A6118974AE7634AB28C76765EF5(((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_6, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), NULL);
			V_2 = L_7;
			goto IL_0038;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m437B1ABADE6A89720D9CAD530D4C958D59A32CCE (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_GetEnumerator_m4CD05DF6E29AE4225A00E174E1FA03FEB3CB661C (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_get_Keys_mC2B5F864E0D347330FB1B4274BD9860D51D455B8 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_5);
			V_2 = L_6;
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncHashtable_get_Values_m8483FBC80E7974D6874DBEC7487A9985D8AD2214 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.ICollection System.Collections.Hashtable::get_Values() */, L_5);
			V_2 = L_6;
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		RuntimeObject* L_7 = V_2;
		return L_7;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_Remove_m6D4F19F6DF865171755FBAAA9924682233135417 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____table_22;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(40 /* System.Object System.Collections.Hashtable::get_SyncRoot() */, L_0);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____table_22;
			RuntimeObject* L_6 = ___key0;
			NullCheck(L_5);
			VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_5, L_6);
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Void System.Collections.Hashtable/SyncHashtable::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncHashtable_OnDeserialization_m7F281A09A414E5E887F89170F9915CF2E11D11F1 (SyncHashtable_tCFD5BEE5835423F86036D747FB092CC4AD3EB7B5* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
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
// System.Void System.Collections.Hashtable/HashtableEnumerator::.ctor(System.Collections.Hashtable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, int32_t ___getObjRetType1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___hashtable0;
		__this->____hashtable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashtable_0), (void*)L_0);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___hashtable0;
		NullCheck(L_1);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = L_1->____buckets_10;
		NullCheck(L_2);
		__this->____bucket_1 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = ___hashtable0;
		NullCheck(L_3);
		int32_t L_4 = L_3->____version_15;
		il2cpp_codegen_memory_barrier();
		__this->____version_2 = L_4;
		__this->____current_3 = (bool)0;
		int32_t L_5 = ___getObjRetType1;
		__this->____getObjectRetType_4 = L_5;
		return;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_Clone_m85F090BFD61509B1F8B16A10E0DFB78606C96873 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentKey_5;
		return L_2;
	}
}
// System.Boolean System.Collections.Hashtable/HashtableEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = __this->____version_2;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____hashtable_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_008c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = __this->____bucket_1;
		__this->____bucket_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____hashtable_0;
		NullCheck(L_5);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_6 = L_5->____buckets_10;
		int32_t L_7 = __this->____bucket_1;
		NullCheck(L_6);
		RuntimeObject* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___key_0;
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = __this->____hashtable_0;
		NullCheck(L_11);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_12 = L_11->____buckets_10;
		if ((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_12)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_13 = V_0;
		__this->____currentKey_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentKey_5), (void*)L_13);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = __this->____hashtable_0;
		NullCheck(L_14);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_15 = L_14->____buckets_10;
		int32_t L_16 = __this->____bucket_1;
		NullCheck(L_15);
		RuntimeObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___val_1;
		__this->____currentValue_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentValue_6), (void*)L_17);
		__this->____current_3 = (bool)1;
		return (bool)1;
	}

IL_008c:
	{
		int32_t L_18 = __this->____bucket_1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		__this->____current_3 = (bool)0;
		return (bool)0;
	}
}
// System.Collections.DictionaryEntry System.Collections.Hashtable/HashtableEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB HashtableEnumerator_get_Entry_m4DDDE56EB20FCAB680D4D871CF28910E6FFD7C20 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Entry_m4DDDE56EB20FCAB680D4D871CF28910E6FFD7C20_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentKey_5;
		RuntimeObject* L_3 = __this->____currentValue_6;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____getObjectRetType_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->____currentKey_5;
		return L_3;
	}

IL_0023:
	{
		int32_t L_4 = __this->____getObjectRetType_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = __this->____currentValue_6;
		return L_5;
	}

IL_0033:
	{
		RuntimeObject* L_6 = __this->____currentKey_5;
		RuntimeObject* L_7 = __this->____currentValue_6;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentValue_6;
		return L_2;
	}
}
// System.Void System.Collections.Hashtable/HashtableEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_2;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____hashtable_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version_15;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_Reset_m72C56174ABFACD3B9073CA3DB7134083D2803876_RuntimeMethod_var)));
	}

IL_0020:
	{
		__this->____current_3 = (bool)0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____hashtable_0;
		NullCheck(L_4);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_5 = L_4->____buckets_10;
		NullCheck(L_5);
		__this->____bucket_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		__this->____currentKey_5 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentKey_5), (void*)NULL);
		__this->____currentValue_6 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentValue_6), (void*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, const RuntimeMethod* method) 
{
	{
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::ConcurrentDictionary_AcquiringAllLocks(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider_ConcurrentDictionary_AcquiringAllLocks_mF33BBE9D19970C7F3C3DB3C0F6BCF16BEEC26EFA (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* __this, int32_t ___numOfBuckets0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3(__this, 3, ((int64_t)(-1)), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___numOfBuckets0;
		EventSource_WriteEvent_m8609472BD078A398CF4CA9DBF4BBDA1C454096A6(__this, 3, L_1, NULL);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Collections.Concurrent.CDSCollectionETWBCLProvider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CDSCollectionETWBCLProvider__cctor_mD453FA4DF10AC2B540573340C4BA29CC5995643A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999* L_0 = (CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999*)il2cpp_codegen_object_new(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CDSCollectionETWBCLProvider__ctor_m0A733DDB35201F79E9DED7B044B5D8484FC5448D(L_0, NULL);
		((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_StaticFields*)il2cpp_codegen_static_fields_for(CDSCollectionETWBCLProvider_tA904DD9138642E1D0520625652906C4775E3C999_il2cpp_TypeInfo_var))->___Log_1), (void*)L_0);
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
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m4650AA08FA75F015089EA648572674FC6511E8DF (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, _stringLiteral457BF4072EA28A68960C6F36D3FB2B96D339A700, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232969), NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(__this, L_0, NULL);
		Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline(__this, ((int32_t)-2146232969), NULL);
		return;
	}
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m546AE2CB4D7CBD6EA8E321CD8F1AE3D53ACFD29C (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		SystemException__ctor_mA2BB392E0F4CD8A4C132984F76B7A9FBDB3B6879(__this, L_0, L_1, NULL);
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
// System.String System.Collections.Generic.KeyValuePair::PairToString(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePair_PairToString_mBD93B04A82B9F554147E6FF8E6B90C5480B38646 (RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)91), NULL);
		RuntimeObject* L_3 = ___key0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		RuntimeObject* L_5 = ___key0;
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_5, NULL);
	}

IL_001c:
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RuntimeObject* L_9 = ___value1;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		RuntimeObject* L_11 = ___value1;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_11, NULL);
	}

IL_0033:
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)93), NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16;
		L_16 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_15, NULL);
		return L_16;
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Collections.Generic.IntrospectiveSortUtilities::FloorLog2PlusOne(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntrospectiveSortUtilities_FloorLog2PlusOne_m33AC60574EC2B80A3B7084361A3736D4CFE91F6D (int32_t ___n0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)(L_1/2));
	}

IL_000d:
	{
		int32_t L_2 = ___n0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Collections.Generic.IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF (RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		String_t* L_1;
		L_1 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064)), L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m119232371BEE9732FE70D22EE93B3818E577EFAF_RuntimeMethod_var)));
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
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m4ABF0097A06636549CB7BB4ED696CB0D3B98563E (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_m019849C226C9A0E22213E1EC02550F6739CFCF3B (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___b0), NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::IndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___startIndex2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___count3;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6;
		L_6 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0041:
	{
		int32_t L_8 = ___count3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___startIndex2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_11;
		L_11 = Environment_GetResourceString_mA14837A574D24E2F2D120D7B5514E849E9986058(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_005a:
	{
		int32_t L_13 = ___count3;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		return (-1);
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			goto IL_006f;
		}
	}

IL_006a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0078;
	}

IL_006f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		NullCheck(L_17);
		V_0 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0078:
	{
		uint8_t* L_18 = V_0;
		uint8_t L_19 = ___value1;
		int32_t L_20 = ___startIndex2;
		int32_t L_21 = ___count3;
		int32_t L_22;
		L_22 = Buffer_IndexOfByte_mF43902211DC955885C828233F0D46BAC239B0ECC(L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::LastIndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_LastIndexOf_m8A5A08F15AC6060CA70CC8AC280C32ADFBB749ED (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = ___startIndex2;
		V_1 = L_2;
		goto IL_0017;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___array0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = ___value1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0013:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m9B113E83537F9F939D54627EAFAF81E463C1A468 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		return (bool)((!(((RuntimeObject*)(ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275*)((ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275*)IsInstClass((RuntimeObject*)L_0, ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_mC71878E73D9E43C3DA44DA3BD0FD34A1337556E7 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.ByteEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteEqualityComparer__ctor_m6A7EE7FCB7B4275069DC078346C35ED9B6F71AAE (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD(__this, EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
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
// System.Int32 System.Collections.Generic.InternalStringComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_GetHashCode_m4EC162DE81A1F8235C20BD7ADFD2ED0BB12FD7C6 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, String_t* ___obj0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		String_t* L_1 = ___obj0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.InternalStringComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalStringComparer_Equals_m788524086ADC25F1E939088DF22FF301DF3018B0 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, String_t* ___x0, String_t* ___y1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___y1;
		return (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		String_t* L_2 = ___x0;
		String_t* L_3 = ___y1;
		if ((!(((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(String_t*)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		String_t* L_4 = ___x0;
		String_t* L_5 = ___y1;
		NullCheck(L_4);
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Collections.Generic.InternalStringComparer::IndexOf(System.String[],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_IndexOf_mE69D32A9D7690C656336174756E70C54C457067D (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___startIndex2;
		V_1 = L_2;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___array0;
		int32_t L_4 = V_1;
		String_t* L_5;
		L_5 = IL2CPP_ARRAY_UNSAFE_LOAD(L_3, L_4);
		String_t* L_6 = ___value1;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001e:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0009;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Collections.Generic.InternalStringComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalStringComparer__ctor_m06A4CE888A27763DE6BD47DD2C2CF45C68736108 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C(__this, EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
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
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71943296949CB7F897DB641231533D430DE14FF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t L_0;
		memset((&L_0), 0, sizeof(L_0));
		Guid__ctor_mC52E0191E06C110F9F6E0A417BCA4437D79CC130((&L_0), ((int32_t)140948152), (int16_t)((int32_t)23791), (int16_t)((int32_t)23993), (uint8_t)((int32_t)38), (uint8_t)((int32_t)18), (uint8_t)((int32_t)12), (uint8_t)((int32_t)15), (uint8_t)((int32_t)253), (uint8_t)((int32_t)129), (uint8_t)((int32_t)74), (uint8_t)((int32_t)68), /*hidden argument*/NULL);
		EventSource__ctor_mA6FB74138AB52C540333000C0CEAD367D5072083(__this, L_0, _stringLiteral71943296949CB7F897DB641231533D430DE14FF8, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, int32_t ___bucketId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		if ((uintptr_t)((uintptr_t)4) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ArrayPoolEventSource_BufferRented_m89BFEDA08F56DBCD41247780571D8481C08961E6_RuntimeMethod_var);
		int8_t* L_1 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_0)));
		memset(L_1, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)4), (int32_t)L_0)));
		V_0 = (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)(L_1);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_2 = V_0;
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_2, 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_3 = V_0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___bufferId0)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_3, L_4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_5 = V_0;
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_5, 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_6 = V_0;
		uint32_t L_7 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_8 = V_0;
		uint32_t L_9 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_10;
		L_10 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___bufferSize1)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_9)), L_10, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_11 = V_0;
		uint32_t L_12 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)L_12)), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_13 = V_0;
		uint32_t L_14 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_14)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_15 = V_0;
		uint32_t L_16 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_17;
		L_17 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___poolId2)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_16)))), L_17, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_18 = V_0;
		uint32_t L_19 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_19)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_20 = V_0;
		uint32_t L_21 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_21)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_22 = V_0;
		uint32_t L_23 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_24;
		L_24 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___bucketId3)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_23)))), L_24, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_25 = V_0;
		uint32_t L_26 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_26)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_27 = V_0;
		EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631(__this, 1, 4, L_27, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource/BufferAllocatedReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, int32_t ___bucketId3, int32_t ___reason4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		if ((uintptr_t)((uintptr_t)5) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), ArrayPoolEventSource_BufferAllocated_m8460B99481867223928865EA0076CCF983EE3DB0_RuntimeMethod_var);
		int8_t* L_1 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)5), (int32_t)L_0)));
		memset(L_1, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)5), (int32_t)L_0)));
		V_0 = (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)(L_1);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_2 = V_0;
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_2, 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_3 = V_0;
		intptr_t L_4;
		L_4 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___bufferId0)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_3, L_4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_5 = V_0;
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)L_5, 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_6 = V_0;
		uint32_t L_7 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_6, (int32_t)L_7)), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_8 = V_0;
		uint32_t L_9 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_10;
		L_10 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___bufferSize1)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)L_9)), L_10, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_11 = V_0;
		uint32_t L_12 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_11, (int32_t)L_12)), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_13 = V_0;
		uint32_t L_14 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_14)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_15 = V_0;
		uint32_t L_16 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_17;
		L_17 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___poolId2)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_16)))), L_17, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_18 = V_0;
		uint32_t L_19 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), (int32_t)L_19)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_20 = V_0;
		uint32_t L_21 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_20, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_21)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_22 = V_0;
		uint32_t L_23 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_24;
		L_24 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___bucketId3)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_23)))), L_24, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_25 = V_0;
		uint32_t L_26 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)3), (int32_t)L_26)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_27 = V_0;
		uint32_t L_28 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), (int32_t)L_28)))), 4, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_29 = V_0;
		uint32_t L_30 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		intptr_t L_31;
		L_31 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)(&___reason4)), NULL);
		EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_29, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), (int32_t)L_30)))), L_31, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_32 = V_0;
		uint32_t L_33 = sizeof(EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D);
		EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)((EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), (int32_t)L_33)))), 0, NULL);
		EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* L_34 = V_0;
		EventSource_WriteEventCore_m168D78A12127FCD1AF49F42E7E3DB2303035B631(__this, 2, 5, L_34, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferReturned_m077FAF26488263C1FBFA74CF54A5B3966BB87D55 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bufferId0;
		int32_t L_1 = ___bufferSize1;
		int32_t L_2 = ___poolId2;
		EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F(__this, 3, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferTrimmed(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___bufferId0, int32_t ___bufferSize1, int32_t ___poolId2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___bufferId0;
		int32_t L_1 = ___bufferSize1;
		int32_t L_2 = ___poolId2;
		EventSource_WriteEvent_m29A840C8BA6AEBC203406BC9BBED63067788805F(__this, 4, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::BufferTrimPoll(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimPoll_mCB607EF91966BDFABAE587B19148849ACC5A45FA (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___milliseconds0, int32_t ___pressure1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___milliseconds0;
		int32_t L_1 = ___pressure1;
		EventSource_WriteEvent_mF3DADFC0459BB9C89B17BCECE51A57C3F4ED7D88(__this, 5, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__cctor_m9E459A789B6EB88AFC218C00FCEE8FE321380663 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_0 = (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888*)il2cpp_codegen_object_new(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E(L_0, NULL);
		((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log_1), (void*)L_0);
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
// Conversion methods for marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke(const MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD& unmarshaled, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke& marshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_back(const MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke& marshaled, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD& unmarshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_pinvoke_cleanup(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_com(const MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD& unmarshaled, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com& marshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_com_back(const MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com& marshaled, MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD& unmarshaled)
{
	Exception_t* ____pinnable_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_pinnable' of type 'MemoryHandle': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____pinnable_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Buffers.MemoryHandle
IL2CPP_EXTERN_C void MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshal_com_cleanup(MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD_marshaled_com& marshaled)
{
}
// System.Void System.Buffers.MemoryHandle::.ctor(System.Void*,System.Runtime.InteropServices.GCHandle,System.Buffers.IPinnable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, void* ___pointer0, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle1, RuntimeObject* ___pinnable2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___pointer0;
		__this->____pointer_0 = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1 = ___handle1;
		__this->____handle_1 = L_1;
		RuntimeObject* L_2 = ___pinnable2;
		__this->____pinnable_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable_2), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91_AdjustorThunk (RuntimeObject* __this, void* ___pointer0, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle1, RuntimeObject* ___pinnable2, const RuntimeMethod* method)
{
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD*>(__this + _offset);
	MemoryHandle__ctor_mBC4C2B7E7F10F5F93EFCF6A3A24D41CE79916C91(_thisAdjusted, ___pointer0, ___handle1, ___pinnable2, method);
}
// System.Void* System.Buffers.MemoryHandle::get_Pointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____pointer_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  void* MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD*>(__this + _offset);
	void* _returnValue;
	_returnValue = MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Buffers.MemoryHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHandle_Dispose_m1F3EAA54B49EACFC7E489AEF1FF630553FEBE229 (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (&__this->____handle_1);
		bool L_1;
		L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_2 = (&__this->____handle_1);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_2, NULL);
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->____pinnable_2;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = __this->____pinnable_2;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.Buffers.IPinnable::Unpin() */, IPinnable_tA3989EA495C0118966BAAF8848C0009947BB49C0_il2cpp_TypeInfo_var, L_4);
		__this->____pinnable_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pinnable_2), (void*)(RuntimeObject*)NULL);
	}

IL_0032:
	{
		__this->____pointer_0 = (void*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C  void MemoryHandle_Dispose_m1F3EAA54B49EACFC7E489AEF1FF630553FEBE229_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD*>(__this + _offset);
	MemoryHandle_Dispose_m1F3EAA54B49EACFC7E489AEF1FF630553FEBE229(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_SelectBucketIndex_m9B3AC5D1921CE4B602233DBCF6CC49537CB8EE2E (int32_t ___bufferSize0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___bufferSize0;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, 1))>>4));
		V_1 = 0;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((uint32_t)L_2>>((int32_t)16)));
		V_1 = ((int32_t)16);
	}

IL_0018:
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_0028:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)15)))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((uint32_t)L_7>>4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 4));
	}

IL_0035:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) > ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((uint32_t)L_10>>2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 2));
	}

IL_0041:
	{
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)((uint32_t)L_13>>1));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_15, (int32_t)L_16));
	}
}
// System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetMaxSizeForBucket_mEC1D6B6E8946CCDC2CC12176874A9DE8A0EA5E96 (int32_t ___binIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___binIndex0;
		return ((int32_t)(((int32_t)16)<<((int32_t)(L_0&((int32_t)31)))));
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
// System.Int32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryPrimitives_ReverseEndianness_mF7B5C36D507C0D85537E18A1141554A99093BD78 (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		uint32_t L_1;
		L_1 = BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline(L_0, NULL);
		return L_1;
	}
}
// System.UInt16 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReverseEndianness_mDBF226C2D52CAFF6DE538F8245444B5CF87A02D0 (uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___value0;
		uint16_t L_1 = ___value0;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0>>8)), ((int32_t)((int32_t)L_1<<8)))));
	}
}
// System.UInt32 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF (uint32_t ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
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
// System.Int32 System.Buffers.Text.FormattingHelpers::CountDigits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mC01C8C5301C555C927118C5FAA3DCFC7D542487F (uint64_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)10000000))))))
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)L_1) >= ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_2 = ___value0;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)100000000000000LL))));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)14)));
		goto IL_003e;
	}

IL_002b:
	{
		uint64_t L_4 = ___value0;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)((int32_t)10000000)))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 7));
		goto IL_003e;
	}

IL_003b:
	{
		uint64_t L_6 = ___value0;
		V_1 = ((int32_t)(uint32_t)L_6);
	}

IL_003e:
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_008a;
	}

IL_004e:
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		goto IL_008a;
	}

IL_005c:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		goto IL_008a;
	}

IL_006a:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)100000)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		goto IL_008a;
	}

IL_0078:
	{
		uint32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)1000000)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 5));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 6));
	}

IL_008a:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Int32 System.Buffers.Text.FormattingHelpers::CountDigits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mE01337E47EFAB38CB85A419CECA05B3535330A30 (uint32_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000)))))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = ___value0;
		___value0 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000)));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 5));
	}

IL_0017:
	{
		uint32_t L_3 = ___value0;
		if ((!(((uint32_t)L_3) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_0047;
		}
	}
	{
		uint32_t L_4 = ___value0;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0047;
	}

IL_0027:
	{
		uint32_t L_6 = ___value0;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		goto IL_0047;
	}

IL_0035:
	{
		uint32_t L_8 = ___value0;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 3));
		goto IL_0047;
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 4));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 System.Buffers.Text.FormattingHelpers::CountHexDigits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountHexDigits_m2A0168ACE924C7DFBCFFD60AF8FEA1C6CC0420B7 (uint64_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 8));
		uint64_t L_2 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_2>>((int32_t)32)));
	}

IL_0011:
	{
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)L_3) > ((uint64_t)((int64_t)((int32_t)65535))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		uint64_t L_5 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_5>>((int32_t)16)));
	}

IL_0024:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)L_6) > ((uint64_t)((int64_t)((int32_t)255))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		uint64_t L_8 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_8>>8));
	}

IL_0036:
	{
		uint64_t L_9 = ___value0;
		if ((!(((uint64_t)L_9) > ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		return L_11;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m52370B9D7DEAF095B34C6AE27338067A3A1CF886 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m02C318CA8F5812C025CBEDEA07A5DE5D0FDBB25F (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m02C318CA8F5812C025CBEDEA07A5DE5D0FDBB25F_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_Comparer_m39BC17C080DFDF285593D156478FFECCB1928F36_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CompatibleComparer_get_HashCodeProvider_mE25935574860D4D71106E4BB4F689C4CCB8FF599_inline (CompatibleComparer_t6844DCD03A1B348073158E4AC799B9E1C6022465* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____hcp_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_m010A171183E240EBF4F7611E924B533FAB2E471F_inline (Exception_t* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->____HResult_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Size_m4F0086F2CA3FFE1F1E0B57EF54F1324694BD094F_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSizeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_DataPointer_m77D62FE7997CE5DC1F29E7DCDFB3C413AEF93929_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, intptr_t ___value0, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___value0;
		__this->___U3CDataPointerU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventData_set_Reserved_m0FE18C01D6ECA5BA76B431305E944F6D437C4799_inline (EventData_tEB579D26516CF33445B84ADE75307FA8EAF6CA4D* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CReservedU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* MemoryHandle_get_Pointer_mB37B69B8014746F855683C47FF2E6EC46D656CA8_inline (MemoryHandle_t505785861D4FF84F850A3FF775BE6AE1833D2AFD* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____pointer_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t BinaryPrimitives_ReverseEndianness_mCCA2099164ECA9672968898DD996A9F04B392FFF_inline (uint32_t ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___value0;
		V_0 = ((int32_t)((int32_t)L_0&((int32_t)16711935)));
		uint32_t L_1 = ___value0;
		V_1 = ((int32_t)((int32_t)L_1&((int32_t)-16711936)));
		uint32_t L_2 = V_0;
		uint32_t L_3 = V_0;
		uint32_t L_4 = V_1;
		uint32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((uint32_t)L_2>>8))|((int32_t)((int32_t)L_3<<((int32_t)24))))), ((int32_t)(((int32_t)((int32_t)L_4<<8))|((int32_t)((uint32_t)L_5>>((int32_t)24)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
