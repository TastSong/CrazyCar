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

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct ConcurrentDictionary_2_t421F761E5F7000F25374ACA7F13932BC7DAD49EA;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Object>
struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>>
struct Func_2_t54E7AF2F5CFB23D033ECC239ADED1EC348C9AED7;
// System.Func`2<System.Type,System.Object>
struct Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_t1CDDD861715A83BE1EF98CE75870A483BB5ECC93;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_t73C786BB01E05FA7B2ACAA21DA57002B4503C95F;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_tD455920B93EB13CDFF946088629D287A8D3CA973;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Type,System.Object>
struct Tables_t90180AAB5367C2D544AF536F7E5F7ACFE0BD2080;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>[]
struct KeyValuePair_2U5BU5D_t02DD6373F9956C79B49C82246E05638F12263C5D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t1640C9372BDC91DAE0359E08BE1E91AE48924FF0;
// System.Data.DataRow[]
struct DataRowU5BU5D_t2A0D4483B27757FE7345A2E7FE5727C7F77DE5D4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_t2E1FE07C5E6C8080FCF4908199FFDFEBA1EECA3E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Data.SqlTypes.SqlBoolean[]
struct SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA;
// System.Data.SqlTypes.SqlDecimal[]
struct SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0;
// System.Data.SqlTypes.SqlDouble[]
struct SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B;
// System.Data.SqlTypes.SqlGuid[]
struct SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216;
// System.Data.SqlTypes.SqlInt16[]
struct SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8;
// System.Data.SqlTypes.SqlInt32[]
struct SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25;
// System.Data.SqlTypes.SqlInt64[]
struct SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4;
// System.Data.SqlTypes.SqlMoney[]
struct SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A;
// System.Data.SqlTypes.SqlSingle[]
struct SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D;
// System.Data.SqlTypes.SqlString[]
struct SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Xml.XmlTextWriter/Namespace[]
struct NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93;
// System.Xml.XmlTextWriter/State[]
struct StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858;
// System.Xml.XmlTextWriter/TagInfo[]
struct TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776;
// System.Data.AutoIncrementValue
struct AutoIncrementValue_tB454D864DCB48A3C8EB2F806BD0AB284BB735BCE;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.BitArray
struct BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Data.ConstraintCollection
struct ConstraintCollection_tE6135623B0068FD56F0D15E13FFA1882D36BDD40;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959;
// System.Data.DataColumnCollection
struct DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E;
// System.Data.DataExpression
struct DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6;
// System.Data.DataRelationCollection
struct DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956;
// System.Data.DataRowBuilder
struct DataRowBuilder_t8EFCEBE1AE55392AAE53DA15D2B334C56BB14566;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF;
// System.Data.DataRowCollection
struct DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738;
// System.Data.DataSet
struct DataSet_t1F72E9737C995EBFDCF793C87CAC3196EA02411B;
// System.Data.Common.DataStorage
struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A;
// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t874CE0332A55E1F8A8CF67458AF71CE73975D827;
// System.Data.DataView
struct DataView_t882C19B1455AFCE770D60A43A690096801824A50;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Data.Index
struct Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Data.PropertyCollection
struct PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// System.Data.RecordManager
struct RecordManager_t5525269209BE5391607F8C811470AC2EC5C8FA4A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Data.SimpleType
struct SimpleType_tE6F54AF1D35994BBDB2AEB808DB8C87AB7477D14;
// System.Data.Common.SingleStorage
struct SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170;
// System.Data.Common.SqlBooleanStorage
struct SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731;
// System.Data.Common.SqlDecimalStorage
struct SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17;
// System.Data.Common.SqlDoubleStorage
struct SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383;
// System.Data.Common.SqlGuidStorage
struct SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D;
// System.Data.Common.SqlInt16Storage
struct SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6;
// System.Data.Common.SqlInt32Storage
struct SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883;
// System.Data.Common.SqlInt64Storage
struct SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB;
// System.Data.Common.SqlMoneyStorage
struct SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30;
// System.Data.Common.SqlSingleStorage
struct SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31;
// System.Data.Common.SqlStringStorage
struct SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F;
// System.Data.Common.SqlUdtStorage
struct SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Data.Common.StringStorage
struct StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC;
// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// System.Data.Common.TimeSpanStorage
struct TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14;
// System.Type
struct Type_t;
// System.Data.Common.UInt16Storage
struct UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1;
// System.Data.Common.UInt32Storage
struct UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B;
// System.Data.Common.UInt64Storage
struct UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0;
// System.Data.UniqueConstraint
struct UniqueConstraint_tE48A79D2F7DE0EA4A3F1BF5BB322C383E60465F6;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670;
// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD;
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B;
// System.Xml.XmlTextEncoder
struct XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40;
// System.Xml.XmlTextReader
struct XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B;
// System.Xml.XmlTextReaderImpl
struct XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B;
// System.Xml.XmlTextWriterBase64Encoder
struct XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF;

IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XSDSchema_t3BD7A85B5B77669F2A8AC189553BBDC0DC9B112C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76;
IL2CPP_EXTERN_C String_t* _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB;
IL2CPP_EXTERN_C String_t* _stringLiteral44796A9EA3476CDED88CE39A688C638A52C1D20E;
IL2CPP_EXTERN_C String_t* _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C String_t* _stringLiteralF5272508B2E6395FDF44F8E7BE3B299EB6377D28;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_GetOrAdd_mAC3DEFBC31599AEB49E5732BBEC3F867DB0881B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m18A4C1583B6AE265D3F02ACABE66DF23DDCC1709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingleStorage_Aggregate_mB25EEF3F27B00330CEA140296FCC89D582E7F69B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlBooleanStorage_Aggregate_m3B3E57CD8FACE461E615597A8D02BCB243AF03D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDecimalStorage_Aggregate_mCF3B8B498DBE9A04A814D7979E6FA217901E6790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlDoubleStorage_Aggregate_mF000521AF34CA14D6C6D3B95EE76AE32E397FE78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlGuidStorage_Aggregate_m507A48A80846C74824F9782F332785D2C20E0629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlInt16Storage_Aggregate_mEC17381A65EBE0ED2F3009BA6453EDA0AF53EB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlInt32Storage_Aggregate_m4798EAACD9C5EE7F30EEB8385B6F65CD83F379A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlInt64Storage_Aggregate_m85F5F3EEC1B4CB2577839DBF6B6F26E71E5DC1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlMoneyStorage_Aggregate_mF4899961886FE4256076DD35EED139C683D84913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlSingleStorage_Aggregate_m1731FD5018821474EAEF100EF1F6F8436EF68893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlStringStorage_Aggregate_mEE8D15FE6D1B33441B8E0CE11F08EDD682EB5982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlUdtStorage_Aggregate_m5D6036C23038ECD78C4881E9B5E49EEE9E957FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlUdtStorage_CompareValueTo_m6FE681BA37983850EC12613E6FB61BAFE747CCFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlUdtStorage_ConvertXmlToObject_m64771B8D93840BFF00509C689682D9EE9F107EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SqlUdtStorage_Set_m095FB8D317F1F198E8D649173B3ED77EE3487443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringStorage_Aggregate_mC2EE2FB81839B9F011F59D648C034BC8AE072859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetStaticNullForUdtTypeU3Eb__0_mA477120577648521172AF2A0786AAAA96563FA76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA;
struct SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0;
struct SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B;
struct SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216;
struct SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8;
struct SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25;
struct SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4;
struct SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A;
struct SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D;
struct SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Object>
struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t90180AAB5367C2D544AF536F7E5F7ACFE0BD2080* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t02DD6373F9956C79B49C82246E05638F12263C5D* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

struct ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
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

// System.DBNull
struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC  : public RuntimeObject
{
};

struct DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields
{
	// System.DBNull System.DBNull::Value
	DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* ___Value_0;
};

// System.Data.Common.DataStorage
struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A  : public RuntimeObject
{
	// System.Data.DataColumn System.Data.Common.DataStorage::_column
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____column_1;
	// System.Data.DataTable System.Data.Common.DataStorage::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_2;
	// System.Type System.Data.Common.DataStorage::_dataType
	Type_t* ____dataType_3;
	// System.Data.Common.StorageType System.Data.Common.DataStorage::_storageTypeCode
	int32_t ____storageTypeCode_4;
	// System.Collections.BitArray System.Data.Common.DataStorage::_dbNullBits
	BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ____dbNullBits_5;
	// System.Object System.Data.Common.DataStorage::_defaultValue
	RuntimeObject* ____defaultValue_6;
	// System.Object System.Data.Common.DataStorage::_nullValue
	RuntimeObject* ____nullValue_7;
	// System.Boolean System.Data.Common.DataStorage::_isCloneable
	bool ____isCloneable_8;
	// System.Boolean System.Data.Common.DataStorage::_isCustomDefinedType
	bool ____isCustomDefinedType_9;
	// System.Boolean System.Data.Common.DataStorage::_isStringType
	bool ____isStringType_10;
	// System.Boolean System.Data.Common.DataStorage::_isValueType
	bool ____isValueType_11;
};

struct DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_StaticFields
{
	// System.Type[] System.Data.Common.DataStorage::s_storageClassType
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_storageClassType_0;
	// System.Func`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>> System.Data.Common.DataStorage::s_inspectTypeForInterfaces
	Func_2_t54E7AF2F5CFB23D033ECC239ADED1EC348C9AED7* ___s_inspectTypeForInterfaces_12;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Tuple`4<System.Boolean,System.Boolean,System.Boolean,System.Boolean>> System.Data.Common.DataStorage::s_typeImplementsInterface
	ConcurrentDictionary_2_t421F761E5F7000F25374ACA7F13932BC7DAD49EA* ___s_typeImplementsInterface_13;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA  : public RuntimeObject
{
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::_site
	RuntimeObject* ____site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::_events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ____events_2;
};

struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA_StaticFields
{
	// System.Object System.ComponentModel.MarshalByValueComponent::s_eventDisposed
	RuntimeObject* ___s_eventDisposed_0;
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

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B  : public RuntimeObject
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97* ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF* ___serializerData_6;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A* ___onUnreferencedObject_8;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65* ___onUnknownAttribute_9;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3* ___onUnknownElement_10;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670* ___onUnknownNode_11;
};

struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_StaticFields
{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___serializerTypes_7;
};

// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F  : public RuntimeObject
{
	// System.Char[] System.Xml.XmlWriter::writeNodeBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___writeNodeBuffer_0;
};

// System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977  : public RuntimeObject
{
	// System.Type System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0::type
	Type_t* ___type_0;
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

// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	// System.Boolean System.Data.DataColumn::_allowNull
	bool ____allowNull_3;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_4;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_5;
	// System.Type System.Data.DataColumn::_dataType
	Type_t* ____dataType_6;
	// System.Data.Common.StorageType System.Data.DataColumn::_storageType
	int32_t ____storageType_7;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject* ____defaultValue_8;
	// System.Data.DataSetDateTime System.Data.DataColumn::_dateTimeMode
	int32_t ____dateTimeMode_9;
	// System.Data.DataExpression System.Data.DataColumn::_expression
	DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6* ____expression_10;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_11;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_12;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_13;
	// System.Data.Index System.Data.DataColumn::_sortIndex
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____sortIndex_14;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* ____table_15;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_16;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_17;
	// System.Int32 System.Data.DataColumn::_hashCode
	int32_t ____hashCode_18;
	// System.Int32 System.Data.DataColumn::_errors
	int32_t ____errors_19;
	// System.Boolean System.Data.DataColumn::_isSqlType
	bool ____isSqlType_20;
	// System.Boolean System.Data.DataColumn::_implementsINullable
	bool ____implementsINullable_21;
	// System.Boolean System.Data.DataColumn::_implementsIChangeTracking
	bool ____implementsIChangeTracking_22;
	// System.Boolean System.Data.DataColumn::_implementsIRevertibleChangeTracking
	bool ____implementsIRevertibleChangeTracking_23;
	// System.Boolean System.Data.DataColumn::_implementsIXMLSerializable
	bool ____implementsIXMLSerializable_24;
	// System.Boolean System.Data.DataColumn::_defaultValueIsNull
	bool ____defaultValueIsNull_25;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataColumn::_dependentColumns
	List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785* ____dependentColumns_26;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C* ____extendedProperties_27;
	// System.Data.Common.DataStorage System.Data.DataColumn::_storage
	DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* ____storage_28;
	// System.Data.AutoIncrementValue System.Data.DataColumn::_autoInc
	AutoIncrementValue_tB454D864DCB48A3C8EB2F806BD0AB284BB735BCE* ____autoInc_29;
	// System.String System.Data.DataColumn::_columnUri
	String_t* ____columnUri_30;
	// System.String System.Data.DataColumn::_columnPrefix
	String_t* ____columnPrefix_31;
	// System.String System.Data.DataColumn::_encodedColumnName
	String_t* ____encodedColumnName_32;
	// System.Data.SimpleType System.Data.DataColumn::_simpleType
	SimpleType_tE6F54AF1D35994BBDB2AEB808DB8C87AB7477D14* ____simpleType_33;
	// System.Int32 System.Data.DataColumn::_objectID
	int32_t ____objectID_35;
	// System.String System.Data.DataColumn::<XmlDataType>k__BackingField
	String_t* ___U3CXmlDataTypeU3Ek__BackingField_36;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataColumn::PropertyChanging
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanging_37;
};

struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66_StaticFields
{
	// System.Int32 System.Data.DataColumn::s_objectTypeCount
	int32_t ___s_objectTypeCount_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Data.Common.SingleStorage
struct SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Single[] System.Data.Common.SingleStorage::_values
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____values_14;
};

// System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 
{
	// System.Byte System.Data.SqlTypes.SqlBoolean::m_value
	uint8_t ___m_value_0;
};

struct SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields
{
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___True_1;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___Zero_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___One_5;
};

// System.Data.Common.SqlBooleanStorage
struct SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlBoolean[] System.Data.Common.SqlBooleanStorage::_values
	SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* ____values_14;
};

// System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 
{
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bStatus
	uint8_t ____bStatus_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bLen
	uint8_t ____bLen_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bPrec
	uint8_t ____bPrec_2;
	// System.Byte System.Data.SqlTypes.SqlDecimal::_bScale
	uint8_t ____bScale_3;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data1
	uint32_t ____data1_4;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data2
	uint32_t ____data2_5;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data3
	uint32_t ____data3_6;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::_data4
	uint32_t ____data4_7;
};

struct SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields
{
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_NUMERIC_MAX_PRECISION
	uint8_t ___s_NUMERIC_MAX_PRECISION_8;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_9;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_10;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bNullMask
	uint8_t ___s_bNullMask_11;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bIsNull
	uint8_t ___s_bIsNull_12;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bNotNull
	uint8_t ___s_bNotNull_13;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bReverseNullMask
	uint8_t ___s_bReverseNullMask_14;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bSignMask
	uint8_t ___s_bSignMask_15;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bPositive
	uint8_t ___s_bPositive_16;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bNegative
	uint8_t ___s_bNegative_17;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_bReverseSignMask
	uint8_t ___s_bReverseSignMask_18;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_uiZero
	uint32_t ___s_uiZero_19;
	// System.Int32 System.Data.SqlTypes.SqlDecimal::s_cNumeMax
	int32_t ___s_cNumeMax_20;
	// System.Int64 System.Data.SqlTypes.SqlDecimal::s_lInt32Base
	int64_t ___s_lInt32Base_21;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_ulInt32Base
	uint64_t ___s_ulInt32Base_22;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_ulInt32BaseForMod
	uint64_t ___s_ulInt32BaseForMod_23;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_llMax
	uint64_t ___s_llMax_24;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulBase10
	uint32_t ___s_ulBase10_25;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DUINT_BASE
	double ___s_DUINT_BASE_26;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DUINT_BASE2
	double ___s_DUINT_BASE2_27;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DUINT_BASE3
	double ___s_DUINT_BASE3_28;
	// System.Double System.Data.SqlTypes.SqlDecimal::s_DMAX_NUME
	double ___s_DMAX_NUME_29;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_DBL_DIG
	uint32_t ___s_DBL_DIG_30;
	// System.Byte System.Data.SqlTypes.SqlDecimal::s_cNumeDivScaleMin
	uint8_t ___s_cNumeDivScaleMin_31;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_rgulShiftBase
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_rgulShiftBase_32;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersLo
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersLo_33;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersMid
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersMid_34;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersHi
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHi_35;
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::s_decimalHelpersHiHi
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_decimalHelpersHiHi_36;
	// System.Byte[] System.Data.SqlTypes.SqlDecimal::s_rgCLenFromPrec
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_rgCLenFromPrec_37;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT1
	uint32_t ___s_ulT1_38;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT2
	uint32_t ___s_ulT2_39;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT3
	uint32_t ___s_ulT3_40;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT4
	uint32_t ___s_ulT4_41;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT5
	uint32_t ___s_ulT5_42;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT6
	uint32_t ___s_ulT6_43;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT7
	uint32_t ___s_ulT7_44;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT8
	uint32_t ___s_ulT8_45;
	// System.UInt32 System.Data.SqlTypes.SqlDecimal::s_ulT9
	uint32_t ___s_ulT9_46;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT10
	uint64_t ___s_dwlT10_47;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT11
	uint64_t ___s_dwlT11_48;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT12
	uint64_t ___s_dwlT12_49;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT13
	uint64_t ___s_dwlT13_50;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT14
	uint64_t ___s_dwlT14_51;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT15
	uint64_t ___s_dwlT15_52;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT16
	uint64_t ___s_dwlT16_53;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT17
	uint64_t ___s_dwlT17_54;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT18
	uint64_t ___s_dwlT18_55;
	// System.UInt64 System.Data.SqlTypes.SqlDecimal::s_dwlT19
	uint64_t ___s_dwlT19_56;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___Null_57;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MinValue_58;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___MaxValue_59;
};

// System.Data.Common.SqlDecimalStorage
struct SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlDecimal[] System.Data.Common.SqlDecimalStorage::_values
	SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* ____values_14;
};

// System.Data.SqlTypes.SqlDouble
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 
{
	// System.Boolean System.Data.SqlTypes.SqlDouble::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Double System.Data.SqlTypes.SqlDouble::m_value
	double ___m_value_1;
};

struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields
{
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Null_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___Zero_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MinValue_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___MaxValue_5;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	double ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_marshaled_com
{
	int32_t ___m_fNotNull_0;
	double ___m_value_1;
};

// System.Data.Common.SqlDoubleStorage
struct SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlDouble[] System.Data.Common.SqlDoubleStorage::_values
	SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* ____values_14;
};

// System.Data.SqlTypes.SqlGuid
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 
{
	// System.Byte[] System.Data.SqlTypes.SqlGuid::m_value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_value_2;
};

struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_StaticFields
{
	// System.Int32 System.Data.SqlTypes.SqlGuid::s_sizeOfGuid
	int32_t ___s_sizeOfGuid_0;
	// System.Int32[] System.Data.SqlTypes.SqlGuid::s_rgiGuidOrder
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_rgiGuidOrder_1;
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___Null_3;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_value_2;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_value_2;
};

// System.Data.Common.SqlGuidStorage
struct SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlGuid[] System.Data.Common.SqlGuidStorage::_values
	SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* ____values_14;
};

// System.Data.SqlTypes.SqlInt16
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B 
{
	// System.Boolean System.Data.SqlTypes.SqlInt16::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int16 System.Data.SqlTypes.SqlInt16::m_value
	int16_t ___m_value_1;
};

struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields
{
	// System.Int32 System.Data.SqlTypes.SqlInt16::s_MASKI2
	int32_t ___s_MASKI2_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Null_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___Zero_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MinValue_5;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___MaxValue_6;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int16_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int16_t ___m_value_1;
};

// System.Data.Common.SqlInt16Storage
struct SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlInt16[] System.Data.Common.SqlInt16Storage::_values
	SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* ____values_14;
};

// System.Data.SqlTypes.SqlInt32
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 
{
	// System.Boolean System.Data.SqlTypes.SqlInt32::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int32 System.Data.SqlTypes.SqlInt32::m_value
	int32_t ___m_value_1;
};

struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields
{
	// System.Int64 System.Data.SqlTypes.SqlInt32::s_iIntMin
	int64_t ___s_iIntMin_2;
	// System.Int64 System.Data.SqlTypes.SqlInt32::s_lBitNotIntMax
	int64_t ___s_lBitNotIntMax_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___Zero_5;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MinValue_6;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___MaxValue_7;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int32_t ___m_value_1;
};

// System.Data.Common.SqlInt32Storage
struct SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlInt32[] System.Data.Common.SqlInt32Storage::_values
	SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* ____values_14;
};

// System.Data.SqlTypes.SqlInt64
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 
{
	// System.Boolean System.Data.SqlTypes.SqlInt64::m_fNotNull
	bool ___m_fNotNull_0;
	// System.Int64 System.Data.SqlTypes.SqlInt64::m_value
	int64_t ___m_value_1;
};

struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields
{
	// System.Int64 System.Data.SqlTypes.SqlInt64::s_lLowIntMask
	int64_t ___s_lLowIntMask_2;
	// System.Int64 System.Data.SqlTypes.SqlInt64::s_lHighIntMask
	int64_t ___s_lHighIntMask_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___Zero_5;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MinValue_6;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___MaxValue_7;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_pinvoke
{
	int32_t ___m_fNotNull_0;
	int64_t ___m_value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_marshaled_com
{
	int32_t ___m_fNotNull_0;
	int64_t ___m_value_1;
};

// System.Data.Common.SqlInt64Storage
struct SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlInt64[] System.Data.Common.SqlInt64Storage::_values
	SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* ____values_14;
};

// System.Data.SqlTypes.SqlMoney
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB 
{
	// System.Boolean System.Data.SqlTypes.SqlMoney::_fNotNull
	bool ____fNotNull_0;
	// System.Int64 System.Data.SqlTypes.SqlMoney::_value
	int64_t ____value_1;
};

struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields
{
	// System.Int32 System.Data.SqlTypes.SqlMoney::s_iMoneyScale
	int32_t ___s_iMoneyScale_2;
	// System.Int64 System.Data.SqlTypes.SqlMoney::s_lTickBase
	int64_t ___s_lTickBase_3;
	// System.Double System.Data.SqlTypes.SqlMoney::s_dTickBase
	double ___s_dTickBase_4;
	// System.Int64 System.Data.SqlTypes.SqlMoney::s_minLong
	int64_t ___s_minLong_5;
	// System.Int64 System.Data.SqlTypes.SqlMoney::s_maxLong
	int64_t ___s_maxLong_6;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Null_7;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___Zero_8;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MinValue_9;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___MaxValue_10;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_pinvoke
{
	int32_t ____fNotNull_0;
	int64_t ____value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_marshaled_com
{
	int32_t ____fNotNull_0;
	int64_t ____value_1;
};

// System.Data.Common.SqlMoneyStorage
struct SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlMoney[] System.Data.Common.SqlMoneyStorage::_values
	SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* ____values_14;
};

// System.Data.SqlTypes.SqlSingle
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 
{
	// System.Boolean System.Data.SqlTypes.SqlSingle::_fNotNull
	bool ____fNotNull_0;
	// System.Single System.Data.SqlTypes.SqlSingle::_value
	float ____value_1;
};

struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields
{
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Null_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___Zero_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MinValue_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___MaxValue_5;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_pinvoke
{
	int32_t ____fNotNull_0;
	float ____value_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_marshaled_com
{
	int32_t ____fNotNull_0;
	float ____value_1;
};

// System.Data.Common.SqlSingleStorage
struct SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlSingle[] System.Data.Common.SqlSingleStorage::_values
	SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* ____values_14;
};

// System.Data.SqlTypes.SqlString
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D 
{
	// System.String System.Data.SqlTypes.SqlString::m_value
	String_t* ___m_value_0;
	// System.Globalization.CompareInfo System.Data.SqlTypes.SqlString::m_cmpInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo_1;
	// System.Int32 System.Data.SqlTypes.SqlString::m_lcid
	int32_t ___m_lcid_2;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::m_flag
	int32_t ___m_flag_3;
	// System.Boolean System.Data.SqlTypes.SqlString::m_fNotNull
	bool ___m_fNotNull_4;
};

struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields
{
	// System.Data.SqlTypes.SqlString System.Data.SqlTypes.SqlString::Null
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___Null_5;
	// System.Text.UnicodeEncoding System.Data.SqlTypes.SqlString::s_unicodeEncoding
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___s_unicodeEncoding_6;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreCase
	int32_t ___IgnoreCase_7;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreWidth
	int32_t ___IgnoreWidth_8;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreNonSpace
	int32_t ___IgnoreNonSpace_9;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreKanaType
	int32_t ___IgnoreKanaType_10;
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort
	int32_t ___BinarySort_11;
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort2
	int32_t ___BinarySort2_12;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::s_iDefaultFlag
	int32_t ___s_iDefaultFlag_13;
	// System.Globalization.CompareOptions System.Data.SqlTypes.SqlString::s_iValidCompareOptionMask
	int32_t ___s_iValidCompareOptionMask_14;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::s_iValidSqlCompareOptionMask
	int32_t ___s_iValidSqlCompareOptionMask_15;
	// System.Int32 System.Data.SqlTypes.SqlString::s_lcidUSEnglish
	int32_t ___s_lcidUSEnglish_16;
	// System.Int32 System.Data.SqlTypes.SqlString::s_lcidBinary
	int32_t ___s_lcidBinary_17;
};
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_pinvoke
{
	char* ___m_value_0;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	int32_t ___m_fNotNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_marshaled_com
{
	Il2CppChar* ___m_value_0;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___m_cmpInfo_1;
	int32_t ___m_lcid_2;
	int32_t ___m_flag_3;
	int32_t ___m_fNotNull_4;
};

// System.Data.Common.SqlStringStorage
struct SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Data.SqlTypes.SqlString[] System.Data.Common.SqlStringStorage::_values
	SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* ____values_14;
};

// System.Data.Common.SqlUdtStorage
struct SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.Object[] System.Data.Common.SqlUdtStorage::_values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____values_14;
	// System.Boolean System.Data.Common.SqlUdtStorage::_implementsIXmlSerializable
	bool ____implementsIXmlSerializable_15;
	// System.Boolean System.Data.Common.SqlUdtStorage::_implementsIComparable
	bool ____implementsIComparable_16;
};

struct SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Object> System.Data.Common.SqlUdtStorage::s_typeToNull
	ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* ___s_typeToNull_17;
};

// System.Data.Common.StringStorage
struct StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.String[] System.Data.Common.StringStorage::_values
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____values_14;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.Data.Common.UInt16Storage
struct UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.UInt16[] System.Data.Common.UInt16Storage::_values
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____values_15;
};

struct UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields
{
	// System.UInt16 System.Data.Common.UInt16Storage::s_defaultValue
	uint16_t ___s_defaultValue_14;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Data.Common.UInt32Storage
struct UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.UInt32[] System.Data.Common.UInt32Storage::_values
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____values_15;
};

struct UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields
{
	// System.UInt32 System.Data.Common.UInt32Storage::s_defaultValue
	uint32_t ___s_defaultValue_14;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Data.Common.UInt64Storage
struct UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.UInt64[] System.Data.Common.UInt64Storage::_values
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____values_15;
};

struct UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields
{
	// System.UInt64 System.Data.Common.UInt64Storage::s_defaultValue
	uint64_t ___s_defaultValue_14;
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

// System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 
{
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___charProperties_2;
};

struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_StaticFields
{
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject* ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_CharProperties_1;
};
// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___charProperties_2;
};

// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Xml.Serialization.XmlRootAttribute::dataType
	String_t* ___dataType_0;
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName_1;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable_2;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns_3;
};

// System.Xml.XmlTextReader
struct XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B  : public XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD
{
	// System.Xml.XmlTextReaderImpl System.Xml.XmlTextReader::impl
	XmlTextReaderImpl_t5F48FDC8E88C9E27593266F6C660B3973AE2167B* ___impl_3;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9__padding[152];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D176_t7311E17E385322EBCED3FDFC17F9FD6B5DAA8BEE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D176_t7311E17E385322EBCED3FDFC17F9FD6B5DAA8BEE__padding[176];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t5DFB8228BC57D9CD6B42A53688F48793E6DAA9D4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t5DFB8228BC57D9CD6B42A53688F48793E6DAA9D4__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D38_t5C677D32187456C0AE0B43ED3AA78B292A4ADCC4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t5C677D32187456C0AE0B43ED3AA78B292A4ADCC4__padding[38];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C__padding[52];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t44B99CEA9CF46C49BE965A9F9F9FEA108BD64970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t44B99CEA9CF46C49BE965A9F9F9FEA108BD64970__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t7A9A2AD29BEDCB07843BEF77FA3BA6C06C48D73C_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::39A47A6A540EB845B37C85CE8C346359A0DB937D4AAF7A74A6C207205E0BC61E
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___39A47A6A540EB845B37C85CE8C346359A0DB937D4AAF7A74A6C207205E0BC61E_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::540CD885F06B2760118EA5544E069ACE0C5D184B85D9D104417C14F1E536376D
	__StaticArrayInitTypeSizeU3D38_t5C677D32187456C0AE0B43ED3AA78B292A4ADCC4 ___540CD885F06B2760118EA5544E069ACE0C5D184B85D9D104417C14F1E536376D_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD
	__StaticArrayInitTypeSizeU3D36_t5DFB8228BC57D9CD6B42A53688F48793E6DAA9D4 ___8D4DC488705859D6A837A660BDBA9E88D1BD229BC39DB97734072D04BD513ECD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::BA1E68F004F9EFDE72987E33682A8A5C579C4A609FBECE4F6EDBB844431D9226
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___BA1E68F004F9EFDE72987E33682A8A5C579C4A609FBECE4F6EDBB844431D9226_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::C44E90B8C219817ECD3C403823D4770C0F744358EBF32A4282B3CE0338D4602E
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___C44E90B8C219817ECD3C403823D4770C0F744358EBF32A4282B3CE0338D4602E_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::D44900CF81FC3D53E7F8D2FCB6EF3B50B39ED1A857628FA737F5B4B7E0382939
	__StaticArrayInitTypeSizeU3D152_tD226678CEEBED2D4F85243437A61F5E21DC667F9 ___D44900CF81FC3D53E7F8D2FCB6EF3B50B39ED1A857628FA737F5B4B7E0382939_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=176 <PrivateImplementationDetails>::E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6
	__StaticArrayInitTypeSizeU3D176_t7311E17E385322EBCED3FDFC17F9FD6B5DAA8BEE ___E29424929B12EB1FDF4FD2E4911E09644CB58261C6033211F88022DDED785AE6_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::F327BBE8D18E0318C5295B25F9A8BA9B3AFE1F44C3C244BB3921AFEB578F1591
	__StaticArrayInitTypeSizeU3D64_t44B99CEA9CF46C49BE965A9F9F9FEA108BD64970 ___F327BBE8D18E0318C5295B25F9A8BA9B3AFE1F44C3C244BB3921AFEB578F1591_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_tED95E9726E6FE716D48863E9A8521D5525AEE99C ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_9;
};

// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_t1F72E9737C995EBFDCF793C87CAC3196EA02411B* ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t882C19B1455AFCE770D60A43A690096801824A50* ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_tE6135623B0068FD56F0D15E13FFA1882D36BDD40* ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956* ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956* ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t5525269209BE5391607F8C811470AC2EC5C8FA4A* ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_tD455920B93EB13CDFF946088629D287A8D3CA973* ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_tD455920B93EB13CDFF946088629D287A8D3CA973* ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C* ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6* ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____colUnique_32;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ____minOccurs_33;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ____maxOccurs_34;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_35;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject* ____typeName_36;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_tE48A79D2F7DE0EA4A3F1BF5BB322C383E60465F6* ____primaryKey_37;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_t2E1FE07C5E6C8080FCF4908199FFDFEBA1EECA3E* ____primaryIndex_38;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____delayedSetPrimaryKey_39;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndex_40;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndexwithOriginalAdded_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndexwithCurrentDeleted_42;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_43;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_44;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_45;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_46;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_47;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_48;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_49;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_50;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_51;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_t2A0D4483B27757FE7345A2E7FE5727C7F77DE5D4* ____emptyDataRowArray_52;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE* ____propertyDescriptorCollectionCache_53;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_t1640C9372BDC91DAE0359E08BE1E91AE48924FF0* ____nestedParentRelations_54;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785* ____dependentColumns_55;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_56;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowChangedDelegate_57;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowChangingDelegate_58;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowDeletingDelegate_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowDeletedDelegate_60;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959* ____onColumnChangedDelegate_61;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959* ____onColumnChangingDelegate_62;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B* ____onTableClearingDelegate_63;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B* ____onTableClearedDelegate_64;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_t874CE0332A55E1F8A8CF67458AF71CE73975D827* ____onTableNewRowDelegate_65;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ____onPropertyChangingDelegate_66;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t8EFCEBE1AE55392AAE53DA15D2B334C56BB14566* ____rowBuilder_67;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_t1CDDD861715A83BE1EF98CE75870A483BB5ECC93* ____delayedViews_68;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_t73C786BB01E05FA7B2ACAA21DA57002B4503C95F* ____dataViewListeners_69;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____rowDiffId_70;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____indexesLock_71;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_72;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_73;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_75;
};

struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_StaticFields
{
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_74;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
};

// System.IO.StringWriter
struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t* ____sb_7;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_8;
};

struct StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_StaticFields
{
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_t2C90D9E1E55C16081FACA57B229053C1EF05DAF0* ___m_encoding_6;
};

// System.Data.Common.TimeSpanStorage
struct TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14  : public DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A
{
	// System.TimeSpan[] System.Data.Common.TimeSpanStorage::_values
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ____values_15;
};

struct TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields
{
	// System.TimeSpan System.Data.Common.TimeSpanStorage::s_defaultValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultValue_14;
};

// System.Xml.XmlTextWriter
struct XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B  : public XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F
{
	// System.IO.TextWriter System.Xml.XmlTextWriter::textWriter
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___textWriter_1;
	// System.Xml.XmlTextEncoder System.Xml.XmlTextWriter::xmlEncoder
	XmlTextEncoder_tACD13BCC8237E0710F82A7703FAF7D09FCDF0C40* ___xmlEncoder_2;
	// System.Text.Encoding System.Xml.XmlTextWriter::encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding_3;
	// System.Xml.Formatting System.Xml.XmlTextWriter::formatting
	int32_t ___formatting_4;
	// System.Boolean System.Xml.XmlTextWriter::indented
	bool ___indented_5;
	// System.Int32 System.Xml.XmlTextWriter::indentation
	int32_t ___indentation_6;
	// System.Char System.Xml.XmlTextWriter::indentChar
	Il2CppChar ___indentChar_7;
	// System.Xml.XmlTextWriter/TagInfo[] System.Xml.XmlTextWriter::stack
	TagInfoU5BU5D_tC6FBAFF4593190EF8F7EEBAB8913C4E17D645776* ___stack_8;
	// System.Int32 System.Xml.XmlTextWriter::top
	int32_t ___top_9;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTable
	StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* ___stateTable_10;
	// System.Xml.XmlTextWriter/State System.Xml.XmlTextWriter::currentState
	int32_t ___currentState_11;
	// System.Xml.XmlTextWriter/Token System.Xml.XmlTextWriter::lastToken
	int32_t ___lastToken_12;
	// System.Xml.XmlTextWriterBase64Encoder System.Xml.XmlTextWriter::base64Encoder
	XmlTextWriterBase64Encoder_tC7209F119916DF622459E830377C23D7BFA2B30D* ___base64Encoder_13;
	// System.Char System.Xml.XmlTextWriter::quoteChar
	Il2CppChar ___quoteChar_14;
	// System.Char System.Xml.XmlTextWriter::curQuoteChar
	Il2CppChar ___curQuoteChar_15;
	// System.Boolean System.Xml.XmlTextWriter::namespaces
	bool ___namespaces_16;
	// System.Xml.XmlTextWriter/SpecialAttr System.Xml.XmlTextWriter::specialAttr
	int32_t ___specialAttr_17;
	// System.String System.Xml.XmlTextWriter::prefixForXmlNs
	String_t* ___prefixForXmlNs_18;
	// System.Boolean System.Xml.XmlTextWriter::flush
	bool ___flush_19;
	// System.Xml.XmlTextWriter/Namespace[] System.Xml.XmlTextWriter::nsStack
	NamespaceU5BU5D_tF0F2AD10B1537EBB0F35B1611FD7D89D48FA9E93* ___nsStack_20;
	// System.Int32 System.Xml.XmlTextWriter::nsTop
	int32_t ___nsTop_21;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlTextWriter::nsHashtable
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___nsHashtable_22;
	// System.Boolean System.Xml.XmlTextWriter::useNsHashtable
	bool ___useNsHashtable_23;
	// System.Xml.XmlCharType System.Xml.XmlTextWriter::xmlCharType
	XmlCharType_t7C471894C8862126737E800F5A14AACBD14FCBC3 ___xmlCharType_24;
};

struct XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_StaticFields
{
	// System.String[] System.Xml.XmlTextWriter::stateName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___stateName_25;
	// System.String[] System.Xml.XmlTextWriter::tokenName
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenName_26;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTableDefault
	StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* ___stateTableDefault_27;
	// System.Xml.XmlTextWriter/State[] System.Xml.XmlTextWriter::stateTableDocument
	StateU5BU5D_t41A58B7031FABDC61B34059A1FB722121203D858* ___stateTableDocument_28;
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

// System.Func`2<System.Type,System.Object>
struct Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
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
// System.Data.SqlTypes.SqlDecimal[]
struct SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 m_Items[1];

	inline SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlDouble[]
struct SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 m_Items[1];

	inline SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlGuid[]
struct SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 m_Items[1];

	inline SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_2), (void*)NULL);
	}
	inline SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_2), (void*)NULL);
	}
};
// System.Data.SqlTypes.SqlInt16[]
struct SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B m_Items[1];

	inline SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlInt32[]
struct SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 m_Items[1];

	inline SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlInt64[]
struct SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 m_Items[1];

	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlMoney[]
struct SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB m_Items[1];

	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlSingle[]
struct SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 m_Items[1];

	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 value)
	{
		m_Items[index] = value;
	}
};
// System.Data.SqlTypes.SqlString[]
struct SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D m_Items[1];

	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_cmpInfo_1), (void*)NULL);
		#endif
	}
	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_cmpInfo_1), (void*)NULL);
		#endif
	}
};
// System.Data.SqlTypes.SqlBoolean[]
struct SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA  : public RuntimeArray
{
	ALIGN_FIELD (8) SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 m_Items[1];

	inline SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 value)
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
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_GetOrAdd_mF8E3897F8089492DC23AF0FE945A15B5C2499B00_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___key0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___valueFactory1, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::.ctor(System.Data.DataColumn,System.Type,System.Object,System.Object,System.Data.Common.StorageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, Type_t* ___type1, RuntimeObject* ___defaultValue2, RuntimeObject* ___nullValue3, int32_t ___storageType4, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59 (int64_t ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Addition(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlDecimal_op_Addition_mD621901A8B8506AD33C1A11593E8C26BB4291D0F (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___x0, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Division(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlDecimal_op_Division_mB5C1F3E2126BB74E4C73E734227C783A896ACBAD (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___x0, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5 (double ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDecimal::ToSqlDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlDecimal_ToSqlDouble_mEB326B4BC49D4F60C4020EFFDE752677F67AE674 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::op_Addition(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::op_Multiply(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::op_Subtraction(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::op_Division(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::op_LessThan(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::op_True(System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_BitwiseOr(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___y1, const RuntimeMethod* method) ;
// System.Double System.Data.SqlTypes.SqlDouble::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDecimal::LessThan(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDecimal_LessThan_mC6C08FED135BE851B044FCD4A01025FFFDFEBEC2 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___x0, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDecimal::GreaterThan(System.Data.SqlTypes.SqlDecimal,System.Data.SqlTypes.SqlDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDecimal_GreaterThan_mC1DB841F45F3245DDCAFA8FB2BFA993E02E6BEC3 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___x0, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___y1, const RuntimeMethod* method) ;
// System.Exception System.Data.ExprException::Overflow(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Exception System.Data.ExceptionBuilder::AggregateException(System.Data.AggregateType,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095 (int32_t ___aggregateType0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDecimal::CompareTo(System.Data.SqlTypes.SqlDecimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDecimal_CompareTo_m0100ACFA5FBF6023915A5ADC06B9C15BB9F7C4F2 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.Common.SqlConvert::ConvertToSqlDecimal(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlConvert_ConvertToSqlDecimal_mBD14BC035031E59F67932D7C71FDF1DAC620ACEC (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlDecimal::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDecimal_get_IsNull_mDA382F935BD7A4F5BF8430DBC5E5C7C8C26B42DF (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___input0, const RuntimeMethod* method) ;
// System.IFormatProvider System.Data.Common.DataStorage::get_FormatProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StringWriter::.ctor(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method) ;
// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489 (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___w0, const RuntimeMethod* method) ;
// System.Void System.Collections.BitArray::Set(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13 (BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::LessThan(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDouble_LessThan_mF086E28246E2FB7D3D74592DA9D5EA0BC6158B0A (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlDouble::GreaterThan(System.Data.SqlTypes.SqlDouble,System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlDouble_GreaterThan_m7373754DC3CB5BA4E23E80D1A2ABA637F46F5C80 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___x0, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlDouble::CompareTo(System.Data.SqlTypes.SqlDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDouble_CompareTo_mE79F43FB35FAC5959E985E45CDB0122A91CAA554 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.Common.SqlConvert::ConvertToSqlDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlConvert_ConvertToSqlDouble_m76B97825E7AE6A3AF01CC8AED615ED2571769259 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlDouble::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDouble_get_IsNull_m32B39599187BF64D35C02E2B7EDCDE9B08F47FE6 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlGuid::CompareTo(System.Data.SqlTypes.SqlGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlGuid_CompareTo_m79D7C2B70A98A7796369DDE9DE2BCCEC0E8C68E8 (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* __this, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlGuid System.Data.Common.SqlConvert::ConvertToSqlGuid(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 SqlConvert_ConvertToSqlGuid_mE1287880F42E7F9CE6646D5FD2300CD25F2743C2 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlGuid::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlGuid_get_IsNull_m0751FE60211BF2C953CB00945698A78683C69E4F (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF (int64_t ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::op_Implicit(System.Data.SqlTypes.SqlInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt64_op_Implicit_m829611DB235724ED9CB5F4FCB9BF3CB0350732EF (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::op_Addition(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt64_op_Addition_mDC3DB4846CE70DDF6A9F97C0C329DD5ACBFEA432 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___x0, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt16::ToSqlInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt16_ToSqlInt64_m74BDB457355091DC33276A81C458387D7A070EB0 (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::op_Implicit(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B SqlInt16_op_Implicit_mC124CD6BB567BE635865013CE37EEB0518DD81D6 (int16_t ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::op_Division(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt64_op_Division_m63F50B2080FB8E0DEDF9905D7FEF4EB45A6F8C97 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___x0, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt64::ToSqlInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B SqlInt64_ToSqlInt16_m0EFCFBEB8CC9A1EA6EC4DE6C0A6533F381900E5D (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlInt16::ToSqlDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlInt16_ToSqlDouble_mC31A96E9433C377D73CE0010D9454D7A59B4203E (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt16::LessThan(System.Data.SqlTypes.SqlInt16,System.Data.SqlTypes.SqlInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlInt16_LessThan_mC27C83BDD0A667D905229037E6D6018CEE889412 (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___x0, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt16::GreaterThan(System.Data.SqlTypes.SqlInt16,System.Data.SqlTypes.SqlInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlInt16_GreaterThan_mC543F52F2B41D31845E6C5ACD5A3B34318207C63 (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___x0, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlInt16::CompareTo(System.Data.SqlTypes.SqlInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt16_CompareTo_m9FC0B312BAE65C9E4666B183051B3ED6ECD76AA0 (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt16 System.Data.Common.SqlConvert::ConvertToSqlInt16(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B SqlConvert_ConvertToSqlInt16_m0A1C5613B1B77AECF92FFFFA3376A28283E95FA4 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlInt16::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt16_get_IsNull_mA77B2B1796F1E93AA45C17FEA3B7D0FAA4068510 (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::op_Implicit(System.Data.SqlTypes.SqlInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt64_op_Implicit_m06472A9F571AB0DC28BED906A1B3E141CBC4871E (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt32::ToSqlInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlInt32_ToSqlInt64_mA174EA59AE35323E3ECACE355C5C19A1A18E017F (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 SqlInt32_op_Implicit_mB9A2B8F81E9BF2EA94A2E3F129A4180049CC93D9 (int32_t ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt64::ToSqlInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 SqlInt64_ToSqlInt32_m6B96CA26421E6C524936B54B5FDFBFD82552FDD9 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlInt32::ToSqlDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlInt32_ToSqlDouble_m246A68A9C528CDBEFC6F9779004354AEAD358A41 (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt32::LessThan(System.Data.SqlTypes.SqlInt32,System.Data.SqlTypes.SqlInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlInt32_LessThan_m5BF49769081B15C9E18188C5933DAF34FF9AFC5B (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___x0, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt32::GreaterThan(System.Data.SqlTypes.SqlInt32,System.Data.SqlTypes.SqlInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlInt32_GreaterThan_mD88284474F14887BC4C7B654F105395D01A16FD5 (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___x0, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlInt32::CompareTo(System.Data.SqlTypes.SqlInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt32_CompareTo_m6EBE0A1AACF4E5C44E76D91D6FD6A5FC655C164B (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt32 System.Data.Common.SqlConvert::ConvertToSqlInt32(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 SqlConvert_ConvertToSqlInt32_m268A709D3A77BAB342838CCF39F48ED93A441AC1 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlInt32::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt32_get_IsNull_mF515FDD364AD9AAB986AF4A47B8BE871EBE510D5 (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlInt64::ToSqlDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlInt64_ToSqlDecimal_m810FD514624595B632F63DE26D21B24CB9223698 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlDecimal::ToSqlInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlDecimal_ToSqlInt64_mAA52E180BF7596EE561603B329EC4C25F9C09CAD (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlInt64::ToSqlDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlInt64_ToSqlDouble_m6E4C68654EA44324AFBD8719EFF612EBC1535C99 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt64::LessThan(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlInt64_LessThan_mC7C12287438FB1EADD3E3EE11D7AE2F2C2DBFEBE (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___x0, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlInt64::GreaterThan(System.Data.SqlTypes.SqlInt64,System.Data.SqlTypes.SqlInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlInt64_GreaterThan_mCB892619DA8BC41432931653EC6E432C45E02ECB (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___x0, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlInt64::CompareTo(System.Data.SqlTypes.SqlInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt64_CompareTo_m73C81296C591620BBCDD8A084418A0539EF68FEC (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlInt64 System.Data.Common.SqlConvert::ConvertToSqlInt64(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 SqlConvert_ConvertToSqlInt64_m2AAE8E9DADF240B917DF7649CEF66B3458683F14 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlInt64::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt64_get_IsNull_mAD56CDAEC4A2D766157BE58C51FFEC687E1E33E8 (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::op_Implicit(System.Data.SqlTypes.SqlMoney)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlDecimal_op_Implicit_m9BA26363AE2C6BD41642B5C4B526EFBC28B08BD7 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlMoney::ToSqlDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 SqlMoney_ToSqlDecimal_m0AB1E68BFE5753DD028C3BB0BF212E0971190412 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB SqlMoney_op_Implicit_m88FEDBC3FD9487B81D1E34FB6CFAA2C5E6E004B9 (int64_t ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlDecimal::ToSqlMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB SqlDecimal_ToSqlMoney_m858D02BB1D71B008B029A9A9C3B46FB9DAFFB4A4 (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlMoney::ToSqlDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlMoney_ToSqlDouble_m95978A3228452C7084B46939B075A57FCA414B29 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlMoney::LessThan(System.Data.SqlTypes.SqlMoney,System.Data.SqlTypes.SqlMoney)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlMoney_LessThan_mD8B99E2425DAF88A29CB543DAC64104459595AFC (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___x0, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlMoney::GreaterThan(System.Data.SqlTypes.SqlMoney,System.Data.SqlTypes.SqlMoney)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlMoney_GreaterThan_m01CFF5EBD79CFE6D3994E276982A5ACC09242461 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___x0, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlMoney::CompareTo(System.Data.SqlTypes.SqlMoney)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlMoney_CompareTo_m8CD6963D21781A101DF52892EEC1C5F2D6F0A708 (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlMoney System.Data.Common.SqlConvert::ConvertToSqlMoney(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB SqlConvert_ConvertToSqlMoney_mD9BE46CB971CB36854B823A337348A3CDBAECC05 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlMoney::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlMoney_get_IsNull_m2EA471282BDB459F2F3D0F3997C06925C8883E9F (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 SqlSingle_op_Implicit_m6974DDDF885A4088772D9CAB0FACE5E8E3D026E6 (float ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::op_Addition(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 SqlSingle_op_Addition_mAF7086D6DBEDAD10923A3BA71EFEA36FA6EDAC99 (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___x0, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlSingle::ToSqlDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 SqlSingle_ToSqlDouble_m8016267644F3F557B092599A902EE0186855F753 (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlDouble::ToSqlSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 SqlDouble_ToSqlSingle_m5122151E05BA977D0E23F406E766D6BD6FE09781 (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlSingle::LessThan(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlSingle_LessThan_mDAA47FA20864AE2CD8942F4D25E66311102F5312 (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___x0, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlSingle::GreaterThan(System.Data.SqlTypes.SqlSingle,System.Data.SqlTypes.SqlSingle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlSingle_GreaterThan_m47333A024B0B28CD984E14593AF78C119EF784D9 (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___x0, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlSingle::CompareTo(System.Data.SqlTypes.SqlSingle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlSingle_CompareTo_m167AE18CF6ACCFA18A71BA742D642ECC7463D22A (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* __this, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlSingle System.Data.Common.SqlConvert::ConvertToSqlSingle(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 SqlConvert_ConvertToSqlSingle_m641986240A40EE1B0BB1BBCB13D6BA0880891AB4 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlSingle::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlSingle_get_IsNull_mC0F4C05C5D8C7D6B3A51B51154032E41018C712B (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.Common.SqlStringStorage::Compare(System.Data.SqlTypes.SqlString,System.Data.SqlTypes.SqlString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlStringStorage_Compare_m66A6DE5F012951BAF41F38E163EBB9AD684C487A (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___valueNo10, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___valueNo21, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlString::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* __this, const RuntimeMethod* method) ;
// System.String System.Data.SqlTypes.SqlString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlString_get_Value_m542A333CCBBF1866B0F9B9F01B442BC38272912A (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Data.DataTable::Compare(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataTable_Compare_mD425943926EF05816C7B8F5BB02F4234C0AB72C5 (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, String_t* ___s10, String_t* ___s21, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlString System.Data.Common.SqlConvert::ConvertToSqlString(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D SqlConvert_ConvertToSqlString_mEC9792A7BFD3CD1C43275D3BFB77BE9FCD88A866 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlBoolean_op_Implicit_m783AB38276C3DDE1364D7E3F7C504A551CB4E52D (bool ___x0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::And(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlBoolean_And_mF7B00B2E948C34C26B7B144A264FE13DB54511CA (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___y1, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Or(System.Data.SqlTypes.SqlBoolean,System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlBoolean_Or_m58ABB2DA31312E7CB532D42FDEBD8EDE5534E5C0 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___x0, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Data.SqlTypes.SqlBoolean::CompareTo(System.Data.SqlTypes.SqlBoolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5 (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 ___value0, const RuntimeMethod* method) ;
// System.Data.SqlTypes.SqlBoolean System.Data.Common.SqlConvert::ConvertToSqlBoolean(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 SqlConvert_ConvertToSqlBoolean_mE80631BCDAA75B6F5ECD227F1C9079674810BBF1 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.SqlTypes.SqlBoolean::get_IsNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7* __this, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::.ctor(System.Data.DataColumn,System.Type,System.Object,System.Data.Common.StorageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, Type_t* ___type1, RuntimeObject* ___defaultValue2, int32_t ___storageType3, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Object System.Data.Common.DataStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___recordNos0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.Int32 System.Data.Common.DataStorage::CompareBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::CopyBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___srcRecordNo0, int32_t ___dstRecordNo1, const RuntimeMethod* method) ;
// System.Object System.Data.Common.DataStorage::GetBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___recordNo0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::SetNullBit(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___recordNo0, bool ___flag1, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XmlConvert_ToSingle_m57D622EA6B6024A02ACA602BA5B0ABDE831E1095 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m0A47C3C098CDB47726C29D7A70B7349D6DA57555 (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::SetNullStorage(System.Collections.BitArray)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits0, const RuntimeMethod* method) ;
// System.Object System.Data.Common.SqlUdtStorage::GetStaticNullForUdtType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_GetStaticNullForUdtType_m82F5DEBE6A48BAB46B9C9FD8E42E918D5FCF1987 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.SqlUdtStorage::.ctor(System.Data.DataColumn,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage__ctor_m94619A62207B20278BCFDCF5AE406465B4C64D0B (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, Type_t* ___type1, RuntimeObject* ___nullValue2, const RuntimeMethod* method) ;
// System.Data.Common.StorageType System.Data.Common.DataStorage::GetStorageType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStorage_GetStorageType_m19BC434CEDEE34062430D4E606642F832ED54B26 (Type_t* ___dataType0, const RuntimeMethod* method) ;
// System.Void System.Data.Common.DataStorage::.ctor(System.Data.DataColumn,System.Type,System.Object,System.Object,System.Boolean,System.Data.Common.StorageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStorage__ctor_mA9F115E5C2C8731649CAED020992FD169714FF61 (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, Type_t* ___type1, RuntimeObject* ___defaultValue2, RuntimeObject* ___nullValue3, bool ___isICloneable4, int32_t ___storageType5, const RuntimeMethod* method) ;
// System.Void System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mA7537729315A16E6F6FAF4D6001216C6ECE6AA3E (U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6695FACD17F109F48A02101B3A386B51B8E25099 (Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// TValue System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Object>::GetOrAdd(TKey,System.Func`2<TKey,TValue>)
inline RuntimeObject* ConcurrentDictionary_2_GetOrAdd_mAC3DEFBC31599AEB49E5732BBEC3F867DB0881B6 (ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* __this, Type_t* ___key0, Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32* ___valueFactory1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834*, Type_t*, Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32*, const RuntimeMethod*))ConcurrentDictionary_2_GetOrAdd_mF8E3897F8089492DC23AF0FE945A15B5C2499B00_gshared)(__this, ___key0, ___valueFactory1, method);
}
// System.Exception System.Data.ExceptionBuilder::IComparableNotImplemented(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_IComparableNotImplemented_m41968A228CBFEA81BC50C2F85E81CAB29CB11831 (String_t* ___typeName0, const RuntimeMethod* method) ;
// System.Exception System.Data.ExceptionBuilder::StorageSetFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_StorageSetFailed_mD1DDFA2037D98B7EBB9C5CC173049C4FD8ECF673 (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m2BE3252B26369EA17E06A564F25172F6D002469F (Type_t* ___type0, bool ___nonPublic1, const RuntimeMethod* method) ;
// System.Xml.Serialization.XmlSerializer System.Data.Common.ObjectStorage::GetXmlSerializer(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* ObjectStorage_GetXmlSerializer_m8AEE8D07759F90C3971B2EA835BC171A03E4CA85 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlSerializer_Deserialize_m7487D353E77EED4F6A255D415AE87DBCBC0A6E2D (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___textReader0, const RuntimeMethod* method) ;
// System.Type System.Data.XSDSchema::XsdtoClr(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* XSDSchema_XsdtoClr_m56B7AD7BAF9F6E0A70068CA8087844089DA5E059 (String_t* ___xsdTypeName0, const RuntimeMethod* method) ;
// System.Xml.Serialization.XmlSerializer System.Data.Common.ObjectStorage::GetXmlSerializer(System.Type,System.Xml.Serialization.XmlRootAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* ObjectStorage_GetXmlSerializer_mFAC39326321F5899C7F9FDA200CCF212BFC93AE7 (Type_t* ___type0, XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* ___attribute1, const RuntimeMethod* method) ;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.Xml.XmlReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___xmlReader0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.TextWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer_Serialize_m2EEA80F41157A3088A0E74EB55EA04ECAEE32CCF (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___textWriter0, RuntimeObject* ___o1, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.Xml.XmlWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___xmlWriter0, RuntimeObject* ___o1, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Object>::.ctor()
inline void ConcurrentDictionary_2__ctor_m18A4C1583B6AE265D3F02ACABE66DF23DDCC1709 (ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_m6E63875E6098E89250149F4E76FAD40844708391 (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Exception System.Data.ExceptionBuilder::INullableUDTwithoutStaticNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_INullableUDTwithoutStaticNull_m12D68CA24E4358382D62FBBCB35B7290CC3B0EAD (String_t* ___typeName0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D (int64_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal System.Math::Round(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) ;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Decimal_op_Explicit_m0E6416BBDAC3D0939FCF0279F793C6D574036B54 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Subtraction_mBDD5FAB14E0E9FA655A4C32B72C39E6BF947DF81 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d10, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d21, const RuntimeMethod* method) ;
// System.Double System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_CompareTo_m85916E1968FD4309A3CFCBCBC0E3DF2E9AEB0FD3 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Parse_m4686E70A0FA2425C083A58B73A025D36F738AD35 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.TimeSpan System.Data.Common.TimeSpanStorage::ConvertToTimeSpan(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t10, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___t21, const RuntimeMethod* method) ;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A XmlConvert_ToTimeSpan_mDF57053BCC75597B17BD744CFC2E3777006782C2 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_mEF060F018017514326BC5A2127ABEAC96BE8A14B (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Data.Common.DataStorage::HasValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, int32_t ___recordNo0, const RuntimeMethod* method) ;
// System.UInt16 System.Math::Min(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Math_Min_mA7BFF48067FBED606414C9937B00BE496B2696D7 (uint16_t ___val10, uint16_t ___val21, const RuntimeMethod* method) ;
// System.UInt16 System.Math::Max(System.UInt16,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Math_Max_m670CC45E68892199F0ED53A131DAB78A953389BB (uint16_t ___val10, uint16_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::CompareTo(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.UInt16::Equals(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089 (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method) ;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t XmlConvert_ToUInt16_m724BC6C22738955F6FDE18ECF99FB00DBB68DBDE (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m15222157CD861187A9C674677C6CCCF34DCABCB7 (uint16_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7 (uint32_t ___val10, uint32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.UInt32::Equals(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method) ;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t XmlConvert_ToUInt32_m1D00F9B52CAFB9CD660C71B741FC8301890D9F1F (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m8F28EF0133301A563B7A9853C7DBB023491EFE83 (uint32_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Decimal_op_Explicit_m8AC64F6A5010191CE440A31868AAE5E505008F49 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Math::Min(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Math_Min_m1C589BAB3D638CE6D3A29E552EDB5E9F95856C28 (uint64_t ___val10, uint64_t ___val21, const RuntimeMethod* method) ;
// System.UInt64 System.Math::Max(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Math_Max_m904B9911C775943500AA17842F6D3D45010EAB4A (uint64_t ___val10, uint64_t ___val21, const RuntimeMethod* method) ;
// System.Boolean System.UInt64::Equals(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XmlConvert_ToUInt64_m3EDAB359CE90486CEEF0F718D15C131ED2FF2C0A (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m9A1A9D40FD8B650DD3EC4DD58410847A20C472E1 (uint64_t ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Round(System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Round_m1DD2AAA2C9C8D2A1CDA6ECCC2724A075616FF624 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, int32_t ___decimals1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.Common.SqlDecimalStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDecimalStorage__ctor_m05F27AB1A177D5D7635E9838D6DBFBA41B291330 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_3 = ((SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields*)il2cpp_codegen_static_fields_for(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var))->___Null_57;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_4);
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_6 = ((SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields*)il2cpp_codegen_static_fields_for(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var))->___Null_57;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)32), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlDecimalStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDecimalStorage_Aggregate_mCF3B8B498DBE9A04A814D7979E6FA217901E6790 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0091_1;
				}
				case 2:
				{
					goto IL_02a5_1;
				}
				case 3:
				{
					goto IL_031c_1;
				}
				case 4:
				{
					goto IL_038d_1;
				}
				case 5:
				{
					goto IL_03ad_1;
				}
				case 6:
				{
					goto IL_010d_1;
				}
				case 7:
				{
					goto IL_010d_1;
				}
			}
		}
		{
			goto IL_03df_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_1;
			L_1 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)0), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_006c_1;
		}

IL_003f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_0066_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_9 = V_1;
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_14;
			L_14 = SqlDecimal_op_Addition_mD621901A8B8506AD33C1A11593E8C26BB4291D0F(L_9, L_13, NULL);
			V_1 = L_14;
			V_0 = (bool)1;
		}

IL_0066_1:
		{
			int32_t L_15 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_006c_1:
		{
			int32_t L_16 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_10;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			bool L_18 = V_0;
			if (!L_18)
			{
				goto IL_0084_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_19 = V_1;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_20 = L_19;
			RuntimeObject* L_21 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_20);
			V_13 = L_21;
			goto IL_03ff;
		}

IL_0084_1:
		{
			RuntimeObject* L_22 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_22;
			goto IL_03ff;
		}

IL_0091_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_23;
			L_23 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)0), NULL);
			V_2 = L_23;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___records0;
			V_10 = L_24;
			V_11 = 0;
			goto IL_00d4_1;
		}

IL_00a3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_10;
			int32_t L_26 = V_11;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			V_14 = L_28;
			int32_t L_29 = V_14;
			bool L_30;
			L_30 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_29);
			if (L_30)
			{
				goto IL_00ce_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_31 = V_2;
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_32 = __this->____values_14;
			int32_t L_33 = V_14;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_36;
			L_36 = SqlDecimal_op_Addition_mD621901A8B8506AD33C1A11593E8C26BB4291D0F(L_31, L_35, NULL);
			V_2 = L_36;
			int32_t L_37 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			V_0 = (bool)1;
		}

IL_00ce_1:
		{
			int32_t L_38 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00d4_1:
		{
			int32_t L_39 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_10;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
			{
				goto IL_00a3_1;
			}
		}
		{
			bool L_41 = V_0;
			if (!L_41)
			{
				goto IL_0100_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_42;
			L_42 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)0), NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_43 = V_2;
			int32_t L_44 = V_3;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_45;
			L_45 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)L_44), NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_46;
			L_46 = SqlDecimal_op_Division_mB5C1F3E2126BB74E4C73E734227C783A896ACBAD(L_43, L_45, NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_47 = L_46;
			RuntimeObject* L_48 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_47);
			V_13 = L_48;
			goto IL_03ff;
		}

IL_0100_1:
		{
			RuntimeObject* L_49 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_49;
			goto IL_03ff;
		}

IL_010d_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_50;
			L_50 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_50;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_52;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_53;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___records0;
			V_10 = L_54;
			V_11 = 0;
			goto IL_01c1_1;
		}

IL_0157_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_10;
			int32_t L_56 = V_11;
			NullCheck(L_55);
			int32_t L_57 = L_56;
			int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			V_15 = L_58;
			int32_t L_59 = V_15;
			bool L_60;
			L_60 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_59);
			if (L_60)
			{
				goto IL_01bb_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_61 = V_6;
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_62 = __this->____values_14;
			int32_t L_63 = V_15;
			NullCheck(L_62);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_64;
			L_64 = SqlDecimal_ToSqlDouble_mEB326B4BC49D4F60C4020EFFDE752677F67AE674(((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65;
			L_65 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_61, L_64, NULL);
			V_6 = L_65;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66 = V_7;
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_67 = __this->____values_14;
			int32_t L_68 = V_15;
			NullCheck(L_67);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_69;
			L_69 = SqlDecimal_ToSqlDouble_mEB326B4BC49D4F60C4020EFFDE752677F67AE674(((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), NULL);
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_70 = __this->____values_14;
			int32_t L_71 = V_15;
			NullCheck(L_70);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_72;
			L_72 = SqlDecimal_ToSqlDouble_mEB326B4BC49D4F60C4020EFFDE752677F67AE674(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_73;
			L_73 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_69, L_72, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_74;
			L_74 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_66, L_73, NULL);
			V_7 = L_74;
			int32_t L_75 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		}

IL_01bb_1:
		{
			int32_t L_76 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		}

IL_01c1_1:
		{
			int32_t L_77 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_10;
			NullCheck(L_78);
			if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
			{
				goto IL_0157_1;
			}
		}
		{
			int32_t L_79 = V_4;
			if ((((int32_t)L_79) <= ((int32_t)1)))
			{
				goto IL_0298_1;
			}
		}
		{
			int32_t L_80 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_81;
			L_81 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_80), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_82 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_83;
			L_83 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_81, L_82, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86;
			L_86 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_84, L_85, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87;
			L_87 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_83, L_86, NULL);
			V_5 = L_87;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91;
			L_91 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_89, L_90, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92;
			L_92 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_88, L_91, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93;
			L_93 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_94;
			L_94 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_92, L_93, NULL);
			V_16 = L_94;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_95 = V_16;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_96;
			L_96 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_95, NULL);
			if (L_96)
			{
				goto IL_023c_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_97 = V_16;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_98 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_99;
			L_99 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_100;
			L_100 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_98, L_99, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_101;
			L_101 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_97, L_100, NULL);
			G_B28_0 = L_101;
			goto IL_023e_1;
		}

IL_023c_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_102 = V_16;
			G_B28_0 = L_102;
		}

IL_023e_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_103;
			L_103 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_103)
			{
				goto IL_0257_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_104;
			L_104 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_104;
			goto IL_026d_1;
		}

IL_0257_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_105 = V_5;
			int32_t L_106 = V_4;
			int32_t L_107 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_108;
			L_108 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_106, ((int32_t)il2cpp_codegen_subtract(L_107, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_109;
			L_109 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_105, L_108, NULL);
			V_5 = L_109;
		}

IL_026d_1:
		{
			int32_t L_110 = ___kind1;
			if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_028a_1;
			}
		}
		{
			double L_111;
			L_111 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_112;
			L_112 = sqrt(L_111);
			double L_113 = L_112;
			RuntimeObject* L_114 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_113);
			V_13 = L_114;
			goto IL_03ff;
		}

IL_028a_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_115 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_116 = L_115;
			RuntimeObject* L_117 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_116);
			V_13 = L_117;
			goto IL_03ff;
		}

IL_0298_1:
		{
			RuntimeObject* L_118 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_118;
			goto IL_03ff;
		}

IL_02a5_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_119 = ((SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields*)il2cpp_codegen_static_fields_for(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var))->___MaxValue_59;
			V_8 = L_119;
			V_17 = 0;
			goto IL_02f7_1;
		}

IL_02b1_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ___records0;
			int32_t L_121 = V_17;
			NullCheck(L_120);
			int32_t L_122 = L_121;
			int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
			V_18 = L_123;
			int32_t L_124 = V_18;
			bool L_125;
			L_125 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_124);
			if (L_125)
			{
				goto IL_02f1_1;
			}
		}
		{
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_126 = __this->____values_14;
			int32_t L_127 = V_18;
			NullCheck(L_126);
			int32_t L_128 = L_127;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_130 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_131;
			L_131 = SqlDecimal_LessThan_mC6C08FED135BE851B044FCD4A01025FFFDFEBEC2(L_129, L_130, NULL);
			V_16 = L_131;
			bool L_132;
			L_132 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_16), NULL);
			if (!L_132)
			{
				goto IL_02ef_1;
			}
		}
		{
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_133 = __this->____values_14;
			int32_t L_134 = V_18;
			NullCheck(L_133);
			int32_t L_135 = L_134;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
			V_8 = L_136;
		}

IL_02ef_1:
		{
			V_0 = (bool)1;
		}

IL_02f1_1:
		{
			int32_t L_137 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		}

IL_02f7_1:
		{
			int32_t L_138 = V_17;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = ___records0;
			NullCheck(L_139);
			if ((((int32_t)L_138) < ((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length)))))
			{
				goto IL_02b1_1;
			}
		}
		{
			bool L_140 = V_0;
			if (!L_140)
			{
				goto IL_030f_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_141 = V_8;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_142 = L_141;
			RuntimeObject* L_143 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_142);
			V_13 = L_143;
			goto IL_03ff;
		}

IL_030f_1:
		{
			RuntimeObject* L_144 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_144;
			goto IL_03ff;
		}

IL_031c_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_145 = ((SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_StaticFields*)il2cpp_codegen_static_fields_for(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var))->___MinValue_58;
			V_9 = L_145;
			V_19 = 0;
			goto IL_036e_1;
		}

IL_0328_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = ___records0;
			int32_t L_147 = V_19;
			NullCheck(L_146);
			int32_t L_148 = L_147;
			int32_t L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
			V_20 = L_149;
			int32_t L_150 = V_20;
			bool L_151;
			L_151 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_150);
			if (L_151)
			{
				goto IL_0368_1;
			}
		}
		{
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_152 = __this->____values_14;
			int32_t L_153 = V_20;
			NullCheck(L_152);
			int32_t L_154 = L_153;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_156 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_157;
			L_157 = SqlDecimal_GreaterThan_mC1DB841F45F3245DDCAFA8FB2BFA993E02E6BEC3(L_155, L_156, NULL);
			V_16 = L_157;
			bool L_158;
			L_158 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_16), NULL);
			if (!L_158)
			{
				goto IL_0366_1;
			}
		}
		{
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_159 = __this->____values_14;
			int32_t L_160 = V_20;
			NullCheck(L_159);
			int32_t L_161 = L_160;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
			V_9 = L_162;
		}

IL_0366_1:
		{
			V_0 = (bool)1;
		}

IL_0368_1:
		{
			int32_t L_163 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		}

IL_036e_1:
		{
			int32_t L_164 = V_19;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = ___records0;
			NullCheck(L_165);
			if ((((int32_t)L_164) < ((int32_t)((int32_t)(((RuntimeArray*)L_165)->max_length)))))
			{
				goto IL_0328_1;
			}
		}
		{
			bool L_166 = V_0;
			if (!L_166)
			{
				goto IL_0383_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_167 = V_9;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_168 = L_167;
			RuntimeObject* L_169 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_168);
			V_13 = L_169;
			goto IL_03ff;
		}

IL_0383_1:
		{
			RuntimeObject* L_170 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_170;
			goto IL_03ff;
		}

IL_038d_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = ___records0;
			NullCheck(L_171);
			if (!(((RuntimeArray*)L_171)->max_length))
			{
				goto IL_03a8_1;
			}
		}
		{
			SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_172 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___records0;
			NullCheck(L_173);
			int32_t L_174 = 0;
			int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
			NullCheck(L_172);
			int32_t L_176 = L_175;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_177 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_178 = L_177;
			RuntimeObject* L_179 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_178);
			V_13 = L_179;
			goto IL_03ff;
		}

IL_03a8_1:
		{
			V_13 = NULL;
			goto IL_03ff;
		}

IL_03ad_1:
		{
			V_4 = 0;
			V_21 = 0;
			goto IL_03cd_1;
		}

IL_03b5_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___records0;
			int32_t L_181 = V_21;
			NullCheck(L_180);
			int32_t L_182 = L_181;
			int32_t L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
			bool L_184;
			L_184 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_183);
			if (L_184)
			{
				goto IL_03c7_1;
			}
		}
		{
			int32_t L_185 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_185, 1));
		}

IL_03c7_1:
		{
			int32_t L_186 = V_21;
			V_21 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		}

IL_03cd_1:
		{
			int32_t L_187 = V_21;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ___records0;
			NullCheck(L_188);
			if ((((int32_t)L_187) < ((int32_t)((int32_t)(((RuntimeArray*)L_188)->max_length)))))
			{
				goto IL_03b5_1;
			}
		}
		{
			int32_t L_189 = V_4;
			int32_t L_190 = L_189;
			RuntimeObject* L_191 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_190);
			V_13 = L_191;
			goto IL_03ff;
		}

IL_03df_1:
		{
			goto IL_03f2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03e1;
		}
		throw e;
	}

CATCH_03e1:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		Exception_t* L_194;
		L_194 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_193, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_194, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDecimalStorage_Aggregate_mCF3B8B498DBE9A04A814D7979E6FA217901E6790_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_03f2:
	{
		int32_t L_195 = ___kind1;
		Type_t* L_196 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_197;
		L_197 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_195, L_196, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDecimalStorage_Aggregate_mCF3B8B498DBE9A04A814D7979E6FA217901E6790_RuntimeMethod_var)));
	}

IL_03ff:
	{
		RuntimeObject* L_198 = V_13;
		return L_198;
	}
}
// System.Int32 System.Data.Common.SqlDecimalStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDecimalStorage_Compare_m2D5605F045DFF360D3DE042D94D41CF541665892 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlDecimal_CompareTo_m0100ACFA5FBF6023915A5ADC06B9C15BB9F7C4F2(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlDecimalStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDecimalStorage_CompareValueTo_m99151EA8DBC11A58276F9F43CE3C1B7EE68FC1EB (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlDecimal_CompareTo_m0100ACFA5FBF6023915A5ADC06B9C15BB9F7C4F2(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406*)((SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406*)(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406*)UnBox(L_2, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlDecimalStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDecimalStorage_ConvertValue_m0C8A76B9E6AEF04D5861CA02DC4143EE603DDC16 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_2;
		L_2 = SqlConvert_ConvertToSqlDecimal_mBD14BC035031E59F67932D7C71FDF1DAC620ACEC(L_1, NULL);
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlDecimalStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDecimalStorage_Copy_m6AEE43779DBD73060E7BCCDC592A56DEA80E75CE (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlDecimalStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDecimalStorage_Get_m7DD7B04BCBA8874A4A124DEE87ABA06F02F98958 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlDecimalStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDecimalStorage_IsNull_m1673FA78873669E79BBCE15D75A12BEC5A21ABBD (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlDecimal_get_IsNull_mDA382F935BD7A4F5BF8430DBC5E5C7C8C26B42DF(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlDecimalStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDecimalStorage_Set_m303844ED9BBA8D5D08F6454ABBAABF2FCA399D04 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_3;
		L_3 = SqlConvert_ConvertToSqlDecimal_mBD14BC035031E59F67932D7C71FDF1DAC620ACEC(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlDecimalStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDecimalStorage_SetCapacity_m27355FFA6DA45A309F361B36497EB1E62DA22430 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_1 = (SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)(SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)SZArrayNew(SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_3 = __this->____values_14;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlDecimalStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDecimalStorage_ConvertXmlToObject_m2E51443F5DCBB4E4536698CC47292FDEC294C38B (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_3 = V_0;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_12 = ((*(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406*)((SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406*)(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406*)UnBox(L_11, SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlDecimalStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlDecimalStorage_ConvertObjectToXml_mE3FB10F99351C98D88C02B2C8566D4101C5AE24E (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlDecimalStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDecimalStorage_GetEmptyStorage_m5F40EB9C1BB2D1DD2D7A2345E7B8445D1E7778D3 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_1 = (SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)(SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)SZArrayNew(SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlDecimalStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDecimalStorage_CopyValue_mCCA76443BF7441DFE214B6442EDF79A95CD95C81 (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)Castclass((RuntimeObject*)L_0, SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var)));
		(((SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)Castclass((RuntimeObject*)L_0, SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlDecimalStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDecimalStorage_SetStorage_m7807850A6FE40249425AEB585A6C5E215347E07D (SqlDecimalStorage_t441A81FB2EBA2ECD471F6DF8FF650B7F81110E17* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)Castclass((RuntimeObject*)L_0, SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0*)Castclass((RuntimeObject*)L_0, SqlDecimalU5BU5D_tC71EA63727B3817E83E7D17E93D8B133162144C0_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlDoubleStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDoubleStorage__ctor_mC813BE6407DC85AC5B7396FB66F3976DD476EF9E (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_3 = ((SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields*)il2cpp_codegen_static_fields_for(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var))->___Null_2;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_4);
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_6 = ((SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields*)il2cpp_codegen_static_fields_for(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var))->___Null_2;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)33), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlDoubleStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDoubleStorage_Aggregate_mF000521AF34CA14D6C6D3B95EE76AE32E397FE78 (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0098_1;
				}
				case 2:
				{
					goto IL_02ab_1;
				}
				case 3:
				{
					goto IL_0322_1;
				}
				case 4:
				{
					goto IL_0393_1;
				}
				case 5:
				{
					goto IL_03b3_1;
				}
				case 6:
				{
					goto IL_0122_1;
				}
				case 7:
				{
					goto IL_0122_1;
				}
			}
		}
		{
			goto IL_03e5_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_1;
			L_1 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0073_1;
		}

IL_0046_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_006d_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_9 = V_1;
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_14;
			L_14 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_9, L_13, NULL);
			V_1 = L_14;
			V_0 = (bool)1;
		}

IL_006d_1:
		{
			int32_t L_15 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_0073_1:
		{
			int32_t L_16 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_10;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_0046_1;
			}
		}
		{
			bool L_18 = V_0;
			if (!L_18)
			{
				goto IL_008b_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_19 = V_1;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_20 = L_19;
			RuntimeObject* L_21 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_20);
			V_13 = L_21;
			goto IL_0405;
		}

IL_008b_1:
		{
			RuntimeObject* L_22 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_22;
			goto IL_0405;
		}

IL_0098_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_23;
			L_23 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_2 = L_23;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___records0;
			V_10 = L_24;
			V_11 = 0;
			goto IL_00e2_1;
		}

IL_00b1_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_10;
			int32_t L_26 = V_11;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			V_14 = L_28;
			int32_t L_29 = V_14;
			bool L_30;
			L_30 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_29);
			if (L_30)
			{
				goto IL_00dc_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_31 = V_2;
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_32 = __this->____values_14;
			int32_t L_33 = V_14;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_36;
			L_36 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_31, L_35, NULL);
			V_2 = L_36;
			int32_t L_37 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			V_0 = (bool)1;
		}

IL_00dc_1:
		{
			int32_t L_38 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00e2_1:
		{
			int32_t L_39 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_10;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
			{
				goto IL_00b1_1;
			}
		}
		{
			bool L_41 = V_0;
			if (!L_41)
			{
				goto IL_0115_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_42;
			L_42 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_43 = V_2;
			int32_t L_44 = V_3;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_45;
			L_45 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_44), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_46;
			L_46 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_43, L_45, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_47 = L_46;
			RuntimeObject* L_48 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_47);
			V_13 = L_48;
			goto IL_0405;
		}

IL_0115_1:
		{
			RuntimeObject* L_49 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_49;
			goto IL_0405;
		}

IL_0122_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_50;
			L_50 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_50;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_52;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_53;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___records0;
			V_10 = L_54;
			V_11 = 0;
			goto IL_01c7_1;
		}

IL_016c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_10;
			int32_t L_56 = V_11;
			NullCheck(L_55);
			int32_t L_57 = L_56;
			int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			V_15 = L_58;
			int32_t L_59 = V_15;
			bool L_60;
			L_60 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_59);
			if (L_60)
			{
				goto IL_01c1_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_61 = V_6;
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_62 = __this->____values_14;
			int32_t L_63 = V_15;
			NullCheck(L_62);
			int32_t L_64 = L_63;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66;
			L_66 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_61, L_65, NULL);
			V_6 = L_66;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_67 = V_7;
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_68 = __this->____values_14;
			int32_t L_69 = V_15;
			NullCheck(L_68);
			int32_t L_70 = L_69;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_72 = __this->____values_14;
			int32_t L_73 = V_15;
			NullCheck(L_72);
			int32_t L_74 = L_73;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_76;
			L_76 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_71, L_75, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_77;
			L_77 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_67, L_76, NULL);
			V_7 = L_77;
			int32_t L_78 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		}

IL_01c1_1:
		{
			int32_t L_79 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		}

IL_01c7_1:
		{
			int32_t L_80 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_10;
			NullCheck(L_81);
			if ((((int32_t)L_80) < ((int32_t)((int32_t)(((RuntimeArray*)L_81)->max_length)))))
			{
				goto IL_016c_1;
			}
		}
		{
			int32_t L_82 = V_4;
			if ((((int32_t)L_82) <= ((int32_t)1)))
			{
				goto IL_029e_1;
			}
		}
		{
			int32_t L_83 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84;
			L_84 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_83), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86;
			L_86 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_84, L_85, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89;
			L_89 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_87, L_88, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90;
			L_90 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_86, L_89, NULL);
			V_5 = L_90;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_94;
			L_94 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_92, L_93, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_95;
			L_95 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_91, L_94, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_96;
			L_96 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_97;
			L_97 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_95, L_96, NULL);
			V_16 = L_97;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_98 = V_16;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_99;
			L_99 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_98, NULL);
			if (L_99)
			{
				goto IL_0242_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_100 = V_16;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_101 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_102;
			L_102 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_103;
			L_103 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_101, L_102, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_104;
			L_104 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_100, L_103, NULL);
			G_B28_0 = L_104;
			goto IL_0244_1;
		}

IL_0242_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_105 = V_16;
			G_B28_0 = L_105;
		}

IL_0244_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_106;
			L_106 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_106)
			{
				goto IL_025d_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_107;
			L_107 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_107;
			goto IL_0273_1;
		}

IL_025d_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_108 = V_5;
			int32_t L_109 = V_4;
			int32_t L_110 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_111;
			L_111 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_109, ((int32_t)il2cpp_codegen_subtract(L_110, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_112;
			L_112 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_108, L_111, NULL);
			V_5 = L_112;
		}

IL_0273_1:
		{
			int32_t L_113 = ___kind1;
			if ((!(((uint32_t)L_113) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_0290_1;
			}
		}
		{
			double L_114;
			L_114 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_115;
			L_115 = sqrt(L_114);
			double L_116 = L_115;
			RuntimeObject* L_117 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_116);
			V_13 = L_117;
			goto IL_0405;
		}

IL_0290_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_118 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_119 = L_118;
			RuntimeObject* L_120 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_119);
			V_13 = L_120;
			goto IL_0405;
		}

IL_029e_1:
		{
			RuntimeObject* L_121 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_121;
			goto IL_0405;
		}

IL_02ab_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_122 = ((SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields*)il2cpp_codegen_static_fields_for(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var))->___MaxValue_5;
			V_8 = L_122;
			V_17 = 0;
			goto IL_02fd_1;
		}

IL_02b7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = ___records0;
			int32_t L_124 = V_17;
			NullCheck(L_123);
			int32_t L_125 = L_124;
			int32_t L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
			V_18 = L_126;
			int32_t L_127 = V_18;
			bool L_128;
			L_128 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_127);
			if (L_128)
			{
				goto IL_02f7_1;
			}
		}
		{
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_129 = __this->____values_14;
			int32_t L_130 = V_18;
			NullCheck(L_129);
			int32_t L_131 = L_130;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_133 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_134;
			L_134 = SqlDouble_LessThan_mF086E28246E2FB7D3D74592DA9D5EA0BC6158B0A(L_132, L_133, NULL);
			V_16 = L_134;
			bool L_135;
			L_135 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_16), NULL);
			if (!L_135)
			{
				goto IL_02f5_1;
			}
		}
		{
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_136 = __this->____values_14;
			int32_t L_137 = V_18;
			NullCheck(L_136);
			int32_t L_138 = L_137;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
			V_8 = L_139;
		}

IL_02f5_1:
		{
			V_0 = (bool)1;
		}

IL_02f7_1:
		{
			int32_t L_140 = V_17;
			V_17 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		}

IL_02fd_1:
		{
			int32_t L_141 = V_17;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = ___records0;
			NullCheck(L_142);
			if ((((int32_t)L_141) < ((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length)))))
			{
				goto IL_02b7_1;
			}
		}
		{
			bool L_143 = V_0;
			if (!L_143)
			{
				goto IL_0315_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_144 = V_8;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_145 = L_144;
			RuntimeObject* L_146 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_145);
			V_13 = L_146;
			goto IL_0405;
		}

IL_0315_1:
		{
			RuntimeObject* L_147 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_147;
			goto IL_0405;
		}

IL_0322_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_148 = ((SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_StaticFields*)il2cpp_codegen_static_fields_for(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var))->___MinValue_4;
			V_9 = L_148;
			V_19 = 0;
			goto IL_0374_1;
		}

IL_032e_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ___records0;
			int32_t L_150 = V_19;
			NullCheck(L_149);
			int32_t L_151 = L_150;
			int32_t L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
			V_20 = L_152;
			int32_t L_153 = V_20;
			bool L_154;
			L_154 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_153);
			if (L_154)
			{
				goto IL_036e_1;
			}
		}
		{
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_155 = __this->____values_14;
			int32_t L_156 = V_20;
			NullCheck(L_155);
			int32_t L_157 = L_156;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_159 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_160;
			L_160 = SqlDouble_GreaterThan_m7373754DC3CB5BA4E23E80D1A2ABA637F46F5C80(L_158, L_159, NULL);
			V_16 = L_160;
			bool L_161;
			L_161 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_16), NULL);
			if (!L_161)
			{
				goto IL_036c_1;
			}
		}
		{
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_162 = __this->____values_14;
			int32_t L_163 = V_20;
			NullCheck(L_162);
			int32_t L_164 = L_163;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
			V_9 = L_165;
		}

IL_036c_1:
		{
			V_0 = (bool)1;
		}

IL_036e_1:
		{
			int32_t L_166 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		}

IL_0374_1:
		{
			int32_t L_167 = V_19;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ___records0;
			NullCheck(L_168);
			if ((((int32_t)L_167) < ((int32_t)((int32_t)(((RuntimeArray*)L_168)->max_length)))))
			{
				goto IL_032e_1;
			}
		}
		{
			bool L_169 = V_0;
			if (!L_169)
			{
				goto IL_0389_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_170 = V_9;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_171 = L_170;
			RuntimeObject* L_172 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_171);
			V_13 = L_172;
			goto IL_0405;
		}

IL_0389_1:
		{
			RuntimeObject* L_173 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_173;
			goto IL_0405;
		}

IL_0393_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = ___records0;
			NullCheck(L_174);
			if (!(((RuntimeArray*)L_174)->max_length))
			{
				goto IL_03ae_1;
			}
		}
		{
			SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_175 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ___records0;
			NullCheck(L_176);
			int32_t L_177 = 0;
			int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
			NullCheck(L_175);
			int32_t L_179 = L_178;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_180 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_181 = L_180;
			RuntimeObject* L_182 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_181);
			V_13 = L_182;
			goto IL_0405;
		}

IL_03ae_1:
		{
			V_13 = NULL;
			goto IL_0405;
		}

IL_03b3_1:
		{
			V_4 = 0;
			V_21 = 0;
			goto IL_03d3_1;
		}

IL_03bb_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = ___records0;
			int32_t L_184 = V_21;
			NullCheck(L_183);
			int32_t L_185 = L_184;
			int32_t L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
			bool L_187;
			L_187 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_186);
			if (L_187)
			{
				goto IL_03cd_1;
			}
		}
		{
			int32_t L_188 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_188, 1));
		}

IL_03cd_1:
		{
			int32_t L_189 = V_21;
			V_21 = ((int32_t)il2cpp_codegen_add(L_189, 1));
		}

IL_03d3_1:
		{
			int32_t L_190 = V_21;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_191 = ___records0;
			NullCheck(L_191);
			if ((((int32_t)L_190) < ((int32_t)((int32_t)(((RuntimeArray*)L_191)->max_length)))))
			{
				goto IL_03bb_1;
			}
		}
		{
			int32_t L_192 = V_4;
			int32_t L_193 = L_192;
			RuntimeObject* L_194 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_193);
			V_13 = L_194;
			goto IL_0405;
		}

IL_03e5_1:
		{
			goto IL_03f8;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03e7;
		}
		throw e;
	}

CATCH_03e7:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_195 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_196;
		L_196 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_195, NULL);
		Exception_t* L_197;
		L_197 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_196, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDoubleStorage_Aggregate_mF000521AF34CA14D6C6D3B95EE76AE32E397FE78_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_03f8:
	{
		int32_t L_198 = ___kind1;
		Type_t* L_199 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_200;
		L_200 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_198, L_199, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_200, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlDoubleStorage_Aggregate_mF000521AF34CA14D6C6D3B95EE76AE32E397FE78_RuntimeMethod_var)));
	}

IL_0405:
	{
		RuntimeObject* L_201 = V_13;
		return L_201;
	}
}
// System.Int32 System.Data.Common.SqlDoubleStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDoubleStorage_Compare_m60A0FEC76A50FA581EAB01D2CCA14A52B854ADB2 (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlDouble_CompareTo_mE79F43FB35FAC5959E985E45CDB0122A91CAA554(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlDoubleStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlDoubleStorage_CompareValueTo_mE5FFCCCFC464485C99C3BEC300A16B07DC4F7EEF (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlDouble_CompareTo_mE79F43FB35FAC5959E985E45CDB0122A91CAA554(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98*)((SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98*)(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98*)UnBox(L_2, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlDoubleStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDoubleStorage_ConvertValue_mDD925EDF829759C6AB6DA3F79FEC80504757D955 (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_2;
		L_2 = SqlConvert_ConvertToSqlDouble_m76B97825E7AE6A3AF01CC8AED615ED2571769259(L_1, NULL);
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlDoubleStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDoubleStorage_Copy_m96F2330A30430C32A95AE125CA769FE6B5A00DAE (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlDoubleStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDoubleStorage_Get_m0ABF38D9C9047F8A4F92B516070D89B24B7BE5EA (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlDoubleStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlDoubleStorage_IsNull_mA3083D6BA16CCDF04331D6CE31CF8EF8046E0EAD (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlDouble_get_IsNull_m32B39599187BF64D35C02E2B7EDCDE9B08F47FE6(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlDoubleStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDoubleStorage_Set_m66AA6CA02EC8F6C5779DB15463E804DBD262808B (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_3;
		L_3 = SqlConvert_ConvertToSqlDouble_m76B97825E7AE6A3AF01CC8AED615ED2571769259(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlDoubleStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDoubleStorage_SetCapacity_m863E8EB404EAF286F7DBF7E2916CA48C1E331407 (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_1 = (SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)(SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)SZArrayNew(SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_3 = __this->____values_14;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlDoubleStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDoubleStorage_ConvertXmlToObject_mA13BE08497723F2EF4B3BB69242C2DFEAAF0339B (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_3 = V_0;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_12 = ((*(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98*)((SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98*)(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98*)UnBox(L_11, SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlDoubleStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlDoubleStorage_ConvertObjectToXml_mA64C4D1ABE8367138C7E335D02D933E68A8CA790 (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlDoubleStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlDoubleStorage_GetEmptyStorage_m113DF0C30BE20A8F39D41A60DCAE0149B1B1A31B (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_1 = (SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)(SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)SZArrayNew(SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlDoubleStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDoubleStorage_CopyValue_mA79FD20DF3328EEEB5FB7AE871D5E2F12919555F (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)Castclass((RuntimeObject*)L_0, SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var)));
		(((SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)Castclass((RuntimeObject*)L_0, SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlDoubleStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlDoubleStorage_SetStorage_m12FB8DD144DFB647F7EDE25738515B3CAD2AAEDB (SqlDoubleStorage_t0DECABF667CA933EB7456ABAA7CC258E66971383* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)Castclass((RuntimeObject*)L_0, SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B*)Castclass((RuntimeObject*)L_0, SqlDoubleU5BU5D_t1C3FE0489B161EBF4B6323B2CC193EC0B8FC2A5B_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlGuidStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlGuidStorage__ctor_mD4FFD0D530A6D60DAC9055C9AAA872383CF25C92 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_3 = ((SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_StaticFields*)il2cpp_codegen_static_fields_for(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var))->___Null_3;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_4);
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_6 = ((SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_StaticFields*)il2cpp_codegen_static_fields_for(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var))->___Null_3;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)34), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlGuidStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlGuidStorage_Aggregate_m507A48A80846C74824F9782F332785D2C20E0629 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			if ((((int32_t)L_0) == ((int32_t)8)))
			{
				goto IL_000b_1;
			}
		}
		{
			int32_t L_1 = ___kind1;
			if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
			{
				goto IL_0029_1;
			}
		}
		{
			goto IL_0051_1;
		}

IL_000b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			NullCheck(L_2);
			if (!(((RuntimeArray*)L_2)->max_length))
			{
				goto IL_0025_1;
			}
		}
		{
			SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_3 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___records0;
			NullCheck(L_4);
			int32_t L_5 = 0;
			int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			NullCheck(L_3);
			int32_t L_7 = L_6;
			SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_9 = L_8;
			RuntimeObject* L_10 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_9);
			V_1 = L_10;
			goto IL_0071;
		}

IL_0025_1:
		{
			V_1 = NULL;
			goto IL_0071;
		}

IL_0029_1:
		{
			V_0 = 0;
			V_2 = 0;
			goto IL_0042_1;
		}

IL_002f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___records0;
			int32_t L_12 = V_2;
			NullCheck(L_11);
			int32_t L_13 = L_12;
			int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			bool L_15;
			L_15 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_14);
			if (L_15)
			{
				goto IL_003e_1;
			}
		}
		{
			int32_t L_16 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_003e_1:
		{
			int32_t L_17 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		}

IL_0042_1:
		{
			int32_t L_18 = V_2;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___records0;
			NullCheck(L_19);
			if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
			{
				goto IL_002f_1;
			}
		}
		{
			int32_t L_20 = V_0;
			int32_t L_21 = L_20;
			RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
			V_1 = L_22;
			goto IL_0071;
		}

IL_0051_1:
		{
			goto IL_0064;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Exception_t* L_25;
		L_25 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlGuidStorage_Aggregate_m507A48A80846C74824F9782F332785D2C20E0629_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0064:
	{
		int32_t L_26 = ___kind1;
		Type_t* L_27 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_28;
		L_28 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_26, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlGuidStorage_Aggregate_m507A48A80846C74824F9782F332785D2C20E0629_RuntimeMethod_var)));
	}

IL_0071:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// System.Int32 System.Data.Common.SqlGuidStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlGuidStorage_Compare_mFF38D16095B12F278F7532612D847A77E2AC6476 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlGuid_CompareTo_m79D7C2B70A98A7796369DDE9DE2BCCEC0E8C68E8(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlGuidStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlGuidStorage_CompareValueTo_mEBEE780FC80C90F9BB9F232851E349F79A1DE50E (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlGuid_CompareTo_m79D7C2B70A98A7796369DDE9DE2BCCEC0E8C68E8(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7*)((SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7*)(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7*)UnBox(L_2, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlGuidStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlGuidStorage_ConvertValue_mE7AF0062DF2769B67B275FA2494DB2A5F48DB0D9 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_2;
		L_2 = SqlConvert_ConvertToSqlGuid_mE1287880F42E7F9CE6646D5FD2300CD25F2743C2(L_1, NULL);
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlGuidStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlGuidStorage_Copy_m5A3C32795CE82FEFF200C1FD9C9432CC6C0ECB55 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlGuidStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlGuidStorage_Get_mED0B77FF3424590D67D843499BB641300787E684 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlGuidStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlGuidStorage_IsNull_m844F01904C1DE404295D11DAD806DC2798CAA505 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlGuid_get_IsNull_m0751FE60211BF2C953CB00945698A78683C69E4F(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlGuidStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlGuidStorage_Set_mE833910DBCB99ACF7225E52AD71B4604CEB4AA5D (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_3;
		L_3 = SqlConvert_ConvertToSqlGuid_mE1287880F42E7F9CE6646D5FD2300CD25F2743C2(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlGuidStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlGuidStorage_SetCapacity_mC60BFD461EEBA9A566D684106C89BA19AB50E6C2 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_1 = (SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)(SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)SZArrayNew(SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_3 = __this->____values_14;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlGuidStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlGuidStorage_ConvertXmlToObject_mADC6F420E544FAFCD00E1DA53101A63C2EFF698B (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_3 = V_0;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_12 = ((*(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7*)((SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7*)(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7*)UnBox(L_11, SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlGuidStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlGuidStorage_ConvertObjectToXml_mA90C39A1A045C7E626178ED97F69144D92763C7B (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlGuidStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlGuidStorage_GetEmptyStorage_mD55373637389F0F25C36457D8DE8F56FA9D50B90 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_1 = (SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)(SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)SZArrayNew(SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlGuidStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlGuidStorage_CopyValue_m1CDAA46534C702A30F7E2E36DD1637BE14E80ECB (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)Castclass((RuntimeObject*)L_0, SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var)));
		(((SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)Castclass((RuntimeObject*)L_0, SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlGuid_t93C33E370E5D3A344A15F9EFD9A2D4177576DED7)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlGuidStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlGuidStorage_SetStorage_m835A833A485F849E0AC96ADCCF400D3881D9ADC6 (SqlGuidStorage_tDF1FC414689723A6400F8E45E3DEA113BC4E7C0D* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)Castclass((RuntimeObject*)L_0, SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216*)Castclass((RuntimeObject*)L_0, SqlGuidU5BU5D_tCBB38E054A58066ACF39C1DBF914AF27281AD216_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlInt16Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt16Storage__ctor_m3207646609A9E0EAC6A7C14EA0F803EA56F995C1 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_3 = ((SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var))->___Null_3;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_4);
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_6 = ((SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var))->___Null_3;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)35), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlInt16Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt16Storage_Aggregate_mEC17381A65EBE0ED2F3009BA6453EDA0AF53EB6E (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0096_1;
				}
				case 2:
				{
					goto IL_02b7_1;
				}
				case 3:
				{
					goto IL_032e_1;
				}
				case 4:
				{
					goto IL_039f_1;
				}
				case 5:
				{
					goto IL_03bf_1;
				}
				case 6:
				{
					goto IL_011f_1;
				}
				case 7:
				{
					goto IL_011f_1;
				}
			}
		}
		{
			goto IL_03f1_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_1;
			L_1 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)0), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0071_1;
		}

IL_003f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_006b_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_9 = V_1;
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_14;
			L_14 = SqlInt64_op_Implicit_m829611DB235724ED9CB5F4FCB9BF3CB0350732EF(L_13, NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_15;
			L_15 = SqlInt64_op_Addition_mDC3DB4846CE70DDF6A9F97C0C329DD5ACBFEA432(L_9, L_14, NULL);
			V_1 = L_15;
			V_0 = (bool)1;
		}

IL_006b_1:
		{
			int32_t L_16 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_0071_1:
		{
			int32_t L_17 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_10;
			NullCheck(L_18);
			if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			bool L_19 = V_0;
			if (!L_19)
			{
				goto IL_0089_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_20 = V_1;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_21 = L_20;
			RuntimeObject* L_22 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_21);
			V_13 = L_22;
			goto IL_0411;
		}

IL_0089_1:
		{
			RuntimeObject* L_23 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_23;
			goto IL_0411;
		}

IL_0096_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_24;
			L_24 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)0), NULL);
			V_2 = L_24;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___records0;
			V_10 = L_25;
			V_11 = 0;
			goto IL_00de_1;
		}

IL_00a8_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_10;
			int32_t L_27 = V_11;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			V_14 = L_29;
			int32_t L_30 = V_14;
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_30);
			if (L_31)
			{
				goto IL_00d8_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_32 = V_2;
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_33 = __this->____values_14;
			int32_t L_34 = V_14;
			NullCheck(L_33);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_35;
			L_35 = SqlInt16_ToSqlInt64_m74BDB457355091DC33276A81C458387D7A070EB0(((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_36;
			L_36 = SqlInt64_op_Addition_mDC3DB4846CE70DDF6A9F97C0C329DD5ACBFEA432(L_32, L_35, NULL);
			V_2 = L_36;
			int32_t L_37 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			V_0 = (bool)1;
		}

IL_00d8_1:
		{
			int32_t L_38 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00de_1:
		{
			int32_t L_39 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_10;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
			{
				goto IL_00a8_1;
			}
		}
		{
			bool L_41 = V_0;
			if (!L_41)
			{
				goto IL_0112_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_42;
			L_42 = SqlInt16_op_Implicit_mC124CD6BB567BE635865013CE37EEB0518DD81D6((int16_t)0, NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_43 = V_2;
			int32_t L_44 = V_3;
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_45;
			L_45 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)L_44), NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_46;
			L_46 = SqlInt64_op_Division_m63F50B2080FB8E0DEDF9905D7FEF4EB45A6F8C97(L_43, L_45, NULL);
			V_15 = L_46;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_47;
			L_47 = SqlInt64_ToSqlInt16_m0EFCFBEB8CC9A1EA6EC4DE6C0A6533F381900E5D((&V_15), NULL);
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_48 = L_47;
			RuntimeObject* L_49 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_48);
			V_13 = L_49;
			goto IL_0411;
		}

IL_0112_1:
		{
			RuntimeObject* L_50 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_50;
			goto IL_0411;
		}

IL_011f_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_51;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_53;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_54;
			L_54 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_54;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___records0;
			V_10 = L_55;
			V_11 = 0;
			goto IL_01d3_1;
		}

IL_0169_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_10;
			int32_t L_57 = V_11;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			V_16 = L_59;
			int32_t L_60 = V_16;
			bool L_61;
			L_61 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_60);
			if (L_61)
			{
				goto IL_01cd_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_62 = V_6;
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_63 = __this->____values_14;
			int32_t L_64 = V_16;
			NullCheck(L_63);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65;
			L_65 = SqlInt16_ToSqlDouble_mC31A96E9433C377D73CE0010D9454D7A59B4203E(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66;
			L_66 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_62, L_65, NULL);
			V_6 = L_66;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_67 = V_7;
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_68 = __this->____values_14;
			int32_t L_69 = V_16;
			NullCheck(L_68);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_70;
			L_70 = SqlInt16_ToSqlDouble_mC31A96E9433C377D73CE0010D9454D7A59B4203E(((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), NULL);
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_71 = __this->____values_14;
			int32_t L_72 = V_16;
			NullCheck(L_71);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_73;
			L_73 = SqlInt16_ToSqlDouble_mC31A96E9433C377D73CE0010D9454D7A59B4203E(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_74;
			L_74 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_70, L_73, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_75;
			L_75 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_67, L_74, NULL);
			V_7 = L_75;
			int32_t L_76 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		}

IL_01cd_1:
		{
			int32_t L_77 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		}

IL_01d3_1:
		{
			int32_t L_78 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_10;
			NullCheck(L_79);
			if ((((int32_t)L_78) < ((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length)))))
			{
				goto IL_0169_1;
			}
		}
		{
			int32_t L_80 = V_4;
			if ((((int32_t)L_80) <= ((int32_t)1)))
			{
				goto IL_02aa_1;
			}
		}
		{
			int32_t L_81 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_82;
			L_82 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_81), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_83 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84;
			L_84 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_82, L_83, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87;
			L_87 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_85, L_86, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88;
			L_88 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_84, L_87, NULL);
			V_5 = L_88;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92;
			L_92 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_90, L_91, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93;
			L_93 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_89, L_92, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_94;
			L_94 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_95;
			L_95 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_93, L_94, NULL);
			V_17 = L_95;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_96 = V_17;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_97;
			L_97 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_96, NULL);
			if (L_97)
			{
				goto IL_024e_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_98 = V_17;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_99 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_100;
			L_100 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_101;
			L_101 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_99, L_100, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_102;
			L_102 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_98, L_101, NULL);
			G_B28_0 = L_102;
			goto IL_0250_1;
		}

IL_024e_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_103 = V_17;
			G_B28_0 = L_103;
		}

IL_0250_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_104;
			L_104 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_104)
			{
				goto IL_0269_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_105;
			L_105 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_105;
			goto IL_027f_1;
		}

IL_0269_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_106 = V_5;
			int32_t L_107 = V_4;
			int32_t L_108 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_109;
			L_109 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_107, ((int32_t)il2cpp_codegen_subtract(L_108, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_110;
			L_110 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_106, L_109, NULL);
			V_5 = L_110;
		}

IL_027f_1:
		{
			int32_t L_111 = ___kind1;
			if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_029c_1;
			}
		}
		{
			double L_112;
			L_112 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_113;
			L_113 = sqrt(L_112);
			double L_114 = L_113;
			RuntimeObject* L_115 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_114);
			V_13 = L_115;
			goto IL_0411;
		}

IL_029c_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_116 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_117 = L_116;
			RuntimeObject* L_118 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_117);
			V_13 = L_118;
			goto IL_0411;
		}

IL_02aa_1:
		{
			RuntimeObject* L_119 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_119;
			goto IL_0411;
		}

IL_02b7_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_120 = ((SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var))->___MaxValue_6;
			V_8 = L_120;
			V_18 = 0;
			goto IL_0309_1;
		}

IL_02c3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ___records0;
			int32_t L_122 = V_18;
			NullCheck(L_121);
			int32_t L_123 = L_122;
			int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
			V_19 = L_124;
			int32_t L_125 = V_19;
			bool L_126;
			L_126 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_125);
			if (L_126)
			{
				goto IL_0303_1;
			}
		}
		{
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_127 = __this->____values_14;
			int32_t L_128 = V_19;
			NullCheck(L_127);
			int32_t L_129 = L_128;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_131 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_132;
			L_132 = SqlInt16_LessThan_mC27C83BDD0A667D905229037E6D6018CEE889412(L_130, L_131, NULL);
			V_17 = L_132;
			bool L_133;
			L_133 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_133)
			{
				goto IL_0301_1;
			}
		}
		{
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_134 = __this->____values_14;
			int32_t L_135 = V_19;
			NullCheck(L_134);
			int32_t L_136 = L_135;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			V_8 = L_137;
		}

IL_0301_1:
		{
			V_0 = (bool)1;
		}

IL_0303_1:
		{
			int32_t L_138 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		}

IL_0309_1:
		{
			int32_t L_139 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___records0;
			NullCheck(L_140);
			if ((((int32_t)L_139) < ((int32_t)((int32_t)(((RuntimeArray*)L_140)->max_length)))))
			{
				goto IL_02c3_1;
			}
		}
		{
			bool L_141 = V_0;
			if (!L_141)
			{
				goto IL_0321_1;
			}
		}
		{
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_142 = V_8;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_143 = L_142;
			RuntimeObject* L_144 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_143);
			V_13 = L_144;
			goto IL_0411;
		}

IL_0321_1:
		{
			RuntimeObject* L_145 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_145;
			goto IL_0411;
		}

IL_032e_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_146 = ((SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var))->___MinValue_5;
			V_9 = L_146;
			V_20 = 0;
			goto IL_0380_1;
		}

IL_033a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = ___records0;
			int32_t L_148 = V_20;
			NullCheck(L_147);
			int32_t L_149 = L_148;
			int32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
			V_21 = L_150;
			int32_t L_151 = V_21;
			bool L_152;
			L_152 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_151);
			if (L_152)
			{
				goto IL_037a_1;
			}
		}
		{
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_153 = __this->____values_14;
			int32_t L_154 = V_21;
			NullCheck(L_153);
			int32_t L_155 = L_154;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_157 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_158;
			L_158 = SqlInt16_GreaterThan_mC543F52F2B41D31845E6C5ACD5A3B34318207C63(L_156, L_157, NULL);
			V_17 = L_158;
			bool L_159;
			L_159 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_159)
			{
				goto IL_0378_1;
			}
		}
		{
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_160 = __this->____values_14;
			int32_t L_161 = V_21;
			NullCheck(L_160);
			int32_t L_162 = L_161;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
			V_9 = L_163;
		}

IL_0378_1:
		{
			V_0 = (bool)1;
		}

IL_037a_1:
		{
			int32_t L_164 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		}

IL_0380_1:
		{
			int32_t L_165 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___records0;
			NullCheck(L_166);
			if ((((int32_t)L_165) < ((int32_t)((int32_t)(((RuntimeArray*)L_166)->max_length)))))
			{
				goto IL_033a_1;
			}
		}
		{
			bool L_167 = V_0;
			if (!L_167)
			{
				goto IL_0395_1;
			}
		}
		{
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_168 = V_9;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_169 = L_168;
			RuntimeObject* L_170 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_169);
			V_13 = L_170;
			goto IL_0411;
		}

IL_0395_1:
		{
			RuntimeObject* L_171 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_171;
			goto IL_0411;
		}

IL_039f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ___records0;
			NullCheck(L_172);
			if (!(((RuntimeArray*)L_172)->max_length))
			{
				goto IL_03ba_1;
			}
		}
		{
			SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_173 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = ___records0;
			NullCheck(L_174);
			int32_t L_175 = 0;
			int32_t L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
			NullCheck(L_173);
			int32_t L_177 = L_176;
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_178 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
			SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_179 = L_178;
			RuntimeObject* L_180 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_179);
			V_13 = L_180;
			goto IL_0411;
		}

IL_03ba_1:
		{
			V_13 = NULL;
			goto IL_0411;
		}

IL_03bf_1:
		{
			V_4 = 0;
			V_22 = 0;
			goto IL_03df_1;
		}

IL_03c7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ___records0;
			int32_t L_182 = V_22;
			NullCheck(L_181);
			int32_t L_183 = L_182;
			int32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
			bool L_185;
			L_185 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_184);
			if (L_185)
			{
				goto IL_03d9_1;
			}
		}
		{
			int32_t L_186 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		}

IL_03d9_1:
		{
			int32_t L_187 = V_22;
			V_22 = ((int32_t)il2cpp_codegen_add(L_187, 1));
		}

IL_03df_1:
		{
			int32_t L_188 = V_22;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___records0;
			NullCheck(L_189);
			if ((((int32_t)L_188) < ((int32_t)((int32_t)(((RuntimeArray*)L_189)->max_length)))))
			{
				goto IL_03c7_1;
			}
		}
		{
			int32_t L_190 = V_4;
			int32_t L_191 = L_190;
			RuntimeObject* L_192 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_191);
			V_13 = L_192;
			goto IL_0411;
		}

IL_03f1_1:
		{
			goto IL_0404;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f3;
		}
		throw e;
	}

CATCH_03f3:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_194;
		L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
		Exception_t* L_195;
		L_195 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_194, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_195, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt16Storage_Aggregate_mEC17381A65EBE0ED2F3009BA6453EDA0AF53EB6E_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0404:
	{
		int32_t L_196 = ___kind1;
		Type_t* L_197 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_198;
		L_198 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_196, L_197, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt16Storage_Aggregate_mEC17381A65EBE0ED2F3009BA6453EDA0AF53EB6E_RuntimeMethod_var)));
	}

IL_0411:
	{
		RuntimeObject* L_199 = V_13;
		return L_199;
	}
}
// System.Int32 System.Data.Common.SqlInt16Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt16Storage_Compare_m6DE9D8EE4AE2DF1DE0E66DF97C9D4675ED7A2947 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlInt16_CompareTo_m9FC0B312BAE65C9E4666B183051B3ED6ECD76AA0(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlInt16Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt16Storage_CompareValueTo_m4E2B684C7689B3C0095CEA6FCD3BCAE57E4B63DD (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlInt16_CompareTo_m9FC0B312BAE65C9E4666B183051B3ED6ECD76AA0(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B*)((SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B*)(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B*)UnBox(L_2, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlInt16Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt16Storage_ConvertValue_m9AD5C4722AFA66D75F01E0493C72B79B5E3E74DE (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_2;
		L_2 = SqlConvert_ConvertToSqlInt16_m0A1C5613B1B77AECF92FFFFA3376A28283E95FA4(L_1, NULL);
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlInt16Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt16Storage_Copy_mD5CB42256994A9953855FD6EF6157658511C8C70 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlInt16Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt16Storage_Get_mC3C9EEA967AD6234DD5A6EF0E8B66601F5ED9AAF (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlInt16Storage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt16Storage_IsNull_m4BD7A7DC686D3424F4D02A1E97255CB2311BB792 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlInt16_get_IsNull_mA77B2B1796F1E93AA45C17FEA3B7D0FAA4068510(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlInt16Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt16Storage_Set_m97079AB346F18DB9B56D7E5CD6B0DD7D6890D153 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_3;
		L_3 = SqlConvert_ConvertToSqlInt16_m0A1C5613B1B77AECF92FFFFA3376A28283E95FA4(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlInt16Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt16Storage_SetCapacity_m54D3F6803DD4B4FD7CE8D538439550B0B32544FD (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_1 = (SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)(SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)SZArrayNew(SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_3 = __this->____values_14;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlInt16Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt16Storage_ConvertXmlToObject_m2AA32A830C0C931711C3205331811834BEE9D8FD (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_3 = V_0;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_12 = ((*(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B*)((SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B*)(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B*)UnBox(L_11, SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlInt16Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlInt16Storage_ConvertObjectToXml_mCD024921FA6D1FCE2248466BF2E80365670BF06C (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlInt16Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt16Storage_GetEmptyStorage_mA133B6180AD6CB01169F0A448C4D64760CBC5B28 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_1 = (SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)(SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)SZArrayNew(SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlInt16Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt16Storage_CopyValue_m743FA42BA5974DBEAAC5E5BB266430A718DC85A1 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)Castclass((RuntimeObject*)L_0, SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var)));
		(((SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)Castclass((RuntimeObject*)L_0, SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt16_t30ED9856D3373398B6005B34D664C64EE224260B)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlInt16Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt16Storage_SetStorage_m11C3D70A09561D1362E9678019F41173DED50348 (SqlInt16Storage_t33D075AC0E657F836F3690503BE595FC190429E6* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)Castclass((RuntimeObject*)L_0, SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8*)Castclass((RuntimeObject*)L_0, SqlInt16U5BU5D_tDD936048A83186BA3F6D44E4FD9D51ABE8E8EFC8_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlInt32Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt32Storage__ctor_m1B0C42ECD8A1C1CFFDB4722512AF9EE184D14677 (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_3 = ((SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var))->___Null_4;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_4);
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_6 = ((SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var))->___Null_4;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)36), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlInt32Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt32Storage_Aggregate_m4798EAACD9C5EE7F30EEB8385B6F65CD83F379A1 (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0096_1;
				}
				case 2:
				{
					goto IL_02b7_1;
				}
				case 3:
				{
					goto IL_032e_1;
				}
				case 4:
				{
					goto IL_039f_1;
				}
				case 5:
				{
					goto IL_03bf_1;
				}
				case 6:
				{
					goto IL_011f_1;
				}
				case 7:
				{
					goto IL_011f_1;
				}
			}
		}
		{
			goto IL_03f1_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_1;
			L_1 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)0), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0071_1;
		}

IL_003f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_006b_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_9 = V_1;
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_14;
			L_14 = SqlInt64_op_Implicit_m06472A9F571AB0DC28BED906A1B3E141CBC4871E(L_13, NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_15;
			L_15 = SqlInt64_op_Addition_mDC3DB4846CE70DDF6A9F97C0C329DD5ACBFEA432(L_9, L_14, NULL);
			V_1 = L_15;
			V_0 = (bool)1;
		}

IL_006b_1:
		{
			int32_t L_16 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_0071_1:
		{
			int32_t L_17 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_10;
			NullCheck(L_18);
			if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			bool L_19 = V_0;
			if (!L_19)
			{
				goto IL_0089_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_20 = V_1;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_21 = L_20;
			RuntimeObject* L_22 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_21);
			V_13 = L_22;
			goto IL_0411;
		}

IL_0089_1:
		{
			RuntimeObject* L_23 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_23;
			goto IL_0411;
		}

IL_0096_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_24;
			L_24 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)0), NULL);
			V_2 = L_24;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___records0;
			V_10 = L_25;
			V_11 = 0;
			goto IL_00de_1;
		}

IL_00a8_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_10;
			int32_t L_27 = V_11;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			V_14 = L_29;
			int32_t L_30 = V_14;
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_30);
			if (L_31)
			{
				goto IL_00d8_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_32 = V_2;
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_33 = __this->____values_14;
			int32_t L_34 = V_14;
			NullCheck(L_33);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_35;
			L_35 = SqlInt32_ToSqlInt64_mA174EA59AE35323E3ECACE355C5C19A1A18E017F(((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_36;
			L_36 = SqlInt64_op_Addition_mDC3DB4846CE70DDF6A9F97C0C329DD5ACBFEA432(L_32, L_35, NULL);
			V_2 = L_36;
			int32_t L_37 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			V_0 = (bool)1;
		}

IL_00d8_1:
		{
			int32_t L_38 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00de_1:
		{
			int32_t L_39 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_10;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
			{
				goto IL_00a8_1;
			}
		}
		{
			bool L_41 = V_0;
			if (!L_41)
			{
				goto IL_0112_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_42;
			L_42 = SqlInt32_op_Implicit_mB9A2B8F81E9BF2EA94A2E3F129A4180049CC93D9(0, NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_43 = V_2;
			int32_t L_44 = V_3;
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_45;
			L_45 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)L_44), NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_46;
			L_46 = SqlInt64_op_Division_m63F50B2080FB8E0DEDF9905D7FEF4EB45A6F8C97(L_43, L_45, NULL);
			V_15 = L_46;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_47;
			L_47 = SqlInt64_ToSqlInt32_m6B96CA26421E6C524936B54B5FDFBFD82552FDD9((&V_15), NULL);
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_48 = L_47;
			RuntimeObject* L_49 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_48);
			V_13 = L_49;
			goto IL_0411;
		}

IL_0112_1:
		{
			RuntimeObject* L_50 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_50;
			goto IL_0411;
		}

IL_011f_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_51;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_53;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_54;
			L_54 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_54;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___records0;
			V_10 = L_55;
			V_11 = 0;
			goto IL_01d3_1;
		}

IL_0169_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_10;
			int32_t L_57 = V_11;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			V_16 = L_59;
			int32_t L_60 = V_16;
			bool L_61;
			L_61 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_60);
			if (L_61)
			{
				goto IL_01cd_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_62 = V_6;
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_63 = __this->____values_14;
			int32_t L_64 = V_16;
			NullCheck(L_63);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65;
			L_65 = SqlInt32_ToSqlDouble_m246A68A9C528CDBEFC6F9779004354AEAD358A41(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66;
			L_66 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_62, L_65, NULL);
			V_6 = L_66;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_67 = V_7;
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_68 = __this->____values_14;
			int32_t L_69 = V_16;
			NullCheck(L_68);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_70;
			L_70 = SqlInt32_ToSqlDouble_m246A68A9C528CDBEFC6F9779004354AEAD358A41(((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), NULL);
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_71 = __this->____values_14;
			int32_t L_72 = V_16;
			NullCheck(L_71);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_73;
			L_73 = SqlInt32_ToSqlDouble_m246A68A9C528CDBEFC6F9779004354AEAD358A41(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_74;
			L_74 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_70, L_73, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_75;
			L_75 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_67, L_74, NULL);
			V_7 = L_75;
			int32_t L_76 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		}

IL_01cd_1:
		{
			int32_t L_77 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		}

IL_01d3_1:
		{
			int32_t L_78 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_10;
			NullCheck(L_79);
			if ((((int32_t)L_78) < ((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length)))))
			{
				goto IL_0169_1;
			}
		}
		{
			int32_t L_80 = V_4;
			if ((((int32_t)L_80) <= ((int32_t)1)))
			{
				goto IL_02aa_1;
			}
		}
		{
			int32_t L_81 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_82;
			L_82 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_81), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_83 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84;
			L_84 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_82, L_83, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87;
			L_87 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_85, L_86, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88;
			L_88 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_84, L_87, NULL);
			V_5 = L_88;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92;
			L_92 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_90, L_91, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93;
			L_93 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_89, L_92, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_94;
			L_94 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_95;
			L_95 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_93, L_94, NULL);
			V_17 = L_95;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_96 = V_17;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_97;
			L_97 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_96, NULL);
			if (L_97)
			{
				goto IL_024e_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_98 = V_17;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_99 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_100;
			L_100 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_101;
			L_101 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_99, L_100, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_102;
			L_102 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_98, L_101, NULL);
			G_B28_0 = L_102;
			goto IL_0250_1;
		}

IL_024e_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_103 = V_17;
			G_B28_0 = L_103;
		}

IL_0250_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_104;
			L_104 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_104)
			{
				goto IL_0269_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_105;
			L_105 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_105;
			goto IL_027f_1;
		}

IL_0269_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_106 = V_5;
			int32_t L_107 = V_4;
			int32_t L_108 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_109;
			L_109 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_107, ((int32_t)il2cpp_codegen_subtract(L_108, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_110;
			L_110 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_106, L_109, NULL);
			V_5 = L_110;
		}

IL_027f_1:
		{
			int32_t L_111 = ___kind1;
			if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_029c_1;
			}
		}
		{
			double L_112;
			L_112 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_113;
			L_113 = sqrt(L_112);
			double L_114 = L_113;
			RuntimeObject* L_115 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_114);
			V_13 = L_115;
			goto IL_0411;
		}

IL_029c_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_116 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_117 = L_116;
			RuntimeObject* L_118 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_117);
			V_13 = L_118;
			goto IL_0411;
		}

IL_02aa_1:
		{
			RuntimeObject* L_119 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_119;
			goto IL_0411;
		}

IL_02b7_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_120 = ((SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var))->___MaxValue_7;
			V_8 = L_120;
			V_18 = 0;
			goto IL_0309_1;
		}

IL_02c3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ___records0;
			int32_t L_122 = V_18;
			NullCheck(L_121);
			int32_t L_123 = L_122;
			int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
			V_19 = L_124;
			int32_t L_125 = V_19;
			bool L_126;
			L_126 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_125);
			if (L_126)
			{
				goto IL_0303_1;
			}
		}
		{
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_127 = __this->____values_14;
			int32_t L_128 = V_19;
			NullCheck(L_127);
			int32_t L_129 = L_128;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_131 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_132;
			L_132 = SqlInt32_LessThan_m5BF49769081B15C9E18188C5933DAF34FF9AFC5B(L_130, L_131, NULL);
			V_17 = L_132;
			bool L_133;
			L_133 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_133)
			{
				goto IL_0301_1;
			}
		}
		{
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_134 = __this->____values_14;
			int32_t L_135 = V_19;
			NullCheck(L_134);
			int32_t L_136 = L_135;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			V_8 = L_137;
		}

IL_0301_1:
		{
			V_0 = (bool)1;
		}

IL_0303_1:
		{
			int32_t L_138 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		}

IL_0309_1:
		{
			int32_t L_139 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___records0;
			NullCheck(L_140);
			if ((((int32_t)L_139) < ((int32_t)((int32_t)(((RuntimeArray*)L_140)->max_length)))))
			{
				goto IL_02c3_1;
			}
		}
		{
			bool L_141 = V_0;
			if (!L_141)
			{
				goto IL_0321_1;
			}
		}
		{
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_142 = V_8;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_143 = L_142;
			RuntimeObject* L_144 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_143);
			V_13 = L_144;
			goto IL_0411;
		}

IL_0321_1:
		{
			RuntimeObject* L_145 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_145;
			goto IL_0411;
		}

IL_032e_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_146 = ((SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var))->___MinValue_6;
			V_9 = L_146;
			V_20 = 0;
			goto IL_0380_1;
		}

IL_033a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = ___records0;
			int32_t L_148 = V_20;
			NullCheck(L_147);
			int32_t L_149 = L_148;
			int32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
			V_21 = L_150;
			int32_t L_151 = V_21;
			bool L_152;
			L_152 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_151);
			if (L_152)
			{
				goto IL_037a_1;
			}
		}
		{
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_153 = __this->____values_14;
			int32_t L_154 = V_21;
			NullCheck(L_153);
			int32_t L_155 = L_154;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_157 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_158;
			L_158 = SqlInt32_GreaterThan_mD88284474F14887BC4C7B654F105395D01A16FD5(L_156, L_157, NULL);
			V_17 = L_158;
			bool L_159;
			L_159 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_159)
			{
				goto IL_0378_1;
			}
		}
		{
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_160 = __this->____values_14;
			int32_t L_161 = V_21;
			NullCheck(L_160);
			int32_t L_162 = L_161;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
			V_9 = L_163;
		}

IL_0378_1:
		{
			V_0 = (bool)1;
		}

IL_037a_1:
		{
			int32_t L_164 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		}

IL_0380_1:
		{
			int32_t L_165 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___records0;
			NullCheck(L_166);
			if ((((int32_t)L_165) < ((int32_t)((int32_t)(((RuntimeArray*)L_166)->max_length)))))
			{
				goto IL_033a_1;
			}
		}
		{
			bool L_167 = V_0;
			if (!L_167)
			{
				goto IL_0395_1;
			}
		}
		{
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_168 = V_9;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_169 = L_168;
			RuntimeObject* L_170 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_169);
			V_13 = L_170;
			goto IL_0411;
		}

IL_0395_1:
		{
			RuntimeObject* L_171 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_171;
			goto IL_0411;
		}

IL_039f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ___records0;
			NullCheck(L_172);
			if (!(((RuntimeArray*)L_172)->max_length))
			{
				goto IL_03ba_1;
			}
		}
		{
			SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_173 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = ___records0;
			NullCheck(L_174);
			int32_t L_175 = 0;
			int32_t L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
			NullCheck(L_173);
			int32_t L_177 = L_176;
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_178 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
			SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_179 = L_178;
			RuntimeObject* L_180 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_179);
			V_13 = L_180;
			goto IL_0411;
		}

IL_03ba_1:
		{
			V_13 = NULL;
			goto IL_0411;
		}

IL_03bf_1:
		{
			V_4 = 0;
			V_22 = 0;
			goto IL_03df_1;
		}

IL_03c7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ___records0;
			int32_t L_182 = V_22;
			NullCheck(L_181);
			int32_t L_183 = L_182;
			int32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
			bool L_185;
			L_185 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_184);
			if (L_185)
			{
				goto IL_03d9_1;
			}
		}
		{
			int32_t L_186 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		}

IL_03d9_1:
		{
			int32_t L_187 = V_22;
			V_22 = ((int32_t)il2cpp_codegen_add(L_187, 1));
		}

IL_03df_1:
		{
			int32_t L_188 = V_22;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___records0;
			NullCheck(L_189);
			if ((((int32_t)L_188) < ((int32_t)((int32_t)(((RuntimeArray*)L_189)->max_length)))))
			{
				goto IL_03c7_1;
			}
		}
		{
			int32_t L_190 = V_4;
			int32_t L_191 = L_190;
			RuntimeObject* L_192 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_191);
			V_13 = L_192;
			goto IL_0411;
		}

IL_03f1_1:
		{
			goto IL_0404;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f3;
		}
		throw e;
	}

CATCH_03f3:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_194;
		L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
		Exception_t* L_195;
		L_195 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_194, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_195, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt32Storage_Aggregate_m4798EAACD9C5EE7F30EEB8385B6F65CD83F379A1_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0404:
	{
		int32_t L_196 = ___kind1;
		Type_t* L_197 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_198;
		L_198 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_196, L_197, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt32Storage_Aggregate_m4798EAACD9C5EE7F30EEB8385B6F65CD83F379A1_RuntimeMethod_var)));
	}

IL_0411:
	{
		RuntimeObject* L_199 = V_13;
		return L_199;
	}
}
// System.Int32 System.Data.Common.SqlInt32Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt32Storage_Compare_m25DDD5F139DEBCE197ACF83EB7AFEE06F4295B41 (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlInt32_CompareTo_m6EBE0A1AACF4E5C44E76D91D6FD6A5FC655C164B(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlInt32Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt32Storage_CompareValueTo_m536A0AFD779D9D77E6CD223B63F2F0F150316D8B (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlInt32_CompareTo_m6EBE0A1AACF4E5C44E76D91D6FD6A5FC655C164B(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152*)((SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152*)(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152*)UnBox(L_2, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlInt32Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt32Storage_ConvertValue_mA6D2A11C0DF902118A29C74768AD50526A271B40 (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_2;
		L_2 = SqlConvert_ConvertToSqlInt32_m268A709D3A77BAB342838CCF39F48ED93A441AC1(L_1, NULL);
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlInt32Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt32Storage_Copy_m7ECFFA0070DFDE63A0743BBF0BCFE8880FCD06EB (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlInt32Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt32Storage_Get_mC5B5E9957341BF14C34D7726EF44EA7DEF5D3BFF (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlInt32Storage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt32Storage_IsNull_mB16C1F560431366ED17471AB501DCA80273A9974 (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlInt32_get_IsNull_mF515FDD364AD9AAB986AF4A47B8BE871EBE510D5(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlInt32Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt32Storage_Set_mE7F257088DD65F755BE4158BBF88413CF8A77B0B (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_3;
		L_3 = SqlConvert_ConvertToSqlInt32_m268A709D3A77BAB342838CCF39F48ED93A441AC1(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlInt32Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt32Storage_SetCapacity_m6717A2233B513B6610EBE3172FD266834E8B54B3 (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_1 = (SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)(SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)SZArrayNew(SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_3 = __this->____values_14;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlInt32Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt32Storage_ConvertXmlToObject_m6AD51FD2B8AA416A0ADAA78C244BBF09B3D286DA (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_3 = V_0;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_12 = ((*(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152*)((SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152*)(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152*)UnBox(L_11, SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlInt32Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlInt32Storage_ConvertObjectToXml_mF7CAE3512C59AD9657E65E52A22773F1622E761F (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlInt32Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt32Storage_GetEmptyStorage_m9FDA8D42C918B9DB7298DAC354889B5FE244EC8A (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_1 = (SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)(SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)SZArrayNew(SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlInt32Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt32Storage_CopyValue_m37A3B6A9B0B1ACF138AF53D10D750FE961C969AF (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)Castclass((RuntimeObject*)L_0, SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var)));
		(((SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)Castclass((RuntimeObject*)L_0, SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt32_t50DA35BC9FD9C46AA933DCF8195B2EE92064D152)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlInt32Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt32Storage_SetStorage_mC6D59F5051DF97F629AE46EFDB69C0016449DC4C (SqlInt32Storage_tC0E8F4C5A4F407E22E86EFC30FC5AE7E59ED8883* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)Castclass((RuntimeObject*)L_0, SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25*)Castclass((RuntimeObject*)L_0, SqlInt32U5BU5D_t1E00F20A1ECD2BAD191D079A1C18DCABAD9F9D25_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlInt64Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt64Storage__ctor_m8C7A1A0C3F2B54F985F2D7B4A0B25445CA2E7C81 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_3 = ((SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var))->___Null_4;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_4);
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_6 = ((SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var))->___Null_4;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)37), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlInt64Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt64Storage_Aggregate_m85F5F3EEC1B4CB2577839DBF6B6F26E71E5DC1B7 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0091_1;
				}
				case 2:
				{
					goto IL_02b3_1;
				}
				case 3:
				{
					goto IL_032a_1;
				}
				case 4:
				{
					goto IL_039b_1;
				}
				case 5:
				{
					goto IL_03bb_1;
				}
				case 6:
				{
					goto IL_011b_1;
				}
				case 7:
				{
					goto IL_011b_1;
				}
			}
		}
		{
			goto IL_03ed_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_1;
			L_1 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)0), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_006c_1;
		}

IL_003f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_0066_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_9 = V_1;
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_14;
			L_14 = SqlInt64_op_Addition_mDC3DB4846CE70DDF6A9F97C0C329DD5ACBFEA432(L_9, L_13, NULL);
			V_1 = L_14;
			V_0 = (bool)1;
		}

IL_0066_1:
		{
			int32_t L_15 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_006c_1:
		{
			int32_t L_16 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_10;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			bool L_18 = V_0;
			if (!L_18)
			{
				goto IL_0084_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_19 = V_1;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_20 = L_19;
			RuntimeObject* L_21 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_20);
			V_13 = L_21;
			goto IL_040d;
		}

IL_0084_1:
		{
			RuntimeObject* L_22 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_22;
			goto IL_040d;
		}

IL_0091_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_23;
			L_23 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)0), NULL);
			V_2 = L_23;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___records0;
			V_10 = L_24;
			V_11 = 0;
			goto IL_00d9_1;
		}

IL_00a3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_10;
			int32_t L_26 = V_11;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			V_14 = L_28;
			int32_t L_29 = V_14;
			bool L_30;
			L_30 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_29);
			if (L_30)
			{
				goto IL_00d3_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_31 = V_2;
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_32 = __this->____values_14;
			int32_t L_33 = V_14;
			NullCheck(L_32);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_34;
			L_34 = SqlInt64_ToSqlDecimal_m810FD514624595B632F63DE26D21B24CB9223698(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_35;
			L_35 = SqlDecimal_op_Addition_mD621901A8B8506AD33C1A11593E8C26BB4291D0F(L_31, L_34, NULL);
			V_2 = L_35;
			int32_t L_36 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
			V_0 = (bool)1;
		}

IL_00d3_1:
		{
			int32_t L_37 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00d9_1:
		{
			int32_t L_38 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_10;
			NullCheck(L_39);
			if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
			{
				goto IL_00a3_1;
			}
		}
		{
			bool L_40 = V_0;
			if (!L_40)
			{
				goto IL_010e_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_41;
			L_41 = SqlInt64_op_Implicit_m987658055FF4968952677E2CBA70A30BC98E3CDF(((int64_t)0), NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_42 = V_2;
			int32_t L_43 = V_3;
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_44;
			L_44 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)L_43), NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_45;
			L_45 = SqlDecimal_op_Division_mB5C1F3E2126BB74E4C73E734227C783A896ACBAD(L_42, L_44, NULL);
			V_15 = L_45;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_46;
			L_46 = SqlDecimal_ToSqlInt64_mAA52E180BF7596EE561603B329EC4C25F9C09CAD((&V_15), NULL);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_47 = L_46;
			RuntimeObject* L_48 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_47);
			V_13 = L_48;
			goto IL_040d;
		}

IL_010e_1:
		{
			RuntimeObject* L_49 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_49;
			goto IL_040d;
		}

IL_011b_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_50;
			L_50 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_50;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_52;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_53;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___records0;
			V_10 = L_54;
			V_11 = 0;
			goto IL_01cf_1;
		}

IL_0165_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_10;
			int32_t L_56 = V_11;
			NullCheck(L_55);
			int32_t L_57 = L_56;
			int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			V_16 = L_58;
			int32_t L_59 = V_16;
			bool L_60;
			L_60 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_59);
			if (L_60)
			{
				goto IL_01c9_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_61 = V_6;
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_62 = __this->____values_14;
			int32_t L_63 = V_16;
			NullCheck(L_62);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_64;
			L_64 = SqlInt64_ToSqlDouble_m6E4C68654EA44324AFBD8719EFF612EBC1535C99(((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65;
			L_65 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_61, L_64, NULL);
			V_6 = L_65;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66 = V_7;
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_67 = __this->____values_14;
			int32_t L_68 = V_16;
			NullCheck(L_67);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_69;
			L_69 = SqlInt64_ToSqlDouble_m6E4C68654EA44324AFBD8719EFF612EBC1535C99(((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), NULL);
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_70 = __this->____values_14;
			int32_t L_71 = V_16;
			NullCheck(L_70);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_72;
			L_72 = SqlInt64_ToSqlDouble_m6E4C68654EA44324AFBD8719EFF612EBC1535C99(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_73;
			L_73 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_69, L_72, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_74;
			L_74 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_66, L_73, NULL);
			V_7 = L_74;
			int32_t L_75 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		}

IL_01c9_1:
		{
			int32_t L_76 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		}

IL_01cf_1:
		{
			int32_t L_77 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_10;
			NullCheck(L_78);
			if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
			{
				goto IL_0165_1;
			}
		}
		{
			int32_t L_79 = V_4;
			if ((((int32_t)L_79) <= ((int32_t)1)))
			{
				goto IL_02a6_1;
			}
		}
		{
			int32_t L_80 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_81;
			L_81 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_80), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_82 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_83;
			L_83 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_81, L_82, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86;
			L_86 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_84, L_85, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87;
			L_87 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_83, L_86, NULL);
			V_5 = L_87;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91;
			L_91 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_89, L_90, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92;
			L_92 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_88, L_91, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93;
			L_93 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_94;
			L_94 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_92, L_93, NULL);
			V_17 = L_94;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_95 = V_17;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_96;
			L_96 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_95, NULL);
			if (L_96)
			{
				goto IL_024a_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_97 = V_17;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_98 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_99;
			L_99 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_100;
			L_100 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_98, L_99, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_101;
			L_101 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_97, L_100, NULL);
			G_B28_0 = L_101;
			goto IL_024c_1;
		}

IL_024a_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_102 = V_17;
			G_B28_0 = L_102;
		}

IL_024c_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_103;
			L_103 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_103)
			{
				goto IL_0265_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_104;
			L_104 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_104;
			goto IL_027b_1;
		}

IL_0265_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_105 = V_5;
			int32_t L_106 = V_4;
			int32_t L_107 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_108;
			L_108 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_106, ((int32_t)il2cpp_codegen_subtract(L_107, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_109;
			L_109 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_105, L_108, NULL);
			V_5 = L_109;
		}

IL_027b_1:
		{
			int32_t L_110 = ___kind1;
			if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_0298_1;
			}
		}
		{
			double L_111;
			L_111 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_112;
			L_112 = sqrt(L_111);
			double L_113 = L_112;
			RuntimeObject* L_114 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_113);
			V_13 = L_114;
			goto IL_040d;
		}

IL_0298_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_115 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_116 = L_115;
			RuntimeObject* L_117 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_116);
			V_13 = L_117;
			goto IL_040d;
		}

IL_02a6_1:
		{
			RuntimeObject* L_118 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_118;
			goto IL_040d;
		}

IL_02b3_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_119 = ((SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var))->___MaxValue_7;
			V_8 = L_119;
			V_18 = 0;
			goto IL_0305_1;
		}

IL_02bf_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ___records0;
			int32_t L_121 = V_18;
			NullCheck(L_120);
			int32_t L_122 = L_121;
			int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
			V_19 = L_123;
			int32_t L_124 = V_19;
			bool L_125;
			L_125 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_124);
			if (L_125)
			{
				goto IL_02ff_1;
			}
		}
		{
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_126 = __this->____values_14;
			int32_t L_127 = V_19;
			NullCheck(L_126);
			int32_t L_128 = L_127;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_130 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_131;
			L_131 = SqlInt64_LessThan_mC7C12287438FB1EADD3E3EE11D7AE2F2C2DBFEBE(L_129, L_130, NULL);
			V_17 = L_131;
			bool L_132;
			L_132 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_132)
			{
				goto IL_02fd_1;
			}
		}
		{
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_133 = __this->____values_14;
			int32_t L_134 = V_19;
			NullCheck(L_133);
			int32_t L_135 = L_134;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
			V_8 = L_136;
		}

IL_02fd_1:
		{
			V_0 = (bool)1;
		}

IL_02ff_1:
		{
			int32_t L_137 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		}

IL_0305_1:
		{
			int32_t L_138 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = ___records0;
			NullCheck(L_139);
			if ((((int32_t)L_138) < ((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length)))))
			{
				goto IL_02bf_1;
			}
		}
		{
			bool L_140 = V_0;
			if (!L_140)
			{
				goto IL_031d_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_141 = V_8;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_142 = L_141;
			RuntimeObject* L_143 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_142);
			V_13 = L_143;
			goto IL_040d;
		}

IL_031d_1:
		{
			RuntimeObject* L_144 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_144;
			goto IL_040d;
		}

IL_032a_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_145 = ((SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_StaticFields*)il2cpp_codegen_static_fields_for(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var))->___MinValue_6;
			V_9 = L_145;
			V_20 = 0;
			goto IL_037c_1;
		}

IL_0336_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = ___records0;
			int32_t L_147 = V_20;
			NullCheck(L_146);
			int32_t L_148 = L_147;
			int32_t L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
			V_21 = L_149;
			int32_t L_150 = V_21;
			bool L_151;
			L_151 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_150);
			if (L_151)
			{
				goto IL_0376_1;
			}
		}
		{
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_152 = __this->____values_14;
			int32_t L_153 = V_21;
			NullCheck(L_152);
			int32_t L_154 = L_153;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_156 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_157;
			L_157 = SqlInt64_GreaterThan_mCB892619DA8BC41432931653EC6E432C45E02ECB(L_155, L_156, NULL);
			V_17 = L_157;
			bool L_158;
			L_158 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_158)
			{
				goto IL_0374_1;
			}
		}
		{
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_159 = __this->____values_14;
			int32_t L_160 = V_21;
			NullCheck(L_159);
			int32_t L_161 = L_160;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
			V_9 = L_162;
		}

IL_0374_1:
		{
			V_0 = (bool)1;
		}

IL_0376_1:
		{
			int32_t L_163 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		}

IL_037c_1:
		{
			int32_t L_164 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = ___records0;
			NullCheck(L_165);
			if ((((int32_t)L_164) < ((int32_t)((int32_t)(((RuntimeArray*)L_165)->max_length)))))
			{
				goto IL_0336_1;
			}
		}
		{
			bool L_166 = V_0;
			if (!L_166)
			{
				goto IL_0391_1;
			}
		}
		{
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_167 = V_9;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_168 = L_167;
			RuntimeObject* L_169 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_168);
			V_13 = L_169;
			goto IL_040d;
		}

IL_0391_1:
		{
			RuntimeObject* L_170 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_170;
			goto IL_040d;
		}

IL_039b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = ___records0;
			NullCheck(L_171);
			if (!(((RuntimeArray*)L_171)->max_length))
			{
				goto IL_03b6_1;
			}
		}
		{
			SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_172 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___records0;
			NullCheck(L_173);
			int32_t L_174 = 0;
			int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
			NullCheck(L_172);
			int32_t L_176 = L_175;
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_177 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
			SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_178 = L_177;
			RuntimeObject* L_179 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_178);
			V_13 = L_179;
			goto IL_040d;
		}

IL_03b6_1:
		{
			V_13 = NULL;
			goto IL_040d;
		}

IL_03bb_1:
		{
			V_4 = 0;
			V_22 = 0;
			goto IL_03db_1;
		}

IL_03c3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___records0;
			int32_t L_181 = V_22;
			NullCheck(L_180);
			int32_t L_182 = L_181;
			int32_t L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
			bool L_184;
			L_184 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_183);
			if (L_184)
			{
				goto IL_03d5_1;
			}
		}
		{
			int32_t L_185 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_185, 1));
		}

IL_03d5_1:
		{
			int32_t L_186 = V_22;
			V_22 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		}

IL_03db_1:
		{
			int32_t L_187 = V_22;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ___records0;
			NullCheck(L_188);
			if ((((int32_t)L_187) < ((int32_t)((int32_t)(((RuntimeArray*)L_188)->max_length)))))
			{
				goto IL_03c3_1;
			}
		}
		{
			int32_t L_189 = V_4;
			int32_t L_190 = L_189;
			RuntimeObject* L_191 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_190);
			V_13 = L_191;
			goto IL_040d;
		}

IL_03ed_1:
		{
			goto IL_0400;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03ef;
		}
		throw e;
	}

CATCH_03ef:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		Exception_t* L_194;
		L_194 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_193, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_194, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt64Storage_Aggregate_m85F5F3EEC1B4CB2577839DBF6B6F26E71E5DC1B7_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0400:
	{
		int32_t L_195 = ___kind1;
		Type_t* L_196 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_197;
		L_197 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_195, L_196, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlInt64Storage_Aggregate_m85F5F3EEC1B4CB2577839DBF6B6F26E71E5DC1B7_RuntimeMethod_var)));
	}

IL_040d:
	{
		RuntimeObject* L_198 = V_13;
		return L_198;
	}
}
// System.Int32 System.Data.Common.SqlInt64Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt64Storage_Compare_m6386672539895623C4C61C212651E2A913EEAF00 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlInt64_CompareTo_m73C81296C591620BBCDD8A084418A0539EF68FEC(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlInt64Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlInt64Storage_CompareValueTo_m03AEC78E1F1BAB5E5C354BCE49D330921ABEB418 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlInt64_CompareTo_m73C81296C591620BBCDD8A084418A0539EF68FEC(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272*)((SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272*)(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272*)UnBox(L_2, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlInt64Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt64Storage_ConvertValue_mFDAEE72BAD7BF4814F2BBAC0B9485D6AE608F5A0 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_2;
		L_2 = SqlConvert_ConvertToSqlInt64_m2AAE8E9DADF240B917DF7649CEF66B3458683F14(L_1, NULL);
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlInt64Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt64Storage_Copy_m61C6F6EC52B065184270FA0F1D86AF1B456BD85D (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlInt64Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt64Storage_Get_m81250E676E8E0A15EC1E23F87F9FF9BB7C0026DE (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlInt64Storage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlInt64Storage_IsNull_mAC94C375343EC5DF586952840464CFFEBE740157 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlInt64_get_IsNull_mAD56CDAEC4A2D766157BE58C51FFEC687E1E33E8(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlInt64Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt64Storage_Set_m097D27CB9AE10EC0156A509257F55412BC6CC01C (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_3;
		L_3 = SqlConvert_ConvertToSqlInt64_m2AAE8E9DADF240B917DF7649CEF66B3458683F14(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlInt64Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt64Storage_SetCapacity_mE9DBCC22CABDE499C32BA0F02DC7F8EAA9522A8B (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_1 = (SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)(SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)SZArrayNew(SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_3 = __this->____values_14;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlInt64Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt64Storage_ConvertXmlToObject_mA7AAFA1A19DEBE988021DEAF970AF782C9E3CE7B (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_3 = V_0;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_12 = ((*(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272*)((SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272*)(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272*)UnBox(L_11, SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlInt64Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlInt64Storage_ConvertObjectToXml_m005E7D53AD3A78CC221394F6D408A9ED123BFA62 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlInt64Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlInt64Storage_GetEmptyStorage_m9F28E57B0EB92242D9F3FA928C74D18BA19F5F7C (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_1 = (SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)(SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)SZArrayNew(SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlInt64Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt64Storage_CopyValue_m644E3E599959447D5EBD700752AAA55B75282238 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)Castclass((RuntimeObject*)L_0, SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var)));
		(((SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)Castclass((RuntimeObject*)L_0, SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlInt64_t6F2A4BE192CBAA1059DDAB0D02FEDF4EDEAD6272)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlInt64Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlInt64Storage_SetStorage_mC012B25018FD7CF33565F9D959295370DC01FF79 (SqlInt64Storage_t8723D45757F6629D826FF4C353550DF53A9875CB* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)Castclass((RuntimeObject*)L_0, SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4*)Castclass((RuntimeObject*)L_0, SqlInt64U5BU5D_t34A517F2911137271C1654BDBB4D01D9AD3123E4_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlMoneyStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlMoneyStorage__ctor_m84004060CB51CC01E5871F2F30170D2C6DF15161 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_3 = ((SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields*)il2cpp_codegen_static_fields_for(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var))->___Null_7;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_4);
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_6 = ((SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields*)il2cpp_codegen_static_fields_for(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var))->___Null_7;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)38), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlMoneyStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlMoneyStorage_Aggregate_mF4899961886FE4256076DD35EED139C683D84913 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0096_1;
				}
				case 2:
				{
					goto IL_02b8_1;
				}
				case 3:
				{
					goto IL_032f_1;
				}
				case 4:
				{
					goto IL_03a0_1;
				}
				case 5:
				{
					goto IL_03c0_1;
				}
				case 6:
				{
					goto IL_0120_1;
				}
				case 7:
				{
					goto IL_0120_1;
				}
			}
		}
		{
			goto IL_03f2_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_1;
			L_1 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)0), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0071_1;
		}

IL_003f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_006b_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_9 = V_1;
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_14;
			L_14 = SqlDecimal_op_Implicit_m9BA26363AE2C6BD41642B5C4B526EFBC28B08BD7(L_13, NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_15;
			L_15 = SqlDecimal_op_Addition_mD621901A8B8506AD33C1A11593E8C26BB4291D0F(L_9, L_14, NULL);
			V_1 = L_15;
			V_0 = (bool)1;
		}

IL_006b_1:
		{
			int32_t L_16 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		}

IL_0071_1:
		{
			int32_t L_17 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_10;
			NullCheck(L_18);
			if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_003f_1;
			}
		}
		{
			bool L_19 = V_0;
			if (!L_19)
			{
				goto IL_0089_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_20 = V_1;
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_21 = L_20;
			RuntimeObject* L_22 = Box(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var, &L_21);
			V_13 = L_22;
			goto IL_0412;
		}

IL_0089_1:
		{
			RuntimeObject* L_23 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_23;
			goto IL_0412;
		}

IL_0096_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_24;
			L_24 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)0), NULL);
			V_2 = L_24;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___records0;
			V_10 = L_25;
			V_11 = 0;
			goto IL_00de_1;
		}

IL_00a8_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_10;
			int32_t L_27 = V_11;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			V_14 = L_29;
			int32_t L_30 = V_14;
			bool L_31;
			L_31 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_30);
			if (L_31)
			{
				goto IL_00d8_1;
			}
		}
		{
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_32 = V_2;
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_33 = __this->____values_14;
			int32_t L_34 = V_14;
			NullCheck(L_33);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_35;
			L_35 = SqlMoney_ToSqlDecimal_m0AB1E68BFE5753DD028C3BB0BF212E0971190412(((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_36;
			L_36 = SqlDecimal_op_Addition_mD621901A8B8506AD33C1A11593E8C26BB4291D0F(L_32, L_35, NULL);
			V_2 = L_36;
			int32_t L_37 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			V_0 = (bool)1;
		}

IL_00d8_1:
		{
			int32_t L_38 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00de_1:
		{
			int32_t L_39 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_10;
			NullCheck(L_40);
			if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
			{
				goto IL_00a8_1;
			}
		}
		{
			bool L_41 = V_0;
			if (!L_41)
			{
				goto IL_0113_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_42;
			L_42 = SqlMoney_op_Implicit_m88FEDBC3FD9487B81D1E34FB6CFAA2C5E6E004B9(((int64_t)0), NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_43 = V_2;
			int32_t L_44 = V_3;
			il2cpp_codegen_runtime_class_init_inline(SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406_il2cpp_TypeInfo_var);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_45;
			L_45 = SqlDecimal_op_Implicit_m6A5A2468D06AC0620AE94D742CB9B4D88BA93E59(((int64_t)L_44), NULL);
			SqlDecimal_t7A833A6D857AB79C4B2E4011CB728AEC6954D406 L_46;
			L_46 = SqlDecimal_op_Division_mB5C1F3E2126BB74E4C73E734227C783A896ACBAD(L_43, L_45, NULL);
			V_15 = L_46;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_47;
			L_47 = SqlDecimal_ToSqlMoney_m858D02BB1D71B008B029A9A9C3B46FB9DAFFB4A4((&V_15), NULL);
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_48 = L_47;
			RuntimeObject* L_49 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_48);
			V_13 = L_49;
			goto IL_0412;
		}

IL_0113_1:
		{
			RuntimeObject* L_50 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_50;
			goto IL_0412;
		}

IL_0120_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_51;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_53;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_54;
			L_54 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_54;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___records0;
			V_10 = L_55;
			V_11 = 0;
			goto IL_01d4_1;
		}

IL_016a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_10;
			int32_t L_57 = V_11;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			V_16 = L_59;
			int32_t L_60 = V_16;
			bool L_61;
			L_61 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_60);
			if (L_61)
			{
				goto IL_01ce_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_62 = V_6;
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_63 = __this->____values_14;
			int32_t L_64 = V_16;
			NullCheck(L_63);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65;
			L_65 = SqlMoney_ToSqlDouble_m95978A3228452C7084B46939B075A57FCA414B29(((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66;
			L_66 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_62, L_65, NULL);
			V_6 = L_66;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_67 = V_7;
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_68 = __this->____values_14;
			int32_t L_69 = V_16;
			NullCheck(L_68);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_70;
			L_70 = SqlMoney_ToSqlDouble_m95978A3228452C7084B46939B075A57FCA414B29(((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69))), NULL);
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_71 = __this->____values_14;
			int32_t L_72 = V_16;
			NullCheck(L_71);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_73;
			L_73 = SqlMoney_ToSqlDouble_m95978A3228452C7084B46939B075A57FCA414B29(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_74;
			L_74 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_70, L_73, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_75;
			L_75 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_67, L_74, NULL);
			V_7 = L_75;
			int32_t L_76 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		}

IL_01ce_1:
		{
			int32_t L_77 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_77, 1));
		}

IL_01d4_1:
		{
			int32_t L_78 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_10;
			NullCheck(L_79);
			if ((((int32_t)L_78) < ((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length)))))
			{
				goto IL_016a_1;
			}
		}
		{
			int32_t L_80 = V_4;
			if ((((int32_t)L_80) <= ((int32_t)1)))
			{
				goto IL_02ab_1;
			}
		}
		{
			int32_t L_81 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_82;
			L_82 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_81), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_83 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84;
			L_84 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_82, L_83, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87;
			L_87 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_85, L_86, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88;
			L_88 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_84, L_87, NULL);
			V_5 = L_88;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92;
			L_92 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_90, L_91, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93;
			L_93 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_89, L_92, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_94;
			L_94 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_95;
			L_95 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_93, L_94, NULL);
			V_17 = L_95;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_96 = V_17;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_97;
			L_97 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_96, NULL);
			if (L_97)
			{
				goto IL_024f_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_98 = V_17;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_99 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_100;
			L_100 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_101;
			L_101 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_99, L_100, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_102;
			L_102 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_98, L_101, NULL);
			G_B28_0 = L_102;
			goto IL_0251_1;
		}

IL_024f_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_103 = V_17;
			G_B28_0 = L_103;
		}

IL_0251_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_104;
			L_104 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_104)
			{
				goto IL_026a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_105;
			L_105 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_105;
			goto IL_0280_1;
		}

IL_026a_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_106 = V_5;
			int32_t L_107 = V_4;
			int32_t L_108 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_109;
			L_109 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_107, ((int32_t)il2cpp_codegen_subtract(L_108, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_110;
			L_110 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_106, L_109, NULL);
			V_5 = L_110;
		}

IL_0280_1:
		{
			int32_t L_111 = ___kind1;
			if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_029d_1;
			}
		}
		{
			double L_112;
			L_112 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_113;
			L_113 = sqrt(L_112);
			double L_114 = L_113;
			RuntimeObject* L_115 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_114);
			V_13 = L_115;
			goto IL_0412;
		}

IL_029d_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_116 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_117 = L_116;
			RuntimeObject* L_118 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_117);
			V_13 = L_118;
			goto IL_0412;
		}

IL_02ab_1:
		{
			RuntimeObject* L_119 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_119;
			goto IL_0412;
		}

IL_02b8_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_120 = ((SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields*)il2cpp_codegen_static_fields_for(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var))->___MaxValue_10;
			V_8 = L_120;
			V_18 = 0;
			goto IL_030a_1;
		}

IL_02c4_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ___records0;
			int32_t L_122 = V_18;
			NullCheck(L_121);
			int32_t L_123 = L_122;
			int32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
			V_19 = L_124;
			int32_t L_125 = V_19;
			bool L_126;
			L_126 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_125);
			if (L_126)
			{
				goto IL_0304_1;
			}
		}
		{
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_127 = __this->____values_14;
			int32_t L_128 = V_19;
			NullCheck(L_127);
			int32_t L_129 = L_128;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_131 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_132;
			L_132 = SqlMoney_LessThan_mD8B99E2425DAF88A29CB543DAC64104459595AFC(L_130, L_131, NULL);
			V_17 = L_132;
			bool L_133;
			L_133 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_133)
			{
				goto IL_0302_1;
			}
		}
		{
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_134 = __this->____values_14;
			int32_t L_135 = V_19;
			NullCheck(L_134);
			int32_t L_136 = L_135;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			V_8 = L_137;
		}

IL_0302_1:
		{
			V_0 = (bool)1;
		}

IL_0304_1:
		{
			int32_t L_138 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		}

IL_030a_1:
		{
			int32_t L_139 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___records0;
			NullCheck(L_140);
			if ((((int32_t)L_139) < ((int32_t)((int32_t)(((RuntimeArray*)L_140)->max_length)))))
			{
				goto IL_02c4_1;
			}
		}
		{
			bool L_141 = V_0;
			if (!L_141)
			{
				goto IL_0322_1;
			}
		}
		{
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_142 = V_8;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_143 = L_142;
			RuntimeObject* L_144 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_143);
			V_13 = L_144;
			goto IL_0412;
		}

IL_0322_1:
		{
			RuntimeObject* L_145 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_145;
			goto IL_0412;
		}

IL_032f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_146 = ((SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_StaticFields*)il2cpp_codegen_static_fields_for(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var))->___MinValue_9;
			V_9 = L_146;
			V_20 = 0;
			goto IL_0381_1;
		}

IL_033b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = ___records0;
			int32_t L_148 = V_20;
			NullCheck(L_147);
			int32_t L_149 = L_148;
			int32_t L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
			V_21 = L_150;
			int32_t L_151 = V_21;
			bool L_152;
			L_152 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_151);
			if (L_152)
			{
				goto IL_037b_1;
			}
		}
		{
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_153 = __this->____values_14;
			int32_t L_154 = V_21;
			NullCheck(L_153);
			int32_t L_155 = L_154;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_157 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_158;
			L_158 = SqlMoney_GreaterThan_m01CFF5EBD79CFE6D3994E276982A5ACC09242461(L_156, L_157, NULL);
			V_17 = L_158;
			bool L_159;
			L_159 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_159)
			{
				goto IL_0379_1;
			}
		}
		{
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_160 = __this->____values_14;
			int32_t L_161 = V_21;
			NullCheck(L_160);
			int32_t L_162 = L_161;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
			V_9 = L_163;
		}

IL_0379_1:
		{
			V_0 = (bool)1;
		}

IL_037b_1:
		{
			int32_t L_164 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		}

IL_0381_1:
		{
			int32_t L_165 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = ___records0;
			NullCheck(L_166);
			if ((((int32_t)L_165) < ((int32_t)((int32_t)(((RuntimeArray*)L_166)->max_length)))))
			{
				goto IL_033b_1;
			}
		}
		{
			bool L_167 = V_0;
			if (!L_167)
			{
				goto IL_0396_1;
			}
		}
		{
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_168 = V_9;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_169 = L_168;
			RuntimeObject* L_170 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_169);
			V_13 = L_170;
			goto IL_0412;
		}

IL_0396_1:
		{
			RuntimeObject* L_171 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_171;
			goto IL_0412;
		}

IL_03a0_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ___records0;
			NullCheck(L_172);
			if (!(((RuntimeArray*)L_172)->max_length))
			{
				goto IL_03bb_1;
			}
		}
		{
			SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_173 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_174 = ___records0;
			NullCheck(L_174);
			int32_t L_175 = 0;
			int32_t L_176 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
			NullCheck(L_173);
			int32_t L_177 = L_176;
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_178 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
			SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_179 = L_178;
			RuntimeObject* L_180 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_179);
			V_13 = L_180;
			goto IL_0412;
		}

IL_03bb_1:
		{
			V_13 = NULL;
			goto IL_0412;
		}

IL_03c0_1:
		{
			V_4 = 0;
			V_22 = 0;
			goto IL_03e0_1;
		}

IL_03c8_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ___records0;
			int32_t L_182 = V_22;
			NullCheck(L_181);
			int32_t L_183 = L_182;
			int32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
			bool L_185;
			L_185 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_184);
			if (L_185)
			{
				goto IL_03da_1;
			}
		}
		{
			int32_t L_186 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		}

IL_03da_1:
		{
			int32_t L_187 = V_22;
			V_22 = ((int32_t)il2cpp_codegen_add(L_187, 1));
		}

IL_03e0_1:
		{
			int32_t L_188 = V_22;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ___records0;
			NullCheck(L_189);
			if ((((int32_t)L_188) < ((int32_t)((int32_t)(((RuntimeArray*)L_189)->max_length)))))
			{
				goto IL_03c8_1;
			}
		}
		{
			int32_t L_190 = V_4;
			int32_t L_191 = L_190;
			RuntimeObject* L_192 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_191);
			V_13 = L_192;
			goto IL_0412;
		}

IL_03f2_1:
		{
			goto IL_0405;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f4;
		}
		throw e;
	}

CATCH_03f4:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_193 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_194;
		L_194 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_193, NULL);
		Exception_t* L_195;
		L_195 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_194, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_195, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlMoneyStorage_Aggregate_mF4899961886FE4256076DD35EED139C683D84913_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0405:
	{
		int32_t L_196 = ___kind1;
		Type_t* L_197 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_198;
		L_198 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_196, L_197, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_198, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlMoneyStorage_Aggregate_mF4899961886FE4256076DD35EED139C683D84913_RuntimeMethod_var)));
	}

IL_0412:
	{
		RuntimeObject* L_199 = V_13;
		return L_199;
	}
}
// System.Int32 System.Data.Common.SqlMoneyStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlMoneyStorage_Compare_m4C13102D0224CD7223C3471D574F56B93E61D638 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlMoney_CompareTo_m8CD6963D21781A101DF52892EEC1C5F2D6F0A708(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlMoneyStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlMoneyStorage_CompareValueTo_mDD0274C9AFEFDB19B507445544B5E19F12A28BCF (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlMoney_CompareTo_m8CD6963D21781A101DF52892EEC1C5F2D6F0A708(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB*)((SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB*)(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB*)UnBox(L_2, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlMoneyStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlMoneyStorage_ConvertValue_mAA0363CF7B1BFBB9F60AA878D3ADE00FEA88AACC (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_2;
		L_2 = SqlConvert_ConvertToSqlMoney_mD9BE46CB971CB36854B823A337348A3CDBAECC05(L_1, NULL);
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlMoneyStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlMoneyStorage_Copy_m08FEC3C5D1558664ECFAB3CF77106E19C0B9BC2A (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlMoneyStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlMoneyStorage_Get_m5DBFB118AEF1252816DA19278F247923A465DBEC (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlMoneyStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlMoneyStorage_IsNull_mAA7A523EFE61AF91F265229E3888BC4205333C89 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlMoney_get_IsNull_m2EA471282BDB459F2F3D0F3997C06925C8883E9F(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlMoneyStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlMoneyStorage_Set_m10F3997D0CE5FE713A0CDDD18F717455E6B1140A (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_3;
		L_3 = SqlConvert_ConvertToSqlMoney_mD9BE46CB971CB36854B823A337348A3CDBAECC05(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlMoneyStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlMoneyStorage_SetCapacity_mFF1346FBA8E29E2BECB43518B5D9A048A57B9494 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_1 = (SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)(SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)SZArrayNew(SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_3 = __this->____values_14;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlMoneyStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlMoneyStorage_ConvertXmlToObject_m3A2F595B6F57251FABB62FD9ECC617B5AAD68160 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_3 = V_0;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_12 = ((*(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB*)((SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB*)(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB*)UnBox(L_11, SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlMoneyStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlMoneyStorage_ConvertObjectToXml_m295A5744059F59012C21A49A628444C3CC5DF066 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlMoneyStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlMoneyStorage_GetEmptyStorage_m26B0A408F59A20B17AF96808407CA504E5FF5E35 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_1 = (SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)(SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)SZArrayNew(SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlMoneyStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlMoneyStorage_CopyValue_m1192A4C462EB83DA739CE332B866265F32A66017 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)Castclass((RuntimeObject*)L_0, SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var)));
		(((SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)Castclass((RuntimeObject*)L_0, SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlMoney_t88BD587F422EA297502BC57B18010762C03531BB)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlMoneyStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlMoneyStorage_SetStorage_m7056C602ACA5689E5E9BDB2B65296978657C0144 (SqlMoneyStorage_t73DD2C8B83244A1B6651985BDF32387A74662B30* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)Castclass((RuntimeObject*)L_0, SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A*)Castclass((RuntimeObject*)L_0, SqlMoneyU5BU5D_t7F3F717D6EDE45B43255ACB24168648A47115E7A_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlSingleStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlSingleStorage__ctor_mADD6A3F44DF260CCD886FB5DF2A5E48CC6736299 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_3 = ((SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields*)il2cpp_codegen_static_fields_for(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var))->___Null_2;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_4);
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_6 = ((SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields*)il2cpp_codegen_static_fields_for(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var))->___Null_2;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)39), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlSingleStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlSingleStorage_Aggregate_m1731FD5018821474EAEF100EF1F6F8436EF68893 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_5;
	memset((&V_5), 0, sizeof(V_5));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_6;
	memset((&V_6), 0, sizeof(V_6));
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_7;
	memset((&V_7), 0, sizeof(V_7));
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_8;
	memset((&V_8), 0, sizeof(V_8));
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int32_t V_16 = 0;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0094_1;
				}
				case 2:
				{
					goto IL_02c0_1;
				}
				case 3:
				{
					goto IL_0337_1;
				}
				case 4:
				{
					goto IL_03a8_1;
				}
				case 5:
				{
					goto IL_03c8_1;
				}
				case 6:
				{
					goto IL_0128_1;
				}
				case 7:
				{
					goto IL_0128_1;
				}
			}
		}
		{
			goto IL_03fa_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_1;
			L_1 = SqlSingle_op_Implicit_m6974DDDF885A4088772D9CAB0FACE5E8E3D026E6((0.0f), NULL);
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_006f_1;
		}

IL_0042_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_7);
			if (L_8)
			{
				goto IL_0069_1;
			}
		}
		{
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_9 = V_1;
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_10 = __this->____values_14;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_14;
			L_14 = SqlSingle_op_Addition_mAF7086D6DBEDAD10923A3BA71EFEA36FA6EDAC99(L_9, L_13, NULL);
			V_1 = L_14;
			V_0 = (bool)1;
		}

IL_0069_1:
		{
			int32_t L_15 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		}

IL_006f_1:
		{
			int32_t L_16 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_10;
			NullCheck(L_17);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
			{
				goto IL_0042_1;
			}
		}
		{
			bool L_18 = V_0;
			if (!L_18)
			{
				goto IL_0087_1;
			}
		}
		{
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_19 = V_1;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_20 = L_19;
			RuntimeObject* L_21 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_20);
			V_13 = L_21;
			goto IL_041a;
		}

IL_0087_1:
		{
			RuntimeObject* L_22 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_22;
			goto IL_041a;
		}

IL_0094_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_23;
			L_23 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_2 = L_23;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___records0;
			V_10 = L_24;
			V_11 = 0;
			goto IL_00e3_1;
		}

IL_00ad_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_10;
			int32_t L_26 = V_11;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			V_14 = L_28;
			int32_t L_29 = V_14;
			bool L_30;
			L_30 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_29);
			if (L_30)
			{
				goto IL_00dd_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_31 = V_2;
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_32 = __this->____values_14;
			int32_t L_33 = V_14;
			NullCheck(L_32);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_34;
			L_34 = SqlSingle_ToSqlDouble_m8016267644F3F557B092599A902EE0186855F753(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_35;
			L_35 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_31, L_34, NULL);
			V_2 = L_35;
			int32_t L_36 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
			V_0 = (bool)1;
		}

IL_00dd_1:
		{
			int32_t L_37 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		}

IL_00e3_1:
		{
			int32_t L_38 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_10;
			NullCheck(L_39);
			if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
			{
				goto IL_00ad_1;
			}
		}
		{
			bool L_40 = V_0;
			if (!L_40)
			{
				goto IL_011b_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_41;
			L_41 = SqlSingle_op_Implicit_m6974DDDF885A4088772D9CAB0FACE5E8E3D026E6((0.0f), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_42 = V_2;
			int32_t L_43 = V_3;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_44;
			L_44 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_43), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_45;
			L_45 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_42, L_44, NULL);
			V_15 = L_45;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_46;
			L_46 = SqlDouble_ToSqlSingle_m5122151E05BA977D0E23F406E766D6BD6FE09781((&V_15), NULL);
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_47 = L_46;
			RuntimeObject* L_48 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_47);
			V_13 = L_48;
			goto IL_041a;
		}

IL_011b_1:
		{
			RuntimeObject* L_49 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_49;
			goto IL_041a;
		}

IL_0128_1:
		{
			V_4 = 0;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_50;
			L_50 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_50;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_51;
			L_51 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_52;
			L_52 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_6 = L_52;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_53;
			L_53 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_7 = L_53;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___records0;
			V_10 = L_54;
			V_11 = 0;
			goto IL_01dc_1;
		}

IL_0172_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_10;
			int32_t L_56 = V_11;
			NullCheck(L_55);
			int32_t L_57 = L_56;
			int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
			V_16 = L_58;
			int32_t L_59 = V_16;
			bool L_60;
			L_60 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_59);
			if (L_60)
			{
				goto IL_01d6_1;
			}
		}
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_61 = V_6;
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_62 = __this->____values_14;
			int32_t L_63 = V_16;
			NullCheck(L_62);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_64;
			L_64 = SqlSingle_ToSqlDouble_m8016267644F3F557B092599A902EE0186855F753(((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63))), NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_65;
			L_65 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_61, L_64, NULL);
			V_6 = L_65;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_66 = V_7;
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_67 = __this->____values_14;
			int32_t L_68 = V_16;
			NullCheck(L_67);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_69;
			L_69 = SqlSingle_ToSqlDouble_m8016267644F3F557B092599A902EE0186855F753(((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), NULL);
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_70 = __this->____values_14;
			int32_t L_71 = V_16;
			NullCheck(L_70);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_72;
			L_72 = SqlSingle_ToSqlDouble_m8016267644F3F557B092599A902EE0186855F753(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_73;
			L_73 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_69, L_72, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_74;
			L_74 = SqlDouble_op_Addition_mE67A10FADD4FC6E9BFD0623939D0C8C75B3ACF34(L_66, L_73, NULL);
			V_7 = L_74;
			int32_t L_75 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
		}

IL_01d6_1:
		{
			int32_t L_76 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		}

IL_01dc_1:
		{
			int32_t L_77 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_10;
			NullCheck(L_78);
			if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_78)->max_length)))))
			{
				goto IL_0172_1;
			}
		}
		{
			int32_t L_79 = V_4;
			if ((((int32_t)L_79) <= ((int32_t)1)))
			{
				goto IL_02b3_1;
			}
		}
		{
			int32_t L_80 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_81;
			L_81 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)L_80), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_82 = V_7;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_83;
			L_83 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_81, L_82, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_84 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_85 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_86;
			L_86 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_84, L_85, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_87;
			L_87 = SqlDouble_op_Subtraction_mDB3559F4D0A75B75ACB58C249CD8B55CF1657662(L_83, L_86, NULL);
			V_5 = L_87;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_88 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_89 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_90 = V_6;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_91;
			L_91 = SqlDouble_op_Multiply_m162D695CB6189C5A172F345DBE9167915129B166(L_89, L_90, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_92;
			L_92 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_88, L_91, NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_93;
			L_93 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((1.0000000000000001E-15), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_94;
			L_94 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_92, L_93, NULL);
			V_17 = L_94;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_95 = V_17;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_96;
			L_96 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(L_95, NULL);
			if (L_96)
			{
				goto IL_0257_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_97 = V_17;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_98 = V_5;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_99;
			L_99 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_100;
			L_100 = SqlDouble_op_LessThan_mA9AC263BC2E7C1D701D325DDDE52BF65D0002F4E(L_98, L_99, NULL);
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_101;
			L_101 = SqlBoolean_op_BitwiseOr_mF233E4301742AD5CD8F297E38FAEBB83C8390842(L_97, L_100, NULL);
			G_B28_0 = L_101;
			goto IL_0259_1;
		}

IL_0257_1:
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_102 = V_17;
			G_B28_0 = L_102;
		}

IL_0259_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			bool L_103;
			L_103 = SqlBoolean_op_True_m5CC9CAC092080E77EB6322BB0CDD656DFD38FF94(G_B28_0, NULL);
			if (!L_103)
			{
				goto IL_0272_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_104;
			L_104 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5((0.0), NULL);
			V_5 = L_104;
			goto IL_0288_1;
		}

IL_0272_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_105 = V_5;
			int32_t L_106 = V_4;
			int32_t L_107 = V_4;
			il2cpp_codegen_runtime_class_init_inline(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_108;
			L_108 = SqlDouble_op_Implicit_m576D944BF0D6B74CA2A29E211E91FCB1167D74F5(((double)((int32_t)il2cpp_codegen_multiply(L_106, ((int32_t)il2cpp_codegen_subtract(L_107, 1))))), NULL);
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_109;
			L_109 = SqlDouble_op_Division_m3348DB12E4A1CD8258D2E9795758549D139A9B7F(L_105, L_108, NULL);
			V_5 = L_109;
		}

IL_0288_1:
		{
			int32_t L_110 = ___kind1;
			if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_02a5_1;
			}
		}
		{
			double L_111;
			L_111 = SqlDouble_get_Value_mEC94553382F77D81E9E1086F2A4EF4B61DB21B4C((&V_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_112;
			L_112 = sqrt(L_111);
			double L_113 = L_112;
			RuntimeObject* L_114 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_113);
			V_13 = L_114;
			goto IL_041a;
		}

IL_02a5_1:
		{
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_115 = V_5;
			SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98 L_116 = L_115;
			RuntimeObject* L_117 = Box(SqlDouble_t028838C05B8C2E359848BEDB40C41CCCAA11CC98_il2cpp_TypeInfo_var, &L_116);
			V_13 = L_117;
			goto IL_041a;
		}

IL_02b3_1:
		{
			RuntimeObject* L_118 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_118;
			goto IL_041a;
		}

IL_02c0_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_119 = ((SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields*)il2cpp_codegen_static_fields_for(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var))->___MaxValue_5;
			V_8 = L_119;
			V_18 = 0;
			goto IL_0312_1;
		}

IL_02cc_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ___records0;
			int32_t L_121 = V_18;
			NullCheck(L_120);
			int32_t L_122 = L_121;
			int32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
			V_19 = L_123;
			int32_t L_124 = V_19;
			bool L_125;
			L_125 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_124);
			if (L_125)
			{
				goto IL_030c_1;
			}
		}
		{
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_126 = __this->____values_14;
			int32_t L_127 = V_19;
			NullCheck(L_126);
			int32_t L_128 = L_127;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_130 = V_8;
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_131;
			L_131 = SqlSingle_LessThan_mDAA47FA20864AE2CD8942F4D25E66311102F5312(L_129, L_130, NULL);
			V_17 = L_131;
			bool L_132;
			L_132 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_132)
			{
				goto IL_030a_1;
			}
		}
		{
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_133 = __this->____values_14;
			int32_t L_134 = V_19;
			NullCheck(L_133);
			int32_t L_135 = L_134;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
			V_8 = L_136;
		}

IL_030a_1:
		{
			V_0 = (bool)1;
		}

IL_030c_1:
		{
			int32_t L_137 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		}

IL_0312_1:
		{
			int32_t L_138 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = ___records0;
			NullCheck(L_139);
			if ((((int32_t)L_138) < ((int32_t)((int32_t)(((RuntimeArray*)L_139)->max_length)))))
			{
				goto IL_02cc_1;
			}
		}
		{
			bool L_140 = V_0;
			if (!L_140)
			{
				goto IL_032a_1;
			}
		}
		{
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_141 = V_8;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_142 = L_141;
			RuntimeObject* L_143 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_142);
			V_13 = L_143;
			goto IL_041a;
		}

IL_032a_1:
		{
			RuntimeObject* L_144 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_144;
			goto IL_041a;
		}

IL_0337_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_145 = ((SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_StaticFields*)il2cpp_codegen_static_fields_for(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var))->___MinValue_4;
			V_9 = L_145;
			V_20 = 0;
			goto IL_0389_1;
		}

IL_0343_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = ___records0;
			int32_t L_147 = V_20;
			NullCheck(L_146);
			int32_t L_148 = L_147;
			int32_t L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
			V_21 = L_149;
			int32_t L_150 = V_21;
			bool L_151;
			L_151 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_150);
			if (L_151)
			{
				goto IL_0383_1;
			}
		}
		{
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_152 = __this->____values_14;
			int32_t L_153 = V_21;
			NullCheck(L_152);
			int32_t L_154 = L_153;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_156 = V_9;
			il2cpp_codegen_runtime_class_init_inline(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_157;
			L_157 = SqlSingle_GreaterThan_m47333A024B0B28CD984E14593AF78C119EF784D9(L_155, L_156, NULL);
			V_17 = L_157;
			bool L_158;
			L_158 = SqlBoolean_get_IsTrue_mD2491FECA6D8BEC7F00C0071C6299187B28B52D4((&V_17), NULL);
			if (!L_158)
			{
				goto IL_0381_1;
			}
		}
		{
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_159 = __this->____values_14;
			int32_t L_160 = V_21;
			NullCheck(L_159);
			int32_t L_161 = L_160;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
			V_9 = L_162;
		}

IL_0381_1:
		{
			V_0 = (bool)1;
		}

IL_0383_1:
		{
			int32_t L_163 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_163, 1));
		}

IL_0389_1:
		{
			int32_t L_164 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = ___records0;
			NullCheck(L_165);
			if ((((int32_t)L_164) < ((int32_t)((int32_t)(((RuntimeArray*)L_165)->max_length)))))
			{
				goto IL_0343_1;
			}
		}
		{
			bool L_166 = V_0;
			if (!L_166)
			{
				goto IL_039e_1;
			}
		}
		{
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_167 = V_9;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_168 = L_167;
			RuntimeObject* L_169 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_168);
			V_13 = L_169;
			goto IL_041a;
		}

IL_039e_1:
		{
			RuntimeObject* L_170 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_170;
			goto IL_041a;
		}

IL_03a8_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = ___records0;
			NullCheck(L_171);
			if (!(((RuntimeArray*)L_171)->max_length))
			{
				goto IL_03c3_1;
			}
		}
		{
			SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_172 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ___records0;
			NullCheck(L_173);
			int32_t L_174 = 0;
			int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
			NullCheck(L_172);
			int32_t L_176 = L_175;
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_177 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
			SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_178 = L_177;
			RuntimeObject* L_179 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_178);
			V_13 = L_179;
			goto IL_041a;
		}

IL_03c3_1:
		{
			V_13 = NULL;
			goto IL_041a;
		}

IL_03c8_1:
		{
			V_4 = 0;
			V_22 = 0;
			goto IL_03e8_1;
		}

IL_03d0_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ___records0;
			int32_t L_181 = V_22;
			NullCheck(L_180);
			int32_t L_182 = L_181;
			int32_t L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
			bool L_184;
			L_184 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_183);
			if (L_184)
			{
				goto IL_03e2_1;
			}
		}
		{
			int32_t L_185 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_185, 1));
		}

IL_03e2_1:
		{
			int32_t L_186 = V_22;
			V_22 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		}

IL_03e8_1:
		{
			int32_t L_187 = V_22;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ___records0;
			NullCheck(L_188);
			if ((((int32_t)L_187) < ((int32_t)((int32_t)(((RuntimeArray*)L_188)->max_length)))))
			{
				goto IL_03d0_1;
			}
		}
		{
			int32_t L_189 = V_4;
			int32_t L_190 = L_189;
			RuntimeObject* L_191 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_190);
			V_13 = L_191;
			goto IL_041a;
		}

IL_03fa_1:
		{
			goto IL_040d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03fc;
		}
		throw e;
	}

CATCH_03fc:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		Exception_t* L_194;
		L_194 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_193, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_194, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlSingleStorage_Aggregate_m1731FD5018821474EAEF100EF1F6F8436EF68893_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_040d:
	{
		int32_t L_195 = ___kind1;
		Type_t* L_196 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_197;
		L_197 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_195, L_196, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_197, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlSingleStorage_Aggregate_m1731FD5018821474EAEF100EF1F6F8436EF68893_RuntimeMethod_var)));
	}

IL_041a:
	{
		RuntimeObject* L_198 = V_13;
		return L_198;
	}
}
// System.Int32 System.Data.Common.SqlSingleStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlSingleStorage_Compare_mED5442A633D42178ED19A90DABF55A88D1416E0F (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlSingle_CompareTo_m167AE18CF6ACCFA18A71BA742D642ECC7463D22A(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlSingleStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlSingleStorage_CompareValueTo_m291949F8E604865C4EC241D0A55A82BB3FB2E597 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlSingle_CompareTo_m167AE18CF6ACCFA18A71BA742D642ECC7463D22A(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767*)((SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767*)(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767*)UnBox(L_2, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlSingleStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlSingleStorage_ConvertValue_m48336B1F2C615088566A16F762EFED19F8266F82 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_2;
		L_2 = SqlConvert_ConvertToSqlSingle_m641986240A40EE1B0BB1BBCB13D6BA0880891AB4(L_1, NULL);
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlSingleStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlSingleStorage_Copy_m518B3E5113DE52CF8C13F262D6B1D836BADB85A1 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlSingleStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlSingleStorage_Get_m4347389714E82FD420D46F05A548A70D4A271C79 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlSingleStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlSingleStorage_IsNull_m33F149ABA2D6AD1A0EAC9658005347000A576C1E (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlSingle_get_IsNull_mC0F4C05C5D8C7D6B3A51B51154032E41018C712B(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlSingleStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlSingleStorage_Set_m02C51116981892C7AB1E3F78B3D0DFE404E7A4F9 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_3;
		L_3 = SqlConvert_ConvertToSqlSingle_m641986240A40EE1B0BB1BBCB13D6BA0880891AB4(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlSingleStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlSingleStorage_SetCapacity_m9B11DF67592C8D8047A0865D124A624145AC1617 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_1 = (SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)(SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)SZArrayNew(SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_3 = __this->____values_14;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlSingleStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlSingleStorage_ConvertXmlToObject_mFE6B90745DEC02DFA7FDEF845B9C90D45E86F360 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_3 = V_0;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_12 = ((*(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767*)((SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767*)(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767*)UnBox(L_11, SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlSingleStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlSingleStorage_ConvertObjectToXml_mABFEF7F6E98E8994CBBCAF5DC2F4A36F364C87EA (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlSingleStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlSingleStorage_GetEmptyStorage_mD0CE521CA27C290A082518C5828B70988074188B (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_1 = (SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)(SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)SZArrayNew(SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlSingleStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlSingleStorage_CopyValue_m7DBEE5DC5453DE7B9D718A5DACFD2732119034CE (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)Castclass((RuntimeObject*)L_0, SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var)));
		(((SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)Castclass((RuntimeObject*)L_0, SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlSingle_tE807CFF8CCE4E77475D51223A37ADC73BC205767)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlSingleStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlSingleStorage_SetStorage_m73E2E85DE4616B7DEEE2657A0E0E7E0446A08BB4 (SqlSingleStorage_t521641843FBC1C8159B0D17D082F680912027D31* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)Castclass((RuntimeObject*)L_0, SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D*)Castclass((RuntimeObject*)L_0, SqlSingleU5BU5D_t24423849DE9EE77FCC6B717A10C70B23DF58135D_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlStringStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlStringStorage__ctor_m18394D9693EC2AFD62867D241053298A7F892FC0 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = ((SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields*)il2cpp_codegen_static_fields_for(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var))->___Null_5;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var, &L_4);
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_6 = ((SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_StaticFields*)il2cpp_codegen_static_fields_for(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var))->___Null_5;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)40), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlStringStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlStringStorage_Aggregate_mEE8D15FE6D1B33441B8E0CE11F08EDD682EB5982 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___recordNos0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 6)))
			{
				case 0:
				{
					goto IL_001d_1;
				}
				case 1:
				{
					goto IL_0089_1;
				}
				case 2:
				{
					goto IL_010d_1;
				}
				case 3:
				{
					goto IL_00e4_1;
				}
			}
		}
		{
			goto IL_010d_1;
		}

IL_001d_1:
		{
			V_1 = (-1);
			V_0 = 0;
			goto IL_0038_1;
		}

IL_0023_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___recordNos0;
			int32_t L_2 = V_0;
			NullCheck(L_1);
			int32_t L_3 = L_2;
			int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
			bool L_5;
			L_5 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_4);
			if (L_5)
			{
				goto IL_0034_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___recordNos0;
			int32_t L_7 = V_0;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			V_1 = L_9;
			goto IL_003e_1;
		}

IL_0034_1:
		{
			int32_t L_10 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		}

IL_0038_1:
		{
			int32_t L_11 = V_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___recordNos0;
			NullCheck(L_12);
			if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
			{
				goto IL_0023_1;
			}
		}

IL_003e_1:
		{
			int32_t L_13 = V_1;
			if ((((int32_t)L_13) < ((int32_t)0)))
			{
				goto IL_007c_1;
			}
		}
		{
			int32_t L_14 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			goto IL_0068_1;
		}

IL_0048_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___recordNos0;
			int32_t L_16 = V_0;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			bool L_19;
			L_19 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_18);
			if (L_19)
			{
				goto IL_0064_1;
			}
		}
		{
			int32_t L_20 = V_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___recordNos0;
			int32_t L_22 = V_0;
			NullCheck(L_21);
			int32_t L_23 = L_22;
			int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			int32_t L_25;
			L_25 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Data.Common.DataStorage::Compare(System.Int32,System.Int32) */, __this, L_20, L_24);
			if ((((int32_t)L_25) <= ((int32_t)0)))
			{
				goto IL_0064_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___recordNos0;
			int32_t L_27 = V_0;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			V_1 = L_29;
		}

IL_0064_1:
		{
			int32_t L_30 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		}

IL_0068_1:
		{
			int32_t L_31 = V_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___recordNos0;
			NullCheck(L_32);
			if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
			{
				goto IL_0048_1;
			}
		}
		{
			int32_t L_33 = V_1;
			RuntimeObject* L_34;
			L_34 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(9 /* System.Object System.Data.Common.DataStorage::Get(System.Int32) */, __this, L_33);
			V_4 = L_34;
			goto IL_012d;
		}

IL_007c_1:
		{
			RuntimeObject* L_35 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_4 = L_35;
			goto IL_012d;
		}

IL_0089_1:
		{
			V_2 = (-1);
			V_0 = 0;
			goto IL_00a4_1;
		}

IL_008f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___recordNos0;
			int32_t L_37 = V_0;
			NullCheck(L_36);
			int32_t L_38 = L_37;
			int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
			bool L_40;
			L_40 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_39);
			if (L_40)
			{
				goto IL_00a0_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___recordNos0;
			int32_t L_42 = V_0;
			NullCheck(L_41);
			int32_t L_43 = L_42;
			int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
			V_2 = L_44;
			goto IL_00aa_1;
		}

IL_00a0_1:
		{
			int32_t L_45 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		}

IL_00a4_1:
		{
			int32_t L_46 = V_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___recordNos0;
			NullCheck(L_47);
			if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
			{
				goto IL_008f_1;
			}
		}

IL_00aa_1:
		{
			int32_t L_48 = V_2;
			if ((((int32_t)L_48) < ((int32_t)0)))
			{
				goto IL_00da_1;
			}
		}
		{
			int32_t L_49 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
			goto IL_00c9_1;
		}

IL_00b4_1:
		{
			int32_t L_50 = V_2;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___recordNos0;
			int32_t L_52 = V_0;
			NullCheck(L_51);
			int32_t L_53 = L_52;
			int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
			int32_t L_55;
			L_55 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Data.Common.DataStorage::Compare(System.Int32,System.Int32) */, __this, L_50, L_54);
			if ((((int32_t)L_55) >= ((int32_t)0)))
			{
				goto IL_00c5_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___recordNos0;
			int32_t L_57 = V_0;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			V_2 = L_59;
		}

IL_00c5_1:
		{
			int32_t L_60 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		}

IL_00c9_1:
		{
			int32_t L_61 = V_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___recordNos0;
			NullCheck(L_62);
			if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
			{
				goto IL_00b4_1;
			}
		}
		{
			int32_t L_63 = V_2;
			RuntimeObject* L_64;
			L_64 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(9 /* System.Object System.Data.Common.DataStorage::Get(System.Int32) */, __this, L_63);
			V_4 = L_64;
			goto IL_012d;
		}

IL_00da_1:
		{
			RuntimeObject* L_65 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_4 = L_65;
			goto IL_012d;
		}

IL_00e4_1:
		{
			V_3 = 0;
			V_0 = 0;
			goto IL_00fd_1;
		}

IL_00ea_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = ___recordNos0;
			int32_t L_67 = V_0;
			NullCheck(L_66);
			int32_t L_68 = L_67;
			int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
			bool L_70;
			L_70 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_69);
			if (L_70)
			{
				goto IL_00f9_1;
			}
		}
		{
			int32_t L_71 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		}

IL_00f9_1:
		{
			int32_t L_72 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		}

IL_00fd_1:
		{
			int32_t L_73 = V_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___recordNos0;
			NullCheck(L_74);
			if ((((int32_t)L_73) < ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))))
			{
				goto IL_00ea_1;
			}
		}
		{
			int32_t L_75 = V_3;
			int32_t L_76 = L_75;
			RuntimeObject* L_77 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_76);
			V_4 = L_77;
			goto IL_012d;
		}

IL_010d_1:
		{
			goto IL_0120;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_010f;
		}
		throw e;
	}

CATCH_010f:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		Exception_t* L_80;
		L_80 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_79, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlStringStorage_Aggregate_mEE8D15FE6D1B33441B8E0CE11F08EDD682EB5982_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0120:
	{
		int32_t L_81 = ___kind1;
		Type_t* L_82 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_83;
		L_83 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_81, L_82, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlStringStorage_Aggregate_mEE8D15FE6D1B33441B8E0CE11F08EDD682EB5982_RuntimeMethod_var)));
	}

IL_012d:
	{
		RuntimeObject* L_84 = V_4;
		return L_84;
	}
}
// System.Int32 System.Data.Common.SqlStringStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlStringStorage_Compare_m1B6E49029A22509A9854041E2BC3F1F6BCC6EDD8 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8;
		L_8 = SqlStringStorage_Compare_m66A6DE5F012951BAF41F38E163EBB9AD684C487A(__this, L_3, L_7, NULL);
		return L_8;
	}
}
// System.Int32 System.Data.Common.SqlStringStorage::Compare(System.Data.SqlTypes.SqlString,System.Data.SqlTypes.SqlString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlStringStorage_Compare_m66A6DE5F012951BAF41F38E163EBB9AD684C487A (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___valueNo10, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D ___valueNo21, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A((&___valueNo10), NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A((&___valueNo21), NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		bool L_2;
		L_2 = SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A((&___valueNo10), NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}

IL_001f:
	{
		bool L_3;
		L_3 = SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A((&___valueNo21), NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		return 1;
	}

IL_002a:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_4 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____table_2;
		String_t* L_5;
		L_5 = SqlString_get_Value_m542A333CCBBF1866B0F9B9F01B442BC38272912A((&___valueNo10), NULL);
		String_t* L_6;
		L_6 = SqlString_get_Value_m542A333CCBBF1866B0F9B9F01B442BC38272912A((&___valueNo21), NULL);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DataTable_Compare_mD425943926EF05816C7B8F5BB02F4234C0AB72C5(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.Data.Common.SqlStringStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlStringStorage_CompareValueTo_mC76BA5259F3F8588A829BD9F6CC6E645E2F06F5E (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject* L_4 = ___value1;
		int32_t L_5;
		L_5 = SqlStringStorage_Compare_m66A6DE5F012951BAF41F38E163EBB9AD684C487A(__this, L_3, ((*(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D*)((SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D*)(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D*)UnBox(L_4, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var)))), NULL);
		return L_5;
	}
}
// System.Object System.Data.Common.SqlStringStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlStringStorage_ConvertValue_mD98EAF5876167603CE76D7B8FA9C7E72B3216009 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_2;
		L_2 = SqlConvert_ConvertToSqlString_mEC9792A7BFD3CD1C43275D3BFB77BE9FCD88A866(L_1, NULL);
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlStringStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlStringStorage_Copy_m38145A011766872721B58D3520A64D77AC084974 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlStringStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlStringStorage_Get_mFE751BD4B4E7DEFC9A73179490FAE9A7A6DAD025 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Int32 System.Data.Common.SqlStringStorage::GetStringLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlStringStorage_GetStringLength_mC66254BCB38D1B503A2225253576FF09065B7803 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		bool L_4;
		L_4 = SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A((&V_0), NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_5;
		L_5 = SqlString_get_Value_m542A333CCBBF1866B0F9B9F01B442BC38272912A((&V_0), NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		return 0;
	}
}
// System.Boolean System.Data.Common.SqlStringStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlStringStorage_IsNull_m2EC56D4CF78739B5B0ADBBB552D4125030F8E80E (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlString_get_IsNull_mC369763D29E440BDBBCA1CD83C4FF8F3D5F8EF9A(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlStringStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlStringStorage_Set_m2E51B7BA5FF371D585FBCBB5123A49524831B79B (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3;
		L_3 = SqlConvert_ConvertToSqlString_mEC9792A7BFD3CD1C43275D3BFB77BE9FCD88A866(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlStringStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlStringStorage_SetCapacity_m95C957D1BF55409A7D7C8CEF9A4F59A3838BFBFC (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_1 = (SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)(SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)SZArrayNew(SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_3 = __this->____values_14;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlStringStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlStringStorage_ConvertXmlToObject_m422748A90B04409B0B47BAC7894F0F0B5819C7A1 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_3 = V_0;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_12 = ((*(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D*)((SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D*)(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D*)UnBox(L_11, SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlStringStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlStringStorage_ConvertObjectToXml_mCFAA1CB5CEF3199FBB6043E313E413103D43CF9F (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlStringStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlStringStorage_GetEmptyStorage_m505B1A9C60B51C14A22194C1E51CA60E84E6A30C (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_1 = (SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)(SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)SZArrayNew(SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlStringStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlStringStorage_CopyValue_m61A8ED2D5AE251455853A6C847531B646F2AE14A (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)Castclass((RuntimeObject*)L_0, SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var)));
		(((SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)Castclass((RuntimeObject*)L_0, SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlString_t49F9D31E7FD7F45509E26DEFEB61F006965D588D)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlStringStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlStringStorage_SetStorage_m28040DF27710F54199F5C2023607DDB775EF08A3 (SqlStringStorage_t94C5DE64AC3395FA6A9931AE0AD1561E5F73B22F* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)Castclass((RuntimeObject*)L_0, SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7*)Castclass((RuntimeObject*)L_0, SqlStringU5BU5D_t8083BC7AE79AB16E186256FC6732AD8666E85ED7_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SqlBooleanStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBooleanStorage__ctor_mFD58DBA18B9FAA1956AC9257E393F11F3BA0A120 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_3 = ((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_4);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_6 = ((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_StaticFields*)il2cpp_codegen_static_fields_for(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))->___Null_3;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_7 = L_6;
		RuntimeObject* L_8 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_m8D71272A5C8C171D06957F6CE18A4586141FD0F3(__this, L_0, L_2, L_5, L_8, ((int32_t)27), NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlBooleanStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlBooleanStorage_Aggregate_m3B3E57CD8FACE461E615597A8D02BCB243AF03D7 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 6)))
			{
				case 0:
				{
					goto IL_001f_1;
				}
				case 1:
				{
					goto IL_007b_1;
				}
				case 2:
				{
					goto IL_00d1_1;
				}
				case 3:
				{
					goto IL_00f6_1;
				}
			}
		}
		{
			goto IL_0124_1;
		}

IL_001f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_1;
			L_1 = SqlBoolean_op_Implicit_m783AB38276C3DDE1364D7E3F7C504A551CB4E52D((bool)1, NULL);
			V_1 = L_1;
			V_4 = 0;
			goto IL_0057_1;
		}

IL_002b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			int32_t L_3 = V_4;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_5 = L_5;
			int32_t L_6 = V_5;
			bool L_7;
			L_7 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_6);
			if (L_7)
			{
				goto IL_0051_1;
			}
		}
		{
			SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_8 = __this->____values_14;
			int32_t L_9 = V_5;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_12 = V_1;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_13;
			L_13 = SqlBoolean_And_mF7B00B2E948C34C26B7B144A264FE13DB54511CA(L_11, L_12, NULL);
			V_1 = L_13;
			V_0 = (bool)1;
		}

IL_0051_1:
		{
			int32_t L_14 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0057_1:
		{
			int32_t L_15 = V_4;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___records0;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_002b_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_006e_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_18 = V_1;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_19 = L_18;
			RuntimeObject* L_20 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_19);
			V_6 = L_20;
			goto IL_0144;
		}

IL_006e_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_6 = L_21;
			goto IL_0144;
		}

IL_007b_1:
		{
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_22;
			L_22 = SqlBoolean_op_Implicit_m783AB38276C3DDE1364D7E3F7C504A551CB4E52D((bool)0, NULL);
			V_2 = L_22;
			V_7 = 0;
			goto IL_00b3_1;
		}

IL_0087_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___records0;
			int32_t L_24 = V_7;
			NullCheck(L_23);
			int32_t L_25 = L_24;
			int32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			V_8 = L_26;
			int32_t L_27 = V_8;
			bool L_28;
			L_28 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_27);
			if (L_28)
			{
				goto IL_00ad_1;
			}
		}
		{
			SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_29 = __this->____values_14;
			int32_t L_30 = V_8;
			NullCheck(L_29);
			int32_t L_31 = L_30;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_33 = V_2;
			il2cpp_codegen_runtime_class_init_inline(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_34;
			L_34 = SqlBoolean_Or_m58ABB2DA31312E7CB532D42FDEBD8EDE5534E5C0(L_32, L_33, NULL);
			V_2 = L_34;
			V_0 = (bool)1;
		}

IL_00ad_1:
		{
			int32_t L_35 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		}

IL_00b3_1:
		{
			int32_t L_36 = V_7;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___records0;
			NullCheck(L_37);
			if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
			{
				goto IL_0087_1;
			}
		}
		{
			bool L_38 = V_0;
			if (!L_38)
			{
				goto IL_00c7_1;
			}
		}
		{
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_39 = V_2;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_40 = L_39;
			RuntimeObject* L_41 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_40);
			V_6 = L_41;
			goto IL_0144;
		}

IL_00c7_1:
		{
			RuntimeObject* L_42 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_6 = L_42;
			goto IL_0144;
		}

IL_00d1_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ___records0;
			NullCheck(L_43);
			if (!(((RuntimeArray*)L_43)->max_length))
			{
				goto IL_00ec_1;
			}
		}
		{
			SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_44 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___records0;
			NullCheck(L_45);
			int32_t L_46 = 0;
			int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			NullCheck(L_44);
			int32_t L_48 = L_47;
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_49 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_50 = L_49;
			RuntimeObject* L_51 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_50);
			V_6 = L_51;
			goto IL_0144;
		}

IL_00ec_1:
		{
			RuntimeObject* L_52 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_6 = L_52;
			goto IL_0144;
		}

IL_00f6_1:
		{
			V_3 = 0;
			V_9 = 0;
			goto IL_0113_1;
		}

IL_00fd_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___records0;
			int32_t L_54 = V_9;
			NullCheck(L_53);
			int32_t L_55 = L_54;
			int32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			bool L_57;
			L_57 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_56);
			if (L_57)
			{
				goto IL_010d_1;
			}
		}
		{
			int32_t L_58 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_010d_1:
		{
			int32_t L_59 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		}

IL_0113_1:
		{
			int32_t L_60 = V_9;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ___records0;
			NullCheck(L_61);
			if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length)))))
			{
				goto IL_00fd_1;
			}
		}
		{
			int32_t L_62 = V_3;
			int32_t L_63 = L_62;
			RuntimeObject* L_64 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_63);
			V_6 = L_64;
			goto IL_0144;
		}

IL_0124_1:
		{
			goto IL_0137;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0126;
		}
		throw e;
	}

CATCH_0126:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		Exception_t* L_67;
		L_67 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_66, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBooleanStorage_Aggregate_m3B3E57CD8FACE461E615597A8D02BCB243AF03D7_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0137:
	{
		int32_t L_68 = ___kind1;
		Type_t* L_69 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_70;
		L_70 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_68, L_69, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlBooleanStorage_Aggregate_m3B3E57CD8FACE461E615597A8D02BCB243AF03D7_RuntimeMethod_var)));
	}

IL_0144:
	{
		RuntimeObject* L_71 = V_6;
		return L_71;
	}
}
// System.Int32 System.Data.Common.SqlBooleanStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBooleanStorage_Compare_mC9066E812C14A89D58B0FAE691BD63BBAB838C50 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Data.Common.SqlBooleanStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlBooleanStorage_CompareValueTo_m9F3A9EC979DA024D0910BC2D78E8334464CFDF81 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		RuntimeObject* L_2 = ___value1;
		int32_t L_3;
		L_3 = SqlBoolean_CompareTo_mAB4868F894724D6FFEA7678910365C1797973FB5(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), ((*(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)UnBox(L_2, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}
}
// System.Object System.Data.Common.SqlBooleanStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlBooleanStorage_ConvertValue_m081BCCCDF91C08DA739D97F40801F33F9F229F62 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_2;
		L_2 = SqlConvert_ConvertToSqlBoolean_mE80631BCDAA75B6F5ECD227F1C9079674810BBF1(L_1, NULL);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_3 = L_2;
		RuntimeObject* L_4 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_000f:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_5;
	}
}
// System.Void System.Data.Common.SqlBooleanStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBooleanStorage_Copy_m775C111BD1984866EE96BACDE6079ABE16A0D6CC (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7)L_5);
		return;
	}
}
// System.Object System.Data.Common.SqlBooleanStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlBooleanStorage_Get_m289E873C9994E051D4A07ECED741064960DDA0F1 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_4);
		return L_5;
	}
}
// System.Boolean System.Data.Common.SqlBooleanStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlBooleanStorage_IsNull_m54CCB723C86805924436151884C19DAB311E5E8D (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		bool L_2;
		L_2 = SqlBoolean_get_IsNull_mA4ECA927DBC05F2D362301DA216CAEF9CE7BCCBB(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Void System.Data.Common.SqlBooleanStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBooleanStorage_Set_mB021C4D47B089DFFF9396FC18DF400641A086587 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		RuntimeObject* L_2 = ___value1;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_3;
		L_3 = SqlConvert_ConvertToSqlBoolean_mE80631BCDAA75B6F5ECD227F1C9079674810BBF1(L_2, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7)L_3);
		return;
	}
}
// System.Void System.Data.Common.SqlBooleanStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBooleanStorage_SetCapacity_m11F4974C3FD0FF363E1151A115A7F95D42175CDC (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_1 = (SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)(SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)SZArrayNew(SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_3 = __this->____values_14;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.SqlBooleanStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlBooleanStorage_ConvertXmlToObject_m11329AE44C2E788325467F5B4C7989AF5AB1851A (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7));
		String_t* L_0 = ___s0;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_0, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_2, L_1, NULL);
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_3 = V_0;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_4 = L_3;
		RuntimeObject* L_5 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_4);
		V_1 = (RuntimeObject*)L_5;
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_2, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_003c;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(L_9);
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, L_9, L_10);
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		RuntimeObject* L_11 = V_1;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_12 = ((*(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)((SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7*)UnBox(L_11, SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var))));
		RuntimeObject* L_13 = Box(SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7_il2cpp_TypeInfo_var, &L_12);
		return L_13;
	}
}
// System.String System.Data.Common.SqlBooleanStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlBooleanStorage_ConvertObjectToXml_m2101EEDD4FE390C93079F837ADCF955E5717C0E1 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_2 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_3 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_3, L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = V_1;
					if (!L_4)
					{
						goto IL_002a;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_6 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_7 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_7);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Object System.Data.Common.SqlBooleanStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlBooleanStorage_GetEmptyStorage_mCD80CD13E17631D53A0784BAF0A05CB5467EFBC8 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_1 = (SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)(SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)SZArrayNew(SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlBooleanStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBooleanStorage_CopyValue_m2AAF9EBCFC32C8DF0FC28AC6B8F4A6AAFCCA9C87 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)Castclass((RuntimeObject*)L_0, SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var)));
		(((SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)Castclass((RuntimeObject*)L_0, SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (SqlBoolean_tAD22108BE5F656A5AAFE19B054B2CA56C0AEE1D7)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlBooleanStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlBooleanStorage_SetStorage_m734F52ECE8668182A29A9CC06682232901F16787 (SqlBooleanStorage_tAE0880B17BCAC85D90CFCC823D50B112BC0BF731* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)Castclass((RuntimeObject*)L_0, SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA*)Castclass((RuntimeObject*)L_0, SqlBooleanU5BU5D_t27C7294426E836AF0537705F07B3F8F2C307A0CA_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.SingleStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStorage__ctor_m343C42F8D04A3616A1FD0D70D47C06DC8CE02D67 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		float L_3 = (0.0f);
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_4, ((int32_t)13), NULL);
		return;
	}
}
// System.Object System.Data.Common.SingleStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleStorage_Aggregate_mB25EEF3F27B00330CEA140296FCC89D582E7F69B (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0087_1;
				}
				case 2:
				{
					goto IL_01e8_1;
				}
				case 3:
				{
					goto IL_0243_1;
				}
				case 4:
				{
					goto IL_0298_1;
				}
				case 5:
				{
					goto IL_02b4_1;
				}
				case 6:
				{
					goto IL_00ee_1;
				}
				case 7:
				{
					goto IL_00ee_1;
				}
			}
		}
		{
			goto IL_02c0_1;
		}

IL_002f_1:
		{
			V_1 = (0.0f);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___records0;
			V_10 = L_1;
			V_11 = 0;
			goto IL_0062_1;
		}

IL_003d_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_10;
			int32_t L_3 = V_11;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_12 = L_5;
			int32_t L_6 = V_12;
			bool L_7;
			L_7 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_6);
			if (L_7)
			{
				goto IL_005c_1;
			}
		}
		{
			float L_8 = V_1;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->____values_14;
			int32_t L_10 = V_12;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			V_1 = ((float)il2cpp_codegen_add(L_8, L_12));
			V_0 = (bool)1;
		}

IL_005c_1:
		{
			int32_t L_13 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		}

IL_0062_1:
		{
			int32_t L_14 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_10;
			NullCheck(L_15);
			if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
			{
				goto IL_003d_1;
			}
		}
		{
			bool L_16 = V_0;
			if (!L_16)
			{
				goto IL_007a_1;
			}
		}
		{
			float L_17 = V_1;
			float L_18 = L_17;
			RuntimeObject* L_19 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_18);
			V_13 = L_19;
			goto IL_02e0;
		}

IL_007a_1:
		{
			RuntimeObject* L_20 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_20;
			goto IL_02e0;
		}

IL_0087_1:
		{
			V_2 = (0.0);
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___records0;
			V_10 = L_21;
			V_11 = 0;
			goto IL_00c5_1;
		}

IL_009b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_10;
			int32_t L_23 = V_11;
			NullCheck(L_22);
			int32_t L_24 = L_23;
			int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
			V_14 = L_25;
			int32_t L_26 = V_14;
			bool L_27;
			L_27 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_26);
			if (L_27)
			{
				goto IL_00bf_1;
			}
		}
		{
			double L_28 = V_2;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = __this->____values_14;
			int32_t L_30 = V_14;
			NullCheck(L_29);
			int32_t L_31 = L_30;
			float L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
			V_2 = ((double)il2cpp_codegen_add(L_28, ((double)L_32)));
			int32_t L_33 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
			V_0 = (bool)1;
		}

IL_00bf_1:
		{
			int32_t L_34 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		}

IL_00c5_1:
		{
			int32_t L_35 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_10;
			NullCheck(L_36);
			if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
			{
				goto IL_009b_1;
			}
		}
		{
			bool L_37 = V_0;
			if (!L_37)
			{
				goto IL_00e1_1;
			}
		}
		{
			double L_38 = V_2;
			int32_t L_39 = V_3;
			float L_40 = ((float)((double)(L_38/((double)L_39))));
			RuntimeObject* L_41 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_40);
			V_13 = L_41;
			goto IL_02e0;
		}

IL_00e1_1:
		{
			RuntimeObject* L_42 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_42;
			goto IL_02e0;
		}

IL_00ee_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = ___records0;
			V_10 = L_43;
			V_11 = 0;
			goto IL_0160_1;
		}

IL_011a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_10;
			int32_t L_45 = V_11;
			NullCheck(L_44);
			int32_t L_46 = L_45;
			int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
			V_15 = L_47;
			int32_t L_48 = V_15;
			bool L_49;
			L_49 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_48);
			if (L_49)
			{
				goto IL_015a_1;
			}
		}
		{
			double L_50 = V_6;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = __this->____values_14;
			int32_t L_52 = V_15;
			NullCheck(L_51);
			int32_t L_53 = L_52;
			float L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
			V_6 = ((double)il2cpp_codegen_add(L_50, ((double)L_54)));
			double L_55 = V_7;
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = __this->____values_14;
			int32_t L_57 = V_15;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			float L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = __this->____values_14;
			int32_t L_61 = V_15;
			NullCheck(L_60);
			int32_t L_62 = L_61;
			float L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
			V_7 = ((double)il2cpp_codegen_add(L_55, ((double)il2cpp_codegen_multiply(((double)L_59), ((double)L_63)))));
			int32_t L_64 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		}

IL_015a_1:
		{
			int32_t L_65 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		}

IL_0160_1:
		{
			int32_t L_66 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_10;
			NullCheck(L_67);
			if ((((int32_t)L_66) < ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
			{
				goto IL_011a_1;
			}
		}
		{
			int32_t L_68 = V_4;
			if ((((int32_t)L_68) <= ((int32_t)1)))
			{
				goto IL_01db_1;
			}
		}
		{
			int32_t L_69 = V_4;
			double L_70 = V_7;
			double L_71 = V_6;
			double L_72 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_69), L_70)), ((double)il2cpp_codegen_multiply(L_71, L_72))));
			double L_73 = V_5;
			double L_74 = V_6;
			double L_75 = V_6;
			if ((((double)((double)(L_73/((double)il2cpp_codegen_multiply(L_74, L_75))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_019b_1;
			}
		}
		{
			double L_76 = V_5;
			if ((!(((double)L_76) < ((double)(0.0)))))
			{
				goto IL_01a8_1;
			}
		}

IL_019b_1:
		{
			V_5 = (0.0);
			goto IL_01b5_1;
		}

IL_01a8_1:
		{
			double L_77 = V_5;
			int32_t L_78 = V_4;
			int32_t L_79 = V_4;
			V_5 = ((double)(L_77/((double)((int32_t)il2cpp_codegen_multiply(L_78, ((int32_t)il2cpp_codegen_subtract(L_79, 1)))))));
		}

IL_01b5_1:
		{
			int32_t L_80 = ___kind1;
			if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01cd_1;
			}
		}
		{
			double L_81 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_82;
			L_82 = sqrt(L_81);
			double L_83 = L_82;
			RuntimeObject* L_84 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_83);
			V_13 = L_84;
			goto IL_02e0;
		}

IL_01cd_1:
		{
			double L_85 = V_5;
			double L_86 = L_85;
			RuntimeObject* L_87 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_86);
			V_13 = L_87;
			goto IL_02e0;
		}

IL_01db_1:
		{
			RuntimeObject* L_88 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_88;
			goto IL_02e0;
		}

IL_01e8_1:
		{
			V_8 = ((std::numeric_limits<float>::max)());
			V_16 = 0;
			goto IL_021e_1;
		}

IL_01f4_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ___records0;
			int32_t L_90 = V_16;
			NullCheck(L_89);
			int32_t L_91 = L_90;
			int32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
			V_17 = L_92;
			int32_t L_93 = V_17;
			bool L_94;
			L_94 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_93);
			if (L_94)
			{
				goto IL_0218_1;
			}
		}
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_95 = __this->____values_14;
			int32_t L_96 = V_17;
			NullCheck(L_95);
			int32_t L_97 = L_96;
			float L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
			float L_99 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			float L_100;
			L_100 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_98, L_99, NULL);
			V_8 = L_100;
			V_0 = (bool)1;
		}

IL_0218_1:
		{
			int32_t L_101 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		}

IL_021e_1:
		{
			int32_t L_102 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = ___records0;
			NullCheck(L_103);
			if ((((int32_t)L_102) < ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
			{
				goto IL_01f4_1;
			}
		}
		{
			bool L_104 = V_0;
			if (!L_104)
			{
				goto IL_0236_1;
			}
		}
		{
			float L_105 = V_8;
			float L_106 = L_105;
			RuntimeObject* L_107 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_106);
			V_13 = L_107;
			goto IL_02e0;
		}

IL_0236_1:
		{
			RuntimeObject* L_108 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_108;
			goto IL_02e0;
		}

IL_0243_1:
		{
			V_9 = (-(std::numeric_limits<float>::max)());
			V_18 = 0;
			goto IL_0279_1;
		}

IL_024f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ___records0;
			int32_t L_110 = V_18;
			NullCheck(L_109);
			int32_t L_111 = L_110;
			int32_t L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
			V_19 = L_112;
			int32_t L_113 = V_19;
			bool L_114;
			L_114 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_113);
			if (L_114)
			{
				goto IL_0273_1;
			}
		}
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_115 = __this->____values_14;
			int32_t L_116 = V_19;
			NullCheck(L_115);
			int32_t L_117 = L_116;
			float L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
			float L_119 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			float L_120;
			L_120 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_118, L_119, NULL);
			V_9 = L_120;
			V_0 = (bool)1;
		}

IL_0273_1:
		{
			int32_t L_121 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_121, 1));
		}

IL_0279_1:
		{
			int32_t L_122 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = ___records0;
			NullCheck(L_123);
			if ((((int32_t)L_122) < ((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length)))))
			{
				goto IL_024f_1;
			}
		}
		{
			bool L_124 = V_0;
			if (!L_124)
			{
				goto IL_028e_1;
			}
		}
		{
			float L_125 = V_9;
			float L_126 = L_125;
			RuntimeObject* L_127 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_126);
			V_13 = L_127;
			goto IL_02e0;
		}

IL_028e_1:
		{
			RuntimeObject* L_128 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_128;
			goto IL_02e0;
		}

IL_0298_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ___records0;
			NullCheck(L_129);
			if (!(((RuntimeArray*)L_129)->max_length))
			{
				goto IL_02af_1;
			}
		}
		{
			SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_130 = __this->____values_14;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___records0;
			NullCheck(L_131);
			int32_t L_132 = 0;
			int32_t L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
			NullCheck(L_130);
			int32_t L_134 = L_133;
			float L_135 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
			float L_136 = L_135;
			RuntimeObject* L_137 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_136);
			V_13 = L_137;
			goto IL_02e0;
		}

IL_02af_1:
		{
			V_13 = NULL;
			goto IL_02e0;
		}

IL_02b4_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = ___records0;
			int32_t L_139 = ___kind1;
			RuntimeObject* L_140;
			L_140 = DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2(__this, L_138, L_139, NULL);
			V_13 = L_140;
			goto IL_02e0;
		}

IL_02c0_1:
		{
			goto IL_02d3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02c2;
		}
		throw e;
	}

CATCH_02c2:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_141 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_142;
		L_142 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_141, NULL);
		Exception_t* L_143;
		L_143 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_142, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleStorage_Aggregate_mB25EEF3F27B00330CEA140296FCC89D582E7F69B_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02d3:
	{
		int32_t L_144 = ___kind1;
		Type_t* L_145 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_146;
		L_146 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_144, L_145, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_146, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SingleStorage_Aggregate_mB25EEF3F27B00330CEA140296FCC89D582E7F69B_RuntimeMethod_var)));
	}

IL_02e0:
	{
		RuntimeObject* L_147 = V_13;
		return L_147;
	}
}
// System.Int32 System.Data.Common.SingleStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SingleStorage_Compare_m618A2B3541F8A95481164EC0531805A275A85551 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		float L_8 = V_0;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_0022;
		}
	}
	{
		float L_9 = V_1;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_0030;
		}
	}

IL_0022:
	{
		int32_t L_10 = ___recordNo10;
		int32_t L_11 = ___recordNo21;
		int32_t L_12;
		L_12 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_10, L_11, NULL);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_14 = V_2;
		return L_14;
	}

IL_0030:
	{
		float L_15 = V_1;
		int32_t L_16;
		L_16 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_15, NULL);
		return L_16;
	}
}
// System.Int32 System.Data.Common.SingleStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SingleStorage_CompareValueTo_mE6F3795F68450FA936EF627BB37E35D12F3C5149 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___recordNo0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		float L_8 = V_0;
		if ((!(((float)(0.0f)) == ((float)L_8))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___recordNo0;
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_9);
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_11 = ___value1;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), ((*(float*)((float*)(float*)UnBox(L_11, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		return L_12;
	}
}
// System.Object System.Data.Common.SingleStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleStorage_ConvertValue_mBCF949551BC16D13E15A7CE3F9003D7F141E3D4A (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		float L_5;
		L_5 = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(11 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		___value0 = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value0 = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___value0;
		return L_9;
	}
}
// System.Void System.Data.Common.SingleStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStorage_Copy_m68C56FBEE33C4295D5BA9D349FEDC9006BF45E0D (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		int32_t L_1 = ___recordNo21;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)L_7);
		return;
	}
}
// System.Object System.Data.Common.SingleStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleStorage_Get_m6EDE1AC1373276BA052C0C9CF23D93C0D5919DD8 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		float L_4 = V_0;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_0018;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = L_5;
		RuntimeObject* L_7 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0018:
	{
		int32_t L_8 = ___record0;
		RuntimeObject* L_9;
		L_9 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_8, NULL);
		return L_9;
	}
}
// System.Void System.Data.Common.SingleStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStorage_Set_m8DC9A84A419CE2F4A0BB8C6505BCCFA238B03FE1 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (float)(0.0f));
		int32_t L_4 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_4, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = __this->____values_14;
		int32_t L_6 = ___record0;
		RuntimeObject* L_7 = ___value1;
		RuntimeObject* L_8;
		L_8 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		float L_9;
		L_9 = InterfaceFuncInvoker1< float, RuntimeObject* >::Invoke(11 /* System.Single System.IConvertible::ToSingle(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_8);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)L_9);
		int32_t L_10 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_10, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.SingleStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStorage_SetCapacity_mF0180302217CC3A8CE767D035AD2B3435C6D2EAC (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->____values_14;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		int32_t L_9 = ___capacity0;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.SingleStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleStorage_ConvertXmlToObject_m0E8576E68C39AA4FA4485AFF909758CEBF12F70F (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = XmlConvert_ToSingle_m57D622EA6B6024A02ACA602BA5B0ABDE831E1095(L_0, NULL);
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.SingleStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SingleStorage_ConvertObjectToXml_m803668FC8302B5875530F196F4E32AE782A3F6F6 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m0A47C3C098CDB47726C29D7A70B7349D6DA57555(((*(float*)((float*)(float*)UnBox(L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.SingleStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingleStorage_GetEmptyStorage_m11878473248B188B35458BA84B58B2B989739A65 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SingleStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStorage_CopyValue_m6741960CEE9AA1E762389D384FCFA6A2DBD6E069 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)));
		(((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SingleStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleStorage_SetStorage_m7F24FF18D74DA9BB15E1862A9039AECAE025EFF8 (SingleStorage_tE1D8B663170EBC119509B3C6D430FEC995193170* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)Castclass((RuntimeObject*)L_0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___nullbits1;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
// System.Void System.Data.Common.SqlUdtStorage::.ctor(System.Data.DataColumn,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage__ctor_mCC1CE21121EEC6FCC4D9D6BF43DDD80BD538183A (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		Type_t* L_1 = ___type1;
		Type_t* L_2 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = SqlUdtStorage_GetStaticNullForUdtType_m82F5DEBE6A48BAB46B9C9FD8E42E918D5FCF1987(L_2, NULL);
		SqlUdtStorage__ctor_m94619A62207B20278BCFDCF5AE406465B4C64D0B(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::.ctor(System.Data.DataColumn,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage__ctor_m94619A62207B20278BCFDCF5AE406465B4C64D0B (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, Type_t* ___type1, RuntimeObject* ___nullValue2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		Type_t* L_1 = ___type1;
		RuntimeObject* L_2 = ___nullValue2;
		RuntimeObject* L_3 = ___nullValue2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (ICloneable_t5118E0179AA4A8D8B4D4A85BF3CE9BB363B88E14_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		Type_t* L_6 = ___type1;
		NullCheck(L_5);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		Type_t* L_8 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = DataStorage_GetStorageType_m19BC434CEDEE34062430D4E606642F832ED54B26(L_8, NULL);
		DataStorage__ctor_mA9F115E5C2C8731649CAED020992FD169714FF61(__this, L_0, L_1, L_2, L_3, L_7, L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		Type_t* L_12 = ___type1;
		NullCheck(L_11);
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_11, L_12);
		__this->____implementsIXmlSerializable_15 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Type_t* L_16 = ___type1;
		NullCheck(L_15);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
		__this->____implementsIComparable_16 = L_17;
		return;
	}
}
// System.Object System.Data.Common.SqlUdtStorage::GetStaticNullForUdtType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_GetStaticNullForUdtType_m82F5DEBE6A48BAB46B9C9FD8E42E918D5FCF1987 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_GetOrAdd_mAC3DEFBC31599AEB49E5732BBEC3F867DB0881B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetStaticNullForUdtTypeU3Eb__0_mA477120577648521172AF2A0786AAAA96563FA76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* L_0 = (U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mA7537729315A16E6F6FAF4D6001216C6ECE6AA3E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* L_1 = V_0;
		Type_t* L_2 = ___type0;
		NullCheck(L_1);
		L_1->___type_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___type_0), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* L_3 = ((SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_StaticFields*)il2cpp_codegen_static_fields_for(SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var))->___s_typeToNull_17;
		U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5 = L_4->___type_0;
		U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* L_6 = V_0;
		Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32* L_7 = (Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32*)il2cpp_codegen_object_new(Func_2_t99F93C3B77ABF0E9195E469E0E33220D54DCBF32_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_m6695FACD17F109F48A02101B3A386B51B8E25099(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetStaticNullForUdtTypeU3Eb__0_mA477120577648521172AF2A0786AAAA96563FA76_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		RuntimeObject* L_8;
		L_8 = ConcurrentDictionary_2_GetOrAdd_mAC3DEFBC31599AEB49E5732BBEC3F867DB0881B6(L_3, L_5, L_7, ConcurrentDictionary_2_GetOrAdd_mAC3DEFBC31599AEB49E5732BBEC3F867DB0881B6_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean System.Data.Common.SqlUdtStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SqlUdtStorage_IsNull_mEFE02CB7FDFA9B3AD699E4DFFE9B3990501ECD56 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var)));
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Data.SqlTypes.INullable::get_IsNull() */, INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var)));
		return L_4;
	}
}
// System.Object System.Data.Common.SqlUdtStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_Aggregate_m5D6036C23038ECD78C4881E9B5E49EEE9E957FE3 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___kind1;
		Type_t* L_1 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_2;
		L_2 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_0, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlUdtStorage_Aggregate_m5D6036C23038ECD78C4881E9B5E49EEE9E957FE3_RuntimeMethod_var)));
	}
}
// System.Int32 System.Data.Common.SqlUdtStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlUdtStorage_Compare_mCE1A55BFFE985475DCE8DC0384CD8F8563BE24F5 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____values_14;
		int32_t L_2 = ___recordNo21;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5;
		L_5 = VirtualFuncInvoker2< int32_t, int32_t, RuntimeObject* >::Invoke(6 /* System.Int32 System.Data.Common.DataStorage::CompareValueTo(System.Int32,System.Object) */, __this, L_0, L_4);
		return L_5;
	}
}
// System.Int32 System.Data.Common.SqlUdtStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SqlUdtStorage_CompareValueTo_m6FE681BA37983850EC12613E6FB61BAFE747CCFA (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___recordNo10, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_0 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_2 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value1 = L_2;
	}

IL_0010:
	{
		bool L_3 = __this->____implementsIComparable_16;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject* L_8 = ___value1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var)));
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var)), L_8);
		return L_9;
	}

IL_002c:
	{
		RuntimeObject* L_10 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_11 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(RuntimeObject*)L_11))))
		{
			goto IL_004d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____values_14;
		int32_t L_13 = ___recordNo10;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var)));
		bool L_16;
		L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Data.SqlTypes.INullable::get_IsNull() */, INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, INullable_t0D0891A26A5794B5E6082B3D2007925ECD311DAB_il2cpp_TypeInfo_var)));
		if (L_16)
		{
			goto IL_004b;
		}
	}
	{
		return 1;
	}

IL_004b:
	{
		return 0;
	}

IL_004d:
	{
		Type_t* L_17 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_AssemblyQualifiedName() */, L_17);
		Exception_t* L_19;
		L_19 = ExceptionBuilder_IComparableNotImplemented_m41968A228CBFEA81BC50C2F85E81CAB29CB11831(L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlUdtStorage_CompareValueTo_m6FE681BA37983850EC12613E6FB61BAFE747CCFA_RuntimeMethod_var)));
	}
}
// System.Void System.Data.Common.SqlUdtStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage_Copy_mEBCE88996320989FB969911642FF388455C9C508 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		int32_t L_1 = ___recordNo21;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo21;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_7);
		return;
	}
}
// System.Object System.Data.Common.SqlUdtStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_Get_m126380C0285CE1B2C282D1EBFB225822144D8045 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___recordNo0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage_Set_m095FB8D317F1F198E8D649173B3ED77EE3487443 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var);
		DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC* L_0 = ((DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC_il2cpp_TypeInfo_var))->___Value_0;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(DBNull_t33A9BF6787D27894A593CF4A5E58B8DDC63BBEFC*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo0;
		RuntimeObject* L_4 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_4);
		int32_t L_5 = ___recordNo0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		RuntimeObject* L_6 = ___value1;
		if (L_6)
		{
			goto IL_0047;
		}
	}
	{
		bool L_7 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____isValueType_11;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		Exception_t* L_8;
		L_8 = ExceptionBuilder_StorageSetFailed_mD1DDFA2037D98B7EBB9C5CC173049C4FD8ECF673(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlUdtStorage_Set_m095FB8D317F1F198E8D649173B3ED77EE3487443_RuntimeMethod_var)));
	}

IL_0030:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____values_14;
		int32_t L_10 = ___recordNo0;
		RuntimeObject* L_11 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (RuntimeObject*)L_11);
		int32_t L_12 = ___recordNo0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_12, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		Type_t* L_13 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		RuntimeObject* L_14 = ___value1;
		NullCheck(L_13);
		bool L_15;
		L_15 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(120 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_13, L_14);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		Exception_t* L_16;
		L_16 = ExceptionBuilder_StorageSetFailed_mD1DDFA2037D98B7EBB9C5CC173049C4FD8ECF673(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SqlUdtStorage_Set_m095FB8D317F1F198E8D649173B3ED77EE3487443_RuntimeMethod_var)));
	}

IL_005b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____values_14;
		int32_t L_18 = ___recordNo0;
		RuntimeObject* L_19 = ___value1;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (RuntimeObject*)L_19);
		int32_t L_20 = ___recordNo0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_20, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage_SetCapacity_m7BA7B111C189176CD66693A42B157C6F56C7304B (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____values_14;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		int32_t L_9 = ___capacity0;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlUdtStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_ConvertXmlToObject_mDDE1486865C2C7F96E26CB077E1759D649B4530B (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB);
		s_Il2CppMethodInitialized = true;
	}
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* V_2 = NULL;
	{
		bool L_0 = __this->____implementsIXmlSerializable_15;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Type_t* L_1 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		RuntimeObject* L_2;
		L_2 = Activator_CreateInstance_m2BE3252B26369EA17E06A564F25172F6D002469F(L_1, (bool)1, NULL);
		V_1 = L_2;
		String_t* L_3 = ___s0;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C8FFD9099CC1566CF7D882C306D3BFAD9CE4A76, L_3, _stringLiteral3EDEBA59761013871A662EE6B0D7C52CE5D36FEB, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_5 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_5, L_4, NULL);
		XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_6 = (XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B*)il2cpp_codegen_object_new(XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XmlTextReader__ctor_mC97F8050EA5BC3E461C2B682AF238D00196594AF(L_6, L_5, NULL);
		V_2 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_7 = V_2;
					if (!L_7)
					{
						goto IL_0047;
					}
				}
				{
					XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_8 = V_2;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_9 = V_1;
			XmlTextReader_tC907887DA34B51126640DA590B4C9358DF45738B* L_10 = V_2;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_9, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_10);
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		RuntimeObject* L_11 = V_1;
		return L_11;
	}

IL_004a:
	{
		String_t* L_12 = ___s0;
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_13, L_12, NULL);
		V_0 = L_13;
		Type_t* L_14 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		il2cpp_codegen_runtime_class_init_inline(ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_15;
		L_15 = ObjectStorage_GetXmlSerializer_m8AEE8D07759F90C3971B2EA835BC171A03E4CA85(L_14, NULL);
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = XmlSerializer_Deserialize_m7487D353E77EED4F6A255D415AE87DBCBC0A6E2D(L_15, L_16, NULL);
		return L_17;
	}
}
// System.Object System.Data.Common.SqlUdtStorage::ConvertXmlToObject(System.Xml.XmlReader,System.Xml.Serialization.XmlRootAttribute)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_ConvertXmlToObject_m64771B8D93840BFF00509C689682D9EE9F107EE2 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* ___xmlReader0, XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* ___xmlAttrib1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlUdtStorage_ConvertXmlToObject_m64771B8D93840BFF00509C689682D9EE9F107EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XSDSchema_t3BD7A85B5B77669F2A8AC189553BBDC0DC9B112C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44796A9EA3476CDED88CE39A688C638A52C1D20E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5272508B2E6395FDF44F8E7BE3B299EB6377D28);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	Type_t* G_B7_0 = NULL;
	{
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_0 = ___xmlAttrib1;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_1 = ___xmlReader0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_1, _stringLiteralF5272508B2E6395FDF44F8E7BE3B299EB6377D28, _stringLiteral44796A9EA3476CDED88CE39A688C638A52C1D20E);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_4 = ___xmlReader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(23 /* System.String System.Xml.XmlReader::GetAttribute(System.String,System.String) */, L_4, _stringLiteralF5272508B2E6395FDF44F8E7BE3B299EB6377D28, _stringLiteral7C014955313A7D33D5D04696B884B25325E6393C);
		V_1 = L_5;
		String_t* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XSDSchema_t3BD7A85B5B77669F2A8AC189553BBDC0DC9B112C_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = XSDSchema_XsdtoClr_m56B7AD7BAF9F6E0A70068CA8087844089DA5E059(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_8);
		V_0 = L_9;
	}

IL_0037:
	{
		String_t* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = il2cpp_codegen_get_type(L_11, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, SqlUdtStorage_ConvertXmlToObject_m64771B8D93840BFF00509C689682D9EE9F107EE2_RuntimeMethod_var);
		G_B7_0 = L_12;
		goto IL_0048;
	}

IL_0042:
	{
		Type_t* L_13 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		G_B7_0 = L_13;
	}

IL_0048:
	{
		RuntimeObject* L_14;
		L_14 = Activator_CreateInstance_m2BE3252B26369EA17E06A564F25172F6D002469F(G_B7_0, (bool)1, NULL);
		RuntimeObject* L_15 = L_14;
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_16 = ___xmlReader0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* >::Invoke(1 /* System.Void System.Xml.Serialization.IXmlSerializable::ReadXml(System.Xml.XmlReader) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_15, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_16);
		return L_15;
	}

IL_005b:
	{
		Type_t* L_17 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_18 = ___xmlAttrib1;
		il2cpp_codegen_runtime_class_init_inline(ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_19;
		L_19 = ObjectStorage_GetXmlSerializer_mFAC39326321F5899C7F9FDA200CCF212BFC93AE7(L_17, L_18, NULL);
		XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD* L_20 = ___xmlReader0;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = XmlSerializer_Deserialize_m3F8DFF8F5A4052487062BAB8C60C110FA9AE40A8(L_19, L_20, NULL);
		return L_21;
	}
}
// System.String System.Data.Common.SqlUdtStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SqlUdtStorage_ConvertObjectToXml_m5D7E9052FFE08E7DB5C2D88787F936FE00D9F132 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* V_0 = NULL;
	XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_1 = (StringWriter_tF48052BE4F980E5C85403221E835768E4156267D*)il2cpp_codegen_object_new(StringWriter_tF48052BE4F980E5C85403221E835768E4156267D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringWriter__ctor_mE3EE42D6B6B6CE4F81849022B19FFC1842FB3FCA(L_1, L_0, NULL);
		V_0 = L_1;
		bool L_2 = __this->____implementsIXmlSerializable_15;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_3 = V_0;
		XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_4 = (XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B*)il2cpp_codegen_object_new(XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XmlTextWriter__ctor_m4AE8363DFA5B2D16F3750514727C63D4A0096489(L_4, L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0032;
					}
				}
				{
					XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_7 = ___value0;
			XmlTextWriter_t9CB64E379F8FE646DA31698A03CE6AF8A594A73B* L_8 = V_1;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_8);
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		RuntimeObject* L_9 = ___value0;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_11;
		L_11 = ObjectStorage_GetXmlSerializer_m8AEE8D07759F90C3971B2EA835BC171A03E4CA85(L_10, NULL);
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_12 = V_0;
		RuntimeObject* L_13 = ___value0;
		NullCheck(L_11);
		XmlSerializer_Serialize_m2EEA80F41157A3088A0E74EB55EA04ECAEE32CCF(L_11, L_12, L_13, NULL);
	}

IL_0045:
	{
		StringWriter_tF48052BE4F980E5C85403221E835768E4156267D* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::ConvertObjectToXml(System.Object,System.Xml.XmlWriter,System.Xml.Serialization.XmlRootAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage_ConvertObjectToXml_m3195087DA563349C3AECF07F1BA9425BB0F641A3 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, RuntimeObject* ___value0, XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___xmlWriter1, XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* ___xmlAttrib2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_0 = ___xmlAttrib2;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1 = ___value0;
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_2 = ___xmlWriter1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* >::Invoke(2 /* System.Void System.Xml.Serialization.IXmlSerializable::WriteXml(System.Xml.XmlWriter) */, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IXmlSerializable_tE36AB1894460107283308E142C1106C4AB31A526_il2cpp_TypeInfo_var)), L_2);
		return;
	}

IL_0010:
	{
		Type_t* L_3 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		XmlRootAttribute_t09EE81719C9B95C01B28D108765FB62737E75FAF* L_4 = ___xmlAttrib2;
		il2cpp_codegen_runtime_class_init_inline(ObjectStorage_t816E88583419792A49925A19C8692C8DF3AA99F0_il2cpp_TypeInfo_var);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_5;
		L_5 = ObjectStorage_GetXmlSerializer_mFAC39326321F5899C7F9FDA200CCF212BFC93AE7(L_3, L_4, NULL);
		XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* L_6 = ___xmlWriter1;
		RuntimeObject* L_7 = ___value0;
		NullCheck(L_5);
		XmlSerializer_Serialize_mB74F49E255C6BCCE6912F2049914C6D18B73A2D1(L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlUdtStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SqlUdtStorage_GetEmptyStorage_m8D8DDBC6E73BA3CA4A853D33CB8211E3B3F0B2D2 (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage_CopyValue_m99C613BB5977F697C40353CFEFF0A8837E65796E (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)));
		ArrayElementTypeCheck (((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), L_5);
		(((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (RuntimeObject*)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage_SetStorage_m8BF8D6AE2C322AE7E847BCB5F98BDB87855CBC1D (SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Data.Common.SqlUdtStorage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqlUdtStorage__cctor_mF0EA2082C57417E4D77B7223924F2274033B834A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m18A4C1583B6AE265D3F02ACABE66DF23DDCC1709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834* L_0 = (ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834*)il2cpp_codegen_object_new(ConcurrentDictionary_2_t01EC89866F72177CED9A0249F17948367F151834_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentDictionary_2__ctor_m18A4C1583B6AE265D3F02ACABE66DF23DDCC1709(L_0, ConcurrentDictionary_2__ctor_m18A4C1583B6AE265D3F02ACABE66DF23DDCC1709_RuntimeMethod_var);
		((SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_StaticFields*)il2cpp_codegen_static_fields_for(SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var))->___s_typeToNull_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_StaticFields*)il2cpp_codegen_static_fields_for(SqlUdtStorage_t5F263716B666F5A31BD1DC9AC94981BF3185F067_il2cpp_TypeInfo_var))->___s_typeToNull_17), (void*)L_0);
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
// System.Void System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mA7537729315A16E6F6FAF4D6001216C6ECE6AA3E (U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object System.Data.Common.SqlUdtStorage/<>c__DisplayClass6_0::<GetStaticNullForUdtType>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass6_0_U3CGetStaticNullForUdtTypeU3Eb__0_mA477120577648521172AF2A0786AAAA96563FA76 (U3CU3Ec__DisplayClass6_0_tA94B883F7263633503099BA2D2DA99C3A9A63977* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	{
		Type_t* L_0 = __this->___type_0;
		NullCheck(L_0);
		PropertyInfo_t* L_1;
		L_1 = Type_GetProperty_m6E63875E6098E89250149F4E76FAD40844708391(L_0, _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9, ((int32_t)24), NULL);
		V_0 = L_1;
		PropertyInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_2, (PropertyInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		PropertyInfo_t* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_4, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return L_5;
	}

IL_0025:
	{
		Type_t* L_6 = __this->___type_0;
		NullCheck(L_6);
		FieldInfo_t* L_7;
		L_7 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_6, _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9, ((int32_t)24));
		V_1 = L_7;
		FieldInfo_t* L_8 = V_1;
		bool L_9;
		L_9 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_8, (FieldInfo_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		FieldInfo_t* L_10 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_10, NULL);
		return L_11;
	}

IL_0049:
	{
		Type_t* L_12 = __this->___type_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_AssemblyQualifiedName() */, L_12);
		Exception_t* L_14;
		L_14 = ExceptionBuilder_INullableUDTwithoutStaticNull_m12D68CA24E4358382D62FBBCB35B7290CC3B0EAD(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetStaticNullForUdtTypeU3Eb__0_mA477120577648521172AF2A0786AAAA96563FA76_RuntimeMethod_var)));
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
// System.Void System.Data.Common.StringStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStorage__ctor_m63BD96A20EF9341221B0071365FA13E6FAD9E4C3 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_3, ((int32_t)18), NULL);
		return;
	}
}
// System.Object System.Data.Common.StringStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStorage_Aggregate_mC2EE2FB81839B9F011F59D648C034BC8AE072859 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___recordNos0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___kind1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 6)))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_00f9;
			}
			case 3:
			{
				goto IL_00d2;
			}
		}
	}
	{
		goto IL_00f9;
	}

IL_001d:
	{
		V_1 = (-1);
		V_0 = 0;
		goto IL_0038;
	}

IL_0023:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___recordNos0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_4);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___recordNos0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		goto IL_003e;
	}

IL_0034:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0038:
	{
		int32_t L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___recordNos0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0023;
		}
	}

IL_003e:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		goto IL_0068;
	}

IL_0048:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___recordNos0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_18);
		if (L_19)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_20 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___recordNos0;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25;
		L_25 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Data.Common.DataStorage::Compare(System.Int32,System.Int32) */, __this, L_20, L_24);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = ___recordNos0;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = L_29;
	}

IL_0064:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0068:
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___recordNos0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_33 = V_1;
		RuntimeObject* L_34;
		L_34 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(9 /* System.Object System.Data.Common.DataStorage::Get(System.Int32) */, __this, L_33);
		return L_34;
	}

IL_0076:
	{
		RuntimeObject* L_35 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_35;
	}

IL_007d:
	{
		V_2 = (-1);
		V_0 = 0;
		goto IL_0098;
	}

IL_0083:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___recordNos0;
		int32_t L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		bool L_40;
		L_40 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_39);
		if (L_40)
		{
			goto IL_0094;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___recordNos0;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = L_44;
		goto IL_009e;
	}

IL_0094:
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0098:
	{
		int32_t L_46 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___recordNos0;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_0083;
		}
	}

IL_009e:
	{
		int32_t L_48 = V_2;
		if ((((int32_t)L_48) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		goto IL_00bd;
	}

IL_00a8:
	{
		int32_t L_50 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___recordNos0;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55;
		L_55 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Data.Common.DataStorage::Compare(System.Int32,System.Int32) */, __this, L_50, L_54);
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_00b9;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___recordNos0;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_2 = L_59;
	}

IL_00b9:
	{
		int32_t L_60 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_00bd:
	{
		int32_t L_61 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___recordNos0;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_63 = V_2;
		RuntimeObject* L_64;
		L_64 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(9 /* System.Object System.Data.Common.DataStorage::Get(System.Int32) */, __this, L_63);
		return L_64;
	}

IL_00cb:
	{
		RuntimeObject* L_65 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_65;
	}

IL_00d2:
	{
		V_3 = 0;
		V_0 = 0;
		goto IL_00ec;
	}

IL_00d8:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = __this->____values_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = ___recordNos0;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		int32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_66);
		int32_t L_71 = L_70;
		String_t* L_72 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if (!L_72)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_73 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00e8:
	{
		int32_t L_74 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_00ec:
	{
		int32_t L_75 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ___recordNos0;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_77 = V_3;
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_78);
		return L_79;
	}

IL_00f9:
	{
		int32_t L_80 = ___kind1;
		Type_t* L_81 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_82;
		L_82 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_80, L_81, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_82, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringStorage_Aggregate_mC2EE2FB81839B9F011F59D648C034BC8AE072859_RuntimeMethod_var)));
	}
}
// System.Int32 System.Data.Common.StringStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStorage_Compare_m0A567B071F53BD6991CC87E5500D7E50EBF2986D (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->____values_14;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		if ((!(((RuntimeObject*)(String_t*)L_8) == ((RuntimeObject*)(String_t*)L_9))))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}

IL_0018:
	{
		String_t* L_10 = V_0;
		if (L_10)
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		String_t* L_11 = V_1;
		if (L_11)
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}

IL_0022:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_12 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____table_2;
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		NullCheck(L_12);
		int32_t L_15;
		L_15 = DataTable_Compare_mD425943926EF05816C7B8F5BB02F4234C0AB72C5(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 System.Data.Common.StringStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStorage_CompareValueTo_m5EAFAACC8F347C2FFB7F067F77175F2F7A84C958 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_6 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_5) == ((RuntimeObject*)(RuntimeObject*)L_6))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		return (-1);
	}

IL_0019:
	{
		RuntimeObject* L_7 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_8 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_9 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____table_2;
		String_t* L_10 = V_0;
		RuntimeObject* L_11 = ___value1;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = DataTable_Compare_mD425943926EF05816C7B8F5BB02F4234C0AB72C5(L_9, L_10, ((String_t*)CastclassSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_12;
	}
}
// System.Object System.Data.Common.StringStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStorage_ConvertValue_mC3B62D07796E59D2E3873531C755EB17CD7B0BAC (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		___value0 = L_4;
		goto IL_001e;
	}

IL_0016:
	{
		RuntimeObject* L_5 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value0 = L_5;
	}

IL_001e:
	{
		RuntimeObject* L_6 = ___value0;
		return L_6;
	}
}
// System.Void System.Data.Common.StringStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStorage_Copy_m2FC31F0E784EE6298A04D660BCD72A5DAD8ED98E (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____values_14;
		int32_t L_3 = ___recordNo10;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_5);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)L_5);
		return;
	}
}
// System.Object System.Data.Common.StringStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStorage_Get_m20288AA6010E01527FF2E3773D0A44F80F18EFD1 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___recordNo0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____values_14;
		int32_t L_1 = ___recordNo0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_5 = V_0;
		return L_5;
	}

IL_000e:
	{
		RuntimeObject* L_6 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		return L_6;
	}
}
// System.Int32 System.Data.Common.StringStorage::GetStringLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringStorage_GetStringLength_m3D6F87B7581A9AC79937B30959336DA79F784481 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (L_4)
		{
			goto IL_000e;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		return L_6;
	}
}
// System.Boolean System.Data.Common.StringStorage::IsNull(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringStorage_IsNull_mAE9BBC8B0CE05D5E317026D8ECD0000557771004 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____values_14;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return (bool)((((RuntimeObject*)(String_t*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Void System.Data.Common.StringStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStorage_Set_mAD6D9253CC059487F38D9E53F5DF1FC18FCCC896 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0013;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, NULL);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (String_t*)NULL);
		return;
	}

IL_0013:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->____values_14;
		int32_t L_5 = ___record0;
		RuntimeObject* L_6 = ___value1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_7);
		return;
	}
}
// System.Void System.Data.Common.StringStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStorage_SetCapacity_mEB4BAF562AADAABF339D9762CF60BC7ADE49EE62 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____values_14;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->____values_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->____values_14;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_0;
		__this->____values_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)L_8);
		return;
	}
}
// System.Object System.Data.Common.StringStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStorage_ConvertXmlToObject_mC6B637D705BE5EC9CA7E4B049F15A5D6E1056347 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___s0;
		return L_0;
	}
}
// System.String System.Data.Common.StringStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringStorage_ConvertObjectToXml_mF4CE9753BDD89118B4307EF8D11FF7B93E132BB6 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Data.Common.StringStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringStorage_GetEmptyStorage_m8AD1A30B615579B9E00BD1227A471190489B2D17 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.StringStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStorage_CopyValue_m968284CF664BD99774C12EDC1FCE884B1090A05E (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->____values_14;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
		ArrayElementTypeCheck (((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), L_5);
		(((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (String_t*)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.StringStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringStorage_SetStorage_m62E3585282B27A5851768E5C555929D39EAE2524 (StringStorage_t5623F56E3F6C0F837E59522606FA5E4A1A63A0AC* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_14 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_14), (void*)((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)Castclass((RuntimeObject*)L_0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)));
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
// System.Void System.Data.Common.TimeSpanStorage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage__ctor_m6E245B33CB7D28B9DECA3F7560D9BCCF1FB9B7AE (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = L_3;
		RuntimeObject* L_5 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, ((int32_t)17), NULL);
		return;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_8;
	memset((&V_8), 0, sizeof(V_8));
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	double V_18 = 0.0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_19;
	memset((&V_19), 0, sizeof(V_19));
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	double V_22 = 0.0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_013b_1;
				}
				case 1:
				{
					goto IL_01b4_1;
				}
				case 2:
				{
					goto IL_002f_1;
				}
				case 3:
				{
					goto IL_0098_1;
				}
				case 4:
				{
					goto IL_0106_1;
				}
				case 5:
				{
					goto IL_012c_1;
				}
				case 6:
				{
					goto IL_0356_1;
				}
				case 7:
				{
					goto IL_0242_1;
				}
			}
		}
		{
			goto IL_0356_1;
		}

IL_002f_1:
		{
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___MaxValue_20;
			V_1 = L_1;
			V_3 = 0;
			goto IL_0075_1;
		}

IL_0039_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			int32_t L_3 = V_3;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_4 = L_5;
			int32_t L_6 = V_4;
			bool L_7;
			L_7 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_6);
			if (L_7)
			{
				goto IL_0071_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_8 = __this->____values_15;
			int32_t L_9 = V_4;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12 = V_1;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			int32_t L_13;
			L_13 = TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE(L_11, L_12, NULL);
			if ((((int32_t)L_13) < ((int32_t)0)))
			{
				goto IL_0061_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_14 = V_1;
			G_B8_0 = L_14;
			goto IL_006e_1;
		}

IL_0061_1:
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_15 = __this->____values_15;
			int32_t L_16 = V_4;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			G_B8_0 = L_18;
		}

IL_006e_1:
		{
			V_1 = G_B8_0;
			V_0 = (bool)1;
		}

IL_0071_1:
		{
			int32_t L_19 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		}

IL_0075_1:
		{
			int32_t L_20 = V_3;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___records0;
			NullCheck(L_21);
			if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
			{
				goto IL_0039_1;
			}
		}
		{
			bool L_22 = V_0;
			if (!L_22)
			{
				goto IL_008b_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_23 = V_1;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_24 = L_23;
			RuntimeObject* L_25 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_24);
			V_5 = L_25;
			goto IL_0376;
		}

IL_008b_1:
		{
			RuntimeObject* L_26 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_5 = L_26;
			goto IL_0376;
		}

IL_0098_1:
		{
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_27 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___MinValue_21;
			V_2 = L_27;
			V_6 = 0;
			goto IL_00e2_1;
		}

IL_00a3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ___records0;
			int32_t L_29 = V_6;
			NullCheck(L_28);
			int32_t L_30 = L_29;
			int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
			V_7 = L_31;
			int32_t L_32 = V_7;
			bool L_33;
			L_33 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_32);
			if (L_33)
			{
				goto IL_00dc_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_34 = __this->____values_15;
			int32_t L_35 = V_7;
			NullCheck(L_34);
			int32_t L_36 = L_35;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_38 = V_2;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			int32_t L_39;
			L_39 = TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE(L_37, L_38, NULL);
			if ((((int32_t)L_39) >= ((int32_t)0)))
			{
				goto IL_00cc_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_40 = V_2;
			G_B19_0 = L_40;
			goto IL_00d9_1;
		}

IL_00cc_1:
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_41 = __this->____values_15;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = L_42;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
			G_B19_0 = L_44;
		}

IL_00d9_1:
		{
			V_2 = G_B19_0;
			V_0 = (bool)1;
		}

IL_00dc_1:
		{
			int32_t L_45 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		}

IL_00e2_1:
		{
			int32_t L_46 = V_6;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ___records0;
			NullCheck(L_47);
			if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
			{
				goto IL_00a3_1;
			}
		}
		{
			bool L_48 = V_0;
			if (!L_48)
			{
				goto IL_00f9_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_49 = V_2;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_50 = L_49;
			RuntimeObject* L_51 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_50);
			V_5 = L_51;
			goto IL_0376;
		}

IL_00f9_1:
		{
			RuntimeObject* L_52 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_5 = L_52;
			goto IL_0376;
		}

IL_0106_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ___records0;
			NullCheck(L_53);
			if (!(((RuntimeArray*)L_53)->max_length))
			{
				goto IL_0124_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_54 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___records0;
			NullCheck(L_55);
			int32_t L_56 = 0;
			int32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
			NullCheck(L_54);
			int32_t L_58 = L_57;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_59 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_60 = L_59;
			RuntimeObject* L_61 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_60);
			V_5 = L_61;
			goto IL_0376;
		}

IL_0124_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_012c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___records0;
			int32_t L_63 = ___kind1;
			RuntimeObject* L_64;
			L_64 = DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2(__this, L_62, L_63, NULL);
			V_5 = L_64;
			goto IL_0376;
		}

IL_013b_1:
		{
			il2cpp_codegen_initobj((&V_8), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___records0;
			V_9 = L_65;
			V_10 = 0;
			goto IL_0184_1;
		}

IL_014b_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_9;
			int32_t L_67 = V_10;
			NullCheck(L_66);
			int32_t L_68 = L_67;
			int32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
			V_11 = L_69;
			int32_t L_70 = V_11;
			bool L_71;
			L_71 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_70);
			if (L_71)
			{
				goto IL_017e_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_72 = V_8;
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_73 = __this->____values_15;
			int32_t L_74 = V_11;
			NullCheck(L_73);
			int64_t L_75;
			L_75 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_76;
			L_76 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_75, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_77;
			L_77 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_72, L_76, NULL);
			V_8 = L_77;
			V_0 = (bool)1;
		}

IL_017e_1:
		{
			int32_t L_78 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		}

IL_0184_1:
		{
			int32_t L_79 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_9;
			NullCheck(L_80);
			if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
			{
				goto IL_014b_1;
			}
		}
		{
			bool L_81 = V_0;
			if (!L_81)
			{
				goto IL_01ac_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_82 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_83;
			L_83 = Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline(L_82, NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			int64_t L_84;
			L_84 = Decimal_op_Explicit_m0E6416BBDAC3D0939FCF0279F793C6D574036B54(L_83, NULL);
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_85;
			L_85 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_84, NULL);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_86 = L_85;
			RuntimeObject* L_87 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_86);
			V_5 = L_87;
			goto IL_0376;
		}

IL_01ac_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_01b4_1:
		{
			il2cpp_codegen_initobj((&V_12), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			V_13 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___records0;
			V_9 = L_88;
			V_10 = 0;
			goto IL_0204_1;
		}

IL_01c7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_9;
			int32_t L_90 = V_10;
			NullCheck(L_89);
			int32_t L_91 = L_90;
			int32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
			V_14 = L_92;
			int32_t L_93 = V_14;
			bool L_94;
			L_94 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_93);
			if (L_94)
			{
				goto IL_01fe_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_95 = V_12;
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_96 = __this->____values_15;
			int32_t L_97 = V_14;
			NullCheck(L_96);
			int64_t L_98;
			L_98 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_97))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_99;
			L_99 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_98, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_100;
			L_100 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_95, L_99, NULL);
			V_12 = L_100;
			int32_t L_101 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		}

IL_01fe_1:
		{
			int32_t L_102 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_102, 1));
		}

IL_0204_1:
		{
			int32_t L_103 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_9;
			NullCheck(L_104);
			if ((((int32_t)L_103) < ((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length)))))
			{
				goto IL_01c7_1;
			}
		}
		{
			int32_t L_105 = V_13;
			if ((((int32_t)L_105) <= ((int32_t)0)))
			{
				goto IL_023a_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_106 = V_12;
			int32_t L_107 = V_13;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_108;
			L_108 = Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177(L_107, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_109;
			L_109 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_106, L_108, NULL);
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_110;
			L_110 = Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline(L_109, NULL);
			int64_t L_111;
			L_111 = Decimal_op_Explicit_m0E6416BBDAC3D0939FCF0279F793C6D574036B54(L_110, NULL);
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_112;
			L_112 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_111, NULL);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_113 = L_112;
			RuntimeObject* L_114 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_113);
			V_5 = L_114;
			goto IL_0376;
		}

IL_023a_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_0242_1:
		{
			V_15 = 0;
			il2cpp_codegen_initobj((&V_16), sizeof(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = ___records0;
			V_9 = L_115;
			V_10 = 0;
			goto IL_0292_1;
		}

IL_0255_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_9;
			int32_t L_117 = V_10;
			NullCheck(L_116);
			int32_t L_118 = L_117;
			int32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
			V_17 = L_119;
			int32_t L_120 = V_17;
			bool L_121;
			L_121 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_120);
			if (L_121)
			{
				goto IL_028c_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_122 = V_16;
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_123 = __this->____values_15;
			int32_t L_124 = V_17;
			NullCheck(L_123);
			int64_t L_125;
			L_125 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_126;
			L_126 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_125, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_127;
			L_127 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_122, L_126, NULL);
			V_16 = L_127;
			int32_t L_128 = V_15;
			V_15 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		}

IL_028c_1:
		{
			int32_t L_129 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		}

IL_0292_1:
		{
			int32_t L_130 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = V_9;
			NullCheck(L_131);
			if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
			{
				goto IL_0255_1;
			}
		}
		{
			int32_t L_132 = V_15;
			if ((((int32_t)L_132) <= ((int32_t)1)))
			{
				goto IL_0351_1;
			}
		}
		{
			V_18 = (0.0);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_133 = V_16;
			int32_t L_134 = V_15;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_135;
			L_135 = Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177(L_134, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_136;
			L_136 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_133, L_135, NULL);
			V_19 = L_136;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___records0;
			V_9 = L_137;
			V_10 = 0;
			goto IL_030c_1;
		}

IL_02c5_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_9;
			int32_t L_139 = V_10;
			NullCheck(L_138);
			int32_t L_140 = L_139;
			int32_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
			V_21 = L_141;
			int32_t L_142 = V_21;
			bool L_143;
			L_143 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_142);
			if (L_143)
			{
				goto IL_0306_1;
			}
		}
		{
			TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_144 = __this->____values_15;
			int32_t L_145 = V_21;
			NullCheck(L_144);
			int64_t L_146;
			L_146 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_145))), NULL);
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_147;
			L_147 = Decimal_op_Implicit_m8F9A38760D01B23E6DFF77EA760CCE5111F3656D(L_146, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_148 = V_19;
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_149;
			L_149 = Decimal_op_Subtraction_mBDD5FAB14E0E9FA655A4C32B72C39E6BF947DF81(L_147, L_148, NULL);
			double L_150;
			L_150 = Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0(L_149, NULL);
			V_22 = ((double)L_150);
			double L_151 = V_18;
			double L_152 = V_22;
			double L_153 = V_22;
			V_18 = ((double)il2cpp_codegen_add(L_151, ((double)il2cpp_codegen_multiply(L_152, L_153))));
		}

IL_0306_1:
		{
			int32_t L_154 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add(L_154, 1));
		}

IL_030c_1:
		{
			int32_t L_155 = V_10;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = V_9;
			NullCheck(L_156);
			if ((((int32_t)L_155) < ((int32_t)((int32_t)(((RuntimeArray*)L_156)->max_length)))))
			{
				goto IL_02c5_1;
			}
		}
		{
			double L_157 = V_18;
			int32_t L_158 = V_15;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_159;
			L_159 = sqrt(((double)(L_157/((double)((int32_t)il2cpp_codegen_subtract(L_158, 1))))));
			double L_160;
			L_160 = bankers_round(L_159);
			V_20 = il2cpp_codegen_cast_floating_point<uint64_t, int64_t, double>(L_160);
			uint64_t L_161 = V_20;
			if ((!(((uint64_t)L_161) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_0341_1;
			}
		}
		{
			V_20 = ((int64_t)(std::numeric_limits<int64_t>::max)());
		}

IL_0341_1:
		{
			uint64_t L_162 = V_20;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_163;
			L_163 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_162, NULL);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_164 = L_163;
			RuntimeObject* L_165 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_164);
			V_5 = L_165;
			goto IL_0376;
		}

IL_0351_1:
		{
			V_5 = NULL;
			goto IL_0376;
		}

IL_0356_1:
		{
			goto IL_0369;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0358;
		}
		throw e;
	}

CATCH_0358:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_166 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_167;
		L_167 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_166, NULL);
		Exception_t* L_168;
		L_168 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_167, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_168, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0369:
	{
		int32_t L_169 = ___kind1;
		Type_t* L_170 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_171;
		L_171 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_169, L_170, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_171, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpanStorage_Aggregate_m6D1CAACF0A1EE0578178DE6DFC4073A66D8B4613_RuntimeMethod_var)));
	}

IL_0376:
	{
		RuntimeObject* L_172 = V_5;
		return L_172;
	}
}
// System.Int32 System.Data.Common.TimeSpanStorage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpanStorage_Compare_mB65C20AB60737F9AC6B9F7176853105E10E2D3D2 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_0 = __this->____values_15;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_0034;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0042;
		}
	}

IL_0034:
	{
		int32_t L_14 = ___recordNo10;
		int32_t L_15 = ___recordNo21;
		int32_t L_16;
		L_16 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_14, L_15, NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if (!L_17)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_18 = V_2;
		return L_18;
	}

IL_0042:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_19 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = TimeSpan_Compare_m93842825875A7C79D2A8A9E16D522AF01673CBEE(L_19, L_20, NULL);
		return L_21;
	}
}
// System.Int32 System.Data.Common.TimeSpanStorage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpanStorage_CompareValueTo_mE07DA84B0DD3AD5F39F7C6AB3F97155617A27DC0 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___recordNo0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = TimeSpan_op_Equality_m951689F806957B14F237DAFCEE4CB322799A723E(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_11 = ___recordNo0;
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_11);
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		return (-1);
	}

IL_003b:
	{
		RuntimeObject* L_13 = ___value1;
		int32_t L_14;
		L_14 = TimeSpan_CompareTo_m85916E1968FD4309A3CFCBCBC0E3DF2E9AEB0FD3((&V_0), ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_13, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)))), NULL);
		return L_14;
	}
}
// System.TimeSpan System.Data.Common.TimeSpanStorage::ConvertToTimeSpan(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = TimeSpan_Parse_m4686E70A0FA2425C083A58B73A025D36F738AD35(((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_7;
	}

IL_0025:
	{
		Type_t* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_12 = ___value0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_13;
		memset((&L_13), 0, sizeof(L_13));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_13), ((int64_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))), /*hidden argument*/NULL);
		return L_13;
	}

IL_0044:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_18 = ___value0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_19;
		memset((&L_19), 0, sizeof(L_19));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_19), ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_18, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_19;
	}

IL_0062:
	{
		RuntimeObject* L_20 = ___value0;
		return ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_20, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))));
	}
}
// System.Object System.Data.Common.TimeSpanStorage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_ConvertValue_m371E0867393CE871858E89E2A8346B10306546E1 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33(L_3, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = L_4;
		RuntimeObject* L_6 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_5);
		___value0 = L_6;
		goto IL_0023;
	}

IL_001b:
	{
		RuntimeObject* L_7 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value0 = L_7;
	}

IL_0023:
	{
		RuntimeObject* L_8 = ___value0;
		return L_8;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_Copy_m5CF7E545BC3F5FAE97FFA058298DFA67B6BE365C (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		int32_t L_1 = ___recordNo21;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		int32_t L_3 = ___recordNo21;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_7);
		return;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_Get_mA4C1E251EFDC2ED0B7F16D6B5B62F2C5AF7C81A0 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_0 = __this->____values_15;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = TimeSpan_op_Inequality_m2248419A8BCC8744CADE25174238B24AE34F17DB(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8 = L_7;
		RuntimeObject* L_9 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_0021:
	{
		int32_t L_10 = ___record0;
		RuntimeObject* L_11;
		L_11 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_10, NULL);
		return L_11;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_Set_m2A59D4579C7E1FF4F703CED8205FB45AEEC5BC70 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0023;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = ((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_4);
		int32_t L_5 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_0023:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_6 = __this->____values_15;
		int32_t L_7 = ___record0;
		RuntimeObject* L_8 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
		L_9 = TimeSpanStorage_ConvertToTimeSpan_m7D2DC73F618C0558767AC1E2598F34E7E1009C33(L_8, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_9);
		int32_t L_10 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_10, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_SetCapacity_mD6215852BEEA93A22ECEAA0CE8990FC9C5FCB852 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_3 = __this->____values_15;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___capacity0;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_ConvertXmlToObject_m56D33704050D2030F4E83147509A7EB938388896 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = XmlConvert_ToTimeSpan_mDF57053BCC75597B17BD744CFC2E3777006782C2(L_0, NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = L_1;
		RuntimeObject* L_3 = Box(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.TimeSpanStorage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpanStorage_ConvertObjectToXml_mC07E48DFE1F5EFCA38ED16BA6342F38969FB4AE6 (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_mEF060F018017514326BC5A2127ABEAC96BE8A14B(((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.TimeSpanStorage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeSpanStorage_GetEmptyStorage_mCFD0F4BC4EF8056556FA4FA69DF13B57C501015A (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_1 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_CopyValue_m987E2FACE30B0824832AF389FF69D217B17F1BBC (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var)));
		(((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Data.Common.DataStorage::IsNull(System.Int32) */, __this, L_8);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, L_9, NULL);
		return;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage_SetStorage_mFEFD3C439BCF54396892B64023A53F93BF7A74AC (TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_15 = ((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)Castclass((RuntimeObject*)L_0, TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___nullbits1;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void System.Data.Common.TimeSpanStorage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanStorage__cctor_mBA1043B22579B9313D915B17B1EFD8C1911633EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		((TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpanStorage_tEB2C3069E8F22098F48B807F4CDDCDD5322E4F14_il2cpp_TypeInfo_var))->___s_defaultValue_14 = L_0;
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
// System.Void System.Data.Common.UInt16Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage__ctor_mB265F46EB7A06637FAAB93762AC4C7988BEEFD5C (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint16_t L_3 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint16_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, 8, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt16Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	uint16_t V_8 = 0;
	uint16_t V_9 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0089_1;
				}
				case 2:
				{
					goto IL_01e7_1;
				}
				case 3:
				{
					goto IL_0242_1;
				}
				case 4:
				{
					goto IL_0293_1;
				}
				case 5:
				{
					goto IL_02af_1;
				}
				case 6:
				{
					goto IL_00ed_1;
				}
				case 7:
				{
					goto IL_00ed_1;
				}
			}
		}
		{
			goto IL_02e1_1;
		}

IL_002f_1:
		{
			uint16_t L_1 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_1 = ((int64_t)(uint64_t)L_1);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0064_1;
		}

IL_003e_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_7, NULL);
			if (!L_8)
			{
				goto IL_005e_1;
			}
		}
		{
			uint64_t L_9 = V_1;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_10 = __this->____values_15;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((uint64_t)L_9 > kIl2CppUInt64Max - (uint64_t)((int64_t)(uint64_t)L_13))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)(uint64_t)L_13)));
			V_0 = (bool)1;
		}

IL_005e_1:
		{
			int32_t L_14 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0064_1:
		{
			int32_t L_15 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_10;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003e_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_007c_1;
			}
		}
		{
			uint64_t L_18 = V_1;
			uint64_t L_19 = L_18;
			RuntimeObject* L_20 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_19);
			V_13 = L_20;
			goto IL_0301;
		}

IL_007c_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_21;
			goto IL_0301;
		}

IL_0089_1:
		{
			uint16_t L_22 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_2 = ((int64_t)(uint64_t)L_22);
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___records0;
			V_10 = L_23;
			V_11 = 0;
			goto IL_00c4_1;
		}

IL_009a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_10;
			int32_t L_25 = V_11;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			V_14 = L_27;
			int32_t L_28 = V_14;
			bool L_29;
			L_29 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_28, NULL);
			if (!L_29)
			{
				goto IL_00be_1;
			}
		}
		{
			int64_t L_30 = V_2;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_31 = __this->____values_15;
			int32_t L_32 = V_14;
			NullCheck(L_31);
			int32_t L_33 = L_32;
			uint16_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			if (il2cpp_codegen_check_add_overflow((int64_t)L_30, (int64_t)((int64_t)(uint64_t)L_34)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
			V_2 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)(uint64_t)L_34)));
			int32_t L_35 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			V_0 = (bool)1;
		}

IL_00be_1:
		{
			int32_t L_36 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00c4_1:
		{
			int32_t L_37 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_10;
			NullCheck(L_38);
			if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
			{
				goto IL_009a_1;
			}
		}
		{
			bool L_39 = V_0;
			if (!L_39)
			{
				goto IL_00e0_1;
			}
		}
		{
			int64_t L_40 = V_2;
			int32_t L_41 = V_3;
			if ((int64_t)(((int64_t)(L_40/((int64_t)L_41)))) > 65535LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var);
			uint16_t L_42 = ((uint16_t)((int64_t)(L_40/((int64_t)L_41))));
			RuntimeObject* L_43 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_42);
			V_13 = L_43;
			goto IL_0301;
		}

IL_00e0_1:
		{
			RuntimeObject* L_44 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_44;
			goto IL_0301;
		}

IL_00ed_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___records0;
			V_10 = L_45;
			V_11 = 0;
			goto IL_015f_1;
		}

IL_0119_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_10;
			int32_t L_47 = V_11;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			V_15 = L_49;
			int32_t L_50 = V_15;
			bool L_51;
			L_51 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_50, NULL);
			if (!L_51)
			{
				goto IL_0159_1;
			}
		}
		{
			double L_52 = V_6;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_53 = __this->____values_15;
			int32_t L_54 = V_15;
			NullCheck(L_53);
			int32_t L_55 = L_54;
			uint16_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			V_6 = ((double)il2cpp_codegen_add(L_52, ((double)L_56)));
			double L_57 = V_7;
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_58 = __this->____values_15;
			int32_t L_59 = V_15;
			NullCheck(L_58);
			int32_t L_60 = L_59;
			uint16_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_62 = __this->____values_15;
			int32_t L_63 = V_15;
			NullCheck(L_62);
			int32_t L_64 = L_63;
			uint16_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			V_7 = ((double)il2cpp_codegen_add(L_57, ((double)il2cpp_codegen_multiply(((double)L_61), ((double)L_65)))));
			int32_t L_66 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		}

IL_0159_1:
		{
			int32_t L_67 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		}

IL_015f_1:
		{
			int32_t L_68 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_10;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
			{
				goto IL_0119_1;
			}
		}
		{
			int32_t L_70 = V_4;
			if ((((int32_t)L_70) <= ((int32_t)1)))
			{
				goto IL_01da_1;
			}
		}
		{
			int32_t L_71 = V_4;
			double L_72 = V_7;
			double L_73 = V_6;
			double L_74 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_71), L_72)), ((double)il2cpp_codegen_multiply(L_73, L_74))));
			double L_75 = V_5;
			double L_76 = V_6;
			double L_77 = V_6;
			if ((((double)((double)(L_75/((double)il2cpp_codegen_multiply(L_76, L_77))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_019a_1;
			}
		}
		{
			double L_78 = V_5;
			if ((!(((double)L_78) < ((double)(0.0)))))
			{
				goto IL_01a7_1;
			}
		}

IL_019a_1:
		{
			V_5 = (0.0);
			goto IL_01b4_1;
		}

IL_01a7_1:
		{
			double L_79 = V_5;
			int32_t L_80 = V_4;
			int32_t L_81 = V_4;
			V_5 = ((double)(L_79/((double)((int32_t)il2cpp_codegen_multiply(L_80, ((int32_t)il2cpp_codegen_subtract(L_81, 1)))))));
		}

IL_01b4_1:
		{
			int32_t L_82 = ___kind1;
			if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01cc_1;
			}
		}
		{
			double L_83 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_84;
			L_84 = sqrt(L_83);
			double L_85 = L_84;
			RuntimeObject* L_86 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_85);
			V_13 = L_86;
			goto IL_0301;
		}

IL_01cc_1:
		{
			double L_87 = V_5;
			double L_88 = L_87;
			RuntimeObject* L_89 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_88);
			V_13 = L_89;
			goto IL_0301;
		}

IL_01da_1:
		{
			RuntimeObject* L_90 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_90;
			goto IL_0301;
		}

IL_01e7_1:
		{
			V_8 = (uint16_t)((int32_t)65535);
			V_16 = 0;
			goto IL_021d_1;
		}

IL_01f3_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = ___records0;
			int32_t L_92 = V_16;
			NullCheck(L_91);
			int32_t L_93 = L_92;
			int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
			V_17 = L_94;
			int32_t L_95 = V_17;
			bool L_96;
			L_96 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_95, NULL);
			if (!L_96)
			{
				goto IL_0217_1;
			}
		}
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_97 = __this->____values_15;
			int32_t L_98 = V_17;
			NullCheck(L_97);
			int32_t L_99 = L_98;
			uint16_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
			uint16_t L_101 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint16_t L_102;
			L_102 = Math_Min_mA7BFF48067FBED606414C9937B00BE496B2696D7(L_100, L_101, NULL);
			V_8 = L_102;
			V_0 = (bool)1;
		}

IL_0217_1:
		{
			int32_t L_103 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		}

IL_021d_1:
		{
			int32_t L_104 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = ___records0;
			NullCheck(L_105);
			if ((((int32_t)L_104) < ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
			{
				goto IL_01f3_1;
			}
		}
		{
			bool L_106 = V_0;
			if (!L_106)
			{
				goto IL_0235_1;
			}
		}
		{
			uint16_t L_107 = V_8;
			uint16_t L_108 = L_107;
			RuntimeObject* L_109 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_108);
			V_13 = L_109;
			goto IL_0301;
		}

IL_0235_1:
		{
			RuntimeObject* L_110 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_110;
			goto IL_0301;
		}

IL_0242_1:
		{
			V_9 = (uint16_t)0;
			V_18 = 0;
			goto IL_0274_1;
		}

IL_024a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___records0;
			int32_t L_112 = V_18;
			NullCheck(L_111);
			int32_t L_113 = L_112;
			int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
			V_19 = L_114;
			int32_t L_115 = V_19;
			bool L_116;
			L_116 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_115, NULL);
			if (!L_116)
			{
				goto IL_026e_1;
			}
		}
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_117 = __this->____values_15;
			int32_t L_118 = V_19;
			NullCheck(L_117);
			int32_t L_119 = L_118;
			uint16_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			uint16_t L_121 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint16_t L_122;
			L_122 = Math_Max_m670CC45E68892199F0ED53A131DAB78A953389BB(L_120, L_121, NULL);
			V_9 = L_122;
			V_0 = (bool)1;
		}

IL_026e_1:
		{
			int32_t L_123 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		}

IL_0274_1:
		{
			int32_t L_124 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = ___records0;
			NullCheck(L_125);
			if ((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length)))))
			{
				goto IL_024a_1;
			}
		}
		{
			bool L_126 = V_0;
			if (!L_126)
			{
				goto IL_0289_1;
			}
		}
		{
			uint16_t L_127 = V_9;
			uint16_t L_128 = L_127;
			RuntimeObject* L_129 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_128);
			V_13 = L_129;
			goto IL_0301;
		}

IL_0289_1:
		{
			RuntimeObject* L_130 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_130;
			goto IL_0301;
		}

IL_0293_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___records0;
			NullCheck(L_131);
			if (!(((RuntimeArray*)L_131)->max_length))
			{
				goto IL_02aa_1;
			}
		}
		{
			UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_132 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___records0;
			NullCheck(L_133);
			int32_t L_134 = 0;
			int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
			NullCheck(L_132);
			int32_t L_136 = L_135;
			uint16_t L_137 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			uint16_t L_138 = L_137;
			RuntimeObject* L_139 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_138);
			V_13 = L_139;
			goto IL_0301;
		}

IL_02aa_1:
		{
			V_13 = NULL;
			goto IL_0301;
		}

IL_02af_1:
		{
			V_4 = 0;
			V_20 = 0;
			goto IL_02cf_1;
		}

IL_02b7_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___records0;
			int32_t L_141 = V_20;
			NullCheck(L_140);
			int32_t L_142 = L_141;
			int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			bool L_144;
			L_144 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_143, NULL);
			if (!L_144)
			{
				goto IL_02c9_1;
			}
		}
		{
			int32_t L_145 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		}

IL_02c9_1:
		{
			int32_t L_146 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		}

IL_02cf_1:
		{
			int32_t L_147 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ___records0;
			NullCheck(L_148);
			if ((((int32_t)L_147) < ((int32_t)((int32_t)(((RuntimeArray*)L_148)->max_length)))))
			{
				goto IL_02b7_1;
			}
		}
		{
			int32_t L_149 = V_4;
			int32_t L_150 = L_149;
			RuntimeObject* L_151 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_150);
			V_13 = L_151;
			goto IL_0301;
		}

IL_02e1_1:
		{
			goto IL_02f4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e3;
		}
		throw e;
	}

CATCH_02e3:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		Exception_t* L_154;
		L_154 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02f4:
	{
		int32_t L_155 = ___kind1;
		Type_t* L_156 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_157;
		L_157 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_155, L_156, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_157, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt16Storage_Aggregate_m9D5350772E070327A6EA6FFE0FFD28164D1AD846_RuntimeMethod_var)));
	}

IL_0301:
	{
		RuntimeObject* L_158 = V_13;
		return L_158;
	}
}
// System.Int32 System.Data.Common.UInt16Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16Storage_Compare_m7466F8EDCD2D1CE031604F73DD6DE91854B710E1 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____values_15;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint16_t L_8 = V_0;
		uint16_t L_9 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		uint16_t L_10 = V_1;
		uint16_t L_11 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0030;
		}
	}

IL_0022:
	{
		int32_t L_12 = ___recordNo10;
		int32_t L_13 = ___recordNo21;
		int32_t L_14;
		L_14 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_12, L_13, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_0030:
	{
		uint16_t L_17 = V_0;
		uint16_t L_18 = V_1;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18));
	}
}
// System.Int32 System.Data.Common.UInt16Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16Storage_CompareValueTo_m10106943B4636F0B83BEF9FA0C11621D36FCF2F1 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___recordNo0;
		bool L_3;
		L_3 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint16_t L_8 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint16_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_10 = ___recordNo0;
		bool L_11;
		L_11 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___value1;
		int32_t L_13;
		L_13 = UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845((&V_0), ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_12, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		return L_13;
	}
}
// System.Object System.Data.Common.UInt16Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_ConvertValue_m0E51B305A22AB4DBB31D6536BDD08B6D97791FB6 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint16_t L_5;
		L_5 = InterfaceFuncInvoker1< uint16_t, RuntimeObject* >::Invoke(6 /* System.UInt16 System.IConvertible::ToUInt16(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_6);
		___value0 = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value0 = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___value0;
		return L_9;
	}
}
// System.Void System.Data.Common.UInt16Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_Copy_m597B6CBE7CD554A4CCFF220C65158FEF2CED449C (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		int32_t L_1 = ___recordNo21;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		int32_t L_3 = ___recordNo21;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)L_7);
		return;
	}
}
// System.Object System.Data.Common.UInt16Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_Get_mE4C31263841B0DF601979B68DAB5664EF92AC2FE (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____values_15;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint16_t L_4 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_5;
		L_5 = UInt16_Equals_m5673358CCDB7D6E74A6A13C50FC9151F4DD66089((&V_0), L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		uint16_t L_6 = V_0;
		uint16_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = ___record0;
		RuntimeObject* L_10;
		L_10 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Data.Common.UInt16Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_Set_mD523C7C0D73D333CD3BADB5D651100726ADE54A6 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		uint16_t L_4 = ((UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_StaticFields*)il2cpp_codegen_static_fields_for(UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)L_4);
		int32_t L_5 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____values_15;
		int32_t L_7 = ___record0;
		RuntimeObject* L_8 = ___value1;
		RuntimeObject* L_9;
		L_9 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint16_t L_10;
		L_10 = InterfaceFuncInvoker1< uint16_t, RuntimeObject* >::Invoke(6 /* System.UInt16 System.IConvertible::ToUInt16(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)L_10);
		int32_t L_11 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_11, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt16Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_SetCapacity_mBE6353467D969AF49B2101D43CAD4CF04792DAAC (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = __this->____values_15;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___capacity0;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt16Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_ConvertXmlToObject_m05135D726C21FE0351ACF89E61A97AB9C18F40A7 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = XmlConvert_ToUInt16_m724BC6C22738955F6FDE18ECF99FB00DBB68DBDE(L_0, NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.UInt16Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16Storage_ConvertObjectToXml_m8042F9DA2C481FD061F16FCB70BAD61AB0B5E59B (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m15222157CD861187A9C674677C6CCCF34DCABCB7(((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_0, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.UInt16Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt16Storage_GetEmptyStorage_m1650AF396733BC1EB0AE39E69A2209A572759CA3 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.UInt16Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_CopyValue_mB7F352A0AB795D12A52DB2FFBC53FE4FEFF0CAAF (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var)));
		(((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint16_t)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_8, NULL);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt16Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt16Storage_SetStorage_mAC549F2B7C36E8022B3369C7BD7DFE49A554C4D7 (UInt16Storage_t7C13FE69DB3D901E0F3A122269F4030DE5FFE6F1* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_15 = ((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)Castclass((RuntimeObject*)L_0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___nullbits1;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
// System.Void System.Data.Common.UInt32Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage__ctor_m55769CF4B9B7C1D4A9A381F249C60AED4375BDD5 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint32_t L_3 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, ((int32_t)10), NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt32Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0089_1;
				}
				case 2:
				{
					goto IL_01ea_1;
				}
				case 3:
				{
					goto IL_0241_1;
				}
				case 4:
				{
					goto IL_0292_1;
				}
				case 5:
				{
					goto IL_02ae_1;
				}
				case 6:
				{
					goto IL_00ed_1;
				}
				case 7:
				{
					goto IL_00ed_1;
				}
			}
		}
		{
			goto IL_02e0_1;
		}

IL_002f_1:
		{
			uint32_t L_1 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_1 = ((int64_t)(uint64_t)L_1);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0064_1;
		}

IL_003e_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_7, NULL);
			if (!L_8)
			{
				goto IL_005e_1;
			}
		}
		{
			uint64_t L_9 = V_1;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____values_15;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((uint64_t)L_9 > kIl2CppUInt64Max - (uint64_t)((int64_t)(uint64_t)L_13))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)(uint64_t)L_13)));
			V_0 = (bool)1;
		}

IL_005e_1:
		{
			int32_t L_14 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0064_1:
		{
			int32_t L_15 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_10;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003e_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_007c_1;
			}
		}
		{
			uint64_t L_18 = V_1;
			uint64_t L_19 = L_18;
			RuntimeObject* L_20 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_19);
			V_13 = L_20;
			goto IL_0300;
		}

IL_007c_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_21;
			goto IL_0300;
		}

IL_0089_1:
		{
			uint32_t L_22 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_2 = ((int64_t)(uint64_t)L_22);
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___records0;
			V_10 = L_23;
			V_11 = 0;
			goto IL_00c4_1;
		}

IL_009a_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_10;
			int32_t L_25 = V_11;
			NullCheck(L_24);
			int32_t L_26 = L_25;
			int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
			V_14 = L_27;
			int32_t L_28 = V_14;
			bool L_29;
			L_29 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_28, NULL);
			if (!L_29)
			{
				goto IL_00be_1;
			}
		}
		{
			int64_t L_30 = V_2;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____values_15;
			int32_t L_32 = V_14;
			NullCheck(L_31);
			int32_t L_33 = L_32;
			uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
			if (il2cpp_codegen_check_add_overflow((int64_t)L_30, (int64_t)((int64_t)(uint64_t)L_34)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
			V_2 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)(uint64_t)L_34)));
			int32_t L_35 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
			V_0 = (bool)1;
		}

IL_00be_1:
		{
			int32_t L_36 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		}

IL_00c4_1:
		{
			int32_t L_37 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_10;
			NullCheck(L_38);
			if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
			{
				goto IL_009a_1;
			}
		}
		{
			bool L_39 = V_0;
			if (!L_39)
			{
				goto IL_00e0_1;
			}
		}
		{
			int64_t L_40 = V_2;
			int32_t L_41 = V_3;
			if ((int64_t)(((int64_t)(L_40/((int64_t)L_41)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var);
			uint32_t L_42 = ((uint32_t)((int64_t)(L_40/((int64_t)L_41))));
			RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
			V_13 = L_43;
			goto IL_0300;
		}

IL_00e0_1:
		{
			RuntimeObject* L_44 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_44;
			goto IL_0300;
		}

IL_00ed_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___records0;
			V_10 = L_45;
			V_11 = 0;
			goto IL_0162_1;
		}

IL_0119_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_10;
			int32_t L_47 = V_11;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
			V_15 = L_49;
			int32_t L_50 = V_15;
			bool L_51;
			L_51 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_50, NULL);
			if (!L_51)
			{
				goto IL_015c_1;
			}
		}
		{
			double L_52 = V_6;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = __this->____values_15;
			int32_t L_54 = V_15;
			NullCheck(L_53);
			int32_t L_55 = L_54;
			uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
			V_6 = ((double)il2cpp_codegen_add(L_52, ((double)((double)(uint32_t)L_56))));
			double L_57 = V_7;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = __this->____values_15;
			int32_t L_59 = V_15;
			NullCheck(L_58);
			int32_t L_60 = L_59;
			uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = __this->____values_15;
			int32_t L_63 = V_15;
			NullCheck(L_62);
			int32_t L_64 = L_63;
			uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
			V_7 = ((double)il2cpp_codegen_add(L_57, ((double)il2cpp_codegen_multiply(((double)((double)(uint32_t)L_61)), ((double)((double)(uint32_t)L_65))))));
			int32_t L_66 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		}

IL_015c_1:
		{
			int32_t L_67 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		}

IL_0162_1:
		{
			int32_t L_68 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_10;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
			{
				goto IL_0119_1;
			}
		}
		{
			int32_t L_70 = V_4;
			if ((((int32_t)L_70) <= ((int32_t)1)))
			{
				goto IL_01dd_1;
			}
		}
		{
			int32_t L_71 = V_4;
			double L_72 = V_7;
			double L_73 = V_6;
			double L_74 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_71), L_72)), ((double)il2cpp_codegen_multiply(L_73, L_74))));
			double L_75 = V_5;
			double L_76 = V_6;
			double L_77 = V_6;
			if ((((double)((double)(L_75/((double)il2cpp_codegen_multiply(L_76, L_77))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_019d_1;
			}
		}
		{
			double L_78 = V_5;
			if ((!(((double)L_78) < ((double)(0.0)))))
			{
				goto IL_01aa_1;
			}
		}

IL_019d_1:
		{
			V_5 = (0.0);
			goto IL_01b7_1;
		}

IL_01aa_1:
		{
			double L_79 = V_5;
			int32_t L_80 = V_4;
			int32_t L_81 = V_4;
			V_5 = ((double)(L_79/((double)((int32_t)il2cpp_codegen_multiply(L_80, ((int32_t)il2cpp_codegen_subtract(L_81, 1)))))));
		}

IL_01b7_1:
		{
			int32_t L_82 = ___kind1;
			if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01cf_1;
			}
		}
		{
			double L_83 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_84;
			L_84 = sqrt(L_83);
			double L_85 = L_84;
			RuntimeObject* L_86 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_85);
			V_13 = L_86;
			goto IL_0300;
		}

IL_01cf_1:
		{
			double L_87 = V_5;
			double L_88 = L_87;
			RuntimeObject* L_89 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_88);
			V_13 = L_89;
			goto IL_0300;
		}

IL_01dd_1:
		{
			RuntimeObject* L_90 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_90;
			goto IL_0300;
		}

IL_01ea_1:
		{
			V_8 = (-1);
			V_16 = 0;
			goto IL_021c_1;
		}

IL_01f2_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = ___records0;
			int32_t L_92 = V_16;
			NullCheck(L_91);
			int32_t L_93 = L_92;
			int32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
			V_17 = L_94;
			int32_t L_95 = V_17;
			bool L_96;
			L_96 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_95, NULL);
			if (!L_96)
			{
				goto IL_0216_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = __this->____values_15;
			int32_t L_98 = V_17;
			NullCheck(L_97);
			int32_t L_99 = L_98;
			uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
			uint32_t L_101 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint32_t L_102;
			L_102 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(L_100, L_101, NULL);
			V_8 = L_102;
			V_0 = (bool)1;
		}

IL_0216_1:
		{
			int32_t L_103 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		}

IL_021c_1:
		{
			int32_t L_104 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = ___records0;
			NullCheck(L_105);
			if ((((int32_t)L_104) < ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
			{
				goto IL_01f2_1;
			}
		}
		{
			bool L_106 = V_0;
			if (!L_106)
			{
				goto IL_0234_1;
			}
		}
		{
			uint32_t L_107 = V_8;
			uint32_t L_108 = L_107;
			RuntimeObject* L_109 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_108);
			V_13 = L_109;
			goto IL_0300;
		}

IL_0234_1:
		{
			RuntimeObject* L_110 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_110;
			goto IL_0300;
		}

IL_0241_1:
		{
			V_9 = 0;
			V_18 = 0;
			goto IL_0273_1;
		}

IL_0249_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___records0;
			int32_t L_112 = V_18;
			NullCheck(L_111);
			int32_t L_113 = L_112;
			int32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
			V_19 = L_114;
			int32_t L_115 = V_19;
			bool L_116;
			L_116 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_115, NULL);
			if (!L_116)
			{
				goto IL_026d_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = __this->____values_15;
			int32_t L_118 = V_19;
			NullCheck(L_117);
			int32_t L_119 = L_118;
			uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			uint32_t L_121 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint32_t L_122;
			L_122 = Math_Max_m6612C5AE2D40056418765878E8787E4828D2ADD7(L_120, L_121, NULL);
			V_9 = L_122;
			V_0 = (bool)1;
		}

IL_026d_1:
		{
			int32_t L_123 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		}

IL_0273_1:
		{
			int32_t L_124 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = ___records0;
			NullCheck(L_125);
			if ((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length)))))
			{
				goto IL_0249_1;
			}
		}
		{
			bool L_126 = V_0;
			if (!L_126)
			{
				goto IL_0288_1;
			}
		}
		{
			uint32_t L_127 = V_9;
			uint32_t L_128 = L_127;
			RuntimeObject* L_129 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_128);
			V_13 = L_129;
			goto IL_0300;
		}

IL_0288_1:
		{
			RuntimeObject* L_130 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_130;
			goto IL_0300;
		}

IL_0292_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___records0;
			NullCheck(L_131);
			if (!(((RuntimeArray*)L_131)->max_length))
			{
				goto IL_02a9_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ___records0;
			NullCheck(L_133);
			int32_t L_134 = 0;
			int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
			NullCheck(L_132);
			int32_t L_136 = L_135;
			uint32_t L_137 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
			uint32_t L_138 = L_137;
			RuntimeObject* L_139 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_138);
			V_13 = L_139;
			goto IL_0300;
		}

IL_02a9_1:
		{
			V_13 = NULL;
			goto IL_0300;
		}

IL_02ae_1:
		{
			V_4 = 0;
			V_20 = 0;
			goto IL_02ce_1;
		}

IL_02b6_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ___records0;
			int32_t L_141 = V_20;
			NullCheck(L_140);
			int32_t L_142 = L_141;
			int32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			bool L_144;
			L_144 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_143, NULL);
			if (!L_144)
			{
				goto IL_02c8_1;
			}
		}
		{
			int32_t L_145 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		}

IL_02c8_1:
		{
			int32_t L_146 = V_20;
			V_20 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		}

IL_02ce_1:
		{
			int32_t L_147 = V_20;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ___records0;
			NullCheck(L_148);
			if ((((int32_t)L_147) < ((int32_t)((int32_t)(((RuntimeArray*)L_148)->max_length)))))
			{
				goto IL_02b6_1;
			}
		}
		{
			int32_t L_149 = V_4;
			int32_t L_150 = L_149;
			RuntimeObject* L_151 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_150);
			V_13 = L_151;
			goto IL_0300;
		}

IL_02e0_1:
		{
			goto IL_02f3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02e2;
		}
		throw e;
	}

CATCH_02e2:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		Exception_t* L_154;
		L_154 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02f3:
	{
		int32_t L_155 = ___kind1;
		Type_t* L_156 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_157;
		L_157 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_155, L_156, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_157, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt32Storage_Aggregate_m53C34B989370378E630691C2D4A91CB5A1D5EC83_RuntimeMethod_var)));
	}

IL_0300:
	{
		RuntimeObject* L_158 = V_13;
		return L_158;
	}
}
// System.Int32 System.Data.Common.UInt32Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32Storage_Compare_mCB3441CD49DEF0E274E74B85A6F9639FAB1A7591 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____values_15;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint32_t L_8 = V_0;
		uint32_t L_9 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_0022;
		}
	}
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0030;
		}
	}

IL_0022:
	{
		int32_t L_12 = ___recordNo10;
		int32_t L_13 = ___recordNo21;
		int32_t L_14;
		L_14 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_12, L_13, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_0030:
	{
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_1;
		if ((!(((uint32_t)L_17) >= ((uint32_t)L_18))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_1;
		if ((!(((uint32_t)L_19) <= ((uint32_t)L_20))))
		{
			goto IL_003a;
		}
	}
	{
		return 0;
	}

IL_003a:
	{
		return 1;
	}

IL_003c:
	{
		return (-1);
	}
}
// System.Int32 System.Data.Common.UInt32Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32Storage_CompareValueTo_mE99C163F7AC7F8271B21A13123F93D399E1274C2 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___recordNo0;
		bool L_3;
		L_3 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint32_t L_8 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_10 = ___recordNo0;
		bool L_11;
		L_11 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___value1;
		int32_t L_13;
		L_13 = UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907((&V_0), ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_12, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		return L_13;
	}
}
// System.Object System.Data.Common.UInt32Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_ConvertValue_mF4598D5DDCA57F47F180B1126C0E8A22E5E495A2 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		uint32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_6);
		___value0 = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value0 = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___value0;
		return L_9;
	}
}
// System.Void System.Data.Common.UInt32Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_Copy_mBDA62FFB81A6F88ADFA3032204805CB19DA2735D (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		int32_t L_1 = ___recordNo21;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		int32_t L_3 = ___recordNo21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_7);
		return;
	}
}
// System.Object System.Data.Common.UInt32Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_Get_m1C06C9C52E6125A9888DF0D8B3DCF6B5C9F28EA1 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->____values_15;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_5;
		L_5 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_0), L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = ___record0;
		RuntimeObject* L_10;
		L_10 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Data.Common.UInt32Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_Set_m843F72E4687BFCE156CE23687B22FD5370A55D39 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		uint32_t L_4 = ((UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_StaticFields*)il2cpp_codegen_static_fields_for(UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_4);
		int32_t L_5 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____values_15;
		int32_t L_7 = ___record0;
		RuntimeObject* L_8 = ___value1;
		RuntimeObject* L_9;
		L_9 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint32_t L_10;
		L_10 = InterfaceFuncInvoker1< uint32_t, RuntimeObject* >::Invoke(8 /* System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)L_10);
		int32_t L_11 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_11, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt32Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_SetCapacity_m504021FCC565D33BF990E4D3378C435146CC4570 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____values_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___capacity0;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt32Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_ConvertXmlToObject_mA482D708EE6EDCBAD37A4535BE53ADE7220C691A (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = XmlConvert_ToUInt32_m1D00F9B52CAFB9CD660C71B741FC8301890D9F1F(L_0, NULL);
		uint32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.UInt32Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32Storage_ConvertObjectToXml_m04AF1550A7C9F44E311B39D32AB881C4B4953D0B (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m8F28EF0133301A563B7A9853C7DBB023491EFE83(((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_0, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.UInt32Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt32Storage_GetEmptyStorage_m1B5B7D4F481E5203AFED7E72BAD3AA521909E7CB (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.UInt32Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_CopyValue_m78C2EEBFC72220EBDDDF4CA2AB0D08870B37176F (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		(((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_8, NULL);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt32Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt32Storage_SetStorage_mD515C18C3AAC48ACDBC974B64DDEF3AFF99B4F19 (UInt32Storage_tE443657FB5A2B5CB890027F5F90788A6EB08A93B* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_15 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___nullbits1;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
// System.Void System.Data.Common.UInt64Storage::.ctor(System.Data.DataColumn)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage__ctor_m4739DB811D5051982C0A46182B1CED3231D3728B (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ___column0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* L_0 = ___column0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		uint64_t L_3 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A_il2cpp_TypeInfo_var);
		DataStorage__ctor_mAA8A3512DB99B1B9A0968A5C1DD9FAB40A56AC15(__this, L_0, L_2, L_5, ((int32_t)12), NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt64Storage::Aggregate(System.Int32[],System.Data.AggregateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___records0, int32_t ___kind1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RuntimeObject* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___kind1;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 4)))
			{
				case 0:
				{
					goto IL_002f_1;
				}
				case 1:
				{
					goto IL_0087_1;
				}
				case 2:
				{
					goto IL_0200_1;
				}
				case 3:
				{
					goto IL_0258_1;
				}
				case 4:
				{
					goto IL_02aa_1;
				}
				case 5:
				{
					goto IL_02c6_1;
				}
				case 6:
				{
					goto IL_0103_1;
				}
				case 7:
				{
					goto IL_0103_1;
				}
			}
		}
		{
			goto IL_02d2_1;
		}

IL_002f_1:
		{
			uint64_t L_1 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			V_1 = L_1;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___records0;
			V_10 = L_2;
			V_11 = 0;
			goto IL_0062_1;
		}

IL_003d_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_10;
			int32_t L_4 = V_11;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_12 = L_6;
			int32_t L_7 = V_12;
			bool L_8;
			L_8 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_7, NULL);
			if (!L_8)
			{
				goto IL_005c_1;
			}
		}
		{
			uint64_t L_9 = V_1;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->____values_15;
			int32_t L_11 = V_12;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			int64_t L_13 = (int64_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			if ((uint64_t)L_9 > kIl2CppUInt64Max - (uint64_t)L_13)
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, L_13));
			V_0 = (bool)1;
		}

IL_005c_1:
		{
			int32_t L_14 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		}

IL_0062_1:
		{
			int32_t L_15 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_10;
			NullCheck(L_16);
			if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
			{
				goto IL_003d_1;
			}
		}
		{
			bool L_17 = V_0;
			if (!L_17)
			{
				goto IL_007a_1;
			}
		}
		{
			uint64_t L_18 = V_1;
			uint64_t L_19 = L_18;
			RuntimeObject* L_20 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_19);
			V_13 = L_20;
			goto IL_02f2;
		}

IL_007a_1:
		{
			RuntimeObject* L_21 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_21;
			goto IL_02f2;
		}

IL_0087_1:
		{
			uint64_t L_22 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23;
			L_23 = Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090(L_22, NULL);
			V_2 = L_23;
			V_3 = 0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___records0;
			V_10 = L_24;
			V_11 = 0;
			goto IL_00ce_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_10;
			int32_t L_26 = V_11;
			NullCheck(L_25);
			int32_t L_27 = L_26;
			int32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
			V_14 = L_28;
			int32_t L_29 = V_14;
			bool L_30;
			L_30 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_29, NULL);
			if (!L_30)
			{
				goto IL_00c8_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_31 = V_2;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = __this->____values_15;
			int32_t L_33 = V_14;
			NullCheck(L_32);
			int32_t L_34 = L_33;
			int64_t L_35 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_36;
			L_36 = Decimal_op_Implicit_mA78C1FC00B4E76A91931998BD4FDE3574A54B090(L_35, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_37;
			L_37 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_31, L_36, NULL);
			V_2 = L_37;
			int32_t L_38 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
			V_0 = (bool)1;
		}

IL_00c8_1:
		{
			int32_t L_39 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		}

IL_00ce_1:
		{
			int32_t L_40 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_10;
			NullCheck(L_41);
			if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
			{
				goto IL_009c_1;
			}
		}
		{
			bool L_42 = V_0;
			if (!L_42)
			{
				goto IL_00f6_1;
			}
		}
		{
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_43 = V_2;
			int32_t L_44 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_45;
			L_45 = Decimal_op_Implicit_mDBA4FB50BAF9CE8B75AA6ED5ABED7F597CB46177(L_44, NULL);
			Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_46;
			L_46 = Decimal_op_Division_mA0BD25988CA8010A3F8EA2F6A534F9F2D812D2AC(L_43, L_45, NULL);
			uint64_t L_47;
			L_47 = Decimal_op_Explicit_m8AC64F6A5010191CE440A31868AAE5E505008F49(L_46, NULL);
			uint64_t L_48 = L_47;
			RuntimeObject* L_49 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_48);
			V_13 = L_49;
			goto IL_02f2;
		}

IL_00f6_1:
		{
			RuntimeObject* L_50 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_50;
			goto IL_02f2;
		}

IL_0103_1:
		{
			V_4 = 0;
			V_5 = (0.0);
			V_6 = (0.0);
			V_7 = (0.0);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___records0;
			V_10 = L_51;
			V_11 = 0;
			goto IL_0178_1;
		}

IL_012f_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_10;
			int32_t L_53 = V_11;
			NullCheck(L_52);
			int32_t L_54 = L_53;
			int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
			V_15 = L_55;
			int32_t L_56 = V_15;
			bool L_57;
			L_57 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_56, NULL);
			if (!L_57)
			{
				goto IL_0172_1;
			}
		}
		{
			double L_58 = V_6;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = __this->____values_15;
			int32_t L_60 = V_15;
			NullCheck(L_59);
			int32_t L_61 = L_60;
			int64_t L_62 = (int64_t)(L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
			V_6 = ((double)il2cpp_codegen_add(L_58, ((double)((double)(uint64_t)L_62))));
			double L_63 = V_7;
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = __this->____values_15;
			int32_t L_65 = V_15;
			NullCheck(L_64);
			int32_t L_66 = L_65;
			int64_t L_67 = (int64_t)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_68 = __this->____values_15;
			int32_t L_69 = V_15;
			NullCheck(L_68);
			int32_t L_70 = L_69;
			int64_t L_71 = (int64_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
			V_7 = ((double)il2cpp_codegen_add(L_63, ((double)il2cpp_codegen_multiply(((double)((double)(uint64_t)L_67)), ((double)((double)(uint64_t)L_71))))));
			int32_t L_72 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		}

IL_0172_1:
		{
			int32_t L_73 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		}

IL_0178_1:
		{
			int32_t L_74 = V_11;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_10;
			NullCheck(L_75);
			if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
			{
				goto IL_012f_1;
			}
		}
		{
			int32_t L_76 = V_4;
			if ((((int32_t)L_76) <= ((int32_t)1)))
			{
				goto IL_01f3_1;
			}
		}
		{
			int32_t L_77 = V_4;
			double L_78 = V_7;
			double L_79 = V_6;
			double L_80 = V_6;
			V_5 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)L_77), L_78)), ((double)il2cpp_codegen_multiply(L_79, L_80))));
			double L_81 = V_5;
			double L_82 = V_6;
			double L_83 = V_6;
			if ((((double)((double)(L_81/((double)il2cpp_codegen_multiply(L_82, L_83))))) < ((double)(1.0000000000000001E-15))))
			{
				goto IL_01b3_1;
			}
		}
		{
			double L_84 = V_5;
			if ((!(((double)L_84) < ((double)(0.0)))))
			{
				goto IL_01c0_1;
			}
		}

IL_01b3_1:
		{
			V_5 = (0.0);
			goto IL_01cd_1;
		}

IL_01c0_1:
		{
			double L_85 = V_5;
			int32_t L_86 = V_4;
			int32_t L_87 = V_4;
			V_5 = ((double)(L_85/((double)((int32_t)il2cpp_codegen_multiply(L_86, ((int32_t)il2cpp_codegen_subtract(L_87, 1)))))));
		}

IL_01cd_1:
		{
			int32_t L_88 = ___kind1;
			if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)11)))))
			{
				goto IL_01e5_1;
			}
		}
		{
			double L_89 = V_5;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			double L_90;
			L_90 = sqrt(L_89);
			double L_91 = L_90;
			RuntimeObject* L_92 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_91);
			V_13 = L_92;
			goto IL_02f2;
		}

IL_01e5_1:
		{
			double L_93 = V_5;
			double L_94 = L_93;
			RuntimeObject* L_95 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_94);
			V_13 = L_95;
			goto IL_02f2;
		}

IL_01f3_1:
		{
			RuntimeObject* L_96 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_96;
			goto IL_02f2;
		}

IL_0200_1:
		{
			V_8 = ((int64_t)(-1));
			V_16 = 0;
			goto IL_0233_1;
		}

IL_0209_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ___records0;
			int32_t L_98 = V_16;
			NullCheck(L_97);
			int32_t L_99 = L_98;
			int32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
			V_17 = L_100;
			int32_t L_101 = V_17;
			bool L_102;
			L_102 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_101, NULL);
			if (!L_102)
			{
				goto IL_022d_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = __this->____values_15;
			int32_t L_104 = V_17;
			NullCheck(L_103);
			int32_t L_105 = L_104;
			int64_t L_106 = (int64_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
			uint64_t L_107 = V_8;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint64_t L_108;
			L_108 = Math_Min_m1C589BAB3D638CE6D3A29E552EDB5E9F95856C28(L_106, L_107, NULL);
			V_8 = L_108;
			V_0 = (bool)1;
		}

IL_022d_1:
		{
			int32_t L_109 = V_16;
			V_16 = ((int32_t)il2cpp_codegen_add(L_109, 1));
		}

IL_0233_1:
		{
			int32_t L_110 = V_16;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = ___records0;
			NullCheck(L_111);
			if ((((int32_t)L_110) < ((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length)))))
			{
				goto IL_0209_1;
			}
		}
		{
			bool L_112 = V_0;
			if (!L_112)
			{
				goto IL_024b_1;
			}
		}
		{
			uint64_t L_113 = V_8;
			uint64_t L_114 = L_113;
			RuntimeObject* L_115 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_114);
			V_13 = L_115;
			goto IL_02f2;
		}

IL_024b_1:
		{
			RuntimeObject* L_116 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_116;
			goto IL_02f2;
		}

IL_0258_1:
		{
			V_9 = ((int64_t)0);
			V_18 = 0;
			goto IL_028b_1;
		}

IL_0261_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ___records0;
			int32_t L_118 = V_18;
			NullCheck(L_117);
			int32_t L_119 = L_118;
			int32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			V_19 = L_120;
			int32_t L_121 = V_19;
			bool L_122;
			L_122 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_121, NULL);
			if (!L_122)
			{
				goto IL_0285_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = __this->____values_15;
			int32_t L_124 = V_19;
			NullCheck(L_123);
			int32_t L_125 = L_124;
			int64_t L_126 = (int64_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
			uint64_t L_127 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
			uint64_t L_128;
			L_128 = Math_Max_m904B9911C775943500AA17842F6D3D45010EAB4A(L_126, L_127, NULL);
			V_9 = L_128;
			V_0 = (bool)1;
		}

IL_0285_1:
		{
			int32_t L_129 = V_18;
			V_18 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		}

IL_028b_1:
		{
			int32_t L_130 = V_18;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_131 = ___records0;
			NullCheck(L_131);
			if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
			{
				goto IL_0261_1;
			}
		}
		{
			bool L_132 = V_0;
			if (!L_132)
			{
				goto IL_02a0_1;
			}
		}
		{
			uint64_t L_133 = V_9;
			uint64_t L_134 = L_133;
			RuntimeObject* L_135 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_134);
			V_13 = L_135;
			goto IL_02f2;
		}

IL_02a0_1:
		{
			RuntimeObject* L_136 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
			V_13 = L_136;
			goto IL_02f2;
		}

IL_02aa_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ___records0;
			NullCheck(L_137);
			if (!(((RuntimeArray*)L_137)->max_length))
			{
				goto IL_02c1_1;
			}
		}
		{
			UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_138 = __this->____values_15;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = ___records0;
			NullCheck(L_139);
			int32_t L_140 = 0;
			int32_t L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
			NullCheck(L_138);
			int32_t L_142 = L_141;
			int64_t L_143 = (int64_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
			uint64_t L_144 = ((uint64_t)L_143);
			RuntimeObject* L_145 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_144);
			V_13 = L_145;
			goto IL_02f2;
		}

IL_02c1_1:
		{
			V_13 = NULL;
			goto IL_02f2;
		}

IL_02c6_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_146 = ___records0;
			int32_t L_147 = ___kind1;
			RuntimeObject* L_148;
			L_148 = DataStorage_Aggregate_m634D6B5F30B4F3ECAA6A42247BE98739655F00A2(__this, L_146, L_147, NULL);
			V_13 = L_148;
			goto IL_02f2;
		}

IL_02d2_1:
		{
			goto IL_02e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d4;
		}
		throw e;
	}

CATCH_02d4:
	{// begin catch(System.OverflowException)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (((RuntimeType*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var))) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		Exception_t* L_151;
		L_151 = ExprException_Overflow_mEFD4E8C2E614A12E5306E09DB56895B3235E12F9(L_150, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_151, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_02e5:
	{
		int32_t L_152 = ___kind1;
		Type_t* L_153 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____dataType_3;
		Exception_t* L_154;
		L_154 = ExceptionBuilder_AggregateException_mB6E3ED4EF262EE80D0AE549BA32165C62AC18095(L_152, L_153, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_154, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64Storage_Aggregate_mF7D808CBBD794802EF4D51801AF8F33E416CA5C0_RuntimeMethod_var)));
	}

IL_02f2:
	{
		RuntimeObject* L_155 = V_13;
		return L_155;
	}
}
// System.Int32 System.Data.Common.UInt64Storage::Compare(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64Storage_Compare_m497C8877F483A956A5CE14BC12DBCAD11B5326D0 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->____values_15;
		int32_t L_1 = ___recordNo10;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_9;
		L_9 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_0), L_8, NULL);
		if (L_9)
		{
			goto IL_002e;
		}
	}
	{
		uint64_t L_10 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_11;
		L_11 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_1), L_10, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}

IL_002e:
	{
		int32_t L_12 = ___recordNo10;
		int32_t L_13 = ___recordNo21;
		int32_t L_14;
		L_14 = DataStorage_CompareBits_m12F2D84F79985F0DE117DBA50E12083E0453AF11(__this, L_12, L_13, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_003c:
	{
		uint64_t L_17 = V_0;
		uint64_t L_18 = V_1;
		if ((!(((uint64_t)L_17) >= ((uint64_t)L_18))))
		{
			goto IL_0048;
		}
	}
	{
		uint64_t L_19 = V_0;
		uint64_t L_20 = V_1;
		if ((!(((uint64_t)L_19) <= ((uint64_t)L_20))))
		{
			goto IL_0046;
		}
	}
	{
		return 0;
	}

IL_0046:
	{
		return 1;
	}

IL_0048:
	{
		return (-1);
	}
}
// System.Int32 System.Data.Common.UInt64Storage::CompareValueTo(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64Storage_CompareValueTo_m4631012F79D00A6F50308FA080619A065037CECE (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___recordNo0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___recordNo0;
		bool L_3;
		L_3 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		return 1;
	}

IL_0016:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint64_t L_8 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		uint64_t L_9 = V_0;
		if ((!(((uint64_t)L_8) == ((uint64_t)L_9))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_10 = ___recordNo0;
		bool L_11;
		L_11 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_10, NULL);
		if (L_11)
		{
			goto IL_0032;
		}
	}
	{
		return (-1);
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___value1;
		int32_t L_13;
		L_13 = UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745((&V_0), ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_12, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return L_13;
	}
}
// System.Object System.Data.Common.UInt64Storage::ConvertValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_ConvertValue_m9C2327BEE08C36F8C9595857ACF1B9DE225B7FD6 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value0;
		if ((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = ___value0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = ___value0;
		RuntimeObject* L_4;
		L_4 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint64_t L_5;
		L_5 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_3, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_4);
		uint64_t L_6 = L_5;
		RuntimeObject* L_7 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_6);
		___value0 = L_7;
		goto IL_002e;
	}

IL_0026:
	{
		RuntimeObject* L_8 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		___value0 = L_8;
	}

IL_002e:
	{
		RuntimeObject* L_9 = ___value0;
		return L_9;
	}
}
// System.Void System.Data.Common.UInt64Storage::Copy(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_Copy_m5970161F804C215F152AC08CFAAC9F360CE8AE05 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___recordNo10, int32_t ___recordNo21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___recordNo10;
		int32_t L_1 = ___recordNo21;
		DataStorage_CopyBits_mDE323292458441AADEA29C754EC69E14C7BF692A(__this, L_0, L_1, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		int32_t L_3 = ___recordNo21;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = __this->____values_15;
		int32_t L_5 = ___recordNo10;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)L_7);
		return;
	}
}
// System.Object System.Data.Common.UInt64Storage::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_Get_m18070C4F819E03907B671EEDCD1477A066A4451B (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___record0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->____values_15;
		int32_t L_1 = ___record0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint64_t L_4 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		bool L_5;
		L_5 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&V_0), L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject* L_8 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_001e:
	{
		int32_t L_9 = ___record0;
		RuntimeObject* L_10;
		L_10 = DataStorage_GetBits_m9A6235952966231AEBE5D49A384F0E481143B943(__this, L_9, NULL);
		return L_10;
	}
}
// System.Void System.Data.Common.UInt64Storage::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_Set_mA5D71A68380191891CDCA959391EC0CE8F63141E (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___record0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A*)__this)->____nullValue_7;
		RuntimeObject* L_1 = ___value1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		uint64_t L_4 = ((UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_StaticFields*)il2cpp_codegen_static_fields_for(UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B_il2cpp_TypeInfo_var))->___s_defaultValue_14;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)L_4);
		int32_t L_5 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_5, (bool)1, NULL);
		return;
	}

IL_001f:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____values_15;
		int32_t L_7 = ___record0;
		RuntimeObject* L_8 = ___value1;
		RuntimeObject* L_9;
		L_9 = DataStorage_get_FormatProvider_m728192CD502A44256E2EC7C5BD87F00CAE8D936E(__this, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)));
		uint64_t L_10;
		L_10 = InterfaceFuncInvoker1< uint64_t, RuntimeObject* >::Invoke(10 /* System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider) */, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IConvertible_tC7F4E6F8CAA007182834D242AEDB0F0E09C09515_il2cpp_TypeInfo_var)), L_9);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint64_t)L_10);
		int32_t L_11 = ___record0;
		DataStorage_SetNullBit_mECE3F0CDE43109D689F4AE4ED41B199834368C77(__this, L_11, (bool)0, NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt64Storage::SetCapacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_SetCapacity_m321FBB2BE52F0F24163A34FF33F264E46B3E34A2 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		int32_t L_0 = ___capacity0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->____values_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		int32_t L_5 = ___capacity0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->____values_15;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_7, NULL);
	}

IL_002b:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_0;
		__this->____values_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)L_8);
		int32_t L_9 = ___capacity0;
		DataStorage_SetCapacity_mD2192E5FBE28047DA48226D2A51A6738BB489789(__this, L_9, NULL);
		return;
	}
}
// System.Object System.Data.Common.UInt64Storage::ConvertXmlToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_ConvertXmlToObject_m6629CD6A07D80A6DE52B879F1FE263950C0165B6 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = XmlConvert_ToUInt64_m3EDAB359CE90486CEEF0F718D15C131ED2FF2C0A(L_0, NULL);
		uint64_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.String System.Data.Common.UInt64Storage::ConvertObjectToXml(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64Storage_ConvertObjectToXml_m67EC50C8F8508499572151B251324490449EA539 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XmlConvert_ToString_m9A1A9D40FD8B650DD3EC4DD58410847A20C472E1(((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_0, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
		return L_1;
	}
}
// System.Object System.Data.Common.UInt64Storage::GetEmptyStorage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UInt64Storage_GetEmptyStorage_mBBC649FCA8A68A813B02A292256AB5F5667B3EBB (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___recordCount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___recordCount0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Void System.Data.Common.UInt64Storage::CopyValue(System.Int32,System.Object,System.Collections.BitArray,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_CopyValue_m012F86C308F9BDB66FD66B0C9EEC8685E90A56A2 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, int32_t ___record0, RuntimeObject* ___store1, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits2, int32_t ___storeIndex3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store1;
		int32_t L_1 = ___storeIndex3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->____values_15;
		int32_t L_3 = ___record0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)));
		(((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)))->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_6 = ___nullbits2;
		int32_t L_7 = ___storeIndex3;
		int32_t L_8 = ___record0;
		bool L_9;
		L_9 = DataStorage_HasValue_mED2608BA354D5BB359DF6D1FBB1ACB75DA6A89AB(__this, L_8, NULL);
		NullCheck(L_6);
		BitArray_Set_mD452B16815753735F06756C89A0845EA8F481D13(L_6, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
// System.Void System.Data.Common.UInt64Storage::SetStorage(System.Object,System.Collections.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UInt64Storage_SetStorage_mB462A195F4ECBF6D7DCC0A0D56D96B3F52ACFDB5 (UInt64Storage_t68ED94D155B4DC8ED4AB06F0018867A3A1B0709B* __this, RuntimeObject* ___store0, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___store0;
		__this->____values_15 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values_15), (void*)((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)));
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_1 = ___nullbits1;
		DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline(__this, L_1, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataStorage_SetNullStorage_mCC0FB7BAAD3C02EF497B786D9EF56A7714891EC7_inline (DataStorage_t862E6C556F9F1FB0BA5A4F51D926C40944A1EC7A* __this, BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* ___nullbits0, const RuntimeMethod* method) 
{
	{
		BitArray_tFD42FDEB4A51DD2D6C20DC8E220B1EBE999F2616* L_0 = ___nullbits0;
		__this->____dbNullBits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dbNullBits_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Math_Round_mC44B363AC94B1B8DCB093A770B5C11E22F5A583E_inline (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Decimal_Round_m1DD2AAA2C9C8D2A1CDA6ECCC2724A075616FF624(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___ticks0;
		__this->____ticks_22 = L_0;
		return;
	}
}
